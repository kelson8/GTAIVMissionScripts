void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U9 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U16 = 45;
    l_U17 = 0.00000000;
    l_U18 = -3.00000000;
    l_U19 = -3.00000000;
    l_U20 = 0.00000000;
    l_U21 = 0.00000000;
    l_U22 = 0.20000000;
    l_U23 = 65491;
    l_U24 = 45;
    l_U25 = 0;
    l_U26 = 0.00000000;
    l_U30 = 0.00000000;
    l_U31 = 0.35000000;
    l_U32 = 7.50000000;
    l_U33 = -7.50000000;
    l_U61 = 0;
    l_U62 = 0;
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0;
    l_U66 = 0;
    l_U67 = 0.00000000;
    l_U68 = 0;
    l_U69 = 0;
    l_U70 = 1;
    l_U71 = 0;
    l_U72 = 2.20000000;
    l_U73 = 0;
    l_U74 = 0;
    l_U76 = 0;
    l_U77 = 0;
    l_U82 = 0;
    l_U83 = 1;
    l_U84 = 0;
    l_U89 = -1;
    l_U90 = "CRADLE_LOOP";
    l_U119 = 2;
    l_U126 = 0;
    l_U136 = 0;
    l_U137 = 0;
    l_U139 = 0;
    l_U140 = 0;
    l_U141 = 0;
    l_U142 = {-0.50000000, 0.00000000, 0.29000000};
    l_U145 = {0.50000000, 0.00000000, 0.29000000};
    l_U148 = 3;
    l_U149 = 0;
    l_U150 = 0;
    l_U151 = 0;
    l_U152 = 0;
    l_U162 = 1;
    l_U163 = 0;
    l_U167 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_461();
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (IS_PLAYER_PLAYING( sub_828() ))
            {
                switch (l_U152)
                {
                    case 0:
                    sub_1014( l_U169 );
                    break;
                    case 1:
                    if (DOES_OBJECT_EXIST( l_U160 ))
                    {
                        GET_PLAYER_GROUP( sub_828(), ref l_U164 );
                        GET_GROUP_SIZE( l_U164, ref l_U165, ref l_U166 );
                        if (l_U166 == 0)
                        {
                            if (NOT g_U10512)
                            {
                                l_U163 = sub_1526( l_U160, ref l_U161, l_U156._fU8, l_U153._fU8, "MISSLIFT", 0 );
                                if (l_U163)
                                {
                                    sub_494( "bScopeIsOpen = TRUE", "\n" );
                                }
                            }
                        }
                    }
                    break;
                }
            }
            else
            {
                sub_461();
            }
        }
        else
        {
            sub_461();
        }
    }
    return;
}

void sub_461()
{
    sub_494( "AMBIENT_CLEANUP()", "\n" );
    if (NOT sub_511())
    {
        g_U10512 = 0;
    }
    sub_558( 2, "WClift_01" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_494(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_511()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_558(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((l_U5) AND (g_U10534 == iParam0))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_779();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_828(), 1 );
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

void sub_779()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_828()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1014(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U153 = {uParam0._fU4[0]};
    l_U156 = {uParam0._fU4[1]};
    l_U159 = uParam0._fU68[0];
    REQUEST_MODEL( 1289046123 );
    REQUEST_ANIMS( "MISSLIFT" );
    while (NOT (HAS_MODEL_LOADED( 1289046123 )))
    {
        WAIT( 0 );
    }
    l_U168 = VDIST( l_U153, 3.35950000, -747.91000000, 5.92999900 );
    if (l_U168 < 5.00000000)
    {
        l_U167 = 1;
    }
    if ((l_U167 == 1) AND (sub_511()))
    {
        CREATE_OBJECT_NO_OFFSET( 1289046123, l_U153._fU0, l_U153._fU4, l_U153._fU8, ref g_U10511, 1 );
        SET_OBJECT_HEADING( g_U10511, l_U159 );
        SET_OBJECT_PROOFS( g_U10511, 1, 1, 1, 1, 1 );
        l_U160 = g_U10511;
    }
    else
    {
        CREATE_OBJECT_NO_OFFSET( 1289046123, l_U153._fU0, l_U153._fU4, l_U153._fU8, ref l_U160, 1 );
        SET_OBJECT_HEADING( l_U160, l_U159 );
        SET_OBJECT_PROOFS( l_U160, 1, 1, 1, 1, 1 );
    }
    while (NOT (HAVE_ANIMS_LOADED( "MISSLIFT" )))
    {
        WAIT( 0 );
    }
    l_U152 = 1;
    return;
}

void sub_1526(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector vVar8;
    unknown uVar11;

    if (NOT l_U12)
    {
        l_U10 = GET_SOUND_ID();
        l_U12 = 1;
    }
    vVar8 = {0.00000000, 0.00000000, 0.29000000};
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U141)
        {
            sub_1609( uParam4, uParam1, uParam5, uParam0 );
        }
        else
        {
            sub_2280( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
            sub_3335( uParam0, uParam3, uParam2 );
            if (NOT (IS_PLAYER_TARGETTING_ANYTHING( sub_828() )))
            {
                sub_3634( uParam0 );
            }
            if (NOT (IS_CONTROL_PRESSED( 0, 23 )))
            {
                if (l_U61)
                {
                    l_U62 = 1;
                }
            }
            GET_OBJECT_COORDINATES( uParam0, ref l_U127._fU0, ref l_U127._fU4, ref l_U127._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_1654() )))
            {
                if (l_U14)
                {
                    if (NOT (IS_PED_ATTACHED_TO_OBJECT( sub_1654(), uParam0 )))
                    {
                        if (sub_5644( uParam4 ))
                        {
                            if (NOT (IS_CHAR_DEAD( sub_1654() )))
                            {
                                if (NOT l_U61)
                                {
                                    FREEZE_CHAR_POSITION( sub_1654(), 0 );
                                    CLEAR_CHAR_TASKS( sub_1654() );
                                    GET_OBJECT_HEADING( uParam0, ref uVar11 );
                                    l_U61 = 1;
                                    SET_CHAR_HEADING( sub_1654(), uVar11 );
                                    ATTACH_PED_TO_OBJECT( sub_1654(), uParam0, 0, vVar8, 0.00000000, 0.00000000, 0, 0 );
                                    TASK_PLAY_ANIM( sub_1654(), "OPERATE_LIFT_INTRO", uParam4, 8.00000000, 0, 0, 0, 1, -1 );
                                    sub_6088( uParam1, uParam0, uParam5 );
                                    l_U126 = 0;
                                }
                            }
                        }
                        else if (TIMERB() > 5000)
                        {
                            if ((l_U137) || (l_U126))
                            {
                                FREEZE_CHAR_POSITION( sub_1654(), 0 );
                                sub_6565( uParam1, uParam5 );
                                l_U150 = 1;
                            }
                        }
                    }
                    else
                    {
                        TASK_LOOK_AT_COORD( sub_1654(), 0.00000000, 0.00000000, 0.00000000, 1, 32 );
                    }
                }
            }
            if ((l_U13) || (l_U61))
            {
                if (NOT l_U13)
                {
                    sub_4624();
                }
                sub_6803( ref uParam0, uParam2, uParam3, uParam4 );
                if (NOT l_U13)
                {
                    sub_8564();
                    sub_6565( uParam1, uParam5 );
                }
            }
        }
        if ((l_U150) || (l_U62))
        {
            if ((l_U150) || (IS_CONTROL_PRESSED( 0, 23 )))
            {
                if ((l_U150) || (l_U63))
                {
                    if ((l_U150) || (l_U61))
                    {
                        l_U77 = 0;
                        l_U61 = 0;
                        l_U150 = 0;
                        if (NOT l_U150)
                        {
                            l_U148 = 0;
                        }
                        else
                        {
                            l_U148 = 2;
                        }
                        l_U126 = 0;
                        l_U136 = 0;
                        l_U137 = 0;
                        l_U82 = 0;
                        l_U6 = 0;
                        l_U141 = 1;
                        sub_779();
                        l_U151 = 0;
                    }
                }
            }
            else if (NOT l_U61)
            {
                l_U62 = 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_1654() )))
    {
        if ((IS_CHAR_PLAYING_ANIM( sub_1654(), uParam4, "GET_IN_LIFT_TOP" )) || ((IS_CHAR_PLAYING_ANIM( sub_1654(), uParam4, "operate_lift_intro" )) || ((IS_CHAR_PLAYING_ANIM( sub_1654(), uParam4, "OPERATE_LIFT_SWITCH" )) || (IS_CHAR_PLAYING_ANIM( sub_1654(), uParam4, "GET_IN_LIFT_BOTTOM" )))))
        {
            l_U149 = 1;
        }
        else
        {
            l_U149 = 0;
        }
    }
    return l_U149;
}

void sub_1609(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;

    switch (l_U148)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( sub_1654() )))
        {
            TASK_PLAY_ANIM( sub_1654(), "operate_lift_outro", uParam0, 8.00000000, 0, 0, 0, 0, -1 );
            SETTIMERA( 0 );
            l_U148 = 1;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( sub_1654() )))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_1654(), uParam0, "operate_lift_outro" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_1654(), uParam0, "operate_lift_outro", ref fVar6 );
                if (fVar6 > 0.50000000)
                {
                    l_U148 = 2;
                }
            }
            if (TIMERB() > 5000)
            {
                l_U148 = 2;
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( sub_1654() )))
        {
            SET_USE_LEG_IK( sub_828(), 0 );
            DETACH_PED( sub_1654(), 0 );
            SETTIMERA( 0 );
            sub_779();
            CLEAR_PRINTS();
            l_U93 = 0.00000000;
            sub_1986();
            l_U26 = 0.00000000;
            l_U30 = 0.00000000;
            l_U16 = 45.00000000;
            l_U17 = 0.00000000;
            l_U18 = -3.00000000;
            l_U19 = -3.00000000;
            l_U20 = 0.00000000;
            l_U21 = 0.00000000;
            sub_2129();
            sub_558( 2, "WClift_01" );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WClift_03" ))
            {
                CLEAR_HELP();
            }
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WClift_02" ))
            {
                CLEAR_HELP();
            }
            l_U14 = 0;
            l_U141 = 0;
            l_U148 = 3;
        }
        break;
    }
    return;
}

void sub_1654()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1986()
{
    if (l_U89 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U89 )))
        {
            STOP_SOUND( l_U89 );
        }
        RELEASE_SOUND_ID( l_U89 );
        l_U89 = -1;
    }
    return;
}

void sub_2129()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2280(unknown uParam0, unknown uParam1, float fParam2, float fParam3, unknown uParam4, unknown uParam5)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U120._fU0, ref l_U120._fU4, ref l_U120._fU8 );
        if (l_U120._fU8 == fParam3)
        {
            l_U119 = 0;
        }
        else if (l_U120._fU8 == fParam2)
        {
            l_U119 = 1;
        }
    }
    switch (l_U119)
    {
        case 0:
        l_U107 = {1.00000000, -0.40000000, 1.00000000};
        l_U110 = {-1.00000000, -0.40000000, -1.00000000};
        l_U113 = {-0.50000000, 0.00000000, 1.00000000};
        l_U116 = {-0.53200000, -0.85800000, -1.00000000};
        GET_OBJECT_HEADING( uParam0, ref l_U53 );
        sub_2527( uParam0, uParam1, 0, uParam4, uParam5 );
        break;
        case 1:
        l_U107 = {1.00000000, 1.40000000, 1.00000000};
        l_U110 = {-1.00000000, 1.40000000, -1.00000000};
        l_U113 = {0.50000000, -0.20000000, 1.00000000};
        l_U116 = {0.53200000, 0.85800000, -1.00000000};
        GET_OBJECT_HEADING( uParam0, ref l_U53 );
        l_U53 += 180.00000000;
        if (l_U53 > 360.00000000)
        {
            l_U53 -= 360.00000000;
        }
        sub_2527( uParam0, uParam1, 1, uParam4, uParam5 );
        break;
        case 2: break;
    }
    return;
}

void sub_2527(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    if (l_U136)
    {
        if (NOT l_U61)
        {
            if (NOT l_U126)
            {
                l_U126 = 1;
                l_U6 = 1;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U116._fU0, l_U116._fU4, l_U116._fU8, ref l_U104._fU0, ref l_U104._fU4, ref l_U104._fU8 );
                SET_CHAR_COORDINATES( sub_1654(), l_U104._fU0, l_U104._fU4, l_U104._fU8 );
                SET_CHAR_HEADING( sub_1654(), l_U53 );
                sub_2682( uParam1, uParam0, uParam4 );
                CLEAR_CHAR_TASKS( sub_1654() );
                WAIT( 0 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U113._fU0, l_U113._fU4, l_U113._fU8, ref l_U123._fU0, ref l_U123._fU4, ref l_U123._fU8 );
                if (iParam2 == 0)
                {
                    FREEZE_CHAR_POSITION( sub_1654(), 1 );
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( sub_1654(), "GET_IN_LIFT_BOTTOM", uParam3, 8.00000000, 0, 0, 0, 0, 0, 0, 1, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( sub_1654(), "GET_IN_LIFT_TOP", uParam3, 8.00000000, 0, 1, 1, 1, 0, 0, 0, -1 );
                }
                SETTIMERB( 0 );
            }
        }
    }
    return;
}

void sub_2682(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT l_U9)
        {
            BEGIN_CAM_COMMANDS( ref l_U8 );
            l_U9 = 1;
        }
        CREATE_CAM( 14, ref l_U7 );
        ATTACH_CAM_TO_OBJECT( l_U7, uParam1 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U7, 1 );
        SET_CAM_ATTACH_OFFSET( l_U7, -3.00000000, -1.00000000, 1.00000000 );
        POINT_CAM_AT_OBJECT( l_U7, uParam1 );
        SET_CAM_ACTIVE( l_U7, 1 );
        SET_CAM_PROPAGATE( l_U7, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else
    {
        CREATE_CAM( 14, uParam0 );
        ATTACH_CAM_TO_OBJECT( (uParam0^), uParam1 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( (uParam0^), 1 );
        SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -1.00000000, 1.00000000 );
        POINT_CAM_AT_OBJECT( (uParam0^), uParam1 );
        SET_CAM_ACTIVE( (uParam0^), 1 );
        SET_CAM_PROPAGATE( (uParam0^), 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    return;
}

void sub_3335(unknown uParam0, float fParam1, unknown uParam2)
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

    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 1.50000000, -1.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.00000000, 1.50000000, 1.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
    if (NOT l_U14)
    {
        if (NOT (IS_CHAR_DEAD( sub_1654() )))
        {
            if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1654(), uVar9._fU0, uVar9._fU4, uVar9._fU8, uVar12._fU0, uVar12._fU4, uVar12._fU8, 3.00000000, 0 )))
            {
                GET_OBJECT_COORDINATES( uParam0, ref l_U120._fU0, ref l_U120._fU4, ref l_U120._fU8 );
                GET_CHAR_COORDINATES( sub_1654(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (NOT (l_U120._fU8 > (uParam2 - 3.00000000)))
                {
                    if ((uVar6._fU8 - 1.50000000) < fParam1)
                    {
                        if (l_U120._fU8 > fParam1)
                        {
                            l_U13 = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_3634(unknown uParam0)
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.40000000, -1.00000000, ref l_U130._fU0, ref l_U130._fU4, ref l_U130._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.00000000, 0.40000000, 1.00000000, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U107._fU0, l_U107._fU4, l_U107._fU8, ref l_U101._fU0, ref l_U101._fU4, ref l_U101._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U110._fU0, l_U110._fU4, l_U110._fU8, ref l_U104._fU0, ref l_U104._fU4, ref l_U104._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.50000000, -1.00000000, ref l_U95._fU0, ref l_U95._fU4, ref l_U95._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 1.00000000, 0.50000000, -3.00000000, ref l_U98._fU0, ref l_U98._fU4, ref l_U98._fU8 );
    if (NOT l_U13)
    {
        if (NOT l_U14)
        {
            if (NOT (IS_CHAR_DEAD( sub_1654() )))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1654(), l_U101._fU0, l_U101._fU4, l_U101._fU8, l_U104._fU0, l_U104._fU4, l_U104._fU8, 1.00000000, 0 ))
                {
                    if ((l_U84) || (l_U83))
                    {
                        if (TIMERA() > 2000)
                        {
                            if (sub_4046( 2, 0 ))
                            {
                                l_U140 = 1;
                                if (sub_4349( 2, "WClift_01", 0 ))
                                {
                                    CLEAR_AREA( l_U130._fU0, l_U130._fU4, l_U130._fU8 + 0.75000000, 0.75000000, 1 );
                                    CLEAR_AREA( l_U130._fU0, l_U130._fU4, l_U130._fU8 - 0.75000000, 0.75000000, 1 );
                                    sub_5038();
                                    l_U136 = 1;
                                    l_U14 = 1;
                                }
                            }
                            else
                            {
                                sub_558( 2, "WClift_01" );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1654(), l_U130._fU0, l_U130._fU4, l_U130._fU8, l_U133._fU0, l_U133._fU4, l_U133._fU8, 1.00000000, 0 )))
                    {
                        sub_558( 2, "WClift_01" );
                    }
                }
                else if (NOT (IS_CHAR_DEAD( sub_1654() )))
                {
                    if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1654(), l_U130._fU0, l_U130._fU4, l_U130._fU8, l_U133._fU0, l_U133._fU4, l_U133._fU8, 1.00000000, 0 )))
                    {
                        l_U140 = 0;
                    }
                }
            }
        }
        if (NOT l_U14)
        {
            if (NOT (IS_CHAR_DEAD( sub_1654() )))
            {
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_1654(), l_U130._fU0, l_U130._fU4, l_U130._fU8, l_U133._fU0, l_U133._fU4, l_U133._fU8, 1.00000000, 0 ))
                {
                    if (TIMERA() > 2000)
                    {
                        if (NOT l_U136)
                        {
                            if (sub_4046( 2, 0 ))
                            {
                                if (sub_4349( 2, "WClift_01", 0 ))
                                {
                                    sub_5038();
                                    l_U137 = 1;
                                    l_U14 = 1;
                                }
                            }
                            else
                            {
                                sub_558( 2, "WClift_01" );
                            }
                        }
                        else
                        {
                            l_U137 = 1;
                        }
                    }
                }
                else if (NOT l_U140)
                {
                    sub_558( 2, "WClift_01" );
                }
                l_U136 = 0;
                l_U137 = 0;;
            }
        }
    }
    return;
}

int sub_4046(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_828() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_828() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_828() )))))
                {
                    if (NOT sub_4142())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1654() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_4227())
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

int sub_4142()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4227()
{
    return sub_4238( 0, 0 );
}

int sub_4238(boolean bParam0, unknown uParam1)
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

int sub_4349(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_4046( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_828(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_4624();
                l_U3 = 1;
                g_U10535 = 6;
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
                g_U10535 = 0;
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

void sub_4624()
{
    return sub_4238( 1, 1 );
}

void sub_5038()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_5644(unknown uParam0)
{
    int Result;

    Result = 0;
    if (l_U14)
    {
        if (l_U126)
        {
            if (NOT (IS_CHAR_DEAD( sub_1654() )))
            {
                if ((IS_CHAR_PLAYING_ANIM( sub_1654(), uParam0, "GET_IN_LIFT_TOP" )) || (IS_CHAR_PLAYING_ANIM( sub_1654(), uParam0, "GET_IN_LIFT_BOTTOM" )))
                {
                    l_U151 = 1;
                }
            }
            if (l_U151)
            {
                if (NOT (IS_CHAR_DEAD( sub_1654() )))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_1654(), uParam0, "GET_IN_LIFT_BOTTOM" )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_1654(), uParam0, "GET_IN_LIFT_TOP" )))
                        {
                            l_U151 = 0;
                            Result = 1;
                        }
                    }
                }
            }
        }
        else if (l_U137)
        {
            Result = 1;
        }
    }
    return Result;
}

void sub_6088(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (NOT l_U6)
    {
        if (bParam2)
        {
            if (NOT l_U9)
            {
                BEGIN_CAM_COMMANDS( ref l_U8 );
                l_U9 = 1;
            }
            CREATE_CAM( 14, ref l_U7 );
            ATTACH_CAM_TO_OBJECT( l_U7, uParam1 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U7, 1 );
            SET_CAM_ATTACH_OFFSET( l_U7, -3.00000000, -3.00000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( sub_1654() )))
            {
                POINT_CAM_AT_PED( l_U7, sub_1654() );
            }
            GET_GAME_VIEWPORT_ID( ref l_U15 );
            CLEAR_ROOM_FOR_VIEWPORT( l_U15 );
            SET_CAM_ACTIVE( l_U7, 1 );
            SET_CAM_PROPAGATE( l_U7, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        }
        else
        {
            CREATE_CAM( 14, uParam0 );
            ATTACH_CAM_TO_OBJECT( (uParam0^), uParam1 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( (uParam0^), 1 );
            SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -3.00000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( sub_1654() )))
            {
                POINT_CAM_AT_PED( (uParam0^), sub_1654() );
            }
            GET_GAME_VIEWPORT_ID( ref l_U15 );
            CLEAR_ROOM_FOR_VIEWPORT( l_U15 );
            SET_CAM_ACTIVE( (uParam0^), 1 );
            SET_CAM_PROPAGATE( (uParam0^), 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        }
    }
    else if (bParam2)
    {
        SET_CAM_ATTACH_OFFSET( l_U7, -3.00000000, -3.00000000, 0.00000000 );
    }
    else
    {
        SET_CAM_ATTACH_OFFSET( (uParam0^), -3.00000000, -3.00000000, 0.00000000 );
    }
    return;
}

void sub_6565(unknown uParam0, boolean bParam1)
{
    if (NOT (IS_CHAR_DEAD( sub_1654() )))
    {
        if (bParam1)
        {
            if (DOES_CAM_EXIST( l_U7 ))
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U7 );
                SET_CAM_BEHIND_PED( sub_1654() );
                if (l_U9)
                {
                    END_CAM_COMMANDS( ref l_U8 );
                    l_U9 = 0;
                }
            }
        }
        else if (DOES_CAM_EXIST( (uParam0^) ))
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( (uParam0^) );
            SET_CAM_BEHIND_PED( sub_1654() );
        }
    }
    return;
}

void sub_6803(unknown uParam0, float fParam1, float fParam2, unknown uParam3)
{
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    string sVar13;
    int iVar14;

    iVar14 = 1;
    l_U77 = 1;
    l_U81 = fParam1;
    GET_OBJECT_COORDINATES( (uParam0^), ref l_U78._fU0, ref l_U78._fU4, ref l_U78._fU8 );
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar6, ref iVar7, ref uVar8, ref uVar9 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref uVar6, ref iVar7 );
    }
    SET_FOLLOW_PED_PITCH_LIMIT_UP( 25.00000000 );
    SET_FOLLOW_PED_PITCH_LIMIT_DOWN( 25.00000000 );
    if ((l_U13) || ((iVar7 < 129) AND (iVar7 > 10)))
    {
        if (l_U78._fU8 > fParam2)
        {
            if (l_U93 == 0.00000000)
            {
                sub_6971( (uParam0^) );
                l_U76 = 4;
            }
            else if (l_U76 == 1)
            {
                sub_1986();
                l_U76 = 0;
            }
        }
        else
        {
            l_U13 = 0;
        }
    }
    else if ((iVar7 > 65407) AND (iVar7 < -10))
    {
        if (NOT sub_7109())
        {
            if (l_U78._fU8 < fParam1)
            {
                if (l_U93 == 0.00000000)
                {
                    sub_6971( (uParam0^) );
                    l_U76 = 1;
                }
                else if (l_U76 == 4)
                {
                    sub_1986();
                    l_U76 = 0;
                }
            }
        }
        else
        {
            sub_1986();
            l_U76 = 0;
        }
    }
    else
    {
        sub_1986();
        l_U76 = 0;
    }
    if (NOT l_U13)
    {
        if (l_U14)
        {
            if (l_U93 < 0.05000000)
            {
                fVar12 = l_U93 * 1000;
                SHAKE_PAD( 0, 5, CEIL( fVar12 ) );
            }
        }
    }
    fVar10 = fParam1 - l_U78._fU8;
    fVar11 = l_U78._fU8 - fParam2;
    if (fVar10 == 0.00000000)
    {
        l_U83 = 0;
        l_U84 = 1;
        l_U63 = 1;
        sVar13 = "WClift_03";
    }
    else if (fVar11 == 0.00000000)
    {
        l_U83 = 1;
        l_U84 = 0;
        l_U63 = 1;
        if (NOT l_U13)
        {
            if (l_U14)
            {
                sVar13 = "WClift_03";
            }
        }
    }
    else
    {
        l_U83 = 0;
        l_U84 = 0;
        sVar13 = "WClift_02";
    }
    if (NOT l_U13)
    {
        if (l_U14)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar13 )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER( sVar13 );
            }
        }
    }
    switch (l_U76)
    {
        case 0:
        if (l_U93 > 0.00000000)
        {
            l_U93 -= 0.01000000;
            SLIDE_OBJECT( (uParam0^), l_U78._fU0, l_U78._fU4, l_U94, 0.00000000, 0.00000000, l_U93, iVar14 );
        }
        l_U91 = 0;
        break;
        case 1:
        if (sub_7728( uParam3 ))
        {
            if (fVar10 > 1.00000000)
            {
                if (l_U93 < 0.11000000)
                {
                    l_U93 += 0.01000000;
                }
            }
            else if (l_U93 > 0.03000000)
            {
                l_U93 -= 0.01000000;
            }
            else
            {
                l_U93 += 0.01000000;
            }
            l_U94 = fParam1;
            if (SLIDE_OBJECT( (uParam0^), l_U78._fU0, l_U78._fU4, l_U94, 0.00000000, 0.00000000, l_U93, iVar14 ))
            {
                sub_1986();
                l_U76 = 0;
            }
        }
        break;
        case 4:
        if ((l_U13) || (sub_7728( uParam3 )))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( (uParam0^), 1.00000000, 0.50000000, -1.00000000, ref l_U95._fU0, ref l_U95._fU4, ref l_U95._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( (uParam0^), -1.00000000, 0.50000000, -3.00000000, ref l_U98._fU0, ref l_U98._fU4, ref l_U98._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_1654() )))
            {
                if (NOT (IS_CHAR_IN_ANGLED_AREA_3D( sub_1654(), l_U95._fU0, l_U95._fU4, l_U95._fU8, l_U98._fU0, l_U98._fU4, l_U98._fU8, 1.00000000, 0 )))
                {
                    if (fVar11 > 1.00000000)
                    {
                        if (l_U93 < 0.11000000)
                        {
                            l_U93 += 0.01000000;
                        }
                    }
                    else if (l_U93 > 0.03000000)
                    {
                        l_U93 -= 0.01000000;
                    }
                    else
                    {
                        l_U93 += 0.01000000;
                    }
                    l_U94 = fParam2;
                    if (SLIDE_OBJECT( (uParam0^), l_U78._fU0, l_U78._fU4, l_U94, 0.00000000, 0.00000000, l_U93, iVar14 ))
                    {
                        sub_1986();
                        l_U76 = 0;
                    }
                }
            }
        }
        break;
    }
    return;
}

void sub_6971(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U89 == -1)
        {
            l_U89 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U89, l_U90, uParam0 );
        }
    }
    return;
}

void sub_7109()
{
    int Result;

    Result = 0;
    l_U92 = nil;
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U78._fU0, l_U78._fU4, l_U78._fU8 + 4.00000000, 3.00000000, 0, 1, ref l_U92 );
    if (l_U92 != nil)
    {
        Result = 1;
    }
    return Result;
}

int sub_7728(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_DEAD( sub_1654() )))
    {
        if (l_U91)
        {
            if (IS_CHAR_PLAYING_ANIM( sub_1654(), uParam0, "OPERATE_LIFT_SWITCH" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_1654(), uParam0, "OPERATE_LIFT_SWITCH", ref fVar3 );
                if (fVar3 > 0.50000000)
                {
                    return 1;
                }
            }
            else if (NOT l_U13)
            {
                TASK_PLAY_ANIM( sub_1654(), "OPERATE_LIFT_SWITCH", uParam0, 8.00000000, 0, 0, 0, 1, -1 );
            }
        }
        else if (NOT l_U13)
        {
            TASK_PLAY_ANIM( sub_1654(), "OPERATE_LIFT_SWITCH", uParam0, 8.00000000, 0, 0, 0, 1, -1 );
        }
        l_U91 = 1;;
    }
    return 0;
}

void sub_8564()
{
    int Result;

    Result = 0;
    if (l_U78._fU8 == l_U81)
    {
        if (l_U77)
        {
            Result = 1;
        }
    }
    return Result;
}

