void main()
{
    int I;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U172 = 0;
    l_U192 = 0;
    l_U193 = 22;
    l_U194 = 0;
    l_U930 = 1;
    l_U931 = 0;
    l_U933 = 0;
    l_U934 = 0;
    l_U935 = 0;
    l_U936 = 0;
    l_U938 = -1;
    l_U939 = 1;
    l_U977 = "CLOTH_RETAIL_Room01";
    l_U978 = {-25.00000000, -35.00000000, -5.00000000};
    l_U981 = {35.00000000, 10.00000000, 15.00000000};
    l_U984 = {-274.01480000, 1366.67600000, 24.60018000};
    l_U987 = {-287.11480000, 1366.67600000, 29.56718000};
    l_U990 = 12.00000000;
    StrCopy( ref l_U991, "blank", 16 );
    StrCopy( ref l_U995, "blank", 16 );
    StrCopy( ref l_U999, "blank", 16 );
    l_U1012 = 0;
    l_U1013 = 0;
    l_U1014 = 0;
    l_U1015 = 0;
    l_U1016 = 0;
    l_U1017 = 0;
    l_U1019 = -1;
    l_U1020 = 5000;
    l_U1021 = 0;
    l_U1022 = 0;
    l_U1009 = {l_U1023._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_356();
    }
    while (l_U930)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U194)
            {
                case 0:
                if (l_U976 == nil)
                {
                    GET_INTERIOR_AT_COORDS( l_U1009._fU0, l_U1009._fU4, l_U1009._fU8, ref l_U976 );
                }
                else
                {
                    g_U8913 = 1;
                    sub_2802();
                    sub_9791();
                    l_U194 = 1;
                }
                break;
                case 1:
                if (NOT l_U933)
                {
                    if (sub_10719())
                    {
                        if (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U940._fU0 ))
                        {
                            ACTIVATE_INTERIOR( l_U976, 1 );
                        }
                        else
                        {
                            l_U933 = 1;
                        }
                    }
                }
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_572(), l_U984._fU0, l_U984._fU4, l_U984._fU8, l_U987._fU0, l_U987._fU4, l_U987._fU8, l_U990, 0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U940._fU0 )))
                    {
                        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U940._fU0, l_U984._fU0, l_U984._fU4, l_U984._fU8, l_U987._fU0, l_U987._fU4, l_U987._fU8, l_U990 );
                        if (sub_11066( l_U940._fU0, l_U977 ))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U940._fU0, sub_572() );
                            l_U194 = 2;
                        }
                    }
                }
                break;
                case 2:
                if (sub_11140())
                {
                    l_U935 = 0;
                    if (sub_20706( l_U977, l_U1009 ))
                    {
                        for ( l_U1008 = 0; l_U1008 < 22; l_U1008++ )
                        {
                            if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U995 ))) AND (LOCATE_CHAR_ON_FOOT_3D( sub_572(), l_U195[l_U1008]._fU8._fU0, l_U195[l_U1008]._fU8._fU4, l_U195[l_U1008]._fU8._fU8, l_U195[l_U1008]._fU32._fU0, l_U195[l_U1008]._fU32._fU4, l_U195[l_U1008]._fU32._fU8, 0 )))
                            {
                                if (NOT (sub_21102( ref g_U8927, l_U937, ref l_U938 )))
                                {
                                    switch (l_U195[l_U1008]._fU72)
                                    {
                                        case 4:
                                        switch (l_U1008)
                                        {
                                            case 19:
                                            if (sub_21537( l_U195[l_U1008]._fU44, l_U195[l_U1008]._fU56, l_U195[l_U1008]._fU68, ref l_U926, ProtectedGet(l_U195[l_U1008]._fU100), l_U195[l_U1008]._fU4, l_U976, ref l_U932, l_U1003, ref l_U1004, ref l_U1007, ref l_U937, l_U195[l_U1008]._fU104, l_U195[l_U1008]._fU116, l_U195[l_U1008]._fU128, 1, ref l_U939 ))
                                            {
                                                l_U193 = l_U1008;
                                                l_U194 = 6;
                                            }
                                            break;
                                            case 20:
                                            case 21:
                                            if (sub_21537( l_U195[l_U1008]._fU44, l_U195[l_U1008]._fU56, l_U195[l_U1008]._fU68, ref l_U922, ProtectedGet(l_U195[l_U1008]._fU100), l_U195[l_U1008]._fU4, l_U976, ref l_U932, l_U1003, ref l_U1004, ref l_U1007, ref l_U937, l_U195[l_U1008]._fU104, l_U195[l_U1008]._fU116, l_U195[l_U1008]._fU128, 1, ref l_U939 ))
                                            {
                                                l_U193 = l_U1008;
                                                l_U194 = 6;
                                            }
                                            break;
                                            default: PRINTSTRING( "baddness... " );
                                        }
                                        break;
                                        case 3:
                                        if (sub_29937( l_U195[l_U1008]._fU44, l_U195[l_U1008]._fU56, l_U195[l_U1008]._fU68, l_U195[l_U1008]._fU80, ProtectedGet(l_U195[l_U1008]._fU100), l_U195[l_U1008]._fU4, l_U976, ref l_U932, l_U1003, ref l_U1004, ref l_U1007, ref l_U937, l_U991, l_U195[l_U1008]._fU104, l_U195[l_U1008]._fU116, l_U195[l_U1008]._fU128, 1, ref l_U939 ))
                                        {
                                            l_U193 = l_U1008;
                                            l_U194 = 5;
                                        }
                                        break;
                                        case 2:
                                        if (sub_30986( l_U195[l_U1008]._fU44, l_U195[l_U1008]._fU56, l_U195[l_U1008]._fU68, l_U195[l_U1008]._fU76, ProtectedGet(l_U195[l_U1008]._fU100), l_U195[l_U1008]._fU4, l_U976, ref l_U932, l_U1003, ref l_U1004, ref l_U1007, ref l_U937, l_U991, l_U195[l_U1008]._fU104, l_U195[l_U1008]._fU116, l_U195[l_U1008]._fU128, 1, ref l_U939 ))
                                        {
                                            l_U193 = l_U1008;
                                            l_U194 = 3;
                                        }
                                        break;
                                        default:
                                        sub_9835( "  ** clothes_info[" );
                                        sub_10078( l_U1008 );
                                        sub_9835( "]." );
                                        SCRIPT_ASSERT( "ped_comp in MODO_MANHAT_5.sc not found!" );
                                        sub_14412();
                                    }
                                }
                                l_U935 = 1;
                                StrCopy( ref l_U999, l_U195[l_U1008]._fU0, 16 );
                            }
                            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U195[l_U1008]._fU20, ref l_U195[l_U1008]._fU8 );
                        }
                    }
                    if ((sub_11066( sub_572(), l_U977 )) AND (NOT l_U935))
                    {
                        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            for ( I = 0; I < 22; I++ )
                            {
                                if (NOT (IS_STRING_NULL( l_U195[I]._fU4 )))
                                {
                                    if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U195[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U195[I]._fU4 )))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                sub_805( 2, "BLANK" );
                            }
                        }
                        StrCopy( ref l_U999, "null", 16 );
                        l_U939 = 1;
                    }
                }
                else if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    for ( I = 0; I < 22; I++ )
                    {
                        if (NOT (IS_STRING_NULL( l_U195[I]._fU4 )))
                        {
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U195[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U195[I]._fU4 )))
                            {
                                CLEAR_HELP();
                            }
                        }
                        sub_805( 2, "BLANK" );
                    }
                }
                break;
                case 3:
                if (sub_33595( l_U195[l_U193], l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                {
                    l_U194 = 2;
                }
                break;
                case 5:
                if (sub_37849( l_U195[l_U193], l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                {
                    l_U194 = 2;
                }
                break;
                case 6:
                switch (l_U193)
                {
                    case 19:
                    if (sub_39306( ref l_U926, l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                    {
                        l_U194 = 2;
                    }
                    break;
                    case 20:
                    case 21:
                    if (sub_39306( ref l_U922, l_U1005, ref l_U937, ref l_U1003, ref l_U1004, 1, l_U1007, l_U940._fU120, l_U940._fU0 ))
                    {
                        l_U194 = 2;
                    }
                    break;
                    default: PRINTSTRING( "more baddness... " );
                }
                break;
            }
        }
        else
        {
            l_U930 = 0;
        }
    }
    sub_356();
    return;
}

void sub_356()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U940._fU0 );
    sub_378();
    REMOVE_DECISION_MAKER( l_U940._fU40 );
    REMOVE_DECISION_MAKER( l_U940._fU44 );
    REMOVE_ANIMS( "clothing" );
    if (NOT (IS_CHAR_DEAD( sub_572() )))
    {
        FREEZE_CHAR_POSITION( sub_572(), 0 );
        if ((l_U931) AND (IS_PLAYER_PLAYING( sub_639() )))
        {
            SET_PLAYER_CONTROL( sub_639(), 1 );
            l_U931 = 0;
        }
    }
    sub_731( ref l_U1004, ref l_U1003, ref l_U995, ref l_U991, 1, IS_THIS_A_MINIGAME_SCRIPT() );
    StrCopy( ref g_U8927, "blank", 16 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_378()
{
    int I;

    if (l_U39 != 0)
    {
        for ( I = 0; I <= (l_U39 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U6[I] );
            if (IS_THIS_MODEL_A_PED( l_U6[I] ))
            {
                DONT_SUPPRESS_PED_MODEL( l_U6[I] );
            }
            if (IS_THIS_MODEL_A_PED( l_U6[I] ))
            {
                DONT_SUPPRESS_CAR_MODEL( l_U6[I] );
            }
        }
    }
    l_U39 = 0;
    return;
}

void sub_572()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_639()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        if (IS_CAM_PROPAGATING( (uParam0^) ))
        {
            SET_CAM_PROPAGATE( (uParam0^), 0 );
            SET_CAM_ACTIVE( (uParam0^), 0 );
        }
        DESTROY_CAM( (uParam0^) );
    }
    sub_805( 5, uParam2 );
    sub_805( 2, uParam3 );
    sub_805( 2, "BLANK" );
    if (bParam5)
    {
        if (g_U8766)
        {
            sub_1185( sub_572(), l_U173 );
            sub_2370();
            g_U8766 = 0;
        }
    }
    if (g_U8765 != 6)
    {
        sub_2413();
        g_U8765 = 6;
    }
    return;
}

void sub_805(int iParam0, string sParam1)
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
                    sub_1026();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_639(), 1 );
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

void sub_1026()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_1185(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        sub_1214( uParam0, ref uVar21, 0 );
        if (uParam1._fU0 != uVar21._fU0)
        {
            if (uParam1._fU0 != 10)
            {
                if (uParam1._fU0 < 0)
                {
                    CLEAR_CHAR_PROP( sub_572(), 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( sub_572(), 0, uParam1._fU0 );
                }
            }
            else
            {
                CLEAR_CHAR_PROP( uParam0, 0 );
                if (((GET_CHAR_TEXTURE_VARIATION( sub_572(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_572(), 8 )) != 1))
                {
                    SET_CHAR_COMPONENT_VARIATION( sub_572(), 8, 1, 0 );
                }
            }
        }
        if (uParam1._fU4 != uVar21._fU4)
        {
            if (uParam1._fU4 < 0)
            {
                CLEAR_CHAR_PROP( sub_572(), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( uParam0, 1, uParam1._fU4 );
            }
        }
        if ((uParam1._fU40 != uVar21._fU40) || (uParam1._fU8 != uVar21._fU8))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 0, uParam1._fU8, uParam1._fU40 );
        }
        if ((uParam1._fU44 != uVar21._fU44) || (uParam1._fU12 != uVar21._fU12))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 1, uParam1._fU12, uParam1._fU44 );
        }
        if ((uParam1._fU48 != uVar21._fU48) || (uParam1._fU16 != uVar21._fU16))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 2, uParam1._fU16, uParam1._fU48 );
        }
        if ((uParam1._fU52 != uVar21._fU52) || (uParam1._fU20 != uVar21._fU20))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 3, uParam1._fU20, uParam1._fU52 );
        }
        if ((uParam1._fU56 != uVar21._fU56) || (uParam1._fU24 != uVar21._fU24))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 4, uParam1._fU24, uParam1._fU56 );
        }
        if ((uParam1._fU60 != uVar21._fU60) || (uParam1._fU28 != uVar21._fU28))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 5, uParam1._fU28, uParam1._fU60 );
        }
        if ((uParam1._fU64 != uVar21._fU64) || (uParam1._fU32 != uVar21._fU32))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 6, uParam1._fU32, uParam1._fU64 );
        }
        if ((uParam1._fU68 != uVar21._fU68) || (uParam1._fU36 != uVar21._fU36))
        {
            SET_CHAR_COMPONENT_VARIATION( uParam0, 7, uParam1._fU36, uParam1._fU68 );
        }
    }
    return;
}

void sub_1214(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 8 );
            if ((iVar6 == 0) AND (iVar5 == 1))
            {
                iParam1->_fU0 = 10;
            }
        }
        GET_CHAR_PROP_INDEX( uParam0, 1, iParam1 + 4 );
        iParam1->_fU8 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 0 );
        iParam1->_fU12 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 1 );
        iParam1->_fU16 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 2 );
        iParam1->_fU20 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 3 );
        iParam1->_fU24 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 4 );
        iParam1->_fU28 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 5 );
        iParam1->_fU32 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 6 );
        iParam1->_fU36 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 7 );
        iParam1->_fU40 = GET_CHAR_TEXTURE_VARIATION( uParam0, 0 );
        iParam1->_fU44 = GET_CHAR_TEXTURE_VARIATION( uParam0, 1 );
        iParam1->_fU48 = GET_CHAR_TEXTURE_VARIATION( uParam0, 2 );
        iParam1->_fU52 = GET_CHAR_TEXTURE_VARIATION( uParam0, 3 );
        iParam1->_fU56 = GET_CHAR_TEXTURE_VARIATION( uParam0, 4 );
        iParam1->_fU60 = GET_CHAR_TEXTURE_VARIATION( uParam0, 5 );
        iParam1->_fU64 = GET_CHAR_TEXTURE_VARIATION( uParam0, 6 );
        iParam1->_fU68 = GET_CHAR_TEXTURE_VARIATION( uParam0, 7 );
    }
    else
    {
        iParam1->_fU0 = -1;
        iParam1->_fU4 = -1;
        iParam1->_fU8 = -1;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        iParam1->_fU28 = -1;
        iParam1->_fU32 = -1;
        iParam1->_fU36 = -1;
        iParam1->_fU40 = -1;
        iParam1->_fU44 = -1;
        iParam1->_fU48 = -1;
        iParam1->_fU52 = -1;
        iParam1->_fU56 = -1;
        iParam1->_fU60 = -1;
        iParam1->_fU64 = -1;
        iParam1->_fU68 = -1;
    }
    if (bParam2)
    {
        if (iParam1->_fU0 == 2)
        {
            iParam1->_fU0 = -1;
        }
    }
    return;
}

void sub_2370()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2413()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_2422(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_2422(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( sub_639() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_572(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_2422()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2802()
{
    l_U940._fU4 = -1056268969;
    l_U940._fU8 = {-280.68430000, 1365.63000000, 24.63230000};
    sub_2847();
    sub_4653();
    sub_5702();
    sub_1214( sub_572(), ref l_U173, 0 );
    StrCopy( ref g_U8927, "blank", 16 );
    return;
}

void sub_2847()
{
    sub_2927( 0, -3.50000000, -5.03750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -3.29500000, -3.63800000, 1.00000000, -285.43420000, 1359.51500000, 24.63280000, 198.36000000 );
    sub_2927( 1, -3.50000000, -3.23750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -3.29500000, -3.63800000, 1.00000000, -285.10400000, 1361.30000000, 24.63280000, 34.56000000 );
    sub_2927( 2, -2.10000000, -5.03750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -2.09500000, -3.63750000, 1.00000000, -282.83810000, 1359.54600000, 24.63270000, 241.20000000 );
    sub_2927( 3, -2.10000000, -3.23750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -2.09500000, -3.63750000, 1.00000000, -282.56810000, 1361.51600000, 24.63270000, 38.52000000 );
    sub_2927( 4, -0.69500000, -5.03750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -0.49500000, -5.03750000, 1.00000000, -282.22550000, 1359.31600000, 24.63220000, 183.24000000 );
    sub_2927( 5, -0.69500000, -3.23750000, 1.00000000, 0.70000000, 0.90000000, 1.50000000, -0.49500000, -3.53750000, 1.00000000, -282.13550000, 1361.43400000, 24.63220000, 77.04000000 );
    sub_2927( 6, 0.75000000, -5.03750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 0.70500000, -5.03750000, 1.00000000, -279.82120000, 1359.22500000, 24.63220000, 170.28000000 );
    sub_2927( 7, 0.75000000, -3.23750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 0.70500000, -3.53750000, 1.00000000, -279.64120000, 1361.63600000, 24.63220000, 64.44001000 );
    sub_2927( 8, 2.30500000, -5.03750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 2.40500000, -4.79800000, 1.00000000, -279.37800000, 1359.13600000, 24.63220000, 205.56000000 );
    sub_2927( 9, 2.30500000, -3.23750000, 1.00000000, 0.75000000, 0.90000000, 1.50000000, 2.40500000, -3.53750000, 1.00000000, -279.37800000, 1361.43400000, 24.63220000, 51.48000000 );
    sub_2927( 10, 3.95000000, -5.03750000, 1.00000000, 0.90000000, 0.90000000, 1.50000000, 3.57500000, -4.79750000, 1.00000000, -276.83600000, 1358.84000000, 24.63220000, 231.84000000 );
    sub_2927( 11, 3.95000000, -3.23750000, 1.00000000, 0.90000000, 0.90000000, 1.50000000, 3.50000000, -3.53750000, 1.00000000, -276.67550000, 1361.60400000, 24.63220000, 347.04000000 );
    sub_2927( 12, -4.96000000, -9.02500000, 1.00000000, 1.00000000, 0.85000000, 1.50000000, -5.16000000, -7.22500000, 1.00000000, -285.34080000, 1355.62000000, 24.63240000, 292.68000000 );
    sub_2927( 13, -4.96000000, -7.32500000, 1.00000000, 1.00000000, 0.85000000, 1.50000000, -5.16000000, -7.22500000, 1.00000000, -285.43080000, 1357.40000000, 24.62200000, 250.00000000 );
    sub_2927( 14, -4.96000000, -4.23750000, 1.00000000, 0.75000000, 1.00000000, 1.50000000, -2.65500000, 1.36250000, 1.00000000, -285.63110000, 1360.02300000, 24.63300000, 222.48000000 );
    sub_2927( 15, -4.96000000, -1.22500000, 1.00000000, 1.00000000, 0.85000000, 1.50000000, -5.16000000, -1.22500000, 1.00000000, -285.16080000, 1363.04100000, 24.63240000, 240.00000000 );
    sub_2927( 16, -4.71000000, 0.82500000, 1.00000000, 1.25000000, 1.20000000, 1.50000000, -5.16000000, 0.47500000, 1.00000000, -285.16080000, 1365.00000000, 24.63240000, 279.72000000 );
    sub_2927( 17, 3.55000000, 1.36300000, 1.00000000, 0.90000000, 0.80000000, 1.50000000, 3.80500000, 1.36250000, 1.00000000, -277.97060000, 1365.32100000, 24.63280000, 241.20000000 );
    sub_2927( 18, 5.35000000, 1.36300000, 1.00000000, 0.90000000, 0.80000000, 1.50000000, 6.50000000, -0.12500000, 1.00000000, -275.77350000, 1364.83400000, 24.63240000, 165.00000000 );
    sub_2927( 19, -2.86000000, -9.12500000, 1.00000000, 1.10000000, 0.75000000, 1.50000000, -3.16000000, -10.14500000, 1.00000000, -284.06830000, 1355.77000000, 24.63250000, 180.00000000 );
    sub_2927( 20, 3.90000000, -9.12500000, 1.00000000, 1.20000000, 0.75000000, 1.50000000, 6.50000000, -7.00000000, 1.00000000, -277.09360000, 1355.76200000, 24.63240000, 186.00000000 );
    sub_2927( 21, 6.10000000, -8.10000000, 1.00000000, 1.00000000, 1.85000000, 1.50000000, 6.50000000, -8.50000000, 1.00000000, -275.75050000, 1355.96500000, 24.63210000, 270.00000000 );
    return;
}

void sub_2927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    l_U195[uParam0]._fU20 = {uParam1};
    l_U195[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U195[uParam0]._fU20, ref l_U195[uParam0]._fU8 );
    l_U195[uParam0]._fU44 = {uParam7};
    l_U195[uParam0]._fU56 = {uParam10};
    l_U195[uParam0]._fU68 = uParam13;
    return;
}

void sub_4653()
{
    sub_4701( 0, -285.26730000, 1357.94200000, 26.05647000, -5.93110500, -0.00000000, 6.11925400, 45.00000000 );
    sub_4701( 1, -285.95310000, 1363.87600000, 25.74338000, -4.28226500, 0.00000000, -159.80550000, 45.00000000 );
    sub_4701( 2, -281.83620000, 1358.26700000, 25.87825000, -0.67026800, 0.00000000, 40.25751000, 45.00000000 );
    sub_4701( 3, -283.44250000, 1364.06700000, 25.56329000, -1.35285800, -0.00000000, -157.70590000, 45.00000000 );
    sub_4701( 4, -282.96480000, 1356.53300000, 25.72100000, -5.58437800, -0.00000000, -20.03690000, 45.00000000 );
    sub_4701( 5, -283.11490000, 1364.21700000, 25.79455000, -7.90652700, -0.00000000, -156.87700000, 45.00000000 );
    sub_4701( 6, -279.03240000, 1356.33600000, 25.50126000, -2.29133400, 0.00000000, 19.92876000, 45.00000000 );
    sub_4701( 7, -279.30380000, 1364.57700000, 25.86644000, -10.76821000, -0.00000000, 169.51370000, 45.00000000 );
    sub_4701( 8, -278.91130000, 1357.36100000, 25.89170000, -1.44913700, 0.00000000, 17.37921000, 45.00000000 );
    sub_4701( 9, -280.23910000, 1362.92600000, 26.04678000, -8.36518100, 0.00000000, -147.67890000, 45.00000000 );
    sub_4701( 10, -275.93820000, 1357.43500000, 25.91911000, -0.82381000, 0.00000000, 28.35692000, 45.00000000 );
    sub_4701( 11, -275.73520000, 1363.02500000, 25.98920000, -4.07092100, -0.00000000, 154.10170000, 45.00000000 );
    sub_4701( 12, -283.97800000, 1356.32800000, 26.02860000, -4.80971400, -0.00000000, 119.39640000, 45.00000000 );
    sub_4701( 13, -284.35040000, 1356.28800000, 25.99253000, -2.76296800, -0.00000000, 46.30105000, 45.00000000 );
    sub_4701( 14, -284.99400000, 1358.55300000, 26.10016000, -7.45345600, 0.00000000, 27.11959000, 45.00000000 );
    sub_4701( 15, -283.57830000, 1362.52600000, 26.08505000, -8.04248700, 0.00000000, 77.05931000, 45.00000000 );
    sub_4701( 16, -283.15810000, 1364.41900000, 25.97610000, -8.27773600, 0.00000000, 73.07283000, 45.00000000 );
    sub_4701( 17, -276.43640000, 1363.28000000, 26.03255000, -4.05362700, -0.00000000, 43.66415000, 45.00000000 );
    sub_4701( 18, -277.11800000, 1363.28800000, 26.11416000, -4.28817800, -0.00000000, -33.59677000, 45.00000000 );
    sub_4701( 19, -285.30680000, 1355.36400000, 24.91185000, -1.01929100, 0.00000000, -78.60534000, 45.00000000 );
    sub_4701( 20, -278.36720000, 1354.91000000, 25.19579000, -16.73037000, -0.00000100, -58.45360000, 45.00000000 );
    sub_4701( 21, -274.73400000, 1354.69400000, 25.05148000, -13.86558000, 0.00000000, 29.62065000, 45.00000000 );
    return;
}

void sub_4701(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    l_U195[uParam0]._fU104 = {uParam1};
    l_U195[uParam0]._fU116 = {uParam4};
    l_U195[uParam0]._fU128 = uParam7;
    return;
}

void sub_5702()
{
    sub_5744( 0, "modo_LEFT_a0", 19, "clo_TORSO_4_1" );
    sub_7633( 1, "modo_LEFT_a1", 11, "clo_LEGS_6_0" );
    sub_5744( 2, "modo_LEFT_b0", 18, "clo_TORSO_4_0" );
    sub_7633( 3, "modo_LEFT_b1", 10, "clo_LEGS_5_2" );
    sub_7633( 4, "modo_MID_a0", 12, "clo_LEGS_6_1" );
    sub_7633( 5, "modo_MID_a1", 13, "clo_LEGS_6_2" );
    sub_7633( 6, "modo_MID_b0", 8, "clo_LEGS_5_0" );
    sub_7633( 7, "modo_MID_b1", 9, "clo_LEGS_5_1" );
    sub_5744( 8, "modo_RIGHT_a0", 15, "clo_TORSO_1_0" );
    sub_5744( 9, "modo_RIGHT_a1", 17, "clo_TORSO_1_2" );
    sub_5744( 10, "modo_RIGHT_b0", 26, "clo_TORSO_15_2" );
    sub_5744( 11, "modo_RIGHT_b1", 24, "clo_TORSO_15_0" );
    sub_5744( 12, "modo_WALL_L0", 18, "clo_TORSO_4_0" );
    sub_5744( 13, "modo_WALL_L1", 22, "clo_TORSO_9_1" );
    sub_5744( 14, "modo_WALL_L2", 16, "clo_TORSO_1_1" );
    sub_5744( 15, "modo_WALL_L3", 23, "clo_TORSO_9_2" );
    sub_5744( 16, "modo_WALL_L4", 21, "clo_TORSO_9_0" );
    sub_5744( 17, "modo_REAR_1", 25, "clo_TORSO_15_1" );
    sub_5744( 18, "modo_REAR_2", 20, "clo_TORSO_4_2" );
    sub_9444( 19, "modo_FEET_0", 10, "clo_MSHOES" );
    sub_9444( 20, "modo_FEET_1", 7, "clo_TSHOES" );
    sub_9444( 21, "modo_FEET_2", 7, "clo_TSHOES" );
    return;
}

void sub_5744(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[64] cVar6;

    l_U195[uParam0]._fU0 = uParam1;
    l_U195[uParam0]._fU4 = uParam3;
    l_U195[uParam0]._fU76 = uParam2;
    l_U195[uParam0]._fU80 = 26;
    l_U195[uParam0]._fU84 = 20;
    l_U195[uParam0]._fU88 = 4;
    l_U195[uParam0]._fU92 = 3;
    l_U195[uParam0]._fU96 = 20;
    l_U195[uParam0]._fU72 = 2;
    switch (uParam2)
    {
        case 15:
        case 16:
        case 17:
        ProtectedSet(l_U195[uParam0]._fU100, 200);
        break;
        case 19:
        case 18:
        case 20:
        ProtectedSet(l_U195[uParam0]._fU100, 80);
        break;
        case 21:
        case 22:
        case 23:
        ProtectedSet(l_U195[uParam0]._fU100, 200);
        break;
        case 24:
        case 25:
        case 26:
        ProtectedSet(l_U195[uParam0]._fU100, 100);
        break;
        default:
        StrCopy( ref cVar6, "invalid_init_this_torso_price: ", 64 );
        ConcatString(ref cVar6, sub_6132( uParam2 ), 64);
        SCRIPT_ASSERT( ref cVar6 );
    }
    return;
}

string sub_6132(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "TORSO_0_0_L";
        break;
        case 1:
        return "TORSO_0_1_L";
        break;
        case 2:
        return "TORSO_0_2_L";
        break;
        case 15:
        return "TORSO_1_0_M";
        break;
        case 16:
        return "TORSO_1_1_M";
        break;
        case 17:
        return "TORSO_1_2_M";
        break;
        case 3:
        return "TORSO_2_0_L";
        break;
        case 4:
        return "TORSO_2_1_L";
        break;
        case 5:
        return "TORSO_2_2_L";
        break;
        case 6:
        return "TORSO_3_0_L";
        break;
        case 7:
        return "TORSO_3_1_L";
        break;
        case 8:
        return "TORSO_3_2_L";
        break;
        case 18:
        return "TORSO_4_0_M";
        break;
        case 19:
        return "TORSO_4_1_M";
        break;
        case 20:
        return "TORSO_4_2_M";
        break;
        case 28:
        return "TORSO_5_0_H";
        break;
        case 29:
        return "TORSO_5_1_H";
        break;
        case 30:
        return "TORSO_5_2_H";
        break;
        case 41:
        return "TORSO_6_0_X";
        break;
        case 42:
        return "TORSO_8_0_X";
        break;
        case 21:
        return "TORSO_9_0_M";
        break;
        case 22:
        return "TORSO_9_1_M";
        break;
        case 23:
        return "TORSO_9_2_M";
        break;
        case 9:
        return "TORSO_10_0_L";
        break;
        case 10:
        return "TORSO_10_1_L";
        break;
        case 11:
        return "TORSO_10_2_L";
        break;
        case 31:
        return "TORSO_11_0_H";
        break;
        case 32:
        return "TORSO_11_1_H";
        break;
        case 33:
        return "TORSO_11_2_H";
        break;
        case 34:
        return "TORSO_12_0_H";
        break;
        case 35:
        return "TORSO_12_1_H";
        break;
        case 36:
        return "TORSO_12_2_H";
        break;
        case 37:
        return "TORSO_12_3_H";
        break;
        case 38:
        return "TORSO_13_0_H";
        break;
        case 39:
        return "TORSO_13_1_H";
        break;
        case 40:
        return "TORSO_13_2_H";
        break;
        case 12:
        return "TORSO_14_0_L";
        break;
        case 13:
        return "TORSO_14_1_L";
        break;
        case 14:
        return "TORSO_14_2_L";
        break;
        case 24:
        return "TORSO_15_0_M";
        break;
        case 25:
        return "TORSO_15_1_M";
        break;
        case 26:
        return "TORSO_15_2_M";
        break;
        case 27:
        return "TORSO_15_3_X";
        break;
        case 43:
        return "TORSO_16_0_X";
        break;
        case 44:
        return "TORSO_16_1_X";
        break;
        case 45: return "NUMBER_OF_PLAYER_CLOTHES_TORSOS";
    }
    return "null";
}

void sub_7633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[64] cVar6;

    l_U195[uParam0]._fU0 = uParam1;
    l_U195[uParam0]._fU4 = uParam3;
    l_U195[uParam0]._fU76 = 45;
    l_U195[uParam0]._fU80 = uParam2;
    l_U195[uParam0]._fU84 = 20;
    l_U195[uParam0]._fU88 = 4;
    l_U195[uParam0]._fU92 = 3;
    l_U195[uParam0]._fU96 = 20;
    l_U195[uParam0]._fU72 = 3;
    switch (uParam2)
    {
        case 8:
        case 9:
        case 10:
        ProtectedSet(l_U195[uParam0]._fU100, 100);
        break;
        case 11:
        case 12:
        case 13:
        ProtectedSet(l_U195[uParam0]._fU100, 100);
        break;
        default:
        StrCopy( ref cVar6, "invalid_these_legs_price: ", 64 );
        ConcatString(ref cVar6, sub_7924( uParam2 ), 64);
        SCRIPT_ASSERT( ref cVar6 );
    }
    return;
}

string sub_7924(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "LEGS_0_0_L";
        break;
        case 1:
        return "LEGS_0_1_L";
        break;
        case 2:
        return "LEGS_0_2_L";
        break;
        case 3:
        return "LEGS_0_3_L";
        break;
        case 4:
        return "LEGS_1_0_L";
        break;
        case 19:
        return "LEGS_2_0_H";
        break;
        case 20:
        return "LEGS_2_1_H";
        break;
        case 21:
        return "LEGS_2_2_H";
        break;
        case 22:
        return "LEGS_2_3_H";
        break;
        case 23:
        return "LEGS_2_4_H";
        break;
        case 24:
        return "LEGS_3_0_X";
        break;
        case 14:
        return "LEGS_4_0_H";
        break;
        case 15:
        return "LEGS_4_1_H";
        break;
        case 16:
        return "LEGS_4_2_H";
        break;
        case 17:
        return "LEGS_4_3_H";
        break;
        case 18:
        return "LEGS_4_4_H";
        break;
        case 8:
        return "LEGS_5_0_M";
        break;
        case 9:
        return "LEGS_5_1_M";
        break;
        case 10:
        return "LEGS_5_2_M";
        break;
        case 11:
        return "LEGS_6_0_M";
        break;
        case 12:
        return "LEGS_6_1_M";
        break;
        case 13:
        return "LEGS_6_2_M";
        break;
        case 5:
        return "LEGS_7_0_L";
        break;
        case 6:
        return "LEGS_7_1_L";
        break;
        case 7:
        return "LEGS_7_2_L";
        break;
        case 25:
        return "LEGS_7_3_X";
        break;
        case 26: return "NUMBER_OF_PLAYER_CLOTHES_LEGS";
    }
    return "null";
}

void sub_9444(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U195[uParam0]._fU0 = uParam1;
    l_U195[uParam0]._fU4 = uParam3;
    l_U195[uParam0]._fU76 = 45;
    l_U195[uParam0]._fU80 = 26;
    l_U195[uParam0]._fU84 = uParam2;
    l_U195[uParam0]._fU88 = 4;
    l_U195[uParam0]._fU92 = 3;
    l_U195[uParam0]._fU96 = 20;
    l_U195[uParam0]._fU72 = 4;
    ProtectedSet(l_U195[uParam0]._fU100, 85);
    l_U922[0] = 7;
    l_U922[1] = 8;
    l_U922[2] = 9;
    l_U926[0] = 10;
    l_U926[1] = 11;
    l_U926[2] = 12;
    return;
}

void sub_9791()
{
    sub_9807( l_U940._fU4 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1005 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1006 );
    while (NOT sub_9951())
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 3, ref l_U940._fU40 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U940._fU44 );
    CREATE_CHAR( 4, l_U940._fU4, l_U940._fU8._fU0, l_U940._fU8._fU4, l_U940._fU8._fU8, ref l_U940._fU0, 1 );
    SET_CHAR_HEADING( l_U940._fU0, 230.00000000 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U940._fU0, l_U977 );
    sub_10267();
    SET_CHAR_HEADING( l_U940._fU0, 70.00000000 );
    SET_CHAR_DECISION_MAKER( l_U940._fU0, l_U940._fU40 );
    SET_COMBAT_DECISION_MAKER( l_U940._fU0, l_U940._fU44 );
    sub_10387( "" );
    sub_10514( 0, sub_572(), "NIKO", 0 );
    sub_10514( 3, l_U940._fU0, "MONO_ASST", 0 );
    return;
}

void sub_9807(unknown uParam0)
{
    sub_9835( "REQUEST_A_MODEL(" );
    sub_9835( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_9835( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U6[l_U39] = uParam0;
    l_U39++;
    return;
}

void sub_9835(unknown uParam0)
{
    return;
}

int sub_9951()
{
    int I;

    if (l_U39 != 0)
    {
        for ( I = 0; I <= (l_U39 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U6[I] )))
            {
                REQUEST_MODEL( l_U6[I] );
                sub_9835( "REQUEST_MODEL(" );
                sub_9835( GET_MODEL_NAME_FOR_DEBUG( l_U6[I] ) );
                sub_9835( ") [" );
                sub_10078( I );
                sub_9835( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_10078(unknown uParam0)
{
    return;
}

void sub_10267()
{
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U940._fU0 );
    sub_1214( l_U940._fU0, ref l_U940._fU48, 0 );
    return;
}

void sub_10387(unknown uParam0)
{
    StrCopy( ref l_U74._fU0, uParam0, 16 );
    sub_10406();
    return;
}

void sub_10406()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U74._fU16[I]._fU0 = nil;
        StrCopy( ref l_U74._fU16[I]._fU4, "", 32 );
        l_U74._fU344[I] = 0;
    }
    return;
}

void sub_10514(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U74._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U74._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_10598( "\n PED NUMBER ", uParam0 );
    sub_10638( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_10598(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10638(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_10719()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( l_U940._fU0 )))
    {
        if (IS_CHAR_ON_SCREEN( l_U940._fU0 ))
        {
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U978, ref uVar2 );
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U976, l_U981, ref uVar5 );
            if (IS_CHAR_IN_AREA_3D( sub_572(), uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

boolean sub_11066(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_11140()
{
    if (NOT (IS_CHAR_INJURED( l_U940._fU0 )))
    {
        if (sub_11066( sub_572(), l_U977 ))
        {
            if (sub_11066( l_U940._fU0, l_U977 ))
            {
                if ((IS_WANTED_LEVEL_GREATER( sub_639(), 0 )) || (IS_CHAR_IN_ANY_CAR( sub_572() )))
                {
                    if (NOT l_U1013)
                    {
                        sub_11269( 1, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        l_U1013 = 1;
                        l_U1014 = 0;
                        l_U1022 = 1;
                    }
                    return 0;
                }
                else if (NOT g_U8767)
                {
                    if (NOT l_U1021)
                    {
                        PRINT_HELP( "CLO_CANT" );
                        l_U1021 = 1;
                    }
                    return 0;
                }
                else if (NOT l_U1013)
                {
                    if (NOT l_U1022)
                    {
                        sub_11269( 3, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        l_U1013 = 1;
                        l_U1014 = 0;
                    }
                }
                if ((l_U934) || ((g_U10504) || (IS_CHAR_SHOOTING( sub_572() ))))
                {
                    if (sub_11066( sub_572(), l_U977 ))
                    {
                        if (sub_13692( l_U940._fU0, 91 ))
                        {
                            CLEAR_CHAR_TASKS( l_U940._fU0 );
                            TASK_COMBAT( l_U940._fU0, sub_572() );
                        }
                        ALTER_WANTED_LEVEL_NO_DROP( sub_639(), 1 );
                        if (IS_CHAR_SHOOTING( sub_572() ))
                        {
                            SAY_AMBIENT_SPEECH( l_U940._fU0, "SHOP_SHOTS_FIRED", 1, 0, 0 );
                        }
                        if (g_U10504)
                        {
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_639() );
                            PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_KLAXON", l_U1009 );
                        }
                        else
                        {
                            WAIT( 500 );
                            PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_RANDOM", l_U1009 );
                        }
                        l_U934 = 1;
                    }
                }
                else if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_639(), l_U940._fU0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_639(), l_U940._fU0 )))
                {
                    if (NOT l_U1015)
                    {
                        if (IS_CHAR_ARMED( sub_572(), 4 ))
                        {
                            sub_11269( 7, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        }
                        else
                        {
                            sub_11269( 6, ref l_U940._fU120, 1, ref l_U940._fU0 );
                        }
                        l_U1015 = 1;
                    }
                }
                else if (NOT (sub_14100( l_U940._fU120 )))
                {
                    l_U1015 = 0;
                }
                if (NOT (sub_14100( l_U940._fU120 )))
                {
                    if (l_U1019 < 0)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 6000, 10000, ref l_U1020 );
                        GET_GAME_TIMER( ref l_U1019 );
                    }
                    else if (NOT l_U1017)
                    {
                        GET_GAME_TIMER( ref l_U1018 );
                        sub_9835( "  ** time to bitch: " );
                        sub_10078( (l_U1019 + l_U1020) - l_U1018 );
                        sub_14412();
                        if (l_U1018 > (l_U1019 + l_U1020))
                        {
                            switch (sub_14468())
                            {
                                case 0:
                                sub_11269( 8, ref l_U940._fU120, 1, ref l_U940._fU0 );
                                break;
                                case 1:
                                sub_11269( 10, ref l_U940._fU120, 1, ref l_U940._fU0 );
                                break;
                                case 2:
                                sub_11269( 9, ref l_U940._fU120, 1, ref l_U940._fU0 );
                                break;
                            }
                            l_U1017 = 1;
                        }
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U1019 );
                }
                if (sub_13692( l_U940._fU0, 115 ))
                {
                    if (TIMERB() > l_U1006)
                    {
                        if (sub_13692( l_U940._fU0, 34 ))
                        {
                            CLEAR_CHAR_TASKS( l_U940._fU0 );
                            TASK_START_SCENARIO_AT_POSITION( l_U940._fU0, "Scenario_Standing", l_U940._fU8, l_U940._fU20 );
                            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1006 );
                        }
                    }
                    else if (sub_13692( l_U940._fU0, 34 ))
                    {
                        CLEAR_CHAR_TASKS( l_U940._fU0 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U940._fU0, sub_572() );
                    }
                }
                else
                {
                    SETTIMERB( 0 );
                }
                if ((NOT l_U1016) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U940._fU0, sub_572(), 0 )))
                {
                    sub_11269( 0, ref l_U940._fU120, 1, ref l_U940._fU0 );
                    l_U1016 = 1;
                    l_U1022 = 1;
                };;;
            }
            else if (NOT l_U936)
            {
                if (NOT (sub_11066( l_U940._fU0, l_U977 )))
                {
                    if (sub_11066( sub_572(), l_U977 ))
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "SHOP_H_EMPTY" );
                        l_U936 = 1;
                    }
                }
            }
            return 0;;
        }
        else if (l_U936)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EMPTY" ))
            {
                CLEAR_HELP();
            }
        }
        if (NOT l_U934)
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U940._fU0, l_U940._fU8._fU0, l_U940._fU8._fU4, 1.00000000, 1.00000000, 0 )))
            {
                if (sub_13692( l_U940._fU0, 17 ))
                {
                    TASK_GO_STRAIGHT_TO_COORD( l_U940._fU0, l_U940._fU8._fU0, l_U940._fU8._fU4, l_U940._fU8._fU8, 2, -2 );
                }
            }
            else
            {
                TASK_STAND_STILL( l_U940._fU0, -2 );
            }
        }
        if (NOT l_U1014)
        {
            if (NOT l_U1022)
            {
                sub_11269( 2, ref l_U940._fU120, 1, ref l_U940._fU0 );
                l_U1014 = 1;
            }
        }
        if ((sub_20222( sub_572(), l_U940._fU0 )) >= 25.00000000)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLO_CANT" )))
            {
                l_U1021 = 0;
            }
            l_U1013 = 0;
        }
        if (NOT (sub_14100( l_U940._fU120 )))
        {
            if (IS_KEYBOARD_KEY_PRESSED( 2 ))
            {
                sub_11269( 1, ref l_U940._fU120, 1, ref l_U940._fU0 );
            }
            else if (IS_KEYBOARD_KEY_PRESSED( 3 ))
            {
                sub_11269( 11, ref l_U940._fU120, 1, ref l_U940._fU0 );
            }
            else if (IS_KEYBOARD_KEY_PRESSED( 4 ))
            {
                sub_11269( 12, ref l_U940._fU120, 1, ref l_U940._fU0 );
            };;;
        }
        return 1;
        break;
    }
    if (NOT l_U936)
    {
        if (DOES_CHAR_EXIST( l_U940._fU0 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U936 = 1;
        }
    }
    return 0;
}

void sub_11269(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;
    int iVar11;

    switch (iParam2)
    {
        case 0:
        StrCopy( ref cVar6, "CS1_", 16 );
        break;
        case 2:
        StrCopy( ref cVar6, "CS2_", 16 );
        break;
        case 1:
        StrCopy( ref cVar6, "CS3_", 16 );
        break;
        case 3:
        return 1;
        break;
        default:
          case 4: return 0;
    }
    switch (iParam0)
    {
        case 0:
        ConcatString(ref cVar6, "ATTACK", 16);
        break;
        case 1:
        ConcatString(ref cVar6, "GOAWAY", 16);
        break;
        case 2:
        ConcatString(ref cVar6, "GOODBYE", 16);
        break;
        case 3:
        ConcatString(ref cVar6, "GREET", 16);
        break;
        case 4:
        ConcatString(ref cVar6, "PANIC", 16);
        break;
        case 5:
        ConcatString(ref cVar6, "PURCH", 16);
        break;
        case 6:
        ConcatString(ref cVar6, "MONKEY", 16);
        break;
        case 7:
        ConcatString(ref cVar6, "TARGET", 16);
        break;
        case 8:
        ConcatString(ref cVar6, "NEG", 16);
        break;
        case 9:
        ConcatString(ref cVar6, "COMP", 16);
        break;
        case 10:
        ConcatString(ref cVar6, "ADVICE", 16);
        break;
        case 11:
        ConcatString(ref cVar6, "BARR", 16);
        break;
        case 12:
        ConcatString(ref cVar6, "WARN", 16);
        break;
        default:
          case 13: return 0;
    }
    if (NOT (IS_CHAR_DEAD( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_572() );
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1c" )) >= 1)
    {
        GET_GROUP_SIZE( sub_2422(), ref uVar10, ref iVar11 );
        if (iVar11 >= 1)
        {
            PRINTSTRING( "  * skipping speech ''" );
            PRINTSTRING( ref cVar6 );
            PRINTSTRING( "'' because ''finale1c'' running and with iNumber_of_player_group_followers = " );
            PRINTINT( iVar11 );
            PRINTNL();
            return 0;
        }
    }
    if ((iParam2 == 0) AND (sub_11950()))
    {
        if (NOT g_U8918)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_12168( g_U8918 );
                PRINTNL();
                g_U8918 = 1;
                return 0;
            }
        }
        if (NOT g_U8915)
        {
            if (iParam0 == 3)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_GREETING  - " );
                PRINTSTRING( "bClothes_bought_in_roman3:" );
                sub_12168( g_U8915 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_572() );
    }
    sub_9835( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_9835( ref cVar6 );
    sub_9835( "'')\n" );
    return sub_12532( ref cVar6, uParam1, 1, 0 );
}

void sub_11950()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_12168(boolean bParam0)
{
    if (bParam0)
    {
        PRINTSTRING( "TRUE" );
    }
    else
    {
        PRINTSTRING( "FALSE" );
    }
    return;
}

void sub_12532(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12555( uParam0, ref l_U74._fU0, uParam1, uParam2, uParam3 );
}

void sub_12555(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_12609( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_12609(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_12631( iParam1 )))
    {
        return 0;
    }
    l_U74._fU384 = 0;
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
    sub_13311( ref g_U8947, ref l_U74 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_12631(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9835( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9835( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9835( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_13311(int iParam0, int iParam1)
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

int sub_13692(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_14100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_9835( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9835( "\n speech is not playing" );
    }
    return 0;
}

void sub_14412()
{
    if (g_U10532)
    {
        PRINTNL();
    }
    return;
}

int sub_14468()
{
    boolean bVar2;
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    bVar2 = false;
    iVar3 = 0;
    bVar4 = false;
    sub_14487( ref uVar5 );
    switch (uVar5)
    {
        case 13:
        case 14:
        case 15:
        bVar2 = true;
        break;
        case 16:
        case 17:
        case 18:
        bVar2 = true;
        break;
    }
    sub_15156( ref uVar6 );
    switch (uVar6)
    {
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        iVar3 = 1;
        break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        iVar3 = 1;
        break;
    }
    sub_15983( ref uVar7 );
    switch (uVar7)
    {
        case 2:
        case 3:
        case 4:
        bVar4 = true;
        break;
        case 5:
        case 6:
        case 7:
        bVar4 = true;
        break;
        case 8:
        case 9:
        case 10:
        case 11:
        bVar4 = true;
        break;
        case 12:
        case 13:
        case 14:
        bVar4 = true;
        break;
    }
    if (bVar4)
    {
        if (bVar2)
        {
            return 2;
        }
        else
        {
            return 1;
        }
        break;
    }
    if ((iVar3) || (bVar2))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_14487(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_14555( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 20;
    }
    return;
}

void sub_14555(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 8:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 9:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 13:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 2:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 11:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 12:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 16:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 17:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 18:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 4:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 19:
        (uParam1^) = 1;
        (uParam2^) = 3;
        break;
        default:
          case 20:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_15156(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_15224( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 26;
    }
    return;
}

void sub_15224(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 0;
        (uParam2^) = 3;
        break;
        case 4:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 20:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 21:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 22:
        (uParam1^) = 2;
        (uParam2^) = 3;
        break;
        case 23:
        (uParam1^) = 2;
        (uParam2^) = 4;
        break;
        case 24:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 15:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 16:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 17:
        (uParam1^) = 4;
        (uParam2^) = 3;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 4;
        break;
        case 8:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 9:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 11:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 12:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 13:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 5:
        (uParam1^) = 7;
        (uParam2^) = 0;
        break;
        case 6:
        (uParam1^) = 7;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 7;
        (uParam2^) = 2;
        break;
        case 25:
        (uParam1^) = 7;
        (uParam2^) = 3;
        break;
        default:
          case 26:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_15983(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int I;

    bVar3 = false;
    sub_15997( 0, ref uVar4 );
    for ( I = 0; I < 20; I++ )
    {
        if (((NOT bVar3) == 1) AND ((I != 19) AND ((I != 18) AND ((I != 1) AND (I != 0)))))
        {
            if (sub_18990( I, 0, 0 ))
            {
                (uParam0^) = I;
                bVar3 = true;
            }
        }
    }
    if (NOT bVar3)
    {
        (uParam0^) = 0;
    }
    return;
}

void sub_15997(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam0)
    {
        case 19:
        iParam1->_fU0 = g_U8775._fU0;
        iParam1->_fU4 = g_U8775._fU4;
        iParam1->_fU8 = g_U8775._fU8;
        iParam1->_fU12 = g_U8775._fU12;
        iParam1->_fU16 = g_U8775._fU16;
        iParam1->_fU20 = g_U8775._fU20;
        iParam1->_fU24 = g_U8775._fU24;
        break;
        case 0:
        sub_16276( iParam1 + 0 );
        sub_15156( iParam1 + 4 );
        sub_14487( iParam1 + 8 );
        sub_17422( iParam1 + 12 );
        sub_17717( iParam1 + 16 );
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        break;
        case 18:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 45, ref uVar4 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 26, ref uVar5 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref uVar6 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar7 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar8 );
        iParam1->_fU0 = uVar4;
        iParam1->_fU4 = uVar5;
        iParam1->_fU8 = uVar6;
        iParam1->_fU12 = uVar7;
        iParam1->_fU16 = uVar8;
        GENERATE_RANDOM_INT_IN_RANGE( -1, 1, iParam1 + 20 );
        GENERATE_RANDOM_INT_IN_RANGE( -1, 1, iParam1 + 24 );
        break;
        case 1:
        iParam1->_fU0 = 0;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 2:
        iParam1->_fU0 = 28;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 3:
        iParam1->_fU0 = 29;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 4:
        iParam1->_fU0 = 30;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 5:
        iParam1->_fU0 = 31;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 6:
        iParam1->_fU0 = 32;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 7:
        iParam1->_fU0 = 33;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 8:
        iParam1->_fU0 = 34;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 9:
        iParam1->_fU0 = 35;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 10:
        iParam1->_fU0 = 36;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 11:
        iParam1->_fU0 = 37;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 12:
        iParam1->_fU0 = 38;
        iParam1->_fU4 = 19;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 13:
        iParam1->_fU0 = 39;
        iParam1->_fU4 = 20;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 14:
        iParam1->_fU0 = 40;
        iParam1->_fU4 = 21;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 15:
        iParam1->_fU0 = 41;
        iParam1->_fU4 = 24;
        iParam1->_fU8 = 7;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 16:
        iParam1->_fU0 = 42;
        iParam1->_fU4 = 24;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 4;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 17:
        iParam1->_fU0 = 44;
        iParam1->_fU4 = 25;
        iParam1->_fU8 = 19;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = 1;
        iParam1->_fU24 = 0;
        break;
        default:
          case 20:
        iParam1->_fU0 = 45;
        iParam1->_fU4 = 26;
        iParam1->_fU8 = 20;
        iParam1->_fU12 = 4;
        iParam1->_fU16 = 3;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
    }
    return;
}

void sub_16276(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_16346( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 45;
    }
    return;
}

void sub_16346(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 15:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 16:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 17:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 4:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 5:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 6:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 8:
        (uParam1^) = 3;
        (uParam2^) = 2;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 20:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 28:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 29:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 30:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 41:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 42:
        (uParam1^) = 8;
        (uParam2^) = 0;
        break;
        case 21:
        (uParam1^) = 9;
        (uParam2^) = 0;
        break;
        case 22:
        (uParam1^) = 9;
        (uParam2^) = 1;
        break;
        case 23:
        (uParam1^) = 9;
        (uParam2^) = 2;
        break;
        case 9:
        (uParam1^) = 10;
        (uParam2^) = 0;
        break;
        case 10:
        (uParam1^) = 10;
        (uParam2^) = 1;
        break;
        case 11:
        (uParam1^) = 10;
        (uParam2^) = 2;
        break;
        case 31:
        (uParam1^) = 11;
        (uParam2^) = 0;
        break;
        case 32:
        (uParam1^) = 11;
        (uParam2^) = 1;
        break;
        case 33:
        (uParam1^) = 11;
        (uParam2^) = 2;
        break;
        case 34:
        (uParam1^) = 12;
        (uParam2^) = 0;
        break;
        case 35:
        (uParam1^) = 12;
        (uParam2^) = 1;
        break;
        case 36:
        (uParam1^) = 12;
        (uParam2^) = 2;
        break;
        case 37:
        (uParam1^) = 12;
        (uParam2^) = 3;
        break;
        case 38:
        (uParam1^) = 13;
        (uParam2^) = 0;
        break;
        case 39:
        (uParam1^) = 13;
        (uParam2^) = 1;
        break;
        case 40:
        (uParam1^) = 13;
        (uParam2^) = 2;
        break;
        case 12:
        (uParam1^) = 14;
        (uParam2^) = 0;
        break;
        case 13:
        (uParam1^) = 14;
        (uParam2^) = 1;
        break;
        case 14:
        (uParam1^) = 14;
        (uParam2^) = 2;
        break;
        case 24:
        (uParam1^) = 15;
        (uParam2^) = 0;
        break;
        case 25:
        (uParam1^) = 15;
        (uParam2^) = 1;
        break;
        case 26:
        (uParam1^) = 15;
        (uParam2^) = 2;
        break;
        case 27:
        (uParam1^) = 15;
        (uParam2^) = 3;
        break;
        case 43:
        (uParam1^) = 16;
        (uParam2^) = 0;
        break;
        case 44:
        (uParam1^) = 16;
        (uParam2^) = 1;
        break;
        default:
          case 45:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_17422(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_572(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_17475( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 8 );
        if ((iVar8 == 0) AND (iVar7 == 1))
        {
            (uParam0^) = 3;
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 4;
    }
    return;
}

void sub_17475(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 99;
        break;
        default:
          case 4: (uParam1^) = 2147483647;
    }
    return;
}

void sub_17717(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_572(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_17766( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_17766(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        default:
          case 3: (uParam1^) = 2147483647;
    }
    return;
}

int sub_18990(unknown uParam0, unknown uParam1, boolean bParam2)
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
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    sub_15997( uParam0, ref uVar5 );
    sub_15997( uParam1, ref uVar12 );
    if ((NOT ((uVar12._fU0 == 45) || (uVar5._fU0 == 45))) AND (uVar5._fU0 != uVar12._fU0))
    {
        return 0;
    }
    if ((NOT ((uVar12._fU4 == 26) || (uVar5._fU4 == 26))) AND (uVar5._fU4 != uVar12._fU4))
    {
        return 0;
    }
    if ((NOT ((uVar12._fU8 == 20) || (uVar5._fU8 == 20))) AND (uVar5._fU8 != uVar12._fU8))
    {
        return 0;
    }
    if (bParam2)
    {
        if ((NOT ((uVar12._fU12 == 4) || (uVar5._fU12 == 4))) AND (uVar5._fU12 != uVar12._fU12))
        {
            return 0;
        }
        if ((NOT ((uVar12._fU16 == 3) || (uVar5._fU16 == 3))) AND (uVar5._fU16 != uVar12._fU16))
        {
            return 0;
        }
    }
    return 1;
}

void sub_20222(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if ((NOT (DOES_CHAR_EXIST( uParam1 ))) || (NOT (DOES_CHAR_EXIST( uParam0 ))))
    {
        return 9999.00000000;
        break;
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    else
    {
        N_1363505769( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    else
    {
        N_1363505769( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref Result );
    return Result;
}

int sub_20706(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (sub_11066( sub_572(), uParam0 ))
    {
        if (NOT (HAVE_ANIMS_LOADED( "clothing" )))
        {
            REQUEST_ANIMS( "clothing" );
        }
        else if (NOT l_U1012)
        {
            l_U1012 = 1;
        }
        return 1;;
    }
    else if (HAVE_ANIMS_LOADED( "clothing" ))
    {
        GET_CHAR_COORDINATES( sub_572(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, uParam1._fU0, uParam1._fU4, ref fVar9 );
        if (fVar9 > 15.00000000)
        {
            REMOVE_ANIMS( "clothing" );
            l_U1012 = 0;
        }
    }
    return 0;
}

int sub_21102(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
    {
        if ((uParam2^) < 0)
        {
            GET_GAME_TIMER( uParam2 );
        }
        GET_GAME_TIMER( ref iVar5 );
        sub_9835( "  ''" );
        sub_9835( uParam0 );
        sub_9835( "'', " );
        sub_10078( uParam1 );
        sub_9835( "    //" );
        sub_10078( iVar5 - (uParam2^) );
        sub_9835( "\n" );
        if ((iVar5 - (uParam2^)) > 2000)
        {
            CLEAR_HELP();
        }
        return 1;
    }
    (uParam2^) = -1;
    return 0;
}

int sub_21537(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24)
{
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    int I;
    boolean bVar31;
    unknown uVar32;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar27 );
    if ((NOT (uParam11^)) AND (sub_21563( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_F_F" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_F", iParam8 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_F" )))))
        {
            if (sub_21944( 2, "BLANK", 0 ))
            {
                sub_805( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
            {
                sub_22616( "LB_TRYON", uParam9, uParam24 );
            }
        }
    }
    else if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_22873( ref uParam12, uVar27, uParam3, uParam6, uParam23, 4, 0 )))
        {
            WAIT( 0 );
        }
        bVar31 = false;
        for ( I = 0; I < (uParam7^); I++ )
        {
            if (NOT bVar31)
            {
                if (NOT g_U8862[(uParam7^)[I]])
                {
                    uVar32 = (uParam7^)[I];
                    bVar31 = true;
                }
            }
        }
        if (NOT bVar31)
        {
            uVar32 = (uParam7^)[0];
        }
        sub_1214( sub_572(), ref l_U173, 0 );
        sub_25386( uVar32 );
        SET_PLAYER_CONTROL( sub_639(), 0 );
        TASK_PLAY_ANIM( sub_572(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( sub_25555( uVar32, 3, 0 ), iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_25555( uVar32, 3, 0 ), iParam8 / 2, 7500, 1 );
        }
        if (bVar31)
        {
            PRINT_HELP_FOREVER( "HELP_BUY_F" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27224( uVar32 ) );
        }
        sub_28010( uParam23, ref uParam12, 4, uParam13, "BLANK", uParam14, uParam16, uParam19, uParam22 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        sub_22219();
        return 1;
    }
    return 0;
}

int sub_21563(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_639() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_639() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_639() )))))
                {
                    if (NOT sub_21659())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_572() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_21744())
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

int sub_21659()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_21744()
{
    return sub_21755( 0, 0 );
}

int sub_21755(boolean bParam0, unknown uParam1)
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

int sub_21944(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_21563( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_639(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_22219();
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

void sub_22219()
{
    return sub_21755( 1, 1 );
}

void sub_22616(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_9835( "ar_PRINT_SHOP_HELP(''" );
    sub_9835( uParam0 );
    sub_9835( "'', ''" );
    sub_9835( uParam1 );
    sub_9835( "'', " );
    sub_22697( (uParam2^) );
    sub_9835( ")    //" );
    sub_22697( IS_HELP_MESSAGE_BEING_DISPLAYED() );
    sub_14412();
    if ((uParam2^))
    {
        PRINT_HELP_FOREVER_WITH_STRING( uParam0, uParam1 );
        (uParam2^) = 0;
    }
    else
    {
        PRINT_HELP_WITH_STRING_NO_SOUND( uParam0, uParam1 );
    }
    return;
}

void sub_22697(unknown uParam0)
{
    if (g_U10532)
    {
        sub_12168( uParam0 );
    }
    return;
}

int sub_22873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, boolean bParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT l_U192)
    {
        sub_22893();
        g_U8766 = 1;
        g_U8765 = uParam9;
        l_U192 = 1;
    }
    if ((NOT bParam10) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (sub_22982( uParam9, ref uVar13 ))
            {
                PLAY_SOUND_FROM_PED( -1, sub_24030( uVar13 ), sub_572() );
            }
        }
        return 0;
        break;
    }
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar14 );
    if (NOT (IS_CAR_DEAD( uVar14 )))
    {
        if (LOCATE_CAR_3D( uVar14, uParam4._fU0, uParam4._fU4, uParam4._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
        {
            if (sub_24649( uParam8, ref uVar15, ref uVar18 ))
            {
                SET_CAR_HEADING( uVar14, uVar18 );
                SET_CAR_COORDINATES( uVar14, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
            }
        }
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_572() );
    SET_CHAR_COORDINATES( sub_572(), uParam4._fU0, uParam4._fU4, uParam4._fU8 );
    SET_CHAR_HEADING( sub_572(), uParam7 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_572(), 1 );
    CLEAR_AREA_OF_OBJECTS( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000 );
    l_U192 = 0;
    return 1;
}

void sub_22893()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

int sub_22982(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 0;
        break;
        case 2:
        sub_16276( ref uVar4 );
        switch (uVar4)
        {
            case 0:
            case 1:
            case 2:
            (uParam1^) = 3;
            return 1;
            break;
            case 15:
            case 16:
            case 17:
            (uParam1^) = 2;
            return 1;
            break;
            case 3:
            case 4:
            case 5:
            (uParam1^) = 1;
            return 1;
            break;
            case 6:
            case 7:
            case 8:
            (uParam1^) = 1;
            return 1;
            break;
            case 18:
            case 19:
            case 20:
            (uParam1^) = 0;
            return 1;
            break;
            case 28:
            case 29:
            case 30:
            (uParam1^) = 0;
            return 1;
            break;
            case 41:
            (uParam1^) = 0;
            return 1;
            break;
            case 42:
            (uParam1^) = 0;
            return 1;
            break;
            case 21:
            case 22:
            case 23:
            (uParam1^) = 1;
            return 1;
            break;
            case 9:
            case 10:
            case 11:
            (uParam1^) = 1;
            return 1;
            break;
            case 31:
            case 32:
            case 33:
            (uParam1^) = 0;
            return 1;
            break;
            case 34:
            case 35:
            case 36:
            case 37:
            (uParam1^) = 0;
            return 1;
            break;
            case 38:
            case 39:
            case 40:
            (uParam1^) = 0;
            return 1;
            break;
            case 12:
            case 13:
            case 14:
            (uParam1^) = 1;
            return 1;
            break;
            case 24:
            case 25:
            case 26:
            case 27:
            (uParam1^) = 0;
            return 1;
            break;
            case 43:
            case 44:
            (uParam1^) = 3;
            return 1;
            break;
        }
        break;
        case 3:
        sub_15156( ref uVar5 );
        switch (uVar5)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            (uParam1^) = 4;
            return 1;
            break;
            case 4:
            (uParam1^) = 5;
            return 1;
            break;
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            (uParam1^) = 4;
            return 1;
            break;
            case 24:
            (uParam1^) = 5;
            return 1;
            break;
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            (uParam1^) = 4;
            return 1;
            break;
            case 8:
            case 9:
            case 10:
            (uParam1^) = 5;
            return 1;
            break;
            case 11:
            case 12:
            case 13:
            (uParam1^) = 5;
            return 1;
            break;
            case 5:
            case 6:
            case 7:
            case 25:
            (uParam1^) = 5;
            return 1;
            break;
        }
        break;
        case 4:
        (uParam1^) = 6;
        return 1;
        break;
        case 5:
        (uParam1^) = 0;
        return 1;
        break;
    }
    return 0;
}

string sub_24030(unknown uParam0)
{
    char[64] cVar3;

    switch (uParam0)
    {
        case 0:
        return "WARDROBE_CHANGE_TOP";
        break;
        case 1:
        return "WARDROBE_CHANGE_TOP_ZIP";
        break;
        case 2:
        return "WARDROBE_CHANGE_JACKET_LEATHER";
        break;
        case 3:
        return "WARDROBE_CHANGE_JACKET_LEATHER_ZIP";
        break;
        case 4:
        return "WARDROBE_CHANGE_PANTS";
        break;
        case 5:
        return "WARDROBE_CHANGE_PANTS_ZIP";
        break;
        case 6:
        return "WARDROBE_CHANGE_SHOES";
        break;
        case 7:
        SCRIPT_ASSERT( "GET_CLOTHES_AUDIO(number_of_clothes_audio)" );
        return "WARDROBE_CHANGE_SHOES";
        break;
    }
    StrCopy( ref cVar3, "GET_CLOTHES_AUDIO(unknown", 64 );
    ConcatString(ref cVar3, uParam0, 64);
    ConcatString(ref cVar3, ")", 64);
    SCRIPT_ASSERT( ref cVar3 );
    return "GET_CLOTHES_AUDIO(unknown this_clothes_audio)";
}

int sub_24649(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        (uParam1^) = {903.47300000, -443.05190000, 15.20300000};
        (uParam2^) = 180.00000000;
        return 1;
        break;
        case 1:
        (uParam1^) = {-281.72640000, 1346.18900000, 24.81270000};
        (uParam2^) = 270.00000000;
        return 1;
        break;
        case 2:
        GET_CHAR_COORDINATES( sub_572(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        switch (sub_24789( uVar5 ))
        {
            case 0:
            (uParam1^) = {22.51870000, 816.93500000, 14.33970000};
            (uParam2^) = 90.00000000;
            return 1;
            break;
            case 1:
            (uParam1^) = {9.57450000, -650.91650000, 14.41290000};
            (uParam2^) = 270.00000000;
            return 1;
            break;
            default:
            (uParam1^) = {0.00000000, 0.00000000, 0.00000000};
            (uParam2^) = 0.00000000;
            return 0;
        }
        break;
    }
    (uParam1^) = {0.00000000, 0.00000000, 0.00000000};
    (uParam2^) = 0.00000000;
    return 0;
}

void sub_24789(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int Result;
    float fVar7;
    float fVar8;
    vector[2] vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = 99;
    fVar8 = 1E8;
    array(ref vVar9, 2);
    vVar9[1] = {10.79090000, -652.65520000, 14.77060000};
    vVar9[0] = {21.83008000, 803.60000000, 13.70000000};
    for ( I = 0; I < 2; I++ )
    {
        fVar7 = VDIST( uParam0, vVar9[I] );
        if (fVar7 < fVar8)
        {
            Result = I;
            fVar8 = fVar7;
        }
    }
    return Result;
}

void sub_25386(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_14555( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_572(), 5, iVar3, iVar4 );
    }
    return;
}

string sub_25555(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        return "CLOTHES_PRINT_POOR";
        break;
        case 1:
        return "CLOTHES_PRINT_BOUGHT";
        break;
        case 2:
        return "CLOTHES_PRINT_BUY_HELP";
        break;
        case 3:
        switch (uParam0)
        {
            case 0:
            if (NOT g_U8921)
            {
                return "buy_FEET_0_0";
            }
            else
            {
                return "buy_FEET_0_0_A";
            }
            break;
            case 1:
            if (NOT g_U8921)
            {
                return "buy_FEET_0_1";
            }
            else
            {
                return "buy_FEET_0_1_A";
            }
            break;
            case 7:
            if (NOT g_U8921)
            {
                return "buy_FEET_1_0";
            }
            else
            {
                return "buy_FEET_1_0_A";
            }
            break;
            case 8:
            if (NOT g_U8921)
            {
                return "buy_FEET_1_1";
            }
            else
            {
                return "buy_FEET_1_1_A";
            }
            break;
            case 9:
            if (NOT g_U8921)
            {
                return "buy_FEET_1_2";
            }
            else
            {
                return "buy_FEET_1_2_A";
            }
            break;
            case 13:
            if (NOT g_U8921)
            {
                return "buy_FEET_2_0";
            }
            else
            {
                return "buy_FEET_2_0_A";
            }
            break;
            case 14:
            if (NOT g_U8921)
            {
                return "buy_FEET_2_1";
            }
            else
            {
                return "buy_FEET_2_1_A";
            }
            break;
            case 15:
            if (NOT g_U8921)
            {
                return "buy_FEET_2_2";
            }
            else
            {
                return "buy_FEET_2_2_A";
            }
            break;
            case 2:
            if (NOT g_U8921)
            {
                return "buy_FEET_3_0";
            }
            else
            {
                return "buy_FEET_3_0_A";
            }
            break;
            case 3:
            if (NOT g_U8921)
            {
                return "buy_FEET_3_1";
            }
            else
            {
                return "buy_FEET_3_1_A";
            }
            break;
            case 10:
            if (NOT g_U8921)
            {
                return "buy_FEET_4_0";
            }
            else
            {
                return "buy_FEET_4_0_A";
            }
            break;
            case 11:
            if (NOT g_U8921)
            {
                return "buy_FEET_4_1";
            }
            else
            {
                return "buy_FEET_4_1_A";
            }
            break;
            case 12:
            if (NOT g_U8921)
            {
                return "buy_FEET_4_2";
            }
            else
            {
                return "buy_FEET_4_2_A";
            }
            break;
            case 16:
            if (NOT g_U8921)
            {
                return "buy_FEET_5_0";
            }
            else
            {
                return "buy_FEET_5_0_A";
            }
            break;
            case 17:
            if (NOT g_U8921)
            {
                return "buy_FEET_5_1";
            }
            else
            {
                return "buy_FEET_5_1_A";
            }
            break;
            case 18:
            if (NOT g_U8921)
            {
                return "buy_FEET_5_2";
            }
            else
            {
                return "buy_FEET_5_2_A";
            }
            break;
            case 4:
            if (NOT g_U8921)
            {
                return "buy_FEET_6_0";
            }
            else
            {
                return "buy_FEET_6_0_A";
            }
            break;
            case 5:
            if (NOT g_U8921)
            {
                return "buy_FEET_6_1";
            }
            else
            {
                return "buy_FEET_6_1_A";
            }
            break;
            case 6:
            if (NOT g_U8921)
            {
                return "buy_FEET_6_2";
            }
            else
            {
                return "buy_FEET_6_2_A";
            }
            break;
            case 19:
            return "buy_FEET_1_3";
            break;
            default:
              case 20: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_feet_print_here()";
}

string sub_27224(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_FEET_0_0";
        break;
        case 1:
        return "clo_FEET_0_1";
        break;
        case 7:
        return "clo_FEET_1_0";
        break;
        case 8:
        return "clo_FEET_1_1";
        break;
        case 9:
        return "clo_FEET_1_2";
        break;
        case 13:
        return "clo_FEET_2_0";
        break;
        case 14:
        return "clo_FEET_2_1";
        break;
        case 15:
        return "clo_FEET_2_2";
        break;
        case 2:
        return "clo_FEET_3_0";
        break;
        case 3:
        return "clo_FEET_3_1";
        break;
        case 10:
        return "clo_FEET_4_0";
        break;
        case 11:
        return "clo_FEET_4_1";
        break;
        case 12:
        return "clo_FEET_4_2";
        break;
        case 16:
        return "clo_FEET_5_0";
        break;
        case 17:
        return "clo_FEET_5_1";
        break;
        case 18:
        return "clo_FEET_5_2";
        break;
        case 4:
        return "clo_FEET_6_0";
        break;
        case 5:
        return "clo_FEET_6_1";
        break;
        case 6:
        return "clo_FEET_6_2";
        break;
        case 19:
        return "clo_FEET_1_3";
        break;
        case 20: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
    }
    SCRIPT_ASSERT( "get_feet_americanAmbiance_name - null" );
    return "null feet";
}

void sub_28010(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    sub_28021( uParam1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_USE_HIGHDOF( 1 );
    CREATE_CAM( 14, uParam3 );
    SET_CAM_POS( (uParam3^), uParam6._fU0, uParam6._fU4, uParam6._fU8 );
    SET_CAM_ROT( (uParam3^), uParam9._fU0, uParam9._fU4, uParam9._fU8 );
    SET_CAM_FOV( (uParam3^), uParam12 );
    SET_CAM_ACTIVE( (uParam3^), 1 );
    SET_CAM_NEAR_DOF( (uParam3^), 0.50000000 );
    SET_CAM_FAR_DOF( (uParam3^), 5.00000000 );
    FREEZE_CHAR_POSITION( sub_572(), 0 );
    SET_PLAYER_CONTROL( sub_639(), 0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_639(), 1 );
    SET_CAM_PROPAGATE( (uParam3^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    GET_GAME_TIMER( uParam5 );
    g_U8765 = uParam2;
    sub_805( 2, "BLANK" );
    sub_805( 2, uParam4 );
    sub_28351( uParam0 );
    if ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    while (sub_29378())
    {
        WAIT( 0 );
    }
    return;
}

void sub_28021(unknown uParam0)
{
    SET_WIDESCREEN_BORDERS( 1 );
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_28351(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    vector vVar11;
    float fVar14;

    GET_GROUP_SIZE( sub_2422(), ref uVar3, ref iVar4 );
    if (iVar4 > 0)
    {
        for ( I = 0; I < iVar4; I++ )
        {
            GET_GROUP_MEMBER( sub_2422(), I, ref uVar10 );
            if ((IS_PLAYER_PLAYING( sub_639() )) AND (NOT (IS_CHAR_INJURED( uVar10 ))))
            {
                vVar11 = {0.00000000, 0.00000000, 0.00000000};
                fVar14 = 0.00000000;
                sub_28476( uParam0, I, ref vVar11, ref fVar14 );
                SET_CHAR_COORDINATES( uVar10, vVar11.x, vVar11.y, vVar11.z );
                SET_CHAR_HEADING( uVar10, fVar14 );
                TASK_LOOK_AT_CHAR( uVar10, sub_572(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar10, "Scenario_Standing", vVar11, fVar14 );
            }
        }
    }
    return;
}

void sub_28476(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {890.49650000, -444.29400000, 14.86020000};
            (uParam3^) = 99.11680000;
            break;
            case 1:
            (uParam2^) = {890.65440000, -442.71360000, 14.86020000};
            (uParam3^) = 133.18220000;
            break;
            case 2:
            (uParam2^) = {891.08420000, -441.97070000, 14.87890000};
            (uParam3^) = 121.98810000;
            break;
            default:
            (uParam2^) = {890.49650000, -444.29400000, 14.86020000};
            (uParam3^) = 99.11680000;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {-281.89270000, 1356.71500000, 24.63260000};
            (uParam3^) = 21.38890000;
            break;
            case 1:
            (uParam2^) = {-280.27220000, 1356.26300000, 24.63270000};
            (uParam3^) = 32.86620000;
            break;
            case 2:
            (uParam2^) = {-278.69550000, 1356.63500000, 24.63260000};
            (uParam3^) = 10.83960000;
            break;
            default:
            (uParam2^) = {-278.69550000, 1356.63500000, 24.63260000};
            (uParam3^) = 10.83960000;
        }
        break;
        case 2:
        GET_CHAR_COORDINATES( sub_572(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        switch (sub_24789( uVar6 ))
        {
            case 0:
            switch (uParam1)
            {
                case 0:
                (uParam2^) = {23.41800000, 807.56090000, 13.76190000};
                (uParam3^) = 202.32040000;
                break;
                case 1:
                (uParam2^) = {21.89330000, 806.71130000, 13.76190000};
                (uParam3^) = 143.10150000;
                break;
                case 2:
                (uParam2^) = {22.42110000, 806.66620000, 13.76190000};
                (uParam3^) = 192.01780000;
                break;
                default:
                (uParam2^) = {22.42110000, 806.66620000, 13.76190000};
                (uParam3^) = 192.01780000;
            }
            break;
            case 1:
            switch (uParam1)
            {
                case 0:
                (uParam2^) = {11.98550000, -661.31190000, 13.86160000};
                (uParam3^) = 196.52500000;
                break;
                case 1:
                (uParam2^) = {11.19710000, -661.58840000, 13.86160000};
                (uParam3^) = 202.11210000;
                break;
                case 2:
                (uParam2^) = {10.10630000, -661.25280000, 13.86160000};
                (uParam3^) = 197.13490000;
                break;
                default:
                (uParam2^) = {10.10630000, -661.25280000, 13.86160000};
                (uParam3^) = 197.13490000;
            }
            break;
        }
        break;
    }
    return;
}

int sub_29378()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

int sub_29937(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28)
{
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar31 );
    if ((NOT g_U15728[6]) AND (NOT g_U8915))
    {
        if (g_U8835[uParam7])
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
            {
                sub_22616( "LB_TRYON_R3", uParam9, uParam28 );
            }
            return 0;
        }
    }
    if ((NOT (uParam11^)) AND (sub_21563( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_L_F" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_L", iParam8 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_L" )))))
        {
            if (sub_21944( 2, "BLANK", 0 ))
            {
                sub_805( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT g_U8835[uParam7])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
                {
                    sub_22616( "LB_TRYON", uParam9, uParam28 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )))
            {
                sub_22616( "LB_TRYON_B", uParam9, uParam28 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_22873( ref uParam12, uVar31, uParam3, uParam6, uParam27, 3, 0 )))
        {
            WAIT( 0 );
        }
        sub_1214( sub_572(), ref l_U173, 0 );
        sub_30469( uParam7 );
        TASK_PLAY_ANIM( sub_572(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS", iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS_A", iParam8 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( "HELP_BUY_L" );
        sub_28010( uParam27, ref uParam12, 3, uParam13, ref uParam16, uParam14, uParam20, uParam23, uParam26 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        return 1;
    }
    return 0;
}

void sub_30469(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_15224( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_572(), 2, iVar3, iVar4 );
    }
    return;
}

int sub_30986(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28)
{
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar31 );
    if ((NOT g_U15728[6]) AND (NOT g_U8915))
    {
        if (g_U8789[uParam7])
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )))
            {
                sub_22616( "LB_TRYON_R3", uParam9, uParam28 );
            }
            return 0;
        }
    }
    if ((NOT (uParam11^)) AND (sub_21563( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sub_31126( uParam7, 1, 1 ) ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( sub_31126( uParam7, 1, 0 ), iParam8 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sub_31126( uParam7, 0, 0 ) )))))
        {
            if (sub_21944( 2, "BLANK", 0 ))
            {
                sub_805( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT g_U8789[uParam7])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
                {
                    sub_22616( "LB_TRYON", uParam9, uParam28 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )))
            {
                sub_22616( "LB_TRYON_B", uParam9, uParam28 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_22873( ref uParam12, uVar31, uParam3, uParam6, uParam27, 2, 0 )))
        {
            WAIT( 0 );
        }
        sub_1214( sub_572(), ref l_U173, 0 );
        sub_32690( uParam7 );
        TASK_PLAY_ANIM( sub_572(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( sub_31126( uParam7, 3, 0 ), iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_31126( uParam7, 3, 0 ), iParam8 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( sub_31126( uParam7, 2, 0 ) );
        sub_28010( uParam27, ref uParam12, 2, uParam13, ref uParam16, uParam14, uParam20, uParam23, uParam26 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        return 1;
    }
    return 0;
}

string sub_31126(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;

    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        iVar5 = 0;
        break;
        case 3:
        case 4:
        case 5:
        iVar5 = 0;
        break;
        case 6:
        case 7:
        case 8:
        iVar5 = 0;
        break;
        case 9:
        case 10:
        case 11:
        iVar5 = 0;
        break;
        case 12:
        case 13:
        case 14:
        iVar5 = 0;
        break;
        case 15:
        case 16:
        case 17:
        iVar5 = 0;
        break;
        case 18:
        case 19:
        case 20:
        iVar5 = 1;
        break;
        case 21:
        case 22:
        case 23:
        iVar5 = 0;
        break;
        case 24:
        case 25:
        case 26:
        case 27:
        iVar5 = 2;
        break;
        case 28:
        case 29:
        case 30:
        iVar5 = 3;
        break;
        case 31:
        case 32:
        case 33:
        iVar5 = 3;
        break;
        case 34:
        case 35:
        case 36:
        case 37:
        iVar5 = 3;
        break;
        case 38:
        case 39:
        case 40:
        iVar5 = 3;
        break;
        case 41:
        case 42:
        case 43:
        case 44:
        iVar5 = 4;
        break;
        case 45: iVar5 = 5;
    }
    switch (iVar5)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_T";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_T";
            }
            else
            {
                return "HELP_BOUGHT_T_F";
            }
            break;
            case 2:
            return "HELP_BUY_T";
            break;
            case 3:
            if (NOT g_U8921)
            {
                return "BUY_JACKET";
            }
            else
            {
                return "BUY_JACKET_A";
            }
            break;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_S";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_S";
            }
            else
            {
                return "HELP_BOUGHT_S_F";
            }
            break;
            case 2:
            return "HELP_BUY_S";
            break;
            case 3:
            if (NOT g_U8921)
            {
                return "BUY_SHIRT";
            }
            else
            {
                return "BUY_SHIRT_A";
            }
            break;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            return "HELP_POOR_J";
            break;
            case 1:
            if (NOT bParam2)
            {
                return "HELP_BOUGHT_J";
            }
            else
            {
                return "HELP_BOUGHT_J_F";
            }
            break;
            case 2:
            return "HELP_BUY_J";
            break;
            case 3:
            if (NOT g_U8921)
            {
                return "BUY_SWEATER";
            }
            else
            {
                return "BUY_SWEATER_A";
            }
            break;
        }
        break;
    }
    return "somethings gone wrong in get_torso_print_here()";
}

void sub_32690(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_16346( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_572(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_572(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_572(), 1, iVar3, iVar4 );
    }
    return;
}

int sub_33595(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    if ((sub_13692( sub_572(), 88 )) AND (sub_13692( sub_572(), 80 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_572(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam33 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    if (g_U8921)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( (uParam34^) );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    else
    {
        iVar48 = (uParam34^);
    }
    if (sub_33876())
    {
        if ((NOT sub_33956()) AND (NOT (IS_SCORE_GREATER( sub_639(), iVar48 - 1 ))))
        {
            CLEAR_PRINTS();
            PRINT_HELP( sub_31126( uParam0._fU76, 0, 0 ) );
            while (NOT (sub_34085( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_36834())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8923, sub_31126( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, sub_31126( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, sub_31126( uParam0._fU76, 1, 1 ), 16 );
                    break;
                }
                PRINT_HELP( sub_31126( uParam0._fU76, 1, 1 ) );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( sub_31126( uParam0._fU76, 1, 0 ), iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8923, sub_31126( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, sub_31126( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, sub_31126( uParam0._fU76, 1, 0 ), 16 );
                    break;
                }
            }
            sub_37202( uParam37, uParam0._fU76, iVar48, uParam39, uParam45 );
            while (NOT (sub_34085( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_37514( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_34085( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_31126( uParam0._fU76, 3, 0 ), 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_31126( uParam0._fU76, 3, 0 ), iVar48, 7500, 1 );
    };;;
    DISPLAY_CASH( 1 );
    return 0;
}

int sub_33876()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_33956()
{
    if (g_U8916)
    {
        if (g_U8915)
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_34085(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, boolean bParam7)
{
    unknown uVar10;
    int iVar11;

    if ((bParam5) AND ((NOT bParam7) AND (NOT IS_SCREEN_FADED_OUT())))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (bParam5)
            {
                if (sub_22982( g_U8765, ref uVar10 ))
                {
                    PLAY_SOUND_FROM_PED( -1, sub_24030( uVar10 ), sub_572() );
                }
            }
        }
        return 0;
        break;
    }
    while (sub_29378())
    {
        WAIT( 0 );
    }
    sub_805( 5, uParam2 );
    sub_805( 5, "LB_LEAVE_H" );
    sub_805( 5, "BLANK" );
    sub_805( 2, uParam3 );
    sub_805( 2, "BLANK" );
    CLEAR_CHAR_TASKS( sub_572() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_572(), 0 );
    if (bParam5)
    {
        sub_1185( sub_572(), l_U173 );
    }
    GET_GAME_TIMER( ref iVar11 );
    INCREMENT_INT_STAT_NO_MESSAGE( 50, iVar11 - (uParam6^) );
    switch (uParam4)
    {
        case 0:
        g_U8935 += iVar11 - (uParam6^);
        break;
        case 1:
        g_U8936 += iVar11 - (uParam6^);
        break;
        case 2:
        g_U8937 += iVar11 - (uParam6^);
        break;
    }
    (uParam6^) = 0;
    REGISTER_STRING_FOR_FRONTEND_STAT( 492, sub_34458() );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_572() );
    FREEZE_CHAR_POSITION( sub_572(), 0 );
    sub_2370();
    g_U8766 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    SET_PLAYER_CONTROL( sub_639(), 1 );
    SET_EVERYONE_IGNORE_PLAYER( sub_639(), 0 );
    sub_1026();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_36606( uParam0 );
    SET_USE_HIGHDOF( 0 );
    if (DOES_CAM_EXIST( (uParam1^) ))
    {
        if (IS_CAM_PROPAGATING( (uParam1^) ))
        {
            SET_CAM_PROPAGATE( (uParam1^), 0 );
            SET_CAM_ACTIVE( (uParam1^), 0 );
        }
        DESTROY_CAM( (uParam1^) );
    }
    sub_2413();
    g_U8765 = 6;
    return 1;
}

string sub_34458()
{
    if (CAN_THE_STAT_HAVE_STRING( 492 ))
    {
        switch (sub_34482())
        {
            case 0:
            return "BINCO";
            break;
            case 1:
            return "ZIP";
            break;
            case 2:
            return "PERSEUS";
            break;
            case 4:
            PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP('NUMBER_OF_CLOTHES_SHOPS') **\n" );
            PRINTSTRING( "  $ L" );
            PRINTINT( g_U8938 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8939 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8940 );
            PRINTNL();
            PRINTSTRING( "  # L" );
            PRINTINT( g_U8941 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8942 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8943 );
            PRINTNL();
            PRINTSTRING( "  @ L" );
            PRINTINT( g_U8935 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8936 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8937 );
            PRINTNL();
            return "null";
            break;
        }
        PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP(" );
        PRINTINT( sub_34482() );
        PRINTSTRING( ") **\n" );
        PRINTSTRING( "  $ L" );
        PRINTINT( g_U8938 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8939 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8940 );
        PRINTNL();
        PRINTSTRING( "  # L" );
        PRINTINT( g_U8941 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8942 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8943 );
        PRINTNL();
        PRINTSTRING( "  @ L" );
        PRINTINT( g_U8935 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8936 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8937 );
        PRINTNL();
        SCRIPT_ASSERT( "invalid get_shop_most_money()" );
        return "invalid get_shop_most_money() - ALWYN FUCKED UP AGAIN!!!";
        break;
    }
    return "GET_NAME_FAVOURITE_SHOP()";
}

void sub_34482()
{
    if ((g_U8938 > g_U8940) AND (g_U8938 > g_U8939))
    {
        return 0;
        break;
    }
    if ((g_U8939 > g_U8940) AND (g_U8939 > g_U8938))
    {
        return 1;
        break;
    }
    if ((g_U8940 > g_U8939) AND (g_U8940 > g_U8938))
    {
        return 2;
        break;
    }
    if ((g_U8938 == 0) AND ((g_U8938 == 0) AND (g_U8938 == 0)))
    {
        return sub_34631( 8 );
        break;
    }
    if ((g_U8940 != g_U8938) AND ((g_U8939 != g_U8940) AND (g_U8938 == g_U8939)))
    {
        return sub_34631( 5 );
        break;
    }
    if ((g_U8940 != g_U8938) AND ((g_U8939 == g_U8940) AND (g_U8938 != g_U8939)))
    {
        return sub_34631( 6 );
        break;
    }
    if ((g_U8940 == g_U8938) AND ((g_U8939 != g_U8940) AND (g_U8938 != g_U8939)))
    {
        return sub_34631( 7 );
        break;
    }
    return sub_34631( 8 );
}

void sub_34631(int iParam0)
{
    if (((iParam0 == 8) || ((iParam0 == 7) || (iParam0 == 5))) AND ((g_U8941 > g_U8943) AND (g_U8941 > g_U8942)))
    {
        return 0;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 5) || (iParam0 == 6))) AND ((g_U8942 > g_U8943) AND (g_U8942 > g_U8941)))
    {
        return 1;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 6) || (iParam0 == 7))) AND ((g_U8943 > g_U8942) AND (g_U8943 > g_U8941)))
    {
        return 2;
        break;
    }
    if ((g_U8941 == 0) AND ((g_U8941 == 0) AND (g_U8941 == 0)))
    {
        return sub_34825( 8 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 5)) AND ((g_U8943 != g_U8941) AND ((g_U8942 != g_U8943) AND (g_U8941 == g_U8942))))
    {
        return sub_34825( 5 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 6)) AND ((g_U8943 != g_U8941) AND ((g_U8942 == g_U8943) AND (g_U8941 != g_U8942))))
    {
        return sub_34825( 6 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 7)) AND ((g_U8943 == g_U8941) AND ((g_U8942 != g_U8943) AND (g_U8941 != g_U8942))))
    {
        return sub_34825( 7 );
        break;
    }
    return sub_34825( 8 );
}

int sub_34825(int iParam0)
{
    if (((iParam0 == 8) || ((iParam0 == 7) || (iParam0 == 5))) AND ((g_U8935 > g_U8937) AND (g_U8935 > g_U8936)))
    {
        return 0;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 5) || (iParam0 == 6))) AND ((g_U8936 > g_U8937) AND (g_U8936 > g_U8935)))
    {
        return 1;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 6) || (iParam0 == 7))) AND ((g_U8937 > g_U8936) AND (g_U8937 > g_U8935)))
    {
        return 2;
        break;
    }
    if ((g_U8935 == 0) AND ((g_U8935 == 0) AND (g_U8935 == 0)))
    {
        return 4;
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 5)) AND ((g_U8937 != g_U8935) AND ((g_U8936 != g_U8937) AND (g_U8935 == g_U8936))))
    {
        return 5;
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 6)) AND ((g_U8937 != g_U8935) AND ((g_U8936 == g_U8937) AND (g_U8935 != g_U8936))))
    {
        return 6;
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 7)) AND ((g_U8937 == g_U8935) AND ((g_U8936 != g_U8937) AND (g_U8935 != g_U8936))))
    {
        return 7;
        break;
    }
    return 8;
}

void sub_36606(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    SET_WIDESCREEN_BORDERS( 0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

int sub_36834()
{
    if (g_U8916)
    {
        if (NOT g_U8915)
        {
            g_U8915 = 1;
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 1;
}

void sub_37202(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_639(), -1 * iParam2 );
    g_U8789[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8938 += iParam2;
        g_U8941++;
        break;
        case 1:
        g_U8939 += iParam2;
        g_U8942++;
        break;
        case 2:
        g_U8940 += iParam2;
        g_U8943++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_11269( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_37514(unknown uParam0)
{
    if (sub_21563( 5, 0 ))
    {
        if (sub_21944( 5, uParam0, 0 ))
        {
            sub_805( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_639() )))
    {
        sub_805( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_37849(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    iVar48 = (uParam34^);
    if (g_U8921)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar48 );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (sub_33876())
    {
        if ((NOT sub_33956()) AND (NOT (IS_SCORE_GREATER( sub_639(), iVar48 - 1 ))))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_L" );
            while (NOT (sub_34085( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_36834())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8923, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, "HELP_BOUGHT_L_F", 16 );
                    break;
                }
                PRINT_HELP( "HELP_BOUGHT_L_F" );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_L", iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8923, "HELP_BOUGHT_L", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, "HELP_BOUGHT_L", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, "HELP_BOUGHT_L", 16 );
                    break;
                }
            }
            sub_38486( uParam37, uParam0._fU80, iVar48, uParam39, uParam45 );
            while (NOT (sub_34085( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_37514( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_34085( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT g_U8921)
    {
        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_TROUSERS", 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
        {
            PRINT_WITH_NUMBER( "BUY_TROUSERS", iVar48, 7500, 1 );
        }
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_TROUSERS_A", 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( "BUY_TROUSERS_A", iVar48, 7500, 1 );
    };;;;
    if ((sub_13692( sub_572(), 88 )) AND (sub_13692( sub_572(), 80 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_572(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam33 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_38486(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_639(), -1 * iParam2 );
    g_U8835[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8938 += iParam2;
        g_U8941++;
        break;
        case 1:
        g_U8939 += iParam2;
        g_U8942++;
        break;
        case 2:
        g_U8940 += iParam2;
        g_U8943++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_11269( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_39306(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    unknown uVar16;
    int iVar17;
    string sVar18;
    int iVar19;
    unknown uVar20;
    int iVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    sub_14487( ref uVar16 );
    iVar17 = (uParam2^);
    if (g_U8921)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar17 );
        iVar17 = (uParam2^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar17 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (g_U8862[uVar16])
    {
        if ((NOT g_U15728[6]) AND (NOT g_U8915))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", sub_27224( uVar16 ) )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER_WITH_STRING( "LB_TRYON_R3", sub_27224( uVar16 ) );
            }
            sVar18 = "LB_TRYON_R3";
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_F", sub_27224( uVar16 ) )))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27224( uVar16 ) );
        }
        sVar18 = "HELP_OWN_F";;
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_F" )))
    {
        CLEAR_HELP();
        PRINT_HELP_FOREVER( "HELP_BUY_F" );
    }
    sVar18 = "HELP_BUY_F";;
    GET_KEYBOARD_MOVE_INPUT( ref iVar19, ref uVar20 );
    if (IS_BUTTON_PRESSED( 0, 0 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar21, ref uVar22, ref uVar23, ref uVar24 );
        if (iVar21 < 65472)
        {
            sub_39789( 1, uParam0 );
        }
        else if (iVar21 >= 64)
        {
            sub_39789( 0, uParam0 );
        }
    }
    else if ((iVar19 < 65472) || ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 ))))
    {
        sub_39789( 1, uParam0 );
    }
    else if ((iVar19 >= 64) || ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 ))))
    {
        sub_39789( 0, uParam0 );
    }
    else if (sub_33876())
    {
        if (NOT ((NOT ((g_U15728[6]) || (g_U8915))) AND (g_U8862[uVar16])))
        {
            CLEAR_PRINTS();
            if (NOT sub_36834())
            {
                iVar17 = 0;
                PRINT_HELP( "HELP_BOUGHT_F_F" );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8923, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, "HELP_BOUGHT_F_F", 16 );
                    break;
                }
                sub_40453( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_34085( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
            else if (NOT (IS_SCORE_GREATER( sub_639(), iVar17 - 1 )))
            {
                CLEAR_PRINTS();
                PRINT_HELP( "HELP_POOR_F" );
                while (NOT (sub_34085( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                return 1;
            }
            else
            {
                CLEAR_PRINTS();
                PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_F", iVar17 );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8923, "HELP_BOUGHT_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, "HELP_BOUGHT_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, "HELP_BOUGHT_F", 16 );
                    break;
                }
                sub_40453( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_34085( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
        }
    }
    else if (sub_37514( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_34085( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_25555( uVar16, 3, 0 ), 4, "", "", "", iVar17, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_25555( uVar16, 3, 0 ), iVar17, 7500, 1 );
    };;;;;;
    if ((sub_13692( sub_572(), 88 )) AND (sub_13692( sub_572(), 80 )))
    {
        if (TIMERA() > iParam1)
        {
            TASK_PLAY_ANIM( sub_572(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iParam1 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_39789(boolean bParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    if (IS_SCREEN_FADED_IN())
    {
        iVar5 = -1;
        iVar6 = -1;
        sub_14487( ref iVar7 );
        for ( I = 0; I < (uParam1^); I++ )
        {
            if (iVar7 == (uParam1^)[I])
            {
                iVar5 = I;
            }
        }
        if (bParam0)
        {
            sub_9835( "  * left (iThis_foot: " );
            sub_10078( iVar5 );
            iVar6 = iVar5 - 1;
            if (iVar6 < 0)
            {
                iVar6 += (uParam1^);
            }
        }
        else
        {
            sub_9835( "  * right (iThis_foot: " );
            sub_10078( iVar5 );
            iVar6 = iVar5 + 1;
            if (iVar6 >= (uParam1^))
            {
                iVar6 -= (uParam1^);
            }
        }
        DO_SCREEN_FADE_OUT( 125 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        sub_9835( "),  next: " );
        sub_10078( iVar6 );
        sub_14412();
        sub_25386( (uParam1^)[iVar6] );
        DO_SCREEN_FADE_IN( 125 );
    }
    WAIT( 0 );
    return;
}

void sub_40453(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_639(), -1 * iParam2 );
    g_U8862[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8938 += iParam2;
        g_U8941++;
        break;
        case 1:
        g_U8939 += iParam2;
        g_U8942++;
        break;
        case 2:
        g_U8940 += iParam2;
        g_U8943++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_11269( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

