void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U64 = 0;
    l_U65 = 0;
    l_U66 = 0;
    l_U67 = 0;
    l_U68 = 0;
    l_U69 = 0;
    l_U71 = -1;
    l_U183 = 15.00000000;
    l_U184 = 35.00000000;
    l_U185 = 16.00000000;
    l_U186 = 0.00000000;
    l_U192 = 1000.00000000;
    l_U193 = 7500.00000000;
    l_U202 = 1;
    l_U203 = 30.00000000;
    l_U204 = 30.00000000;
    l_U205 = 2.00000000;
    l_U215 = 0.00000000;
    l_U216 = 0.00000000;
    l_U228 = 1;
    l_U229 = 0;
    l_U230 = -1;
    l_U231 = 1;
    l_U232 = -1;
    l_U233 = -1;
    l_U234 = 15.00000000;
    l_U261 = 0;
    l_U262 = -1949702649;
    l_U263 = 2075870698;
    l_U268 = 0.12000000;
    l_U279 = 0;
    l_U280 = 0;
    l_U281 = 1;
    l_U282 = 0;
    l_U283 = 0;
    l_U284 = 0;
    l_U286 = 0;
    l_U296 = 0;
    l_U300 = "AMB@SAVEGAME";
    l_U301 = "";
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U288 = {l_U302._fU4[0]};
    WAIT( 0 );
    l_U285 = g_U12303;
    while (l_U281)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_414() ))
        {
            if (NOT (IS_CHAR_DEAD( sub_457() )))
            {
                if (sub_511())
                {
                    switch (l_U279)
                    {
                        case 0:
                        sub_637();
                        break;
                        case 1:
                        sub_723();
                        break;
                        case 2:
                        sub_812();
                        break;
                        case 3:
                        sub_1717();
                        break;
                        case 4: break;
                    }
                    if (NOT l_U286)
                    {
                        sub_6181( l_U288 );
                        l_U286 = 1;
                    }
                    else if ((NOT (IS_BIT_SET( g_U10959._fU0, 4 ))) AND (NOT (l_U279 == 4)))
                    {
                        if (l_U10._fU132)
                        {
                            if ((NOT sub_947()) AND (g_U11005[l_U10._fU0]._fU0))
                            {
                                if (sub_7209())
                                {
                                    sub_7260();
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U281 = 0;
                }
            }
        }
    }
    sub_8567();
    return;
}

void sub_414()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_457()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_511()
{
    if (NOT g_U15728[14])
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            return 1;
        }
    }
    return 0;
}

void sub_637()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_457(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        if (l_U281)
        {
            REQUEST_ANIMS( l_U300 );
            REQUEST_MODEL( -809347846 );
        }
        l_U279 = 1;
    }
    return;
}

void sub_723()
{
    if ((NOT (HAS_MODEL_LOADED( -809347846 ))) AND (NOT (HAVE_ANIMS_LOADED( l_U300 ))))
    {
        REQUEST_ANIMS( l_U300 );
        REQUEST_MODEL( -809347846 );
    }
    else
    {
        l_U279 = 2;
    }
    return;
}

void sub_812()
{
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        if (g_U11005[l_U10._fU0]._fU0)
        {
            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_457(), l_U10._fU8._fU0, l_U10._fU8._fU4, l_U10._fU8._fU8, l_U10._fU20._fU0, l_U10._fU20._fU4, l_U10._fU20._fU8, l_U10._fU32, 0 ))
            {
                if ((NOT sub_983()) AND ((NOT sub_947()) AND ((NOT IS_MEMORY_CARD_IN_USE()) AND ((IS_SCREEN_FADED_IN()) AND (NOT g_U12303)))))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_INFO1" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                            PRINT_HELP_FOREVER( "BED_TRI" );
                        }
                    }
                    else if (IS_CONTROL_PRESSED( 2, 3 ))
                    {
                        if (sub_1267())
                        {
                            SET_PLAYER_CONTROL( sub_414(), 0 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            CLEAR_HELP();
                            l_U279 = 3;
                            l_U280 = 0;
                        }
                    }
                }
                else if (g_U12303)
                {
                    if (IS_PLAYER_CONTROL_ON( sub_414() ))
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

int sub_947()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_983()
{
    vector vVar2;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_CHAR_DEAD( sub_457() ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_457() ))
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
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_457(), uVar7._fU0, uVar7._fU4, uVar7._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_1267()
{
    return sub_1278( 1, 1 );
}

int sub_1278(boolean bParam0, unknown uParam1)
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

void sub_1717()
{
    if (NOT (l_U280 > 5))
    {
        DISABLE_PAUSE_MENU( 1 );
    }
    if (NOT (l_U280 == 8))
    {
        sub_1267();
        sub_1766();
    }
    else
    {
        sub_1890();
    }
    switch (l_U280)
    {
        case 0:
        sub_2011();
        break;
        case 1:
        sub_2136();
        break;
        case 2:
        sub_2208();
        break;
        case 3:
        sub_3337();
        break;
        case 4:
        sub_3662();
        break;
        case 5:
        sub_3988();
        break;
        case 6:
        sub_5612();
        break;
        case 7:
        sub_5878();
        break;
        case 8:
        l_U279 = 2;
        sub_1890();
        break;
    }
    return;
}

void sub_1766()
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

void sub_1890()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_2011()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        GET_CHAR_COORDINATES( sub_457(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    if ((VDIST( uVar2, l_U10._fU36 )) < (VDIST( uVar2, l_U10._fU72 )))
    {
        l_U64 = 1;
    }
    else
    {
        l_U64 = 2;
    }
    l_U280 = 1;
    return;
}

void sub_2136()
{
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_457(), 0, 1 );
        REMOVE_PED_HELMET( sub_457(), 1 );
    }
    l_U280 = 2;
    return;
}

void sub_2208()
{
    unknown uVar2;
    unknown uVar3;

    l_U293 = l_U10._fU4;
    if (l_U64 == 2)
    {
        l_U293 -= 90.00000000;
        if (l_U293 < 0.00000000)
        {
            l_U293 += 360.00000000;
        }
    }
    else
    {
        l_U293 += 90.00000000;
        if (l_U293 > 360.00000000)
        {
            l_U293 -= 360.00000000;
        }
    }
    if (IS_PLAYER_PLAYING( sub_414() ))
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
            if (NOT (DOES_OBJECT_EXIST( l_U287 )))
            {
                CREATE_OBJECT( -809347846, l_U10._fU72._fU0, l_U10._fU72._fU4, l_U10._fU72._fU8 + 1.00000000, ref l_U287, 1 );
                SET_OBJECT_COLLISION( l_U287, 0 );
                SET_OBJECT_VISIBLE( l_U287, 0 );
                FREEZE_OBJECT_POSITION( l_U287, 1 );
                SET_OBJECT_HEADING( l_U287, l_U293 );
            }
            SET_CHAR_COORDINATES( sub_457(), l_U10._fU72._fU0, l_U10._fU72._fU4, l_U10._fU72._fU8 );
        }
        else if (NOT (DOES_OBJECT_EXIST( l_U287 )))
        {
            CREATE_OBJECT( -809347846, l_U10._fU36._fU0, l_U10._fU36._fU4, l_U10._fU36._fU8 + 1.00000000, ref l_U287, 1 );
            SET_OBJECT_COLLISION( l_U287, 0 );
            SET_OBJECT_VISIBLE( l_U287, 0 );
            FREEZE_OBJECT_POSITION( l_U287, 1 );
            SET_OBJECT_HEADING( l_U287, l_U293 );
        }
        SET_CHAR_COORDINATES( sub_457(), l_U10._fU36._fU0, l_U10._fU36._fU4, l_U10._fU36._fU8 );;
        SET_CHAR_HEADING( sub_457(), l_U293 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_BEHIND_PED( sub_457() );
    }
    BEGIN_CAM_COMMANDS( ref l_U294 );
    CREATE_CAM( 14, ref l_U298 );
    if (l_U64 == 2)
    {
        SET_CAM_POS( l_U298, l_U10._fU84._fU0, l_U10._fU84._fU4, l_U10._fU84._fU8 );
        SET_CAM_ROT( l_U298, l_U10._fU96._fU0, l_U10._fU96._fU4, l_U10._fU96._fU8 );
    }
    else
    {
        SET_CAM_POS( l_U298, l_U10._fU48._fU0, l_U10._fU48._fU4, l_U10._fU48._fU8 );
        SET_CAM_ROT( l_U298, l_U10._fU60._fU0, l_U10._fU60._fU4, l_U10._fU60._fU8 );
    }
    SET_CAM_NEAR_CLIP( l_U298, 0.10000000 );
    SET_CAM_ACTIVE( l_U298, 1 );
    SET_CAM_PROPAGATE( l_U298, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (l_U10._fU128)
    {
        if (IS_PLAYER_PLAYING( sub_414() ))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( sub_457(), l_U10._fU180 );
        }
        GET_GAME_VIEWPORT_ID( ref l_U299 );
        CLEAR_ROOM_FOR_VIEWPORT( l_U299 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U299, l_U10._fU180 );
    }
    l_U280 = 3;
    GET_GAME_TIMER( ref l_U295 );
    return;
}

void sub_3337()
{
    if (l_U10._fU128)
    {
        if (IS_PLAYER_PLAYING( sub_414() ))
        {
            SET_ROOM_FOR_CHAR_BY_NAME( sub_457(), l_U10._fU180 );
        }
        GET_GAME_VIEWPORT_ID( ref l_U299 );
        CLEAR_ROOM_FOR_VIEWPORT( l_U299 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U299, l_U10._fU180 );
    }
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        FREEZE_CHAR_POSITION( sub_457(), 1 );
        if (HAVE_ANIMS_LOADED( l_U300 ))
        {
            OPEN_SEQUENCE_TASK( ref l_U291 );
            if (l_U64 == 2)
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "LIE_ON_BED_R", l_U300, 4.00000000, 0, 160 );
            }
            else
            {
                TASK_PLAY_ANIM_WITH_FLAGS( 0, "LIE_ON_BED_L", l_U300, 4.00000000, 0, 160 );
            }
            CLOSE_SEQUENCE_TASK( l_U291 );
            TASK_PERFORM_SEQUENCE( sub_457(), l_U291 );
            CLEAR_SEQUENCE_TASK( l_U291 );
            l_U280 = 4;
        }
        else
        {
            REQUEST_ANIMS( l_U300 );
        }
    }
    return;
}

void sub_3662()
{
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        if (IS_PLAYER_PLAYING( sub_414() ))
        {
            SET_USE_LEG_IK( sub_414(), 0 );
        }
        GET_SCRIPT_TASK_STATUS( sub_457(), 29, ref l_U292 );
        if (l_U292 == 1)
        {
            if (l_U64 == 2)
            {
                if (IS_CHAR_PLAYING_ANIM( sub_457(), l_U300, "LIE_ON_BED_R" ))
                {
                    if (HAS_CHAR_ANIM_FINISHED( sub_457(), l_U300, "LIE_ON_BED_R" ))
                    {
                        DO_SCREEN_FADE_OUT( 700 );
                        l_U280 = 5;
                    }
                }
            }
            else if (IS_CHAR_PLAYING_ANIM( sub_457(), l_U300, "LIE_ON_BED_L" ))
            {
                if (HAS_CHAR_ANIM_FINISHED( sub_457(), l_U300, "LIE_ON_BED_L" ))
                {
                    DO_SCREEN_FADE_OUT( 700 );
                    l_U280 = 5;
                }
            }
        }
        else if ((l_U292 == 2) || (l_U292 == 7))
        {
            l_U280 = 7;
        }
    }
    return;
}

void sub_3988()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        SET_USE_LEG_IK( sub_414(), 0 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        if (IS_PLAYER_PLAYING( sub_414() ))
        {
            sub_4058( 1, 1 );
            while (IS_MEMORY_CARD_IN_USE())
            {
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    SET_USE_LEG_IK( sub_414(), 0 );
                }
                WAIT( 0 );
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    SET_USE_LEG_IK( sub_414(), 0 );
                }
            }
            if (IS_PLAYER_PLAYING( sub_414() ))
            {
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    SET_USE_LEG_IK( sub_414(), 0 );
                }
                sub_4257( 1 );
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    CLEAR_WANTED_LEVEL( sub_414() );
                    CLEAR_AREA_OF_COPS( l_U288._fU0, l_U288._fU4, l_U288._fU8, 100.00000000 );
                    SET_CHAR_HEALTH( sub_457(), 200 );
                    SET_PLAYER_MOOD_NORMAL( sub_414() );
                    RESET_VISIBLE_PED_DAMAGE( sub_457() );
                }
                if (NOT g_U12303)
                {
                    sub_4499();
                    ACTIVATE_SAVE_MENU();
                }
                WAIT( 0 );
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    SET_USE_LEG_IK( sub_414(), 0 );
                }
                if (DID_SAVE_COMPLETE_SUCCESSFULLY())
                {
                    INCREMENT_INT_STAT_NO_MESSAGE( 420, 1 );
                    SET_INT_STAT( 271, 0 );
                }
            }
            if (IS_PLAYER_PLAYING( sub_414() ))
            {
                GET_CHAR_COORDINATES( sub_457(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            }
            DO_SCREEN_FADE_IN( 1000 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    SET_USE_LEG_IK( sub_414(), 0 );
                }
                WAIT( 0 );
            }
            if (IS_PLAYER_PLAYING( sub_414() ))
            {
                SET_USE_LEG_IK( sub_414(), 0 );
            }
            l_U284 = 0;
            if (DID_SAVE_COMPLETE_SUCCESSFULLY())
            {
                l_U297 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U297, l_U10._fU124, uVar2 );
                l_U284 = 1;
                if (NOT g_U9258)
                {
                    if (l_U296 < 6)
                    {
                        PRINT_HELP( "BED_INFO1" );
                        g_U9258 = 1;
                    }
                }
            }
            DISABLE_PAUSE_MENU( 0 );
            l_U280 = 6;
        }
    }
    return;
}

void sub_4058(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11093) AND (NOT g_U11094))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_4257(boolean bParam0)
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
        if ((NOT (g_U10469 == 0)) || (NOT (g_U10468 == 0)))
        {
            StrCopy( ref g_U10470, "", 16 );
            g_U10468 = 0;
            g_U10469 = 0;
            g_U10474 = nil;
            sub_1890();
            if (IS_PLAYER_PLAYING( sub_414() ))
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_414(), 1 );
            }
        }
    }
    return;
}

void sub_4499()
{
    int iVar2;
    unknown uVar3;

    GET_TIME_OF_DAY( ref iVar2, ref uVar3 );
    l_U296 = sub_4518( 1 );
    iVar2 += l_U296;
    if (iVar2 >= 24)
    {
        iVar2 -= 24;
    }
    FORWARD_TO_TIME_OF_DAY( iVar2, uVar3 );
    return;
}

int sub_4518(boolean bParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;

    iVar4 = sub_4527();
    uVar5 = GET_CURRENT_DAY_OF_WEEK();
    iVar6 = 7 - 1;
    bVar7 = true;
    iVar8 = 0;
    sub_4630( ref iVar4, 1, 0, 3 );
    iVar8 += sub_4739( iVar4 );
    if (iVar4 == 0)
    {
        sub_4630( ref uVar5, 1, 0, 6 );
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
            if ((sub_4907( uVar5, iVar4 )) != 0)
            {
                return iVar8 - 1;
            }
            else
            {
                sub_4630( ref iVar4, 1, 0, 3 );
                iVar8 += sub_5092( iVar4 );
                if (iVar4 == 0)
                {
                    bVar7 = false;
                }
            }
        }
        bVar7 = true;
        sub_4630( ref uVar5, 1, 0, 6 );
    }
    if (bParam0)
    {
        return 6;
    }
    return -1;
}

int sub_4527()
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

void sub_4630(unknown uParam0, int iParam1, int iParam2, int iParam3)
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

int sub_4739(unknown uParam0)
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

int sub_4907(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U468[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

int sub_5092(unknown uParam0)
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

void sub_5612()
{
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        SET_USE_LEG_IK( sub_414(), 0 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_PLAYER_PLAYING( sub_414() ))
        {
            if (HAVE_ANIMS_LOADED( l_U300 ))
            {
                OPEN_SEQUENCE_TASK( ref l_U291 );
                if (l_U64 == 2)
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GET_OUT_BED_R", l_U300, 1000.00000000, 0, 200 );
                }
                else
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "GET_OUT_BED_L", l_U300, 1000.00000000, 0, 200 );
                }
                CLOSE_SEQUENCE_TASK( l_U291 );
                TASK_PERFORM_SEQUENCE( sub_457(), l_U291 );
                CLEAR_SEQUENCE_TASK( l_U291 );
                l_U280 = 7;
            }
            else
            {
                REQUEST_ANIMS( l_U300 );
            }
        }
    }
    return;
}

void sub_5878()
{
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        GET_SCRIPT_TASK_STATUS( sub_457(), 29, ref l_U292 );
        if ((l_U292 == 2) || (l_U292 == 7))
        {
            if (l_U284)
            {
                STOP_SOUND( l_U297 );
                RELEASE_SOUND_ID( l_U297 );
                l_U284 = 0;
            }
            FREEZE_CHAR_POSITION( sub_457(), 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U298 );
            END_CAM_COMMANDS( ref l_U294 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (IS_PLAYER_PLAYING( sub_414() ))
            {
                SET_CAM_BEHIND_PED( sub_457() );
                SET_PLAYER_CONTROL( sub_414(), 1 );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            sub_1890();
            l_U280 = 8;
        }
        else
        {
            SET_USE_LEG_IK( sub_414(), 0 );
        }
    }
    return;
}

void sub_6181(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;
    float fVar7;
    float fVar8;
    boolean bVar9;
    vector[2] vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    iVar6 = 99;
    fVar7 = 1E8;
    bVar9 = false;
    array(ref vVar10, 2);
    vVar10[0] = {-1719.84100000, 333.77370000, 25.78990000};
    vVar10[1] = {-1953.86000000, -76.33110000, 10.60870000};
    for ( I = 0; I < 2; I++ )
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
        sub_6336( iVar6 );
    }
    return;
}

void sub_6336(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 0:
        l_U10._fU212 = "CLUBHOUSE_SAVE";
        l_U10._fU0 = 0;
        l_U10._fU4 = 70.00000000;
        l_U10._fU8 = {-1717.25700000, 333.68700000, 25.33700000};
        l_U10._fU20 = {-1721.02200000, 336.10700000, 27.68500000};
        l_U10._fU32 = 3.26300000;
        l_U10._fU36 = {0.00000000, 0.00000000, 0.00000000};
        l_U10._fU48 = {-1723.14000000, 333.60960000, 28.24958000};
        l_U10._fU60 = {-37.19597000, 0.00000000, -88.37029000};
        l_U10._fU72 = {-1720.67000000, 332.51100000, 25.34160000};
        l_U10._fU84 = {-1723.14000000, 333.60960000, 28.24958000};
        l_U10._fU96 = {-37.19597000, 0.00000000, -88.37029000};
        l_U10._fU108 = {-1712.71800000, 364.27030000, 24.33250000};
        l_U10._fU120 = 231.00000000;
        l_U10._fU124 = "ALARM_CLOCK_MECH_MULTI";
        l_U10._fU128 = 0;
        l_U10._fU132 = 0;
        l_U10._fU136 = 0;
        l_U10._fU172 = 0;
        l_U10._fU180 = "E1_Lost_grndsave";
        break;
        case 1:
        l_U10._fU212 = "BRIAN_SAVE";
        l_U10._fU0 = 1;
        l_U10._fU4 = 352.86940000;
        l_U10._fU8 = {-1952.26500000, -74.45200000, 10.19600000};
        l_U10._fU20 = {-1955.37600000, -74.15000000, 13.35000000};
        l_U10._fU32 = 4.39400000;
        l_U10._fU36 = {-1952.38400000, -76.79200000, 10.37100000};
        l_U10._fU48 = {-1952.62300000, -73.10326000, 13.37738000};
        l_U10._fU60 = {-34.95442000, 0.00000000, 154.82740000};
        l_U10._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U10._fU84 = {-1952.62300000, -73.10326000, 13.37738000};
        l_U10._fU96 = {-34.95442000, 0.00000000, 154.82740000};
        l_U10._fU108 = {-1950.37800000, -88.40760000, 5.64120000};
        l_U10._fU120 = 270.00000000;
        l_U10._fU124 = "ALARM_CLOCK_MECH_MULTI";
        l_U10._fU128 = 1;
        l_U10._fU132 = 0;
        l_U10._fU136 = 0;
        l_U10._fU172 = 0;
        l_U10._fU180 = "E1_HouseBed3";
        break;
    }
    return;
}

int sub_7209()
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

void sub_7260()
{
    unknown uVar2;

    if (l_U285 == 0)
    {
        if (NOT l_U283)
        {
            if (g_U12303)
            {
                l_U283 = 1;
            }
        }
    }
    else if (NOT g_U12303)
    {
        l_U285 = 0;
    }
    if (IS_PLAYER_PLAYING( sub_414() ))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_457(), l_U10._fU184._fU0, l_U10._fU184._fU4, l_U10._fU184._fU8, 1.20000000, 1.20000000, 1.60000000, 1 ))
        {
            if (NOT l_U282)
            {
                l_U282 = 1;
            }
            else if (NOT IS_SCREEN_FADING())
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )))
                {
                    CLEAR_HELP();
                }
                l_U282 = 0;
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    CLEAR_CHAR_TASKS( sub_457() );
                    SET_PLAYER_CONTROL( sub_414(), 0 );
                }
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    CLEAR_AREA( l_U10._fU156._fU0, l_U10._fU156._fU4, l_U10._fU156._fU8, 4.00000000, 1 );
                    SET_CHAR_COORDINATES( sub_457(), l_U10._fU156._fU0, l_U10._fU156._fU4, l_U10._fU156._fU8 );
                    if (l_U10._fU136)
                    {
                        SET_ROOM_FOR_CHAR_BY_NAME( sub_457(), l_U10._fU140 );
                    }
                    SET_CHAR_HEADING( sub_457(), l_U10._fU168 );
                    SET_CAM_BEHIND_PED( sub_457() );
                    LOAD_SCENE( l_U10._fU156._fU0, l_U10._fU156._fU4, l_U10._fU156._fU8 );
                }
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    SET_PLAYER_CONTROL( sub_414(), 1 );
                }
                DO_SCREEN_FADE_IN( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_457(), l_U10._fU144._fU0, l_U10._fU144._fU4, l_U10._fU144._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
        {
            if (NOT IS_SCREEN_FADING())
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )))
                {
                    CLEAR_HELP();
                }
                l_U282 = 0;
                DO_SCREEN_FADE_OUT( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    CLEAR_CHAR_TASKS( sub_457() );
                    SET_PLAYER_CONTROL( sub_414(), 0 );
                }
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    CLEAR_AREA( l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8, 4.00000000, 1 );
                    if (IS_CHAR_IN_ANY_CAR( sub_457() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_457(), l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_457(), l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8 );
                    }
                    SET_ROOM_FOR_CHAR_BY_NAME( sub_457(), l_U10._fU180 );
                    SET_CHAR_HEADING( sub_457(), l_U10._fU208 );
                    SET_CAM_BEHIND_PED( sub_457() );
                    LOAD_SCENE( l_U10._fU196._fU0, l_U10._fU196._fU4, l_U10._fU196._fU8 );
                    GET_GAME_VIEWPORT_ID( ref l_U299 );
                    if (l_U10._fU172)
                    {
                        REQUEST_INTERIOR_MODELS( l_U10._fU176, l_U10._fU180 );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U299, l_U10._fU180 );
                    }
                }
                uVar2 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( uVar2, "SAFEHOUSE_LIFT_TONE", l_U10._fU184 );
                RELEASE_SOUND_ID( uVar2 );
                if (IS_PLAYER_PLAYING( sub_414() ))
                {
                    CLEAR_CHAR_TASKS( sub_457() );
                    SET_PLAYER_CONTROL( sub_414(), 1 );
                }
                DO_SCREEN_FADE_IN( 2000 );
                while (IS_SCREEN_FADING())
                {
                    WAIT( 0 );
                }
            }
        }
        else if (l_U282)
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )))
            {
                CLEAR_HELP();
            }
            l_U282 = 0;
        };;;
    }
    return;
}

void sub_8567()
{
    REMOVE_ANIMS( l_U300 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -809347846 );
    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPE" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHWARPI" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))))
    {
        CLEAR_HELP();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

