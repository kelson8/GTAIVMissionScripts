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
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
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
    l_U249 = 0;
    l_U250 = 0;
    l_U357 = {-1406.05100000, 523.93130000, 11.59720000};
    l_U406 = 0;
    l_U407 = 1;
    l_U408 = 0;
    l_U409 = 0;
    l_U410 = 5;
    l_U417 = 0;
    l_U432 = 0;
    l_U459 = 45;
    if (sub_519( l_U459, l_U407 ))
    {
        if (IS_PLAYER_PLAYING( sub_1220() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1220(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1294();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U217)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (NOT l_U243)
                            {
                                if (g_U10978)
                                {
                                    sub_1294();
                                }
                            }
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1220(), 0 )))
                            {
                                sub_2748();
                                if ((sub_3243( ref l_U251, 22.00000000 )) || (sub_3151( ref l_U251 )))
                                {
                                    sub_3420();
                                }
                                sub_3793( ref l_U261 );
                                switch (l_U196)
                                {
                                    case 0:
                                    sub_3899();
                                    break;
                                    case 1:
                                    sub_5681();
                                    break;
                                }
                            }
                            else if ((sub_2783( ref l_U251 )) < 7.00000000)
                            {
                                if (NOT g_U65019)
                                {
                                    g_U65019 = 1;
                                    l_U233 = 1;
                                }
                            }
                            sub_1294();;
                        }
                        else
                        {
                            sub_1294();
                        }
                    }
                    if (l_U217)
                    {
                        sub_3793( ref l_U261 );
                        if ((sub_2783( ref l_U251 )) > 150.00000000)
                        {
                            CLEAR_PRINTS();
                            PRINT( "IVN1_GOD4", 7500, 1 );
                            sub_3420();
                        }
                        if (sub_11611( ref l_U251 ))
                        {
                            CLEAR_PRINTS();
                            sub_2009( 0 );
                            PRINT_NOW( "IVAN_PROMPT_4", 7500, 1 );
                            sub_3420();
                        }
                        switch (l_U199)
                        {
                            case 0:
                            sub_11751();
                            break;
                            case 1:
                            sub_29261();
                            break;
                            case 3:
                            sub_30479();
                            break;
                            case 4:
                            if (sub_5742( ref l_U409, 7500 ))
                            {
                                if (sub_38523( ref l_U503 ))
                                {
                                    sub_3420();
                                }
                            }
                            break;
                        }
                        if ((NOT l_U212) AND (IS_KEYBOARD_KEY_PRESSED( 31 )))
                        {
                            l_U212 = 1;
                            sub_33466();
                        }
                        if ((NOT l_U219) AND (IS_KEYBOARD_KEY_PRESSED( 30 )))
                        {
                            BEGIN_CAM_COMMANDS( ref l_U408 );
                            CREATE_CAM( 14, ref l_U385 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1914(), 0.00000000, 0.00000000, 0.00000000, ref l_U308._fU0, ref l_U308._fU4, ref l_U308._fU8 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            SET_CAM_PROPAGATE( l_U385, 1 );
                            SET_CAM_ACTIVE( l_U385, 1 );
                            l_U219 = 1;
                        }
                        if (l_U219)
                        {
                            SET_CAM_POS( l_U385, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
                            SET_CAM_ROT( l_U385, l_U311._fU0, 0.00000000, l_U311._fU8 );
                        }
                    }
                    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
                    {
                        sub_33466();
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

void sub_519(unknown uParam0, unknown uParam1)
{
    if (sub_528())
    {
        return 0;
    }
    return sub_575( uParam0, uParam1 );
}

int sub_528()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_575(unknown uParam0, int iParam1)
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
    uVar4 = sub_619( uParam0 );
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
        if (sub_896( g_U34048[uVar4]._fU8 ))
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

int sub_619(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_630( uParam0 )))
    {
        sub_739( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_630(unknown uParam0)
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

void sub_739(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1065( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1065(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1220()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1294()
{
    if (sub_1313( l_U459, l_U407 ))
    {
        sub_1409( l_U459, l_U407 );
        if (IS_PLAYER_PLAYING( sub_1220() ))
        {
            SET_PLAYER_CONTROL( sub_1220(), 1 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U251, 0, 0, 0 );
            SET_CAM_BEHIND_PED( sub_1914() );
        }
        sub_1962();
        sub_2009( 0 );
    }
    if (DOES_CHAR_EXIST( l_U251 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U251 )))
        {
            if (IS_PED_IN_GROUP( l_U251 ))
            {
                REMOVE_CHAR_FROM_GROUP( l_U251 );
            }
        }
    }
    CLEAR_NAMED_CUTSCENE( "rpivn1" );
    if (l_U233)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    if (l_U428[0] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    else if (l_U428[1] == 1)
    {
        CLEAR_PRINTS();
        PRINT( "BRIAN1_PROMPT_8", 7500, 1 );
    }
    SWITCH_PED_PATHS_ON( -1471.37000000, 526.26000000, 100.00000000, -1391.36000000, 529.69000000, 65436 );
    SWITCH_PED_PATHS_ON( -1676.73000000, 341.35000000, 100.00000000, -1754.26000000, 379.21000000, -100.00000000 );
    if (l_U236)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( -1742.76000000, 380.71660000, 40.29190000, -1676.81000000, 354.65770000, -1.00000000 );
    }
    if (l_U432 == 1)
    {
        SWITCH_PED_PATHS_ON( -1681.47800000, 344.70750000, 24.37650000, -1752.45800000, 379.20430000, 24.44290000 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1914(), 1 );
    sub_2556( ref l_U251 );
    sub_2614();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1313(int iParam0, int iParam1)
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

void sub_1409(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1313( uParam0, uParam1 )))
    {
        sub_739( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1505();
    if (g_U813)
    {
        sub_1597();
    }
    else
    {
        sub_1715();
    }
    g_U10978 = 0;
    return;
}

void sub_1505()
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

void sub_1597()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1643();
    return;
}

void sub_1643()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
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
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1914()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1962()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2009(unknown uParam0)
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

void sub_2556(unknown uParam0)
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

void sub_2614()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_2748()
{
    if (l_U218)
    {
        if (IS_HINT_RUNNING())
        {
            if ((sub_2948()) || ((sub_2783( ref l_U251 )) > 18.00000000))
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U251, 0, 0, 0 );
                l_U218 = 0;
                return 1;
            }
        }
    }
    return 0;
}

void sub_2783(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_1914(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

int sub_2948()
{
    if (sub_2961( ref l_U261 ))
    {
        GET_CAR_SPEED( l_U261, ref l_U377 );
        if (l_U377 > 15.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2961(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1914() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1914(), uParam0 );
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

int sub_3151(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1914(), 0 ))
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

int sub_3243(unknown uParam0, float fParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_2783( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_1914() ))
                {
                    if (IS_CHAR_ARMED( sub_1914(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1220(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1220(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_1914() ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_3420()
{
    sub_3433( ref l_U251 );
    if (g_U65029 < 2)
    {
        g_U65029++;
    }
    g_U65030++;
    if (g_U65030 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1220(), 150 );
        SAY_AMBIENT_SPEECH( sub_1914(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_3606( ref l_U251 );
    sub_1294();
    return;
}

void sub_3433(unknown uParam0)
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

void sub_3606(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_CAR( (uParam0^) ))
            {
                if (sub_3665( ref uVar3, (uParam0^) ))
                {
                    SET_CHAR_KEEP_TASK( (uParam0^), 1 );
                    TASK_LEAVE_CAR_IMMEDIATELY( (uParam0^), uVar3 );
                }
            }
        }
    }
    return;
}

int sub_3665(unknown uParam0, unknown uParam1)
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

void sub_3793(unknown uParam0)
{
    int iVar3;

    if (sub_2961( ref iVar3 ))
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

void sub_3899()
{
    switch (l_U197)
    {
        case 0:
        l_U299 = {-1406.12900000, 528.40530000, 11.93750000};
        l_U376 = 217.53430000;
        l_U354 = {-1408.93700000, 527.68260000, 11.96760000};
        l_U382 = 127.12200000;
        l_U271[0] = {-1728.38600000, 361.89950000, 24.44410000};
        l_U363[0] = 202.00000000;
        l_U271[1] = {-1727.94100000, 360.65810000, 24.44410000};
        l_U363[1] = 23.79960000;
        l_U271[2] = {-1735.40200000, 361.61670000, 29.48770000};
        l_U363[2] = 293.79930000;
        l_U271[3] = {-1723.66600000, 352.46410000, 31.01300000};
        l_U363[3] = 61.30940000;
        l_U271[4] = {-1746.79500000, 345.98460000, 24.44390000};
        l_U363[4] = 269.00000000;
        l_U302 = {-1725.64800000, 365.10690000, 24.44390000};
        l_U369 = 155.73590000;
        l_U305 = {-1727.08300000, 366.13950000, 24.44390000};
        l_U370 = 192.82430000;
        l_U338 = {-1727.90100000, 362.69610000, 24.44390000};
        l_U379 = 349.44190000;
        l_U314 = {-1723.66500000, 370.07500000, 26.70900000};
        l_U317 = {-1723.70800000, 366.69400000, 25.16880000};
        l_U341[0] = {-1734.39600000, 372.87530000, 24.44380000};
        l_U348 = {-0.30534300, 1.56991100, 0.01601700};
        l_U357 = {-1406.05100000, 523.93130000, 11.59720000};
        l_U383 = 93.28350000;
        l_U360 = {-1414.99500000, 527.75400000, 12.30160000};
        l_U384 = 212.26960000;
        l_U436[0] = 200;
        l_U402 = 1166762483;
        l_U396[0] = 632613980;
        l_U396[1] = -1143910864;
        l_U396[2] = 869501081;
        l_U396[3] = 632613980;
        l_U396[4] = -1143910864;
        for ( l_U406 = 0; l_U406 <= (l_U410 - 1); l_U406++ )
        {
            l_U411[l_U406] = 0;
        }
        for ( l_U406 = 0; l_U406 <= 1; l_U406++ )
        {
            l_U425[l_U406] = 0;
            l_U433[l_U406] = 0;
            l_U246[l_U406] = 0;
        }
        REQUEST_MODEL( l_U402 );
        REQUEST_ANIMS( "missivan_1" );
        sub_4696( "PIVAUD" );
        sub_4815( 0, sub_1914(), "NIKO", 0 );
        l_U197 = 1;
        break;
        case 1:
        if (NOT l_U215)
        {
            if (HAS_MODEL_LOADED( l_U402 ))
            {
                CLEAR_AREA( l_U299._fU0, l_U299._fU4, l_U299._fU8, 10.00000000, 1 );
                CREATE_CHAR( 26, l_U402, l_U299._fU0, l_U299._fU4, l_U299._fU8, ref l_U251, 1 );
                SET_CHAR_HEADING( l_U251, l_U376 );
                SET_CHAR_HEALTH( l_U251, 200 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U251, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U251, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U251, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U251, 1 );
                TASK_STAND_GUARD( l_U251, l_U299, l_U376, 0.00000000, 0, -1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U251, 1 );
                sub_4815( 1, l_U251, "IVAN", 0 );
                SET_PED_DIES_WHEN_INJURED( l_U251, 1 );
                sub_5245( ref l_U251, 20.00000000, 10.00000000 );
                sub_5326( ref l_U251, ref l_U262, 1 );
                l_U215 = 1;
            }
            else
            {
                WAIT( 0 );
            }
            PRINTSTRING( "loading enemy ivan" );
            PRINTNL();
        }
        if ((l_U215) AND (NOT l_U216))
        {
            if (HAVE_ANIMS_LOADED( "missivan_1" ))
            {
                TASK_PLAY_ANIM( l_U251, "friendly_idle", "missivan_1", 8.00000000, 1, 0, 0, 0, -2 );
                l_U216 = 1;
                l_U196 = 1;
            }
            else
            {
                WAIT( 0 );
            }
            PRINTSTRING( "loading anims" );
            PRINTNL();
        }
        break;
    }
    return;
}

void sub_4696(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_4713();
    return;
}

void sub_4713()
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

void sub_4815(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4895( "\n PED NUMBER ", uParam0 );
    sub_4935( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4895(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4935(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5245(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5326(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_5681()
{
    sub_5728( ref l_U251, ref l_U438, "GENERIC_HI", "GENERIC_HI", ref l_U244 );
    switch (l_U198)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U251 )))
        {
            if (NOT l_U221)
            {
                if (sub_2961( ref l_U261 ))
                {
                    if ((sub_2783( ref l_U251 )) < 10.00000000)
                    {
                        sub_5981();
                    }
                }
                else if (IS_CHAR_ON_FOOT( sub_1914() ))
                {
                    if ((sub_2783( ref l_U251 )) < 10.00000000)
                    {
                        sub_5981();
                    }
                }
            }
        }
        break;
        case 1: break;
    }
    if (IS_CHAR_ON_FOOT( sub_1914() ))
    {
        sub_6195( ref l_U251, ref l_U448, ref l_U299, ref l_U376, ref l_U242, 0.50000000, "friendly_idle", "missivan_1", 0, 1 );
        switch (l_U200)
        {
            case 0:
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U251, g_U65012._fU0, g_U65012._fU4, g_U65012._fU8, ref l_U320._fU0, ref l_U320._fU4, ref l_U320._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U251, g_U65015._fU0, g_U65015._fU4, g_U65015._fU8, ref l_U323._fU0, ref l_U323._fU4, ref l_U323._fU8 );
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1914(), l_U320._fU0, l_U320._fU4, l_U320._fU8, l_U323._fU0, l_U323._fU4, l_U323._fU8, 6.00000000, 0 ))
            {
                if (sub_6713())
                {
                    CLEAR_PRINTS();
                    sub_2009( 0 );
                    SET_PLAYER_CONTROL( sub_1220(), 0 );
                    SET_MISSION_FLAG( 1 );
                    sub_6808( l_U459, l_U407 );
                    l_U243 = 1;
                    DO_SCREEN_FADE_OUT( 100 );
                    CLEAR_PRINTS();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    SWITCH_PED_PATHS_OFF( -1471.37000000, 526.26000000, 100.00000000, -1391.36000000, 529.69000000, 65436 );
                    GET_CHAR_COORDINATES( sub_1914(), ref l_U290._fU0, ref l_U290._fU4, ref l_U290._fU8 );
                    CLEAR_AREA( l_U290._fU0, l_U290._fU4, l_U290._fU8, 100.00000000, 1 );
                    LOAD_ADDITIONAL_TEXT( "PIVAUD", 6 );
                    CLEAR_NAMED_CUTSCENE( "rpivn1" );
                    PRINTSTRING( "start_cutscene_now" );
                    PRINTNL();
                    START_CUTSCENE_NOW( "rpivn1" );
                    while (NOT HAS_CUTSCENE_LOADED())
                    {
                        WAIT( 0 );
                    }
                    while (NOT HAS_CUTSCENE_FINISHED())
                    {
                        WAIT( 0 );
                    }
                    sub_9384();
                    sub_11260( 1 );
                    l_U213 = 1;
                    l_U217 = 1;
                    l_U199 = 0;
                }
            }
            break;
            default:
        }
    }
    return;
}

void sub_5728(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_5742( uParam1, 7000 ))
    {
        if ((sub_2783( uParam0 )) < 15)
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

int sub_5742(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_5981()
{
    if (IS_CHAR_ON_FOOT( sub_1914() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U251, 0, 0, 6000 );
        l_U218 = 1;
    }
    l_U221 = 1;
    l_U198 = 1;
    return;
}

void sub_6195(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_6713()
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

void sub_6808(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_739( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_619( uParam0 );
    if (g_U34175._fU4)
    {
        sub_739( "Interactions_Started: Another interaction is already taking place" );
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
        sub_739( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_7171();
    sub_7942( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8086( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7171()
{
    sub_7180();
    sub_7283( ref g_U9893._fU68 );
    sub_7332();
    return;
}

void sub_7180()
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

void sub_7283(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7332()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7370( 1, g_U569[I] )) == 0)
        {
            sub_7621( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7799())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7370(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7621(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7706( g_U569 - 1 );
    return;
}

void sub_7706(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7799()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7370( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7942(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_7976();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7976()
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

void sub_8086(unknown uParam0, int iParam1)
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
    sub_8932( cVar4 );
    return;
}

void sub_8932(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_9384()
{
    sub_9410( ref l_U261, ref l_U357, ref l_U383, 20.00000000 );
    SWITCH_PED_PATHS_ON( -1471.37000000, 526.26000000, 100.00000000, -1391.36000000, 529.69000000, 65436 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_1914(), 0 );
    CLEAR_WANTED_LEVEL( sub_1220() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    for ( l_U406 = 0; l_U406 <= (l_U410 - 1); l_U406++ )
    {
        REQUEST_MODEL( l_U396[l_U406] );
    }
    GET_WEAPONTYPE_MODEL( 10, ref l_U404 );
    REQUEST_MODEL( l_U404 );
    GET_WEAPONTYPE_MODEL( 7, ref l_U405 );
    REQUEST_MODEL( l_U405 );
    REQUEST_ANIMS( "gestures@niko" );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U442 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U439 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U440 );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U441 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U444 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U445 );
    LOAD_ADDITIONAL_TEXT( "WI_IV1", 0 );
    sub_9854( "ivan_1" );
    LOAD_ALL_OBJECTS_NOW();
    LOAD_SCENE( l_U299._fU0, l_U299._fU4, l_U299._fU8 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U439, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U439, 5 );
    if (NOT (IS_CHAR_INJURED( l_U251 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U251 );
        SET_CHAR_COORDINATES( l_U251, l_U354._fU0, l_U354._fU4, l_U354._fU8 );
        SET_CHAR_HEADING( l_U251, l_U382 );
        TASK_PLAY_ANIM( l_U251, "friendly_idle", "missivan_1", 8.00000000, 1, 0, 0, 0, -2 );
        SET_CHAR_COORDINATES( sub_1914(), -1405.43000000, 527.70650000, 11.88350000 );
        SET_CHAR_HEADING( sub_1914(), 108.67670000 );
        sub_10273( ref l_U251, ref l_U444, ref l_U445 );
    }
    REMOVE_BLIP( l_U262 );
    OPEN_SEQUENCE_TASK( ref l_U448 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U360._fU0, l_U360._fU4, l_U360._fU8, 2, -1, 0.40000000 );
    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1914() );
    CLOSE_SEQUENCE_TASK( l_U448 );
    TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
    CLEAR_SEQUENCE_TASK( l_U448 );
    l_U503._fU0 = l_U251;
    l_U503._fU8 = {-1589.37700000, 582.10200000, 24.34240000};
    l_U503._fU20 = 180.57820000;
    l_U503._fU24 = {-1593.27000000, 583.00000000, 24.35510000};
    l_U503._fU36 = 200.22000000;
    l_U503._fU40 = {-1593.01000000, 581.11710000, 24.34680000};
    l_U503._fU52 = 20.84910000;
    l_U503._fU116[0] = {-1587.66400000, 576.42430000, 25.82521000};
    l_U503._fU144[0] = {-7.19526800, -0.00000000, 27.18401000};
    l_U503._fU172[0] = 33.30003000;
    l_U503._fU116[1] = {-1591.68800000, 580.35870000, 25.81119000};
    l_U503._fU144[1] = {-1.38022500, 2.29116700, 42.07972000};
    l_U503._fU172[1] = 34.80003000;
    l_U503._fU208[0] = 0;
    l_U503._fU208[1] = 1;
    l_U503._fU184[0] = 0.01000000;
    l_U503._fU196[0] = 150.00000000;
    l_U503._fU184[1] = 0.01000000;
    l_U503._fU196[1] = 20.00000000;
    l_U503._fU56 = {-1578.97000000, 528.89000000, 100.00000000};
    l_U503._fU68 = {-1590.33000000, 591.99000000, -100.00000000};
    l_U503._fU80 = {-1590.69000000, 481.91000000, 100.00000000};
    l_U503._fU92 = {-1596.71000000, 676.28010000, -100.00000000};
    l_U503._fU104 = {-1626.01000000, 582.51000000, 25.00000000};
    l_U503._fU248 = "PIV_FAIL";
    return;
}

void sub_9410(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_COORDINATES( sub_1914(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (LOCATE_CAR_3D( (uParam0^), uVar6._fU0, uVar6._fU4, uVar6._fU8, uParam3, uParam3, uParam3, 0 ))
            {
                SET_CAR_HEADING( (uParam0^), (uParam2^) );
                SET_CAR_COORDINATES( (uParam0^), iParam1->_fU0, iParam1->_fU4, iParam1->_fU8 );
            }
        }
    }
    return;
}

void sub_9854(unknown uParam0)
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

void sub_10273(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_11260(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2009( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1220() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_1914() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_1914() );
        }
        SET_PLAYER_CONTROL( sub_1220(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1914(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

int sub_11611(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

void sub_11751()
{
    switch (l_U201)
    {
        case 0:
        GET_SCRIPT_TASK_STATUS( l_U251, 29, ref l_U457 );
        if (l_U457 == 7)
        {
            TASK_LOOK_AT_CHAR( l_U251, sub_1914(), -2, 0 );
            GET_GAME_TIMER( ref l_U409 );
            l_U201 = 1;
        }
        break;
        case 1:
        if (sub_11897( ref l_U251, 200 ))
        {
            sub_2009( 0 );
            CLEAR_PRINTS();
            PRINT_NOW( "IVAN1_PROMPT_2", 7500, 1 );
            sub_3420();
        }
        sub_6195( ref l_U251, ref l_U448, ref l_U360, ref l_U384, ref l_U242, 0.50000000, "friendly_idle", "missivan_1", 1, 0 );
        sub_12135( ref l_U251, ref l_U262, "IVN1_GOD11", "IVN1_GOD10" );
        if (NOT l_U245)
        {
            if (NOT (IS_CHAR_INJURED( l_U251 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U262 )))
                {
                    if ((sub_2783( ref l_U251 )) >= 30.00000000)
                    {
                        ADD_BLIP_FOR_CHAR( l_U251, ref l_U262 );
                        SET_BLIP_AS_FRIENDLY( l_U262, 1 );
                        CLEAR_PRINTS();
                        PRINT_NOW( "IVAN_PROMPT_5", 7500, 1 );
                    }
                }
                else if ((sub_2783( ref l_U251 )) < 10.00000000)
                {
                    if (DOES_BLIP_EXIST( l_U262 ))
                    {
                        REMOVE_BLIP( l_U262 );
                    }
                }
            }
            if ((sub_2783( ref l_U251 )) < 30)
            {
                if (DOES_BLIP_EXIST( l_U262 ))
                {
                    REMOVE_BLIP( l_U262 );
                }
                CLEAR_PRINTS();
                PRINT_NOW( "IVN1_GOD10", 7500, 1 );
                SAY_AMBIENT_SPEECH( l_U251, "NEED_A_VEHICLE", 1, 0, 2 );
                l_U245 = 1;
            }
        }
        if (sub_12600( l_U251 ))
        {
            if (DOES_BLIP_EXIST( l_U262 ))
            {
                CLEAR_CHAR_TASKS( l_U251 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U251, 0 );
                sub_12739( ref l_U251, ref l_U446, ref l_U443, 0 );
                SWITCH_ROADS_OFF( -1742.76000000, 380.71660000, 40.29190000, -1676.81000000, 354.65770000, -1.00000000 );
                l_U236 = 1;
                ADD_SCENARIO_BLOCKING_AREA( -1735.51100000, 331.66690000, 100.00000000, -1732.18700000, 375.42120000, -100.00000000 );
                REMOVE_BLIP( l_U262 );
                CLEAR_PRINTS();
                ADD_BLIP_FOR_COORD( l_U317._fU0, l_U317._fU4, l_U317._fU8, ref l_U270 );
                SET_ROUTE( l_U270, 1 );
                GET_GAME_TIMER( ref l_U409 );
                l_U201 = 2;
            }
        }
        break;
        case 2:
        CLEAR_AREA( l_U271[0]._fU0, l_U271[0]._fU4, l_U271[0]._fU8, 50.00000000, 1 );
        for ( l_U406 = 0; l_U406 <= 1; l_U406++ )
        {
            CREATE_CHAR( 26, l_U396[l_U406], l_U271[l_U406]._fU0, l_U271[l_U406]._fU4, l_U271[l_U406]._fU8, ref l_U252[l_U406], 1 );
            SET_CHAR_HEADING( l_U252[l_U406], l_U363[l_U406] );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U252[l_U406], 1 );
            GIVE_WEAPON_TO_CHAR( l_U252[l_U406], 7, 9999, 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[l_U406], 1 );
            SET_CHAR_MONEY( l_U252[l_U406], 200 );
        }
        sub_4815( 2, l_U252[0], "DEBTOR", 0 );
        if (NOT (IS_CHAR_INJURED( l_U252[0] )))
        {
            sub_13636( l_U252[0], "argue_b", "missivan_1", l_U449[0], l_U252[1], 9999999 );
        }
        if (NOT (IS_CHAR_INJURED( l_U252[1] )))
        {
            sub_13636( l_U252[1], "street_chat_b", "missivan_1", l_U449[1], l_U252[0], 9999999 );
        }
        l_U201 = 3;
        break;
        case 3:
        sub_13939( ref l_U262, ref l_U270, ref l_U314, "IVN1_GOD1", "IVN1_GOD9", ref l_U240, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
        if (NOT l_U240)
        {
            sub_14273( ref l_U251, ref l_U262, ref l_U314, ref l_U270, "IVN1_GOD8", "IVN1_GOD1", 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, ref l_U446, ref l_U443 );
        }
        else
        {
            sub_14560( ref l_U251, ref l_U262, "IVN1_GOD8", ref l_U446, ref l_U443 );
        }
        if (sub_14766( ref l_U252[0], -1727.73500000, 364.43990000, 24.44400000, 8.20000000, 10.10000000, 4.00000000 ))
        {
            if (DOES_BLIP_EXIST( l_U270 ))
            {
                REMOVE_BLIP( l_U270 );
            }
            CLEAR_PRINTS();
            sub_2009( 0 );
            PRINT_NOW( "IVN1_GOD5b", 7500, 1 );
            GET_GAME_TIMER( ref l_U503._fU220 );
            l_U199 = 4;
            break;
        }
        if (sub_14969())
        {
            if (DOES_BLIP_EXIST( l_U270 ))
            {
                REMOVE_BLIP( l_U270 );
            }
            CLEAR_PRINTS();
            sub_2009( 0 );
            PRINT_NOW( "IVN1_GOD5", 7500, 1 );
            GET_GAME_TIMER( ref l_U503._fU220 );
            sub_15475();
            l_U199 = 4;
            break;
        }
        sub_15758();
        if (DOES_BLIP_EXIST( l_U270 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1914(), l_U314._fU0, l_U314._fU4, l_U314._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((sub_2783( ref l_U251 )) < 10.00000000)
                {
                    if (sub_18683())
                    {
                        sub_19100( ref l_U251, ref l_U261 );
                        if (sub_19556( ref l_U261 ))
                        {
                            SET_PLAYER_CONTROL( sub_1220(), 0 );
                            TASK_CAR_TEMP_ACTION( sub_1914(), l_U261, 6, 100 );
                            l_U239 = 1;
                            GET_GAME_TIMER( ref l_U409 );
                            l_U201 = 4;
                        }
                        else
                        {
                            sub_19677();
                        }
                    }
                }
                else if (NOT g_U65018)
                {
                    PRINT( "IVN1_GOD12", 7500, 1 );
                    PRINTNL();
                    g_U65018 = 1;
                }
            }
            else if (g_U65018)
            {
                CLEAR_THIS_PRINT( "IVN1_GOD12" );
                g_U65018 = 0;
            }
        }
        break;
        case 4:
        if (sub_5742( ref l_U409, 1000 ))
        {
            sub_19677();
        }
        break;
        case 5:
        if (NOT (l_U421[0] == 1))
        {
            if (l_U433[0] == 1)
            {
                if (sub_22199( ref l_U424, 1000 ))
                {
                    l_U421[0] = 1;
                    sub_22294();
                }
            }
        }
        switch (l_U202)
        {
            case 0:
            if (sub_5742( ref l_U409, 500 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U455 );
                TASK_LEAVE_CAR( 0, l_U261 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U271[0]._fU0, l_U271[0]._fU4, l_U271[0]._fU8, 2, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U455 );
                TASK_PERFORM_SEQUENCE( sub_1914(), l_U455 );
                CLEAR_SEQUENCE_TASK( l_U455 );
                l_U202 = 1;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( sub_1914(), 29, ref l_U457 );
            GET_SCRIPT_TASK_STATUS( l_U251, 29, ref l_U458 );
            if ((l_U458 == 1) AND (l_U457 == 1))
            {
                GET_SEQUENCE_PROGRESS( sub_1914(), ref l_U418[0] );
                GET_SEQUENCE_PROGRESS( l_U251, ref l_U418[1] );
                if ((l_U418[1] > 0) AND (l_U418[0] > 0))
                {
                    GET_GAME_TIMER( ref l_U409 );
                    l_U202 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U252[0] )))
            {
                if (NOT l_U239)
                {
                    l_U433[0] = 1;
                    GET_GAME_TIMER( ref l_U424 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                }
                else
                {
                    SET_CAM_ACTIVE( l_U391, 0 );
                    SET_CAM_PROPAGATE( l_U391, 0 );
                }
                if (NOT l_U239)
                {
                    CLEAR_AREA( l_U305._fU0, l_U305._fU4, l_U305._fU8, 7.00000000, 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U251 );
                    SET_CHAR_COORDINATES( l_U251, -1726.16600000, 370.10570000, 24.44400000 );
                    SET_CHAR_HEADING( l_U251, 178.53830000 );
                    OPEN_SEQUENCE_TASK( ref l_U448 );
                    TASK_LOOK_AT_CHAR( 0, l_U252[0], -2, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U305._fU0, l_U305._fU4, l_U305._fU8, 2, -1, 0.40000000 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, l_U305._fU0, l_U305._fU4, l_U305._fU8, l_U370, 1061158912 );
                    CLOSE_SEQUENCE_TASK( l_U448 );
                    TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
                    CLEAR_SEQUENCE_TASK( l_U448 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1914() );
                    SET_CHAR_COORDINATES( sub_1914(), -1723.56100000, 367.84400000, 24.44400000 );
                    SET_CHAR_HEADING( sub_1914(), 149.21090000 );
                    OPEN_SEQUENCE_TASK( ref l_U455 );
                    TASK_LOOK_AT_CHAR( 0, l_U252[0], -2, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U302._fU0, l_U302._fU4, l_U302._fU8, 2, -1, 0.40000000 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, l_U302._fU0, l_U302._fU4, l_U302._fU8, l_U369, 1061158912 );
                    CLOSE_SEQUENCE_TASK( l_U455 );
                    TASK_PERFORM_SEQUENCE( sub_1914(), l_U455 );
                    CLEAR_SEQUENCE_TASK( l_U455 );
                }
                else
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U251 );
                    SET_CHAR_COORDINATES( l_U251, -1726.16600000, 370.10570000, 24.44400000 );
                    SET_CHAR_HEADING( l_U251, 178.53830000 );
                    OPEN_SEQUENCE_TASK( ref l_U448 );
                    TASK_LOOK_AT_CHAR( 0, l_U252[0], -2, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U305._fU0, l_U305._fU4, l_U305._fU8, 2, -1, 0.40000000 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, l_U305._fU0, l_U305._fU4, l_U305._fU8, l_U370, 1061158912 );
                    CLOSE_SEQUENCE_TASK( l_U448 );
                    TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
                    CLEAR_SEQUENCE_TASK( l_U448 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1914() );
                    SET_CHAR_COORDINATES( sub_1914(), -1723.56100000, 367.84400000, 24.44400000 );
                    SET_CHAR_HEADING( sub_1914(), 149.21090000 );
                    OPEN_SEQUENCE_TASK( ref l_U455 );
                    TASK_LOOK_AT_CHAR( 0, l_U252[0], -2, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U302._fU0, l_U302._fU4, l_U302._fU8, 2, -1, 0.40000000 );
                    TASK_CHAR_SLIDE_TO_COORD( 0, l_U302._fU0, l_U302._fU4, l_U302._fU8, l_U369, 1061158912 );
                    CLOSE_SEQUENCE_TASK( l_U455 );
                    TASK_PERFORM_SEQUENCE( sub_1914(), l_U455 );
                    CLEAR_SEQUENCE_TASK( l_U455 );
                }
                SET_CAM_INTERP_STYLE_CORE( l_U393, l_U392, l_U394, 4000, 0 );
                SET_CAM_ACTIVE( l_U393, 1 );
                SET_CAM_PROPAGATE( l_U393, 1 );
                GET_GAME_TIMER( ref l_U409 );
                if (NOT l_U239)
                {
                    l_U202 = 4;
                }
                else
                {
                    l_U202 = 4;
                }
            }
            break;
            case 3:
            if (sub_5742( ref l_U409, 2750 ))
            {
                l_U202 = 4;
            }
            break;
            case 4:
            if (sub_5742( ref l_U409, 2750 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U252[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U252[1] )))
                    {
                        SET_CAM_ACTIVE( l_U393, 0 );
                        SET_CAM_PROPAGATE( l_U393, 0 );
                        SET_CAM_ACTIVE( l_U392, 0 );
                        SET_CAM_PROPAGATE( l_U392, 0 );
                        SET_CAM_ACTIVE( l_U394, 0 );
                        SET_CAM_PROPAGATE( l_U394, 0 );
                        CLEAR_AREA( l_U305._fU0, l_U305._fU4, l_U305._fU8, 7.00000000, 1 );
                        TASK_LOOK_AT_CHAR( sub_1914(), l_U252[0], -2, 0 );
                        TASK_LOOK_AT_CHAR( l_U251, l_U252[0], -2, 0 );
                        sub_2009( 0 );
                        sub_25277( "PIV_MONEY", 0, 1, ref l_U460[0], 8, 1 );
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( l_U338._fU0, l_U338._fU4, l_U338._fU8 );
                        CLEAR_SEQUENCE_TASK( l_U449[0] );
                        OPEN_SEQUENCE_TASK( ref l_U449[0] );
                        TASK_LOOK_AT_CHAR( 0, l_U251, -2, 0 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                        CLOSE_SEQUENCE_TASK( l_U449[0] );
                        TASK_PERFORM_SEQUENCE( l_U252[0], l_U449[0] );
                        CLEAR_SEQUENCE_TASK( l_U449[0] );
                        CLEAR_SEQUENCE_TASK( l_U449[1] );
                        OPEN_SEQUENCE_TASK( ref l_U449[1] );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1914() );
                        TASK_LOOK_AT_CHAR( 0, sub_1914(), -2, 0 );
                        CLOSE_SEQUENCE_TASK( l_U449[1] );
                        TASK_PERFORM_SEQUENCE( l_U252[1], l_U449[1] );
                        CLEAR_SEQUENCE_TASK( l_U449[1] );
                        if (NOT (IS_CHAR_INJURED( l_U252[2] )))
                        {
                            CLEAR_CHAR_TASKS( l_U252[2] );
                            OPEN_SEQUENCE_TASK( ref l_U449[2] );
                            TASK_AIM_GUN_AT_COORD( 0, l_U302._fU0, l_U302._fU4, l_U302._fU8, 999999 );
                            CLOSE_SEQUENCE_TASK( l_U449[2] );
                            TASK_PERFORM_SEQUENCE( l_U252[2], l_U449[2] );
                            CLEAR_SEQUENCE_TASK( l_U449[2] );
                            GET_GAME_TIMER( ref l_U409 );
                        }
                        if (NOT l_U239)
                        {
                            l_U433[0] = 1;
                            GET_GAME_TIMER( ref l_U424 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        }
                        else
                        {
                            SET_CAM_ACTIVE( l_U391, 0 );
                            SET_CAM_PROPAGATE( l_U391, 0 );
                        }
                        SET_CAM_INTERP_STYLE_CORE( l_U393, l_U385, l_U386, 5000, 0 );
                        SET_CAM_ACTIVE( l_U393, 1 );
                        SET_CAM_PROPAGATE( l_U393, 1 );
                        l_U202 = 5;
                    }
                }
            }
            break;
            case 5:
            if (NOT (sub_17081( l_U460[0] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U252[0] )))
                {
                    sub_25277( "PIV_MONEY", 1, 1, ref l_U460[0], 8, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U449[0] );
                    TASK_LOOK_AT_CHAR( 0, l_U251, -1, 0 );
                    TASK_PLAY_ANIM( 0, "let_me_think", "missivan_1", 8.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "indicate_listener", "missivan_1", 8.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "me", "missivan_1", 8.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U449[0] );
                    TASK_PERFORM_SEQUENCE( l_U252[0], l_U449[0] );
                    CLEAR_SEQUENCE_TASK( l_U449[0] );
                    l_U202 = 6;
                }
            }
            break;
            case 6:
            if (NOT (sub_17081( l_U460[0] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U252[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U252[2] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U252[3] )))
                        {
                            SET_CAM_PROPAGATE( l_U393, 0 );
                            SET_CAM_ACTIVE( l_U393, 0 );
                            SET_CAM_PROPAGATE( l_U385, 0 );
                            SET_CAM_ACTIVE( l_U385, 0 );
                            SET_CAM_PROPAGATE( l_U386, 0 );
                            SET_CAM_ACTIVE( l_U386, 0 );
                            SET_CHAR_COORDINATES( l_U252[0], l_U338._fU0, l_U338._fU4, l_U338._fU8 );
                            SET_CHAR_HEADING( l_U252[0], l_U379 );
                            CLEAR_CHAR_TASKS( l_U252[0] );
                            CLEAR_SEQUENCE_TASK( l_U449[0] );
                            OPEN_SEQUENCE_TASK( ref l_U449[0] );
                            TASK_PLAY_ANIM( 0, "u_thin_i'm_stupid", "missivan_1", 8.00000000, 0, 0, 0, 0, -1 );
                            TASK_PLAY_ANIM( 0, "i_cant_say", "missivan_1", 8.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U449[0] );
                            TASK_PERFORM_SEQUENCE( l_U252[0], l_U449[0] );
                            CLEAR_SEQUENCE_TASK( l_U449[0] );
                            CLEAR_CHAR_TASKS( l_U252[3] );
                            OPEN_SEQUENCE_TASK( ref l_U449[3] );
                            TASK_GO_STRAIGHT_TO_COORD( 0, -1724.24700000, 353.81930000, 31.01300000, 2, -1 );
                            TASK_PLAY_ANIM( 0, "reload", "gun@shotgun", 8.00000000, 0, 0, 0, 0, -1 );
                            TASK_AIM_GUN_AT_COORD( 0, -1730.00000000, 363.00000000, 25.89000000, 9000 );
                            CLOSE_SEQUENCE_TASK( l_U449[3] );
                            TASK_PERFORM_SEQUENCE( l_U252[3], l_U449[3] );
                            CLEAR_SEQUENCE_TASK( l_U449[3] );
                            GET_GAME_TIMER( ref l_U409 );
                            SET_CAM_PROPAGATE( l_U388, 1 );
                            SET_CAM_ACTIVE( l_U388, 1 );
                            GET_GAME_TIMER( ref l_U409 );
                            l_U202 = 7;
                        }
                    }
                }
            }
            break;
            case 7:
            if (sub_5742( ref l_U409, 500 ))
            {
                sub_25277( "PIV_MONEY", 2, 0, ref l_U460[0], 8, 1 );
                l_U202 = 10;
            }
            break;
            case 10:
            if (sub_17081( l_U460[0] ))
            {
                if ((sub_26941( l_U460[0] )) > 2)
                {
                    SET_CAM_PROPAGATE( l_U388, 0 );
                    SET_CAM_ACTIVE( l_U388, 0 );
                    SET_CAM_PROPAGATE( l_U389, 1 );
                    SET_CAM_ACTIVE( l_U389, 1 );
                    GET_GAME_TIMER( ref l_U409 );
                    l_U202 = 11;
                }
            }
            break;
            case 11:
            if ((l_U421[0] == 1) || (NOT (sub_17081( l_U460[0] ))))
            {
                if (NOT (IS_CHAR_INJURED( l_U252[0] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U252[1] )))
                    {
                        SET_CAM_PROPAGATE( l_U389, 0 );
                        SET_CAM_ACTIVE( l_U389, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U252[0], 7, 1 );
                        SET_CHAR_HEADING( l_U252[0], 360.00000000 );
                        CLEAR_CHAR_TASKS( l_U252[0] );
                        CLEAR_SEQUENCE_TASK( l_U449[0] );
                        OPEN_SEQUENCE_TASK( ref l_U449[0] );
                        TASK_PLAY_ANIM( 0, "WalkBack_wGun", "missivan_1", 8.00000000, 0, 1, 1, 0, -1 );
                        TASK_SEEK_COVER_TO_COORDS( 0, -1728.18000000, 356.18000000, 24.49000000, l_U305._fU0, l_U305._fU4, l_U305._fU8, 3000 );
                        CLOSE_SEQUENCE_TASK( l_U449[0] );
                        TASK_PERFORM_SEQUENCE( l_U252[0], l_U449[0] );
                        CLEAR_SEQUENCE_TASK( l_U449[0] );
                        CLEAR_AREA( l_U271[4]._fU0, l_U271[4]._fU4, l_U271[4]._fU8, 2.00000000, 1 );
                        CREATE_CHAR( 26, l_U396[4], l_U271[4]._fU0, l_U271[4]._fU4, l_U271[4]._fU8, ref l_U252[4], 1 );
                        SET_CHAR_HEADING( l_U252[4], l_U363[4] );
                        GIVE_WEAPON_TO_CHAR( l_U252[4], 7, 30000, 0 );
                        SET_CHAR_MONEY( l_U252[4], 100 );
                        CLEAR_CHAR_TASKS( l_U252[4] );
                        CLEAR_SEQUENCE_TASK( l_U449[4] );
                        OPEN_SEQUENCE_TASK( ref l_U449[4] );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1740.81800000, 342.47600000, 24.44390000, 3, -1, 0.10000000 );
                        CLOSE_SEQUENCE_TASK( l_U449[4] );
                        TASK_PERFORM_SEQUENCE( l_U252[4], l_U449[4] );
                        CLEAR_SEQUENCE_TASK( l_U449[4] );
                        CLEAR_PRINTS();
                        sub_2009( 0 );
                        sub_16081( "PIV_ATTACK", ref l_U460[0], 8, 1 );
                        CLEAR_SEQUENCE_TASK( l_U448 );
                        OPEN_SEQUENCE_TASK( ref l_U448 );
                        TASK_SEEK_COVER_TO_COORDS( 0, -1730.35600000, 366.56760000, 24.44300000, l_U271[0]._fU0, l_U271[0]._fU4, l_U271[0]._fU8, 3000 );
                        CLOSE_SEQUENCE_TASK( l_U448 );
                        TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
                        CLEAR_SEQUENCE_TASK( l_U448 );
                        SET_CHAR_HEALTH( l_U251, 400 );
                        SET_CHAR_MAX_HEALTH( l_U251, 400 );
                        l_U250 = 1;
                        TASK_SEEK_COVER_TO_COVER_POINT( sub_1914(), l_U456, -1737.25700000, 346.68640000, 24.44400000, 0 );
                        CLEAR_SEQUENCE_TASK( l_U449[1] );
                        OPEN_SEQUENCE_TASK( ref l_U449[1] );
                        TASK_SEEK_COVER_TO_COORDS( 0, -1735.99200000, 357.69990000, 24.44400000, l_U305._fU0, l_U305._fU4, l_U305._fU8, 7000 );
                        CLOSE_SEQUENCE_TASK( l_U449[1] );
                        TASK_PERFORM_SEQUENCE( l_U252[1], l_U449[1] );
                        CLEAR_SEQUENCE_TASK( l_U449[1] );
                        sub_22469();
                        SET_CAM_PROPAGATE( l_U395, 1 );
                        SET_CAM_ACTIVE( l_U395, 1 );
                        GET_GAME_TIMER( ref l_U409 );
                        l_U202 = 12;
                    }
                }
            }
            break;
            case 12:
            if (NOT (sub_17081( l_U460[0] )))
            {
                PRINTSTRING( "get into cover" );
                PRINTNL();
                PRINTSTRING( "fail 1" );
                PRINTNL();
                SET_CAM_PROPAGATE( l_U395, 0 );
                SET_CAM_ACTIVE( l_U395, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_ALL_CAMS();
                END_CAM_COMMANDS( ref l_U408 );
                sub_28254( ref l_U251, ref l_U261 );
                for ( l_U406 = 0; l_U406 <= (l_U410 - 1); l_U406++ )
                {
                    if (DOES_CHAR_EXIST( l_U252[l_U406] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U252[l_U406] )))
                        {
                            SET_CHAR_NEVER_TARGETTED( l_U252[l_U406], 0 );
                            SET_CHAR_IS_TARGET_PRIORITY( l_U252[l_U406], 1 );
                            ADD_BLIP_FOR_CHAR( l_U252[l_U406], ref l_U263[l_U406] );
                            SET_CHAR_AS_ENEMY( l_U252[l_U406], 1 );
                        }
                    }
                }
                SWITCH_PED_PATHS_ON( -1676.73000000, 341.35000000, 100.00000000, -1754.26000000, 379.21000000, -100.00000000 );
                l_U432 = 0;
                if (l_U421[0] == 1)
                {
                    sub_11260( 1 );
                }
                else
                {
                    sub_28897( 0 );
                }
                STOP_PED_SPEAKING( sub_1914(), 0 );
                STOP_PED_SPEAKING( l_U251, 0 );
                ALLOW_EMERGENCY_SERVICES( 0 );
                GET_GAME_TIMER( ref l_U409 );
                l_U433[0] = 0;
                CLEAR_PRINTS();
                PRINT( "IVN1_GOD3", 7500, 1 );
                SET_ALL_RANDOM_PEDS_FLEE( sub_1220(), 1 );
                l_U199 = 1;
            }
            break;
            case 13: break;
        }
        break;
    }
    if ((NOT l_U208) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
    {
        SET_CHAR_COORDINATES( sub_1914(), -1705.87000000, 360.93330000, 24.36010000 );
        SET_CHAR_HEADING( sub_1914(), 58.46170000 );
        l_U208 = 1;
    }
    return;
}

int sub_11897(unknown uParam0, unknown uParam1)
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

void sub_12135(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1914() ))
        {
            ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam2, 7500, 1 );
        }
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1914() )))
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

int sub_12600(unknown uParam0)
{
    if ((sub_2783( ref uParam0 )) < 10.00000000)
    {
        return 1;
    }
    if (((sub_2783( ref uParam0 )) < (10.00000000 * 2.00000000)) AND (IS_PLAYER_PRESSING_HORN( sub_1220() )))
    {
        return 1;
    }
    return 0;
}

void sub_12739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
        if (sub_12852( uParam0, uParam1 ))
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
        if (sub_12852( uParam0, uParam1 ))
        {
            COPY_GROUP_CHAR_DECISION_MAKER( 65536, uParam2 );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam0^), (uParam2^) );
        }
        break;
    }
    return;
}

int sub_12852(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_PLAYER_GROUP( sub_1220(), uParam1 );
            SET_GROUP_MEMBER( (uParam1^), (uParam0^) );
            return 1;
        }
    }
    return 0;
}

void sub_13636(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_13939(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (IS_WANTED_LEVEL_GREATER( sub_1220(), 0 ))
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
                sub_14109( uParam1, uParam7, uParam10 );
            }
            CLEAR_PRINTS();
            PRINT( uParam3, 7500, 1 );
        }
    }
    return;
}

void sub_14109(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_14273(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
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
        else if ((sub_2783( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
                sub_12739( uParam0, uParam11, uParam12, 0 );
                ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam3 );
                SET_ROUTE( (uParam3^), 1 );
                if (bParam6)
                {
                    sub_14109( uParam3, uParam7, uParam10 );
                }
                CLEAR_PRINTS();
                PRINT( uParam5, 7500, 1 );
            }
        }
    }
    return;
}

void sub_14560(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
        if ((sub_2783( uParam0 )) < 12.00000000)
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            sub_12739( uParam0, uParam3, uParam4, 0 );
        }
    }
    return;
}

int sub_14766(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_1914() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1914(), uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4, uParam5, uParam6, 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_14969()
{
    for ( l_U406 = 0; l_U406 <= 1; l_U406++ )
    {
        if ((sub_15328( ref l_U252[l_U406], 10.00000000 )) || (sub_15011( ref l_U252[l_U406], ref l_U436 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_15011(unknown uParam0, unknown uParam1)
{
    unknown[2] uVar4;

    array(ref uVar4, 2);
    return sub_15030( uParam0, ref uVar4, uParam1, 0 );
}

int sub_15030(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
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
                    if ((IS_CHAR_RESPONDING_TO_EVENT( (uParam1^)[I], 9 )) || ((iVar7 < (uParam2^)[I]) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam1^)[I], sub_1914(), 0 ))))
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
            if ((IS_CHAR_RESPONDING_TO_EVENT( (uParam0^), 9 )) || ((iVar7 < (uParam2^)[0]) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_1914(), 0 ))))
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

void sub_15328(unknown uParam0, unknown uParam1)
{
    return sub_3243( uParam0, uParam1 );
}

void sub_15475()
{
    if (NOT (IS_CHAR_INJURED( l_U252[0] )))
    {
        SET_CHAR_KEEP_TASK( l_U252[0], 1 );
        sub_15532( ref l_U252[0], ref l_U441 );
    }
    if (NOT (IS_CHAR_INJURED( l_U252[1] )))
    {
        CLEAR_CHAR_TASKS( l_U252[1] );
        SET_CHAR_KEEP_TASK( l_U252[1], 1 );
        TASK_SMART_FLEE_CHAR( l_U252[1], sub_1914(), 150.00000000, 50000 );
    }
    return;
}

void sub_15532(unknown uParam0, unknown uParam1)
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

void sub_15758()
{
    switch (l_U205)
    {
        case 0:
        if (sub_15844( ref l_U251, ref l_U261, 1 ))
        {
            sub_16081( "PIV_WHERE", ref l_U460[0], 8, 1 );
            l_U205 = 1;
        }
        break;
        case 1:
        if (sub_15844( ref l_U251, ref l_U261, 1 ))
        {
            if (NOT (sub_17081( l_U460[0] )))
            {
                CLEAR_PRINTS();
                PRINT( "IVN1_GOD1", 7500, 1 );
                GET_GAME_TIMER( ref l_U409 );
                l_U205 = 2;
            }
        }
        break;
        case 2:
        if (sub_15844( ref l_U251, ref l_U261, 1 ))
        {
            switch (g_U65029)
            {
                case 0:
                if (sub_5742( ref l_U409, 7500 ))
                {
                    CLEAR_PRINTS();
                    if (sub_16081( "PIV_BANT1", ref l_U460[0], 8, 1 ))
                    {
                        l_U205 = 3;
                    }
                }
                break;
                case 1:
                if (sub_5742( ref l_U409, 7500 ))
                {
                    CLEAR_PRINTS();
                    if (sub_16081( "PIV_BANT2", ref l_U460[0], 8, 1 ))
                    {
                        l_U205 = 3;
                    }
                }
                break;
                case 2: break;
            }
        }
        break;
        case 3:
        switch (g_U65029)
        {
            case 0:
            if (sub_15844( ref l_U251, ref l_U261, 1 ))
            {
                if (l_U238)
                {
                    sub_17588( "PIV_BANT1", ref l_U460[0], 8, 1 );
                    l_U238 = 0;
                }
                if (NOT (sub_17081( l_U460[0] )))
                {
                    l_U205 = 6;
                }
            }
            else if (NOT l_U238)
            {
                if (sub_17081( l_U460[0] ))
                {
                    sub_17773( ref l_U460[0] );
                    l_U238 = 1;
                }
            }
            break;
            case 1:
            if (sub_15844( ref l_U251, ref l_U261, 1 ))
            {
                if (l_U238)
                {
                    sub_17588( "PIV_BANT2", ref l_U460[0], 8, 1 );
                    l_U238 = 0;
                }
                if (NOT (sub_17081( l_U460[0] )))
                {
                    l_U205 = 6;
                }
            }
            else if (NOT l_U238)
            {
                if (sub_17081( l_U460[0] ))
                {
                    sub_17773( ref l_U460[0] );
                    l_U238 = 1;
                }
            }
            break;
            case 2: break;
        }
        break;
        case 4:
        if (sub_15844( ref l_U251, ref l_U261, 0 ))
        {
            if (sub_16081( "PIV_BANT2", ref l_U460[0], 8, 1 ))
            {
                l_U205 = 5;
            }
        }
        break;
        case 5:
        if (sub_15844( ref l_U251, ref l_U261, 0 ))
        {
            if (l_U238)
            {
                sub_17588( "PIV_BANT2", ref l_U460[0], 8, 1 );
                l_U238 = 0;
            }
            if (NOT (sub_17081( l_U460[0] )))
            {
                l_U205 = 6;
            }
        }
        else if (NOT l_U238)
        {
            if (sub_17081( l_U460[0] ))
            {
                sub_17773( ref l_U460[0] );
                l_U238 = 1;
            }
        }
        break;
        case 6: break;
    }
    return;
}

int sub_15844(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_PED_IN_GROUP( (uParam0^) ))
        {
            if (bParam2)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_1220(), 0 ))
                {
                    GET_GAME_TIMER( ref l_U118 );
                    return 0;
                }
                if (NOT (sub_5742( ref l_U118, 3000 )))
                {
                    return 0;
                }
            }
            if ((IS_CHAR_ON_FOOT( sub_1914() )) AND (IS_CHAR_ON_FOOT( (uParam0^) )))
            {
                return 1;
            }
            if (DOES_VEHICLE_EXIST( (uParam1^) ))
            {
                if (IS_VEH_DRIVEABLE( (uParam1^) ))
                {
                    if ((IS_CHAR_SITTING_IN_CAR( sub_1914(), (uParam1^) )) AND (IS_CHAR_SITTING_IN_CAR( (uParam0^), (uParam1^) )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_16081(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16102( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_16102(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_16156( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_16156(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_16178( iParam1 )))
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
    sub_16866( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_16178(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_16255( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_16255( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_16255( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_16255(unknown uParam0)
{
    return;
}

void sub_16866(int iParam0, int iParam1)
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

int sub_17081(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_16255( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_16255( "\n speech is not playing" );
    }
    return 0;
}

void sub_17588(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17609( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_17609(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_16156( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_17773(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_16255( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_16255( "\n CONVERSATION PAUSED AT LINE " );
            sub_17929( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_16255( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_16255( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_16255( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_17929(unknown uParam0)
{
    return;
}

int sub_18683()
{
    if (sub_18694( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_2009( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_1220(), 0 );
        CLEAR_CHAR_TASKS( sub_1914() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1914(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_18694(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1914() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1914(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1914() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1914(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1914()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1914() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1914() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1220() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1220() )))
    {
        return 0;
    }
    return 1;
}

void sub_19100(unknown uParam0, unknown uParam1)
{
    sub_19118( 1, 1 );
    sub_19187( uParam0 );
    sub_19286( 1, ref l_U179, 1, 1 );
    sub_19394( uParam1 );
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

void sub_19118(unknown uParam0, unknown uParam1)
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

void sub_19187(unknown uParam0)
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

void sub_19286(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_19394(unknown uParam0)
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

int sub_19556(unknown uParam0)
{
    if (sub_2961( uParam0 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_1914(), (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_19677()
{
    REMOVE_BLIP( l_U270 );
    STOP_PED_SPEAKING( l_U251, 1 );
    SWITCH_PED_PATHS_OFF( -1676.73000000, 341.35000000, 100.00000000, -1754.26000000, 379.21000000, -100.00000000 );
    l_U432 = 1;
    CLEAR_AREA( l_U317._fU0, l_U317._fU4, l_U317._fU8, 200.00000000, 1 );
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( l_U317._fU0, l_U317._fU4, l_U317._fU8, 100.00000000 );
    REMOVE_CHAR_FROM_GROUP( l_U251 );
    CLEAR_PRINTS();
    sub_2009( 0 );
    for ( l_U406 = 2; l_U406 <= 3; l_U406++ )
    {
        CREATE_CHAR( 26, l_U396[l_U406], l_U271[l_U406]._fU0, l_U271[l_U406]._fU4, l_U271[l_U406]._fU8, ref l_U252[l_U406], 1 );
        SET_CHAR_HEADING( l_U252[l_U406], l_U363[l_U406] );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[l_U406], 1 );
    }
    GIVE_WEAPON_TO_CHAR( l_U252[2], 7, 9999, 0 );
    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U252[3], 1 );
    GIVE_WEAPON_TO_CHAR( l_U252[3], 10, 9999, 1 );
    BEGIN_CAM_COMMANDS( ref l_U408 );
    CREATE_CAM( 14, ref l_U385 );
    CREATE_CAM( 14, ref l_U386 );
    CREATE_CAM( 14, ref l_U388 );
    CREATE_CAM( 14, ref l_U389 );
    CREATE_CAM( 14, ref l_U391 );
    CREATE_CAM( 14, ref l_U392 );
    CREATE_CAM( 14, ref l_U394 );
    CREATE_CAM( 14, ref l_U395 );
    CREATE_CAM( 3, ref l_U393 );
    SET_CAM_POS( l_U385, -1724.74200000, 367.90440000, 26.04413000 );
    SET_CAM_ROT( l_U385, -6.15958700, -5.01285000, 145.93480000 );
    SET_CAM_FOV( l_U385, 30.00004000 );
    SET_CAM_POS( l_U386, -1725.51900000, 367.95750000, 26.01123000 );
    SET_CAM_ROT( l_U386, -5.33379600, -0.00000000, 157.42660000 );
    SET_CAM_FOV( l_U386, 29.10004000 );
    SET_CAM_POS( l_U388, -1724.83700000, 352.09710000, 33.34671000 );
    SET_CAM_ROT( l_U388, -29.53627000, -0.00000000, -1.08611900 );
    SET_CAM_FOV( l_U388, 36.30002000 );
    SET_CAM_POS( l_U389, -1735.87200000, 360.56890000, 31.52474000 );
    SET_CAM_ROT( l_U389, -29.73875000, 10.48514000, -55.32619000 );
    SET_CAM_FOV( l_U389, 32.40003000 );
    SET_CAM_POS( l_U392, -1728.10700000, 379.49420000, 33.24191000 );
    SET_CAM_ROT( l_U392, -22.76922000, 0.10566200, -175.93980000 );
    SET_CAM_FOV( l_U392, 30.00004000 );
    SET_CAM_POS( l_U394, -1728.10700000, 379.49420000, 33.24191000 );
    SET_CAM_ROT( l_U394, -22.76922000, 0.10566200, -175.93980000 );
    SET_CAM_FOV( l_U394, 28.00004000 );
    SET_CAM_POS( l_U395, -1720.06200000, 363.81750000, 24.67404000 );
    SET_CAM_ROT( l_U395, 14.15171000, 0.00000000, 99.39950000 );
    SET_CAM_FOV( l_U395, 45.00000000 );
    ADD_COVER_POINT( -1724.49000000, 362.00000000, 24.60000000, 0, 135.00000000, 2, 0, ref l_U456 );
    if (l_U239)
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U251, l_U261 )))
        {
            CLEAR_CHAR_TASKS( l_U251 );
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U251, l_U261, 0 );
        }
        if (IS_BIG_VEHICLE( l_U261 ))
        {
            SET_CAR_COORDINATES( l_U261, -1723.14100000, 370.31860000, 24.33400000 );
        }
        else
        {
            SET_CAR_COORDINATES( l_U261, -1723.14100000, 370.31860000, 24.33400000 );
        }
        CLEAR_AREA( l_U317._fU0, l_U317._fU4, l_U317._fU8, 200.00000000, 1 );
        if (sub_20919())
        {
            SET_CAM_POS( l_U391, -1725.09400000, 369.97010000, 25.02534000 );
            SET_CAM_ROT( l_U391, 2.98336800, 4.11972400, -98.59214000 );
            SET_CAM_FOV( l_U391, 30.30004000 );
        }
        else
        {
            sub_21059();
            GET_CAR_MODEL( l_U261, ref l_U180 );
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
            ATTACH_CAM_TO_VEHICLE( l_U391, l_U261 );
            POINT_CAM_AT_VEHICLE( l_U391, l_U261 );
            SET_CAM_ATTACH_OFFSET( l_U391, l_U166._fU0, l_U166._fU4, l_U166._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U391, 1 );
            SET_CAM_POINT_OFFSET( l_U391, l_U169._fU0, l_U169._fU4, l_U169._fU8 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U391, 1 );
            SET_CAM_FOV( l_U391, l_U172[0] );
        }
        CLEAR_CHAR_TASKS( l_U251 );
        OPEN_SEQUENCE_TASK( ref l_U448 );
        TASK_LEAVE_CAR( 0, l_U261 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U271[0]._fU0, l_U271[0]._fU4, l_U271[0]._fU8, 2, -1, 0.10000000 );
        CLOSE_SEQUENCE_TASK( l_U448 );
        TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
        CLEAR_SEQUENCE_TASK( l_U448 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_PROPAGATE( l_U391, 1 );
        SET_CAM_ACTIVE( l_U391, 1 );
        l_U433[0] = 1;
        GET_GAME_TIMER( ref l_U424 );
        GET_GAME_TIMER( ref l_U409 );
        l_U202 = 0;
    }
    else if (DOES_VEHICLE_EXIST( l_U261 ))
    {
        if (IS_VEH_DRIVEABLE( l_U261 ))
        {
            if (LOCATE_CAR_3D( l_U261, -1726.14900000, 365.84590000, 24.44400000, 7.00000000, 7.00000000, 7.00000000, 0 ))
            {
                SET_CAR_HEADING( l_U261, 241.42200000 );
                SET_CAR_COORDINATES( l_U261, -1713.42500000, 364.66350000, 24.33200000 );
            }
        }
    }
    l_U202 = 2;;
    l_U201 = 5;
    return;
}

int sub_20919()
{
    unknown uVar2;
    unknown uVar3;

    if (sub_2961( ref uVar2 ))
    {
        GET_CAR_MODEL( uVar2, ref uVar3 );
        if (IS_THIS_MODEL_A_BIKE( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_21059()
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

int sub_22199(unknown uParam0, unknown uParam1)
{
    if (sub_5742( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_22234())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_22234()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_22294()
{
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_INJURED( l_U251 )))
    {
        if (NOT (IS_CHAR_INJURED( l_U252[0] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U252[1] )))
            {
                CLEAR_PRINTS();
                sub_2009( 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1914() );
                SET_CHAR_COORDINATES( sub_1914(), -1725.25400000, 363.98850000, 24.44400000 );
                SET_CHAR_HEADING( sub_1914(), 154.23210000 );
                sub_22469();
                TASK_SEEK_COVER_TO_COVER_POINT( sub_1914(), l_U456, -1737.25700000, 346.68640000, 24.44400000, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U251 );
                SET_CHAR_COORDINATES( l_U251, -1730.35600000, 366.56760000, 24.44300000 );
                SET_CHAR_HEADING( l_U251, 190.66850000 );
                SET_CHAR_HEALTH( l_U251, 400 );
                SET_CHAR_MAX_HEALTH( l_U251, 400 );
                l_U250 = 1;
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U252[0] );
                SET_CHAR_COORDINATES( l_U252[0], -1728.28800000, 360.22960000, 24.44400000 );
                SET_CHAR_HEADING( l_U252[0], 149.48300000 );
                CLEAR_CHAR_TASKS( l_U252[0] );
                CLEAR_SEQUENCE_TASK( l_U449[0] );
                OPEN_SEQUENCE_TASK( ref l_U449[0] );
                TASK_SEEK_COVER_TO_COORDS( 0, -1728.18000000, 356.18000000, 24.49000000, l_U305._fU0, l_U305._fU4, l_U305._fU8, 3000 );
                CLOSE_SEQUENCE_TASK( l_U449[0] );
                TASK_PERFORM_SEQUENCE( l_U252[0], l_U449[0] );
                CLEAR_SEQUENCE_TASK( l_U449[0] );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U252[1] );
                CLEAR_SEQUENCE_TASK( l_U449[1] );
                OPEN_SEQUENCE_TASK( ref l_U449[1] );
                TASK_SEEK_COVER_TO_COORDS( 0, -1735.99200000, 357.69990000, 24.44400000, l_U305._fU0, l_U305._fU4, l_U305._fU8, 7000 );
                CLOSE_SEQUENCE_TASK( l_U449[1] );
                TASK_PERFORM_SEQUENCE( l_U252[1], l_U449[1] );
                CLEAR_SEQUENCE_TASK( l_U449[1] );
                if (NOT (DOES_CHAR_EXIST( l_U252[4] )))
                {
                    CLEAR_AREA( l_U271[4]._fU0, l_U271[4]._fU4, l_U271[4]._fU8, 2.00000000, 1 );
                    CREATE_CHAR( 26, l_U396[4], -1740.81800000, 342.47600000, 24.44390000, ref l_U252[4], 1 );
                    SET_CHAR_HEADING( l_U252[4], l_U363[0] );
                    GIVE_WEAPON_TO_CHAR( l_U252[4], 7, 30000, 0 );
                    SET_CHAR_MONEY( l_U252[4], 100 );
                }
                if (NOT (IS_CHAR_INJURED( l_U252[4] )))
                {
                    CLEAR_SEQUENCE_TASK( l_U449[4] );
                    OPEN_SEQUENCE_TASK( ref l_U449[4] );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1740.81800000, 342.47600000, 24.44390000, 3, -1, 0.10000000 );
                    CLOSE_SEQUENCE_TASK( l_U449[4] );
                    TASK_PERFORM_SEQUENCE( l_U252[4], l_U449[4] );
                    CLEAR_SEQUENCE_TASK( l_U449[4] );
                }
                l_U202 = 12;
            }
        }
    }
    return;
}

void sub_22469()
{
    if (HAS_CHAR_GOT_WEAPON( sub_1914(), 15 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 15, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1914(), 14 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 14, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1914(), 13 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 13, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1914(), 12 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 12, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1914(), 10 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 10, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1914(), 11 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 11, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1914(), 9 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 9, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1914(), 7 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1914(), 7, 1 );
    };;;;;;;;
    return;
}

void sub_25277(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_25302( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_25302(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_16156( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_26941(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_17081( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_28254(unknown uParam0, unknown uParam1)
{
    sub_28265( uParam1 );
    sub_28526( uParam0 );
    return;
}

void sub_28265(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_28321( uParam0 );
        }
    }
    return;
}

void sub_28321(unknown uParam0)
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

void sub_28526(unknown uParam0)
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

void sub_28897(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_2009( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1220() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_1914() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_1914() );
        }
        SET_PLAYER_CONTROL( sub_1220(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1914(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_29261()
{
    switch (l_U203)
    {
        case 0:
        if (sub_5742( ref l_U409, 1500 ))
        {
            SET_RELATIONSHIP( 5, 0, 23 );
            SET_RELATIONSHIP( 5, 23, 0 );
            for ( l_U406 = 0; l_U406 <= 1; l_U406++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U252[l_U406] )))
                {
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U252[l_U406], 0 );
                    sub_15532( ref l_U252[l_U406], ref l_U439 );
                    SET_CHAR_KEEP_TASK( l_U252[l_U406], 1 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U252[4] )))
            {
                sub_15532( ref l_U252[4], ref l_U439 );
                SET_CHAR_KEEP_TASK( l_U252[4], 1 );
            }
            l_U203 = 1;
        }
        break;
        case 1:
        if (sub_29527( ref l_U252, ref l_U263 ))
        {
            CLEAR_CHAR_RELATIONSHIP( l_U251, 5, 23 );
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U251, -1729.84900000, 369.05910000, 24.44350000, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                CLEAR_SEQUENCE_TASK( l_U448 );
                OPEN_SEQUENCE_TASK( ref l_U448 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1729.84900000, 369.05910000, 24.44350000, 2, -1, 0.10000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1914() );
                TASK_LOOK_AT_CHAR( 0, sub_1914(), -2, 0 );
                CLOSE_SEQUENCE_TASK( l_U448 );
                TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
                CLEAR_SEQUENCE_TASK( l_U448 );
            }
            ADD_BLIP_FOR_CHAR( l_U251, ref l_U262 );
            SET_BLIP_AS_FRIENDLY( l_U262, 1 );
            CLEAR_PRINTS();
            PRINT_NOW( "IVN1_GOD7", 7500, 1 );
            GET_GAME_TIMER( ref l_U409 );
            l_U199 = 3;
        }
        if (NOT l_U249)
        {
            for ( l_U406 = 2; l_U406 <= 3; l_U406++ )
            {
                if (NOT (l_U246[l_U406 - 2]))
                {
                    if ((sub_15011( ref l_U252[l_U406], ref l_U436 )) || (sub_5742( ref l_U409, 5000 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U252[l_U406] )))
                        {
                            CLEAR_CHAR_TASKS( l_U252[l_U406] );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U252[l_U406], 0 );
                            SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U439, 1 );
                            SET_COMBAT_DECISION_MAKER( l_U252[l_U406], l_U439 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U252[l_U406], 23 );
                            SET_CHAR_KEEP_TASK( l_U252[l_U406], 1 );
                            l_U246[l_U406 - 2] = 1;
                        }
                    }
                    if ((l_U246[1]) AND (l_U246[0]))
                    {
                        l_U249 = 1;
                    }
                }
            }
        }
        break;
    }
    if (NOT l_U237)
    {
        if (l_U250)
        {
            if (NOT (IS_CHAR_INJURED( l_U251 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U251, 29, ref l_U457 );
                if (l_U457 == 7)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U251, 0 );
                    GIVE_WEAPON_TO_CHAR( l_U251, 7, 30000, 0 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U251, 0 );
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U251, 0 );
                    SET_CHAR_DECISION_MAKER( l_U251, l_U442 );
                    SET_COMBAT_DECISION_MAKER( l_U251, l_U440 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U251, 0 );
                    SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U251, -1727.32800000, 367.61460000, 30.00000000, -1729.86300000, 369.24600000, -1.00000000, 3.20000000 );
                    l_U237 = 1;
                }
            }
        }
    }
    return;
}

int sub_29527(unknown uParam0, unknown uParam1)
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

void sub_30479()
{
    if (l_U433[1] == 1)
    {
        if (NOT (l_U421[1] == 1))
        {
            if (sub_22199( ref l_U424, 1000 ))
            {
                l_U421[1] = 1;
                l_U204 = 8;
            }
        }
    }
    switch (l_U204)
    {
        case 0:
        if (sub_5742( ref l_U409, 3000 ))
        {
            if ((sub_2783( ref l_U251 )) < 4.00000000)
            {
                sub_19100( ref l_U251, ref l_U261 );
                if (sub_30687( 10, 1 ))
                {
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( l_U251, 1 );
                    SWITCH_PED_PATHS_OFF( -1676.73000000, 341.35000000, 100.00000000, -1754.26000000, 379.21000000, -100.00000000 );
                    CLEAR_AREA( -1730.92400000, 370.12900000, 24.44350000, 200.00000000, 1 );
                    if (DOES_VEHICLE_EXIST( l_U261 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U261 ))
                        {
                            if (LOCATE_CAR_3D( l_U261, -1729.27100000, 369.27900000, 26.84400000, 5.90000000, 5.90000000, 5.90000000, 0 ))
                            {
                                SET_CAR_HEADING( l_U261, 241.42200000 );
                                SET_CAR_COORDINATES( l_U261, -1713.42500000, 364.66350000, 24.33200000 );
                            }
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_1914() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_1914(), -1730.92400000, 370.12900000, 24.44350000 );
                    }
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1914() );
                    SET_CHAR_COORDINATES( sub_1914(), -1730.71600000, 369.77490000, -101.00000000 );
                    SET_CHAR_HEADING( sub_1914(), 225.00000000 );
                    if (IS_CHAR_IN_ANY_CAR( l_U251 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U251, -1729.84900000, 369.05910000, 24.44350000 );
                    }
                    CLEAR_CHAR_TASKS( l_U251 );
                    SET_CHAR_COORDINATES( l_U251, -1729.84900000, 369.05910000, 24.44350000 );
                    SET_CHAR_HEADING( l_U251, 45.00000000 );
                    BEGIN_CAM_COMMANDS( ref l_U408 );
                    CREATE_CAM( 14, ref l_U385 );
                    CREATE_CAM( 14, ref l_U386 );
                    CREATE_CAM( 14, ref l_U387 );
                    CREATE_CAM( 14, ref l_U388 );
                    CREATE_CAM( 14, ref l_U389 );
                    CREATE_CAM( 14, ref l_U390 );
                    CREATE_CAM( 3, ref l_U393 );
                    SET_CAM_POS( l_U385, -1730.35800000, 370.87650000, 26.11133000 );
                    SET_CAM_ROT( l_U385, -8.97948000, -5.20696600, -176.48690000 );
                    SET_CAM_FOV( l_U385, 37.90004000 );
                    SET_CAM_POS( l_U386, -1727.97000000, 368.64230000, 25.84654000 );
                    SET_CAM_ROT( l_U386, 0.34044400, 3.55227600, 71.31371000 );
                    SET_CAM_FOV( l_U386, 32.70003000 );
                    SET_CAM_POS( l_U387, -1727.30700000, 368.41780000, 25.84239000 );
                    SET_CAM_ROT( l_U387, 0.34044400, 3.55227600, 71.31371000 );
                    SET_CAM_FOV( l_U387, 32.70003000 );
                    SET_CAM_POS( l_U388, -1730.35800000, 370.87650000, 26.11133000 );
                    SET_CAM_ROT( l_U388, -8.97948000, -5.20696600, -176.48690000 );
                    SET_CAM_FOV( l_U388, 35.90004000 );
                    SET_CAM_POS( l_U389, -1733.23000000, 367.27490000, 25.64378000 );
                    SET_CAM_ROT( l_U389, 8.01741700, 0.00000000, -55.88809000 );
                    SET_CAM_FOV( l_U389, 37.50002000 );
                    SET_CAM_POS( l_U390, -1730.21400000, 367.93190000, 25.75414000 );
                    SET_CAM_ROT( l_U390, 4.00674400, 0.00000000, 2.94397700 );
                    SET_CAM_FOV( l_U390, 39.00001000 );
                    CLEAR_SEQUENCE_TASK( l_U448 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U251, 1 );
                    OPEN_SEQUENCE_TASK( ref l_U448 );
                    TASK_LOOK_AT_CHAR( 0, sub_1914(), -2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U448 );
                    TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
                    CLEAR_SEQUENCE_TASK( l_U448 );
                    CLEAR_CHAR_TASKS( sub_1914() );
                    CLEAR_SEQUENCE_TASK( l_U455 );
                    OPEN_SEQUENCE_TASK( ref l_U455 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U251 );
                    TASK_LOOK_AT_CHAR( 0, l_U251, -2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U455 );
                    TASK_PERFORM_SEQUENCE( sub_1914(), l_U455 );
                    CLEAR_SEQUENCE_TASK( l_U455 );
                    sub_16081( "PIV_THANKS", ref l_U460[0], 8, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U393, l_U385, l_U388, 4000, 0 );
                    SET_CAM_ACTIVE( l_U393, 1 );
                    SET_CAM_PROPAGATE( l_U393, 1 );
                    GET_GAME_TIMER( ref l_U409 );
                    GET_GAME_TIMER( ref l_U424 );
                    l_U433[1] = 1;
                    DO_SCREEN_FADE_IN_UNHACKED( 10 );
                    l_U204 = 2;
                }
            }
        }
        break;
        case 2:
        if (sub_17081( l_U460[0] ))
        {
            if ((sub_26941( l_U460[0] )) > 1)
            {
                SET_CAM_ACTIVE( l_U393, 0 );
                SET_CAM_PROPAGATE( l_U393, 0 );
                SET_CAM_ACTIVE( l_U385, 0 );
                SET_CAM_PROPAGATE( l_U385, 0 );
                SET_CAM_ACTIVE( l_U388, 0 );
                SET_CAM_PROPAGATE( l_U388, 0 );
                SET_CAM_ACTIVE( l_U389, 1 );
                SET_CAM_PROPAGATE( l_U389, 1 );
                l_U204 = 3;
            }
        }
        break;
        case 3:
        if (sub_17081( l_U460[0] ))
        {
            if ((sub_26941( l_U460[0] )) > 3)
            {
                SET_CAM_ACTIVE( l_U389, 0 );
                SET_CAM_PROPAGATE( l_U389, 0 );
                SET_CAM_ACTIVE( l_U390, 1 );
                SET_CAM_PROPAGATE( l_U390, 1 );
                l_U204 = 1;
            }
        }
        break;
        case 1:
        if (sub_17081( l_U460[0] ))
        {
            if ((sub_26941( l_U460[0] )) > 5)
            {
                SET_CAM_ACTIVE( l_U390, 0 );
                SET_CAM_PROPAGATE( l_U390, 0 );
                GET_GAME_TIMER( ref l_U409 );
                SET_CAM_ACTIVE( l_U386, 1 );
                SET_CAM_PROPAGATE( l_U386, 1 );
                l_U204 = 4;
            }
        }
        break;
        case 4:
        if (sub_5742( ref l_U409, 2000 ))
        {
            CLEAR_SEQUENCE_TASK( l_U448 );
            OPEN_SEQUENCE_TASK( ref l_U448 );
            TASK_PLAY_ANIM( 0, "Give_Obj", "missivan_1", 8.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U448 );
            TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
            CLEAR_SEQUENCE_TASK( l_U448 );
            CLEAR_SEQUENCE_TASK( l_U455 );
            OPEN_SEQUENCE_TASK( ref l_U455 );
            TASK_PLAY_ANIM( 0, "take_obj", "missivan_1", 8.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U455 );
            TASK_PERFORM_SEQUENCE( sub_1914(), l_U455 );
            CLEAR_SEQUENCE_TASK( l_U455 );
            GET_GAME_TIMER( ref l_U409 );
            l_U204 = 5;
        }
        break;
        case 5:
        if (NOT (sub_17081( l_U460[0] )))
        {
            SET_CAM_ACTIVE( l_U386, 0 );
            SET_CAM_PROPAGATE( l_U386, 0 );
            CLEAR_SEQUENCE_TASK( l_U448 );
            OPEN_SEQUENCE_TASK( ref l_U448 );
            TASK_LOOK_AT_CHAR( 0, sub_1914(), 50, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1729.66200000, 363.03580000, 24.44400000, 2, -1, 0.10000000 );
            CLOSE_SEQUENCE_TASK( l_U448 );
            TASK_PERFORM_SEQUENCE( l_U251, l_U448 );
            CLEAR_SEQUENCE_TASK( l_U448 );
            GET_GAME_TIMER( ref l_U409 );
            l_U204 = 6;
        }
        break;
        case 6:
        if (sub_5742( ref l_U409, 1000 ))
        {
            SET_CAM_ACTIVE( l_U386, 0 );
            SET_CAM_PROPAGATE( l_U386, 0 );
            SET_CAM_POS( l_U386, -1732.81300000, 370.49560000, 25.81882000 );
            SET_CAM_ROT( l_U386, -1.79043200, -0.00000000, -123.01130000 );
            SET_CAM_FOV( l_U386, 35.70002000 );
            SET_CAM_ACTIVE( l_U386, 1 );
            SET_CAM_PROPAGATE( l_U386, 1 );
            l_U204 = 7;
        }
        break;
        case 7:
        GET_SCRIPT_TASK_STATUS( l_U251, 29, ref l_U457 );
        if ((l_U421[1] == 1) || (l_U457 == 7))
        {
            SET_CAM_PROPAGATE( l_U393, 0 );
            SET_CAM_ACTIVE( l_U393, 0 );
            SET_CAM_PROPAGATE( l_U387, 0 );
            SET_CAM_ACTIVE( l_U387, 0 );
            SET_CAM_PROPAGATE( l_U386, 0 );
            SET_CAM_ACTIVE( l_U386, 0 );
            SET_CAM_PROPAGATE( l_U385, 0 );
            SET_CAM_ACTIVE( l_U385, 0 );
            SET_CAM_PROPAGATE( l_U386, 0 );
            SET_CAM_ACTIVE( l_U386, 0 );
            SET_CAM_PROPAGATE( l_U388, 0 );
            SET_CAM_ACTIVE( l_U388, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_ALL_CAMS();
            END_CAM_COMMANDS( ref l_U408 );
            sub_28254( ref l_U251, ref l_U261 );
            SWITCH_PED_PATHS_ON( -1676.73000000, 341.35000000, 100.00000000, -1754.26000000, 379.21000000, -100.00000000 );
            DELETE_CHAR( ref l_U251 );
            if (l_U421[1] == 1)
            {
                sub_11260( 1 );
            }
            else
            {
                sub_28897( 1 );
            }
            sub_33466();
        }
        break;
        case 8:
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_CHAR_TASKS( sub_1914() );
        l_U204 = 7;
        break;
    }
    return;
}

int sub_30687(unknown uParam0, boolean bParam1)
{
    int iVar4;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_1914() ))
            {
                iVar4 = 0;
            }
            else
            {
                iVar4 = 1;
            }
            if (sub_18694( 1, iVar4 ))
            {
                if (bParam1)
                {
                    SET_PLAYER_CONTROL( sub_1220(), 0 );
                }
                DO_SCREEN_FADE_OUT_UNHACKED( uParam0 );
            }
        }
    }
    else
    {
        sub_2009( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1220(), 0 );
        CLEAR_CHAR_TASKS( sub_1914() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1914(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

void sub_33466()
{
    sub_33480( l_U459 );
    CLEAR_WANTED_LEVEL( sub_1220() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1294();
    return;
}

void sub_33480(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_619( uParam0 );
    sub_33500( uParam0 );
    sub_37474( uParam0 );
    return;
}

void sub_33500(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_33630();
        break;
        case 39:
        sub_34592();
        break;
        case 40:
        sub_34851();
        break;
        case 48:
        sub_35034();
        break;
        case 41:
        sub_35219();
        break;
        case 42:
        sub_35415();
        break;
        case 43:
        sub_35596();
        break;
        case 44:
        sub_35779();
        break;
        case 45:
        sub_35960();
        break;
        case 46:
        sub_36139();
        break;
        case 47:
        sub_36450();
        break;
        case 49:
        sub_36650();
        break;
        case 50:
        sub_36827();
        break;
        case 51:
        sub_37025();
        break;
        default: sub_739( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_37300();
    sub_37373();
    return;
}

void sub_33630()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 500 );
        break;
        default: sub_739( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_33670(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_33723( iParam0, uParam1, uParam2 );
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
        sub_33855( iParam0 + 0 );
    }
    return;
}

void sub_33723(int iParam0, int iParam1, int iParam2)
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
        sub_33855( iParam0 + 0 );
    }
    return;
}

void sub_33855(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_33886( iParam0->_fU4 )))
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

int sub_33886(unknown uParam0)
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

void sub_34316(unknown uParam0)
{
    sub_34327( uParam0 );
    return;
}

void sub_34327(unknown uParam0)
{
    ADD_SCORE( sub_1220(), uParam0 );
    sub_34352( uParam0 );
    return;
}

void sub_34352(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_739( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_34592()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_619( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 100 );
        sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_34316( 200 );
        sub_33670( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_34316( 500 );
        break;
        default: sub_739( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_34851()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        default: sub_739( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_35034()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        default: sub_739( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_35219()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        case 2:
        sub_34316( 0 );
        break;
        default: sub_739( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_35415()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        default: sub_739( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_35596()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 500 );
        break;
        default: sub_739( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_35779()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        default: sub_739( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_35960()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 1000 );
        break;
        default: sub_739( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_36139()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_619( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 1000 );
        sub_36226( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_34316( 5000 );
        sub_33670( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_739( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_36226(int iParam0)
{
    sub_36239( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_36239(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_36450()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        case 2:
        sub_34316( 0 );
        break;
        default: sub_739( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_36650()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 500 );
        break;
        default: sub_739( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_36827()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        case 2:
        sub_34316( 0 );
        break;
        default: sub_739( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_37025()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_619( iVar2 );
    sub_33670( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_34316( 0 );
        break;
        case 2:
        sub_34316( 1000 );
        break;
        default: sub_739( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_37300()
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

void sub_37373()
{
    sub_37382();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_37382()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_37474(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_619( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_7283( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_37555( uParam0 );
    return;
}

void sub_37555(unknown uParam0)
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
            sub_37834( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_37834(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_38016( 0 );
    return;
}

void sub_38016(boolean bParam0)
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
        sub_38271();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_38271()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

int sub_38523(int iParam0)
{
    if (NOT l_U110)
    {
        if (l_U111)
        {
            if (sub_22199( ref l_U116, 1000 ))
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
            if ((sub_2783( iParam0 + 0 )) > 200.00000000)
            {
                return 1;
            }
            if (sub_5742( iParam0 + 220, 7500 ))
            {
                sub_19100( iParam0 + 0, iParam0 + 4 );
                if (sub_38725( 0 ))
                {
                    if (sub_19556( iParam0 + 4 ))
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
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_1914(), iParam0->_fU4 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1914() );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_1914(), iParam0->_fU4, 0 );
                }
                SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
                CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
                FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                SET_CAR_HEADING( iParam0->_fU4, iParam0->_fU20 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                REQUEST_COLLISION_AT_POSN( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
                LOAD_SCENE( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8 );
                SET_CAR_COORDINATES( iParam0->_fU4, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, -101.00000000 );
                TASK_LOOK_AT_CHAR( sub_1914(), iParam0->_fU0, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1914(), -2, 0 );
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
                    POINT_CAM_AT_PED( l_U181, sub_1914() );
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
                sub_16081( iParam0->_fU248, iParam0 + 224, 8, 1 );
                l_U107 = 3;
            }
            break;
            case 2:
            SWITCH_PED_PATHS_OFF( ref iParam0->_fU80->_fU0, ref iParam0->_fU80->_fU4, ref iParam0->_fU80->_fU8, ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, ref iParam0->_fU92->_fU8 );
            SWITCH_ROADS_OFF( ref iParam0->_fU56->_fU0, ref iParam0->_fU56->_fU4, ref iParam0->_fU56->_fU8, ref iParam0->_fU68->_fU0, ref iParam0->_fU68->_fU4, ref iParam0->_fU68->_fU8 );
            CLEAR_AREA( iParam0->_fU116[0]._fU0, iParam0->_fU116[0]._fU4, iParam0->_fU116[0]._fU8, 100.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1914() );
            SET_CHAR_COORDINATES( sub_1914(), ref iParam0->_fU40->_fU0, ref iParam0->_fU40->_fU4, ref iParam0->_fU40->_fU8 );
            SET_CHAR_HEADING( sub_1914(), iParam0->_fU52 );
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
            TASK_LOOK_AT_CHAR( sub_1914(), iParam0->_fU0, -2, 0 );
            TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1914(), -2, 0 );
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
            sub_16081( iParam0->_fU248, iParam0 + 224, 8, 1 );
            l_U107 = 4;
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
            {
                if (NOT (sub_17081( iParam0->_fU224 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U195 );
                    TASK_LOOK_AT_CHAR( 0, sub_1914(), 50, 0 );
                    TASK_LEAVE_CAR( 0, iParam0->_fU4 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, ref iParam0->_fU104->_fU0, ref iParam0->_fU104->_fU4, ref iParam0->_fU104->_fU8, 2, -1, 0.10000000 );
                    CLOSE_SEQUENCE_TASK( l_U195 );
                    TASK_PERFORM_SEQUENCE( iParam0->_fU0, l_U195 );
                    l_U107 = 5;
                }
            }
            break;
            case 4:
            if (NOT (sub_17081( iParam0->_fU224 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U195 );
                TASK_LOOK_AT_CHAR( 0, sub_1914(), 50, 0 );
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
                SET_CAM_BEHIND_PED( sub_1914() );
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
                    sub_11260( 1 );
                }
                else
                {
                    sub_28897( 1 );
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
            sub_2009( 0 );
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

int sub_38725(boolean bParam0)
{
    int iVar3;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_1914() ))
            {
                iVar3 = 0;
            }
            else
            {
                iVar3 = 1;
            }
            if (sub_18694( 1, iVar3 ))
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_1220(), 0 );
                }
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
    }
    else
    {
        sub_2009( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1220(), 0 );
        CLEAR_CHAR_TASKS( sub_1914() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1914(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

