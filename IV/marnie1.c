void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U196 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 0;
    l_U200 = 0;
    l_U201 = 0;
    l_U202 = 0;
    l_U204 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 1;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U232 = 0;
    l_U237 = 1;
    l_U238 = 1000;
    l_U239 = 1;
    l_U267 = 47;
    l_U268 = 234.91330000;
    l_U269 = 1;
    l_U270 = 0;
    l_U272 = 0;
    l_U286 = 0;
    l_U289 = 0;
    l_U290 = 0;
    l_U291 = 0;
    l_U293 = 0;
    if (sub_342( l_U267, l_U237 ))
    {
        if (IS_PLAYER_PLAYING( sub_1043() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1043(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1122( ref l_U243, 0 );
                    sub_1246();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U202)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (IS_SCORE_GREATER( sub_1043(), 1 ))
                            {
                                if (sub_2142())
                                {
                                    WAIT( 0 );
                                }
                                else if (g_U10978)
                                {
                                    sub_1246();
                                }
                                if (NOT sub_2290())
                                {
                                    sub_1246();
                                }
                                switch (l_U197)
                                {
                                    case 0:
                                    sub_2375();
                                    break;
                                    case 1:
                                    sub_3640();
                                    break;
                                }
                            }
                            else
                            {
                                sub_1246();
                            }
                        }
                        else
                        {
                            sub_1246();
                        }
                        sub_9267();
                    }
                    if (l_U202)
                    {
                        switch (l_U198)
                        {
                            case 0:
                            sub_9383();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2023() )))
                {
                    if (sub_3841() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U215, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1246();;
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_342(unknown uParam0, unknown uParam1)
{
    if (sub_351())
    {
        return 0;
    }
    return sub_398( uParam0, uParam1 );
}

int sub_351()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_398(unknown uParam0, int iParam1)
{
    unknown uVar4;

    if (NOT g_U34175._fU0)
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    uVar4 = sub_442( uParam0 );
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU4)
    {
        return 0;
    }
    if (g_U9893._fU4)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        if (sub_719( g_U34048[uVar4]._fU8 ))
        {
            g_U34048[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        return 0;
    }
    return g_U34048[uVar4]._fU28 == iParam1;
}

int sub_442(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_453( uParam0 )))
    {
        sub_562( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_453(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_562(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar6 == uParam0._fU0._fU0) AND (iVar7 == uParam0._fU0._fU4))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_888( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_888(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1043()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1122(int iParam0, unknown uParam1)
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

void sub_1246()
{
    if (sub_1265( l_U267, l_U237 ))
    {
        sub_1361( l_U267, l_U237 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1043() ))
        {
            SET_PLAYER_CONTROL( sub_1043(), 1 );
        }
        sub_1831();
    }
    if (DOES_CHAR_EXIST( l_U215 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U215 )))
        {
            FREEZE_CHAR_POSITION( l_U215, 0 );
            CLEAR_CHAR_TASKS( l_U215 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U215 );
        }
    }
    CLEAR_NAMED_CUTSCENE( "rpmar1" );
    REMOVE_BLIP( l_U218 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U215 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    l_U215 = nil;
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2023(), 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1265(int iParam0, int iParam1)
{
    if (NOT g_U34175._fU4)
    {
        return 0;
    }
    if (NOT (g_U34175._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U34175._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_1361(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1265( uParam0, uParam1 )))
    {
        sub_562( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1457();
    if (g_U813)
    {
        sub_1549();
    }
    else
    {
        sub_1667();
    }
    g_U10978 = 0;
    return;
}

void sub_1457()
{
    if (g_U0)
    {
        g_U34175._fU0 = 0;
    }
    else
    {
        g_U34175._fU0 = 1;
    }
    g_U34175._fU4 = 0;
    g_U34175._fU8 = 54;
    g_U34175._fU12 = 0;
    return;
}

void sub_1549()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1595();
    return;
}

void sub_1595()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1667()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1713();
    return;
}

void sub_1713()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1831()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2023()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2142()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2023(), ref l_U217 );
        if (NOT (l_U217 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U217 ))
            {
                GET_CAR_SPEED( l_U217, ref l_U234 );
                if (l_U234 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2290()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_2375()
{
    switch (l_U196)
    {
        case 0:
        l_U220 = {-164.30640000, -429.52690000, 13.49990000};
        l_U235 = 411185872;
        REQUEST_MODEL( l_U235 );
        REQUEST_ANIMS( "missmarnie" );
        while (NOT (HAS_MODEL_LOADED( l_U235 )))
        {
            WAIT( 0 );
        }
        while (NOT (HAVE_ANIMS_LOADED( "missmarnie" )))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U241 );
        TASK_PLAY_ANIM_SECONDARY( 0, "wasted_seated", "missmarnie", 12.00000000, 1, 1, 1, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U241 );
        OPEN_SEQUENCE_TASK( ref l_U242 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1280.78100000, 820.59150000, 18.73690000, 3, -2, 1.50000000 );
        CLOSE_SEQUENCE_TASK( l_U242 );
        l_U196 = 1;
        break;
        case 1:
        if (HAVE_ANIMS_LOADED( "missmarnie" ))
        {
            l_U203 = 1;
        }
        if (NOT l_U204)
        {
            CLEAR_AREA( l_U220._fU0, l_U220._fU4, l_U220._fU8, 15.00000000, 1 );
            SWITCH_PED_PATHS_OFF( l_U220._fU0 - 5.00000000, l_U220._fU4 - 5.00000000, l_U220._fU8 - 5.00000000, l_U220._fU0 + 5.00000000, l_U220._fU4 + 5.00000000, l_U220._fU8 + 5.00000000 );
            CREATE_CHAR( 26, l_U235, l_U220._fU0, l_U220._fU4, l_U220._fU8 - 1, ref l_U215, 1 );
            SET_CHAR_HEADING( l_U215, l_U268 );
            SET_CHAR_NEVER_TARGETTED( l_U215, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U215, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U215, 1 );
            if (NOT (IS_CHAR_INJURED( l_U215 )))
            {
                TASK_SIT_DOWN_INSTANTLY( l_U215, 2, 0, -2 );
                SET_CHAR_COORDINATES( l_U215, l_U220._fU0, l_U220._fU4, 13.51000000 );
                l_U204 = 1;
            }
        }
        else
        {
            sub_3026( "PIMAAUD" );
            sub_3145( 0, sub_2023(), "NIKO", 0 );
            sub_3145( 1, l_U215, "PI_MARLENE", 0 );
            if (NOT (IS_CHAR_INJURED( l_U215 )))
            {
                if (IS_CHAR_SITTING_IDLE( l_U215 ))
                {
                    CHANGE_CHAR_SIT_IDLE_ANIM( l_U215, "missmarnie", "wasted_seated", 1 );
                }
            }
        }
        if (NOT (DOES_BLIP_EXIST( l_U218 )))
        {
            ADD_BLIP_FOR_CHAR( l_U215, ref l_U218 );
            CHANGE_BLIP_SPRITE( l_U218, 64 );
            SET_BLIP_AS_FRIENDLY( l_U218, 1 );
            CHANGE_BLIP_SCALE( l_U218, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U218, 2 );
        }
        if ((l_U204) AND (l_U203))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U215 )))
            {
                CLEAR_AREA( l_U220._fU0, l_U220._fU4, l_U220._fU8, 10.00000000, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U215 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U215, "missmarnie", "wasted_seated" ))
                {
                    l_U197 = 1;
                }
            }
        }
        break;
    }
    return;
}

void sub_3026(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_3043();
    return;
}

void sub_3043()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_3145(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3225( "\n PED NUMBER ", uParam0 );
    sub_3265( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3225(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3265(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3640()
{
    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U215, sub_2023(), 0 )) || (IS_CHAR_INJURED( l_U215 )))
    {
        sub_1122( ref l_U255, 0 );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U215, 0, 0, 0 );
        }
        sub_1246();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2023(), ref l_U217 );
        if (NOT (l_U217 == l_U216))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U216 );
            l_U216 = l_U217;
            SET_CAR_AS_MISSION_CAR( l_U216 );
            SET_VEH_HAS_STRONG_AXLES( l_U216, 1 );
        }
    }
    if ((IS_CHAR_ON_FOOT( sub_2023() )) AND (sub_3841() < 25))
    {
        sub_4079( ref l_U215, ref l_U271, ref l_U220, ref l_U268, ref l_U272, 1.10000000, "wasted_seated", "missMARNIE", 0, 1 );
    }
    switch (l_U199)
    {
        case 0:
        if ((IS_WANTED_LEVEL_GREATER( sub_1043(), 0 )) || ((IS_CHAR_ON_FIRE( l_U215 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U215, sub_2023(), 0 )) || (IS_CHAR_INJURED( l_U215 )))))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1043(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2023() )))
                {
                    if (sub_3841() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U215, 0, 0, 0 );
            }
            sub_1246();
        }
        if (NOT (IS_CHAR_INJURED( l_U215 )))
        {
            if ((IS_CHAR_ON_FOOT( sub_2023() )) AND (sub_3841() < 18))
            {
                if ((NOT l_U270) AND (NOT IS_HINT_RUNNING()))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U215, 0, 0, 6000 );
                    l_U270 = 1;
                }
                l_U199 = 1;
            }
        }
        break;
        case 1:
        if ((IS_WANTED_LEVEL_GREATER( sub_1043(), 0 )) || ((IS_CHAR_ON_FIRE( l_U215 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U215, sub_2023(), 0 )) || (IS_CHAR_INJURED( l_U215 )))))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1043(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2023() )))
                {
                    if (sub_3841() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U215, 0, 0, 0 );
            }
            sub_1246();
        }
        if (l_U269)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_4974( "PIMA_BENCH", ref l_U255, 4, 1 );
                SETTIMERA( 0 );
                l_U269 = 0;
            }
        }
        else if (TIMERA() > 4500)
        {
            GENERATE_RANDOM_INT_IN_RANGE( l_U239, l_U238, ref l_U240 );
            if (l_U240 > 970)
            {
                l_U269 = 1;
            }
        }
        if (sub_3841() < 4.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2023() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U215 )))
                {
                    if (sub_6064( 1, 1 ))
                    {
                        if (sub_6064( 1, 1 ))
                        {
                            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U215, sub_2023(), 0 )))
                            {
                                if (NOT (IS_CHAR_ON_FIRE( l_U215 )))
                                {
                                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_1043(), 0 )))
                                    {
                                        if (sub_2290())
                                        {
                                            SET_MISSION_FLAG( 1 );
                                            sub_1122( ref l_U255, 0 );
                                            SET_PLAYER_CONTROL( sub_1043(), 0 );
                                            DO_SCREEN_FADE_OUT( 100 );
                                            while (NOT IS_SCREEN_FADED_OUT())
                                            {
                                                WAIT( 0 );
                                            }
                                            CLEAR_AREA( -164.32530000, -430.33370000, 14.02500000, 25.00000000, 1 );
                                            LOAD_SCENE( l_U220._fU0, l_U220._fU4, l_U220._fU8 );
                                            l_U199 = 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3841() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U215, 0, 0, 0 );
            }
            sub_1122( ref l_U255, 1 );
            l_U199 = 0;
        }
        break;
        case 2:
        CLEAR_WANTED_LEVEL( sub_1043() );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U215, 0, 0, 0 );
        }
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PIMAAUD", 6 );
        sub_6729();
        CLEAR_NAMED_CUTSCENE( "rpmar1" );
        START_CUTSCENE_NOW( "rpmar1" );
        SET_GROUP_SEPARATION_RANGE( sub_6871(), 30.00000000 );
        sub_6934( l_U267, l_U237 );
        l_U202 = 1;
        break;
    }
    return;
}

void sub_3841()
{
    if (NOT (IS_CHAR_DEAD( l_U215 )))
    {
        GET_CHAR_COORDINATES( sub_2023(), ref l_U223._fU0, ref l_U223._fU4, ref l_U223._fU8 );
        GET_CHAR_COORDINATES( l_U215, ref l_U226._fU0, ref l_U226._fU4, ref l_U226._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U223._fU0, l_U223._fU4, l_U223._fU8, l_U226._fU0, l_U226._fU4, l_U226._fU8, ref l_U232 );
        return l_U232;
    }
    return l_U232;
}

void sub_4079(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
{
    int iVar12;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8 );
                OPEN_SEQUENCE_TASK( uParam1 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_ACHIEVE_HEADING( 0, (uParam3^) );
                CLOSE_SEQUENCE_TASK( (uParam1^) );
                TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
                CLEAR_SEQUENCE_TASK( (uParam1^) );
                (uParam4^) = 1;
            }
        }
        else
        {
            PRINTSTRING( "fail 0" );
            PRINTNL();
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar12 );
            if (iVar12 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                if (bParam9)
                {
                    TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                }
                (uParam4^) = 0;
                if (bParam8)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
                }
            }
        }
    }
    return;
}

void sub_4974(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4995( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_4995(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_5049( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_5049(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_5071( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_5759( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_5071(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5148( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_5148( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_5148( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_5148(unknown uParam0)
{
    return;
}

void sub_5759(int iParam0, int iParam1)
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

int sub_6064(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2023(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2023(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2023()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2023() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1043() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1043() )))
    {
        return 0;
    }
    return 1;
}

void sub_6729()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_6871()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_6934(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_562( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_442( uParam0 );
    if (g_U34175._fU4)
    {
        sub_562( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U34048[uVar4]._fU0 = 1;
        g_U34048[uVar4]._fU4 = 1;
        g_U34048[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        sub_562( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_7297();
    sub_8068( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8212( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7297()
{
    sub_7306();
    sub_7409( ref g_U9893._fU68 );
    sub_7458();
    return;
}

void sub_7306()
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

void sub_7409(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7458()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7496( 1, g_U569[I] )) == 0)
        {
            sub_7747( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7925())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7496(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7747(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7832( g_U569 - 1 );
    return;
}

void sub_7832(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7925()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7496( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8068(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_8102();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_8102()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_8212(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 38:
        StrCopy( ref cVar4, "BADMAN", 16 );
        iVar8 = 1;
        break;
        case 39:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 3;
        break;
        case 40:
        StrCopy( ref cVar4, "CHERISE", 16 );
        iVar8 = 1;
        break;
        case 41:
        StrCopy( ref cVar4, "EDDIE", 16 );
        iVar8 = 2;
        break;
        case 42:
        StrCopy( ref cVar4, "GRACIE", 16 );
        iVar8 = 1;
        break;
        case 43:
        StrCopy( ref cVar4, "HOSSAN", 16 );
        iVar8 = 1;
        break;
        case 44:
        StrCopy( ref cVar4, "ILYENA", 16 );
        iVar8 = 1;
        break;
        case 45:
        StrCopy( ref cVar4, "IVAN", 16 );
        iVar8 = 1;
        break;
        case 46:
        StrCopy( ref cVar4, "JEFF", 16 );
        iVar8 = 3;
        break;
        case 47:
        StrCopy( ref cVar4, "MARNIE", 16 );
        iVar8 = 2;
        break;
        case 48:
        StrCopy( ref cVar4, "CLARENCE", 16 );
        iVar8 = 1;
        break;
        case 49:
        StrCopy( ref cVar4, "MEL", 16 );
        iVar8 = 1;
        break;
        case 50:
        StrCopy( ref cVar4, "PATHOS", 16 );
        iVar8 = 2;
        break;
        case 51:
        StrCopy( ref cVar4, "SARA", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_9058( cVar4 );
    return;
}

void sub_9058(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

int sub_9267()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_2142()) || (sub_3841() > 30))
        {
            HINT_CAM( l_U220._fU0, l_U220._fU4, l_U220._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_9383()
{
    if (IS_CHAR_DEAD( l_U215 ))
    {
        PRINT_NOW( "MRN1_PMT41", 7500, 1 );
        sub_1122( ref l_U243, 0 );
        sub_1122( ref l_U261, 0 );
        sub_9462( 47, l_U215, 28 );
        sub_9512();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2023(), ref l_U217 );
        if (NOT (l_U217 == l_U216))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U216 );
            l_U216 = l_U217;
            SET_VEH_HAS_STRONG_AXLES( l_U216, 1 );
        }
    }
    if (l_U211)
    {
        if (NOT (IS_CHAR_INJURED( sub_2023() )))
        {
            if (IS_VEH_DRIVEABLE( l_U216 ))
            {
                if (IS_CHAR_IN_CAR( sub_2023(), l_U216 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U215 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U215, l_U216 ))
                        {
                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                            {
                                if (g_U64738 == 0)
                                {
                                    if (sub_9907( l_U243 ))
                                    {
                                        sub_9952( "PIMA_BANT1", ref l_U243, 6, 1 );
                                    }
                                }
                                else if (g_U64738 == 1)
                                {
                                    if (sub_9907( l_U243 ))
                                    {
                                        sub_9952( "PIMA_BANT2", ref l_U243, 6, 1 );
                                    }
                                }
                            }
                            l_U208 = 1;
                        }
                        else if (sub_10140( l_U243 ))
                        {
                            sub_10311( ref l_U243 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U215 )))
                {
                    if (IS_CHAR_IN_CAR( l_U215, l_U216 ))
                    {
                        if (sub_10140( l_U243 ))
                        {
                            sub_10311( ref l_U243 );
                        }
                    }
                    else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (sub_3841() < 10.00000000)
                        {
                            if (g_U64738 == 0)
                            {
                                if (sub_9907( l_U243 ))
                                {
                                    sub_9952( "PIMA_BANT1", ref l_U243, 6, 1 );
                                }
                            }
                            else if (g_U64738 == 1)
                            {
                                if (sub_9907( l_U243 ))
                                {
                                    sub_9952( "PIMA_BANT2", ref l_U243, 6, 1 );
                                }
                            }
                        }
                        else if (sub_10140( l_U243 ))
                        {
                            sub_10311( ref l_U243 );
                        }
                    }
                }
            }
        }
    }
    if (l_U213)
    {
        if (NOT (IS_CHAR_INJURED( l_U215 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U215, sub_6871() )))
            {
                l_U211 = 0;
                if (DOES_BLIP_EXIST( l_U218 ))
                {
                    if (sub_3841() < 12.00000000)
                    {
                        REMOVE_BLIP( l_U218 );
                        if (NOT (IS_CHAR_INJURED( l_U215 )))
                        {
                            SET_GROUP_MEMBER( sub_6871(), l_U215 );
                            l_U211 = 1;
                            if ((NOT (IS_CHAR_IN_ANY_CAR( sub_2023() ))) AND (NOT (IS_CHAR_INJURED( sub_2023() ))))
                            {
                                if (NOT l_U286)
                                {
                                    PRINT( "MRN1_PMT3", 7500, 1 );
                                    l_U286 = 1;
                                }
                            }
                            l_U286 = 0;
                            if (NOT (DOES_BLIP_EXIST( l_U219 )))
                            {
                                ADD_BLIP_FOR_COORD( -1266.54700000, 821.05270000, 18.56210000, ref l_U219 );
                                SET_ROUTE( l_U219, 1 );
                            }
                            CLEAR_PRINTS();
                            PRINT( "MRN1_PMT91", 7500, 1 );
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U219 ))
                {
                    REMOVE_BLIP( l_U219 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U218 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U215, ref l_U218 );
                    SET_ROUTE( l_U218, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U218, 1 );
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "MRN1_PMT11" )))
                {
                    CLEAR_PRINTS();
                    PRINT( "MRN1_PMT11", 7500, 1 );
                }
            }
        }
    }
    switch (l_U200)
    {
        case 0:
        CLEAR_HELP();
        REMOVE_BLIP( l_U218 );
        if (DOES_VEHICLE_EXIST( l_U216 ))
        {
            if (IS_VEH_DRIVEABLE( l_U216 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U216 );
                SET_CAR_COORDINATES( l_U216, -173.46990000, -444.46260000, 13.27800000 );
                SET_CAR_HEADING( l_U216, 31.64540000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U216 );
                SET_CAR_IN_CUTSCENE( l_U216, 1 );
            }
        }
        DELETE_CHAR( ref l_U215 );
        GET_CHAR_COORDINATES( sub_2023(), ref l_U223._fU0, ref l_U223._fU4, ref l_U223._fU8 );
        GET_CHAR_HEADING( sub_2023(), ref l_U233 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rpmar1" );
        CREATE_CHAR( 26, l_U235, -165.52580000, -432.39040000, 13.52590000, ref l_U215, 1 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U215, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U215, 10.00000000 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2023(), 0 );
        SET_CHAR_HEADING( l_U215, 214.42150000 );
        SET_PED_DIES_WHEN_INJURED( l_U215, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U215, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U215, 1 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U215, 0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U235 );
        SET_CHAR_COORDINATES( sub_2023(), -164.63100000, -434.57780000, 13.55810000 );
        SET_CHAR_HEADING( sub_2023(), 100.00000000 );
        SET_CHAR_NEVER_TARGETTED( l_U215, 1 );
        sub_3026( "PIMAAUD" );
        sub_3145( 0, sub_2023(), "NIKO", 0 );
        sub_3145( 1, l_U215, "PI_MARLENE", 0 );
        LOAD_ADDITIONAL_TEXT( "WI_MRNI", 0 );
        l_U200 = 1;
        break;
        case 1:
        SET_CAM_BEHIND_PED( sub_2023() );
        SET_PLAYER_CONTROL_ADVANCED( sub_1043(), 1, 1, 1 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U220._fU0 - 5.00000000, l_U220._fU4 - 5.00000000, l_U220._fU8 - 5.00000000, l_U220._fU0 + 5.00000000, l_U220._fU4 + 5.00000000, l_U220._fU8 + 5.00000000 );
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U215 )))
        {
            CLEAR_CHAR_TASKS( l_U215 );
            SET_CHAR_DRUGGED_UP( l_U215, 1 );
            if (NOT l_U209)
            {
                if (sub_4974( "PIMA_GO", ref l_U261, 6, 1 ))
                {
                    WAIT( 250 );
                    l_U209 = 1;
                    l_U201 = 0;
                    l_U200 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT (sub_10140( l_U261 )))
        {
            CLEAR_PRINTS();
            l_U209 = 0;
            l_U200 = 3;
        }
        break;
        case 3:
        if (NOT l_U286)
        {
            PRINT( "MRN1_PMT3", 7500, 1 );
            if (NOT (IS_CHAR_INJURED( l_U215 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U215, -169.60870000, -437.08580000, 13.32200000, 2, -1, 1.00000000 );
                TASK_LOOK_AT_CHAR( l_U215, sub_2023(), -2, 0 );
            }
            l_U286 = 1;
        }
        if (NOT (IS_CHAR_INJURED( sub_2023() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U215 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U215, 0 );
                }
                CLEAR_PRINTS();
                l_U213 = 1;
                l_U200 = 4;
            }
            else
            {
                l_U213 = 0;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U215 )))
        {
            MODIFY_CHAR_MOVE_STATE( l_U215, 2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U215 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U215 ))
            {
                l_U200 = 5;
            }
        }
        break;
        case 5:
        if (l_U208)
        {
            if (NOT l_U209)
            {
                if (NOT (IS_CHAR_INJURED( l_U215 )))
                {
                    TASK_LOOK_AT_CHAR( l_U215, sub_2023(), 0, 0 );
                }
                WAIT( 8000 );
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (g_U64738 == 0)
                    {
                        if (sub_4974( "PIMA_BANT1", ref l_U243, 6, 1 ))
                        {
                            l_U209 = 1;
                        }
                    }
                    else if (g_U64738 == 1)
                    {
                        if (sub_4974( "PIMA_BANT2", ref l_U243, 6, 1 ))
                        {
                            l_U209 = 1;
                        }
                    }
                    else if (g_U64738 == 2)
                    {
                        SAY_AMBIENT_SPEECH( l_U215, "listen_to_radio", 0, 0, 0 );
                        l_U209 = 1;
                    };;;
                }
            }
        }
        if ((NOT (IS_VEH_DRIVEABLE( l_U216 ))) AND (DOES_VEHICLE_EXIST( l_U216 )))
        {
            SET_CAR_ENGINE_ON( l_U216, 0, 0 );
        }
        if (IS_WANTED_LEVEL_GREATER( sub_1043(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U219 ))
            {
                REMOVE_BLIP( l_U219 );
                PRINT_HELP( "GLOCK_WL" );
            }
        }
        else if (l_U209)
        {
            if (NOT (DOES_BLIP_EXIST( l_U219 )))
            {
                ADD_BLIP_FOR_COORD( -1266.54700000, 821.05270000, 18.56210000, ref l_U219 );
                SET_ROUTE( l_U219, 1 );
                if (IS_THIS_PRINT_BEING_DISPLAYED( "GLOCK_WL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_PRINTS();
                }
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1043(), 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U215 )))
            {
                if (IS_GROUP_MEMBER( l_U215, sub_6871() ))
                {
                    if ((sub_6064( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2023(), -1266.54700000, 821.05270000, 18.56210000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
                    {
                        if (sub_10140( l_U243 ))
                        {
                            sub_1122( ref l_U243, 0 );
                        }
                        l_U213 = 0;
                        if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
                        {
                            if (NOT (IS_CAR_UPSIDEDOWN( l_U216 )))
                            {
                                GET_CAR_MODEL( l_U216, ref l_U236 );
                                if (DOES_BLIP_EXIST( l_U219 ))
                                {
                                    REMOVE_BLIP( l_U219 );
                                }
                                SET_PLAYER_CONTROL( sub_1043(), 0 );
                                if (IS_THIS_MODEL_A_HELI( l_U236 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_2023() )))
                                    {
                                        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_2023(), ref l_U288 );
                                    }
                                    DO_SCREEN_FADE_OUT( 250 );
                                    while (NOT IS_SCREEN_FADED_OUT())
                                    {
                                        WAIT( 0 );
                                    }
                                    CLEAR_AREA( -1266.54700000, 821.05270000, 18.56210000, 15.00000000, 1 );
                                    CLEAR_AREA_OF_CARS( -1266.54700000, 821.05270000, 18.56210000, 30.00000000 );
                                    if (IS_VEH_DRIVEABLE( l_U216 ))
                                    {
                                        SET_CHAR_COORDINATES( sub_2023(), -1266.05300000, 821.71040000, 18.56530000 );
                                        SET_CHAR_HEADING( sub_2023(), 79.10330000 );
                                        if (IS_VEH_DRIVEABLE( l_U216 ))
                                        {
                                            FREEZE_CAR_POSITION( l_U216, 1 );
                                        }
                                    }
                                }
                                else if (IS_THIS_MODEL_A_BIKE( l_U236 ))
                                {
                                    l_U290 = 1;
                                    DO_SCREEN_FADE_OUT( 250 );
                                    while (NOT IS_SCREEN_FADED_OUT())
                                    {
                                        WAIT( 0 );
                                    }
                                    CLEAR_AREA_OF_CARS( -1266.54700000, 821.05270000, 18.56210000, 30.00000000 );
                                    if (IS_VEH_DRIVEABLE( l_U216 ))
                                    {
                                        SET_CAR_COORDINATES( l_U216, -1266.54700000, 821.05270000, 18.56210000 );
                                        SET_CAR_HEADING( l_U216, 90.00000000 );
                                        SET_CAR_ON_GROUND_PROPERLY( l_U216 );
                                        if (IS_VEH_DRIVEABLE( l_U216 ))
                                        {
                                            FREEZE_CAR_POSITION( l_U216, 1 );
                                        }
                                    }
                                    WAIT( 1500 );
                                    if (IS_VEH_DRIVEABLE( l_U216 ))
                                    {
                                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2023(), -1.10000000, 0.60000000, -0.50000000, ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
                                        GET_GROUND_Z_FOR_3D_COORD( l_U229._fU0, l_U229._fU4, l_U229._fU8, ref l_U292 );
                                        if (NOT (IS_CHAR_INJURED( l_U215 )))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( l_U215 ))
                                            {
                                                REMOVE_CHAR_FROM_GROUP( l_U215 );
                                                WARP_CHAR_FROM_CAR_TO_COORD( l_U215, l_U229._fU0, l_U229._fU4, l_U292 );
                                                SET_CHAR_HEADING( l_U215, 0.00000000 );
                                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U215, 1 );
                                            }
                                            else
                                            {
                                                SET_CHAR_COORDINATES( l_U215, l_U229._fU0, l_U229._fU4, l_U292 );
                                                SET_CHAR_HEADING( l_U215, 0.00000000 );
                                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U215, 1 );
                                            }
                                        }
                                    }
                                }
                                else if ((NOT (IS_CHAR_INJURED( l_U215 ))) AND (IS_VEH_DRIVEABLE( l_U216 )))
                                {
                                    GET_CAR_MODEL( l_U216, ref l_U236 );
                                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U215 )))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U215, l_U216, 0 );
                                    }
                                };;;
                                if (NOT l_U205)
                                {
                                    GET_PED_BONE_POSITION( sub_2023(), 0, 0.00000000, 0.00000000, 0.00000000, ref l_U280 );
                                    GET_PED_BONE_POSITION( sub_2023(), 1205, 0.00000000, 0.00000000, 0.00000000, ref l_U277 );
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2023(), 2.03490000, 1.69320000, 0.71580000, ref l_U283._fU0, ref l_U283._fU4, ref l_U283._fU8 );
                                    BEGIN_CAM_COMMANDS( ref l_U273 );
                                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                    CREATE_CAM( 14, ref l_U274 );
                                    SET_CAM_POS( l_U274, -1280.65000000, 817.45000000, 20.81000000 );
                                    SET_CAM_FOV( l_U274, 24.00000000 );
                                    POINT_CAM_AT_PED( l_U274, sub_2023() );
                                    SET_CAM_NEAR_DOF( l_U274, 10.00000000 );
                                    SET_CAM_FAR_DOF( l_U274, 25.00000000 );
                                    CREATE_CAM( 14, ref l_U275 );
                                    SET_CAM_POS( l_U275, -1272.47900000, 824.38340000, 19.28364000 );
                                    SET_CAM_FOV( l_U275, 40.10000000 );
                                    POINT_CAM_AT_PED( l_U275, sub_2023() );
                                    SET_CAM_NEAR_DOF( l_U275, 0.10000000 );
                                    SET_CAM_FAR_DOF( l_U275, 18.00000000 );
                                    CREATE_CAM( 14, ref l_U276 );
                                    SET_CAM_POS( l_U276, l_U283._fU0, l_U283._fU4, l_U283._fU8 );
                                    SET_CAM_FOV( l_U276, 80.10000000 );
                                    POINT_CAM_AT_PED( l_U276, l_U215 );
                                    SET_CAM_NEAR_DOF( l_U276, 0.10000000 );
                                    SET_CAM_FAR_DOF( l_U276, 10.00000000 );
                                    l_U205 = 1;
                                }
                                SET_WIDESCREEN_BORDERS( 1 );
                                SET_CAM_PROPAGATE( l_U274, 1 );
                                SET_CAM_ACTIVE( l_U274, 1 );
                                SET_USE_HIGHDOF( 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                if ((IS_THIS_MODEL_A_BIKE( l_U236 )) || (IS_THIS_MODEL_A_HELI( l_U236 )))
                                {
                                    DO_SCREEN_FADE_IN( 250 );
                                    while (NOT IS_SCREEN_FADED_IN())
                                    {
                                        WAIT( 0 );
                                    }
                                }
                                l_U211 = 0;
                                l_U200 = 7;
                            }
                        }
                        else if (DOES_BLIP_EXIST( l_U219 ))
                        {
                            REMOVE_BLIP( l_U219 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            SET_PLAYER_CONTROL( sub_1043(), 0 );
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            if ((NOT (IS_CHAR_INJURED( sub_2023() ))) AND ((NOT (IS_CHAR_INJURED( l_U215 ))) AND (NOT l_U205)))
                            {
                                GET_PED_BONE_POSITION( sub_2023(), 0, 0.00000000, 0.00000000, 0.00000000, ref l_U280 );
                                GET_PED_BONE_POSITION( sub_2023(), 1205, 0.00000000, 0.00000000, 0.00000000, ref l_U277 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2023(), 2.03490000, 1.69320000, 0.71580000, ref l_U283._fU0, ref l_U283._fU4, ref l_U283._fU8 );
                                BEGIN_CAM_COMMANDS( ref l_U273 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                CREATE_CAM( 14, ref l_U275 );
                                SET_CAM_POS( l_U275, -1272.47900000, 824.38340000, 19.28364000 );
                                SET_CAM_FOV( l_U275, 40.10000000 );
                                POINT_CAM_AT_PED( l_U275, sub_2023() );
                                SET_CAM_NEAR_DOF( l_U275, 0.10000000 );
                                SET_CAM_FAR_DOF( l_U275, 18.00000000 );
                                CREATE_CAM( 14, ref l_U276 );
                                SET_CAM_POS( l_U276, l_U283._fU0, l_U283._fU4, l_U283._fU8 );
                                SET_CAM_FOV( l_U276, 30.10000000 );
                                POINT_CAM_AT_PED( l_U276, l_U215 );
                                SET_CAM_NEAR_DOF( l_U276, 0.10000000 );
                                SET_CAM_FAR_DOF( l_U276, 10.00000000 );
                                l_U205 = 1;
                            }
                            if (NOT (IS_CHAR_INJURED( sub_2023() )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2023() );
                                SET_CHAR_COORDINATES( sub_2023(), -1264.34200000, 821.95900000, 18.56330000 );
                                SET_CHAR_HEADING( sub_2023(), 180 );
                                REMOVE_PED_HELMET( sub_2023(), 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U215 )))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U215 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U215 );
                                SET_CHAR_COORDINATES( l_U215, -1264.39800000, 821.00000000, 18.56260000 );
                                SET_CHAR_HEADING( l_U215, 0 );
                            }
                            if (DOES_VEHICLE_EXIST( l_U216 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U216 ))
                                {
                                    SET_CAR_COORDINATES( l_U216, -1253.16400000, 812.00690000, 18.52160000 );
                                    SET_CAR_HEADING( l_U216, 177.17300000 );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U216 );
                                }
                            }
                            SET_CAM_PROPAGATE( l_U276, 1 );
                            SET_CAM_ACTIVE( l_U276, 1 );
                            SET_USE_HIGHDOF( 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            l_U211 = 0;
                            DO_SCREEN_FADE_IN( 250 );
                            while (NOT IS_SCREEN_FADED_IN())
                            {
                                WAIT( 0 );
                            }
                            l_U200 = 6;
                        }
                    }
                }
            }
        }
        break;
        case 6:
        if (l_U212 == 0)
        {
            SETTIMERA( 0 );
            l_U212 = 1;
        }
        if ((sub_15688()) AND (TIMERA() >= 2000))
        {
            if (IS_VEH_DRIVEABLE( l_U216 ))
            {
                if (IS_CHAR_IN_CAR( l_U215, l_U216 ))
                {
                    TASK_LEAVE_CAR( l_U215, l_U216 );
                    REMOVE_CHAR_FROM_GROUP( l_U215 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( l_U215 );
                }
            }
            SET_PLAYER_CONTROL_ADVANCED( sub_1043(), 1, 1, 1 );
            l_U214 = 1;
            l_U200 = 9;
        }
        if (NOT l_U210)
        {
            if (sub_4974( "PIMA_DEALER", ref l_U249, 6, 1 ))
            {
                l_U210 = 1;
            }
        }
        else if (NOT (sub_10140( l_U249 )))
        {
            l_U212 = 0;
            SET_CAM_PROPAGATE( l_U275, 1 );
            SET_CAM_ACTIVE( l_U275, 1 );
            SET_CAM_PROPAGATE( l_U276, 0 );
            SET_CAM_ACTIVE( l_U276, 0 );
            l_U200 = 8;
        }
        else if ((sub_16047( l_U249 )) == 1)
        {
            if (NOT l_U291)
            {
                if (NOT (IS_CHAR_INJURED( l_U215 )))
                {
                    TASK_PLAY_ANIM( l_U215, "take_obj", "missmarnie", 8.00000000, 0, 0, 0, 0, -2 );
                }
                if (NOT (IS_CHAR_INJURED( sub_2023() )))
                {
                    TASK_PLAY_ANIM( sub_2023(), "give_obj", "missmarnie", 8.00000000, 0, 0, 0, 0, -2 );
                }
                l_U291 = 1;
            }
        };;;
        break;
        case 7:
        if (l_U212 == 0)
        {
            SETTIMERA( 0 );
            l_U206 = 0;
            l_U212 = 1;
        }
        if ((sub_15688()) AND (TIMERA() >= 2000))
        {
            if (IS_VEH_DRIVEABLE( l_U216 ))
            {
                if (IS_CHAR_IN_CAR( l_U215, l_U216 ))
                {
                    TASK_LEAVE_CAR( l_U215, l_U216 );
                    REMOVE_CHAR_FROM_GROUP( l_U215 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( l_U215 );
                }
            }
            l_U214 = 1;
            SET_PLAYER_CONTROL_ADVANCED( sub_1043(), 1, 1, 1 );
            l_U200 = 9;
        }
        if (NOT l_U210)
        {
            if (NOT (IS_CHAR_INJURED( sub_2023() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U215 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2023(), l_U215, -2, 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U215 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_2023() )))
                {
                    TASK_LOOK_AT_CHAR( l_U215, sub_2023(), -2, 0 );
                }
            }
            if (sub_4974( "PIMA_DEALER", ref l_U249, 6, 1 ))
            {
                WAIT( 250 );
                l_U210 = 1;
            }
        }
        else if (NOT (sub_10140( l_U249 )))
        {
            l_U212 = 0;
            if (NOT l_U290)
            {
                if (IS_VEH_DRIVEABLE( l_U216 ))
                {
                    if (IS_CHAR_IN_CAR( l_U215, l_U216 ))
                    {
                        SET_CAM_PROPAGATE( l_U275, 1 );
                        SET_CAM_ACTIVE( l_U275, 1 );
                        SET_CAM_PROPAGATE( l_U274, 0 );
                        SET_CAM_ACTIVE( l_U274, 0 );
                        TASK_LEAVE_CAR( l_U215, l_U216 );
                        l_U200 = 8;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U215 )))
                {
                    TASK_LEAVE_ANY_CAR( l_U215 );
                }
            }
            else
            {
                SET_CAM_PROPAGATE( l_U275, 1 );
                SET_CAM_ACTIVE( l_U275, 1 );
                SET_CAM_PROPAGATE( l_U274, 0 );
                SET_CAM_ACTIVE( l_U274, 0 );
                l_U200 = 8;
            }
        }
        else if ((sub_16047( l_U249 )) == 1)
        {
            if (l_U290)
            {
                if (NOT l_U291)
                {
                    sub_16910( sub_2023(), l_U216 );
                    WAIT( 750 );
                    if (NOT (IS_CHAR_INJURED( l_U215 )))
                    {
                        TASK_PLAY_ANIM( l_U215, "take_obj", "missmarnie", 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    l_U291 = 1;
                }
            }
        };;;
        break;
        case 8:
        if (l_U212 == 0)
        {
            l_U206 = 0;
            SETTIMERA( 0 );
            l_U212 = 1;
        }
        if ((sub_15688()) AND (TIMERA() >= 2000))
        {
            if (IS_VEH_DRIVEABLE( l_U216 ))
            {
                if (IS_CHAR_IN_CAR( l_U215, l_U216 ))
                {
                    TASK_LEAVE_CAR( l_U215, l_U216 );
                    REMOVE_CHAR_FROM_GROUP( l_U215 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( l_U215 );
                }
            }
            l_U214 = 1;
            SET_PLAYER_CONTROL_ADVANCED( sub_1043(), 1, 1, 1 );
            l_U200 = 9;
        }
        if (NOT l_U207)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2023() ))
            {
                if (IS_VEH_DRIVEABLE( l_U216 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U215 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U215, l_U216 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U215, 1 );
                            TASK_PERFORM_SEQUENCE( l_U215, l_U242 );
                            CLEAR_SEQUENCE_TASK( l_U242 );
                            l_U207 = 1;
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U215 )))
            {
                TASK_LOOK_AT_CHAR( l_U215, sub_2023(), 0, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U215, 1 );
                TASK_PERFORM_SEQUENCE( l_U215, l_U242 );
                CLEAR_SEQUENCE_TASK( l_U242 );
                l_U207 = 1;
            }
        }
        else
        {
            SETTIMERB( 0 );
            l_U200 = 9;
        }
        break;
        case 9:
        if ((TIMERB() > 5000) || ((NOT (IS_CHAR_ON_SCREEN( l_U215 ))) || ((l_U214 == 1) || (LOCATE_CHAR_ANY_MEANS_3D( l_U215, -1280.64700000, 833.76680000, 19.56620000, 2.50000000, 2.50000000, 2.50000000, 0 )))))
        {
            if (IS_VEH_DRIVEABLE( l_U216 ))
            {
                if (IS_THIS_MODEL_A_HELI( l_U236 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_2023() )))
                    {
                        SET_CHAR_COORDINATES( sub_2023(), -1266.05300000, 821.71040000, 18.56530000 );
                        SET_CHAR_HEADING( sub_2023(), 79.10330000 );
                    }
                    FREEZE_CAR_POSITION( l_U216, 0 );
                }
                else if (IS_THIS_MODEL_A_BIKE( l_U236 ))
                {
                    FREEZE_CAR_POSITION( l_U216, 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_2023() )))
            {
                TASK_LOOK_AT_CHAR( sub_2023(), l_U215, 0, 0 );
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            if (NOT l_U206)
            {
                SET_WIDESCREEN_BORDERS( 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U273 );
                l_U206 = 1;
            }
            if (DOES_CHAR_EXIST( l_U215 ))
            {
                DELETE_CHAR( ref l_U215 );
            }
            SET_PLAYER_CONTROL_ADVANCED( sub_1043(), 1, 1, 1 );
            sub_1122( ref l_U249, 1 );
            if (IS_SCORE_GREATER( sub_1043(), 500 ))
            {
                sub_18304( 65036 );
                INCREMENT_INT_STAT( 103, 500 );
            }
            else
            {
                STORE_SCORE( sub_1043(), ref l_U287 );
                sub_18304( -l_U287 );
                INCREMENT_INT_STAT( 103, l_U287 );
            }
            sub_18395();
        }
        break;
    }
    return;
}

void sub_9462(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_9512()
{
    if (g_U64738 == 0)
    {
        g_U64738 = 1;
    }
    else if (g_U64738 == 1)
    {
        g_U64738 = 2;
    }
    g_U64752++;
    if (g_U64752 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1043(), 150 );
        SAY_AMBIENT_SPEECH( sub_2023(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1043(), 150 );
    }
    sub_1246();
    return;
}

void sub_9907(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_9952(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9973( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_9973(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_5049( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_10140(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_5148( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5148( "\n speech is not playing" );
    }
    return 0;
}

int sub_10311(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_5148( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_5148( "\n CONVERSATION PAUSED AT LINE " );
            sub_10451( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_5148( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_5148( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_5148( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_10451(unknown uParam0)
{
    return;
}

int sub_15688()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_16047(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_10140( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_16910(unknown uParam0, unknown uParam1)
{
    string sVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (sub_16950( uParam1 ))
            {
                sVar4 = "toss_money_chopper";
            }
            else if (sub_17026( uParam1 ))
            {
                sVar4 = "toss_money_dirt";
            }
            else if (sub_17099( uParam1 ))
            {
                sVar4 = "toss_money_freeway";
            }
            else if (sub_17190( uParam1 ))
            {
                sVar4 = "toss_money_scooter";
            }
            else if (sub_17266( uParam1 ))
            {
                sVar4 = "toss_money_spt";
            };;;;;
            TASK_PLAY_ANIM( uParam0, sVar4, "missmarnie", 4.00000000, 0, 0, 0, 0, 0 );
        }
    }
    return;
}

int sub_16950(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -570033273 ))
    {
        return 1;
    }
    return 0;
}

int sub_17026(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, 788045382 ))
    {
        return 1;
    }
    return 0;
}

int sub_17099(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, 584879743 )) || (IS_CAR_MODEL( uParam0, -1830458836 )))
    {
        return 1;
    }
    return 0;
}

int sub_17190(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -1842748181 ))
    {
        return 1;
    }
    return 0;
}

int sub_17266(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, -909201658 )) || (IS_CAR_MODEL( uParam0, 1203311498 )))
    {
        return 1;
    }
    return 0;
}

void sub_18304(unknown uParam0)
{
    ADD_SCORE( sub_1043(), uParam0 );
    return;
}

void sub_18395()
{
    CLEAR_WANTED_LEVEL( sub_1043() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_18431( l_U267 );
    sub_1246();
    return;
}

void sub_18431(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_442( uParam0 );
    if (NOT g_U34048[uVar3]._fU4)
    {
        sub_562( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_18553( uParam0 );
    g_U34048[uVar3]._fU28++;
    return;
}

void sub_18553(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_18683();
        break;
        case 39:
        sub_19645();
        break;
        case 40:
        sub_19904();
        break;
        case 48:
        sub_20087();
        break;
        case 41:
        sub_20272();
        break;
        case 42:
        sub_20468();
        break;
        case 43:
        sub_20649();
        break;
        case 44:
        sub_20832();
        break;
        case 45:
        sub_21013();
        break;
        case 46:
        sub_21192();
        break;
        case 47:
        sub_21503();
        break;
        case 49:
        sub_21703();
        break;
        case 50:
        sub_21880();
        break;
        case 51:
        sub_22078();
        break;
        default: sub_562( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_22353();
    sub_22426();
    return;
}

void sub_18683()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 500 );
        break;
        default: sub_562( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_18723(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_18776( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_18908( iParam0 + 0 );
    }
    return;
}

void sub_18776(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_18908( iParam0 + 0 );
    }
    return;
}

void sub_18908(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_18939( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_18939(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_19369(unknown uParam0)
{
    sub_19380( uParam0 );
    return;
}

void sub_19380(unknown uParam0)
{
    ADD_SCORE( sub_1043(), uParam0 );
    sub_19405( uParam0 );
    return;
}

void sub_19405(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_562( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_19645()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_442( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 100 );
        sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_19369( 200 );
        sub_18723( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_19369( 500 );
        break;
        default: sub_562( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_19904()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        default: sub_562( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_20087()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        default: sub_562( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_20272()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        case 2:
        sub_19369( 0 );
        break;
        default: sub_562( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_20468()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        default: sub_562( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_20649()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 500 );
        break;
        default: sub_562( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_20832()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        default: sub_562( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_21013()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 1000 );
        break;
        default: sub_562( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_21192()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_442( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 1000 );
        sub_21279( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_19369( 5000 );
        sub_18723( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_562( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_21279(int iParam0)
{
    sub_21292( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_21292(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_21503()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        case 2:
        sub_19369( 0 );
        break;
        default: sub_562( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_21703()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 500 );
        break;
        default: sub_562( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_21880()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        case 2:
        sub_19369( 0 );
        break;
        default: sub_562( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_22078()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_442( iVar2 );
    sub_18723( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_19369( 0 );
        break;
        case 2:
        sub_19369( 1000 );
        break;
        default: sub_562( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_22353()
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

void sub_22426()
{
    sub_22435();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_22435()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

