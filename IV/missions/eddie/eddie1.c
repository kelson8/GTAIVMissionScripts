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
    l_U203 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 0;
    l_U226 = {-1449.62500000, 1105.58100000, 22.03780000};
    l_U238 = {-399.12900000, 250.48260000, 12.78510000};
    l_U241 = {-1013.01500000, 681.12110000, 2.81050000};
    l_U244 = {-991.37000000, 658.32000000, 3.20000000};
    l_U247 = {-397.56620000, 231.76770000, 13.03670000};
    l_U250 = {0.23000000, 0.06000000, 0.02000000};
    l_U253 = {85.80010000, -1.40000000, -3.80000000};
    l_U256 = 0;
    l_U262 = 1;
    l_U263 = 1;
    l_U264 = 1;
    l_U293 = 41;
    l_U294 = 90.59010000;
    l_U297 = 0;
    l_U298 = 0;
    l_U309 = 0;
    l_U310 = 0;
    l_U312 = 0;
    l_U313 = 0;
    l_U314 = 0;
    l_U315 = 0;
    l_U316 = 0;
    l_U317 = 0;
    l_U326 = 0;
    l_U327 = 0;
    if (sub_554( l_U293, l_U262 ))
    {
        if (IS_PLAYER_PLAYING( sub_1255() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1255(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1334( ref l_U269, 0 );
                    sub_1458();
                }
                if (g_U0)
                {
                    SET_TIME_OF_DAY( 23, 1 );
                    l_U326 = 1;
                }
                if (NOT l_U327)
                {
                    GET_TIME_OF_DAY( ref l_U324, ref l_U325 );
                    if ((l_U324 < 4) || (l_U324 >= 20))
                    {
                        l_U326 = 1;
                        l_U327 = 1;
                    }
                    else
                    {
                        l_U326 = 0;
                        l_U327 = 1;
                    }
                }
                if ((NOT l_U326) AND (l_U327))
                {
                    TERMINATE_THIS_SCRIPT();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U202)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_2963())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1652();
                            }
                            if (NOT sub_3111())
                            {
                                sub_1652();
                            }
                            switch (l_U197)
                            {
                                case 0:
                                sub_3196();
                                break;
                                case 1:
                                sub_3888();
                                break;
                            }
                        }
                        else
                        {
                            sub_1652();
                        }
                        sub_8573();
                    }
                    if (l_U202)
                    {
                        switch (l_U198)
                        {
                            case 0:
                            sub_8689();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1561() )))
                {
                    if (sub_4054() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1652();;
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

void sub_554(unknown uParam0, unknown uParam1)
{
    if (sub_563())
    {
        return 0;
    }
    return sub_610( uParam0, uParam1 );
}

int sub_563()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_610(unknown uParam0, int iParam1)
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
    uVar4 = sub_654( uParam0 );
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
        if (sub_931( g_U34048[uVar4]._fU8 ))
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

int sub_654(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_665( uParam0 )))
    {
        sub_774( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_665(unknown uParam0)
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

void sub_774(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_931(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1100( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1255()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1334(int iParam0, unknown uParam1)
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

void sub_1458()
{
    if (g_U64740 == 0)
    {
        g_U64740 = 1;
    }
    else if (g_U64740 == 1)
    {
        g_U64740 = 2;
    }
    g_U64746++;
    if (g_U64746 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1255(), 150 );
        SAY_AMBIENT_SPEECH( sub_1561(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1255(), 150 );
    }
    sub_1652();
    return;
}

void sub_1561()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1652()
{
    if ((l_U205) AND (l_U204))
    {
        if (sub_1677())
        {
            sub_1724( 0 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U295[0] ))
    {
        DELETE_OBJECT( ref l_U295[0] );
    }
    if (sub_1980( l_U293, l_U262 ))
    {
        sub_2076( l_U293, l_U262 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1255() ))
        {
            SET_PLAYER_CONTROL( sub_1255(), 1 );
        }
        sub_2546();
    }
    if (DOES_CHAR_EXIST( l_U220 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            FREEZE_CHAR_POSITION( l_U220, 0 );
            CLEAR_CHAR_TASKS( l_U220 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U220 );
        }
    }
    CLEAR_NAMED_CUTSCENE( "rped1" );
    REMOVE_BLIP( l_U223 );
    REMOVE_BLIP( l_U224 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U220 );
    l_U220 = nil;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    RELEASE_WEATHER();
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1561(), 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1677()
{
    if (g_U9241._fU148[0] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_1724(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((iParam0 == 2) || (I == iParam0))
        {
            sub_1762( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_1762(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_1814( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_1814(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

int sub_1980(int iParam0, int iParam1)
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

void sub_2076(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1980( uParam0, uParam1 )))
    {
        sub_774( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_2172();
    if (g_U813)
    {
        sub_2264();
    }
    else
    {
        sub_2382();
    }
    g_U10978 = 0;
    return;
}

void sub_2172()
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

void sub_2264()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_2310();
    return;
}

void sub_2310()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2382()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_2428();
    return;
}

void sub_2428()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2546()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

int sub_2963()
{
    if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1561(), ref l_U222 );
        if (NOT (l_U222 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U222 ))
            {
                GET_CAR_SPEED( l_U222, ref l_U258 );
                if (l_U258 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3111()
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

void sub_3196()
{
    switch (l_U196)
    {
        case 0:
        l_U259 = 1095510768;
        l_U260 = -1600585231;
        REQUEST_MODEL( l_U260 );
        REQUEST_ANIMS( "misseddie1" );
        REQUEST_ANIMS( "move_m@eddie" );
        while ((NOT (HAVE_ANIMS_LOADED( "move_m@eddie" ))) || ((NOT (HAVE_ANIMS_LOADED( "misseddie1" ))) || (NOT (HAS_MODEL_LOADED( l_U260 )))))
        {
            WAIT( 0 );
        }
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U203)
        {
            CLEAR_AREA( -1444.16000000, 1105.48100000, 23.03800000, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U260, l_U226._fU0, l_U226._fU4, l_U226._fU8, ref l_U220, 1 );
            SET_ANIM_GROUP_FOR_CHAR( l_U220, "move_m@eddie" );
            SET_CHAR_HEADING( l_U220, l_U294 );
            SET_CHAR_NEVER_TARGETTED( l_U220, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U220, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U220, 1 );
            TASK_STAND_GUARD( l_U220, l_U226, 90.59010000, 5.00000000, 0, -1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U223 )))
            {
                ADD_BLIP_FOR_CHAR( l_U220, ref l_U223 );
                CHANGE_BLIP_SPRITE( l_U223, 63 );
                SET_BLIP_AS_FRIENDLY( l_U223, 1 );
                CHANGE_BLIP_SCALE( l_U223, 1.00000000 );
                CHANGE_BLIP_DISPLAY( l_U223, 2 );
            }
            CREATE_OBJECT_NO_OFFSET( l_U259, l_U226._fU0, l_U226._fU4 - 0.50000000, l_U226._fU8, ref l_U295[0], 1 );
            SET_OBJECT_COORDINATES( l_U295[0], l_U226._fU0, l_U226._fU4 - 0.50000000, l_U226._fU8 + 0.20000000 );
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                TASK_PLAY_ANIM( l_U220, "eddie_idle", "misseddie1", 8.00000000, 1, 0, 0, 0, -2 );
            }
            l_U203 = 1;
        }
        else
        {
            l_U197 = 1;
        }
        break;
    }
    return;
}

void sub_3888()
{
    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_1561(), 0 )) || (IS_CHAR_INJURED( l_U220 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
        }
        sub_1652();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1561(), ref l_U222 );
        if (NOT (l_U222 == l_U221))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U221 );
            l_U221 = l_U222;
        }
    }
    if ((IS_CHAR_ON_FOOT( sub_1561() )) AND (sub_4054() < 25))
    {
        sub_4289( ref l_U220, ref l_U299, ref l_U226, ref l_U294, ref l_U298, 1.10000000, "eddie_idle", "missEDDIE1", 0, 1 );
    }
    switch (l_U199)
    {
        case 0:
        if ((IS_WANTED_LEVEL_GREATER( sub_1255(), 0 )) || ((IS_CHAR_ON_FIRE( l_U220 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_1561(), 0 )) || (IS_CHAR_INJURED( l_U220 )))))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1255(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1561() )))
                {
                    if (sub_4054() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
            }
            sub_1652();
        }
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if ((IS_CHAR_ON_FOOT( sub_1561() )) AND (sub_4054() < 18))
            {
                if ((NOT l_U297) AND (NOT IS_HINT_RUNNING()))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 6000 );
                    l_U297 = 1;
                }
                l_U199 = 1;
            }
        }
        break;
        case 1:
        if ((IS_WANTED_LEVEL_GREATER( sub_1255(), 0 )) || ((IS_CHAR_ON_FIRE( l_U220 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_1561(), 0 )) || (IS_CHAR_INJURED( l_U220 )))))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1255(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1561() )))
                {
                    if (sub_4054() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
            }
            sub_1652();
        }
        if (sub_4054() < 4.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_1561() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (sub_5195( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_1561(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U220 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1255(), 0 )))
                                {
                                    if (sub_3111())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_1255(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        if (DOES_VEHICLE_EXIST( l_U221 ))
                                        {
                                            if (IS_VEH_DRIVEABLE( l_U221 ))
                                            {
                                                SET_CAR_AS_MISSION_CAR( l_U221 );
                                                SET_CAR_COORDINATES( l_U221, -1459.17200000, 1099.46100000, 21.93840000 );
                                                SET_CAR_HEADING( l_U221, 0.00000000 );
                                                SET_CAR_ON_GROUND_PROPERLY( l_U221 );
                                                SET_CAR_IN_CUTSCENE( l_U221, 1 );
                                            }
                                        }
                                        else
                                        {
                                            REQUEST_MODEL( 1390084576 );
                                            while (NOT (HAS_MODEL_LOADED( 1390084576 )))
                                            {
                                                WAIT( 0 );
                                            }
                                            if (NOT l_U206)
                                            {
                                                CREATE_CAR( 1390084576, -1480.36600000, 1092.81500000, 22.04650000, ref l_U221, 1 );
                                                SET_CAR_HEADING( l_U221, 188.43430000 );
                                                SET_CAR_ON_GROUND_PROPERLY( l_U221 );
                                                MARK_MODEL_AS_NO_LONGER_NEEDED( 1390084576 );
                                                SET_CAR_IN_CUTSCENE( l_U221, 1 );
                                                l_U206 = 1;
                                            }
                                        }
                                        l_U199 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_4054() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
            }
            l_U199 = 0;
        }
        break;
        case 2:
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_1255() );
        CLEAR_PRINTS();
        FORCE_WEATHER_NOW( 6 );
        LOAD_ADDITIONAL_TEXT( "PIEAUD", 6 );
        sub_6047();
        CLEAR_NAMED_CUTSCENE( "rped1" );
        START_CUTSCENE_NOW( "rped1" );
        SET_GROUP_SEPARATION_RANGE( sub_6187(), 30.00000000 );
        sub_6250( l_U293, l_U262 );
        l_U202 = 1;
        break;
    }
    return;
}

void sub_4054()
{
    if (NOT (IS_CHAR_DEAD( l_U220 )))
    {
        GET_CHAR_COORDINATES( sub_1561(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
        GET_CHAR_COORDINATES( l_U220, ref l_U232._fU0, ref l_U232._fU4, ref l_U232._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U229._fU0, l_U229._fU4, l_U229._fU8, l_U232._fU0, l_U232._fU4, l_U232._fU8, ref l_U256 );
        return l_U256;
    }
    return l_U256;
}

void sub_4289(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_5195(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1561(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1561(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1561()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1561() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1255() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1255() )))
    {
        return 0;
    }
    return 1;
}

void sub_6047()
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

void sub_6187()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_6250(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_774( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_654( uParam0 );
    if (g_U34175._fU4)
    {
        sub_774( "Interactions_Started: Another interaction is already taking place" );
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
        sub_774( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_6613();
    sub_7384( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_7528( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_6613()
{
    sub_6622();
    sub_6725( ref g_U9893._fU68 );
    sub_6774();
    return;
}

void sub_6622()
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

void sub_6725(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6774()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_6812( 1, g_U569[I] )) == 0)
        {
            sub_7063( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7241())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_6812(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7063(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7148( g_U569 - 1 );
    return;
}

void sub_7148(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7241()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_6812( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7384(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_7418();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7418()
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

void sub_7528(unknown uParam0, int iParam1)
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
    sub_8374( cVar4 );
    return;
}

void sub_8374(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_8573()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_2963()) || (sub_4054() > 30))
        {
            HINT_CAM( l_U226._fU0, l_U226._fU4, l_U226._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_8689()
{
    if ((IS_CHAR_DEAD( l_U220 )) || (IS_CHAR_INJURED( l_U220 )))
    {
        PRINT_NOW( "EDD1_PMT12", 7500, 1 );
        if (DOES_OBJECT_EXIST( l_U295[0] ))
        {
            DETACH_OBJECT( l_U295[0], 1 );
        }
        sub_1334( ref l_U269, 0 );
        sub_1334( ref l_U275, 0 );
        sub_8817( 41, l_U220, 28 );
        sub_1458();
    }
    else if (NOT l_U317)
    {
        if (IS_CHAR_SWIMMING( l_U220 ))
        {
            l_U317 = 1;
        }
    }
    else if ((DOES_OBJECT_EXIST( l_U295[0] )) AND (NOT (IS_CHAR_SWIMMING( l_U220 ))))
    {
        GIVE_PED_PICKUP_OBJECT( l_U220, l_U295[0], 1 );
        l_U317 = 0;
    };;;
    if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1561(), ref l_U222 );
        if (NOT (l_U222 == l_U221))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U221 );
            l_U221 = l_U222;
            SET_CAR_AS_MISSION_CAR( l_U221 );
        }
    }
    if (l_U212)
    {
        if (NOT (IS_CHAR_INJURED( sub_1561() )))
        {
            if (IS_VEH_DRIVEABLE( l_U221 ))
            {
                if (IS_CHAR_IN_CAR( sub_1561(), l_U221 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U220, l_U221 ))
                        {
                            l_U310 = 0;
                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                            {
                                if (l_U263 == 1)
                                {
                                    if (g_U64740 == 0)
                                    {
                                        if (sub_9218( l_U269 ))
                                        {
                                            sub_9262( "PIE_BANT1", ref l_U269, 6, 1 );
                                        }
                                    }
                                    else if (g_U64740 == 1)
                                    {
                                        if (sub_9218( l_U269 ))
                                        {
                                            sub_9262( "PIE_BANT2", ref l_U269, 6, 1 );
                                        }
                                    }
                                }
                                else if (l_U263 == 2)
                                {
                                    if (g_U64740 == 0)
                                    {
                                        if (sub_9218( l_U269 ))
                                        {
                                            sub_9262( "PIE_BANT3", ref l_U269, 6, 1 );
                                        }
                                    }
                                    else if (g_U64740 == 1)
                                    {
                                        if (sub_9218( l_U269 ))
                                        {
                                            sub_9262( "PIE_BANT4", ref l_U269, 6, 1 );
                                        }
                                    }
                                }
                            }
                            l_U208 = 1;
                        }
                        else if (l_U263 == 1)
                        {
                            if (NOT l_U310)
                            {
                                GIVE_PED_PICKUP_OBJECT( l_U220, l_U295[0], 1 );
                                l_U310 = 1;
                            }
                        }
                        if (sub_10493( l_U269 ))
                        {
                            sub_10664( ref l_U269 );
                        }
                    }
                }
                else if (l_U263 == 1)
                {
                    if (NOT l_U310)
                    {
                        GIVE_PED_PICKUP_OBJECT( l_U220, l_U295[0], 1 );
                        l_U310 = 1;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (IS_CHAR_IN_CAR( l_U220, l_U221 ))
                    {
                        if (sub_10493( l_U269 ))
                        {
                            sub_10664( ref l_U269 );
                        }
                    }
                    else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (sub_4054() < 10.00000000)
                        {
                            if (l_U263 == 1)
                            {
                                if (g_U64740 == 0)
                                {
                                    if (sub_9218( l_U269 ))
                                    {
                                        sub_9262( "PIE_BANT1", ref l_U269, 6, 1 );
                                    }
                                }
                                else if (g_U64740 == 1)
                                {
                                    if (sub_9218( l_U269 ))
                                    {
                                        sub_9262( "PIE_BANT2", ref l_U269, 6, 1 );
                                    }
                                }
                            }
                            else if (l_U263 == 2)
                            {
                                if (g_U64740 == 0)
                                {
                                    if (sub_9218( l_U269 ))
                                    {
                                        sub_9262( "PIE_BANT3", ref l_U269, 6, 1 );
                                    }
                                }
                                else if (g_U64740 == 1)
                                {
                                    if (sub_9218( l_U269 ))
                                    {
                                        sub_9262( "PIE_BANT4", ref l_U269, 6, 1 );
                                    }
                                }
                            }
                        }
                        else if (sub_10493( l_U269 ))
                        {
                            sub_10664( ref l_U269 );
                        }
                    }
                }
            }
        }
    }
    if (l_U215)
    {
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U220, sub_6187() )))
            {
                l_U212 = 0;
                if (DOES_BLIP_EXIST( l_U223 ))
                {
                    if (sub_4054() < 12.00000000)
                    {
                        REMOVE_BLIP( l_U223 );
                        SET_GROUP_MEMBER( sub_6187(), l_U220 );
                        l_U212 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            if ((NOT (IS_CHAR_IN_ANY_CAR( sub_1561() ))) AND (NOT (IS_CHAR_INJURED( sub_1561() ))))
                            {
                                if (NOT l_U312)
                                {
                                    PRINT( "EDD1_PMT4", 7500, 1 );
                                    l_U312 = 1;
                                }
                            }
                            l_U312 = 0;
                            if (l_U264 == 1)
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U225 )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U241._fU0, l_U241._fU4, l_U241._fU8, ref l_U225 );
                                    SET_ROUTE( l_U225, 1 );
                                    CLEAR_PRINTS();
                                    PRINT( "EDD1_PMT41", 7500, 1 );
                                }
                            }
                            else if (l_U264 == 2)
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U224 )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U238._fU0, l_U238._fU4, l_U238._fU8, ref l_U224 );
                                    SET_ROUTE( l_U224, 1 );
                                    CLEAR_PRINTS();
                                    PRINT( "EDD1_PMT51", 7500, 1 );
                                }
                            }
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U225 ))
                {
                    REMOVE_BLIP( l_U225 );
                }
                if (DOES_BLIP_EXIST( l_U224 ))
                {
                    REMOVE_BLIP( l_U224 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U223 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U220, ref l_U223 );
                    SET_ROUTE( l_U223, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U223, 1 );
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "EDD1_PMT11" )))
                {
                    CLEAR_PRINTS();
                    PRINT( "EDD1_PMT11", 7500, 1 );
                }
            }
        }
    }
    switch (l_U200)
    {
        case 0:
        CLEAR_HELP();
        DELETE_CHAR( ref l_U220 );
        DELETE_OBJECT( ref l_U295[0] );
        GET_CHAR_COORDINATES( sub_1561(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
        GET_CHAR_HEADING( sub_1561(), ref l_U257 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U229._fU0 - 15.00000000, l_U229._fU4 - 15.00000000, l_U229._fU8 - 15.00000000, l_U229._fU0 + 15.00000000, l_U229._fU4 + 15.00000000, l_U229._fU8 + 15.00000000 );
        CLEAR_AREA( l_U226._fU0, l_U226._fU4, l_U226._fU8, 15.00000000, 1 );
        CLEAR_AREA( -1003.64000000, 662.17310000, 3.07770000, 15.00000000, 1 );
        CLEAR_AREA_OF_CARS( -1003.64000000, 662.17310000, 3.07770000, 10.00000000 );
        if (DOES_BLIP_EXIST( l_U223 ))
        {
            REMOVE_BLIP( l_U223 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rped1" );
        CREATE_CHAR( 26, l_U260, l_U226._fU0, l_U226._fU4, l_U226._fU8, ref l_U220, 1 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U220, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U220, 10.00000000 );
        SET_ANIM_GROUP_FOR_CHAR( l_U220, "move_m@eddie" );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 1 );
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            SET_ANIM_GROUP_FOR_CHAR( l_U220, "move_m@eddie" );
        }
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1561(), 0 );
        SET_CHAR_RELATIONSHIP( l_U220, 0, 0 );
        SET_PED_DIES_WHEN_INJURED( l_U220, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U220, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U220, 1 );
        MODIFY_CHAR_MOVE_STATE( l_U220, 2 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U260 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U220, 0 );
        SET_CHAR_COORDINATES( sub_1561(), l_U229._fU0, l_U229._fU4, l_U229._fU8 - 1.00000000 );
        sub_12911( "PIEAUD" );
        sub_13030( 0, sub_1561(), "NIKO", 0 );
        sub_13030( 1, l_U220, "PI_ED_LOW", 0 );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        LOAD_ADDITIONAL_TEXT( "WI_EDD1", 0 );
        OPEN_SEQUENCE_TASK( ref l_U266 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U247._fU0, l_U247._fU4, l_U247._fU8, 2, -2, 1.50000000 );
        CLOSE_SEQUENCE_TASK( l_U266 );
        OPEN_SEQUENCE_TASK( ref l_U267 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -996.54530000, 643.78230000, 2.96850000, 2, -2, 2.50000000 );
        CLOSE_SEQUENCE_TASK( l_U267 );
        OPEN_SEQUENCE_TASK( ref l_U268 );
        TASK_ACHIEVE_HEADING( 0, 246.25250000 );
        TASK_PLAY_ANIM_UPPER_BODY( 0, "throw_object", "misseddie1", 8.00000000, 0, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U268 );
        if (NOT (IS_CHAR_DEAD( sub_1561() )))
        {
            SET_CHAR_COORDINATES( sub_1561(), -1456.12200000, 1100.33800000, 22.03830000 );
            SET_CHAR_HEADING( sub_1561(), 153.92720000 );
            SET_CAM_BEHIND_PED( sub_1561() );
        }
        if (NOT (IS_CHAR_DEAD( l_U220 )))
        {
            SET_CHAR_COORDINATES( l_U220, -1455.05000000, 1103.06100000, 22.03870000 );
            SET_CHAR_HEADING( l_U220, 161.66760000 );
            TASK_LOOK_AT_CHAR( l_U220, sub_1561(), -2, 0 );
        }
        SWITCH_PED_PATHS_ON( l_U229._fU0 - 15.00000000, l_U229._fU4 - 15.00000000, l_U229._fU8 - 15.00000000, l_U229._fU0 + 15.00000000, l_U229._fU4 + 15.00000000, l_U229._fU8 + 15.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_1255(), 1, 1, 1 );
        if (NOT (IS_CHAR_DEAD( l_U220 )))
        {
            CREATE_OBJECT_NO_OFFSET( l_U259, l_U226._fU0, l_U226._fU4 - 0.50000000, l_U226._fU8, ref l_U295[0], 1 );
            GIVE_PED_PICKUP_OBJECT( l_U220, l_U295[0], 1 );
        }
        LOAD_SCENE( l_U226._fU0, l_U226._fU4, l_U226._fU8 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        l_U200 = 2;
        break;
        case 2:
        if (NOT l_U209)
        {
            if (sub_13918( "PIE_GO", ref l_U269, 7, 1 ))
            {
                WAIT( 250 );
                l_U209 = 1;
                l_U200 = 3;
            }
        }
        break;
        case 3:
        if (NOT (sub_10493( l_U269 )))
        {
            l_U209 = 0;
            l_U200 = 4;
        }
        break;
        case 4:
        l_U263 = 1;
        if (NOT l_U312)
        {
            PRINT( "EDD1_PMT4", 7500, 1 );
            l_U312 = 1;
        }
        if (NOT (IS_CHAR_INJURED( sub_1561() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
            {
                CLEAR_PRINTS();
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 0 );
                    CLEAR_CHAR_TASKS( l_U220 );
                }
                l_U215 = 1;
                l_U312 = 0;
                l_U200 = 5;
            }
            else
            {
                l_U215 = 0;
            }
        }
        break;
        case 5:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            l_U215 = 1;
            l_U212 = 1;
            if (l_U208)
            {
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    TASK_LOOK_AT_CHAR( l_U220, sub_1561(), 0, 0 );
                }
                if (NOT l_U209)
                {
                    if (g_U64740 == 0)
                    {
                        if (sub_13918( "PIE_BANT1", ref l_U269, 6, 1 ))
                        {
                            WAIT( 250 );
                            l_U209 = 1;
                        }
                    }
                    else if (g_U64740 == 1)
                    {
                        if (sub_13918( "PIE_BANT2", ref l_U269, 6, 1 ))
                        {
                            WAIT( 250 );
                            l_U209 = 1;
                        }
                    }
                    else if (g_U64740 == 2)
                    {
                        SAY_AMBIENT_SPEECH( l_U220, "listen_to_radio", 0, 0, 0 );
                        WAIT( 250 );
                        l_U209 = 1;
                    };;;
                }
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_1255(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U225 ))
            {
                REMOVE_BLIP( l_U225 );
                PRINT_HELP( "GLOCK_WL" );
            }
        }
        else if (l_U209)
        {
            if (NOT (DOES_BLIP_EXIST( l_U225 )))
            {
                ADD_BLIP_FOR_COORD( l_U241._fU0, l_U241._fU4, l_U241._fU8, ref l_U225 );
                SET_ROUTE( l_U225, 1 );
                if (IS_THIS_PRINT_BEING_DISPLAYED( "GLOCK_WL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_PRINTS();
                }
            }
        }
        if ((NOT (IS_VEH_DRIVEABLE( l_U221 ))) AND (DOES_VEHICLE_EXIST( l_U221 )))
        {
            SET_CAR_ENGINE_ON( l_U221, 0, 0 );
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1255(), 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (IS_GROUP_MEMBER( l_U220, sub_6187() ))
                {
                    if ((sub_5195( 1, 1 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U220, l_U241._fU0, l_U241._fU4, l_U241._fU8 + 2.50000000, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_1561(), l_U241._fU0, l_U241._fU4, l_U241._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))))
                    {
                        SET_PLAYER_CONTROL( sub_1255(), 0 );
                        SET_GROUP_SEPARATION_RANGE( sub_6187(), 100.00000000 );
                        if (sub_10493( l_U269 ))
                        {
                            sub_1334( ref l_U269, 0 );
                        }
                        if (DOES_BLIP_EXIST( l_U225 ))
                        {
                            l_U209 = 0;
                            REMOVE_BLIP( l_U225 );
                        }
                        l_U212 = 0;
                        l_U215 = 0;
                        SET_WIDESCREEN_BORDERS( 1 );
                        if ((NOT (IS_CHAR_IN_ANY_CAR( sub_1561() ))) AND (NOT (IS_CHAR_INJURED( sub_1561() ))))
                        {
                            CLEAR_CHAR_TASKS( sub_1561() );
                        }
                        while (NOT (sub_15088( sub_1561() )))
                        {
                            WAIT( 0 );
                        }
                        DO_SCREEN_FADE_OUT( 250 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        if (NOT (IS_CHAR_DEAD( sub_1561() )))
                        {
                            SET_PLAYER_CONTROL( sub_1255(), 0 );
                        }
                        STORE_WANTED_LEVEL( sub_1255(), ref l_U265 );
                        CLEAR_WANTED_LEVEL( sub_1255() );
                        CLEAR_AREA_OF_CARS( -1003.64000000, 662.17310000, 3.07770000, 20.00000000 );
                        CLEAR_AREA( l_U244._fU0, l_U244._fU4, l_U244._fU8, 20.00000000, 1 );
                        if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U221 ))
                            {
                                GET_CAR_MODEL( l_U221, ref l_U261 );
                                if (NOT (IS_CAR_UPSIDEDOWN( l_U221 )))
                                {
                                    if (IS_THIS_MODEL_A_HELI( l_U261 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( sub_1561() )))
                                        {
                                            SET_CHAR_COORDINATES( sub_1561(), -1013.60600000, 683.00160000, 2.81090000 );
                                            SET_CHAR_HEADING( sub_1561(), 245.15130000 );
                                        }
                                    }
                                    else
                                    {
                                        SET_CAR_COORDINATES( l_U221, -1014.50300000, 681.96420000, 2.81080000 );
                                        SET_CAR_HEADING( l_U221, 234.74880000 );
                                    }
                                    LOAD_SCENE( l_U244._fU0, l_U244._fU4, l_U244._fU8 );
                                    if (NOT l_U204)
                                    {
                                        BEGIN_CAM_COMMANDS( ref l_U300 );
                                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1561(), -1.50000000, 1.85000000, 0.85000000, ref l_U306._fU0, ref l_U306._fU4, ref l_U306._fU8 );
                                        CREATE_CAM( 14, ref l_U301 );
                                        SET_CAM_NEAR_DOF( l_U301, 0.10000000 );
                                        SET_CAM_FAR_DOF( l_U301, 6.00000000 );
                                        if (sub_15673( l_U221 ))
                                        {
                                            SET_CAM_POS( l_U301, -1009.41000000, 682.69000000, 5.19000000 );
                                        }
                                        else if (IS_THIS_MODEL_A_HELI( l_U261 ))
                                        {
                                            SET_CAM_POS( l_U301, -1003.10000000, 677.09000000, 6.04000000 );
                                            SET_CAM_NEAR_DOF( l_U301, 4.00000000 );
                                            SET_CAM_FAR_DOF( l_U301, 15.00000000 );
                                        }
                                        else
                                        {
                                            SET_CAM_POS( l_U301, -1009.41000000, 682.69000000, 4.19000000 );
                                        }
                                        SET_CAM_FOV( l_U301, 30.90000000 );
                                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                                        {
                                            GET_CHAR_COORDINATES( l_U220, ref l_U235._fU0, ref l_U235._fU4, ref l_U235._fU8 );
                                            POINT_CAM_AT_COORD( l_U301, l_U235._fU0, l_U235._fU4, l_U235._fU8 + 0.50000000 );
                                        }
                                        CREATE_CAM( 14, ref l_U302 );
                                        SET_CAM_POS( l_U302, -1005.85000000, 666.95000000, 3.52000000 );
                                        SET_CAM_FOV( l_U302, 40.00000000 );
                                        SET_CAM_ROT( l_U302, 2.63000000, 0.00000000, 34.51000000 );
                                        CREATE_CAM( 14, ref l_U303 );
                                        SET_CAM_POS( l_U303, -975.08000000, 645.71010000, 0.10000000 );
                                        SET_CAM_FOV( l_U303, 28.30000000 );
                                        SET_CAM_ROT( l_U303, 7.40000000, 0.00000000, 42.69000000 );
                                        SET_CAM_NEAR_DOF( l_U303, 8.00000000 );
                                        SET_CAM_FAR_DOF( l_U303, 30.00000000 );
                                        CREATE_CAM( 14, ref l_U304 );
                                        SET_CAM_POS( l_U304, -1007.29000000, 668.90000000, 5.70000000 );
                                        SET_CAM_FOV( l_U304, 46.60000000 );
                                        SET_CAM_ROT( l_U304, -12.84000000, 0.00000000, 21.10000000 );
                                        SET_CAM_NEAR_DOF( l_U304, 5.00000000 );
                                        SET_CAM_FAR_DOF( l_U304, 18.00000000 );
                                        l_U204 = 1;
                                    }
                                    SET_CAM_PROPAGATE( l_U301, 1 );
                                    SET_CAM_ACTIVE( l_U301, 1 );
                                    SET_USE_HIGHDOF( 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    l_U200 = 7;
                                }
                            }
                        }
                        else if (DOES_VEHICLE_EXIST( l_U221 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U221 ))
                            {
                                SET_CAR_COORDINATES( l_U221, -997.53810000, 694.98290000, 2.81090000 );
                                SET_CAR_HEADING( l_U221, 303.43290000 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( sub_1561() )))
                        {
                            SET_CHAR_COORDINATES( sub_1561(), -1012.85000000, 681.06720000, 2.81090000 );
                            SET_CHAR_HEADING( sub_1561(), 109.78210000 );
                            REMOVE_PED_HELMET( sub_1561(), 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
                            SET_CHAR_COORDINATES( l_U220, -1015.11400000, 680.35230000, 2.81090000 );
                            SET_CHAR_HEADING( l_U220, 261.55930000 );
                        }
                        LOAD_SCENE( l_U244._fU0, l_U244._fU4, l_U244._fU8 );
                        if (NOT l_U204)
                        {
                            BEGIN_CAM_COMMANDS( ref l_U300 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            CREATE_CAM( 14, ref l_U301 );
                            SET_CAM_POS( l_U301, -1012.58000000, 679.34000000, 4.41000000 );
                            SET_CAM_ROT( l_U301, -5.07000000, 0.00000000, 43.38000000 );
                            SET_CAM_FOV( l_U301, 55.20000000 );
                            SET_CAM_NEAR_DOF( l_U301, 0.10000000 );
                            SET_CAM_FAR_DOF( l_U301, 6.00000000 );
                            CREATE_CAM( 14, ref l_U302 );
                            SET_CAM_POS( l_U302, -1005.85000000, 666.95000000, 3.52000000 );
                            SET_CAM_FOV( l_U302, 40.00000000 );
                            SET_CAM_ROT( l_U302, 2.63000000, 0.00000000, 34.51000000 );
                            CREATE_CAM( 14, ref l_U303 );
                            SET_CAM_POS( l_U303, -975.08000000, 645.71010000, 0.10000000 );
                            SET_CAM_FOV( l_U303, 28.30000000 );
                            SET_CAM_ROT( l_U303, 7.40000000, 0.00000000, 42.69000000 );
                            SET_CAM_NEAR_DOF( l_U303, 8.00000000 );
                            SET_CAM_FAR_DOF( l_U303, 30.00000000 );
                            CREATE_CAM( 14, ref l_U304 );
                            SET_CAM_POS( l_U304, -1007.29000000, 668.90000000, 5.70000000 );
                            SET_CAM_FOV( l_U304, 46.60000000 );
                            SET_CAM_ROT( l_U304, -12.84000000, 0.00000000, 21.10000000 );
                            SET_CAM_NEAR_DOF( l_U304, 5.00000000 );
                            SET_CAM_FAR_DOF( l_U304, 18.00000000 );
                            l_U204 = 1;
                        }
                        SET_CAM_PROPAGATE( l_U301, 1 );
                        SET_CAM_ACTIVE( l_U301, 1 );
                        SET_USE_HIGHDOF( 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        l_U200 = 7;;
                    }
                }
            }
        }
        break;
        case 7:
        if (NOT l_U210)
        {
            DO_SCREEN_FADE_IN( 250 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            if (sub_13918( "PIE_DOCKS", ref l_U275, 6, 1 ))
            {
                WAIT( 250 );
                if (NOT (IS_CHAR_INJURED( sub_1561() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_1561(), l_U220, 6000, 0 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (NOT (IS_CHAR_INJURED( sub_1561() )))
                    {
                        TASK_LOOK_AT_CHAR( l_U220, sub_1561(), 4000, 0 );
                    }
                }
                l_U210 = 1;
            }
        }
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        sub_17578();
        if (NOT l_U218)
        {
            if (NOT l_U313)
            {
                if (sub_18079( ref l_U275 ))
                {
                    if (NOT l_U316)
                    {
                        l_U215 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U220 );
                            if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U221 ))
                                {
                                    if (IS_CHAR_IN_CAR( l_U220, l_U221 ))
                                    {
                                        TASK_LEAVE_CAR( l_U220, l_U221 );
                                        l_U313 = 1;
                                    }
                                }
                                else if (NOT (IS_CHAR_INJURED( l_U220 )))
                                {
                                    TASK_LEAVE_ANY_CAR( l_U220 );
                                }
                            }
                            else
                            {
                                l_U313 = 1;
                            }
                        }
                    }
                }
            }
            else if ((NOT (IS_CHAR_IN_ANY_CAR( l_U220 ))) AND (NOT (IS_CHAR_INJURED( l_U220 ))))
            {
                DELETE_OBJECT( ref l_U295[0] );
                CREATE_OBJECT( l_U259, -1003.64000000, 662.17310000, 63.07770000, ref l_U295[0], 1 );
                ATTACH_OBJECT_TO_PED( l_U295[0], l_U220, 1232, l_U250, l_U253, 0 );
                TASK_PERFORM_SEQUENCE( l_U220, l_U267 );
                CLEAR_SEQUENCE_TASK( l_U267 );
                SETTIMERA( 0 );
                l_U313 = 0;
                if (IS_VEH_DRIVEABLE( l_U221 ))
                {
                    SET_CAR_ENGINE_ON( l_U221, 0, 0 );
                    FORCE_CAR_LIGHTS( l_U221, 1 );
                }
                l_U200 = 8;
            }
        }
        break;
        case 8:
        sub_17578();
        if (NOT l_U218)
        {
            if (NOT l_U213)
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U220 )))
                {
                    SET_CHAR_COORDINATES( l_U220, -999.76290000, 668.51930000, 3.07840000 );
                    SET_CHAR_HEADING( l_U220, 200 );
                    WAIT( 250 );
                    SET_CAM_PROPAGATE( l_U303, 1 );
                    SET_CAM_ACTIVE( l_U303, 1 );
                    SET_CAM_PROPAGATE( l_U302, 0 );
                    SET_CAM_ACTIVE( l_U302, 0 );
                    l_U213 = 1;
                }
            }
            else
            {
                l_U214 = 0;
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U220, l_U244._fU0, l_U244._fU4, l_U244._fU8, 2, -2, 1.50000000 );
                }
                l_U200 = 9;
            }
        }
        break;
        case 9:
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        sub_17578();
        if (NOT l_U218)
        {
            if (LOCATE_CHAR_ON_FOOT_3D( l_U220, l_U244._fU0, l_U244._fU4, l_U244._fU8, 1.70000000, 1.70000000, 10.50000000, 0 ))
            {
                if (NOT l_U216)
                {
                    TASK_PERFORM_SEQUENCE( l_U220, l_U268 );
                    CLEAR_SEQUENCE_TASK( l_U268 );
                    l_U216 = 1;
                }
                else if (IS_CHAR_PLAYING_ANIM( l_U220, "misseddie1", "throw_object" ))
                {
                    l_U200 = 10;
                }
            }
        }
        break;
        case 10:
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        sub_17578();
        if (NOT l_U218)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U220, "misseddie1", "throw_object" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U220, "misseddie1", "throw_object", ref l_U311 );
                if (l_U311 > 0.71200000)
                {
                    if (NOT l_U314)
                    {
                        if (DOES_OBJECT_EXIST( l_U295[0] ))
                        {
                            DETACH_OBJECT( l_U295[0], 1 );
                            GET_OBJECT_COORDINATES( l_U295[0], ref l_U318._fU0, ref l_U318._fU4, ref l_U318._fU8 );
                            l_U321 = {sub_19216( l_U318, -985.40990000, 653.80000000, 3.93000000 )};
                            l_U321 = {sub_19280( l_U321 )};
                            l_U321 = {sub_19429( l_U321, -7.00000000 )};
                            APPLY_FORCE_TO_OBJECT( l_U295[0], 1, l_U321, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 1 );
                            l_U314 = 1;
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U220, "misseddie1", "throw_object" )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U220, l_U241._fU0, l_U241._fU4, l_U241._fU8, 3, -2, 1.00000000 );
                    WAIT( 3000 );
                    SET_CAM_PROPAGATE( l_U304, 1 );
                    SET_CAM_ACTIVE( l_U304, 1 );
                    SET_CAM_PROPAGATE( l_U303, 0 );
                    SET_CAM_ACTIVE( l_U303, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        CLEAR_CHAR_TASKS( l_U220 );
                        SET_ANIM_GROUP_FOR_CHAR( l_U220, "move_player" );
                        SET_CHAR_COORDINATES( l_U220, -1006.16000000, 670.24000000, 2.90000000 );
                        SET_CHAR_HEADING( l_U220, 47.92200000 );
                        CLEAR_CHAR_TASKS( l_U220 );
                        if (DOES_OBJECT_EXIST( l_U295[0] ))
                        {
                            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U259 );
                            DELETE_OBJECT( ref l_U295[0] );
                        }
                        l_U200 = 11;
                    }
                }
            }
        }
        break;
        case 11:
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        sub_17578();
        if (NOT l_U218)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
            {
                if (IS_VEH_DRIVEABLE( l_U221 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U220, l_U221, 20000, 0 );
                        SETTIMERA( 0 );
                        l_U200 = 12;
                    }
                }
            }
            else
            {
                GET_CHAR_COORDINATES( sub_1561(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    SETTIMERA( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U220, l_U229._fU0 + 2.00000000, l_U229._fU4 + 2.00000000, l_U229._fU8, 3, 20000, 2.50000000 );
                    l_U200 = 12;
                }
            }
        }
        break;
        case 12:
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        sub_17578();
        if (NOT l_U218)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
            {
                if (IS_VEH_DRIVEABLE( l_U221 ))
                {
                    if (IS_CHAR_IN_CAR( l_U220, l_U221 ))
                    {
                        SET_CAR_ENGINE_ON( l_U221, 1, 0 );
                        WAIT( 1000 );
                        if (IS_VEH_DRIVEABLE( l_U221 ))
                        {
                            FORCE_CAR_LIGHTS( l_U221, 2 );
                        }
                        l_U200 = 13;
                    }
                    else if (TIMERA() >= 20000)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
                        if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U221 ))
                            {
                                SET_CAR_ENGINE_ON( l_U221, 1, 0 );
                                FORCE_CAR_LIGHTS( l_U221, 2 );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U220, l_U221, 0 );
                            }
                        }
                    }
                }
            }
            else if (sub_4054() < 4.00000000)
            {
                SET_PLAYER_CONTROL_ADVANCED( sub_1255(), 1, 1, 1 );
                l_U200 = 13;
            }
            else if (TIMERA() >= 20000)
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
                GET_CHAR_COORDINATES( sub_1561(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
                SET_CHAR_COORDINATES( l_U220, l_U229._fU0 + 2.00000000, l_U229._fU4 + 2.00000000, l_U229._fU8 );
            };;;
        }
        break;
        case 13:
        if (NOT l_U309)
        {
            l_U215 = 1;
            SET_WIDESCREEN_BORDERS( 0 );
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U220, sub_6187() )))
                {
                    SET_GROUP_MEMBER( sub_6187(), l_U220 );
                }
                REMOVE_WEAPON_FROM_CHAR( l_U220, 57 );
                REQUEST_MODEL( 1040104843 );
                while (NOT (HAS_MODEL_LOADED( 1040104843 )))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U220, 3, 1, 0 );
                }
            }
            if (NOT (IS_CHAR_DEAD( sub_1561() )))
            {
                SET_PLAYER_CONTROL( sub_1255(), 1 );
            }
            END_CAM_COMMANDS( ref l_U300 );
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            l_U309 = 1;
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
            }
        }
        if (NOT l_U209)
        {
            if (IS_VEH_DRIVEABLE( l_U221 ))
            {
                if (IS_THIS_MODEL_A_HELI( l_U261 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_1561() )))
                    {
                        SET_CHAR_COORDINATES( sub_1561(), -1013.60600000, 683.00160000, 2.81090000 );
                        SET_CHAR_HEADING( sub_1561(), 245.15130000 );
                    }
                    FREEZE_CAR_POSITION( l_U221, 0 );
                }
            }
            else if (IS_VEH_DRIVEABLE( l_U221 ))
            {
                FREEZE_CAR_POSITION( l_U221, 0 );
            }
            sub_13918( "PIE_RID", ref l_U287, 6, 1 );
            SET_PLAYER_CONTROL_ADVANCED( sub_1255(), 1, 1, 1 );
            ALTER_WANTED_LEVEL( sub_1255(), l_U265 );
            l_U264 = 2;
            l_U263 = 2;
            l_U201 = 0;
            l_U204 = 0;
            l_U208 = 0;
            l_U214 = 0;
            SET_GROUP_SEPARATION_RANGE( sub_6187(), 30.00000000 );
            if (NOT (DOES_BLIP_EXIST( l_U224 )))
            {
                ADD_BLIP_FOR_COORD( l_U238._fU0, l_U238._fU4, l_U238._fU8, ref l_U224 );
                SET_ROUTE( l_U224, 1 );
                l_U209 = 1;
            }
        }
        else if (NOT (sub_10493( l_U287 )))
        {
            l_U209 = 0;
            l_U215 = 1;
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 0 );
            PRINT_NOW( "EDD1_PMT3", 7500, 1 );
            l_U200 = 14;
        }
        break;
        case 14:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            CLEAR_PRINTS();
            CLEAR_HELP();
            l_U309 = 0;
            l_U200 = 15;
        }
        break;
        case 15:
        if (NOT l_U209)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                l_U212 = 1;
                if (g_U64740 == 0)
                {
                    if (sub_13918( "PIE_BANT3", ref l_U269, 6, 1 ))
                    {
                        l_U209 = 1;
                    }
                }
                else if (g_U64740 == 1)
                {
                    if (sub_13918( "PIE_BANT4", ref l_U269, 6, 1 ))
                    {
                        l_U209 = 1;
                    }
                }
                else if (g_U64740 == 2)
                {
                    SAY_AMBIENT_SPEECH( l_U220, "listen_to_radio", 0, 0, 0 );
                    WAIT( 250 );
                    l_U209 = 1;
                };;;
            }
        }
        if ((NOT (IS_VEH_DRIVEABLE( l_U221 ))) AND (DOES_VEHICLE_EXIST( l_U221 )))
        {
            SET_CAR_ENGINE_ON( l_U221, 0, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if (IS_GROUP_MEMBER( l_U220, sub_6187() ))
            {
                if ((sub_5195( 1, 1 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( l_U220, l_U238._fU0, l_U238._fU4, l_U238._fU8 + 2.50000000, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_1561(), l_U238._fU0, l_U238._fU4, l_U238._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))))
                {
                    SET_PLAYER_CONTROL( sub_1255(), 0 );
                    if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
                    {
                        if ((NOT (IS_CAR_UPSIDEDOWN( l_U221 ))) AND (IS_VEH_DRIVEABLE( l_U221 )))
                        {
                            if (DOES_BLIP_EXIST( l_U224 ))
                            {
                                sub_1334( ref l_U269, 0 );
                                CLEAR_PRINTS();
                                SET_WIDESCREEN_BORDERS( 1 );
                                GET_CHAR_HEADING( sub_1561(), ref l_U257 );
                                if (l_U257 > 180)
                                {
                                    l_U219 = 1;
                                }
                                if (NOT l_U204)
                                {
                                    BEGIN_CAM_COMMANDS( ref l_U300 );
                                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                    CREATE_CAM( 14, ref l_U301 );
                                    if (l_U219)
                                    {
                                        SET_CAM_POS( l_U301, -383.39000000, 241.50000000, 22.34000000 );
                                        SET_CAM_FOV( l_U301, 46.20000000 );
                                        SET_CAM_ROT( l_U301, -19.40000000, 0.00000000, 62.99000000 );
                                        SET_CAM_NEAR_DOF( l_U301, 10.00000000 );
                                        SET_CAM_FAR_DOF( l_U301, 30.00000000 );
                                    }
                                    else
                                    {
                                        SET_CAM_POS( l_U301, -411.57000000, 247.70000000, 12.40000000 );
                                        SET_CAM_FOV( l_U301, 32.70000000 );
                                        SET_CAM_ROT( l_U301, 10.91000000, -0.00000000, -79.40000000 );
                                        SET_CAM_NEAR_DOF( l_U301, 2.00000000 );
                                        SET_CAM_FAR_DOF( l_U301, 15.00000000 );
                                    }
                                    SET_CAM_PROPAGATE( l_U301, 1 );
                                    SET_CAM_ACTIVE( l_U301, 1 );
                                    SET_USE_HIGHDOF( 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    CREATE_CAM( 14, ref l_U302 );
                                    if (l_U219)
                                    {
                                        SET_CAM_POS( l_U302, -394.99000000, 247.55000000, 14.88000000 );
                                        SET_CAM_FOV( l_U302, 57.00000000 );
                                        SET_CAM_ROT( l_U302, -7.50000000, 0.00000000, 63.12000000 );
                                        SET_CAM_NEAR_DOF( l_U302, 5.00000000 );
                                        SET_CAM_FAR_DOF( l_U302, 15.00000000 );
                                    }
                                    else
                                    {
                                        SET_CAM_POS( l_U302, -400.90000000, 250.62000000, 14.47000000 );
                                        SET_CAM_FOV( l_U302, 50.40000000 );
                                        SET_CAM_ROT( l_U302, 3.71000000, -0.00000000, -81.62001000 );
                                        SET_CAM_NEAR_DOF( l_U302, 0.10000000 );
                                        SET_CAM_FAR_DOF( l_U302, 10.00000000 );
                                    }
                                    l_U204 = 1;
                                }
                                if (IS_THIS_MODEL_A_HELI( l_U261 ))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U221 ))
                                    {
                                        FREEZE_CAR_POSITION( l_U221, 1 );
                                    }
                                }
                                if ((NOT (IS_CHAR_INJURED( l_U220 ))) AND (IS_VEH_DRIVEABLE( l_U221 )))
                                {
                                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U220 )))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U220, l_U221, 0 );
                                    }
                                }
                                REMOVE_BLIP( l_U224 );
                                l_U212 = 0;
                                l_U215 = 0;
                                CREATE_CAM( 3, ref l_U305 );
                                SET_CAM_PROPAGATE( l_U305, 1 );
                                if (l_U219)
                                {
                                    SET_CAM_INTERP_STYLE_CORE( l_U305, l_U301, l_U302, 20000, 0 );
                                }
                                else
                                {
                                    SET_CAM_INTERP_STYLE_CORE( l_U305, l_U301, l_U302, 25000, 0 );
                                }
                                l_U200 = 16;
                            }
                        }
                    }
                    else if (IS_CHAR_ON_FOOT( sub_1561() ))
                    {
                        if (DOES_BLIP_EXIST( l_U224 ))
                        {
                            sub_1334( ref l_U269, 0 );
                            CLEAR_PRINTS();
                            SET_WIDESCREEN_BORDERS( 1 );
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            if (NOT l_U204)
                            {
                                BEGIN_CAM_COMMANDS( ref l_U300 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                CREATE_CAM( 14, ref l_U301 );
                                SET_CAM_POS( l_U301, -388.72000000, 249.66000000, 15.02000000 );
                                SET_CAM_FOV( l_U301, 58.50000000 );
                                SET_CAM_ROT( l_U301, 9.17000000, 0.00000000, -147.42000000 );
                                SET_CAM_NEAR_DOF( l_U303, 0.10000000 );
                                SET_CAM_FAR_DOF( l_U303, 6.00000000 );
                                SET_CAM_PROPAGATE( l_U301, 1 );
                                SET_CAM_ACTIVE( l_U301, 1 );
                                SET_USE_HIGHDOF( 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                CREATE_CAM( 14, ref l_U302 );
                                SET_CAM_POS( l_U302, -407.72000000, 283.20000000, 19.36000000 );
                                SET_CAM_FOV( l_U302, 25.20000000 );
                                SET_CAM_ROT( l_U302, -5.41000000, -0.00000000, -148.89000000 );
                                SET_CAM_NEAR_DOF( l_U302, 40.00000000 );
                                SET_CAM_FAR_DOF( l_U302, 54.00000000 );
                                l_U204 = 1;
                            }
                            if (DOES_VEHICLE_EXIST( l_U221 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U221 ))
                                {
                                    SET_CAR_COORDINATES( l_U221, -390.52600000, 271.99220000, 13.36240000 );
                                    SET_CAR_HEADING( l_U221, 88.63690000 );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U221 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( sub_1561() )))
                            {
                                SET_CHAR_COORDINATES( sub_1561(), -387.03000000, 248.87520000, 13.64790000 );
                                SET_CHAR_HEADING( sub_1561(), 142.70040000 );
                                CLEAR_CHAR_TASKS( sub_1561() );
                                REMOVE_PED_HELMET( sub_1561(), 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U220 )))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U220 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
                                SET_CHAR_COORDINATES( l_U220, -388.53850000, 247.94770000, 13.63360000 );
                                SET_CHAR_HEADING( l_U220, 324.10090000 );
                            }
                            REMOVE_BLIP( l_U224 );
                            l_U212 = 0;
                            l_U215 = 0;
                            l_U200 = 16;
                        }
                    }
                }
            }
        }
        break;
        case 16:
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        if ((sub_17598()) AND (TIMERA() >= 2000))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U220 ))
            {
                TASK_LEAVE_ANY_CAR( l_U220 );
            }
            sub_1334( ref l_U281, 0 );
            l_U217 = 1;
            SETTIMERB( 0 );
            l_U200 = 18;
        }
        if (NOT l_U211)
        {
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 250 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_1561() )))
                {
                    TASK_LOOK_AT_CHAR( l_U220, sub_1561(), -2, 0 );
                }
            }
            if (sub_13918( "PIE_ARRIVE", ref l_U281, 6, 1 ))
            {
                WAIT( 250 );
                l_U211 = 1;
            }
        }
        if (NOT (sub_10493( l_U281 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U220 ))
            {
                TASK_LEAVE_ANY_CAR( l_U220 );
            }
            l_U200 = 17;
        }
        else if ((NOT l_U315) AND ((sub_23659( l_U281 )) == 0))
        {
            if (NOT (IS_CHAR_INJURED( sub_1561() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    TASK_LOOK_AT_CHAR( sub_1561(), l_U220, -2, 0 );
                    l_U315 = 1;
                }
            }
        }
        break;
        case 17:
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        if ((sub_17598()) AND (TIMERA() >= 2000))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U220 ))
            {
                TASK_LEAVE_ANY_CAR( l_U220 );
            }
            sub_1334( ref l_U281, 0 );
            l_U217 = 1;
            SETTIMERB( 0 );
            l_U200 = 18;
        }
        if (NOT l_U207)
        {
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U220 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 1 );
                    SET_CAM_PROPAGATE( l_U301, 0 );
                    SET_CAM_ACTIVE( l_U301, 0 );
                    SET_CAM_PROPAGATE( l_U302, 1 );
                    SET_CAM_ACTIVE( l_U302, 1 );
                    TASK_PERFORM_SEQUENCE( l_U220, l_U266 );
                    CLEAR_SEQUENCE_TASK( l_U266 );
                    SETTIMERB( 0 );
                    l_U207 = 1;
                    l_U200 = 18;
                }
            }
        }
        break;
        case 18:
        if (l_U214 == 0)
        {
            SETTIMERA( 0 );
            l_U214 = 1;
        }
        if ((sub_17598()) AND (TIMERA() >= 2000))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U220 ))
            {
                TASK_LEAVE_ANY_CAR( l_U220 );
            }
            sub_1334( ref l_U281, 0 );
            l_U217 = 1;
        }
        if ((TIMERB() > 9000) || ((NOT (IS_CHAR_ON_SCREEN( l_U220 ))) || ((l_U217 == 1) || (LOCATE_CHAR_ANY_MEANS_3D( l_U220, l_U247._fU0, l_U247._fU4, l_U247._fU8 + 1.00000000, 1.00000000, 1.00000000, 1.00000000, 0 )))))
        {
            if (DOES_CHAR_EXIST( l_U220 ))
            {
                DELETE_CHAR( ref l_U220 );
            }
            if (IS_VEH_DRIVEABLE( l_U221 ))
            {
                if (IS_THIS_MODEL_A_HELI( l_U261 ))
                {
                    FREEZE_CAR_POSITION( l_U221, 0 );
                }
                else
                {
                    FREEZE_CAR_POSITION( l_U221, 0 );
                }
            }
            if (NOT l_U309)
            {
                SET_WIDESCREEN_BORDERS( 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U300 );
                l_U309 = 1;
            }
            CLEAR_HELP();
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL_ADVANCED( sub_1255(), 1, 1, 1 );
            sub_1334( ref l_U281, 0 );
            RELEASE_WEATHER();
            sub_24471();
        }
        break;
    }
    return;
}

void sub_8817(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_9218(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_9262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9283( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_9283(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_9347( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_9347(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9369( iParam1 )))
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
    sub_10057( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9369(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9446( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9446( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9446( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9446(unknown uParam0)
{
    return;
}

void sub_10057(int iParam0, int iParam1)
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

int sub_10493(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9446( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9446( "\n speech is not playing" );
    }
    return 0;
}

int sub_10664(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_9446( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_9446( "\n CONVERSATION PAUSED AT LINE " );
            sub_10804( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_9446( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_9446( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_9446( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_10804(unknown uParam0)
{
    return;
}

void sub_12911(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_12928();
    return;
}

void sub_12928()
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

void sub_13030(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_13110( "\n PED NUMBER ", uParam0 );
    sub_13150( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_13110(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_13150(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_13918(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13939( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_13939(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9347( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_15088(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((IS_CHAR_STOPPED( uParam0 )) || (fVar3 < 2.50000000))
    {
        return 1;
    }
    return 0;
}

int sub_15673(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if ((IS_CAR_MODEL( uParam0, -1099960214 )) || ((IS_CAR_MODEL( uParam0, 1917016601 )) || ((IS_CAR_MODEL( uParam0, 1747439474 )) || ((IS_CAR_MODEL( uParam0, -845979911 )) || ((IS_CAR_MODEL( uParam0, -1900572838 )) || ((IS_CAR_MODEL( uParam0, -2137348917 )) || ((IS_CAR_MODEL( uParam0, 569305213 )) || ((IS_CAR_MODEL( uParam0, 904750859 )) || ((IS_CAR_MODEL( uParam0, 1353720154 )) || ((IS_CAR_MODEL( uParam0, 1938952078 )) || ((IS_CAR_MODEL( uParam0, -713569950 )) || ((IS_CAR_MODEL( uParam0, 850991848 )) || ((IS_CAR_MODEL( uParam0, 2053223216 )) || (IS_CAR_MODEL( uParam0, 1911513875 )))))))))))))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_17578()
{
    if ((IS_SCREEN_FADED_IN()) AND ((sub_17598()) AND (TIMERA() >= 2000)))
    {
        DO_SCREEN_FADE_OUT( 250 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (DOES_OBJECT_EXIST( l_U295[0] ))
        {
            DELETE_OBJECT( ref l_U295[0] );
        }
        if ((NOT (IS_CHAR_INJURED( l_U220 ))) AND (NOT (IS_CHAR_INJURED( sub_1561() ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1561() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1561(), ref l_U221 );
                if (IS_VEH_DRIVEABLE( l_U221 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U220, l_U221 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U220, l_U221, 0 );
                    }
                }
            }
            else
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
                GET_CHAR_COORDINATES( sub_1561(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
                SET_CHAR_COORDINATES( l_U220, l_U229._fU0 + 2.00000000, l_U229._fU4 + 2.00000000, l_U229._fU8 );
            }
        }
        sub_1334( ref l_U269, 0 );
        sub_1334( ref l_U275, 0 );
        CLEAR_PRINTS();
        l_U200 = 13;
        l_U218 = 1;
    }
    return;
}

int sub_17598()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_18079(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            return 0;
        }
    }
    return 1;
}

void sub_19216(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector Result;

    Result = {uParam0._fU0 - uParam3._fU0, uParam0._fU4 - uParam3._fU4, uParam0._fU8 - uParam3._fU8};
    return Result;
}

void sub_19280(unknown Result, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    uVar5 = Result._fU0;
    uVar6 = Result._fU4;
    uVar7 = Result._fU8;
    uVar8 = SQRT( ((Result._fU0 * Result._fU0) + (Result._fU4 * Result._fU4)) + (Result._fU8 * Result._fU8) );
    Result._fU0 *= 1.00000000 / uVar8;
    Result._fU4 *= 1.00000000 / uVar8;
    Result._fU8 *= 1.00000000 / uVar8;
    return Result;
}

void sub_19429(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    vector Result;

    Result = {uParam0._fU0 * uParam3, uParam0._fU4 * uParam3, uParam0._fU8 * uParam3};
    return Result;
}

void sub_23659(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_10493( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_24471()
{
    CLEAR_WANTED_LEVEL( sub_1255() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1334( ref l_U269, 0 );
    sub_1334( ref l_U287, 0 );
    sub_1334( ref l_U281, 0 );
    sub_1334( ref l_U275, 0 );
    sub_24547( l_U293 );
    sub_28680( 40 );
    UNLOCK_MISSION_NEWS_STORY( 40 );
    sub_1652();
    return;
}

void sub_24547(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_654( uParam0 );
    if (NOT g_U34048[uVar3]._fU4)
    {
        sub_774( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_24669( uParam0 );
    g_U34048[uVar3]._fU28++;
    return;
}

void sub_24669(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_24799();
        break;
        case 39:
        sub_25761();
        break;
        case 40:
        sub_26020();
        break;
        case 48:
        sub_26203();
        break;
        case 41:
        sub_26388();
        break;
        case 42:
        sub_26584();
        break;
        case 43:
        sub_26765();
        break;
        case 44:
        sub_26948();
        break;
        case 45:
        sub_27129();
        break;
        case 46:
        sub_27308();
        break;
        case 47:
        sub_27619();
        break;
        case 49:
        sub_27819();
        break;
        case 50:
        sub_27996();
        break;
        case 51:
        sub_28194();
        break;
        default: sub_774( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_28469();
    sub_28542();
    return;
}

void sub_24799()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 500 );
        break;
        default: sub_774( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_24839(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_24892( iParam0, uParam1, uParam2 );
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
        sub_25024( iParam0 + 0 );
    }
    return;
}

void sub_24892(int iParam0, int iParam1, int iParam2)
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
        sub_25024( iParam0 + 0 );
    }
    return;
}

void sub_25024(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_25055( iParam0->_fU4 )))
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

int sub_25055(unknown uParam0)
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

void sub_25485(unknown uParam0)
{
    sub_25496( uParam0 );
    return;
}

void sub_25496(unknown uParam0)
{
    ADD_SCORE( sub_1255(), uParam0 );
    sub_25521( uParam0 );
    return;
}

void sub_25521(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_774( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_25761()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_654( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 100 );
        sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_25485( 200 );
        sub_24839( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_25485( 500 );
        break;
        default: sub_774( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_26020()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        default: sub_774( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_26203()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        default: sub_774( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_26388()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        case 2:
        sub_25485( 0 );
        break;
        default: sub_774( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_26584()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        default: sub_774( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_26765()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 500 );
        break;
        default: sub_774( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_26948()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        default: sub_774( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_27129()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 1000 );
        break;
        default: sub_774( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_27308()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_654( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 1000 );
        sub_27395( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_25485( 5000 );
        sub_24839( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_774( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_27395(int iParam0)
{
    sub_27408( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_27408(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_27619()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        case 2:
        sub_25485( 0 );
        break;
        default: sub_774( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_27819()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 500 );
        break;
        default: sub_774( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_27996()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        case 2:
        sub_25485( 0 );
        break;
        default: sub_774( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_28194()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_654( iVar2 );
    sub_24839( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_25485( 0 );
        break;
        case 2:
        sub_25485( 1000 );
        break;
        default: sub_774( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_28469()
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

void sub_28542()
{
    sub_28551();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_28551()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_28680(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_28767( iParam0 ))
    {
        sub_29221( iParam0 );
    }
    return;
}

int sub_28767(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_24839( ref uVar3, 1, 0, 0 );
    sub_28840( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_9446( "\n ----------------------------------------------------------------" );
    sub_13110( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_9446( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_28840(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_29221(unknown uParam0)
{
    int iVar3;
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_29432( 20, 6, 16383, 16383, ref uVar4 );
        sub_30108( ref uVar4, 7 );
        sub_30139( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_29432( 20, 7, 9, 16383, ref uVar4 );
        sub_30108( ref uVar4, 7 );
        sub_30139( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_29432(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_29456( uParam0, 0, iParam4 + 0 );
    sub_29456( uParam1, 1, iParam4 + 0 );
    sub_29456( uParam2, 2, iParam4 + 0 );
    sub_29456( uParam3, 3, iParam4 + 0 );
    sub_29456( 0, 4, iParam4 + 0 );
    sub_29456( 1, 5, iParam4 + 0 );
    sub_29456( 65535, 6, iParam4 + 0 );
    sub_29456( 0, 12, iParam4 + 0 );
    sub_29456( 0, 11, iParam4 + 0 );
    sub_29456( 0, 14, iParam4 + 0 );
    sub_29456( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_29456( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_29456( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_29456(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_30108(int iParam0, unknown uParam1)
{
    sub_29456( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_30139(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_30179())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_30866( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_30665( iVar5 );
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

int sub_30179()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_30213( 5, g_U968[I] )) == 7)
        {
            sub_30665( I );
            return 1;
        }
    }
    return 0;
}

int sub_30213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_30665(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_30738( 39 );
    return;
}

void sub_30738(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_30866(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_30927( uParam0, g_U968[Result] ))
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

int sub_30927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

