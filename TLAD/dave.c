void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
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
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U125 = 0;
    ProtectedSet(l_U126, 0);
    ProtectedSet(l_U127, 0);
    l_U128 = 0;
    l_U129 = 0;
    l_U131 = 0;
    l_U132 = 0;
    l_U134 = 0;
    ProtectedSet(l_U240, 0.00000000);
    ProtectedSet(l_U241, 0.00000000);
    l_U249 = 0.00000000;
    l_U252 = 45.00000000;
    l_U270 = {0.00000000, 0.00000000, 0.00000000};
    l_U388 = {1.00000000, 1.00000000, 1.00000000};
    l_U391 = {0.00000000, 1.00000000, 0.00000000};
    l_U394 = {0.00000000, -1.00000000, 0.00000000};
    l_U407 = 0;
    l_U408 = 0;
    l_U419 = 100.00000000;
    l_U420 = 10.50000000;
    l_U421 = 0.50000000;
    l_U422 = 2.85000000;
    l_U427 = 0;
    l_U429 = -1;
    l_U443 = 15.00000000;
    l_U444 = 35.00000000;
    l_U445 = 16.00000000;
    l_U446 = 0.00000000;
    l_U452 = 1000.00000000;
    l_U453 = 7500.00000000;
    l_U462 = 1;
    l_U463 = 30.00000000;
    l_U464 = 30.00000000;
    l_U465 = 2.00000000;
    l_U475 = 0.00000000;
    l_U476 = 0.00000000;
    l_U488 = 1;
    l_U489 = 0;
    l_U490 = -1;
    l_U491 = 1;
    l_U492 = -1;
    l_U493 = -1;
    l_U494 = 15.00000000;
    l_U521 = 0;
    l_U522 = -1949702649;
    l_U523 = 2075870698;
    l_U528 = 0.12000000;
    l_U549 = 200;
    l_U562 = 0;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U571 = 0;
    l_U572 = 0;
    l_U573 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 0;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0;
    l_U586 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U591 = -1;
    l_U592 = 0;
    l_U596 = 1;
    l_U639 = 14;
    l_U640 = 0;
    if (sub_796( l_U639, l_U596 ))
    {
        if (IS_PLAYER_PLAYING( sub_1493() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1493(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1567();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U572)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (g_U12303)
                            {
                                sub_1567();
                            }
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1493(), 0 )))
                            {
                                sub_2463( ref l_U255 );
                                if ((sub_2659( ref l_U539, 22.00000000, 0 )) || (sub_2549( ref l_U539, 0 )))
                                {
                                    sub_3034();
                                }
                                switch (l_U563)
                                {
                                    case 0:
                                    sub_3084();
                                    break;
                                    case 1:
                                    sub_4278();
                                    break;
                                }
                            }
                            else
                            {
                                sub_1567();
                            }
                        }
                        else
                        {
                            sub_1567();
                        }
                    }
                    if (l_U572)
                    {
                        if (NOT l_U580)
                        {
                            sub_2463( ref l_U255 );
                        }
                        sub_11204();
                        switch (l_U565)
                        {
                            case 0:
                            sub_11550();
                            break;
                            case 1:
                            sub_12652();
                            break;
                            case 2:
                            sub_14585( ref l_U546 );
                            sub_15234();
                            break;
                            case 3:
                            sub_19294();
                            break;
                            case 4: break;
                        }
                    }
                    if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
                    {
                        sub_25041();
                    }
                    if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
                    {
                        sub_3034();
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

void sub_796(unknown uParam0, unknown uParam1)
{
    if (sub_805())
    {
        return 0;
    }
    return sub_852( uParam0, uParam1 );
}

int sub_805()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_852(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_863( uParam0 );
    if (NOT g_U27953._fU0)
    {
        return 0;
    }
    if (g_U12303)
    {
        return 0;
    }
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U27892[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U27892[uVar4]._fU4)
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10959._fU0, 2 ))
    {
        return 0;
    }
    if (NOT g_U27892[uVar4]._fU24)
    {
        if (sub_1165( g_U27892[uVar4]._fU8 ))
        {
            g_U27892[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U27892[uVar4]._fU24)
    {
        return 0;
    }
    if (g_U27892[uVar4]._fU28 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_863(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_874( uParam0 )))
    {
        sub_979( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_874(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_979(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_1165(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1334( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1334(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1493()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1567()
{
    if (sub_1586( l_U639, l_U596 ))
    {
        sub_1676( l_U639, l_U596 );
    }
    sub_2119();
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2270(), 1 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -126.11000000, -483.79000000, 100.00000000, -138.01000000, -418.01000000, -100.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1586(int iParam0, int iParam1)
{
    if (NOT g_U27953._fU4)
    {
        return 0;
    }
    if (NOT (g_U27953._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U27953._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_1676(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1586( uParam0, uParam1 )))
    {
        sub_979( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1772();
    if (g_U816)
    {
        sub_1852();
    }
    else
    {
        sub_1981();
    }
    g_U12303 = 0;
    return;
}

void sub_1772()
{
    if (g_U0)
    {
        g_U27953._fU0 = 0;
    }
    else
    {
        g_U27953._fU0 = 1;
    }
    g_U27953._fU4 = 0;
    g_U27953._fU8 = 19;
    g_U27953._fU12 = 0;
    return;
}

void sub_1852()
{
    if (COMPARE_STRING( ref g_U10987, "RIPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_1898();
    return;
}

void sub_1898()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1981()
{
    if (COMPARE_STRING( ref g_U10987, "RIPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_2027();
    return;
}

void sub_2027()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_2119()
{
    if (l_U107)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U105 = 0;
    l_U104 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_2270()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2463(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2270() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2270(), uParam0 );
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

int sub_2549(unknown uParam0, boolean bParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2270(), 0 ))
            {
                if (bParam1)
                {
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( (uParam0^) );
                }
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

int sub_2659(unknown uParam0, float fParam1, boolean bParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if ((sub_2701( uParam0 )) < fParam1)
            {
                if (HAS_CHAR_SPOTTED_CHAR( (uParam0^), sub_2270() ))
                {
                    if (IS_CHAR_ARMED( sub_2270(), 7 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1493(), (uParam0^) ))
                        {
                            return 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1493(), (uParam0^) ))
                        {
                            return 1;
                        }
                    }
                }
                if (IS_CHAR_SHOOTING( sub_2270() ))
                {
                    return 1;
                }
            }
            if (bParam2)
            {
                if ((sub_2701( uParam0 )) < 1.50000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2701(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_COORDINATES( sub_2270(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
            GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
            return Result;
        }
    }
    return Result;
}

void sub_3034()
{
    sub_1567();
    return;
}

void sub_3084()
{
    switch (l_U564)
    {
        case 0:
        sub_3121();
        l_U540 = {81.81870000, -676.57300000, 13.76880000};
        l_U543 = 359.60060000;
        l_U544 = -1238060996;
        l_U547 = -1777883454;
        l_U552 = {-126.87250000, -376.05490000, 13.65370000};
        l_U555 = 0.53830000;
        l_U556 = -1896659641;
        l_U608 = {-136.37800000, -473.29900000, 16.05800000};
        l_U611 = {-1215.59900000, 1638.36800000, 33.25590000};
        REQUEST_MODEL( l_U544 );
        for ( l_U594 = 0; l_U594 <= 1; l_U594++ )
        {
            l_U574[l_U594] = 0;
        }
        REQUEST_ANIMS( "MISSDAVE" );
        REQUEST_CAR_RECORDING( 1899 );
        REQUEST_ANIMS( "Gestures@Niko" );
        l_U564 = 1;
        break;
        case 1:
        if (NOT l_U571)
        {
            if ((HAVE_ANIMS_LOADED( "Gestures@Niko" )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 1899 )) AND ((HAVE_ANIMS_LOADED( "MISSDAVE" )) AND (HAS_MODEL_LOADED( l_U544 )))))
            {
                SET_CHAR_GESTURE_GROUP( sub_2270(), "Gestures@Niko" );
                CLEAR_AREA( l_U540._fU0, l_U540._fU4, l_U540._fU8, 10.00000000, 1 );
                CREATE_CHAR( 26, l_U544, l_U540._fU0, l_U540._fU4, l_U540._fU8, ref l_U539, 1 );
                SET_CHAR_HEADING( l_U539, l_U543 );
                SET_CHAR_HEALTH( l_U539, 200 );
                SET_CHAR_MONEY( l_U539, 1500 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U539, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U539, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U539, 1 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U539, 1 );
                TASK_PLAY_ANIM( l_U539, "NERVOUS_STAND", "MISSDAVE", 4.00000000, 1, 0, 0, 0, -1 );
                sub_3745( 1, l_U539, "DAVE", 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U539, 1, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U539, 2, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U539, 5, 1, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U539, 1 );
                SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U539, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U539, 1 );
                SET_CHAR_AS_ENEMY( l_U539, 1 );
                ADD_BLIP_FOR_CHAR( l_U539, ref l_U545 );
                CHANGE_BLIP_SPRITE( l_U545, 63 );
                SET_BLIP_AS_FRIENDLY( l_U545, 1 );
                CHANGE_BLIP_SCALE( l_U545, 1.00000000 );
                CHANGE_BLIP_DISPLAY( l_U545, 2 );
                sub_4067( 14, l_U596 );
                sub_4144( ref l_U539, 20.00000000, 10.00000000 );
                TASK_LOOK_AT_CHAR( l_U539, sub_2270(), -2, 0 );
                l_U571 = 1;
                l_U563 = 1;
            }
            else
            {
                WAIT( 0 );
            }
        }
        break;
    }
    return;
}

void sub_3121()
{
    return;
}

void sub_3745(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3825( "\n PED NUMBER ", uParam0 );
    sub_3865( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3825(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3865(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4067(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_863( uParam0 );
    if (NOT (g_U27892[uVar4]._fU28 == iParam1))
    {
        return;
    }
    g_U27892[uVar4]._fU76 = 1;
    return;
}

void sub_4144(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_4278()
{
    switch (l_U566)
    {
        case 0:
        if ((sub_2701( ref l_U539 )) < 10.00000000)
        {
            sub_4335();
        }
        break;
        case 1: break;
    }
    if (IS_CHAR_ON_FOOT( sub_2270() ))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U539, g_U39196._fU0, g_U39196._fU4, g_U39196._fU8, ref l_U599._fU0, ref l_U599._fU4, ref l_U599._fU8 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U539, g_U39199._fU0, g_U39199._fU4, g_U39199._fU8, ref l_U602._fU0, ref l_U602._fU4, ref l_U602._fU8 );
        if (IS_CHAR_IN_ANGLED_AREA_3D( sub_2270(), l_U599._fU0, l_U599._fU4, l_U599._fU8, l_U602._fU0, l_U602._fU4, l_U602._fU8, 6.00000000, 0 ))
        {
            if (sub_5767())
            {
                CLEAR_PRINTS();
                SET_PLAYER_CONTROL( sub_1493(), 0 );
                SET_MISSION_FLAG( 1 );
                sub_5856( l_U639, l_U596 );
                DO_SCREEN_FADE_OUT( 100 );
                CLEAR_PRINTS();
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                REGISTER_SCRIPT_WITH_AUDIO( 0 );
                LOAD_ADDITIONAL_TEXT( "DAVE1AU", 6 );
                LOAD_ADDITIONAL_TEXT( "DAV1", 0 );
                sub_7962( "RpDave1" );
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U539, 0, 0, 0 );
                }
                SWITCH_PED_PATHS_OFF( 63.18000000, -656.08000000, 100.00000000, 67.03000000, -730.12000000, -100.00000000 );
                SWITCH_PED_PATHS_OFF( 65.47000000, -29.88000000, 100.00000000, 134.77000000, -681.51000000, -100.00000000 );
                GET_CHAR_COORDINATES( sub_2270(), ref l_U605._fU0, ref l_U605._fU4, ref l_U605._fU8 );
                CLEAR_AREA( l_U605._fU0, l_U605._fU4, l_U605._fU8, 100.00000000, 1 );
                CLEAR_NAMED_CUTSCENE( "RP01_DG" );
                START_CUTSCENE_NOW( "RP01_DG" );
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
                sub_8430();
            }
        }
    }
    return;
}

void sub_4335()
{
    if (IS_CHAR_ON_FOOT( sub_2270() ))
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U539, 0, 0, 6000 );
    }
    LOAD_ADDITIONAL_TEXT( "DAVE1AU", 6 );
    sub_4421( "DAVE1AU" );
    sub_3745( 0, sub_2270(), "johnny", 0 );
    sub_3745( 1, l_U539, "dave", 0 );
    sub_4586( "DAVE1_CALLJ", ref l_U633, 7, 1 );
    l_U566 = 1;
    return;
}

void sub_4421(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_4438();
    return;
}

void sub_4438()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_4586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4607( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_4607(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4661( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_4661(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4683( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_5371( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_4683(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4760( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_4760( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_4760( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_4760(unknown uParam0)
{
    return;
}

void sub_5371(int iParam0, int iParam1)
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

int sub_5767()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

void sub_5856(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U12303)
    {
        sub_979( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_863( uParam0 );
    if (g_U27953._fU4)
    {
        sub_979( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U27892[uVar4]._fU0 = 1;
        g_U27892[uVar4]._fU4 = 1;
        g_U27892[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U27892[uVar4]._fU0)
    {
        sub_979( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U27953._fU4 = 1;
    g_U27953._fU8 = uParam0;
    g_U27953._fU12 = uParam1;
    sub_6203();
    sub_7039( g_U27892[uVar4]._fU32 );
    g_U27892[uVar4]._fU32 = 0;
    sub_7162( uParam0, uParam1 );
    g_U12303 = 1;
    return;
}

void sub_6203()
{
    sub_6212();
    sub_6357( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_6431();
    return;
}

void sub_6212()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_6357(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6431()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_6469( 1, g_U572[I] )) == 0)
        {
            sub_6720( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6898())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_6469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6720(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_6805( g_U572 - 1 );
    return;
}

void sub_6805(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_6898()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_6469( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7039(int iParam0)
{
    g_U27953._fU16._fU4 += iParam0;
    sub_7069();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7069()
{
    if (g_U0)
    {
        return;
    }
    if (g_U27953._fU16._fU4 < g_U27953._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_7162(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 13:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 1;
        break;
        case 14:
        StrCopy( ref cVar4, "DAVE", 16 );
        iVar8 = 1;
        break;
        case 15:
        StrCopy( ref cVar4, "MALC", 16 );
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
    sub_7692( cVar4 );
    return;
}

void sub_7692(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

void sub_7962(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U10541 ))
    {
        DESTROY_THREAD( g_U10541 );
    }
    StrCopy( ref g_U10533, uParam0, 32 );
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
    g_U10541 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_8430()
{
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2270(), 0 );
    CLEAR_WANTED_LEVEL( sub_1493() );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    REQUEST_MODEL( l_U547 );
    SUPPRESS_PED_MODEL( l_U547 );
    REQUEST_MODEL( l_U556 );
    SUPPRESS_CAR_MODEL( l_U556 );
    LOAD_ALL_OBJECTS_NOW();
    sub_8531();
    CLEAR_AREA( 79.89810000, -652.08760000, 11.51900000, 50.00000000, 1 );
    while (NOT (sub_8703( ref l_U632, 79.89810000, -652.08760000, 11.51900000, 268.09240000 )))
    {
        WAIT( 0 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U632 );
    LOAD_SCENE( l_U540._fU0, l_U540._fU4, l_U540._fU8 );
    REMOVE_BLIP( l_U545 );
    sub_10327( ref l_U539 );
    CREATE_CAR( l_U556, l_U552._fU0, l_U552._fU4, l_U552._fU8, ref l_U551, 1 );
    SET_CAR_HEADING( l_U551, l_U555 );
    CHANGE_CAR_COLOUR( l_U551, 35, 0 );
    SET_VEHICLE_DIRT_LEVEL( l_U551, 0.00000000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U551, 1 );
    SET_CAN_BURST_CAR_TYRES( l_U551, 0 );
    CREATE_CHAR_INSIDE_CAR( l_U551, 26, l_U547, ref l_U546 );
    SET_CHAR_WANTED_BY_POLICE( l_U546, 0 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U546, 0 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U546, 1 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U546, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U546, 1 );
    sub_3745( 1, l_U546, "LAWYER", 0 );
    SET_CAR_COLLISION( l_U551, 1 );
    LOCK_CAR_DOORS( l_U551, 3 );
    SET_CHAR_HEADING( sub_2270(), 3.76400000 );
    SET_CHAR_COORDINATES( sub_2270(), 78.13030000, -673.25360000, 13.76750000 );
    ADD_BLIP_FOR_CHAR( l_U546, ref l_U548 );
    SET_ROUTE( l_U548, 1 );
    GET_GAME_TIMER( ref l_U590 );
    SWITCH_ROADS_OFF( -126.11000000, -483.79000000, 100.00000000, -138.01000000, -418.01000000, -100.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
    sub_10772( 1 );
    PRINT_NOW( "DAV_GOD0", 7500, 1 );
    l_U572 = 1;
    return;
}

void sub_8531()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_2270() )))
    {
        GET_CHAR_COORDINATES( sub_2270(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_8587(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_8587()
{
    return 301427732;
}

int sub_8703(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_8587();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_8843( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_8843(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_10327(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            DELETE_CHAR( uParam0 );
        }
    }
    return;
}

void sub_10772(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_10796( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1493() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2270() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2270() );
        }
        SET_PLAYER_CONTROL( sub_1493(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2270(), 0 );
    }
    if (l_U120)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U255 );
        l_U120 = 0;
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_10796(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 <= 8) AND (g_U8944 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_11204()
{
    if (NOT l_U585)
    {
        if (sub_11228( ref l_U546 ))
        {
            CLEAR_PRINTS();
            PRINT_NOW( "DAV_GOD3", 7500, 1 );
            sub_3034();
        }
        if (sub_11317( ref l_U551 ))
        {
            CLEAR_PRINTS();
            PRINT_NOW( "DAV_GOD6", 7500, 1 );
            sub_3034();
        }
        if (l_U578)
        {
            if ((sub_2701( ref l_U546 )) > 200)
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U546 )))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "DAV_GOD4", 7500, 1 );
                    sub_3034();
                }
            }
        }
    }
    return;
}

int sub_11228(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        return IS_CHAR_INJURED( (uParam0^) );
    }
    return 0;
}

int sub_11317(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (NOT (IS_VEH_DRIVEABLE( (uParam0^) )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_11550()
{
    if ((sub_11934( ref l_U551, 1000 )) || ((sub_2549( ref l_U546, 0 )) || (((sub_11792( sub_2270(), ref l_U608 )) < 50.00000000) || (sub_11569( ref l_U551, 50.00000000, 0 )))))
    {
        if (DOES_BLIP_EXIST( l_U548 ))
        {
            REMOVE_BLIP( l_U548 );
        }
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U546, 0 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U546, 0 );
        ADD_BLIP_FOR_CAR( l_U551, ref l_U557 );
        CLEAR_CHAR_TASKS( l_U546 );
        OPEN_SEQUENCE_TASK( ref l_U550 );
        TASK_LOOK_AT_CHAR( 0, sub_2270(), -2, 16 );
        TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( 0, l_U551, -130.92970000, -179.72220000, 14.21950000, 20.00000000, 0, l_U556, 2, 40.00000000, -1 );
        TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( 0, l_U551, -484.44220000, -151.38020000, 7.69170000, 20.00000000, 0, l_U556, 2, 40.00000000, -1 );
        TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( 0, l_U551, -501.36790000, 146.36370000, 7.38679900, 20.00000000, 0, l_U556, 2, 40.00000000, -1 );
        TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( 0, l_U551, -650.49280000, 1131.95600000, 17.55360000, 20.00000000, 0, l_U556, 2, 40.00000000, -1 );
        TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( 0, l_U551, -1025.33500000, 1384.74000000, 23.99710000, 20.00000000, 0, l_U556, 2, 40.00000000, -1 );
        TASK_CAR_DRIVE_TO_COORD_NOT_AGAINST_TRAFFIC( 0, l_U551, l_U611._fU0, l_U611._fU4, l_U611._fU8, 20.00000000, 0, l_U556, 2, 4.00000000, -1 );
        CLOSE_SEQUENCE_TASK( l_U550 );
        TASK_PERFORM_SEQUENCE( l_U546, l_U550 );
        CLEAR_SEQUENCE_TASK( l_U550 );
        CLEAR_PRINTS();
        PRINT_NOW( "DAV_GOD1", 7500, 1 );
        GET_GAME_TIMER( ref l_U595 );
        l_U578 = 1;
        l_U565 = 2;
    }
    if ((NOT l_U574[0]) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
    {
        SET_CHAR_COORDINATES( sub_2270(), -136.33990000, -457.17190000, 13.66180000 );
        SET_CHAR_HEADING( sub_2270(), 181.36040000 );
        l_U574[0] = 1;
    }
    return;
}

int sub_11569(unknown uParam0, float fParam1, boolean bParam2)
{
    vector vVar5;
    vector vVar8;
    float fVar11;

    vVar5 = {0.00000000, 0.00000000, 0.00000000};
    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    fVar11 = 0.00000000;
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CHAR_COORDINATES( sub_2270(), ref vVar5.x, ref vVar5.y, ref vVar5.z );
            GET_CAR_COORDINATES( (uParam0^), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            GET_DISTANCE_BETWEEN_COORDS_3D( vVar5.x, vVar5.y, vVar5.z, vVar8.x, vVar8.y, vVar8.z, ref fVar11 );
            if (bParam2)
            {
                if (fVar11 >= fParam1)
                {
                    return 1;
                }
            }
            else if (fVar11 < fParam1)
            {
                return 1;
            }
        }
    }
    return 0;
}

float sub_11792(unknown uParam0, int iParam1)
{
    float Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    Result = 0.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, ref Result );
            return Result;
        }
    }
    return -1.00000000;
}

int sub_11934(unknown uParam0, int iParam1)
{
    int iVar4;

    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), ref iVar4 );
            if ((iVar4 < iParam1) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2270() )) || (((GET_ENGINE_HEALTH( (uParam0^) )) < iParam1) || ((GET_PETROL_TANK_HEALTH( (uParam0^) )) < iParam1))))
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

void sub_12652()
{
    switch (l_U567)
    {
        case 0:
        if (NOT l_U573)
        {
            sub_12724();
            sub_12804();
            l_U573 = 1;
        }
        sub_12847();
        break;
        case 1:
        if (NOT (sub_13520( 0 )))
        {
            if (sub_13787() != -1)
            {
                l_U591 = sub_13787();
            }
        }
        else if (l_U591 != -1)
        {
            if ((l_U591 > 5) || (NOT sub_13845()))
            {
                sub_12847();
            }
            else
            {
                l_U567 = 0;
            }
        }
        else
        {
            l_U567 = 0;
        }
        break;
        case 2:
        if (sub_13924( ref l_U590, 2500 ))
        {
            SET_CAM_ACTIVE( l_U627, 0 );
            SET_CAM_PROPAGATE( l_U627, 0 );
            ATTACH_CAM_TO_VEHICLE( l_U628, l_U551 );
            POINT_CAM_AT_VEHICLE( l_U628, l_U551 );
            SET_CAM_ATTACH_OFFSET( l_U628, 1.80000000, -2.40000000, 0.00000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U628, 1 );
            SET_CAM_POINT_OFFSET( l_U628, 0.20000000, 0.00000000, 0.20000000 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U628, 1 );
            SET_CAM_ACTIVE( l_U628, 1 );
            SET_CAM_PROPAGATE( l_U628, 1 );
            GET_GAME_TIMER( ref l_U590 );
            l_U567 = 3;
        }
        break;
        case 3:
        if (sub_13924( ref l_U590, 3000 ))
        {
            SET_CAM_ACTIVE( l_U628, 0 );
            SET_CAM_PROPAGATE( l_U628, 0 );
            POINT_CAM_AT_VEHICLE( l_U629, l_U551 );
            SET_CAM_ACTIVE( l_U629, 1 );
            SET_CAM_PROPAGATE( l_U629, 1 );
            GET_GAME_TIMER( ref l_U590 );
            l_U567 = 4;
        }
        break;
        case 4:
        if (sub_13924( ref l_U590, 4000 ))
        {
            SET_CAM_PROPAGATE( l_U629, 0 );
            SET_CAM_ACTIVE( l_U629, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U592 );
            DESTROY_ALL_CAMS();
            sub_14341( 1 );
            CLEAR_PRINTS();
            PRINT_NOW( "DAV_GOD1", 7500, 1 );
            l_U565 = 2;
        }
        break;
    }
    return;
}

void sub_12724()
{
    return sub_12735( 1, 1 );
}

int sub_12735(boolean bParam0, unknown uParam1)
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

void sub_12804()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_12847()
{
    SWITCH_ROADS_OFF( -375.22000000, -245.08000000, 100.00000000, 62.19000000, -725.86000000, -100.00000000 );
    CLEAR_AREA( l_U608._fU0, l_U608._fU4, l_U608._fU8, 300.00000000, 1 );
    BEGIN_CAM_COMMANDS( ref l_U592 );
    CREATE_CAM( 14, ref l_U627 );
    CREATE_CAM( 14, ref l_U628 );
    CREATE_CAM( 14, ref l_U629 );
    CREATE_CAM( 3, ref l_U631 );
    SET_CAM_POS( l_U627, -128.68520000, -538.18050000, 14.20688000 );
    SET_CAM_ROT( l_U627, -1.53875000, -8.93497100, 176.61730000 );
    SET_CAM_FOV( l_U627, 30.90004000 );
    SET_CAM_POS( l_U629, -127.60830000, -474.79520000, 17.16591000 );
    SET_CAM_ROT( l_U629, -11.14585000, -0.22486100, 127.08030000 );
    SET_CAM_FOV( l_U629, 39.90001000 );
    CREATE_CAR( l_U556, l_U552._fU0, l_U552._fU4, l_U552._fU8, ref l_U551, 1 );
    SET_CAR_HEADING( l_U551, l_U555 );
    CHANGE_CAR_COLOUR( l_U551, 35, 0 );
    SET_VEHICLE_DIRT_LEVEL( l_U551, 0.00000000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U551, 1 );
    CREATE_CHAR_INSIDE_CAR( l_U551, 26, l_U547, ref l_U546 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U546, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U546, 1 );
    START_PLAYBACK_RECORDED_CAR( l_U551, 1391 );
    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U551, 2000 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_ACTIVE( l_U627, 1 );
    SET_CAM_PROPAGATE( l_U627, 1 );
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2270() ))
    {
        SET_CAR_COORDINATES( l_U255, -135.96030000, -475.72740000, 13.67110000 );
        SET_CAR_HEADING( l_U255, 182.29420000 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_2270(), -135.96030000, -475.72740000, 13.67110000 );
        SET_CHAR_HEADING( sub_2270(), 182.29420000 );
    }
    GET_GAME_TIMER( ref l_U590 );
    GET_GAME_TIMER( ref l_U593 );
    l_U574[0] = 1;
    l_U567 = 2;
    return;
}

int sub_13520(boolean bParam0)
{
    unknown uVar3;

    if (g_U94._fU60 != -1)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U94._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_2270(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_4760( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_13787()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_13845()
{
    return g_U94._fU504;
}

int sub_13924(unknown uParam0, int iParam1)
{
    int iVar4;

    GET_GAME_TIMER( ref iVar4 );
    if ((iVar4 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_14341(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_10796( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_1493() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_2270() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_2270() );
        }
        SET_PLAYER_CONTROL( sub_1493(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2270(), 0 );
    }
    if (l_U120)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U255 );
        l_U120 = 0;
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_14585(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U107)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U105))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U106 + 500))
        {
            l_U105 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_805()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_2270() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U107)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U106 );
            l_U105 = 1;
            l_U104 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U105) AND (NOT l_U104))
        {
            if (l_U107)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U104 = 1;
        }
    }
    else if (l_U104)
    {
        if (l_U107)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U104 = 0;
    };;;
    return;
}

void sub_15234()
{
    int iVar2;

    sub_15270( ref l_U546, ref l_U595, 120.00000000, 20000, "DAV_GOD2" );
    sub_15406( ref l_U551, ref l_U560, ref l_U559, ref l_U558 );
    if ((sub_2701( ref l_U546 )) < 15.00000000)
    {
        if ((sub_15616( ref l_U551 )) || ((sub_15556( sub_2270(), ref l_U551 )) || ((l_U558 < 400.00000000) || ((l_U559 < 400.00000000) || (l_U560 < 400.00000000)))))
        {
            if (IS_CHAR_SITTING_IN_CAR( l_U546, l_U551 ))
            {
                CLEAR_CHAR_TASKS( l_U546 );
                OPEN_SEQUENCE_TASK( ref l_U550 );
                TASK_CAR_TEMP_ACTION( 0, l_U551, 24, -2 );
                CLOSE_SEQUENCE_TASK( l_U550 );
                TASK_PERFORM_SEQUENCE( l_U546, l_U550 );
                CLEAR_SEQUENCE_TASK( l_U550 );
            }
            sub_15843();
            sub_15894();
            if ((sub_15556( sub_2270(), ref l_U551 )) || (sub_13924( ref l_U590, 2500 )))
            {
                sub_16030();
                return;
            }
        }
    }
    else if (NOT l_U583)
    {
        if ((l_U558 < 400.00000000) || ((l_U559 < 400.00000000) || (l_U560 < 400.00000000)))
        {
            if (IS_CHAR_SITTING_IN_CAR( l_U546, l_U551 ))
            {
                CLEAR_CHAR_TASKS( l_U546 );
                OPEN_SEQUENCE_TASK( ref l_U550 );
                TASK_CAR_TEMP_ACTION( 0, l_U551, 24, -2 );
                CLOSE_SEQUENCE_TASK( l_U550 );
                TASK_PERFORM_SEQUENCE( l_U546, l_U550 );
                CLEAR_SEQUENCE_TASK( l_U550 );
                sub_15843();
                sub_15894();
            }
        }
    }
    if (NOT l_U583)
    {
        switch (l_U569)
        {
            case 0:
            if ((sub_16931( ref l_U546, ref l_U549, 0 )) || (sub_11934( ref l_U551, 1000 )))
            {
                l_U569 = 5;
            }
            if (NOT (IS_CHAR_INJURED( l_U546 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U546, l_U611._fU0, l_U611._fU4, l_U611._fU8, 39.94000000, 39.94000000, 10.00000000, 0 ))
                {
                    l_U569 = 5;
                }
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U546 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U546, l_U611._fU0, l_U611._fU4, l_U611._fU8, 39.94000000, 39.94000000, 10.00000000, 0 )))
                {
                    if ((sub_17244( sub_2270(), ref l_U546 )) < 15.00000000)
                    {
                        if (NOT l_U577)
                        {
                            l_U640 = 0;
                            sub_17434( ref l_U641, "DAVE1_ATTK", ref l_U640 );
                            sub_17434( ref l_U641, "DAVE1_SCARE", ref l_U640 );
                            sub_17584( ref l_U641, ref l_U650, 6, 1 );
                            GET_SCRIPT_TASK_STATUS( l_U546, 29, ref iVar2 );
                            if (iVar2 == 1)
                            {
                                SET_DRIVE_TASK_CRUISE_SPEED( l_U546, 40.00000000 );
                            }
                            l_U577 = 1;
                        }
                    }
                    else if ((sub_17244( sub_2270(), ref l_U546 )) > 18.00000000)
                    {
                        if (l_U577)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U546, 29, ref iVar2 );
                            if (iVar2 == 1)
                            {
                                SET_DRIVE_TASK_CRUISE_SPEED( l_U546, 30.00000000 );
                            }
                            l_U577 = 0;
                        }
                    }
                }
                else if (sub_17797( l_U650 ))
                {
                    sub_17969( ref l_U650, 1 );
                }
                l_U561 = 1;
                while (l_U561)
                {
                    if (sub_18109())
                    {
                        l_U562 = 3;
                    }
                    switch (l_U562)
                    {
                        case 0:
                        DO_SCREEN_FADE_OUT_UNHACKED( 250 );
                        if (NOT (IS_CAR_DEAD( l_U551 )))
                        {
                            SET_CAR_PROOFS( l_U551, 1, 1, 1, 1, 1 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U546 )))
                        {
                            SET_CHAR_PROOFS( l_U546, 1, 1, 1, 1, 1 );
                        }
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                        sub_18366();
                        if (NOT (IS_CAR_DEAD( l_U551 )))
                        {
                            START_PLAYBACK_RECORDED_CAR( l_U551, 1899 );
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U551, 1500.00000000 );
                            SET_CAM_POS( l_U415, -1193.41900000, 1629.56600000, 34.19560000 );
                            SET_CAM_ROT( l_U415, -16.68340000, 0.00000000, 139.24340000 );
                            SET_CAM_FOV( l_U415, 45.00000000 );
                            POINT_CAM_AT_VEHICLE( l_U415, l_U551 );
                        }
                        sub_18648( ref l_U415, 1 );
                        sub_18705( 1 );
                        DO_SCREEN_FADE_IN_UNHACKED( 250 );
                        SETTIMERA( 0 );
                        l_U562 = 1;
                        break;
                        case 1:
                        if (TIMERA() > 4500)
                        {
                            UNPOINT_CAM( l_U415 );
                            SET_CAM_POS( l_U415, -1215.74200000, 1634.85200000, 33.45013000 );
                            SET_CAM_ROT( l_U415, 13.07160000, -0.00000000, 1.52421100 );
                            SET_CAM_FOV( l_U415, 45.00000000 );
                            SETTIMERA( 0 );
                            l_U562 = 2;
                        }
                        break;
                        case 2:
                        if ((l_U589 == 0) AND (TIMERA() > 1000))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U546 )))
                            {
                                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U546, -1215.47500000, 1645.40400000, 33.25650000, 3, 10000, 0.50000000 );
                            }
                            l_U589 = 1;
                        }
                        if (TIMERA() > 4500)
                        {
                            l_U562 = 3;
                        }
                        break;
                        case 3:
                        DO_SCREEN_FADE_OUT( 500 );
                        while (IS_SCREEN_FADING_OUT())
                        {
                            WAIT( 0 );
                        }
                        sub_18648( ref l_U415, 0 );
                        sub_18705( 0 );
                        l_U561 = 0;
                        if (NOT (IS_CAR_DEAD( l_U551 )))
                        {
                            SET_CAR_PROOFS( l_U551, 0, 0, 0, 0, 0 );
                        }
                        DELETE_CHAR( ref l_U546 );
                        if (DOES_BLIP_EXIST( l_U557 ))
                        {
                            REMOVE_BLIP( l_U557 );
                        }
                        DO_SCREEN_FADE_IN( 500 );
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                        break;
                    }
                    WAIT( 0 );
                }
                PRINT_NOW( "DAV_GOD4", 7500, 1 );
                sub_3034();;
            }
            break;
        }
    }
    return;
}

void sub_15270(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3, unknown uParam4)
{
    if ((sub_2701( uParam0 )) > fParam2)
    {
        if (NOT l_U117)
        {
            if (sub_13924( uParam1, uParam3 ))
            {
                GET_GAME_TIMER( uParam1 );
                CLEAR_PRINTS();
                PRINT_NOW( uParam4, 7500, 1 );
                l_U117 = 1;
            }
        }
    }
    else if (l_U117)
    {
        CLEAR_PRINTS();
        l_U117 = 0;
    }
    return;
}

void sub_15406(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_15556(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
    if (iVar4 == (uParam1^))
    {
        return sub_11569( uParam1, 2.00000000, 0 );
    }
    return 0;
}

int sub_15616(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if ((CHECK_STUCK_TIMER( (uParam0^), 1, 40000 )) || ((CHECK_STUCK_TIMER( (uParam0^), 2, 30000 )) || ((CHECK_STUCK_TIMER( (uParam0^), 3, 60000 )) || (CHECK_STUCK_TIMER( (uParam0^), 0, 5000 )))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_15843()
{
    if (NOT l_U586)
    {
        GET_GAME_TIMER( ref l_U590 );
        l_U583 = 1;
        l_U586 = 1;
    }
    return;
}

void sub_15894()
{
    if (NOT l_U587)
    {
        if ((l_U558 < 400.00000000) || ((l_U559 < 400.00000000) || (l_U560 < 400.00000000)))
        {
            CLEAR_PRINTS();
            PRINT_NOW( "DAV_GOD7", 7500, 1 );
            l_U587 = 1;
        }
    }
    return;
}

void sub_16030()
{
    if (NOT (sub_15556( sub_2270(), ref l_U551 )))
    {
        CLEAR_CHAR_TASKS( l_U546 );
        OPEN_SEQUENCE_TASK( ref l_U550 );
        TASK_CAR_TEMP_ACTION( 0, l_U551, 24, 2000 );
        CLOSE_SEQUENCE_TASK( l_U550 );
        TASK_PERFORM_SEQUENCE( l_U546, l_U550 );
        CLEAR_SEQUENCE_TASK( l_U550 );
        l_U579 = 1;
    }
    else
    {
        l_U579 = 0;
    }
    sub_16165( ref l_U546, ref l_U551 );
    sub_16541( ref l_U255 );
    sub_15406( 1, ref l_U241, 1, 1 );
    sub_16379( ref l_U255 );
    l_U580 = 1;
    l_U565 = 3;
    return;
    break;
    2;
    1;
    ref l_U127;
    2;
    1;
    ref l_U240;
    2;
    1;
    ref l_U241;
    1;
    ref l_U240;
    1;
    1;
    ref l_U127;
    ref l_U255;
    break;
}

void sub_16165(unknown uParam0, unknown uParam1)
{
    sub_16183( 1, 1 );
    sub_16252( uParam0 );
    sub_15406( 1, ref l_U241, 1, 1 );
    sub_16379( uParam1 );
    return;
    break;
    2;
    1;
    ref l_U127;
    2;
    1;
    ref l_U240;
    2;
    1;
    ref l_U241;
    1;
    ref l_U240;
    1;
    1;
    ref l_U127;
    uParam1;
    2;
    1;
    ref l_U126;
    ref l_U126;
    uParam0;
    break;
}

void sub_16183(unknown uParam0, unknown uParam1)
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

void sub_16252(unknown uParam0)
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

void sub_16379(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U127) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U240) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U241) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_16541(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( (uParam0^) )))
            {
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
                l_U120 = 1;
            }
        }
    }
    return;
}

int sub_16931(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), ref iVar5 );
            if (bParam2)
            {
                if ((iVar5 < (uParam1^)) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2270(), 1 )))
                {
                    return 1;
                }
            }
            else if ((iVar5 < (uParam1^)) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_2270(), 0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

float sub_17244(unknown uParam0, unknown uParam1)
{
    float Result;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_INJURED( (uParam1^) )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_CHAR_COORDINATES( (uParam1^), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref Result );
            return Result;
        }
    }
    return -1.00000000;
}

void sub_17434(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

void sub_17584(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_17605( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_17605(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_4661( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_17797(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_4760( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4760( "\n speech is not playing" );
    }
    return 0;
}

void sub_17969(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

int sub_18109()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_18366()
{
    if (NOT (DOES_CAM_EXIST( l_U410 )))
    {
        CREATE_CAM( 14, ref l_U410 );
    }
    if (NOT (DOES_CAM_EXIST( l_U412 )))
    {
        CREATE_CAM( 14, ref l_U412 );
    }
    if (NOT (DOES_CAM_EXIST( l_U413 )))
    {
        CREATE_CAM( 3, ref l_U413 );
    }
    if (NOT (DOES_CAM_EXIST( l_U415 )))
    {
        CREATE_CAM( 14, ref l_U415 );
    }
    return;
}

void sub_18648(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_18705(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U409 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( l_U418, NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U409 );
    }
    return;
}

void sub_19294()
{
    if ((l_U582) AND (NOT l_U581))
    {
        if (sub_19327( ref l_U597, 1000 ))
        {
            l_U581 = 1;
            l_U568 = 5;
            INCREMENT_INT_STAT( 372, 1 );
        }
    }
    switch (l_U568)
    {
        case 0:
        if (sub_19501( 1, 1, 500 ))
        {
            if (l_U579)
            {
                l_U568 = 1;
            }
            else
            {
                l_U568 = 2;
            }
        }
        break;
        case 1:
        sub_19972();
        break;
        case 2:
        sub_21983();
        break;
        case 3:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2270(), l_U605._fU0, l_U605._fU4, l_U605._fU8, 3.50000000, 3.50000000, 3.50000000, 0 ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (IS_VEH_DRIVEABLE( l_U551 ))
            {
                if (IS_PLAYER_PLAYING( sub_1493() ))
                {
                    SET_CAM_PROPAGATE( l_U629, 0 );
                    SET_CAM_ACTIVE( l_U629, 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2270() );
                    SET_CHAR_COORDINATES( sub_2270(), l_U605._fU0, l_U605._fU4, -101.00000000 );
                    SET_CHAR_HEADING( sub_2270(), l_U555 - 90.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U546 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2270(), l_U546, -1, 0 );
                    }
                    ATTACH_CAM_TO_VEHICLE( l_U627, l_U551 );
                    SET_CAM_ATTACH_OFFSET( l_U627, 1.80000000, 3.30000000, 0.50000000 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U627, 1 );
                    POINT_CAM_AT_VEHICLE( l_U627, l_U551 );
                    SET_CAM_POINT_OFFSET( l_U627, -0.90000000, 0.00000000, 0.50000000 );
                    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U627, 1 );
                    SET_CAM_FOV( l_U627, 45.00000000 );
                    ATTACH_CAM_TO_VEHICLE( l_U628, l_U551 );
                    SET_CAM_ATTACH_OFFSET( l_U628, 1.30000000, 3.30000000, 0.50000000 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U628, 1 );
                    POINT_CAM_AT_VEHICLE( l_U628, l_U551 );
                    SET_CAM_POINT_OFFSET( l_U628, -1.10000000, 0.00000000, 0.15000000 );
                    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U628, 1 );
                    SET_CAM_FOV( l_U628, 45.00000000 );
                    WAIT( 0 );
                    SET_CAM_PROPAGATE( l_U627, 0 );
                    SET_CAM_ACTIVE( l_U627, 1 );
                    SET_CAM_PROPAGATE( l_U628, 0 );
                    SET_CAM_ACTIVE( l_U628, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U631, l_U627, l_U628, 30000, 0 );
                    SET_CAM_PROPAGATE( l_U631, 1 );
                    SET_CAM_ACTIVE( l_U631, 1 );
                    DO_SCREEN_FADE_IN_UNHACKED( 10 );
                    GET_GAME_TIMER( ref l_U590 );
                    sub_4586( "DAVE1_CAR", ref l_U633, 7, 1 );
                    l_U568 = 4;
                }
            }
        }
        break;
        case 4:
        if (NOT (sub_17797( l_U633 )))
        {
            sub_24309();
            l_U568 = 5;
        }
        break;
        case 5:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            TASK_CLEAR_LOOK_AT( sub_2270() );
            DESTROY_ALL_CAMS();
            END_CAM_COMMANDS( ref l_U592 );
            DELETE_CHAR( ref l_U546 );
            DELETE_CAR( ref l_U551 );
            if (DOES_VEHICLE_EXIST( l_U255 ))
            {
                if (IS_VEH_DRIVEABLE( l_U255 ))
                {
                    SET_CAR_VISIBLE( l_U255, 1 );
                }
            }
            SWITCH_ROADS_BACK_TO_ORIGINAL( l_U617[0]._fU0, l_U617[0]._fU4, l_U617[0]._fU8, l_U617[1]._fU0, l_U617[1]._fU4, l_U617[1]._fU8 );
            if (NOT l_U581)
            {
                INCREMENT_INT_STAT( 373, 1 );
            }
            sub_24721( ref l_U255 );
            SET_CHAR_COORDINATES( sub_2270(), l_U605._fU0, l_U605._fU4, -101.00000000 );
            SET_CHAR_HEADING( sub_2270(), l_U555 - 90.00000000 );
            sub_10772( 1 );
            sub_25041();
        }
        break;
    }
    return;
}

int sub_19327(unknown uParam0, unknown uParam1)
{
    if (sub_13924( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_19362())
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_19362()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

int sub_19501(boolean bParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;

    if (IS_CHAR_IN_ANY_BOAT( sub_2270() ))
    {
        iVar5 = 0;
    }
    else
    {
        iVar5 = 1;
    }
    if (sub_19541( 1, iVar5 ))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING())
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_1493(), 0 );
                }
                if (NOT bParam1)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    return 1;
                }
                else
                {
                    DO_SCREEN_FADE_OUT_UNHACKED( uParam2 );
                    return 1;
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_19541(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2270() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2270(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2270() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2270(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2270()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2270() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2270() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1493() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1493() )))
    {
        return 0;
    }
    return 1;
}

void sub_19972()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (sub_19981())
    {
        sub_2119();
        BEGIN_CAM_COMMANDS( ref l_U592 );
        CREATE_CAM( 3, ref l_U631 );
        CREATE_CAM( 14, ref l_U627 );
        CREATE_CAM( 14, ref l_U628 );
        CREATE_CAM( 14, ref l_U629 );
        CREATE_CAM( 14, ref l_U630 );
        if (DOES_BLIP_EXIST( l_U557 ))
        {
            REMOVE_BLIP( l_U557 );
        }
        GET_CAR_COORDINATES( l_U551, ref l_U552._fU0, ref l_U552._fU4, ref l_U552._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, -200.00000000, 200.00000000, 100.00000000, ref l_U617[0]._fU0, ref l_U617[0]._fU4, ref l_U617[0]._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, 200.00000000, -200.00000000, -100.00000000, ref l_U617[1]._fU0, ref l_U617[1]._fU4, ref l_U617[1]._fU8 );
        SWITCH_ROADS_OFF( l_U617[0]._fU0, l_U617[0]._fU4, l_U617[0]._fU8, l_U617[1]._fU0, l_U617[1]._fU4, l_U617[1]._fU8 );
        GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U552._fU0, l_U552._fU4, l_U552._fU8, ref l_U552._fU0, ref l_U552._fU4, ref l_U552._fU8, ref l_U555 );
        CLEAR_AREA( l_U552._fU0, l_U552._fU4, l_U552._fU8, 200.00000000, 1 );
        SET_CAR_HEADING( l_U551, l_U555 );
        SET_CAR_COORDINATES( l_U551, l_U552._fU0, l_U552._fU4, l_U552._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, 0.00000000, 6.00000000, 0.00000000, ref l_U552._fU0, ref l_U552._fU4, ref l_U552._fU8 );
        SET_CAR_HEADING( l_U551, l_U555 );
        SET_CAR_COORDINATES( l_U551, l_U552._fU0, l_U552._fU4, l_U552._fU8 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U546 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2270() );
        if (sub_20691( ref l_U255, ref l_U552, 20.00000000, 0 ))
        {
            for ( l_U594 = 2; l_U594 <= 9; l_U594++ )
            {
                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U552._fU0, l_U552._fU4, l_U552._fU8, l_U594, ref l_U614._fU0, ref l_U614._fU4, ref l_U614._fU8, ref l_U598 );
                SET_CAR_HEADING( l_U255, l_U598 );
                SET_CAR_COORDINATES( l_U255, l_U614._fU0, l_U614._fU4, l_U614._fU8 );
                if (sub_21001( l_U255, l_U546 ))
                {
                    l_U594 = 10;
                    l_U584 = 1;
                }
            }
            if (NOT l_U584)
            {
                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U552._fU0, l_U552._fU4, l_U552._fU8, 3, ref l_U614._fU0, ref l_U614._fU4, ref l_U614._fU8, ref l_U598 );
                SET_CAR_HEADING( l_U255, l_U598 );
                SET_CAR_COORDINATES( l_U255, l_U614._fU0, l_U614._fU4, l_U614._fU8 );
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U255 ))
        {
            if (IS_VEH_DRIVEABLE( l_U255 ))
            {
                FREEZE_CAR_POSITION( l_U255, 1 );
                FREEZE_CAR_POSITION( l_U255, 0 );
            }
        }
        WARP_CHAR_INTO_CAR( l_U546, l_U551 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, -2.00000000, 0.00000000, 0.00000000, ref l_U605._fU0, ref l_U605._fU4, ref l_U605._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, -2.00000000, -10.00000000, 0.50000000, ref l_U624._fU0, ref l_U624._fU4, ref l_U624._fU8 );
        TASK_LOOK_AT_CHAR( l_U546, sub_2270(), -2, 0 );
        SET_CHAR_HEADING( sub_2270(), l_U555 );
        GET_CLOSEST_CAR_NODE( l_U624._fU0, l_U624._fU4, l_U624._fU8, ref uVar2._fU0, ref uVar2._fU4, ref l_U624._fU8 );
        SET_CHAR_COORDINATES( sub_2270(), l_U624._fU0, l_U624._fU4, l_U624._fU8 );
        OPEN_SEQUENCE_TASK( ref l_U550 );
        TASK_GO_STRAIGHT_TO_COORD( 0, l_U605._fU0, l_U605._fU4, l_U605._fU8, 2, -1 );
        CLOSE_SEQUENCE_TASK( l_U550 );
        TASK_PERFORM_SEQUENCE( sub_2270(), l_U550 );
        CLEAR_SEQUENCE_TASK( l_U550 );
        ATTACH_CAM_TO_PED( l_U629, sub_2270() );
        SET_CAM_ATTACH_OFFSET( l_U629, -1.40000000, -2.00000000, 0.70000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U629, 1 );
        POINT_CAM_AT_VEHICLE( l_U629, l_U551 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U629, 1 );
        SET_CAM_FOV( l_U629, 33.00000000 );
        if (IS_VEH_DRIVEABLE( l_U255 ))
        {
            SET_CAR_VISIBLE( l_U255, 0 );
        }
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_PROPAGATE( l_U629, 1 );
        SET_CAM_ACTIVE( l_U629, 1 );
        GET_GAME_TIMER( ref l_U590 );
        DO_SCREEN_FADE_IN_UNHACKED( 500 );
        l_U568 = 3;
        l_U582 = 1;
        GET_GAME_TIMER( ref l_U597 );
    }
    return;
}

int sub_19981()
{
    if (IS_SCREEN_FADED_OUT())
    {
        sub_10796( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_1493(), 0 );
        CLEAR_CHAR_TASKS( sub_2270() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2270(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_20691(unknown uParam0, int iParam1, float fParam2, boolean bParam3)
{
    vector vVar6;
    float fVar9;

    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    fVar9 = 0.00000000;
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_DISTANCE_BETWEEN_COORDS_3D( vVar6.x, vVar6.y, vVar6.z, iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, ref fVar9 );
            if (bParam3)
            {
                if (fVar9 >= fParam2)
                {
                    return 1;
                }
            }
            else if (fVar9 <= fParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_21001(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    vector vVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (DOES_CHAR_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    GET_CHAR_COORDINATES( uParam1, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                    GET_CAR_COORDINATES( uParam0, ref vVar7.x, ref vVar7.y, ref vVar7.z );
                    uVar10 = {vVar7 - vVar4};
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 5.00000000, 0.00000000, ref vVar13.x, ref vVar13.y, ref vVar13.z );
                    uVar16 = {vVar13 - vVar7};
                    if ((sub_21170( uVar10, uVar16 )) < 0.00000000)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

float sub_21170(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return ((uParam0._fU0 * uParam3._fU0) + (uParam0._fU4 * uParam3._fU4)) + (uParam0._fU8 * uParam3._fU8);
}

void sub_21983()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (sub_19981())
    {
        sub_2119();
        BEGIN_CAM_COMMANDS( ref l_U592 );
        CREATE_CAM( 3, ref l_U631 );
        CREATE_CAM( 14, ref l_U627 );
        CREATE_CAM( 14, ref l_U628 );
        if (DOES_BLIP_EXIST( l_U557 ))
        {
            REMOVE_BLIP( l_U557 );
        }
        GET_CAR_COORDINATES( l_U551, ref l_U552._fU0, ref l_U552._fU4, ref l_U552._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, -200.00000000, 200.00000000, 100.00000000, ref l_U617[0]._fU0, ref l_U617[0]._fU4, ref l_U617[0]._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, 200.00000000, -200.00000000, -100.00000000, ref l_U617[1]._fU0, ref l_U617[1]._fU4, ref l_U617[1]._fU8 );
        SWITCH_ROADS_OFF( l_U617[0]._fU0, l_U617[0]._fU4, l_U617[0]._fU8, l_U617[1]._fU0, l_U617[1]._fU4, l_U617[1]._fU8 );
        GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U552._fU0, l_U552._fU4, l_U552._fU8, ref l_U552._fU0, ref l_U552._fU4, ref l_U552._fU8, ref l_U555 );
        CLEAR_AREA( l_U552._fU0, l_U552._fU4, l_U552._fU8, 200.00000000, 1 );
        SET_CAR_HEADING( l_U551, l_U555 );
        SET_CAR_COORDINATES( l_U551, l_U552._fU0, l_U552._fU4, l_U552._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, 0.00000000, 6.00000000, 0.00000000, ref l_U552._fU0, ref l_U552._fU4, ref l_U552._fU8 );
        SET_CAR_HEADING( l_U551, l_U555 );
        SET_CAR_COORDINATES( l_U551, l_U552._fU0, l_U552._fU4, l_U552._fU8 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U546 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2270() );
        if (sub_20691( ref l_U255, ref l_U552, 20.00000000, 0 ))
        {
            for ( l_U594 = 2; l_U594 <= 9; l_U594++ )
            {
                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U552._fU0, l_U552._fU4, l_U552._fU8, l_U594, ref l_U614._fU0, ref l_U614._fU4, ref l_U614._fU8, ref l_U598 );
                SET_CAR_HEADING( l_U255, l_U598 );
                SET_CAR_COORDINATES( l_U255, l_U614._fU0, l_U614._fU4, l_U614._fU8 );
                if (sub_21001( l_U255, l_U546 ))
                {
                    l_U594 = 10;
                    l_U584 = 1;
                }
            }
            if (NOT l_U584)
            {
                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( l_U552._fU0, l_U552._fU4, l_U552._fU8, 3, ref l_U614._fU0, ref l_U614._fU4, ref l_U614._fU8, ref l_U598 );
                SET_CAR_HEADING( l_U255, l_U598 );
                SET_CAR_COORDINATES( l_U255, l_U614._fU0, l_U614._fU4, l_U614._fU8 );
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U255 ))
        {
            if (IS_VEH_DRIVEABLE( l_U255 ))
            {
                FREEZE_CAR_POSITION( l_U255, 1 );
                FREEZE_CAR_POSITION( l_U255, 0 );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U255 ))
        {
            SET_CAR_VISIBLE( l_U255, 0 );
        }
        WARP_CHAR_INTO_CAR( l_U546, l_U551 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, -2.00000000, 0.00000000, 0.50000000, ref l_U605._fU0, ref l_U605._fU4, ref l_U605._fU8 );
        l_U555 -= 90.00000000;
        if (l_U555 < 0.00000000)
        {
            l_U555 += 360.00000000;
        }
        SET_CHAR_HEADING( sub_2270(), l_U555 );
        GET_CLOSEST_CAR_NODE( l_U605._fU0, l_U605._fU4, l_U605._fU8, ref uVar2._fU0, ref uVar2._fU4, ref l_U605._fU8 );
        SET_CHAR_COORDINATES( sub_2270(), l_U605._fU0, l_U605._fU4, l_U605._fU8 );
        ATTACH_CAM_TO_VEHICLE( l_U627, l_U551 );
        POINT_CAM_AT_VEHICLE( l_U627, l_U551 );
        SET_CAM_ATTACH_OFFSET( l_U627, 1.80000000, 3.30000000, 0.50000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U627, 1 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U627, 1 );
        SET_CAM_POINT_OFFSET( l_U627, -0.90000000, 0.00000000, 0.50000000 );
        SET_CAM_FOV( l_U627, 45.00000000 );
        POINT_CAM_AT_VEHICLE( l_U628, l_U551 );
        ATTACH_CAM_TO_VEHICLE( l_U628, l_U551 );
        SET_CAM_ATTACH_OFFSET( l_U628, 1.30000000, 3.30000000, 0.50000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U628, 1 );
        SET_CAM_POINT_OFFSET( l_U628, -1.10000000, 0.00000000, 0.15000000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U628, 1 );
        SET_CAM_FOV( l_U628, 45.00000000 );
        SET_CAM_PROPAGATE( l_U627, 1 );
        SET_CAM_ACTIVE( l_U627, 1 );
        SET_CAM_PROPAGATE( l_U628, 0 );
        SET_CAM_ACTIVE( l_U628, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U631, l_U627, l_U628, 30000, 0 );
        SET_CAM_PROPAGATE( l_U631, 1 );
        SET_CAM_ACTIVE( l_U631, 1 );
        DO_SCREEN_FADE_IN_UNHACKED( 10 );
        GET_GAME_TIMER( ref l_U590 );
        l_U582 = 1;
        GET_GAME_TIMER( ref l_U597 );
        sub_4586( "DAVE1_CAR", ref l_U633, 7, 1 );
        l_U568 = 4;
    }
    return;
}

void sub_24309()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( l_U551 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U546 )))
        {
            UNATTACH_CAM( l_U627 );
            UNATTACH_CAM( l_U628 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U551, 0.00000000, 20.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            TASK_CAR_DRIVE_TO_COORD( l_U546, l_U551, uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000, 0, l_U556, 3, 10.00000000, -1 );
        }
    }
    return;
}

void sub_24721(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_24777( uParam0 );
        }
    }
    return;
}

void sub_24777(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U127) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            else
            {
                SET_CAR_HEALTH( (uParam0^), ProtectedGet(l_U127) );
            }
            if (ProtectedGet(l_U240) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_ENGINE_HEALTH( (uParam0^), ProtectedGet(l_U240) );
            }
            if (ProtectedGet(l_U241) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), ProtectedGet(l_U241) );
            }
        }
    }
    return;
}

void sub_25041()
{
    if (sub_1586( l_U639, l_U596 ))
    {
        sub_25075( l_U639 );
    }
    g_U24 = 83;
    sub_27818( 1.00000000 );
    CLEAR_WANTED_LEVEL( sub_1493() );
    sub_1567();
    return;
}

void sub_25075(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_863( uParam0 );
    sub_25095( uParam0 );
    sub_26840( uParam0 );
    return;
}

void sub_25095(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        sub_25137();
        break;
        case 14:
        sub_26087();
        break;
        case 15:
        sub_26386();
        break;
        default: sub_979( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_26655();
    sub_26728();
    return;
}

void sub_25137()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 13;
    uVar3 = sub_863( iVar2 );
    sub_25173( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_25813( 0 );
        break;
        default: sub_979( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_25173(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_25226( iParam0, uParam1, uParam2 );
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
        sub_25358( iParam0 + 0 );
    }
    return;
}

void sub_25226(int iParam0, int iParam1, int iParam2)
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
        sub_25358( iParam0 + 0 );
    }
    return;
}

void sub_25358(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_25389( iParam0->_fU4 )))
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

int sub_25389(unknown uParam0)
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

void sub_25813(unknown uParam0)
{
    sub_25824( uParam0 );
    return;
}

void sub_25824(unknown uParam0)
{
    ADD_SCORE( sub_1493(), uParam0 );
    sub_25849( uParam0 );
    return;
}

void sub_25849(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_979( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_26087()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 14;
    uVar3 = sub_863( iVar2 );
    sub_25173( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_25813( 500 );
        break;
        default: sub_979( "Interactions_Dave_Pass: Unknown Dave Sequence - tell Keith" );
    }
    sub_26247( 10, 0 );
    return;
}

void sub_26247(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1551[uParam0]._fU316)
    {
        if (g_U1551[uParam0]._fU184[iParam1] == 0)
        {
            sub_25173( ref g_U1551[uParam0]._fU204[iParam1], g_U1551[uParam0]._fU400, 0, 0 );
            g_U1551[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_26386()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 15;
    uVar3 = sub_863( iVar2 );
    sub_25173( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_25813( 500 );
        break;
        case 2:
        sub_25813( 0 );
        break;
        default: sub_979( "Interactions_Malc_Pass: Unknown Malc Sequence - tell Keith" );
    }
    return;
}

void sub_26655()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

void sub_26728()
{
    sub_26737();
    StrCopy( ref g_U10987, "RIPASS", 16 );
    return;
}

void sub_26737()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_26840(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_863( uParam0 );
    g_U27892[uVar3]._fU28 = 99;
    g_U27892[uVar3]._fU4 = 0;
    sub_6357( ref g_U27892[uVar3]._fU8 );
    g_U27892[uVar3]._fU24 = 0;
    sub_26913( uParam0 );
    sub_27569( uVar3 );
    return;
}

void sub_26913(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 2;
    switch (uParam0)
    {
        case 14:
        iVar3 = 0;
        break;
        case 15:
        iVar3 = 1;
        break;
        case 13: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U38821[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U38821[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_27040( 5, iVar4 );
            g_U38821[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_27040(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_27210( 0 );
    return;
}

void sub_27210(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_27455();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_27455()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_27569(unknown uParam0)
{
    g_U27892[uParam0]._fU36 = 0;
    g_U27892[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U27892[uParam0]._fU52 = 1;
    StrCopy( ref g_U27892[uParam0]._fU60, "", 16 );
    sub_27654( uParam0 );
    return;
}

void sub_27654(unknown uParam0)
{
    sub_27665( uParam0 );
    sub_27744( uParam0 );
    return;
}

void sub_27665(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U27892[uParam0]._fU56 ))
    {
        REMOVE_BLIP( g_U27892[uParam0]._fU56 );
    }
    g_U27892[uParam0]._fU56 = nil;
    return;
}

void sub_27744(unknown uParam0)
{
    g_U27892[uParam0]._fU76 = 0;
    return;
}

void sub_27818(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_27844( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_27844(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((uParam2) || (NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[1] >= 100.00000000) AND (g_U11141[0] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_28614( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

void sub_28614(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_28753( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_29407( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_29407( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_28753(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_29407(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

