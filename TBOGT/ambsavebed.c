void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U64 = 0;
    l_U69 = 0;
    l_U70 = 0;
    l_U71 = 1;
    l_U72 = 0;
    l_U73 = 0;
    l_U74 = 0;
    l_U76 = 0;
    l_U86 = 0;
    l_U90 = "AMB@SAVEGAME";
    l_U91 = "";
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U78 = {l_U92._fU4[0]};
    WAIT( 0 );
    l_U75 = g_U12379;
    while (l_U71)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_180() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_223() )))
            {
                if (sub_277())
                {
                    switch (l_U69)
                    {
                        case 0:
                        sub_403();
                        break;
                        case 1:
                        sub_489();
                        break;
                        case 2:
                        sub_578();
                        break;
                        case 3:
                        sub_1483();
                        break;
                        case 4: break;
                    }
                    if (NOT l_U76)
                    {
                        sub_5988( l_U78 );
                        l_U76 = 1;
                    }
                    else if ((NOT (IS_BIT_SET( g_U10938._fU0, 4 ))) AND (NOT (l_U69 == 4)))
                    {
                        if (l_U10._fU132)
                        {
                            if ((NOT sub_713()) AND (g_U10984[l_U10._fU0]._fU0))
                            {
                                if (sub_6624())
                                {
                                    sub_6675();
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U71 = 0;
                }
            }
        }
    }
    sub_7982();
    return;
}

void sub_180()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_223()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_277()
{
    if (NOT g_U15811[7])
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            return 1;
        }
    }
    return 0;
}

void sub_403()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_223(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        if (l_U71)
        {
            REQUEST_ANIMS( l_U90 );
            REQUEST_MODEL( -809347846 );
        }
        l_U69 = 1;
    }
    return;
}

void sub_489()
{
    if ((NOT (HAS_MODEL_LOADED( -809347846 ))) AND (NOT (HAVE_ANIMS_LOADED( l_U90 ))))
    {
        REQUEST_ANIMS( l_U90 );
        REQUEST_MODEL( -809347846 );
    }
    else
    {
        l_U69 = 2;
    }
    return;
}

void sub_578()
{
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        if (g_U10984[l_U10._fU0]._fU0)
        {
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_223(), l_U10._fU8._fU0, l_U10._fU8._fU4, l_U10._fU8._fU8, l_U10._fU20._fU0, l_U10._fU20._fU4, l_U10._fU20._fU8, l_U10._fU32, 0 ))
            {
                if ((NOT sub_749()) AND ((NOT sub_713()) AND ((NOT IS_MEMORY_CARD_IN_USE()) AND ((IS_SCREEN_FADED_IN()) AND (NOT g_U12379)))))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                            PRINT_HELP_FOREVER( "BED_TRI" );
                        }
                    }
                    else if (IS_CONTROL_PRESSED( 0, 3 ))
                    {
                        if (sub_1033())
                        {
                            SET_PLAYER_CONTROL( sub_180(), 0 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            CLEAR_HELP();
                            l_U69 = 3;
                            l_U70 = 0;
                        }
                    }
                }
                else if (g_U12379)
                {
                    if (IS_PLAYER_CONTROL_ON( sub_180() ))
                    {
                        if (NOT ARE_WIDESCREEN_BORDERS_ACTIVE())
                        {
                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP_FOREVER( "BED_NOSAV" );
                            }
                        }
                        else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                        {
                            CLEAR_HELP();
                        }
                    }
                    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                    {
                        CLEAR_HELP();
                    }
                }
                else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                {
                    CLEAR_HELP();
                };;;
            }
            else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
            {
                CLEAR_HELP();
            }
        }
    }
    return;
}

int sub_713()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_749()
{
    vector vVar2;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_CHAR_DEAD( sub_223() ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_223() ))
    {
        return 1;
    }
    vVar2 = {-1719.67300000, 333.65090000, 25.78990000};
    iVar5 = 127;
    iVar6 = GET_CLOSEST_CAR( vVar2, 20.00000000, 0, iVar5 );
    if (iVar6 == nil)
    {
        return 0;
    }
    GET_CAR_COORDINATES( iVar6, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_223(), uVar7._fU0, uVar7._fU4, uVar7._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_1033()
{
    return sub_1044( 1, 1 );
}

int sub_1044(boolean bParam0, unknown uParam1)
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

void sub_1483()
{
    if (NOT (l_U70 > 5))
    {
        DISABLE_PAUSE_MENU( 1 );
    }
    if (NOT (l_U70 == 8))
    {
        sub_1033();
        sub_1532();
    }
    else
    {
        sub_1656();
    }
    switch (l_U70)
    {
        case 0:
        sub_1777();
        break;
        case 1:
        sub_1902();
        break;
        case 2:
        sub_1974();
        break;
        case 3:
        sub_3103();
        break;
        case 4:
        sub_3428();
        break;
        case 5:
        sub_3754();
        break;
        case 6:
        sub_5378();
        break;
        case 7:
        sub_5644();
        break;
        case 8:
        l_U69 = 2;
        sub_1656();
        break;
    }
    return;
}

void sub_1532()
{
    if ((g_U8867 == 4) || (g_U560 == 1))
    {
        if (g_U95._fU60 != -1)
        {
            g_U16014[g_U95._fU60]._fU212._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U95._fU376 = 0;
        g_U95._fU100 = 1;
    }
    return;
}

void sub_1656()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1777()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        GET_CHAR_COORDINATES( sub_223(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    if ((VDIST( uVar2, l_U10._fU36 )) < (VDIST( uVar2, l_U10._fU72 )))
    {
        l_U64 = 1;
    }
    else
    {
        l_U64 = 2;
    }
    l_U70 = 1;
    return;
}

void sub_1902()
{
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_223(), 0, 1 );
        REMOVE_PED_HELMET( sub_223(), 1 );
    }
    l_U70 = 2;
    return;
}

void sub_1974()
{
    unknown uVar2;
    unknown uVar3;

    l_U83 = l_U10._fU4;
    if (l_U64 == 2)
    {
        l_U83 -= 90.00000000;
        if (l_U83 < 0.00000000)
        {
            l_U83 += 360.00000000;
        }
    }
    else
    {
        l_U83 += 90.00000000;
        if (l_U83 > 360.00000000)
        {
            l_U83 -= 360.00000000;
        }
    }
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
        if (IS_VEH_DRIVEABLE( uVar2 ))
        {
            if ((LOCATE_CAR_3D( uVar2, l_U10._fU72._fU0, l_U10._fU72._fU4, l_U10._fU72._fU8, 5.00000000, 5.00000000, 1.50000000, 0 )) || (LOCATE_CAR_3D( uVar2, l_U10._fU36._fU0, l_U10._fU36._fU4, l_U10._fU36._fU8, 5.00000000, 5.00000000, 1.50000000, 0 )))
            {
                SET_CAR_COORDINATES( uVar2, l_U10._fU108._fU0, l_U10._fU108._fU4, l_U10._fU108._fU8 );
                SET_CAR_HEADING( uVar2, l_U10._fU120 );
                GET_CAR_MODEL( uVar2, ref uVar3 );
                if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                }
            }
        }
        if (l_U64 == 2)
        {
            if (NOT (DOES_OBJECT_EXIST( l_U77 )))
            {
                CREATE_OBJECT( -809347846, l_U10._fU72._fU0, l_U10._fU72._fU4, l_U10._fU72._fU8 + 1.00000000, ref l_U77, 1 );
                SET_OBJECT_COLLISION( l_U77, 0 );
                SET_OBJECT_VISIBLE( l_U77, 0 );
                FREEZE_OBJECT_POSITION( l_U77, 1 );
                SET_OBJECT_HEADING( l_U77, l_U83 );
            }
            SET_CHAR_COORDINATES( sub_223(), l_U10._fU72._fU0, l_U10._fU72._fU4, l_U10._fU72._fU8 );
        }
        else if (NOT (DOES_OBJECT_EXIST( l_U77 )))
        {
            CREATE_OBJECT( -809347846, l_U10._fU36._fU0, l_U10._fU36._fU4, l_U10._fU36._fU8 + 1.00000000, ref l_U77, 1 );
            SET_OBJECT_COLLISION( l_U77, 0 );
            SET_OBJECT_VISIBLE( l_U77, 0 );
            FREEZE_OBJECT_POSITION( l_U77, 1 );
            SET_OBJECT_HEADING( l_U77, l_U83 );
        }
        SET_CHAR_COORDINATES( sub_223(), l_U10._fU36._fU0, l_U10._fU36._fU4, l_U10._fU36._fU8 );;
        SET_CHAR_HEADING( sub_223(), l_U83 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_223() );
    }
    BEGIN_CAM_COMMANDS( ref l_U84 );
    CREATE_CAM( 14, ref l_U88 );
    if (l_U64 == 2)
    {
        SET_CAM_POS( l_U88, l_U10._fU84._fU0, l_U10._fU84._fU4, l_U10._fU84._fU8 );
        SET_CAM_ROT( l_U88, l_U10._fU96._fU0, l_U10._fU96._fU4, l_U10._fU96._fU8 );
    }
    else
    {
        SET_CAM_POS( l_U88, l_U10._fU48._fU0, l_U10._fU48._fU4, l_U10._fU48._fU8 );
        SET_CAM_ROT( l_U88, l_U10._fU60._fU0, l_U10._fU60._fU4, l_U10._fU60._fU8 );
    }
    SET_CAM_NEAR_CLIP( l_U88, 0.10000000 );
    SET_CAM_ACTIVE( l_U88, 1 );
    SET_CAM_PROPAGATE( l_U88, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (l_U10._fU128)
    {
        if (IS_PLAYER_PLAYING( sub_180() ))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( sub_223(), l_U10._fU180 );
        }
        GET_GAME_VIEWPORT_ID( ref l_U89 );
        CLEAR_ROOM_FOR_VIEWPORT( l_U89 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U89, l_U10._fU180 );
    }
    l_U70 = 3;
    GET_GAME_TIMER( ref l_U85 );
    return;
}

void sub_3103()
{
    if (l_U10._fU128)
    {
        if (IS_PLAYER_PLAYING( sub_180() ))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( sub_223(), l_U10._fU180 );
        }
        GET_GAME_VIEWPORT_ID( ref l_U89 );
        CLEAR_ROOM_FOR_VIEWPORT( l_U89 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U89, l_U10._fU180 );
    }
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        FREEZE_CHAR_POSITION( sub_223(), 1 );
        if (HAVE_ANIMS_LOADED( l_U90 ))
        {
            OPEN_SEQUENCE_TASK( ref l_U81 );
            if (l_U64 == 2)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "LIE_ON_BED_R", l_U90, 4.00000000, 0, 160 );
            }
            else
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "LIE_ON_BED_L", l_U90, 4.00000000, 0, 160 );
            }
            CLOSE_SEQUENCE_TASK( l_U81 );
            TASK_PERFORM_SEQUENCE( sub_223(), l_U81 );
            CLEAR_SEQUENCE_TASK( l_U81 );
            l_U70 = 4;
        }
        else
        {
            REQUEST_ANIMS( l_U90 );
        }
    }
    return;
}

void sub_3428()
{
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        if (IS_PLAYER_PLAYING( sub_180() ))
        {
            SET_USE_LEG_IK( sub_180(), 0 );
        }
        GET_SCRIPT_TASK_STATUS( sub_223(), 29, ref l_U82 );
        if (l_U82 == 1)
        {
            if (l_U64 == 2)
            {
                if (IS_CHAR_PLAYING_ANIM( sub_223(), l_U90, "LIE_ON_BED_R" ))
                {
                    if (HAS_CHAR_ANIM_FINISHED( sub_223(), l_U90, "LIE_ON_BED_R" ))
                    {
                        DO_SCREEN_FADE_OUT( 700 );
                        l_U70 = 5;
                    }
                }
            }
            else if (IS_CHAR_PLAYING_ANIM( sub_223(), l_U90, "LIE_ON_BED_L" ))
            {
                if (HAS_CHAR_ANIM_FINISHED( sub_223(), l_U90, "LIE_ON_BED_L" ))
                {
                    DO_SCREEN_FADE_OUT( 700 );
                    l_U70 = 5;
                }
            }
        }
        else if ((l_U82 == 2) || (l_U82 == 7))
        {
            l_U70 = 7;
        }
    }
    return;
}

void sub_3754()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        SET_USE_LEG_IK( sub_180(), 0 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        if (IS_PLAYER_PLAYING( sub_180() ))
        {
            sub_3824( 1, 1 );
            while (IS_MEMORY_CARD_IN_USE())
            {
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    SET_USE_LEG_IK( sub_180(), 0 );
                }
                WAIT( 0 );
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    SET_USE_LEG_IK( sub_180(), 0 );
                }
            }
            if (IS_PLAYER_PLAYING( sub_180() ))
            {
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    SET_USE_LEG_IK( sub_180(), 0 );
                }
                sub_4023( 1 );
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    CLEAR_WANTED_LEVEL( sub_180() );
                    CLEAR_AREA_OF_COPS( l_U78._fU0, l_U78._fU4, l_U78._fU8, 100.00000000 );
                    SET_CHAR_HEALTH( sub_223(), 200 );
                    SET_PLAYER_MOOD_NORMAL( sub_180() );
                    RESET_VISIBLE_PED_DAMAGE( sub_223() );
                }
                if (NOT g_U12379)
                {
                    sub_4265();
                    ACTIVATE_SAVE_MENU();
                }
                WAIT( 0 );
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    SET_USE_LEG_IK( sub_180(), 0 );
                }
                if (DID_SAVE_COMPLETE_SUCCESSFULLY())
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 420, 1 );
                    SET_INT_STAT( 271, 0 );
                }
            }
            if (IS_PLAYER_PLAYING( sub_180() ))
            {
                GET_CHAR_COORDINATES( sub_223(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            }
            DO_SCREEN_FADE_IN( 1000 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    SET_USE_LEG_IK( sub_180(), 0 );
                }
                WAIT( 0 );
            }
            if (IS_PLAYER_PLAYING( sub_180() ))
            {
                SET_USE_LEG_IK( sub_180(), 0 );
            }
            l_U74 = 0;
            if (DID_SAVE_COMPLETE_SUCCESSFULLY())
            {
                l_U87 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U87, l_U10._fU124, uVar2 );
                l_U74 = 1;
                if (NOT g_U9307)
                {
                    if (l_U86 < 6)
                    {
                        PRINT_HELP( "BED_INFO1" );
                        g_U9307 = 1;
                    }
                }
            }
            DISABLE_PAUSE_MENU( 0 );
            l_U70 = 6;
        }
    }
    return;
}

void sub_3824(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11061) AND (NOT g_U11062))
    {
        if (bParam0)
        {
            g_U11060 = 1;
        }
        else
        {
            g_U11059 = 1;
        }
        g_U11066 = uParam1;
    }
    return;
}

void sub_4023(boolean bParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (bParam0)
    {
        bVar3 = true;
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        if ((NOT (g_U10535 == 0)) || (NOT (g_U10534 == 0)))
        {
            StrCopy( ref g_U10536, "", 16 );
            g_U10534 = 0;
            g_U10535 = 0;
            g_U10540 = nil;
            sub_1656();
            if (IS_PLAYER_PLAYING( sub_180() ))
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_180(), 1 );
            }
        }
    }
    return;
}

void sub_4265()
{
    int iVar2;
    unknown uVar3;

    GET_TIME_OF_DAY( ref iVar2, ref uVar3 );
    l_U86 = sub_4284( 1 );
    iVar2 += l_U86;
    if (iVar2 >= 24)
    {
        iVar2 -= 24;
    }
    FORWARD_TO_TIME_OF_DAY( iVar2, uVar3 );
    return;
}

int sub_4284(boolean bParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;

    iVar4 = sub_4293();
    uVar5 = GET_CURRENT_DAY_OF_WEEK();
    iVar6 = 7 - 1;
    bVar7 = true;
    iVar8 = 0;
    sub_4396( ref iVar4, 1, 0, 3 );
    iVar8 += sub_4505( iVar4 );
    if (iVar4 == 0)
    {
        sub_4396( ref uVar5, 1, 0, 6 );
        iVar6--;
    }
    for ( I = 0; I <= iVar6; I++ )
    {
        while (bVar7)
        {
            if ((iVar8 >= 6) AND (bParam0))
            {
                return 6;
            }
            if ((sub_4673( uVar5, iVar4 )) != 0)
            {
                return iVar8 - 1;
            }
            else
            {
                sub_4396( ref iVar4, 1, 0, 3 );
                iVar8 += sub_4858( iVar4 );
                if (iVar4 == 0)
                {
                    bVar7 = false;
                }
            }
        }
        bVar7 = true;
        sub_4396( ref uVar5, 1, 0, 6 );
    }
    if (bParam0)
    {
        return 6;
    }
    return -1;
}

int sub_4293()
{
    int iVar2;

    iVar2 = GET_HOURS_OF_DAY();
    if (iVar2 < 8)
    {
        return 0;
    }
    else if (iVar2 < 12)
    {
        return 1;
    }
    else if (iVar2 < 18)
    {
        return 2;
    };;;
    return 3;
}

void sub_4396(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    boolean bVar6;

    bVar6 = true;
    (uParam0^) += iParam1;
    while (bVar6)
    {
        if ((uParam0^) > iParam3)
        {
            (uParam0^) -= (iParam3 - iParam2) + 1;
        }
        else if ((uParam0^) < iParam2)
        {
            (uParam0^) += (iParam3 - iParam2) + 1;
        }
        else
        {
            bVar6 = false;
        }
    }
    return;
}

int sub_4505(unknown uParam0)
{
    int iVar3;

    iVar3 = GET_HOURS_OF_DAY();
    switch (uParam0)
    {
        case 0:
        return 24 - iVar3;
        break;
        case 1:
        return 8 - iVar3;
        break;
        case 2:
        return 12 - iVar3;
        break;
    }
    return 18 - iVar3;
}

int sub_4673(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U469[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

int sub_4858(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 8;
        break;
        case 2:
        return 4;
        break;
    }
    return 6;
}

void sub_5378()
{
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        SET_USE_LEG_IK( sub_180(), 0 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_PLAYER_PLAYING( sub_180() ))
        {
            if (HAVE_ANIMS_LOADED( l_U90 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U81 );
                if (l_U64 == 2)
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GET_OUT_BED_R", l_U90, 1000.00000000, 0, 200 );
                }
                else
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GET_OUT_BED_L", l_U90, 1000.00000000, 0, 200 );
                }
                CLOSE_SEQUENCE_TASK( l_U81 );
                TASK_PERFORM_SEQUENCE( sub_223(), l_U81 );
                CLEAR_SEQUENCE_TASK( l_U81 );
                l_U70 = 7;
            }
            else
            {
                REQUEST_ANIMS( l_U90 );
            }
        }
    }
    return;
}

void sub_5644()
{
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        GET_SCRIPT_TASK_STATUS( sub_223(), 29, ref l_U82 );
        if ((l_U82 == 2) || (l_U82 == 7))
        {
            if (l_U74)
            {
                STOP_SOUND( l_U87 );
                RELEASE_SOUND_ID( l_U87 );
                l_U74 = 0;
            }
            FREEZE_CHAR_POSITION( sub_223(), 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U88 );
            END_CAM_COMMANDS( ref l_U84 );
            if (NOT (l_U64 == 2))
            {
                SET_CHAR_COORDINATES( sub_223(), -433.02080000, 1396.66400000, 15.45670000 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (IS_PLAYER_PLAYING( sub_180() ))
            {
                SET_CAM_BEHIND_PED( sub_223() );
                SET_PLAYER_CONTROL( sub_180(), 1 );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            sub_1656();
            l_U70 = 8;
        }
        else
        {
            SET_USE_LEG_IK( sub_180(), 0 );
        }
    }
    return;
}

void sub_5988(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;
    float fVar7;
    float fVar8;
    boolean bVar9;
    vector[1] vVar10;
    unknown uVar12;
    unknown uVar13;
    int iVar14;

    iVar6 = 99;
    fVar7 = 1E8;
    bVar9 = false;
    array(ref vVar10, 1);
    vVar10[0] = {-1719.84100000, 333.77370000, 25.78990000};
    iVar14 = 1;
    for ( I = 0; I < iVar14; I++ )
    {
        fVar8 = VDIST( uParam0, vVar10[I] );
        if (fVar8 < fVar7)
        {
            iVar6 = I;
            fVar7 = fVar8;
            bVar9 = true;
        }
    }
    if (bVar9)
    {
        sub_6125( iVar6 );
    }
    return;
}

void sub_6125(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 0:
        l_U10._fU212 = "LUIS_HOUSE_SAVE";
        l_U10._fU0 = 0;
        l_U10._fU4 = 180.00000000;
        l_U10._fU8 = {-429.16400000, 1396.80000000, 14.95700000};
        l_U10._fU20 = {-429.16400000, 1398.90800000, 16.95700000};
        l_U10._fU32 = 3.40000000;
        l_U10._fU36 = {-432.68300000, 1397.32200000, 15.47700000};
        l_U10._fU48 = {-431.84390000, 1394.66000000, 18.61357000};
        l_U10._fU60 = {-45.77263000, 0.00000100, -13.37010000};
        l_U10._fU72 = {-429.20800000, 1397.26100000, 15.46500000};
        l_U10._fU84 = {-429.57360000, 1394.87100000, 18.02440000};
        l_U10._fU96 = {-40.66606000, -0.00000000, 28.37296000};
        l_U10._fU108 = {-445.62430000, 1381.20300000, 14.96330000};
        l_U10._fU120 = 87.06150000;
        l_U10._fU124 = "ALARM_CLOCK_MECH_MULTI";
        l_U10._fU128 = 0;
        l_U10._fU132 = 0;
        l_U10._fU136 = 0;
        l_U10._fU172 = 0;
        l_U10._fU180 = "E2_luisapartment";
        break;
        default:
    }
    return;
}

int sub_6624()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

void sub_6675()
{
    unknown uVar2;

    if (l_U75 == 0)
    {
        if (NOT l_U73)
        {
            if (g_U12379)
            {
                l_U73 = 1;
            }
        }
    }
    else if (NOT g_U12379)
    {
        l_U75 = 0;
    }
    if (IS_PLAYER_PLAYING( sub_180() ))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_223(), l_U10._fU184._fU0, l_U10._fU184._fU4, l_U10._fU184._fU8, 1.20000000, 1.20000000, 1.60000000, 1 ))
        {
            if (NOT l_U72)
            {
                l_U72 = 1;
            }
            else if (NOT IS_SCREEN_FADING())
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )))
                {
                    CLEAR_HELP();
                }
                l_U72 = 0;
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    CLEAR_CHAR_TASKS( sub_223() );
                    SET_PLAYER_CONTROL( sub_180(), 0 );
                }
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    CLEAR_AREA( l_U10._fU156._fU0, l_U10._fU156._fU4, l_U10._fU156._fU8, 4.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_223(), l_U10._fU156._fU0, l_U10._fU156._fU4, l_U10._fU156._fU8 );
                    if (l_U10._fU136)
                    {
                        SET_ROOM_FOR_CHAR_BY_NAME( sub_223(), l_U10._fU140 );
                    }
                    SET_CHAR_HEADING( sub_223(), l_U10._fU168 );
                    SET_CAM_BEHIND_PED( sub_223() );
                    LOAD_SCENE( l_U10._fU156._fU0, l_U10._fU156._fU4, l_U10._fU156._fU8 );
                }
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    SET_PLAYER_CONTROL( sub_180(), 1 );
                }
                DO_SCREEN_FADE_IN( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_223(), l_U10._fU144._fU0, l_U10._fU144._fU4, l_U10._fU144._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
        {
            if (NOT IS_SCREEN_FADING())
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )))
                {
                    CLEAR_HELP();
                }
                l_U72 = 0;
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    CLEAR_CHAR_TASKS( sub_223() );
                    SET_PLAYER_CONTROL( sub_180(), 0 );
                }
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    CLEAR_AREA( l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8, 4.00000000, 1 );
                    if (IS_CHAR_IN_ANY_CAR( sub_223() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_223(), l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_223(), l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8 );
                    }
                    SET_ROOM_FOR_CHAR_BY_NAME( sub_223(), l_U10._fU180 );
                    SET_CHAR_HEADING( sub_223(), l_U10._fU208 );
                    SET_CAM_BEHIND_PED( sub_223() );
                    LOAD_SCENE( l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8 );
                    GET_GAME_VIEWPORT_ID( ref l_U89 );
                    if (l_U10._fU172)
                    {
                        REQUEST_INTERIOR_MODELS( l_U10._fU176, l_U10._fU180 );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U89, l_U10._fU180 );
                    }
                }
                uVar2 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( uVar2, "SAFEHOUSE_LIFT_TONE", l_U10._fU184 );
                RELEASE_SOUND_ID( uVar2 );
                if (IS_PLAYER_PLAYING( sub_180() ))
                {
                    CLEAR_CHAR_TASKS( sub_223() );
                    SET_PLAYER_CONTROL( sub_180(), 1 );
                }
                DO_SCREEN_FADE_IN( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (l_U72)
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )))
            {
                CLEAR_HELP();
            }
            l_U72 = 0;
        };;;
    }
    return;
}

void sub_7982()
{
    REMOVE_ANIMS( l_U90 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -809347846 );
    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))))
    {
        CLEAR_HELP();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

