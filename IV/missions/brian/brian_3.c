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
    l_U204 = 0;
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
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U224 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U231 = 0;
    l_U232 = 0;
    l_U233 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U239 = 0;
    l_U240 = 0;
    l_U241 = 0;
    l_U242 = 0;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U249 = 0;
    l_U250 = 0;
    l_U251 = 0;
    l_U252 = 0;
    l_U253 = 0;
    l_U254 = 0;
    l_U255 = 0;
    l_U256 = 0;
    l_U257 = 0;
    l_U258 = 0;
    l_U259 = 0;
    l_U260 = 0;
    l_U261 = 0;
    l_U262 = 0;
    l_U360 = {-10.00000000, 0.00000000, 0.00000000};
    l_U363 = {-1.00000000, 0.00000000, 0.00000000};
    l_U369 = 0;
    l_U375 = 0;
    l_U377 = 0;
    l_U384 = 0;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 3000;
    l_U400 = 3;
    l_U401 = 0;
    l_U402 = 0;
    l_U409 = 0;
    l_U452 = 39;
    if (sub_637( l_U452, l_U400 ))
    {
        if (IS_PLAYER_PLAYING( sub_1338() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1338(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1412();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U221)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (NOT l_U256)
                            {
                                if (g_U10978)
                                {
                                    sub_1412();
                                }
                            }
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1338(), 0 )))
                            {
                                sub_2807( ref l_U268 );
                                sub_2960();
                                if ((sub_3380( ref l_U263, 22.00000000 )) || (sub_3288( ref l_U263 )))
                                {
                                    sub_3557();
                                }
                                switch (l_U197)
                                {
                                    case 0:
                                    sub_4088();
                                    break;
                                    case 1:
                                    sub_5613();
                                    break;
                                }
                            }
                            else if ((sub_2995( ref l_U263 )) < 7.00000000)
                            {
                                if (NOT g_U65019)
                                {
                                    g_U65019 = 1;
                                    l_U247 = 1;
                                }
                            }
                            sub_1412();;
                        }
                        else
                        {
                            sub_1412();
                        }
                    }
                    if (l_U221)
                    {
                        sub_2807( ref l_U268 );
                        sub_11165();
                        switch (l_U198)
                        {
                            case 0:
                            l_U198 = 1;
                            break;
                            case 1:
                            sub_11594();
                            break;
                            case 2:
                            sub_29152();
                            break;
                            case 3:
                            if (sub_38536( ref l_U508 ))
                            {
                                sub_3557();
                            }
                            break;
                        }
                        if ((NOT l_U223) AND (IS_KEYBOARD_KEY_PRESSED( 31 )))
                        {
                            l_U223 = 1;
                            sub_33495();
                        }
                    }
                }
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
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_637(unknown uParam0, unknown uParam1)
{
    if (sub_646())
    {
        return 0;
    }
    return sub_693( uParam0, uParam1 );
}

int sub_646()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_693(unknown uParam0, int iParam1)
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
    uVar4 = sub_737( uParam0 );
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
        if (sub_1014( g_U34048[uVar4]._fU8 ))
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

int sub_737(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_748( uParam0 )))
    {
        sub_857( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_748(unknown uParam0)
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

void sub_857(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_1014(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1183( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1183(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1338()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1412()
{
    if (sub_1431( l_U452, l_U400 ))
    {
        sub_1527( l_U452, l_U400 );
        if (IS_PLAYER_PLAYING( sub_1338() ))
        {
            SET_PLAYER_CONTROL( sub_1338(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U263, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_2032() );
        }
        sub_2080();
        sub_2127( 0 );
    }
    SWITCH_PED_PATHS_ON( 1085.95000000, 118.96000000, 100.00000000, 1081.44000000, 220.15000000, -100.00000000 );
    SWITCH_PED_PATHS_ON( 1086.82000000, 124.94000000, 100.00000000, 1026.94000000, 120.65000000, -100.00000000 );
    if (l_U250)
    {
        SWITCH_PED_PATHS_ON( 983.48730000, -518.37180000, 18.31040000, 980.05170000, -470.10850000, -1.00000000 );
    }
    if (l_U425[0] == 1)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 907.59990000, -66.99970000, 30.45980000, 897.14400000, 8.81930000, -1.00000000 );
    }
    CLEAR_NAMED_CUTSCENE( "Rpbri3" );
    if (l_U247)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U414[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_2", 7500, 1 );
    }
    else if (l_U414[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_4", 7500, 1 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2032(), 1 );
    sub_2611( ref l_U263 );
    sub_2669();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1431(int iParam0, int iParam1)
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

void sub_1527(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1431( uParam0, uParam1 )))
    {
        sub_857( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1623();
    if (g_U813)
    {
        sub_1715();
    }
    else
    {
        sub_1833();
    }
    g_U10978 = 0;
    return;
}

void sub_1623()
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

void sub_1715()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1761();
    return;
}

void sub_1761()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1833()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1879();
    return;
}

void sub_1879()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2032()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2080()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2127(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_2611(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
    }
    return;
}

void sub_2669()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2807(unknown uParam0)
{
    int iVar3;

    if (sub_2817( ref iVar3 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( iVar3 )))
        {
            if ((uParam0^) != iVar3)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( uParam0 );
                (uParam0^) = iVar3;
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
            }
        }
    }
    return;
}

int sub_2817(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2032() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2032(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_2960()
{
    if (l_U230)
    {
        if (IS_HINT_RUNNING())
        {
            if ((sub_3160()) || ((sub_2995( ref l_U263 )) > 18.00000000))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U263, 0, 0, 0 );
                l_U230 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_2995(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2032(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_3160()
{
    if (sub_2817( ref l_U268 ))
    {
        GET_CAR_SPEED( l_U268, ref l_U379 );
        if (l_U379 > 15.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3288(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2032(), 0 ))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_3380(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_2995( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_2032() ))
                {
                    if (IS_CHAR_ARMED( sub_2032(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1338(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1338(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_2032() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3557()
{
    sub_3570( ref l_U263 );
    for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
    {
        if (DOES_CHAR_EXIST( l_U264[l_U402] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U264[l_U402] )))
            {
                SET_CHAR_KEEP_TASK( l_U264[l_U402], 1 );
                TASK_SMART_FLEE_CHAR( l_U264[l_U402], sub_2032(), 100.00000000, -1 );
            }
        }
    }
    if (g_U65025 < 2)
    {
        g_U65025++;
    }
    g_U65026++;
    if (g_U65026 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1338(), 150 );
        SAY_AMBIENT_SPEECH( sub_2032(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_3877( ref l_U263 );
    sub_1412();
    return;
}

void sub_3570(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_3877(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                if (sub_3936( ref uVar3, (uParam0^) ))
                {
                    SET_CHAR_KEEP_TASK( (uParam0^), 1 );
                    TASK_LEAVE_CAR_IMMEDIATELY( (uParam0^), uVar3 );
                }
            }
        }
    }
    return;
}

int sub_3936(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (NOT (IS_CAR_DEAD( (uParam0^) )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_4088()
{
    switch (l_U196)
    {
        case 0:
        l_U276 = {1080.79500000, 129.04860000, 33.19740000};
        l_U376 = 297.62340000;
        l_U279 = {926.51810000, -53.00000000, 25.37680000};
        l_U374 = 0.28570000;
        l_U318 = {927.96970000, -51.37780000, 25.23050000};
        l_U373 = 181.74210000;
        l_U282 = {907.59600000, -52.64800000, 28.53400000};
        l_U321 = {984.84200000, -477.94900000, 17.28400000};
        l_U394 = 422305098;
        l_U395 = -301223260;
        l_U396 = -1143910864;
        l_U403[0] = 0;
        l_U403[1] = 0;
        l_U410 = 2;
        l_U418 = 400;
        l_U354 = {-0.30534300, 1.56991100, 0.01601700};
        l_U345 = {0.00000000, -1.00000000, 0.00000000};
        l_U380 = -0.50000000;
        for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
        {
            l_U406[l_U402] = 0;
            l_U411[l_U402] = 0;
            l_U419[l_U402] = 0;
            l_U432[l_U402] = 200;
        }
        REQUEST_MODEL( l_U394 );
        REQUEST_ANIMS( "missbrian_3" );
        sub_4512( "PIBAUD" );
        sub_4631( 0, sub_2032(), "NIKO", 0 );
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U226)
        {
            if (HAS_MODEL_LOADED( l_U394 ))
            {
                CLEAR_AREA( 964.50590000, -141.69720000, 24.04020000, 10.00000000, 1 );
                CREATE_CHAR( 26, l_U394, l_U276._fU0, l_U276._fU4, l_U276._fU8, ref l_U263, 1 );
                SET_CHAR_PROP_INDEX( l_U263, 0, 0 );
                SET_CHAR_HEADING( l_U263, l_U376 );
                SET_CHAR_HEALTH( l_U263, 200 );
                SET_CHAR_MONEY( l_U263, 1500 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U263, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U263, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U263, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U263, 1 );
                TASK_STAND_GUARD( l_U263, l_U276, l_U376, 0.00000000, 0, -1 );
                sub_4631( 1, l_U263, "BRIAN", 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U263, 0, 0, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U263, 1 );
                SET_BRIANS_MOOD( 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U263, 1 );
                sub_5104( ref l_U263, ref l_U269, 1 );
                sub_5253( ref l_U263, 20.00000000, 10.00000000 );
                l_U226 = 1;
            }
        }
        if ((l_U226) AND (NOT l_U225))
        {
            if (HAVE_ANIMS_LOADED( "missbrian_3" ))
            {
                TASK_PLAY_ANIM( l_U263, "friendly_idle", "missbrian_3", 8.00000000, 1, 0, 0, 0, -2 );
                l_U225 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        if ((l_U226) AND (l_U225))
        {
            l_U197 = 1;
            PRINTSTRING( "initialise done" );
            PRINTNL();
            PRINTSTRING( "initialise done" );
            PRINTNL();
            PRINTSTRING( "initialise done" );
            PRINTNL();
            PRINTSTRING( "initialise done" );
            PRINTNL();
        }
        break;
    }
    return;
}

void sub_4512(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4529();
    return;
}

void sub_4529()
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

void sub_4631(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4711( "\n PED NUMBER ", uParam0 );
    sub_4751( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4711(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4751(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5104(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            if (bParam2)
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 63 );
            }
            else
            {
                CHANGE_BLIP_SPRITE( (uParam1^), 64 );
            }
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CHANGE_BLIP_SCALE( (uParam1^), 1.00000000 );
            CHANGE_BLIP_DISPLAY( (uParam1^), 2 );
        }
    }
    return;
}

void sub_5253(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), uParam1 );
            SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), uParam2 );
        }
    }
    return;
}

void sub_5613()
{
    sub_5666( ref l_U263, ref l_U430, "GENERIC_HI", "GENERIC_DEJECTED", ref l_U258 );
    switch (l_U199)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U263 )))
        {
            if (NOT l_U215)
            {
                if (sub_2817( ref l_U268 ))
                {
                    if ((sub_2995( ref l_U263 )) < 10.00000000)
                    {
                        sub_5919();
                    }
                }
                else if (IS_CHAR_ON_FOOT( sub_2032() ))
                {
                    if ((sub_2995( ref l_U263 )) < 10.00000000)
                    {
                        sub_5919();
                    }
                }
            }
        }
        break;
        case 1: break;
    }
    if (IS_CHAR_ON_FOOT( sub_2032() ))
    {
        sub_6128( ref l_U263, ref l_U444, ref l_U276, ref l_U376, ref l_U253, 0.50000000, "friendly_idle", "missbrian_3", 0, 1 );
        switch (l_U200)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U263, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U297._fU0, ref l_U297._fU4, ref l_U297._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U263, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2032(), l_U297._fU0, l_U297._fU4, l_U297._fU8, l_U300._fU0, l_U300._fU4, l_U300._fU8, 6.00000000, 0 ))
            {
                if (sub_6646())
                {
                    CLEAR_PRINTS();
                    SET_PLAYER_CONTROL( sub_1338(), 0 );
                    SET_MISSION_FLAG( 1 );
                    sub_6735( l_U452, l_U400 );
                    l_U256 = 1;
                    DO_SCREEN_FADE_OUT( 100 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_HINT_RUNNING())
                    {
                        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U263, 0, 0, 0 );
                    }
                    SWITCH_PED_PATHS_OFF( 1085.95000000, 118.96000000, 100.00000000, 1081.44000000, 220.15000000, -100.00000000 );
                    SWITCH_PED_PATHS_OFF( 1086.82000000, 124.94000000, 100.00000000, 1026.94000000, 120.65000000, -100.00000000 );
                    GET_CHAR_COORDINATES( sub_2032(), ref l_U291._fU0, ref l_U291._fU4, ref l_U291._fU8 );
                    CLEAR_AREA( l_U291._fU0, l_U291._fU4, l_U291._fU8, 100.00000000, 1 );
                    LOAD_ADDITIONAL_TEXT( "PIBAUD", 6 );
                    CLEAR_NAMED_CUTSCENE( "Rpbri3" );
                    START_CUTSCENE_NOW( "Rpbri3" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_9382();
                    SET_PLAYER_CONTROL_ADVANCED( sub_1338(), 1, 1, 1 );
                    SET_CAM_BEHIND_PED( sub_2032() );
                    DO_SCREEN_FADE_IN( 500 );
                    l_U204 = 0;
                    l_U224 = 1;
                    l_U198 = 1;
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_5666(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_5680( uParam1, 7000 ))
    {
        if ((sub_2995( uParam0 )) < 15)
        {
            if (NOT (uParam4^))
            {
                SAY_AMBIENT_SPEECH( (uParam0^), uParam2, 1, 0, 2 );
                GET_GAME_TIMER( uParam1 );
                (uParam4^) = 1;
            }
            else
            {
                SAY_AMBIENT_SPEECH( (uParam0^), uParam3, 1, 0, 2 );
                GET_GAME_TIMER( uParam1 );
                (uParam4^) = 0;
            }
        }
    }
    return;
}

int sub_5680(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_5919()
{
    if (IS_CHAR_ON_FOOT( sub_2032() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U263, 0, 0, 6000 );
    }
    l_U230 = 1;
    l_U199 = 1;
    return;
}

void sub_6128(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_6646()
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

void sub_6735(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_857( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_737( uParam0 );
    if (g_U34175._fU4)
    {
        sub_857( "Interactions_Started: Another interaction is already taking place" );
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
        sub_857( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_7098();
    sub_7869( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8013( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7098()
{
    sub_7107();
    sub_7210( ref g_U9893._fU68 );
    sub_7259();
    return;
}

void sub_7107()
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

void sub_7210(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7259()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7297( 1, g_U569[I] )) == 0)
        {
            sub_7548( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7726())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7297(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7548(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7633( g_U569 - 1 );
    return;
}

void sub_7633(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7726()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7297( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7869(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_7903();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7903()
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

void sub_8013(unknown uParam0, int iParam1)
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
    sub_8859( cVar4 );
    return;
}

void sub_8859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_9382()
{
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2032(), 0 );
    CLEAR_WANTED_LEVEL( sub_1338() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    REQUEST_MODEL( l_U395 );
    REQUEST_MODEL( l_U396 );
    REQUEST_MODEL( 1758564455 );
    REQUEST_ANIMS( "gestures@niko" );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U435 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U436 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U437 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U439 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U440 );
    LOAD_ADDITIONAL_TEXT( "WI_BR3", 0 );
    sub_9573( "Rpbri3" );
    l_U221 = 1;
    LOAD_ALL_OBJECTS_NOW();
    LOAD_SCENE( l_U276._fU0, l_U276._fU4, l_U276._fU8 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U435, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U435, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U435, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U435, 22 );
    if (NOT (IS_CHAR_INJURED( l_U263 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U263 );
        l_U276 = {1084.79600000, 129.01850000, 33.19300000};
        SET_CHAR_HEADING( l_U263, l_U376 );
        SET_CHAR_COORDINATES( l_U263, l_U276._fU0, l_U276._fU4, l_U276._fU8 );
        sub_9949( ref l_U263, ref l_U439, ref l_U440 );
    }
    SET_CHAR_HEADING( sub_2032(), 242.75500000 );
    SET_CHAR_COORDINATES( sub_2032(), 1084.60100000, 131.47140000, 33.13970000 );
    CLEAR_PRINTS();
    PRINT_NOW( "BR3_PMT5", 7500, 1 );
    GET_GAME_TIMER( ref l_U401 );
    GET_GAME_TIMER( ref l_U430 );
    REMOVE_BLIP( l_U269 );
    SWITCH_PED_PATHS_ON( 1085.95000000, 118.96000000, 100.00000000, 1081.44000000, 220.15000000, -100.00000000 );
    SWITCH_PED_PATHS_ON( 1086.82000000, 124.94000000, 100.00000000, 1026.94000000, 120.65000000, -100.00000000 );
    l_U508._fU0 = l_U263;
    l_U508._fU8 = {994.45000000, -530.98000000, 14.00400000};
    l_U508._fU20 = 0.20000000;
    l_U508._fU24 = {998.41690000, -529.10100000, 14.12980000};
    l_U508._fU36 = 208.70850000;
    l_U508._fU40 = {998.11790000, -531.37020000, 14.08990000};
    l_U508._fU52 = 31.15340000;
    l_U508._fU116[0] = {990.62630000, -521.65950000, 16.29690000};
    l_U508._fU144[0] = {-3.23098400, -3.08906700, -152.88060000};
    l_U508._fU172[0] = 29.70004000;
    l_U508._fU116[1] = {995.70930000, -527.63090000, 15.15807000};
    l_U508._fU144[1] = {4.36110200, 0.00000000, -134.50060000};
    l_U508._fU172[1] = 30.30004000;
    l_U508._fU208[0] = 0;
    l_U508._fU208[1] = 0;
    l_U508._fU184[0] = 0.01000000;
    l_U508._fU196[0] = 150.00000000;
    l_U508._fU184[1] = 0.01000000;
    l_U508._fU196[1] = 150.00000000;
    l_U508._fU56 = {995.52000000, -556.28000000, 50.00000000};
    l_U508._fU68 = {985.86000000, -466.76000000, -50.00000000};
    l_U508._fU80 = {1006.29000000, -555.03000000, 50.00000000};
    l_U508._fU92 = {996.76000000, -468.20000000, -50.00000000};
    l_U508._fU104 = {1012.08000000, -530.54000000, 14.71000000};
    l_U508._fU248 = "PIB_FAIL";
    return;
}

void sub_9573(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_9949(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam2^) );
            N_1061756705( (uParam1^), 12 );
            N_1061756705( (uParam1^), 9 );
            N_1061756705( (uParam1^), 7 );
            N_1061756705( (uParam1^), 15 );
            N_1061756705( (uParam1^), 31 );
            N_1061756705( (uParam1^), 43 );
            N_1061756705( (uParam1^), 36 );
            N_1061756705( (uParam1^), 37 );
            N_1061756705( (uParam1^), 13 );
            N_1061756705( (uParam1^), 56 );
            N_1061756705( (uParam1^), 79 );
            N_1061756705( (uParam1^), 11 );
            N_1061756705( (uParam1^), 20 );
            N_1061756705( (uParam1^), 46 );
            N_1061756705( (uParam1^), 44 );
            N_1061756705( (uParam1^), 125 );
            N_1061756705( (uParam1^), 17 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 413, 0, 100, 100, 100, 0, 1 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 412, 0, 10, 10, 10, 0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_11165()
{
    if (NOT l_U262)
    {
        if (sub_11189( ref l_U263 ))
        {
            CLEAR_PRINTS();
            PRINT( "BRIAN1_PROMPT_4", 7500, 1 );
            sub_3557();
        }
        if (DOES_CHAR_EXIST( l_U263 ))
        {
            if ((sub_2995( ref l_U263 )) > 200.00000000)
            {
                CLEAR_PRINTS();
                PRINT_NOW( "BR3_PMT3", 7500, 1 );
                sub_3557();
            }
        }
        if (l_U259)
        {
            GET_CHAR_HEALTH( l_U263, ref l_U431 );
            if (l_U431 < 9900)
            {
                if (NOT l_U260)
                {
                    UNLOCK_RAGDOLL( l_U263, 1 );
                    if (SWITCH_PED_TO_RAGDOLL( l_U263, 250, 1000, 0, 1, 1, 0 ))
                    {
                        l_U260 = 1;
                    }
                }
                else if ((l_U254) || (IS_PED_RAGDOLL( l_U263 )))
                {
                    SET_CHAR_HEALTH( l_U263, 13 );
                    CLEAR_PRINTS();
                    PRINT( "BRIAN1_PROMPT_4", 7500, 1 );
                    sub_3557();
                }
            }
        }
    }
    return;
}

int sub_11189(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_11594()
{
    if (l_U422[0] == 1)
    {
        if (NOT (l_U406[0] == 1))
        {
            if (sub_11641( ref l_U409, 1000 ))
            {
                l_U406[0] = 1;
                sub_11736();
            }
        }
    }
    if ((l_U202 == 3) || (l_U202 == 1))
    {
        sub_12331();
    }
    if ((NOT l_U204) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
    {
        SET_CHAR_COORDINATES( sub_2032(), 906.53410000, -62.06080000, 26.37700000 );
        l_U204 = 1;
    }
    switch (l_U202)
    {
        case 0:
        if (NOT l_U257)
        {
            if (sub_5680( ref l_U430, 500 ))
            {
                SAY_AMBIENT_SPEECH( l_U263, "NEED_A_VEHICLE", 1, 0, 2 );
                TASK_LOOK_AT_CHAR( l_U263, sub_2032(), -2, 0 );
                l_U257 = 1;
            }
        }
        if (sub_13215( ref l_U263, 200 ))
        {
            sub_2127( 0 );
            CLEAR_PRINTS();
            PRINT_NOW( "BRIAN1_PROMPT_2", 7500, 1 );
            sub_3557();
        }
        sub_6128( ref l_U263, ref l_U444, ref l_U276, ref l_U376, ref l_U253, 0.50000000, "friendly_idle", "missbrian_3", 1, 0 );
        sub_13451( ref l_U263, ref l_U269, "BR3_PMT6", "BR3_PMT5" );
        if (sub_13617( l_U263 ))
        {
            if (DOES_BLIP_EXIST( l_U269 ))
            {
                CLEAR_CHAR_TASKS( l_U263 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U263, 0 );
                sub_13756( ref l_U263, ref l_U441, ref l_U438, 0 );
                SWITCH_ROADS_OFF( 907.59990000, -66.99970000, 50.00000000, 897.14400000, 8.81930000, -50.00000000 );
                l_U425[0] = 1;
                CLEAR_AREA( l_U279._fU0, l_U279._fU4, l_U279._fU8, 50.00000000, 1 );
                CREATE_CHAR( 26, l_U395, l_U279._fU0, l_U279._fU4, l_U279._fU8, ref l_U264[0], 1 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U264[0], 1 );
                GIVE_WEAPON_TO_CHAR( l_U264[0], 1, 1, 0 );
                sub_4631( 2, l_U264[0], "PIB_THUG", 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[0], 1 );
                SET_CHAR_AS_ENEMY( l_U264[0], 1 );
                CREATE_CHAR( 26, l_U396, l_U318._fU0, l_U318._fU4, l_U318._fU8, ref l_U264[1], 1 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U264[1], 1 );
                GIVE_WEAPON_TO_CHAR( l_U264[1], 1, 1, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[1], 1 );
                SET_CHAR_AS_ENEMY( l_U264[1], 1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U264[0], l_U264[1] );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U264[1], l_U264[0] );
                PRINTSTRING( "fail 1" );
                PRINTNL();
                sub_14567( l_U264[0], "street_chat_b", "missbrian_3", l_U446[0], l_U264[1], 999999 );
                sub_14567( l_U264[1], "street_chat_b", "missbrian_3", l_U446[1], l_U264[0], 999999 );
                REMOVE_BLIP( l_U269 );
                CLEAR_PRINTS();
                ADD_BLIP_FOR_COORD( l_U282._fU0, l_U282._fU4, l_U282._fU8, ref l_U270 );
                SET_ROUTE( l_U270, 1 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_AREA_OF_COPS( l_U282._fU0, l_U282._fU4, l_U282._fU8, 100.00000000 );
                GET_GAME_TIMER( ref l_U401 );
                l_U202 = 1;
            }
        }
        break;
        case 1:
        sub_14964( ref l_U269, ref l_U270, ref l_U282, "BR3_PMT1", "BR3_PMT9", ref l_U252, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
        if (NOT l_U252)
        {
            sub_15296( ref l_U263, ref l_U269, ref l_U282, ref l_U270, "BR3_PMT2", "BR3_PMT1", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U441, ref l_U438 );
        }
        else
        {
            sub_15582( ref l_U263, ref l_U269, "BR3_PMT2", ref l_U441, ref l_U438 );
        }
        if (sub_15788( ref l_U264[0], 920.87170000, -52.78800000, 25.82120000, 18.00000000, 4.00000000, 4.00000000 ))
        {
            for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
            {
                SET_CHAR_KEEP_TASK( l_U264[l_U402], 1 );
                TASK_SMART_FLEE_CHAR( l_U264[l_U402], sub_2032(), 100.00000000, -1 );
            }
            CLEAR_PRINTS();
            sub_2127( 0 );
            GET_GAME_TIMER( ref l_U508._fU220 );
            PRINT_NOW( "BR3_PMT11", 7500, 1 );
            if (DOES_BLIP_EXIST( l_U270 ))
            {
                REMOVE_BLIP( l_U270 );
            }
            l_U262 = 1;
            l_U198 = 3;
        }
        sub_16076();
        if (NOT (IS_CHAR_INJURED( l_U263 )))
        {
            if (DOES_BLIP_EXIST( l_U270 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2032(), l_U282._fU0, l_U282._fU4, l_U282._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (sub_19285() < 10.00000000)
                    {
                        if (sub_19457())
                        {
                            sub_19874( ref l_U263, ref l_U268 );
                            if (sub_20330( ref l_U268 ))
                            {
                                SET_PLAYER_CONTROL( sub_1338(), 0 );
                                TASK_CAR_TEMP_ACTION( sub_2032(), l_U268, 6, 100 );
                                l_U232 = 1;
                                GET_GAME_TIMER( ref l_U401 );
                                l_U202 = 3;
                            }
                            else
                            {
                                sub_20451();
                            }
                        }
                    }
                    else if (NOT g_U65018)
                    {
                        PRINT( "BRIAN1_PROMPT_7", 7500, 1 );
                        PRINTNL();
                        g_U65018 = 1;
                    }
                }
                else if (g_U65018)
                {
                    CLEAR_THIS_PRINT( "BRIAN1_PROMPT_7" );
                    g_U65018 = 0;
                }
            }
        }
        break;
        case 3:
        if (sub_5680( ref l_U401, 1000 ))
        {
            sub_20451();
        }
        break;
        case 4:
        PRINTSTRING( "SMOOTH_DIALOGUE" );
        PRINTNL();
        if (NOT (sub_17535( l_U453[2] )))
        {
            if (IS_PED_IN_GROUP( l_U263 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U263 );
            }
            if (l_U232)
            {
                if (IS_VEH_DRIVEABLE( l_U268 ))
                {
                    CLEAR_CHAR_TASKS( l_U263 );
                    TASK_LEAVE_CAR( l_U263, l_U268 );
                }
            }
            l_U202 = 6;
        }
        break;
        case 6:
        PRINTSTRING( "walk" );
        PRINTNL();
        if (NOT l_U210)
        {
            if ((NOT (IS_CHAR_INJURED( l_U264[0] ))) AND (NOT (IS_CHAR_INJURED( l_U263 ))))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U263 )))
                {
                    CLEAR_SEQUENCE_TASK( l_U444 );
                    OPEN_SEQUENCE_TASK( ref l_U444 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U279._fU0, l_U279._fU4, l_U279._fU8, 2, 22000, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U444 );
                    TASK_PERFORM_SEQUENCE( l_U263, l_U444 );
                    CLEAR_SEQUENCE_TASK( l_U444 );
                    l_U210 = 1;
                    GET_GAME_TIMER( ref l_U401 );
                }
            }
        }
        if (l_U210)
        {
            if (sub_5680( ref l_U401, 2000 ))
            {
                if (l_U232)
                {
                    SET_CAM_ACTIVE( l_U393, 0 );
                    SET_CAM_PROPAGATE( l_U393, 0 );
                    SET_CAM_ACTIVE( l_U388, 0 );
                    SET_CAM_PROPAGATE( l_U388, 0 );
                    SET_CAM_ACTIVE( l_U389, 0 );
                    SET_CAM_PROPAGATE( l_U389, 0 );
                }
                else
                {
                    SET_CAM_ACTIVE( l_U387, 0 );
                    SET_CAM_PROPAGATE( l_U387, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U264[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[0], 0 );
                    CLEAR_CHAR_TASKS( l_U264[0] );
                    SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( l_U264[0], 0 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U263 );
                SET_CHAR_COORDINATES( l_U263, 918.93030000, -53.75020000, 25.98920000 );
                SET_CHAR_HEADING( l_U263, 297.16200000 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 921.90000000, -53.00000000, 25.69280000 );
                if (NOT (IS_CHAR_INJURED( l_U264[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U263, l_U264[0], -2, 0 );
                }
                OPEN_SEQUENCE_TASK( ref l_U444 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 921.90000000, -53.00000000, 25.69280000, 2, -1, 0.40000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, 921.90000000, -53.00000000, 25.69280000, 290.00000000, 1061158912 );
                CLOSE_SEQUENCE_TASK( l_U444 );
                TASK_PERFORM_SEQUENCE( l_U263, l_U444 );
                CLEAR_SEQUENCE_TASK( l_U444 );
                SET_CAM_ACTIVE( l_U386, 1 );
                SET_CAM_PROPAGATE( l_U386, 1 );
                GET_GAME_TIMER( ref l_U401 );
                l_U202 = 7;
            }
        }
        break;
        case 7:
        if (NOT l_U248)
        {
            if (sub_5680( ref l_U401, 250 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U264[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U263 )))
                    {
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( 924.30000000, -53.00000000, 25.69280000 );
                        OPEN_SEQUENCE_TASK( ref l_U445 );
                        TASK_LOOK_AT_CHAR( 0, l_U263, -2, 0 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                        CLOSE_SEQUENCE_TASK( l_U445 );
                        TASK_PERFORM_SEQUENCE( l_U264[0], l_U445 );
                        CLEAR_SEQUENCE_TASK( l_U445 );
                        l_U248 = 1;
                    }
                }
            }
        }
        if (l_U248)
        {
            if (sub_5680( ref l_U401, 1500 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U263 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U264[1] )))
                    {
                        CLEAR_CHAR_TASKS( l_U264[1] );
                        OPEN_SEQUENCE_TASK( ref l_U445 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U263 );
                        CLOSE_SEQUENCE_TASK( l_U445 );
                        TASK_PERFORM_SEQUENCE( l_U264[1], l_U445 );
                        CLEAR_SEQUENCE_TASK( l_U445 );
                        l_U202 = 8;
                    }
                }
            }
        }
        break;
        case 8:
        if (NOT (IS_CHAR_INJURED( l_U263 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U264[0] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U263, 29, ref l_U450 );
                GET_SCRIPT_TASK_STATUS( l_U264[0], 29, ref l_U451 );
                if ((l_U451 == 7) AND (l_U450 == 7))
                {
                    SET_CAM_ACTIVE( l_U386, 0 );
                    SET_CAM_PROPAGATE( l_U386, 0 );
                    TASK_LOOK_AT_CHAR( sub_2032(), l_U264[0], 10000, 0 );
                    sub_23092( ref l_U453[2], 0 );
                    sub_16389( "PIB_BEAT", ref l_U453[2], 8, 1 );
                    SET_CAM_ACTIVE( l_U390, 1 );
                    SET_CAM_PROPAGATE( l_U390, 1 );
                    l_U202 = 9;
                }
            }
        }
        break;
        case 9:
        if (sub_17535( l_U453[2] ))
        {
            if ((sub_23307( l_U453[2] )) > 0)
            {
                OPEN_SEQUENCE_TASK( ref l_U444 );
                TASK_PLAY_ANIM( 0, "Cower_Flinch", "missbrian_3", 8.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM( 0, "Cower_Idle", "missbrian_3", 8.00000000, 1, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( l_U444 );
                TASK_PERFORM_SEQUENCE( l_U263, l_U444 );
                CLEAR_SEQUENCE_TASK( l_U444 );
                l_U202 = 10;
            }
        }
        break;
        case 10:
        if (NOT (sub_17535( l_U453[2] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U264[0] )))
            {
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U263, 0 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U263, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U263, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U264[0], 1, 1 );
                TASK_PLAY_ANIM( l_U264[0], "Baseball_Attack", "missbrian_3", 8.00000000, 0, 0, 0, 0, -1 );
                l_U202 = 11;
            }
        }
        break;
        case 11:
        if (NOT (IS_CHAR_INJURED( l_U264[0] )))
        {
            GET_CHAR_ANIM_CURRENT_TIME( l_U264[0], "missbrian_3", "Baseball_Attack", ref l_U384 );
            PRINTFLOAT( l_U384 );
            if (l_U384 > 0.38000000)
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U263, 0.00000000, 0.00000000, 1.00000000, ref l_U366._fU0, ref l_U366._fU4, ref l_U366._fU8 );
                UNLOCK_RAGDOLL( l_U263, 1 );
                SWITCH_PED_TO_RAGDOLL( l_U263, 0, 22000, 1, 1, 1, 0 );
                CREATE_NM_MESSAGE( 1, 79 );
                SEND_NM_MESSAGE( l_U263 );
                CREATE_NM_MESSAGE( 1, 198 );
                SET_NM_MESSAGE_VEC3( 211, l_U366 );
                SET_NM_MESSAGE_VEC3( 212, l_U360 );
                SET_NM_MESSAGE_VEC3( 213, l_U363 );
                SET_NM_MESSAGE_INT( 201, 12 );
                SET_NM_MESSAGE_INT( 207, 2 );
                SET_NM_MESSAGE_BOOL( 202, 0 );
                SET_NM_MESSAGE_BOOL( 203, 1 );
                SET_NM_MESSAGE_BOOL( 204, 0 );
                SET_NM_MESSAGE_BOOL( 205, 0 );
                SET_NM_MESSAGE_FLOAT( 206, 1.50000000 );
                SET_NM_MESSAGE_FLOAT( 200, 15 );
                SEND_NM_MESSAGE( l_U263 );
                CREATE_NM_MESSAGE( 1, 119 );
                SET_NM_MESSAGE_VEC3( 121, 918.93030000, -53.75020000, 25.98920000 );
                SET_NM_MESSAGE_FLOAT( 122, 0.50000000 );
                SET_NM_MESSAGE_BOOL( 123, 1 );
                SEND_NM_MESSAGE( l_U263 );
                PLAY_AUDIO_EVENT_FROM_PED( "GENERAL_MELEE_WOODEN_BAT_PED", l_U263 );
                GET_GAME_TIMER( ref l_U401 );
                l_U202 = 12;
            }
        }
        break;
        case 12:
        if ((l_U406[0] == 1) || (sub_5680( ref l_U401, 2000 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U263 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U264[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U264[1] )))
                    {
                        if (l_U232)
                        {
                            if (DOES_CAM_EXIST( l_U386 ))
                            {
                                SET_CAM_PROPAGATE( l_U386, 0 );
                                SET_CAM_ACTIVE( l_U386, 0 );
                                SET_CAM_PROPAGATE( l_U387, 0 );
                                SET_CAM_ACTIVE( l_U387, 0 );
                                SET_CAM_ACTIVE( l_U390, 0 );
                                SET_CAM_PROPAGATE( l_U390, 0 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                END_CAM_COMMANDS( ref l_U397 );
                                DESTROY_ALL_CAMS();
                            }
                        }
                        else if (DOES_CAM_EXIST( l_U387 ))
                        {
                            SET_CAM_PROPAGATE( l_U386, 0 );
                            SET_CAM_ACTIVE( l_U386, 0 );
                            SET_CAM_PROPAGATE( l_U387, 0 );
                            SET_CAM_ACTIVE( l_U387, 0 );
                            SET_CAM_ACTIVE( l_U390, 0 );
                            SET_CAM_PROPAGATE( l_U390, 0 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            END_CAM_COMMANDS( ref l_U397 );
                            DESTROY_ALL_CAMS();
                            SET_CHAR_HEADING( sub_2032(), 294.88010000 );
                            SET_CHAR_COORDINATES( sub_2032(), 910.58800000, -52.58760000, 26.24370000 );
                        }
                        ADD_BLIP_FOR_CHAR( l_U264[0], ref l_U273[0] );
                        ADD_BLIP_FOR_CHAR( l_U264[1], ref l_U273[1] );
                        SWITCH_ROADS_BACK_TO_ORIGINAL( 907.59990000, -66.99970000, 30.45980000, 897.14400000, 8.81930000, -1.00000000 );
                        l_U425[0] = 0;
                        UNLOCK_RAGDOLL( l_U263, 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U263 );
                        SET_CHAR_COORDINATES( l_U263, 920.54140000, -52.73840000, 25.84780000 );
                        SET_CHAR_HEADING( l_U263, 13.81170000 );
                        OPEN_SEQUENCE_TASK( ref l_U444 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Injured_Idle", "missbrian_3", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U444 );
                        TASK_PERFORM_SEQUENCE( l_U263, l_U444 );
                        CLEAR_SEQUENCE_TASK( l_U444 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[0], 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U264[0] );
                        SET_CHAR_COORDINATES( l_U264[0], 921.99890000, -52.58800000, 25.72200000 );
                        SET_CHAR_HEADING( l_U264[0], 123.31840000 );
                        OPEN_SEQUENCE_TASK( ref l_U445 );
                        TASK_PLAY_ANIM( 0, "Ground_Attack_A", "missbrian_3", 8.00000000, 1, 1, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U445 );
                        TASK_PERFORM_SEQUENCE( l_U264[0], l_U445 );
                        CLEAR_SEQUENCE_TASK( l_U445 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[1], 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U264[1] );
                        SET_CHAR_COORDINATES( l_U264[1], 920.13330000, -53.76140000, 25.90520000 );
                        SET_CHAR_HEADING( l_U264[1], 342.29740000 );
                        OPEN_SEQUENCE_TASK( ref l_U446[1] );
                        TASK_PLAY_ANIM( 0, "Fight_Intro_03", "missbrian_3", 8.00000000, 1, 1, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U446[1] );
                        TASK_PERFORM_SEQUENCE( l_U264[1], l_U446[1] );
                        CLEAR_SEQUENCE_TASK( l_U446[1] );
                        GET_GAME_TIMER( ref l_U428 );
                        sub_25265( ref l_U263, ref l_U268 );
                        SET_CHAR_HEALTH( l_U263, 10000 );
                        l_U259 = 1;
                        if (l_U406[0] == 1)
                        {
                            sub_25692( 1 );
                        }
                        else
                        {
                            sub_25868( 1 );
                        }
                        CLEAR_PRINTS();
                        PRINT( "BR3_PMT7", 7500, 1 );
                        l_U422[0] = 0;
                        l_U202 = 13;
                    }
                }
            }
        }
        break;
        case 13:
        if (NOT l_U255)
        {
            if (sub_5680( ref l_U428, 7000 ))
            {
                SAY_AMBIENT_SPEECH( l_U264[0], "fight", 1, 1, 2 );
                GET_GAME_TIMER( ref l_U429 );
                l_U255 = 1;
            }
        }
        else if (sub_5680( ref l_U429, 7000 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U264[0] )))
            {
                if (NOT (sub_17535( l_U453[3] )))
                {
                    SAY_AMBIENT_SPEECH( l_U264[0], "fight", 1, 1, 0 );
                    GET_GAME_TIMER( ref l_U429 );
                }
            }
        }
        if (NOT l_U254)
        {
            if (sub_5680( ref l_U428, 90000 ))
            {
                SET_CHAR_HEALTH( l_U263, 9899 );
                l_U254 = 1;
            }
        }
        if ((sub_3380( ref l_U264[1], 10.00000000 )) || ((sub_3380( ref l_U264[0], 10.00000000 )) || (sub_26315( ref l_U264[0], ref l_U264, ref l_U432, 1 ))))
        {
            for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U264[l_U402] )))
                {
                    CLEAR_CHAR_TASKS( l_U264[l_U402] );
                    SET_CHAR_KEEP_TASK( l_U264[l_U402], 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[l_U402], 1 );
                    TASK_SMART_FLEE_CHAR( l_U264[l_U402], sub_2032(), 100.00000000, -1 );
                    if (NOT l_U261)
                    {
                        sub_2127( 0 );
                        SAY_AMBIENT_SPEECH( l_U264[l_U402], "BEEN_SHOT_SUBMIT", 1, 0, 2 );
                        l_U261 = 1;
                    }
                }
                if (DOES_BLIP_EXIST( l_U273[l_U402] ))
                {
                    REMOVE_BLIP( l_U273[l_U402] );
                }
            }
            l_U259 = 0;
            l_U403[0] = 1;
            l_U403[1] = 1;
            l_U202 = 14;
        }
        else if (NOT (l_U419[1] == 1))
        {
            if ((sub_2995( ref l_U263 )) < 10.00000000)
            {
                if (NOT (IS_CHAR_INJURED( l_U264[1] )))
                {
                    sub_26989( ref l_U264[1], ref l_U435 );
                    TASK_LOOK_AT_CHAR( l_U264[1], sub_2032(), -1, 0 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U264[1], sub_2032() );
                    if (NOT l_U249)
                    {
                        sub_16389( "PIB_INT", ref l_U453[3], 8, 1 );
                        l_U249 = 1;
                    }
                    l_U419[1] = 1;
                }
                else
                {
                    l_U419[1] = 1;
                }
            }
        }
        sub_27221();;
        if (sub_27526( ref l_U264, ref l_U273 ))
        {
            l_U403[0] = 1;
            l_U403[1] = 1;
            l_U259 = 0;
            SET_CHAR_HEALTH( l_U263, ProtectedGet(l_U114) );
            l_U202 = 14;
        }
        break;
        case 14:
        sub_27734();
        if (l_U241)
        {
            sub_27960( ref l_U263, ref l_U269, ref l_U321, ref l_U272, "BR3_PMT2", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U441, l_U438 );
        }
        if ((NOT l_U241) AND ((l_U403[1] == 1) AND (l_U403[0] == 1)))
        {
            if (NOT l_U251)
            {
                UNLOCK_RAGDOLL( sub_2032(), 1 );
                OPEN_SEQUENCE_TASK( ref l_U444 );
                TASK_PLAY_ANIM( 0, "back_outro", "missbrian_3", 8.00000000, 0, 1, 0, 0, -1 );
                TASK_PLAY_ANIM( 0, "get_up_slow", "missbrian_3", 8.00000000, 0, 1, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U444 );
                TASK_PERFORM_SEQUENCE( l_U263, l_U444 );
                CLEAR_SEQUENCE_TASK( l_U444 );
                l_U251 = 1;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U263, 29, ref l_U450 );
                if (l_U450 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U263, 0 );
                    sub_13756( ref l_U263, ref l_U441, ref l_U438, 0 );
                    l_U241 = 1;
                    ADD_BLIP_FOR_COORD( l_U321._fU0, l_U321._fU4, l_U321._fU8, ref l_U272 );
                    SET_ROUTE( l_U272, 1 );
                    l_U201 = 10;
                }
            }
        }
        switch (l_U201)
        {
            case 10:
            if (IS_PED_IN_GROUP( l_U263 ))
            {
                TASK_LOOK_AT_CHAR( l_U263, sub_2032(), -2, 0 );
                sub_16389( "PIB_SAVE", ref l_U453[3], 8, 1 );
                l_U201 = 11;
            }
            break;
            case 11:
            PRINTSTRING( "saved_dialogue" );
            PRINTNL();
            if (IS_PED_IN_GROUP( l_U263 ))
            {
                if (l_U233)
                {
                    sub_17409( "PIB_SAVE", ref l_U453[3], 8, 1 );
                    l_U233 = 0;
                }
                if (NOT (sub_17535( l_U453[3] )))
                {
                    l_U201 = 12;
                }
            }
            else if (NOT l_U233)
            {
                sub_17772( ref l_U453[3] );
                l_U233 = 1;
            }
            break;
            case 12:
            if (IS_PED_IN_GROUP( l_U263 ))
            {
                if (sub_16389( "PIB_GO4", ref l_U453[4], 8, 1 ))
                {
                    l_U201 = 13;
                }
            }
            break;
            case 13:
            if (IS_PED_IN_GROUP( l_U263 ))
            {
                if (l_U233)
                {
                    sub_17409( "PIB_GO4", ref l_U453[4], 8, 1 );
                    l_U233 = 0;
                }
                if (NOT (sub_17535( l_U453[4] )))
                {
                    CLEAR_PRINTS();
                    PRINT( "BR3_PMT10", 7500, 1 );
                    GET_GAME_TIMER( ref l_U401 );
                    l_U204 = 0;
                    l_U235 = 1;
                    l_U233 = 0;
                    l_U201 = 14;
                    l_U198 = 2;
                }
            }
            else if (NOT l_U233)
            {
                sub_17772( ref l_U453[4] );
                l_U233 = 1;
            }
            break;
        }
        if (((sub_2995( ref l_U264[1] )) > 100) || ((sub_2995( ref l_U264[0] )) > 100))
        {
            SET_CHAR_HEALTH( l_U263, 13 );
            CLEAR_PRINTS();
            PRINT( "BRIAN1_PROMPT_3", 7500, 1 );
            sub_3557();
        }
        break;
    }
    return;
}

int sub_11641(unknown uParam0, unknown uParam1)
{
    if (sub_5680( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_11676())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_11676()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_11736()
{
    CLEAR_PRINTS();
    sub_2127( 0 );
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U263 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U263, 0, 0, 0 );
        }
        if (IS_GROUP_MEMBER( l_U263, l_U441 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U263 );
        }
        if (IS_CHAR_IN_ANY_CAR( l_U263 ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U263, 922.02860000, -53.14300000, 25.69280000 );
        }
        else
        {
            SET_CHAR_COORDINATES( l_U263, 922.02860000, -53.14300000, 25.69280000 );
        }
        SET_CHAR_HEADING( l_U263, 297.16200000 );
        SET_PED_DIES_WHEN_INJURED( l_U263, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U263, 0 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U263, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U263, 1 );
        for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U264[l_U402] )))
            {
                CLEAR_CHAR_TASKS( l_U264[l_U402] );
                SET_CHAR_NEVER_TARGETTED( l_U264[l_U402], 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U264[l_U402], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[l_U402], 0 );
                SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U437, 0 );
                SET_COMBAT_DECISION_MAKER( l_U264[l_U402], l_U437 );
                TASK_COMBAT( l_U264[l_U402], l_U263 );
                if (l_U402 == 0)
                {
                    SET_CHAR_COORDINATES( l_U264[0], 923.70000000, -53.00000000, 25.69280000 );
                    SET_CHAR_HEADING( l_U264[0], 120 );
                }
            }
        }
        l_U202 = 12;
    }
    return;
}

void sub_12331()
{
    for ( l_U402 = 0; l_U402 <= (l_U410 - 1); l_U402++ )
    {
        if (DOES_CHAR_EXIST( l_U264[l_U402] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U264[l_U402] )))
            {
                if ((IS_CHAR_RESPONDING_TO_EVENT( l_U264[l_U402], 9 )) || (((HAS_CHAR_SPOTTED_CHAR( l_U264[l_U402], sub_2032() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_1338(), l_U264[l_U402] ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U264[l_U402], sub_2032(), 0 ))))
                {
                    CLEAR_PRINTS();
                    sub_2127( 0 );
                    GET_GAME_TIMER( ref l_U508._fU220 );
                    PRINT( "BR3_PMT8", 7500, 1 );
                    sub_12564();
                    if (DOES_BLIP_EXIST( l_U270 ))
                    {
                        REMOVE_BLIP( l_U270 );
                    }
                    l_U262 = 1;
                    l_U198 = 3;
                }
            }
            else
            {
                CLEAR_PRINTS();
                sub_2127( 0 );
                GET_GAME_TIMER( ref l_U508._fU220 );
                PRINT( "BR3_PMT8", 7500, 1 );
                sub_12564();
                if (DOES_BLIP_EXIST( l_U270 ))
                {
                    REMOVE_BLIP( l_U270 );
                }
                l_U262 = 1;
                l_U198 = 3;
            }
        }
    }
    return;
}

void sub_12564()
{
    if (NOT (IS_CHAR_INJURED( l_U264[0] )))
    {
        SET_CHAR_KEEP_TASK( l_U264[0], 1 );
        PRINTSTRING( "attack 2**" );
        PRINTNL();
        TASK_SMART_FLEE_CHAR( l_U264[0], sub_2032(), 150.00000000, 50000 );
    }
    if (NOT (IS_CHAR_INJURED( l_U264[1] )))
    {
        CLEAR_CHAR_TASKS( l_U264[1] );
        SET_CHAR_KEEP_TASK( l_U264[1], 1 );
        PRINTSTRING( "attack 1**" );
        PRINTNL();
        TASK_SMART_FLEE_CHAR( l_U264[1], sub_2032(), 150.00000000, 50000 );
    }
    return;
}

int sub_13215(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar4 );
            iVar5 = ROUND( uParam1 * 0.80000000 );
            if (iVar4 < iVar5)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_13451(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2032() ))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2032() )))
    {
        if (DOES_BLIP_EXIST( (uParam1^) ))
        {
            REMOVE_BLIP( (uParam1^) );
        }
        CLEAR_PRINTS();
        PRINT_NOW( uParam3, 7500, 1 );
    }
    return;
}

int sub_13617(unknown uParam0)
{
    if ((sub_2995( ref uParam0 )) < 10.00000000)
    {
        return 1;
    }
    if (((sub_2995( ref uParam0 )) < (10.00000000 * 2.00000000)) AND (IS_PLAYER_PRESSING_HORN( sub_1338() )))
    {
        return 1;
    }
    return 0;
}

void sub_13756(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam3)
    {
        case 0:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_13869( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65537, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
        case 1:
        if (DOES_GROUP_EXIST( (uParam1^) ))
        {
            REMOVE_GROUP( (uParam1^) );
        }
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            REMOVE_CHAR_FROM_GROUP( (uParam0^) );
        }
        if (DOES_DECISION_MAKER_EXIST( (uParam2^) ))
        {
            REMOVE_DECISION_MAKER( (uParam2^) );
        }
        if (sub_13869( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65536, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
    }
    return;
}

int sub_13869(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_PLAYER_GROUP( sub_1338(), uParam1 );
            SET_GROUP_MEMBER( (uParam1^), (uParam0^) );
            return 1;
        }
    }
    return 0;
}

void sub_14567(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_INJURED( uParam4 )))
        {
            CLEAR_SEQUENCE_TASK( uParam3 );
            CLEAR_CHAR_TASKS( uParam0 );
            OPEN_SEQUENCE_TASK( ref uParam3 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, uParam4 );
            TASK_LOOK_AT_CHAR( 0, uParam4, -2, 0 );
            TASK_PLAY_ANIM( 0, uParam1, uParam2, 8.00000000, 1, 0, 0, 0, uParam5 );
            CLOSE_SEQUENCE_TASK( uParam3 );
            TASK_PERFORM_SEQUENCE( uParam0, uParam3 );
            CLEAR_SEQUENCE_TASK( uParam3 );
        }
    }
    return;
}

void sub_14964(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (IS_WANTED_LEVEL_GREATER( sub_1338(), 0 ))
    {
        if (NOT (uParam5^))
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            PRINT_NOW( uParam4, 7500, 1 );
            (uParam5^) = 1;
        }
    }
    else if ((uParam5^))
    {
        CLEAR_THIS_PRINT( uParam4 );
        (uParam5^) = 0;
        if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
        {
            ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam1 );
            SET_ROUTE( (uParam1^), 1 );
            if (bParam6)
            {
                sub_15134( uParam1, uParam7, uParam10 );
            }
            CLEAR_PRINTS();
            PRINT( uParam3, 7500, 1 );
        }
    }
    return;
}

void sub_15134(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_15296(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (DOES_BLIP_EXIST( (uParam3^) ))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                REMOVE_BLIP( (uParam3^) );
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam4, 7500, 1 );
            }
        }
        else if ((sub_2995( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_13756( uParam0, uParam11, uParam12, 0 );
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam3 );
                SET_ROUTE( (uParam3^), 1 );
                if (bParam6)
                {
                    sub_15134( uParam3, uParam7, uParam10 );
                }
                CLEAR_PRINTS();
                PRINT( uParam5, 7500, 1 );
            }
        }
    }
    return;
}

void sub_15582(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
    {
        if ((sub_2995( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            sub_13756( uParam0, uParam3, uParam4, 0 );
        }
    }
    return;
}

int sub_15788(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_2032() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2032(), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4, uParam5, uParam6, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_16076()
{
    switch (l_U201)
    {
        case 0:
        if (sub_16154( ref l_U263, ref l_U268, 1 ))
        {
            sub_16389( "PIB_GO3", ref l_U453[0], 8, 1 );
            l_U201 = 1;
        }
        break;
        case 1:
        if (sub_16154( ref l_U263, ref l_U268, 1 ))
        {
            if (l_U233)
            {
                sub_17409( "PIB_GO3", ref l_U453[0], 8, 1 );
                l_U233 = 0;
            }
            if (NOT (sub_17535( l_U453[0] )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "BR3_PMT1", 7500, 1 );
                GET_GAME_TIMER( ref l_U401 );
                l_U201 = 2;
            }
        }
        else if (NOT l_U233)
        {
            sub_17772( ref l_U453[0] );
            l_U233 = 1;
        }
        break;
        case 2:
        if (sub_16154( ref l_U263, ref l_U268, 1 ))
        {
            switch (g_U65025)
            {
                case 0:
                if (sub_5680( ref l_U401, 7500 ))
                {
                    if (sub_16389( "PIB_BANT5", ref l_U453[1], 8, 1 ))
                    {
                        l_U201 = 3;
                    }
                }
                break;
                case 1:
                if (sub_5680( ref l_U401, 7500 ))
                {
                    if (sub_16389( "PIB_BANT6", ref l_U453[1], 8, 1 ))
                    {
                        l_U201 = 3;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 3:
        switch (g_U65025)
        {
            case 0:
            if (sub_16154( ref l_U263, ref l_U268, 1 ))
            {
                if (l_U233)
                {
                    sub_17409( "PIB_BANT5", ref l_U453[1], 8, 1 );
                    l_U233 = 0;
                }
                if (NOT (sub_17535( l_U453[1] )))
                {
                    l_U231 = 1;
                }
            }
            else if (NOT l_U233)
            {
                sub_17772( ref l_U453[1] );
                l_U233 = 1;
            }
            break;
            case 1:
            if (sub_16154( ref l_U263, ref l_U268, 1 ))
            {
                if (l_U233)
                {
                    sub_17409( "PIB_BANT5", ref l_U453[1], 8, 1 );
                    l_U233 = 0;
                }
                if (NOT (sub_17535( l_U453[1] )))
                {
                    l_U231 = 1;
                }
            }
            else if (NOT l_U233)
            {
                sub_17772( ref l_U453[1] );
                l_U233 = 1;
            }
            break;
            case 2: break;
        }
        break;
        case 14:
        if (sub_5680( ref l_U401, 7500 ))
        {
            if (sub_16154( ref l_U263, ref l_U268, 0 ))
            {
                switch (g_U65025)
                {
                    case 0:
                    CLEAR_PRINTS();
                    if (sub_16389( "PIB_BANT7", ref l_U453[5], 8, 1 ))
                    {
                        l_U201 = 15;
                    }
                    break;
                    case 1:
                    CLEAR_PRINTS();
                    if (sub_16389( "PIB_BANT8", ref l_U453[5], 8, 1 ))
                    {
                        l_U201 = 15;
                    }
                    break;
                    case 2: break;
                }
            }
        }
        break;
        case 15:
        switch (g_U65025)
        {
            case 0:
            if (sub_16154( ref l_U263, ref l_U268, 0 ))
            {
                if (l_U233)
                {
                    sub_17409( "PIB_BANT7", ref l_U453[5], 8, 1 );
                    l_U233 = 0;
                }
                if (NOT (sub_17535( l_U453[5] )))
                {
                    l_U246 = 1;
                }
            }
            else if (NOT l_U233)
            {
                sub_17772( ref l_U453[5] );
                l_U233 = 1;
            }
            break;
            case 1:
            if (sub_16154( ref l_U263, ref l_U268, 0 ))
            {
                if (l_U233)
                {
                    sub_17409( "PIB_BANT8", ref l_U453[5], 8, 1 );
                    l_U233 = 0;
                }
                if (NOT (sub_17535( l_U453[5] )))
                {
                    l_U246 = 1;
                }
            }
            else if (NOT l_U233)
            {
                sub_17772( ref l_U453[5] );
                l_U233 = 1;
            }
            break;
            case 2: break;
        }
        break;
    }
    return;
}

int sub_16154(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            if (bParam2)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_1338(), 0 ))
                {
                    GET_GAME_TIMER( ref l_U118 );
                    return 0;
                }
                if (NOT (sub_5680( ref l_U118, 3000 )))
                {
                    return 0;
                }
            }
            if ((IS_CHAR_ON_FOOT( sub_2032() )) AND (IS_CHAR_ON_FOOT( (uParam0^) )))
            {
                return 1;
            }
            if (DOES_VEHICLE_EXIST( (uParam1^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam1^) ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( sub_2032(), (uParam1^) )) AND (IS_CHAR_SITTING_IN_CAR( (uParam0^), (uParam1^) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_16389(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16410( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_16410(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_16464( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_16464(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_16486( iParam1 )))
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
    sub_17174( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_16486(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_16563( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_16563( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_16563( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_16563(unknown uParam0)
{
    return;
}

void sub_17174(int iParam0, int iParam1)
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

void sub_17409(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17430( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_17430(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_16464( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_17535(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_16563( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_16563( "\n speech is not playing" );
    }
    return 0;
}

int sub_17772(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_16563( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_16563( "\n CONVERSATION PAUSED AT LINE " );
            sub_17928( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_16563( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_16563( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_16563( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_17928(unknown uParam0)
{
    return;
}

void sub_19285()
{
    if (NOT (IS_CHAR_DEAD( l_U263 )))
    {
        GET_CHAR_COORDINATES( sub_2032(), ref l_U291._fU0, ref l_U291._fU4, ref l_U291._fU8 );
        GET_CHAR_COORDINATES( l_U263, ref l_U294._fU0, ref l_U294._fU4, ref l_U294._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U291._fU0, l_U291._fU4, l_U291._fU8, l_U294._fU0, l_U294._fU4, l_U294._fU8, ref l_U369 );
        return l_U369;
    }
    return l_U369;
}

int sub_19457()
{
    if (sub_19468( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_2127( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_1338(), 0 );
        CLEAR_CHAR_TASKS( sub_2032() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2032(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_19468(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2032() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2032(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2032() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2032(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2032()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2032() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2032() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1338() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1338() )))
    {
        return 0;
    }
    return 1;
}

void sub_19874(unknown uParam0, unknown uParam1)
{
    sub_19892( 1, 1 );
    sub_19961( uParam0 );
    sub_20060( 1, ref l_U179, 1, 1 );
    sub_20168( uParam1 );
    return;
    break;
    2;
    1;
    ref l_U115;
    2;
    1;
    ref l_U178;
    2;
    1;
    ref l_U179;
    1;
    ref l_U178;
    1;
    1;
    ref l_U115;
    uParam1;
    2;
    1;
    ref l_U114;
    ref l_U114;
    uParam0;
    break;
}

void sub_19892(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), uParam1 );
        }
    }
    return;
}

void sub_19961(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_HEALTH( (uParam0^), 200 );
            SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_20060(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), uParam1 );
            (uParam2^) = GET_ENGINE_HEALTH( (uParam0^) );
            (uParam3^) = GET_PETROL_TANK_HEALTH( (uParam0^) );
        }
    }
    return;
}

void sub_20168(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

int sub_20330(unknown uParam0)
{
    if (sub_2817( uParam0 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_2032(), (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_20451()
{
    REMOVE_BLIP( l_U270 );
    CLEAR_AREA( 907.11270000, -52.96690000, 26.15620000, 100.00000000, 1 );
    if (l_U232)
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U263, l_U268 )))
        {
            CLEAR_CHAR_TASKS( l_U263 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U263, l_U268, 0 );
        }
        SET_CAR_COORDINATES( l_U268, 907.11270000, -52.96690000, 26.15620000 );
    }
    else if (DOES_VEHICLE_EXIST( l_U268 ))
    {
        if (IS_VEH_DRIVEABLE( l_U268 ))
        {
            if (LOCATE_CAR_3D( l_U268, 920.87170000, -52.78800000, 25.82120000, 16.00000000, 9.00000000, 9.00000000, 0 ))
            {
                CLEAR_AREA( 907.19920000, -52.53750000, 26.15230000, 4.00000000, 1 );
                SET_CAR_HEADING( l_U268, 359.93830000 );
                SET_CAR_COORDINATES( l_U268, 907.19920000, -52.53750000, 26.15230000 );
            }
        }
    }
    CLEAR_AREA( l_U318._fU0, l_U318._fU4, l_U318._fU8, 100.00000000, 1 );
    SET_CREATE_RANDOM_COPS( 0 );
    BEGIN_CAM_COMMANDS( ref l_U397 );
    CREATE_CAM( 14, ref l_U386 );
    CREATE_CAM( 14, ref l_U387 );
    CREATE_CAM( 14, ref l_U388 );
    CREATE_CAM( 14, ref l_U389 );
    CREATE_CAM( 14, ref l_U390 );
    CREATE_CAM( 3, ref l_U393 );
    SET_CAM_POS( l_U386, 917.24790000, -50.52311000, 26.43352000 );
    SET_CAM_ROT( l_U386, 2.40242100, -0.00000000, -109.25600000 );
    SET_CAM_FOV( l_U386, 32.00000000 );
    SET_CAM_POS( l_U387, 907.08730000, -51.97842000, 27.86982000 );
    SET_CAM_ROT( l_U387, -5.15233600, -0.00000000, -94.59883000 );
    SET_CAM_FOV( l_U387, 30.90004000 );
    SET_CAM_POS( l_U388, 930.89350000, -52.01659000, 25.84923000 );
    SET_CAM_ROT( l_U388, 7.86561800, -0.00000000, 96.73839000 );
    SET_CAM_FOV( l_U388, 36.80003000 );
    SET_CAM_POS( l_U389, 930.89350000, -52.01659000, 25.84923000 );
    SET_CAM_ROT( l_U389, 7.86561800, -0.00000000, 96.73839000 );
    SET_CAM_FOV( l_U389, 34.80003000 );
    SET_CAM_POS( l_U390, 926.56880000, -54.46138000, 26.81310000 );
    SET_CAM_ROT( l_U390, -0.57695700, -0.00000000, 69.85061000 );
    SET_CAM_FOV( l_U390, 32.10003000 );
    if (l_U232)
    {
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U393, l_U388, l_U389, 3000, 0 );
        SET_CAM_ACTIVE( l_U393, 1 );
        SET_CAM_PROPAGATE( l_U393, 1 );
        if (NOT (IS_CHAR_INJURED( l_U264[0] )))
        {
            TASK_LOOK_AT_CHAR( sub_2032(), l_U264[0], 4000, 0 );
        }
    }
    else
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2032() );
        SET_CHAR_COORDINATES( sub_2032(), 909.41950000, -51.66520000, 26.24300000 );
        SET_CHAR_HEADING( sub_2032(), 215.14500000 );
        REMOVE_CHAR_FROM_GROUP( l_U263 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U263 );
        SET_CHAR_COORDINATES( l_U263, 909.41950000, -52.70000000, 26.24300000 );
        SET_CHAR_HEADING( l_U263, 10.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_ACTIVE( l_U387, 1 );
        SET_CAM_PROPAGATE( l_U387, 1 );
    }
    GET_GAME_TIMER( ref l_U409 );
    l_U422[0] = 1;
    sub_16389( "PIB_SPOT", ref l_U453[2], 8, 1 );
    l_U202 = 4;
    return;
}

void sub_23092(int iParam0, unknown uParam1)
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

void sub_23307(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_17535( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_25265(unknown uParam0, unknown uParam1)
{
    sub_25276( uParam1 );
    sub_25537( uParam0 );
    return;
}

void sub_25276(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_25332( uParam0 );
        }
    }
    return;
}

void sub_25332(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            else
            {
                SET_CAR_HEALTH( (uParam0^), ProtectedGet(l_U115) );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_ENGINE_HEALTH( (uParam0^), ProtectedGet(l_U178) );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), ProtectedGet(l_U179) );
            }
        }
    }
    return;
}

void sub_25537(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            if (ProtectedGet(l_U114) < 110)
            {
                SET_CHAR_HEALTH( (uParam0^), 120 );
            }
            else
            {
                SET_CHAR_HEALTH( (uParam0^), ProtectedGet(l_U114) );
            }
        }
    }
    return;
}

void sub_25692(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2127( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1338() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2032() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2032() );
        }
        SET_PLAYER_CONTROL( sub_1338(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2032(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_25868(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2127( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1338() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2032() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2032() );
        }
        SET_PLAYER_CONTROL( sub_1338(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2032(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

int sub_26315(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int I;
    int iVar7;

    if (bParam3)
    {
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            if (DOES_CHAR_EXIST( (uParam1^)[I] ))
            {
                if (NOT (IS_CHAR_INJURED( (uParam1^)[I] )))
                {
                    GET_CHAR_HEALTH( (uParam1^)[I], ref iVar7 );
                    if ((IS_CHAR_RESPONDING_TO_EVENT( (uParam1^)[I], 9 )) || ((iVar7 < (uParam2^)[I]) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam1^)[I], sub_2032(), 0 ))))
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    else if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar7 );
            if ((IS_CHAR_RESPONDING_TO_EVENT( (uParam0^), 9 )) || ((iVar7 < (uParam2^)[0]) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2032(), 0 ))))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void sub_26989(unknown uParam0, unknown uParam1)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
        }
    }
    return;
}

void sub_27221()
{
    for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
    {
        if (NOT (l_U419[l_U402] == 1))
        {
            if (NOT (IS_CHAR_INJURED( l_U264[l_U402] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U264[l_U402], sub_2032(), 0 ))
                {
                    SET_RELATIONSHIP( 5, 0, 23 );
                    SET_RELATIONSHIP( 5, 23, 0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U264[l_U402], 0 );
                    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U435, 1 );
                    SET_COMBAT_DECISION_MAKER( l_U264[l_U402], l_U435 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U264[l_U402], 23 );
                    l_U419[l_U402] = 1;
                    if (NOT l_U249)
                    {
                        sub_16389( "PIB_INT", ref l_U453[3], 8, 1 );
                        l_U249 = 1;
                    }
                }
            }
            else
            {
                l_U419[l_U402] = 1;
            }
        }
    }
    return;
}

int sub_27526(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        if (DOES_CHAR_EXIST( (uParam0^)[I] ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref (uParam0^)[I] );
                (uParam0^)[I] = nil;
                REMOVE_BLIP( (uParam1^)[I] );
                iVar5++;
            }
        }
        else
        {
            iVar5++;
        }
    }
    if (iVar5 == (uParam0^))
    {
        return 1;
    }
    return 0;
}

void sub_27734()
{
    for ( l_U402 = 0; l_U402 <= 1; l_U402++ )
    {
        if (l_U403[l_U402] == 0)
        {
            if (IS_CHAR_INJURED( l_U264[l_U402] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U264[l_U402] );
                l_U264[l_U402] = nil;
                REMOVE_BLIP( l_U273[l_U402] );
                l_U403[l_U402] = 1;
            }
        }
    }
    return;
}

void sub_27960(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (DOES_BLIP_EXIST( (uParam3^) ))
        {
            if (NOT (IS_PED_IN_GROUP( (uParam0^) )))
            {
                REMOVE_BLIP( (uParam3^) );
                ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
                SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
                CLEAR_PRINTS();
                PRINT( uParam4, 7500, 1 );
            }
        }
        else if ((sub_2995( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_13756( uParam0, uParam10, ref uParam11, 0 );
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam3 );
                SET_ROUTE( (uParam3^), 1 );
                if (bParam5)
                {
                    sub_15134( uParam3, uParam6, uParam9 );
                }
            }
        }
    }
    return;
}

void sub_29152()
{
    if ((l_U217) AND (NOT (l_U406[1] == 1)))
    {
        if (sub_11641( ref l_U409, 1000 ))
        {
            l_U406[1] = 1;
            l_U203 = 12;
        }
    }
    switch (l_U203)
    {
        case 0:
        sub_16076();
        sub_15296( ref l_U263, ref l_U269, ref l_U321, ref l_U272, "BR3_PMT2", "BR3_PMT10", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U441, ref l_U438 );
        if (DOES_BLIP_EXIST( l_U272 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2032(), l_U321._fU0, l_U321._fU4, l_U321._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((sub_2995( ref l_U263 )) < 10.00000000)
                {
                    if (sub_19457())
                    {
                        if (sub_20330( ref l_U268 ))
                        {
                            TASK_CAR_TEMP_ACTION( sub_2032(), l_U268, 6, 100 );
                            l_U244 = 1;
                        }
                        sub_29511();
                    }
                }
                else if (NOT g_U65018)
                {
                    PRINT( "BRIAN1_PROMPT_7", 7500, 1 );
                    PRINTNL();
                    g_U65018 = 1;
                }
            }
            else if (g_U65018)
            {
                CLEAR_THIS_PRINT( "BRIAN1_PROMPT_7" );
                g_U65018 = 0;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U263 )))
        {
            SWITCH_PED_PATHS_OFF( 983.48730000, -518.37180000, 18.31040000, 980.05170000, -470.10850000, -1.00000000 );
            l_U250 = 1;
            CLEAR_AREA( 985.45670000, -476.82810000, 14.93570000, 50.00000000, 1 );
            if (DOES_VEHICLE_EXIST( l_U268 ))
            {
                if (IS_VEH_DRIVEABLE( l_U268 ))
                {
                    if (LOCATE_CAR_3D( l_U268, l_U321._fU0, l_U321._fU4, l_U321._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                    {
                        CLEAR_AREA( 995.02950000, -474.33940000, 14.95370000, 4.00000000, 1 );
                        SET_CAR_HEADING( l_U268, 181.00000000 );
                        SET_CAR_COORDINATES( l_U268, 984.07350000, -474.87320000, 14.91480000 );
                    }
                }
            }
            REMOVE_CHAR_FROM_GROUP( l_U263 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U263 );
            SET_CHAR_COORDINATES( l_U263, 982.55050000, -480.77720000, 14.96400000 );
            SET_CHAR_HEADING( l_U263, 5.00000000 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2032() );
            SET_CHAR_COORDINATES( sub_2032(), 982.55050000, -479.66160000, 14.98160000 );
            SET_CHAR_HEADING( sub_2032(), 210.00000000 );
            BEGIN_CAM_COMMANDS( ref l_U397 );
            CREATE_CAM( 14, ref l_U386 );
            CREATE_CAM( 14, ref l_U387 );
            CREATE_CAM( 3, ref l_U393 );
            SET_CAM_POS( l_U386, 981.84900000, -478.60020000, 16.56814000 );
            SET_CAM_ROT( l_U386, -2.63960200, -0.00000000, -157.68690000 );
            SET_CAM_FOV( l_U386, 30.00004000 );
            SET_CAM_POS( l_U387, 981.84900000, -478.60020000, 16.56814000 );
            SET_CAM_ROT( l_U387, -2.63960200, -0.00000000, -157.68690000 );
            SET_CAM_FOV( l_U387, 28.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U393, l_U386, l_U387, 3000, 0 );
            SET_CAM_ACTIVE( l_U393, 1 );
            SET_CAM_PROPAGATE( l_U393, 1 );
            GET_GAME_TIMER( ref l_U401 );
            GET_GAME_TIMER( ref l_U409 );
            l_U422[1] = 1;
            l_U203 = 8;
        }
        break;
        case 8:
        if (sub_5680( ref l_U401, 500 ))
        {
            sub_16389( "PIB_HOME", ref l_U453[7], 8, 1 );
            GET_GAME_TIMER( ref l_U401 );
            l_U203 = 7;
        }
        break;
        case 5:
        BLOCK_CHAR_AMBIENT_ANIMS( l_U263, 1 );
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2032(), 1 );
        if (NOT l_U240)
        {
            if (sub_5680( ref l_U401, 4500 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U263 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U268 )))
                    {
                        SET_CAM_ACTIVE( l_U393, 0 );
                        SET_CAM_PROPAGATE( l_U393, 0 );
                        SET_CAM_ACTIVE( l_U391, 0 );
                        SET_CAM_PROPAGATE( l_U391, 0 );
                        SET_CAM_ACTIVE( l_U392, 0 );
                        SET_CAM_PROPAGATE( l_U392, 0 );
                        CLEAR_CHAR_TASKS( sub_2032() );
                        sub_16389( "PIB_HOME", ref l_U453[7], 8, 1 );
                        CLEAR_AREA( 985.45670000, -476.82810000, 14.93570000, 50.00000000, 1 );
                        sub_31816();
                        GET_CAR_MODEL( l_U268, ref l_U180 );
                        GET_MODEL_DIMENSIONS( l_U180, ref l_U119, ref l_U122 );
                        l_U125._fU0 = l_U119._fU0 / l_U128._fU0;
                        l_U125._fU4 = l_U122._fU4 / l_U131._fU4;
                        l_U125._fU8 = l_U122._fU8 / l_U131._fU8;
                        l_U166._fU0 = l_U134[1]._fU0 * l_U125._fU0;
                        l_U166._fU4 = l_U134[1]._fU4 * l_U125._fU4;
                        l_U166._fU8 = l_U134[1]._fU8 * l_U125._fU8;
                        l_U169._fU0 = l_U150[0]._fU0 * l_U125._fU0;
                        l_U169._fU4 = l_U150[0]._fU4 * l_U125._fU4;
                        l_U169._fU8 = l_U150[0]._fU8 * l_U125._fU8;
                        BEGIN_CAM_COMMANDS( ref l_U397 );
                        CREATE_CAM( 14, ref l_U386 );
                        CREATE_CAM( 14, ref l_U387 );
                        ATTACH_CAM_TO_VEHICLE( l_U387, l_U268 );
                        POINT_CAM_AT_VEHICLE( l_U387, l_U268 );
                        SET_CAM_ATTACH_OFFSET( l_U387, l_U166._fU0, l_U166._fU4, l_U166._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U387, 1 );
                        SET_CAM_POINT_OFFSET( l_U387, l_U169._fU0, l_U169._fU4, l_U169._fU8 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U387, 1 );
                        SET_CAM_FOV( l_U387, l_U172[0] );
                        ATTACH_CAM_TO_VEHICLE( l_U387, l_U268 );
                        if (sub_32489())
                        {
                            POINT_CAM_AT_PED( l_U387, sub_2032() );
                        }
                        else
                        {
                            POINT_CAM_AT_VEHICLE( l_U387, l_U268 );
                        }
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SET_CAM_PROPAGATE( l_U387, 1 );
                        SET_CAM_ACTIVE( l_U387, 1 );
                        REMOVE_CHAR_FROM_GROUP( l_U263 );
                        l_U240 = 1;
                    }
                }
            }
        }
        if (l_U240)
        {
            if (NOT (IS_CHAR_INJURED( l_U263 )))
            {
                PRINTSTRING( "**fail 2**" );
                PRINTNL();
                if (NOT (sub_17535( l_U453[7] )))
                {
                    sub_2817( ref l_U268 );
                    if (NOT (IS_CAR_DEAD( l_U268 )))
                    {
                        GET_CAR_HEADING( l_U268, ref l_U385 );
                        if ((l_U385 < 90) || (l_U385 > 270))
                        {
                            l_U357 = {981.36630000, -467.42000000, 15.15200000};
                        }
                        else
                        {
                            l_U357 = {981.54170000, -495.73200000, 14.70740000};
                        }
                        CLEAR_SEQUENCE_TASK( l_U444 );
                        OPEN_SEQUENCE_TASK( ref l_U444 );
                        TASK_LOOK_AT_CHAR( 0, sub_2032(), 50, 0 );
                        TASK_LEAVE_CAR( 0, l_U268 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U357._fU0, l_U357._fU4, l_U357._fU8, 2, -1, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( l_U444 );
                        TASK_PERFORM_SEQUENCE( l_U263, l_U444 );
                        CLEAR_SEQUENCE_TASK( l_U444 );
                        l_U203 = 6;
                    }
                }
            }
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U263 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U263, 29, ref l_U450 );
            if ((l_U450 == 7) || (NOT (IS_CHAR_ON_SCREEN( l_U263 ))))
            {
                l_U203 = 11;
            }
        }
        break;
        case 7:
        if (NOT l_U228)
        {
            if (NOT (sub_17535( l_U453[7] )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2032(), 2.00000000, -10.00000000, 0.00000000, ref l_U294._fU0, ref l_U294._fU4, ref l_U294._fU8 );
                OPEN_SEQUENCE_TASK( ref l_U444 );
                TASK_LOOK_AT_CHAR( 0, sub_2032(), 50, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U294._fU0, l_U294._fU4, l_U294._fU8, 2, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U444 );
                TASK_PERFORM_SEQUENCE( l_U263, l_U444 );
                CLEAR_SEQUENCE_TASK( l_U444 );
                l_U228 = 1;
            }
        }
        else if (NOT (IS_CHAR_ON_SCREEN( l_U263 )))
        {
            l_U203 = 11;
        }
        break;
        case 11:
        SET_CAM_ACTIVE( l_U393, 0 );
        SET_CAM_PROPAGATE( l_U393, 0 );
        SET_CAM_PROPAGATE( l_U386, 0 );
        SET_CAM_ACTIVE( l_U386, 0 );
        SET_CAM_PROPAGATE( l_U387, 0 );
        SET_CAM_ACTIVE( l_U387, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U397 );
        DESTROY_ALL_CAMS();
        SET_CAM_BEHIND_PED( sub_2032() );
        if (NOT (IS_CHAR_INJURED( l_U263 )))
        {
            if (IS_GROUP_MEMBER( l_U263, l_U441 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U263 );
            }
            CLEAR_CHAR_TASKS( l_U263 );
            DELETE_CHAR( ref l_U263 );
        }
        sub_25868( 1 );
        if (l_U406[1] == 1)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        sub_33495();
        break;
        case 12:
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        sub_2127( 0 );
        CLEAR_PRINTS();
        l_U203 = 11;
        break;
    }
    return;
}

void sub_29511()
{
    ADD_SCENARIO_BLOCKING_AREA( 983.82000000, -493.00000000, 100.00000000, 979.00000000, -466.00000000, -100.00000000 );
    REMOVE_BLIP( l_U272 );
    l_U217 = 1;
    GET_GAME_TIMER( ref l_U409 );
    if (l_U244)
    {
        sub_29599();
        CLEAR_AREA_OF_CARS( 981.00000000, -478.50000000, 15.40000000, 7.00000000 );
        BEGIN_CAM_COMMANDS( ref l_U397 );
        CREATE_CAM( 14, ref l_U391 );
        CREATE_CAM( 14, ref l_U392 );
        CREATE_CAM( 14, ref l_U386 );
        CREATE_CAM( 14, ref l_U387 );
        CREATE_CAM( 3, ref l_U393 );
        SET_CAM_POS( l_U391, 980.21260000, -468.69020000, 16.29309000 );
        SET_CAM_ROT( l_U391, 1.47307100, 0.00000000, -153.41620000 );
        SET_CAM_FOV( l_U391, 33.60004000 );
        SET_CAM_POS( l_U392, 980.21260000, -468.69020000, 16.29309000 );
        SET_CAM_ROT( l_U392, 1.47307100, 0.00000000, -153.41620000 );
        SET_CAM_FOV( l_U392, 30.60004000 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U263, l_U268 )))
        {
            CLEAR_CHAR_TASKS( l_U263 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U263, l_U268, 0 );
        }
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U393, l_U391, l_U392, 5000, 0 );
        SET_CAM_ACTIVE( l_U393, 1 );
        SET_CAM_PROPAGATE( l_U393, 1 );
        GET_GAME_TIMER( ref l_U401 );
        l_U203 = 5;
    }
    else
    {
        SWITCH_PED_PATHS_OFF( 983.48730000, -518.37180000, 18.31040000, 980.05170000, -470.10850000, -1.00000000 );
        l_U250 = 1;
        CLEAR_AREA( 985.45670000, -476.82810000, 14.93570000, 100.00000000, 1 );
        if (DOES_VEHICLE_EXIST( l_U268 ))
        {
            if (IS_VEH_DRIVEABLE( l_U268 ))
            {
                if (LOCATE_CAR_3D( l_U268, l_U321._fU0, l_U321._fU4, l_U321._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    CLEAR_AREA( 995.02950000, -474.33940000, 14.95370000, 4.00000000, 1 );
                    SET_CAR_HEADING( l_U268, 181.00000000 );
                    SET_CAR_COORDINATES( l_U268, 984.07350000, -474.87320000, 14.91480000 );
                }
            }
        }
        REMOVE_CHAR_FROM_GROUP( l_U263 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U263 );
        SET_CHAR_COORDINATES( l_U263, 982.55050000, -480.77720000, 14.96400000 );
        SET_CHAR_HEADING( l_U263, 5.00000000 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2032() );
        SET_CHAR_COORDINATES( sub_2032(), 982.55050000, -479.66160000, 14.98160000 );
        SET_CHAR_HEADING( sub_2032(), 210.00000000 );
        BEGIN_CAM_COMMANDS( ref l_U397 );
        CREATE_CAM( 14, ref l_U386 );
        CREATE_CAM( 14, ref l_U387 );
        CREATE_CAM( 3, ref l_U393 );
        SET_CAM_POS( l_U386, 981.84900000, -478.60020000, 16.56814000 );
        SET_CAM_ROT( l_U386, -2.63960200, -0.00000000, -157.68690000 );
        SET_CAM_FOV( l_U386, 30.00004000 );
        SET_CAM_POS( l_U387, 981.84900000, -478.60020000, 16.56814000 );
        SET_CAM_ROT( l_U387, -2.63960200, -0.00000000, -157.68690000 );
        SET_CAM_FOV( l_U387, 28.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U393, l_U386, l_U387, 3000, 0 );
        SET_CAM_ACTIVE( l_U393, 1 );
        SET_CAM_PROPAGATE( l_U393, 1 );
        GET_GAME_TIMER( ref l_U401 );
        l_U203 = 8;
    }
    TASK_LOOK_AT_CHAR( sub_2032(), l_U263, -2, 0 );
    TASK_LOOK_AT_CHAR( l_U263, sub_2032(), -2, 0 );
    return;
}

void sub_29599()
{
    REMOVE_BLIP( l_U272 );
    sub_23092( ref l_U453[5], 0 );
    l_U246 = 1;
    l_U217 = 1;
    return;
}

void sub_31816()
{
    l_U128 = {-0.99465700, -2.12410000, -0.38183600};
    l_U131 = {-0.99465700, 2.43009000, 0.68398300};
    l_U134[0] = {-1.30000000, 4.00000000, 0.70000000};
    l_U134[1] = {-1.30000000, 4.00000000, 0.50000000};
    l_U134[2] = {3.60000000, 3.10000000, 0.50000000};
    l_U150[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U150[1] = {-0.60000000, 0.00000000, 0.40000000};
    l_U172[0] = 32;
    l_U172[1] = 32;
    l_U172[2] = 34.70000000;
    return;
}

int sub_32489()
{
    unknown uVar2;
    unknown uVar3;

    if (sub_2817( ref uVar2 ))
    {
        GET_CAR_MODEL( uVar2, ref uVar3 );
        if (IS_THIS_MODEL_A_BIKE( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_33495()
{
    sub_33509( l_U452 );
    CLEAR_WANTED_LEVEL( sub_1338() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1412();
    return;
}

void sub_33509(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_737( uParam0 );
    sub_33529( uParam0 );
    sub_37503( uParam0 );
    return;
}

void sub_33529(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_33659();
        break;
        case 39:
        sub_34621();
        break;
        case 40:
        sub_34880();
        break;
        case 48:
        sub_35063();
        break;
        case 41:
        sub_35248();
        break;
        case 42:
        sub_35444();
        break;
        case 43:
        sub_35625();
        break;
        case 44:
        sub_35808();
        break;
        case 45:
        sub_35989();
        break;
        case 46:
        sub_36168();
        break;
        case 47:
        sub_36479();
        break;
        case 49:
        sub_36679();
        break;
        case 50:
        sub_36856();
        break;
        case 51:
        sub_37054();
        break;
        default: sub_857( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_37329();
    sub_37402();
    return;
}

void sub_33659()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 500 );
        break;
        default: sub_857( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_33699(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_33752( iParam0, uParam1, uParam2 );
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
        sub_33884( iParam0 + 0 );
    }
    return;
}

void sub_33752(int iParam0, int iParam1, int iParam2)
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
        sub_33884( iParam0 + 0 );
    }
    return;
}

void sub_33884(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_33915( iParam0->_fU4 )))
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

int sub_33915(unknown uParam0)
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

void sub_34345(unknown uParam0)
{
    sub_34356( uParam0 );
    return;
}

void sub_34356(unknown uParam0)
{
    ADD_SCORE( sub_1338(), uParam0 );
    sub_34381( uParam0 );
    return;
}

void sub_34381(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_857( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_34621()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_737( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 100 );
        sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_34345( 200 );
        sub_33699( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_34345( 500 );
        break;
        default: sub_857( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_34880()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        default: sub_857( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_35063()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        default: sub_857( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_35248()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        case 2:
        sub_34345( 0 );
        break;
        default: sub_857( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_35444()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        default: sub_857( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_35625()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 500 );
        break;
        default: sub_857( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_35808()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        default: sub_857( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_35989()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 1000 );
        break;
        default: sub_857( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_36168()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_737( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 1000 );
        sub_36255( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_34345( 5000 );
        sub_33699( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_857( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_36255(int iParam0)
{
    sub_36268( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_36268(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_36479()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        case 2:
        sub_34345( 0 );
        break;
        default: sub_857( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_36679()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 500 );
        break;
        default: sub_857( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_36856()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        case 2:
        sub_34345( 0 );
        break;
        default: sub_857( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_37054()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_737( iVar2 );
    sub_33699( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34345( 0 );
        break;
        case 2:
        sub_34345( 1000 );
        break;
        default: sub_857( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_37329()
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

void sub_37402()
{
    sub_37411();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_37411()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_37503(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_737( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_7210( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_37584( uParam0 );
    return;
}

void sub_37584(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 10;
    switch (uParam0)
    {
        case 38:
        iVar3 = 0;
        break;
        case 39:
        iVar3 = 1;
        break;
        case 41:
        iVar3 = 2;
        break;
        case 42:
        iVar3 = 3;
        break;
        case 43:
        iVar3 = 4;
        break;
        case 44:
        iVar3 = 5;
        break;
        case 47:
        iVar3 = 6;
        break;
        case 49:
        iVar3 = 7;
        break;
        case 50:
        iVar3 = 8;
        break;
        case 51:
        iVar3 = 9;
        break;
        case 40:
        case 45:
        case 48:
        case 46: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U64848[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64848[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_37863( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_37863(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_38045( 0 );
    return;
}

void sub_38045(boolean bParam0)
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
        sub_38300();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_38300()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_38536(int iParam0)
{
    if (NOT l_U110)
    {
        if (l_U111)
        {
            if (sub_11641( ref l_U116, 1000 ))
            {
                l_U110 = 1;
                l_U107 = 6;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (l_U107)
        {
            case 0:
            if ((sub_2995( iParam0 + 0 )) > 200.00000000)
            {
                return 1;
            }
            if (sub_5680( iParam0 + 220, 7500 ))
            {
                sub_19874( iParam0 + 0, iParam0 + 4 );
                if (sub_38738( 0 ))
                {
                    if (sub_20330( iParam0 + 4 ))
                    {
                        l_U107 = 1;
                    }
                    else
                    {
                        l_U107 = 2;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, 0 );
                }
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2032(), iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2032() );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_2032(), iParam0->_fU4, 0 );
                }
                SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
                CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
                FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                SET_CAR_HEADING( iParam0->_fU4, iParam0->_fU20 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
                LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                TASK_LOOK_AT_CHAR( sub_2032(), iParam0->_fU0, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2032(), -2, 0 );
                if (IS_PED_IN_GROUP( iParam0->_fU0 ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
                BEGIN_CAM_COMMANDS( ref l_U117 );
                CREATE_CAM( 14, ref l_U181 );
                SET_CAM_ROT( l_U181, iParam0->_fU144[0]._fU0, iParam0->_fU144[0]._fU4, iParam0->_fU144[0]._fU8 );
                if (IS_BIG_VEHICLE( iParam0->_fU4 ))
                {
                    SET_CAM_FOV( l_U181, iParam0->_fU172[0] * 1.50000000 );
                    SET_CAM_POS( l_U181, iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 * 1.15000000 );
                    POINT_CAM_AT_PED( l_U181, sub_2032() );
                }
                else
                {
                    SET_CAM_FOV( l_U181, iParam0->_fU172[0] );
                    SET_CAM_POS( l_U181, iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                }
                if (iParam0->_fU208[0])
                {
                    SET_CAM_NEAR_DOF( l_U181, iParam0->_fU184[0] );
                    SET_CAM_FAR_DOF( l_U181, iParam0->_fU196[0] );
                }
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_ACTIVE( l_U181, 1 );
                SET_CAM_PROPAGATE( l_U181, 1 );
                if (iParam0->_fU208[0])
                {
                    SET_USE_HIGHDOF( 1 );
                }
                GET_GAME_TIMER( ref l_U116 );
                l_U111 = 1;
                DO_SCREEN_FADE_IN( 500 );
                sub_16389( iParam0->_fU248, iParam0 + 224, 8, 1 );
                l_U107 = 3;
            }
            break;
            case 2:
            SWITCH_PED_PATHS_OFF( ref iParam0->_fU80->_fU0, ref iParam0->_fU80->_fU4, ref iParam0->_fU80->_fU8, ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, ref iParam0->_fU92->_fU8 );
            SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
            CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2032() );
            SET_CHAR_COORDINATES( sub_2032(), ref iParam0->_fU40->_fU0, ref iParam0->_fU40->_fU4, ref iParam0->_fU40->_fU8 );
            SET_CHAR_HEADING( sub_2032(), iParam0->_fU52 );
            REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
            LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            SET_CHAR_COORDINATES( iParam0->_fU0, ref iParam0->_fU24->_fU0, ref iParam0->_fU24->_fU4, ref iParam0->_fU24->_fU8 );
            SET_CHAR_HEADING( iParam0->_fU0, iParam0->_fU36 );
            TASK_LOOK_AT_CHAR( sub_2032(), iParam0->_fU0, -2, 0 );
            TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_2032(), -2, 0 );
            BEGIN_CAM_COMMANDS( ref l_U117 );
            CREATE_CAM( 14, ref l_U181 );
            SET_CAM_POS( l_U181, iParam0->_fU116[1]._fU0, iParam0->_fU116[1]._fU4, iParam0->_fU116[1]._fU8 );
            SET_CAM_ROT( l_U181, iParam0->_fU144[1]._fU0, iParam0->_fU144[1]._fU4, iParam0->_fU144[1]._fU8 );
            SET_CAM_FOV( l_U181, iParam0->_fU172[1] );
            if (iParam0->_fU208[1])
            {
                SET_CAM_NEAR_DOF( l_U181, iParam0->_fU184[1] );
                SET_CAM_FAR_DOF( l_U181, iParam0->_fU196[1] );
            }
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_ACTIVE( l_U181, 1 );
            SET_CAM_PROPAGATE( l_U181, 1 );
            if (iParam0->_fU208[1])
            {
                SET_USE_HIGHDOF( 1 );
            }
            DO_SCREEN_FADE_IN( 500 );
            sub_16389( iParam0->_fU248, iParam0 + 224, 8, 1 );
            l_U107 = 4;
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (sub_17535( iParam0->_fU224 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U195 );
                    TASK_LOOK_AT_CHAR( 0, sub_2032(), 50, 0 );
                    TASK_LEAVE_CAR( 0, iParam0->_fU4 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                    CLOSE_SEQUENCE_TASK( l_U195 );
                    TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                    l_U107 = 5;
                }
            }
            break;
            case 4:
            if (NOT (sub_17535( iParam0->_fU224 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U195 );
                TASK_LOOK_AT_CHAR( 0, sub_2032(), 50, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U195 );
                TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                CLEAR_SEQUENCE_TASK( l_U195 );
                l_U107 = 5;
            }
            break;
            case 5:
            if ((l_U110) || (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))))
            {
                SET_CAM_ACTIVE( l_U181, 0 );
                SET_CAM_PROPAGATE( l_U181, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U117 );
                DESTROY_ALL_CAMS();
                if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
                {
                    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
                    {
                        FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    }
                }
                if ((iParam0->_fU208[1]) || (iParam0->_fU208[0]))
                {
                    SET_USE_HIGHDOF( 0 );
                }
                SET_CAM_BEHIND_PED( sub_2032() );
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
                    {
                        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                    }
                    CLEAR_CHAR_TASKS( iParam0->_fU0 );
                    DELETE_CHAR( iParam0 + 0 );
                }
                if (l_U110)
                {
                    sub_25692( 1 );
                }
                else
                {
                    sub_25868( 1 );
                }
                return 1;
            }
            break;
            case 6:
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U109 = 1;
            sub_2127( 0 );
            CLEAR_PRINTS();
            l_U107 = 5;
            break;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_38738(boolean bParam0)
{
    int iVar3;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_2032() ))
            {
                iVar3 = 0;
            }
            else
            {
                iVar3 = 1;
            }
            if (sub_19468( 1, iVar3 ))
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_1338(), 0 );
                }
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
    }
    else
    {
        sub_2127( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1338(), 0 );
        CLEAR_CHAR_TASKS( sub_2032() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2032(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

