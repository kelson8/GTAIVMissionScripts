void main()
{
    int I;
    unknown uVar3;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U172 = 0;
    l_U192 = 0;
    l_U193 = 31;
    l_U194 = 0;
    l_U195 = 0;
    l_U196 = 0;
    l_U1317 = 1;
    l_U1318 = 0;
    l_U1320 = 0;
    l_U1321 = 0;
    l_U1323 = 1;
    l_U1324 = -1;
    l_U1326 = -109247258;
    l_U1330 = "C_RUS_18x12_Room02";
    l_U1334 = {-1.60000000, -6.00000000, 1.40000000};
    l_U1337 = {2.00000000, 2.50000000, 1.50000000};
    l_U1340 = {893.67100000, -442.88300000, 16.76020000};
    l_U1343 = {-5.50000000, 0.50000000, 0.00000000};
    l_U1346 = {6.50000000, 5.75000000, 2.50000000};
    StrCopy( ref l_U1349, "blank", 16 );
    StrCopy( ref l_U1353, "blank", 16 );
    l_U1373 = 0;
    l_U1380 = 4.00000000;
    l_U1389 = -0.40000000;
    l_U1399 = -1;
    l_U1400 = 0;
    l_U1401 = 0;
    l_U1402 = 0;
    l_U1403 = 0;
    l_U1404 = 0;
    l_U1405 = 0;
    l_U1406 = 0;
    l_U1407 = 0;
    l_U1413 = 0;
    l_U1414 = 0;
    l_U1384 = {l_U1418._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_392();
    }
    while (l_U1317)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U194)
            {
                case 0:
                GET_INTERIOR_AT_COORDS( l_U1384._fU0, l_U1384._fU4, l_U1384._fU8, ref l_U1329 );
                if (l_U1329 != nil)
                {
                    sub_2856();
                    sub_10360();
                    l_U194 = 1;
                }
                break;
                case 1:
                if (NOT g_U8913)
                {
                    if (g_U15728[6])
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
                        l_U194 = 5;
                    }
                    else
                    {
                        l_U194 = 2;
                    }
                }
                else
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
                    l_U194 = 5;
                }
                break;
                case 2:
                if (l_U1329 == nil)
                {
                    GET_INTERIOR_AT_COORDS( l_U1384._fU0, l_U1384._fU4, l_U1384._fU8, ref l_U1329 );
                }
                else if (((sub_11617( sub_598(), l_U1330 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_598(), l_U1384._fU0 + l_U1343._fU0, l_U1384._fU4 + l_U1343._fU4, l_U1384._fU8 + l_U1343._fU8, l_U1346._fU0, l_U1346._fU4, l_U1346._fU8, 0 ))) || (LOCATE_CHAR_ON_FOOT_3D( sub_598(), l_U1340._fU0, l_U1340._fU4, l_U1340._fU8, 1.60000000, 1.60000000, 2.00000000, 0 )))
                {
                    if (sub_11674( l_U1330, l_U1384 ))
                    {
                        if (NOT sub_11912())
                        {
                            if ((g_U8913) || (g_U15728[6]))
                            {
                                l_U194 = 5;
                            }
                            else
                            {
                                sub_11970();
                            }
                        }
                        else
                        {
                            sub_11970();
                        }
                    }
                }
                break;
                case 4:
                if (sub_16050())
                {
                    g_U8913 = 1;
                    l_U194 = 1;
                }
                break;
                case 5:
                l_U1417 = 0;
                if (sub_11674( l_U1330, l_U1384 ))
                {
                    if (sub_11970())
                    {
                        for ( l_U1379 = 0; l_U1379 < 31; l_U1379++ )
                        {
                            if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EXIT" ))) AND (LOCATE_CHAR_ON_FOOT_3D( sub_598(), l_U278[l_U1379]._fU8._fU0, l_U278[l_U1379]._fU8._fU4, l_U278[l_U1379]._fU8._fU8, l_U278[l_U1379]._fU32._fU0, l_U278[l_U1379]._fU32._fU4, l_U278[l_U1379]._fU32._fU8, 0 )))
                            {
                                if (NOT (sub_19612( ref g_U8923, ProtectedGet(l_U1322), ref l_U1324 )))
                                {
                                    switch (l_U278[l_U1379]._fU72)
                                    {
                                        case 4:
                                        switch (l_U1379)
                                        {
                                            case 0:
                                            if (2)
                                            {
                                                sub_29803();
                                                l_U193 = l_U1379;
                                                l_U194 = 8;
                                            }
                                            break;
                                            break;
                                            1;
                                            ref l_U1322;
                                            sub_20074( l_U278[l_U1379]._fU44, l_U278[l_U1379]._fU56, l_U278[l_U1379]._fU68, ref l_U1308, ProtectedGet(l_U278[l_U1379]._fU100), l_U278[l_U1379]._fU4, l_U1329, ref l_U1319, l_U1363, ref l_U1364, ref l_U1378, ref l_U1322, 1, 1, l_U278[l_U1379]._fU104, l_U278[l_U1379]._fU116, l_U278[l_U1379]._fU128, 0, ref l_U1323 );
                                            break;
                                            case 1:
                                            case 2:
                                            case 3:
                                            if (2)
                                            {
                                                sub_29803();
                                                l_U193 = l_U1379;
                                                l_U194 = 8;
                                            }
                                            break;
                                            break;
                                            1;
                                            ref l_U1322;
                                            sub_20074( l_U278[l_U1379]._fU44, l_U278[l_U1379]._fU56, l_U278[l_U1379]._fU68, ref l_U1312, ProtectedGet(l_U278[l_U1379]._fU100), l_U278[l_U1379]._fU4, l_U1329, ref l_U1319, l_U1363, ref l_U1364, ref l_U1378, ref l_U1322, 1, 1, l_U278[l_U1379]._fU104, l_U278[l_U1379]._fU116, l_U278[l_U1379]._fU128, 0, ref l_U1323 );
                                            break;
                                            default: PRINTSTRING( "baddness... " );
                                        }
                                        break;
                                        case 3:
                                        if (2)
                                        {
                                            sub_29803();
                                            l_U193 = l_U1379;
                                            l_U194 = 7;
                                        }
                                        break;
                                        break;
                                        1;
                                        ref l_U1322;
                                        sub_30380( l_U278[l_U1379]._fU44, l_U278[l_U1379]._fU56, l_U278[l_U1379]._fU68, l_U278[l_U1379]._fU80, ProtectedGet(l_U278[l_U1379]._fU100), l_U278[l_U1379]._fU4, l_U1329, ref l_U1319, l_U1363, ref l_U1364, ref l_U1378, ref l_U1322, 1, 1, l_U1353, l_U278[l_U1379]._fU104, l_U278[l_U1379]._fU116, l_U278[l_U1379]._fU128, 0, ref l_U1323 );
                                        break;
                                        case 2:
                                        if (2)
                                        {
                                            sub_29803();
                                            l_U193 = l_U1379;
                                            l_U194 = 6;
                                        }
                                        break;
                                        break;
                                        1;
                                        ref l_U1322;
                                        sub_31444( l_U278[l_U1379]._fU44, l_U278[l_U1379]._fU56, l_U278[l_U1379]._fU68, l_U278[l_U1379]._fU76, ProtectedGet(l_U278[l_U1379]._fU100), l_U278[l_U1379]._fU4, l_U1329, ref l_U1319, l_U1363, ref l_U1364, ref l_U1378, ref l_U1322, 1, 1, l_U1353, l_U278[l_U1379]._fU104, l_U278[l_U1379]._fU116, l_U278[l_U1379]._fU128, 0, ref l_U1323 );
                                        break;
                                        case 0:
                                        if (sub_33618( l_U278[l_U1379]._fU44, l_U278[l_U1379]._fU56, l_U278[l_U1379]._fU68, ProtectedGet(l_U278[l_U1379]._fU100), l_U278[l_U1379]._fU4, l_U1329, ref l_U1378, l_U278[l_U1379]._fU104, l_U278[l_U1379]._fU116, l_U278[l_U1379]._fU128, ref l_U1323 ))
                                        {
                                            sub_29803();
                                            l_U193 = l_U1379;
                                            l_U194 = 9;
                                        }
                                        break;
                                        case 1:
                                        if (sub_35778( l_U278[l_U1379]._fU44, l_U278[l_U1379]._fU56, l_U278[l_U1379]._fU68, ProtectedGet(l_U278[l_U1379]._fU100), l_U278[l_U1379]._fU4, l_U1329, ref l_U1378, l_U278[l_U1379]._fU104, l_U278[l_U1379]._fU116, l_U278[l_U1379]._fU128, ref l_U1323 ))
                                        {
                                            sub_29803();
                                            l_U193 = l_U1379;
                                            l_U194 = 10;
                                        }
                                        break;
                                        default:
                                        sub_10402( "  ** clothes_info[" );
                                        sub_10645( l_U1379 );
                                        sub_10402( "]." );
                                        SCRIPT_ASSERT( "ped_comp in binco_brook_s.sc not found!" );
                                        sub_21295();
                                    }
                                }
                                l_U1417 = 1;
                            }
                        }
                    }
                    else if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        for ( I = 0; I < 31; I++ )
                        {
                            if (NOT (IS_STRING_NULL( l_U278[I]._fU4 )))
                            {
                                if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", l_U278[I]._fU4 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U278[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U278[I]._fU4 ))))
                                {
                                    CLEAR_HELP();
                                }
                            }
                            sub_831( 2, "BLANK" );
                        }
                    }
                    if (NOT l_U1417)
                    {
                        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EXIT" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_05" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_02" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_CS_01" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref g_U8923, ProtectedGet(l_U1322) ))) AND (IS_HELP_MESSAGE_BEING_DISPLAYED()))))))
                        {
                            for ( I = 0; I < 31; I++ )
                            {
                                if (NOT (IS_STRING_NULL( l_U278[I]._fU4 )))
                                {
                                    if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", l_U278[I]._fU4 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U278[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U278[I]._fU4 ))))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                sub_831( 2, "BLANK" );
                            }
                        }
                        sub_831( 2, uVar3 );
                        l_U1323 = 1;
                    }
                    if ((g_U15728[6]) AND (NOT g_U8914))
                    {
                        if (NOT (sub_11617( sub_598(), l_U1330 )))
                        {
                            PRINT_HELP( "SHOP_H_EXIT" );
                            g_U8914 = 1;
                        }
                    }
                }
                break;
                case 6:
                if (2)
                {
                    l_U194 = 5;
                }
                break;
                break;
                1;
                ref l_U1322;
                sub_37998( l_U278[l_U193], l_U1374, ref l_U1322, 1, 1, ref l_U1363, ref l_U1364, 0, l_U1378, l_U1357, l_U1325 );
                break;
                case 7:
                if (2)
                {
                    l_U194 = 5;
                }
                break;
                break;
                1;
                ref l_U1322;
                sub_42158( l_U278[l_U193], l_U1374, ref l_U1322, 1, 1, ref l_U1363, ref l_U1364, 0, l_U1378, l_U1357, l_U1325 );
                break;
                case 8:
                switch (l_U193)
                {
                    case 0:
                    if (2)
                    {
                        l_U194 = 5;
                    }
                    break;
                    break;
                    1;
                    ref l_U1322;
                    sub_43627( ref l_U1322, 1, 1, ref l_U1363, ref l_U1364, 0, l_U1378, l_U1357, l_U1325 );
                    l_U1374;
                    ref l_U1308;
                    break;
                    case 1:
                    case 2:
                    case 3:
                    if (2)
                    {
                        l_U194 = 5;
                    }
                    break;
                    break;
                    1;
                    ref l_U1322;
                    sub_43627( ref l_U1322, 1, 1, ref l_U1363, ref l_U1364, 0, l_U1378, l_U1357, l_U1325 );
                    l_U1374;
                    ref l_U1312;
                    break;
                    default: PRINTSTRING( "more baddness... " );
                }
                break;
                break;
                case 9:
                if (sub_45941( 0, l_U1378, l_U1357 ))
                {
                    l_U194 = 5;
                }
                break;
                case 10:
                if (sub_52946( 0, l_U1378, l_U1357 ))
                {
                    l_U194 = 5;
                }
                break;
            }
        }
        else
        {
            l_U1317 = 0;
        }
    }
    sub_392();
    return;
}

void sub_392()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U1325 );
    sub_412();
    REMOVE_DECISION_MAKER( l_U1327 );
    REMOVE_DECISION_MAKER( l_U1328 );
    REMOVE_ANIMS( "clothing" );
    if (NOT (IS_CHAR_DEAD( sub_598() )))
    {
        FREEZE_CHAR_POSITION( sub_598(), 0 );
        if ((l_U1318) AND (IS_PLAYER_PLAYING( sub_665() )))
        {
            SET_PLAYER_CONTROL( sub_665(), 1 );
            l_U1318 = 0;
        }
    }
    sub_757( ref l_U1364, ref l_U1363, ref l_U1349, ref l_U1353, 0, IS_THIS_A_MINIGAME_SCRIPT() );
    StrCopy( ref g_U8923, "blank", 16 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_412()
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

void sub_598()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_665()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_757(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
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
    sub_831( 5, uParam2 );
    sub_831( 2, uParam3 );
    sub_831( 2, "BLANK" );
    if (bParam5)
    {
        if (g_U8766)
        {
            sub_1211( sub_598(), l_U173 );
            sub_2396();
            g_U8766 = 0;
        }
    }
    if (g_U8765 != 6)
    {
        sub_2439();
        g_U8765 = 6;
    }
    return;
}

void sub_831(int iParam0, string sParam1)
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
                    sub_1052();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_665(), 1 );
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

void sub_1052()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_1211(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
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
        sub_1240( uParam0, ref uVar21, 0 );
        if (uParam1._fU0 != uVar21._fU0)
        {
            if (uParam1._fU0 != 10)
            {
                if (uParam1._fU0 < 0)
                {
                    CLEAR_CHAR_PROP( sub_598(), 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( sub_598(), 0, uParam1._fU0 );
                }
            }
            else
            {
                CLEAR_CHAR_PROP( uParam0, 0 );
                if (((GET_CHAR_TEXTURE_VARIATION( sub_598(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_598(), 8 )) != 1))
                {
                    SET_CHAR_COMPONENT_VARIATION( sub_598(), 8, 1, 0 );
                }
            }
        }
        if (uParam1._fU4 != uVar21._fU4)
        {
            if (uParam1._fU4 < 0)
            {
                CLEAR_CHAR_PROP( sub_598(), 1 );
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

void sub_1240(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 8 );
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

void sub_2396()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2439()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_2448(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_2448(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( sub_665() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_598(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_2448()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2856()
{
    sub_2865();
    sub_5322();
    sub_6763();
    sub_8996();
    sub_9622();
    sub_1240( sub_598(), ref l_U173, 0 );
    StrCopy( ref g_U8923, "blank", 16 );
    if (g_U8916)
    {
        if (NOT g_U8913)
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 1, 0.00000000 );
        }
    }
    return;
}

void sub_2865()
{
    sub_2943( 0, 3.30000000, -2.30000000, 1.40000000, 1.10000000, 0.90000000, 1.50000000, 3.90000000, -2.10000000, 1.40000000, 886.55080000, -438.63370000, 14.86010000, 360.00000000 );
    sub_2943( 1, 2.15000000, -5.75000000, 1.40000000, 0.70000000, 1.05000000, 1.50000000, 1.50000000, -6.30000000, 1.40000000, 889.46870000, -439.42720000, 14.86010000, 270.00000000 );
    sub_2943( 2, 3.70000000, -5.20000000, 1.40000000, 1.25000000, 0.50000000, 1.50000000, 3.90000000, -5.20000000, 1.40000000, 889.30950000, -437.99200000, 14.86010000, 360.00000000 );
    sub_2943( 3, 3.30000000, -4.50000000, 1.40000000, 0.55000000, 0.90000000, 1.50000000, 3.90000000, -5.20000000, 1.40000000, 889.40860000, -438.49200000, 14.86010000, 360.00000000 );
    sub_2943( 4, -4.00000000, -3.60000000, 1.40000000, 0.75000000, 1.25000000, 1.50000000, -4.20000000, -3.60000000, 1.40000000, 887.99300000, -444.45670000, 14.86010000, 180.00000000 );
    sub_2943( 5, -6.50000000, -1.90000000, 1.40000000, 1.25000000, 1.25000000, 1.50000000, -7.20000000, -1.90000000, 1.40000000, 886.03130000, -446.80920000, 14.86010000, 180.00000000 );
    sub_2943( 6, -6.50000000, 0.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 0.80000000, 1.40000000, 883.48800000, -447.09710000, 14.86010000, 81.36000000 );
    sub_2943( 7, -6.50000000, 1.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 0.80000000, 1.40000000, 883.28800000, -447.02710000, 14.86010000, 360.00000000 );
    sub_2943( 8, -6.50000000, 2.55000000, 1.40000000, 0.50000000, 1.00000000, 1.50000000, -7.40000000, 2.30000000, 1.40000000, 881.77180000, -447.65280000, 14.86010000, 318.60000000 );
    sub_2943( 9, -6.70000000, 3.45000000, 1.40000000, 0.40000000, 0.80000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 880.65670000, -447.66370000, 14.86010000, 360.00000000 );
    sub_2943( 10, -6.70000000, 4.25000000, 1.40000000, 0.40000000, 0.80000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 880.15770000, -447.46470000, 14.86010000, 311.76000000 );
    sub_2943( 11, -7.00000000, 5.40000000, 1.40000000, 0.75000000, 0.50000000, 1.50000000, -7.40000000, 3.90000000, 1.40000000, 879.55770000, -447.76470000, 14.86010000, 335.00000000 );
    sub_2943( 12, -6.10000000, 5.40000000, 1.40000000, 0.75000000, 0.40000000, 1.50000000, -6.30000000, 5.80000000, 1.40000000, 879.62440000, -447.51200000, 14.86010000, 287.64000000 );
    sub_2943( 13, -5.25000000, 5.40000000, 1.40000000, 0.75000000, 0.45000000, 1.50000000, -6.30000000, 5.80000000, 1.40000000, 879.62440000, -446.51200000, 14.86010000, 270.00000000 );
    sub_2943( 14, -4.40000000, 5.40000000, 1.40000000, 0.75000000, 0.40000000, 1.50000000, -4.80000000, 5.80000000, 1.40000000, 879.62440000, -445.61200000, 14.86010000, 270.00000000 );
    sub_2943( 15, -3.20000000, 5.30000000, 1.40000000, 0.75000000, 0.80000000, 1.50000000, -3.30000000, 5.80000000, 1.40000000, 879.62440000, -444.63640000, 14.86010000, 270.00000000 );
    sub_2943( 16, -1.80000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 1.40000000, 5.80000000, 1.40000000, 879.62440000, -443.12100000, 14.86010000, 270.00000000 );
    sub_2943( 17, -0.60000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 1.40000000, 5.80000000, 1.40000000, 879.62440000, -441.82100000, 14.86010000, 206.28000000 );
    sub_2943( 18, 0.60000000, 5.30000000, 1.40000000, 0.75000000, 0.60000000, 1.50000000, 2.90000000, 5.80000000, 1.40000000, 879.62440000, -440.49660000, 14.86010000, 300.00000000 );
    sub_2943( 19, -1.40000000, -0.60000000, 1.40000000, 1.70000000, 0.65000000, 1.50000000, -0.90000000, -0.80000000, 1.40000000, 884.94960000, -443.20320000, 14.86010000, 265.00000000 );
    sub_2943( 20, -1.40000000, 2.50000000, 1.40000000, 1.40000000, 0.65000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 883.11180000, -443.20320000, 14.86010000, 265.00000000 );
    sub_2943( 21, 0.00000000, -0.60000000, 1.40000000, 1.70000000, 0.65000000, 1.50000000, -0.90000000, 2.90000000, 1.40000000, 884.94960000, -440.99840000, 14.86010000, 310.00000000 );
    sub_2943( 22, 0.00000000, 2.50000000, 1.40000000, 1.40000000, 0.65000000, 1.50000000, -0.30000000, 2.90000000, 1.40000000, 882.05420000, -440.99840000, 14.86010000, 310.00000000 );
    sub_2943( 23, 1.30000000, -0.10000000, 1.40000000, 1.00000000, 0.60000000, 1.50000000, -0.90000000, -0.80000000, 1.40000000, 884.84960000, -440.30320000, 14.86010000, 136.08000000 );
    sub_2943( 24, 2.40000000, -0.60000000, 1.40000000, 0.50000000, 0.50000000, 1.50000000, -0.90000000, 2.90000000, 1.40000000, 884.94960000, -438.35620000, 14.86010000, 310.00000000 );
    sub_2943( 25, 2.40000000, 0.40000000, 1.40000000, 0.50000000, 0.50000000, 1.50000000, -0.30000000, 2.90000000, 1.40000000, 883.81180000, -438.35620000, 14.86010000, 150.84000000 );
    sub_2943( 26, 3.55000000, 0.60000000, 1.40000000, 0.60000000, 0.60000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 883.73480000, -438.04510000, 14.86010000, 180.00000000 );
    sub_2943( 27, 3.55000000, 1.80000000, 1.40000000, 0.60000000, 0.60000000, 1.50000000, -0.90000000, 1.60000000, 1.40000000, 882.83380000, -438.14510000, 14.86010000, 208.44000000 );
    sub_2943( 28, -3.60000000, 3.10000000, 1.40000000, 1.30000000, 1.30000000, 1.50000000, -3.60000000, 3.00000000, 1.40000000, 880.33720000, -444.14280000, 14.86020000, 199.80000000 );
    sub_2943( 29, -3.70000000, -1.55000000, 1.40000000, 1.30000000, 1.30000000, 1.50000000, -3.70000000, -1.55500000, 1.40000000, 886.88420000, -443.88750000, 14.86010000, 296.28000000 );
    sub_2943( 30, -0.75000000, -3.35000000, 1.40000000, 1.00000000, 1.30000000, 1.50000000, -0.75500000, -2.95500000, 1.40000000, 888.34280000, -442.77800000, 14.86010000, 0.00000000 );
    return;
}

void sub_2943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    l_U278[uParam0]._fU20 = {uParam1};
    l_U278[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U1329, l_U278[uParam0]._fU20, ref l_U278[uParam0]._fU8 );
    l_U278[uParam0]._fU44 = {uParam7};
    l_U278[uParam0]._fU56 = {uParam10};
    l_U278[uParam0]._fU68 = uParam13;
    return;
}

void sub_5322()
{
    sub_5370( 0, 887.37380000, -437.51570000, 15.33330000, -11.61380000, -0.00000000, 142.78080000, 45.00000000 );
    sub_5370( 1, 889.96040000, -440.62840000, 15.17990000, -5.40710000, -0.00000000, 14.99760000, 45.00000000 );
    sub_5370( 2, 890.20290000, -438.89840000, 15.27450000, -4.81610000, -0.00000000, 46.66220000, 45.00000000 );
    sub_5370( 3, 889.98360000, -437.61470000, 15.20750000, -19.17140000, -0.00000000, 141.82150000, 45.00000000 );
    sub_5370( 4, 887.74300000, -445.36600000, 16.41000000, -0.00000000, 0.00000000, -17.61970000, 45.00000000 );
    sub_5370( 5, 885.78100000, -447.73900000, 16.44000000, -0.00000000, 0.00000000, -15.61970000, 45.00000000 );
    sub_5370( 6, 882.22420000, -446.08840000, 16.19200000, -2.88130000, -0.00000000, -129.52450000, 45.00000000 );
    sub_5370( 7, 884.67430000, -445.82060000, 16.03310000, 1.52540000, 0.00000000, 130.29370000, 45.00000000 );
    sub_5370( 8, 882.90160000, -446.87070000, 16.19080000, -1.06890000, 0.00000000, 129.72920000, 45.00000000 );
    sub_5370( 9, 881.71510000, -446.33680000, 16.27750000, -6.31340000, 0.00000000, 144.79260000, 45.00000000 );
    sub_5370( 10, 881.87700000, -446.53170000, 16.13120000, -1.38030000, -0.00000000, 127.53280000, 45.00000000 );
    sub_5370( 11, 880.57140000, -446.54710000, 16.19460000, -2.82760000, -0.00000000, 139.81290000, 45.00000000 );
    sub_5370( 12, 880.98850000, -446.92630000, 16.22140000, -4.05850000, -0.00000000, 115.47170000, 45.00000000 );
    sub_5370( 13, 881.02810000, -446.86690000, 16.28350000, -7.35730000, 0.00000000, 76.35370000, 45.00000000 );
    sub_5370( 14, 880.94420000, -446.11930000, 16.20920000, -1.29170000, -0.00000000, 72.99700000, 45.00000000 );
    sub_5370( 15, 880.98320000, -445.54110000, 16.23680000, -1.14890000, -0.00000000, 52.44150000, 45.00000000 );
    sub_5370( 16, 880.99540000, -444.03410000, 16.18310000, -1.47830000, 0.00000000, 54.58680000, 45.00000000 );
    sub_5370( 17, 880.51270000, -443.11550000, 16.12830000, -0.62840000, -0.00000000, 36.84500000, 45.00000000 );
    sub_5370( 18, 881.50190000, -440.64800000, 16.18430000, -3.46290000, -0.00000000, 84.68120000, 45.00000000 );
    sub_5370( 19, 887.69170000, -443.60670000, 15.66380000, -0.00400000, 0.00000000, 72.43540000, 45.00000000 );
    sub_5370( 20, 885.74800000, -443.56170000, 15.91160000, -4.56790000, -0.00000000, 77.65140000, 45.00000000 );
    sub_5370( 21, 887.63660000, -440.20030000, 15.70070000, -0.23050000, -0.00000000, 111.40480000, 45.00000000 );
    sub_5370( 22, 884.75760000, -440.22490000, 15.96060000, -3.67760000, -0.00000000, 105.52310000, 45.00000000 );
    sub_5370( 23, 882.37370000, -441.00780000, 15.84000000, -2.04930000, -0.00000000, -69.20680000, 45.00000000 );
    sub_5370( 24, 887.74730000, -438.07470000, 15.68770000, -0.89600000, 0.00000000, 95.58960000, 45.00000000 );
    sub_5370( 25, 881.75820000, -439.77580000, 15.96640000, -4.35970000, 0.00000000, -52.81070000, 45.00000000 );
    sub_5370( 26, 882.90330000, -439.35700000, 16.18190000, -0.41620000, -0.00000000, -29.20620000, 45.00000000 );
    sub_5370( 27, 883.20280000, -439.52230000, 16.26300000, -4.24870000, -0.00000000, 16.98330000, 45.00000000 );
    sub_5370( 28, 880.07030000, -446.66920000, 15.89730000, -4.39390000, 0.00000000, -3.82640000, 45.00000000 );
    sub_5370( 29, 889.38820000, -444.31630000, 15.68370000, 0.38010000, -0.00000000, 84.19290000, 45.00000000 );
    sub_5370( 30, 888.99070000, -440.17920000, 15.75850000, -1.46250000, 0.00000000, 165.90310000, 45.00000000 );
    return;
}

void sub_5370(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    l_U278[uParam0]._fU104 = {uParam1};
    l_U278[uParam0]._fU116 = {uParam4};
    l_U278[uParam0]._fU128 = uParam7;
    return;
}

void sub_6763()
{
    sub_6805( 0, "binco_SNEAKS_a", 7, 12, "clo_SSHOES" );
    sub_6805( 1, "binco_BOOTS_a", 7, 14, "clo_BSHOES" );
    sub_6805( 2, "binco_BOOTS_b", 0, 14, "clo_BSHOES" );
    sub_6805( 3, "binco_BOOTS_c", 0, 14, "clo_BSHOES" );
    sub_7191( 4, "binco_GLASSES", 0, 12, "clo_GLASSES" );
    sub_7413( 5, "binco_CAP", 0, 8, "clo_HAT" );
    sub_7646( 6, "binco_LEFT_0a", 10, 24, "clo_TORSO_10_1" );
    sub_7646( 7, "binco_LEFT_0b", 11, 24, "clo_TORSO_10_2" );
    sub_7646( 8, "binco_LEFT_0c", 9, 24, "clo_TORSO_10_0" );
    sub_7646( 9, "binco_LEFT_1a", 7, 26, "clo_TORSO_3_1" );
    sub_7646( 10, "binco_LEFT_1b", 8, 26, "clo_TORSO_3_2" );
    sub_7646( 11, "binco_LEFT_1c", 6, 26, "clo_TORSO_3_0" );
    sub_7646( 12, "binco_REAR_0a", 5, 26, "clo_TORSO_2_2" );
    sub_7646( 13, "binco_REAR_0b", 3, 26, "clo_TORSO_2_0" );
    sub_7646( 14, "binco_REAR_1", 4, 26, "clo_TORSO_2_1" );
    sub_7646( 15, "binco_REAR_2", 2, 36, "clo_TORSO_0_2" );
    sub_7646( 16, "binco_REAR_3a", 14, 36, "clo_TORSO_14_2" );
    sub_7646( 17, "binco_REAR_3b", 12, 36, "clo_TORSO_14_0" );
    sub_7646( 18, "binco_REAR_4", 13, 36, "clo_TORSO_14_1" );
    sub_8349( 19, "binco_LEGSa_L_0", 3, 24, "clo_LEGS_0_3" );
    sub_8349( 20, "binco_LEGSa_L_1", 0, 24, "clo_LEGS_0_0" );
    sub_8349( 21, "binco_LEGSa_R_0", 2, 24, "clo_LEGS_0_2" );
    sub_8349( 22, "binco_LEGSa_R_1", 1, 24, "clo_LEGS_0_1" );
    sub_8349( 23, "binco_LEGSb_L", 6, 24, "clo_LEGS_7_1" );
    sub_8349( 24, "binco_LEGSb_R_0", 7, 24, "clo_LEGS_7_2" );
    sub_8349( 25, "binco_LEGSb_R_1", 5, 24, "clo_LEGS_7_0" );
    sub_7646( 26, "binco_RIGHT_0", 0, 36, "clo_TORSO_0_0" );
    sub_7646( 27, "binco_RIGHT_1", 1, 36, "clo_TORSO_0_1" );
    sub_8349( 28, "binco_JEANS_BLUE_a", 4, 24, "clo_LEGS_1_0" );
    sub_8349( 29, "binco_JEANS_BLUE_b", 4, 24, "clo_LEGS_1_0" );
    sub_8349( 30, "binco_JEANS_BLUE_c", 4, 24, "clo_LEGS_1_0" );
    return;
}

void sub_6805(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U278[uParam0]._fU0 = uParam1;
    l_U278[uParam0]._fU4 = uParam4;
    l_U278[uParam0]._fU76 = 45;
    l_U278[uParam0]._fU80 = 26;
    l_U278[uParam0]._fU84 = uParam2;
    l_U278[uParam0]._fU88 = 4;
    l_U278[uParam0]._fU92 = 3;
    l_U278[uParam0]._fU96 = 20;
    l_U278[uParam0]._fU72 = 4;
    ProtectedSet(l_U278[uParam0]._fU100, uParam3);
    l_U1312[0] = 0;
    l_U1312[1] = 1;
    l_U1312[2] = 2;
    l_U1312[3] = 3;
    l_U1308[0] = 4;
    l_U1308[1] = 5;
    l_U1308[2] = 6;
    return;
}

void sub_7191(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U278[uParam0]._fU0 = uParam1;
    l_U278[uParam0]._fU4 = uParam4;
    l_U278[uParam0]._fU76 = 45;
    l_U278[uParam0]._fU80 = 26;
    l_U278[uParam0]._fU84 = 20;
    l_U278[uParam0]._fU88 = 4;
    l_U278[uParam0]._fU92 = uParam2;
    l_U278[uParam0]._fU96 = 20;
    l_U278[uParam0]._fU72 = 1;
    ProtectedSet(l_U278[uParam0]._fU100, uParam3);
    l_U1305[0] = 0;
    l_U1305[1] = 2;
    return;
}

void sub_7413(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U278[uParam0]._fU0 = uParam1;
    l_U278[uParam0]._fU4 = uParam4;
    l_U278[uParam0]._fU76 = 45;
    l_U278[uParam0]._fU80 = 26;
    l_U278[uParam0]._fU84 = 20;
    l_U278[uParam0]._fU88 = uParam2;
    l_U278[uParam0]._fU92 = 3;
    l_U278[uParam0]._fU96 = 20;
    l_U278[uParam0]._fU72 = 0;
    ProtectedSet(l_U278[uParam0]._fU100, uParam3);
    l_U1302[0] = 0;
    l_U1302[1] = 1;
    return;
}

void sub_7646(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U278[uParam0]._fU0 = uParam1;
    l_U278[uParam0]._fU4 = uParam4;
    l_U278[uParam0]._fU76 = uParam2;
    l_U278[uParam0]._fU80 = 26;
    l_U278[uParam0]._fU84 = 20;
    l_U278[uParam0]._fU88 = 4;
    l_U278[uParam0]._fU92 = 3;
    l_U278[uParam0]._fU96 = 20;
    l_U278[uParam0]._fU72 = 2;
    ProtectedSet(l_U278[uParam0]._fU100, uParam3);
    return;
}

void sub_8349(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    l_U278[uParam0]._fU0 = uParam1;
    l_U278[uParam0]._fU4 = uParam4;
    l_U278[uParam0]._fU76 = 45;
    l_U278[uParam0]._fU80 = uParam2;
    l_U278[uParam0]._fU84 = 20;
    l_U278[uParam0]._fU88 = 4;
    l_U278[uParam0]._fU92 = 3;
    l_U278[uParam0]._fU96 = 20;
    l_U278[uParam0]._fU72 = 3;
    ProtectedSet(l_U278[uParam0]._fU100, uParam3);
    return;
}

void sub_8996()
{
    l_U197[0]._fU0 = {0.17000000, 0.11000000, -0.01000000};
    l_U197[0]._fU12 = {1.90000000, -7.30000000, 0.30000000};
    l_U197[0]._fU24 = {0.16000000, 0.10000000, 0};
    l_U197[0]._fU36 = {18.46000000, 23.48000000, -22.68000000};
    l_U197[0]._fU48 = "Hat_russian_Take_Off_L";
    l_U197[0]._fU52 = "Hat_russian_Put_on_L";
    l_U197[0]._fU56 = "Hat_russian_Take_Off_R";
    l_U197[0]._fU60 = "Hat_russian_Put_on_R";
    l_U197[0]._fU64 = 0.42000000;
    l_U197[0]._fU68 = 0.64000000;
    l_U197[0]._fU72 = 0.15000000;
    l_U197[0]._fU76 = 0.46000000;
    l_U197[1]._fU0 = {0.18000000, 0.09000000, -0.13000000};
    l_U197[1]._fU12 = {1.05000000, -0.60000000, 1.52000000};
    l_U197[1]._fU24 = {0.15000000, 0.11000000, 0.13000000};
    l_U197[1]._fU36 = {-1.73000000, -0.65000000, -1.79000000};
    l_U197[1]._fU48 = "Hat_Take_Off_L";
    l_U197[1]._fU52 = "Hat_Put_on_L";
    l_U197[1]._fU56 = "Hat_Take_Off_R";
    l_U197[1]._fU60 = "Hat_Put_on_R";
    l_U197[1]._fU64 = 0.40900000;
    l_U197[1]._fU68 = 0.63000000;
    l_U197[1]._fU72 = 0.15000000;
    l_U197[1]._fU76 = 0.45800000;
    return;
}

void sub_9622()
{
    l_U197[2]._fU0 = {0.11200000, 0.10200000, -0.08800000};
    l_U197[2]._fU12 = {0.64090000, -0.00000000, 1.42630000};
    l_U197[2]._fU24 = {0.10300000, 0.09400000, 0.07900001};
    l_U197[2]._fU36 = {-2.28000000, 0.50500000, -2.10000000};
    l_U197[2]._fU48 = "specs_take_off_l";
    l_U197[2]._fU52 = "specs_put_on_l";
    l_U197[2]._fU56 = "specs_take_off_r";
    l_U197[2]._fU60 = "specs_put_on_r";
    l_U197[2]._fU64 = 0.35000000;
    l_U197[2]._fU68 = 0.75000000;
    l_U197[2]._fU72 = 0.25000000;
    l_U197[2]._fU76 = 0.72500000;
    l_U197[3]._fU0 = {0.12180000, 0.09900000, 0.00120000};
    l_U197[3]._fU12 = {0.64090000, -0.00000000, 1.42630000};
    l_U197[3]._fU24 = {0.14440000, 0.09800000, 0.03880000};
    l_U197[3]._fU36 = {-2.28000000, 0.50500000, -2.10000000};
    l_U197[3]._fU48 = "specs_take_off_l";
    l_U197[3]._fU52 = "specs_put_on_l";
    l_U197[3]._fU56 = "specs_take_off_r";
    l_U197[3]._fU60 = "specs_put_on_r";
    l_U197[3]._fU64 = 0.35000000;
    l_U197[3]._fU68 = 0.75000000;
    l_U197[3]._fU72 = 0.25000000;
    l_U197[3]._fU76 = 0.72500000;
    return;
}

void sub_10360()
{
    sub_10374( l_U1326 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1374 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1375 );
    while (NOT sub_10518())
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 1, ref l_U1327 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U1328 );
    CREATE_CHAR( 5, l_U1326, 888.82510000, -447.78480000, 15.86010000, ref l_U1325, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U1325, l_U1330 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U1325 );
    SET_CHAR_HEADING( l_U1325, 37.94300000 );
    SET_CHAR_DECISION_MAKER( l_U1325, l_U1327 );
    SET_COMBAT_DECISION_MAKER( l_U1325, l_U1328 );
    SET_CURRENT_CHAR_WEAPON( l_U1325, 0, 0 );
    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U1325, 888.82510000, -447.78480000, 15.86010000, 2.00000000 );
    g_U8917 = 0;
    sub_10909( "" );
    sub_11036( 0, sub_598(), "NIKO", 0 );
    sub_11036( 1, l_U1325, "SHOP_GIRL", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    return;
}

void sub_10374(unknown uParam0)
{
    sub_10402( "REQUEST_A_MODEL(" );
    sub_10402( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_10402( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U6[l_U39] = uParam0;
    l_U39++;
    return;
}

void sub_10402(unknown uParam0)
{
    return;
}

int sub_10518()
{
    int I;

    if (l_U39 != 0)
    {
        for ( I = 0; I <= (l_U39 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U6[I] )))
            {
                REQUEST_MODEL( l_U6[I] );
                sub_10402( "REQUEST_MODEL(" );
                sub_10402( GET_MODEL_NAME_FOR_DEBUG( l_U6[I] ) );
                sub_10402( ") [" );
                sub_10645( I );
                sub_10402( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_10645(unknown uParam0)
{
    return;
}

void sub_10909(unknown uParam0)
{
    StrCopy( ref l_U74._fU0, uParam0, 16 );
    sub_10928();
    return;
}

void sub_10928()
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

void sub_11036(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U74._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U74._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_11120( "\n PED NUMBER ", uParam0 );
    sub_11160( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_11120(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_11160(unknown uParam0, unknown uParam1)
{
    return;
}

boolean sub_11617(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_11674(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (sub_11617( sub_598(), uParam0 ))
    {
        REQUEST_ANIMS( "clothing" );
        if (NOT (HAVE_ANIMS_LOADED( "clothing" )))
        {
            REQUEST_ANIMS( "clothing" );
        }
        else if (NOT l_U1407)
        {
            l_U1407 = 1;
        }
        return 1;;
    }
    else if (HAVE_ANIMS_LOADED( "clothing" ))
    {
        GET_CHAR_COORDINATES( sub_598(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, uParam1._fU0, uParam1._fU4, ref fVar9 );
        if (fVar9 > 15.00000000)
        {
            REMOVE_ANIMS( "clothing" );
            l_U1407 = 0;
        }
    }
    return 0;
}

void sub_11912()
{
    int Result;

    Result = 0;
    return Result;
}

int sub_11970()
{
    vector vVar2;
    vector vVar5;
    int iVar8;

    if (NOT (IS_CHAR_INJURED( l_U1325 )))
    {
        vVar2 = {-6.60000000, 0.50000000, 0};
        vVar5 = {5.50000000, 5.75000000, 2.50000000};
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_598(), l_U1384._fU0 + vVar2.x, l_U1384._fU4 + vVar2.y, l_U1384._fU8 + vVar2.z, vVar5.x + 2.50000000, vVar5.y + 2.50000000, vVar5.z + 2.50000000, 0 )) AND (sub_11617( sub_598(), l_U1330 )))
        {
            if (sub_11617( l_U1325, l_U1330 ))
            {
                if ((IS_WANTED_LEVEL_GREATER( sub_665(), 0 )) || (IS_CHAR_IN_ANY_CAR( sub_598() )))
                {
                    if (NOT l_U1401)
                    {
                        sub_12203( 1, ref l_U1357, 0, ref l_U1325 );
                        l_U1401 = 1;
                        l_U1402 = 0;
                        l_U1406 = 1;
                    }
                    return 0;
                }
                else if (NOT g_U8767)
                {
                    if (NOT l_U1405)
                    {
                        PRINT_HELP( "CLO_CANT" );
                        l_U1405 = 1;
                    }
                    return 0;
                }
                else if (LOCATE_CHAR_ON_FOOT_3D( sub_598(), l_U1384._fU0 + vVar2.x, l_U1384._fU4 + vVar2.y, l_U1384._fU8 + vVar2.z, vVar5.x, vVar5.y, vVar5.z, 0 ))
                {
                    if (NOT l_U1401)
                    {
                        if (NOT l_U1406)
                        {
                            sub_12203( 3, ref l_U1357, 0, ref l_U1325 );
                            l_U1401 = 1;
                            l_U1402 = 0;
                        }
                    }
                }
                if ((l_U1400) || (IS_CHAR_SHOOTING( sub_598() )))
                {
                    if (sub_14641( l_U1325, 91 ))
                    {
                        sub_12203( 4, ref l_U1357, 0, ref l_U1325 );
                        CLEAR_CHAR_TASKS( l_U1325 );
                        TASK_COMBAT( l_U1325, sub_598() );
                        l_U1400 = 1;
                        WAIT( 500 );
                        PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_BELL", l_U1384 );
                        l_U1406 = 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref iVar8 );
                    if (sub_14641( l_U1325, 114 ))
                    {
                        if (iVar8 > (l_U1377 + 5000))
                        {
                            CLEAR_CHAR_TASKS( l_U1325 );
                            TASK_START_SCENARIO_IN_PLACE( l_U1325, "Scenario_Standing", -1082130432 );
                            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1375 );
                            GET_GAME_TIMER( ref l_U1376 );
                        }
                    }
                    else if ((iVar8 > (l_U1376 + 2500)) || (sub_14641( l_U1325, 34 )))
                    {
                        CLEAR_CHAR_TASKS( l_U1325 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U1325, sub_598() );
                        GET_GAME_TIMER( ref l_U1377 );
                    }
                    if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_665(), l_U1325 )) || (IS_PLAYER_TARGETTING_CHAR( sub_665(), l_U1325 )))
                    {
                        if (NOT l_U1403)
                        {
                            if (IS_CHAR_ARMED( sub_598(), 4 ))
                            {
                                sub_12203( 7, ref l_U1357, 0, ref l_U1325 );
                            }
                            else
                            {
                                sub_12203( 6, ref l_U1357, 0, ref l_U1325 );
                            }
                            l_U1403 = 1;
                        }
                    }
                    else if (NOT (sub_15116( l_U1357 )))
                    {
                        l_U1403 = 0;
                    }
                }
                if ((NOT l_U1404) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1325, sub_598(), 0 )))
                {
                    sub_12203( 0, ref l_U1357, 0, ref l_U1325 );
                    l_U1404 = 1;
                    l_U1406 = 1;
                };;;
            }
            else if (NOT l_U1321)
            {
                if (NOT (sub_11617( l_U1325, l_U1330 )))
                {
                    if (sub_11617( sub_598(), l_U1330 ))
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "SHOP_H_EMPTY" );
                        l_U1321 = 1;
                    }
                }
            }
            return 0;;
        }
        else if (l_U1321)
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EMPTY" ))
            {
                CLEAR_HELP();
            }
        }
        if (l_U1401)
        {
            if (NOT l_U1402)
            {
                if (NOT l_U1406)
                {
                    sub_12203( 2, ref l_U1357, 0, ref l_U1325 );
                    l_U1402 = 1;
                }
            }
        }
        if ((sub_15557( sub_598(), l_U1325 )) >= 25.00000000)
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLO_CANT" )))
            {
                l_U1405 = 0;
            }
            l_U1401 = 0;
        }
        return 1;
        break;
    }
    if (NOT (sub_15116( l_U1357 )))
    {
        sub_15839( ref l_U1357, 0 );
    }
    if (NOT l_U1321)
    {
        if (DOES_CHAR_EXIST( l_U1325 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U1321 = 1;
        }
    }
    g_U8917 = 1;
    return 0;
}

void sub_12203(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
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
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_598() );
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1c" )) >= 1)
    {
        GET_GROUP_SIZE( sub_2448(), ref uVar10, ref iVar11 );
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
    if ((iParam2 == 0) AND (sub_11912()))
    {
        if (NOT g_U8918)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_13085( g_U8918 );
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
                sub_13085( g_U8915 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_598() );
    }
    sub_10402( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_10402( ref cVar6 );
    sub_10402( "'')\n" );
    return sub_13449( ref cVar6, uParam1, 1, 0 );
}

void sub_13085(boolean bParam0)
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

void sub_13449(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13472( uParam0, ref l_U74._fU0, uParam1, uParam2, uParam3 );
}

void sub_13472(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_13526( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13526(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_13548( iParam1 )))
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
    sub_14228( ref g_U8947, ref l_U74 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_13548(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_10402( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_10402( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_10402( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_14228(int iParam0, int iParam1)
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

int sub_14641(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_15116(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_10402( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_10402( "\n speech is not playing" );
    }
    return 0;
}

void sub_15557(unknown uParam0, unknown uParam1)
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

void sub_15839(int iParam0, unknown uParam1)
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

int sub_16050()
{
    int iVar2;
    unknown uVar3;
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
    unknown uVar15;
    int I;

    if (l_U1399 < 0)
    {
        GET_GAME_TIMER( ref l_U1399 );
    }
    else if (sub_16096( ref l_U1373, l_U195 ))
    {
        GET_GAME_TIMER( ref iVar2 );
        if (iVar2 > (l_U1399 + 2500))
        {
            l_U196 = l_U195;
            l_U195 = 5;
        }
    }
    switch (l_U195)
    {
        case 0:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT( 125 );
                SET_PLAYER_CONTROL( sub_665(), 0 );
                l_U1318 = 1;
            }
        }
        else
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                if ((sub_16499( uVar3, l_U1330 )) || (LOCATE_CAR_3D( uVar3, l_U1340._fU0, l_U1340._fU4, l_U1340._fU8, 7.50000000, 7.50000000, 7.50000000, 0 )))
                {
                    if (sub_16568( 0, ref uVar4, ref uVar7 ))
                    {
                        SET_CAR_COORDINATES( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
                        SET_CAR_HEADING( uVar3, uVar7 );
                    }
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_598() );
            TASK_TOGGLE_DUCK( sub_598(), 0 );
            SET_CHAR_COORDINATES( sub_598(), l_U1340._fU0, l_U1340._fU4, 14.86010000 );
            SET_CHAR_HEADING( sub_598(), 90.00000000 );
            OPEN_SEQUENCE_TASK( ref l_U1390 );
            TASK_PAUSE( 0, 500 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 889.04720000, -442.97040000, l_U1340._fU8, 2, -1 );
            TASK_PAUSE( 0, 250 );
            TASK_START_SCENARIO_AT_POSITION( 0, "Scenario_Standing", 889.04720000 + l_U1389, -442.97040000, l_U1340._fU8, 90.00000000 );
            CLOSE_SEQUENCE_TASK( l_U1390 );
            TASK_PERFORM_SEQUENCE( sub_598(), l_U1390 );
            CLEAR_SEQUENCE_TASK( l_U1390 );
            REQUEST_INTERIOR_MODELS( -1997562918, l_U1330 );
            while (NOT (HAVE_ANIMS_LOADED( "clothing" )))
            {
                REQUEST_ANIMS( "clothing" );
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U1325 )))
            {
                TASK_PLAY_ANIM_UPPER_BODY( l_U1325, "lookaround_a", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            }
            CLEAR_AREA_OF_CHARS( 892.30000000, -444.40000000, 16.10000000, 20.00000000 );
            CLEAR_AREA_OF_OBJECTS( 892.30000000, -444.40000000, 16.10000000, 20.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
            sub_17556( ref l_U1363 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U1391[0] );
            SET_CAM_POS( l_U1391[0], 879.75540000, -442.95890000, 16.56979000 );
            SET_CAM_ROT( l_U1391[0], -6.02684600, 0.00000000, -89.05587000 );
            SET_CAM_FOV( l_U1391[0], 70.00000000 );
            CREATE_CAM( 14, ref l_U1391[1] );
            SET_CAM_POS( l_U1391[1], 880.05390000, -442.95400000, 16.53829000 );
            SET_CAM_ROT( l_U1391[1], -6.02684900, 0.00000000, -89.05587000 );
            SET_CAM_FOV( l_U1391[1], 70.00000000 );
            CREATE_CAM( 3, ref l_U1391[2] );
            CREATE_CAM( 14, ref l_U1395[0] );
            SET_CAM_POS( l_U1395[0], 890.22430000, -438.83030000, 16.89151000 );
            SET_CAM_ROT( l_U1395[0], -9.57918400, 0.00000000, 112.57860000 );
            SET_CAM_FOV( l_U1395[0], 45.00000000 );
            CREATE_CAM( 14, ref l_U1395[1] );
            SET_CAM_POS( l_U1395[1], 891.69500000, -442.77040000, 16.70820000 );
            SET_CAM_ROT( l_U1395[1], -5.04089200, -0.00000000, 90.00000000 );
            SET_CAM_FOV( l_U1395[1], 45.00000000 );
            CREATE_CAM( 3, ref l_U1395[2] );
            SET_CAM_ACTIVE( l_U1391[0], 1 );
            SET_CAM_ACTIVE( l_U1391[1], 1 );
            SET_CAM_PROPAGATE( l_U1391[2], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1391[2], l_U1391[0], l_U1391[1], 10000, 0 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            PRINT_HELP( "SHOP_CS_01" );
            DO_SCREEN_FADE_IN( 125 );
            SETTIMERB( 0 );
            l_U195 = 1;
        }
        break;
        case 1:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1391[2] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_598() );
            SET_CHAR_COORDINATES( sub_598(), 888.64090000, -442.92180000, 14.85120000 );
            SET_CHAR_HEADING( sub_598(), 90.00000000 );
            GET_GAME_CAM( ref uVar8 );
            GET_CAM_POS( uVar8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            GET_CAM_ROT( uVar8, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
            GET_CAM_FOV( uVar8, ref uVar15 );
            SET_CAM_POS( l_U1395[1], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAM_ROT( l_U1395[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            SET_CAM_FOV( l_U1395[1], uVar15 );
            SET_CAM_PROPAGATE( l_U1391[2], 0 );
            SET_CAM_ACTIVE( l_U1395[0], 1 );
            SET_CAM_ACTIVE( l_U1395[1], 1 );
            SET_CAM_PROPAGATE( l_U1395[2], 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U1395[2], l_U1395[0], l_U1395[1], 10000, 0 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_598(), l_U1330 );
            PRINT_HELP( "SHOP_CS_02" );
            l_U195 = 4;
        }
        break;
        case 4:
        if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1395[2] )))
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 500 );
            CLEAR_CHAR_TASKS( sub_598() );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            l_U195 = 6;
        }
        break;
        case 5:
        if (l_U196 == 1)
        {
            DO_SCREEN_FADE_OUT( 125 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_598() );
        SET_CHAR_COORDINATES( sub_598(), 889.04720000, -442.97040000, 14.86010000 );
        SET_CHAR_HEADING( sub_598(), 90.00000000 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 125 );
        }
        SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_598() );
        l_U195 = 6;
        break;
        case 6:
        for ( I = 0; I < l_U1391; I++ )
        {
            SET_CAM_PROPAGATE( l_U1391[I], 0 );
            SET_CAM_ACTIVE( l_U1391[I], 0 );
            DESTROY_CAM( l_U1391[I] );
        }
        for ( I = 0; I < l_U1395; I++ )
        {
            SET_CAM_PROPAGATE( l_U1395[I], 0 );
            SET_CAM_ACTIVE( l_U1395[I], 0 );
            DESTROY_CAM( l_U1395[I] );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_19018( ref l_U1363 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 377940039, 892.30000000, -444.40000000, 16.10000000, 0, 0.00000000 );
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -532546678, 892.30000000, -441.40000000, 16.10000000, 0, 0.00000000 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_598(), 0 );
        SET_PLAYER_CONTROL( sub_665(), 1 );
        l_U1318 = 0;
        SET_GAME_CAM_HEADING( 0.00000000 );
        if ((g_U8916) AND (NOT g_U8915))
        {
            PRINT_HELP( "SHOP_CS_05" );
        }
        if (NOT (IS_CHAR_INJURED( l_U1325 )))
        {
            CLEAR_CHAR_TASKS( l_U1325 );
            TASK_START_SCENARIO_IN_PLACE( l_U1325, "Scenario_Standing", -1082130432 );
        }
        l_U1373 = 0;
        g_U8913 = 1;
        return 1;
        break;
    }
    return 0;
}

int sub_16096(unknown uParam0, int iParam1)
{
    if ((uParam0^))
    {
        if ((iParam1 > 0) AND ((IS_SCREEN_FADED_IN()) AND (sub_16113())))
        {
            return 1;
        }
        else
        {
            (uParam0^) = 0;
        }
    }
    if (NOT sub_16113())
    {
        (uParam0^) = 1;
    }
    return 0;
}

int sub_16113()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_16499(unknown uParam0, unknown uParam1)
{
    return sub_16512( uParam0, uParam1 );
}

boolean sub_16512(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_16568(unknown uParam0, unknown uParam1, unknown uParam2)
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
        GET_CHAR_COORDINATES( sub_598(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        switch (sub_16708( uVar5 ))
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

void sub_16708(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_17556(unknown uParam0)
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

void sub_19018(unknown uParam0)
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

int sub_19612(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
    {
        if ((uParam2^) < 0)
        {
            GET_GAME_TIMER( uParam2 );
        }
        GET_GAME_TIMER( ref iVar5 );
        sub_10402( "  ''" );
        sub_10402( uParam0 );
        sub_10402( "'', " );
        sub_10645( uParam1 );
        sub_10402( "    //" );
        sub_10645( iVar5 - (uParam2^) );
        sub_10402( "\n" );
        if ((iVar5 - (uParam2^)) > 2000)
        {
            CLEAR_HELP();
        }
        return 1;
    }
    (uParam2^) = -1;
    return 0;
}

int sub_20074(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24)
{
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    int I;
    boolean bVar31;
    unknown uVar32;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam10, uParam0, ref uVar27 );
    if ((NOT (uParam11^)) AND (sub_20100( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_F_F" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_F", iParam8 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_F" )))))
        {
            if (sub_20481( 2, "BLANK", 0 ))
            {
                sub_831( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
            {
                sub_21153( "LB_TRYON", uParam9, uParam24 );
            }
        }
    }
    else if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_21439( ref uParam12, uVar27, uParam3, uParam6, uParam23, 4, 0 )))
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
        sub_1240( sub_598(), ref l_U173, 0 );
        sub_25339( uVar32 );
        SET_PLAYER_CONTROL( sub_665(), 0 );
        TASK_PLAY_ANIM( sub_598(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( sub_25973( uVar32, 3, 0 ), iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_25973( uVar32, 3, 0 ), iParam8 / 2, 7500, 1 );
        }
        if (bVar31)
        {
            PRINT_HELP_FOREVER( "HELP_BUY_F" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27642( uVar32 ) );
        }
        sub_28428( uParam23, ref uParam12, 4, uParam13, "BLANK", uParam14, uParam16, uParam19, uParam22 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        sub_20756();
        return 1;
    }
    return 0;
}

int sub_20100(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_665() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_665() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_665() )))))
                {
                    if (NOT sub_20196())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_598() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_20281())
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

int sub_20196()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_20281()
{
    return sub_20292( 0, 0 );
}

int sub_20292(boolean bParam0, unknown uParam1)
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

int sub_20481(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_20100( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_665(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_20756();
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

void sub_20756()
{
    return sub_20292( 1, 1 );
}

void sub_21153(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_10402( "ar_PRINT_SHOP_HELP(''" );
    sub_10402( uParam0 );
    sub_10402( "'', ''" );
    sub_10402( uParam1 );
    sub_10402( "'', " );
    sub_21234( (uParam2^) );
    sub_10402( ")    //" );
    sub_21234( IS_HELP_MESSAGE_BEING_DISPLAYED() );
    sub_21295();
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

void sub_21234(unknown uParam0)
{
    if (g_U10532)
    {
        sub_13085( uParam0 );
    }
    return;
}

void sub_21295()
{
    if (g_U10532)
    {
        PRINTNL();
    }
    return;
}

int sub_21439(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, boolean bParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT l_U192)
    {
        sub_21459();
        g_U8766 = 1;
        g_U8765 = uParam9;
        l_U192 = 1;
    }
    if ((NOT bParam10) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (sub_21548( uParam9, ref uVar13 ))
            {
                PLAY_SOUND_FROM_PED( -1, sub_24431( uVar13 ), sub_598() );
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
            if (sub_16568( uParam8, ref uVar15, ref uVar18 ))
            {
                SET_CAR_HEADING( uVar14, uVar18 );
                SET_CAR_COORDINATES( uVar14, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
            }
        }
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_598() );
    SET_CHAR_COORDINATES( sub_598(), uParam4._fU0, uParam4._fU4, uParam4._fU8 );
    SET_CHAR_HEADING( sub_598(), uParam7 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_598(), 1 );
    CLEAR_AREA_OF_OBJECTS( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000 );
    l_U192 = 0;
    return 1;
}

void sub_21459()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

int sub_21548(unknown uParam0, unknown uParam1)
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
        sub_21633( ref uVar4 );
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
        sub_23340( ref uVar5 );
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

void sub_21633(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_21703( I, ref iVar6, ref iVar7 );
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

void sub_21703(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_23340(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_23408( I, ref iVar6, ref iVar7 );
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

void sub_23408(unknown uParam0, unknown uParam1, unknown uParam2)
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

string sub_24431(unknown uParam0)
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

void sub_25339(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_25352( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_598(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_25352(unknown uParam0, unknown uParam1, unknown uParam2)
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

string sub_25973(unknown uParam0, unknown uParam1, unknown uParam2)
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

string sub_27642(unknown uParam0)
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

void sub_28428(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    sub_17556( uParam1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_USE_HIGHDOF( 1 );
    CREATE_CAM( 14, uParam3 );
    SET_CAM_POS( (uParam3^), uParam6._fU0, uParam6._fU4, uParam6._fU8 );
    SET_CAM_ROT( (uParam3^), uParam9._fU0, uParam9._fU4, uParam9._fU8 );
    SET_CAM_FOV( (uParam3^), uParam12 );
    SET_CAM_ACTIVE( (uParam3^), 1 );
    SET_CAM_NEAR_DOF( (uParam3^), 0.50000000 );
    SET_CAM_FAR_DOF( (uParam3^), 5.00000000 );
    FREEZE_CHAR_POSITION( sub_598(), 0 );
    SET_PLAYER_CONTROL( sub_665(), 0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_665(), 1 );
    SET_CAM_PROPAGATE( (uParam3^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    GET_GAME_TIMER( uParam5 );
    g_U8765 = uParam2;
    sub_831( 2, "BLANK" );
    sub_831( 2, uParam4 );
    sub_28671( uParam0 );
    if ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    while (sub_29698())
    {
        WAIT( 0 );
    }
    return;
}

void sub_28671(unknown uParam0)
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

    GET_GROUP_SIZE( sub_2448(), ref uVar3, ref iVar4 );
    if (iVar4 > 0)
    {
        for ( I = 0; I < iVar4; I++ )
        {
            GET_GROUP_MEMBER( sub_2448(), I, ref uVar10 );
            if ((IS_PLAYER_PLAYING( sub_665() )) AND (NOT (IS_CHAR_INJURED( uVar10 ))))
            {
                vVar11 = {0.00000000, 0.00000000, 0.00000000};
                fVar14 = 0.00000000;
                sub_28796( uParam0, I, ref vVar11, ref fVar14 );
                SET_CHAR_COORDINATES( uVar10, vVar11.x, vVar11.y, vVar11.z );
                SET_CHAR_HEADING( uVar10, fVar14 );
                TASK_LOOK_AT_CHAR( uVar10, sub_598(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar10, "Scenario_Standing", vVar11, fVar14 );
            }
        }
    }
    return;
}

void sub_28796(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
        GET_CHAR_COORDINATES( sub_598(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        switch (sub_16708( uVar6 ))
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

int sub_29698()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_29803()
{
    if (NOT (IS_CHAR_DEAD( l_U1325 )))
    {
        SET_CHAR_HEADING( l_U1325, 37.94300000 );
        SET_CHAR_COORDINATES( l_U1325, 888.82510000, -447.78480000, 14.86010000 );
        CLEAR_CHAR_TASKS( l_U1325 );
        l_U1400 = 0;
    }
    return;
}

int sub_30380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28)
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
                sub_21153( "LB_TRYON_R3", uParam9, uParam28 );
            }
            return 0;
        }
    }
    if ((NOT (uParam11^)) AND (sub_20100( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_L_F" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_L", iParam8 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_L" )))))
        {
            if (sub_20481( 2, "BLANK", 0 ))
            {
                sub_831( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT g_U8835[uParam7])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
                {
                    sub_21153( "LB_TRYON", uParam9, uParam28 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )))
            {
                sub_21153( "LB_TRYON_B", uParam9, uParam28 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_21439( ref uParam12, uVar31, uParam3, uParam6, uParam27, 3, 0 )))
        {
            WAIT( 0 );
        }
        sub_1240( sub_598(), ref l_U173, 0 );
        sub_30912( uParam7 );
        TASK_PLAY_ANIM( sub_598(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS", iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUY_TROUSERS_A", iParam8 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( "HELP_BUY_L" );
        sub_28428( uParam27, ref uParam12, 3, uParam13, ref uParam16, uParam14, uParam20, uParam23, uParam26 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        return 1;
    }
    return 0;
}

void sub_30912(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_23408( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_598(), 2, iVar3, iVar4 );
    }
    return;
}

int sub_31444(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28)
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
                sub_21153( "LB_TRYON_R3", uParam9, uParam28 );
            }
            return 0;
        }
    }
    if ((NOT (uParam11^)) AND (sub_20100( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sub_31584( uParam7, 1, 1 ) ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( sub_31584( uParam7, 1, 0 ), iParam8 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sub_31584( uParam7, 0, 0 ) )))))
        {
            if (sub_20481( 2, "BLANK", 0 ))
            {
                sub_831( 2, "BLANK" );
                (uParam11^) = 1;
            }
            if (NOT g_U8789[uParam7])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 )))
                {
                    sub_21153( "LB_TRYON", uParam9, uParam28 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )))
            {
                sub_21153( "LB_TRYON_B", uParam9, uParam28 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", uParam9 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam9 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam9 ))))
    {
        CLEAR_HELP();
    }
    if ((uParam11^))
    {
        while (NOT (sub_21439( ref uParam12, uVar31, uParam3, uParam6, uParam27, 2, 0 )))
        {
            WAIT( 0 );
        }
        sub_1240( sub_598(), ref l_U173, 0 );
        sub_33148( uParam7 );
        TASK_PLAY_ANIM( sub_598(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( sub_31584( uParam7, 3, 0 ), iParam8, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_31584( uParam7, 3, 0 ), iParam8 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( sub_31584( uParam7, 2, 0 ) );
        sub_28428( uParam27, ref uParam12, 2, uParam13, ref uParam16, uParam14, uParam20, uParam23, uParam26 );
        (uParam11^) = 0;
        (uParam15^) = iParam8;
        return 1;
    }
    return 0;
}

string sub_31584(unknown uParam0, unknown uParam1, boolean bParam2)
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

void sub_33148(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_21703( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_598(), 1, iVar3, iVar4 );
    }
    return;
}

int sub_33618(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    int I;
    boolean bVar22;
    unknown uVar23;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam9, uParam0, ref l_U1381 );
    if ((NOT l_U1319) AND (sub_20100( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_H_F" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_H", iParam7 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_H" )))))
        {
            if (sub_20481( 2, "BLANK", 0 ))
            {
                sub_831( 2, "BLANK" );
                l_U1319 = 1;
                l_U1320 = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )))
            {
                sub_21153( "LB_TRYON", uParam8, uParam18 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam8 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )))
    {
        CLEAR_HELP();
    }
    if (l_U1319)
    {
        while (NOT (sub_21439( ref l_U1363, l_U1381, uParam3, uParam6, 0, 0, 1 )))
        {
            WAIT( 0 );
        }
        bVar22 = false;
        for ( I = 0; I < l_U1302; I++ )
        {
            if (NOT bVar22)
            {
                if (NOT g_U8883[l_U1302[I]])
                {
                    uVar23 = l_U1302[I];
                    bVar22 = true;
                }
            }
        }
        if (NOT bVar22)
        {
            uVar23 = l_U1302[0];
        }
        sub_1240( sub_598(), ref l_U173, 0 );
        sub_34075( uVar23 );
        SET_PLAYER_CONTROL( sub_665(), 0 );
        TASK_PLAY_ANIM( sub_598(), "Examine Hat_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( sub_34687( uVar23, 3, 0 ), iParam7, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_34687( uVar23, 3, 0 ), iParam7 / 2, 7500, 1 );
        }
        if (bVar22)
        {
            PRINT_HELP( "HELP_BUY_H" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_H", sub_35236( uVar23 ) );
        }
        sub_28428( 0, ref l_U1363, 0, ref l_U1364, "BLANK", uParam10, uParam11, uParam14, uParam17 );
        l_U1319 = 0;
        ProtectedSet(l_U1322, iParam7);
        sub_20756();
        return 1;
    }
    return 0;
}

void sub_34075(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_34075( -1 );
        sub_34100( -1 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_598(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_598(), 8 )) != 1))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_598(), 8, 1, 0 );
        }
    }
    else
    {
        sub_34355( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_598(), 0, ref iVar4 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_598(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_598(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_598(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_598(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_598(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_34100(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_34112( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_598(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_598(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_598(), 1, iVar3 );
        }
    }
    return;
}

void sub_34112(unknown uParam0, unknown uParam1)
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

void sub_34355(unknown uParam0, unknown uParam1)
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

string sub_34687(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

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
                return "buy_HEAD_0";
            }
            else
            {
                return "buy_HEAD_0_A";
            }
            break;
            case 1:
            if (NOT g_U8921)
            {
                return "buy_HEAD_1";
            }
            else
            {
                return "buy_HEAD_1_A";
            }
            break;
            case 2:
            return "buy_HEAD_2";
            break;
            case 3:
            return "buy_HEAD_3";
            break;
            case -1:
            default:
              case 4: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_head_print_here";
}

string sub_35236(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_HEAD_0";
        break;
        case 1:
        return "clo_HEAD_1";
        break;
        case 2:
        return "clo_HEAD_2";
        break;
        case 3:
        return "clo_HEAD_3";
        break;
        case -1:
        return "clo_HEAD_NONE";
        break;
        case 4: return "NUMBER_OF_PLAYER_CLOTHES_HEAD";
    }
    SCRIPT_ASSERT( "get_head_americanAmbiance_name - null" );
    return "null head";
}

int sub_35778(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
{
    int I;
    boolean bVar22;
    unknown uVar23;

    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( uParam9, uParam0, ref l_U1381 );
    if ((NOT l_U1319) AND (sub_20100( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_G_F" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_G", iParam7 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_G" )))))
        {
            if (sub_20481( 2, "BLANK", 0 ))
            {
                sub_831( 2, "BLANK" );
                l_U1319 = 1;
                l_U1320 = 1;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )))
            {
                sub_21153( "LB_TRYON", uParam8, uParam18 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam8 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam8 )))
    {
        CLEAR_HELP();
    }
    if (l_U1319)
    {
        while (NOT (sub_21439( ref l_U1363, l_U1381, uParam3, uParam6, 0, 1, 1 )))
        {
            WAIT( 0 );
        }
        bVar22 = false;
        for ( I = 0; I < l_U1305; I++ )
        {
            if (NOT bVar22)
            {
                if (NOT g_U8888[l_U1305[I]])
                {
                    uVar23 = l_U1305[I];
                    bVar22 = true;
                }
            }
        }
        if (NOT bVar22)
        {
            uVar23 = l_U1305[0];
        }
        sub_1240( sub_598(), ref l_U173, 0 );
        sub_34100( uVar23 );
        SET_PLAYER_CONTROL( sub_665(), 0 );
        TASK_PLAY_ANIM( sub_598(), "Examine Glasses_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8921)
        {
            PRINT_WITH_NUMBER_NOW( sub_36322( uVar23, 3, 0 ), iParam7, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( sub_36322( uVar23, 3, 0 ), iParam7 / 2, 7500, 1 );
        }
        if (bVar22)
        {
            PRINT_HELP( "HELP_BUY_G" );
        }
        else
        {
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_G", sub_36883( uVar23 ) );
        }
        sub_28428( 0, ref l_U1363, 1, ref l_U1364, "BLANK", uParam10, uParam11, uParam14, uParam17 );
        l_U1319 = 0;
        ProtectedSet(l_U1322, iParam7);
        sub_20756();
        return 1;
    }
    return 0;
}

string sub_36322(unknown uParam0, unknown uParam1, unknown uParam2)
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
                return "buy_EYES_0";
            }
            else
            {
                return "buy_EYES_0_A";
            }
            break;
            case 1:
            if (NOT g_U8921)
            {
                return "buy_EYES_2";
            }
            else
            {
                return "buy_EYES_2_A";
            }
            break;
            case 2:
            if (NOT g_U8921)
            {
                return "buy_EYES_2";
            }
            else
            {
                return "buy_EYES_2_A";
            }
            break;
            case -1:
            default:
              case 3: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4:
        return "NUMBER_OF_TORSO_PRINT";
        break;
    }
    return "get_eyes_print_here()";
}

string sub_36883(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_EYES_0";
        break;
        case 1:
        return "clo_EYES_1";
        break;
        case 2:
        return "clo_EYES_2";
        break;
        case -1:
        return "clo_EYES_NONE";
        break;
        case 3: return "NUMBER_OF_PLAYER_CLOTHES_EYES";
    }
    SCRIPT_ASSERT( "get_eyes_americanAmbiance_name - null" );
    return "null eyes";
}

int sub_37998(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    if ((sub_14641( sub_598(), 88 )) AND (sub_14641( sub_598(), 80 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_598(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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
    if (sub_38279())
    {
        if ((NOT sub_38359()) AND (NOT (IS_SCORE_GREATER( sub_665(), iVar48 - 1 ))))
        {
            CLEAR_PRINTS();
            PRINT_HELP( sub_31584( uParam0._fU76, 0, 0 ) );
            while (NOT (sub_38488( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_41139())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8923, sub_31584( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, sub_31584( uParam0._fU76, 1, 1 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, sub_31584( uParam0._fU76, 1, 1 ), 16 );
                    break;
                }
                PRINT_HELP( sub_31584( uParam0._fU76, 1, 1 ) );
            }
            else
            {
                PRINT_HELP_WITH_NUMBER( sub_31584( uParam0._fU76, 1, 0 ), iVar48 );
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8923, sub_31584( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8927, sub_31584( uParam0._fU76, 1, 0 ), 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8931, sub_31584( uParam0._fU76, 1, 0 ), 16 );
                    break;
                }
            }
            sub_41507( uParam37, uParam0._fU76, iVar48, uParam39, uParam45 );
            while (NOT (sub_38488( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_41819( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_38488( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_31584( uParam0._fU76, 3, 0 ), 4, "", "", "", iVar48, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_31584( uParam0._fU76, 3, 0 ), iVar48, 7500, 1 );
    };;;
    DISPLAY_CASH( 1 );
    return 0;
}

int sub_38279()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_38359()
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

int sub_38488(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, boolean bParam7)
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
                if (sub_21548( g_U8765, ref uVar10 ))
                {
                    PLAY_SOUND_FROM_PED( -1, sub_24431( uVar10 ), sub_598() );
                }
            }
        }
        return 0;
        break;
    }
    while (sub_29698())
    {
        WAIT( 0 );
    }
    sub_831( 5, uParam2 );
    sub_831( 5, "LB_LEAVE_H" );
    sub_831( 5, "BLANK" );
    sub_831( 2, uParam3 );
    sub_831( 2, "BLANK" );
    CLEAR_CHAR_TASKS( sub_598() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_598(), 0 );
    if (bParam5)
    {
        sub_1211( sub_598(), l_U173 );
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
    REGISTER_STRING_FOR_FRONTEND_STAT( 492, sub_38861() );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_598() );
    FREEZE_CHAR_POSITION( sub_598(), 0 );
    sub_2396();
    g_U8766 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    SET_PLAYER_CONTROL( sub_665(), 1 );
    SET_EVERYONE_IGNORE_PLAYER( sub_665(), 0 );
    sub_1052();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_19018( uParam0 );
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
    sub_2439();
    g_U8765 = 6;
    return 1;
}

string sub_38861()
{
    if (CAN_THE_STAT_HAVE_STRING( 492 ))
    {
        switch (sub_38885())
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
        PRINTINT( sub_38885() );
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

void sub_38885()
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
        return sub_39034( 8 );
        break;
    }
    if ((g_U8940 != g_U8938) AND ((g_U8939 != g_U8940) AND (g_U8938 == g_U8939)))
    {
        return sub_39034( 5 );
        break;
    }
    if ((g_U8940 != g_U8938) AND ((g_U8939 == g_U8940) AND (g_U8938 != g_U8939)))
    {
        return sub_39034( 6 );
        break;
    }
    if ((g_U8940 == g_U8938) AND ((g_U8939 != g_U8940) AND (g_U8938 != g_U8939)))
    {
        return sub_39034( 7 );
        break;
    }
    return sub_39034( 8 );
}

void sub_39034(int iParam0)
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
        return sub_39228( 8 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 5)) AND ((g_U8943 != g_U8941) AND ((g_U8942 != g_U8943) AND (g_U8941 == g_U8942))))
    {
        return sub_39228( 5 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 6)) AND ((g_U8943 != g_U8941) AND ((g_U8942 == g_U8943) AND (g_U8941 != g_U8942))))
    {
        return sub_39228( 6 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 7)) AND ((g_U8943 == g_U8941) AND ((g_U8942 != g_U8943) AND (g_U8941 != g_U8942))))
    {
        return sub_39228( 7 );
        break;
    }
    return sub_39228( 8 );
}

int sub_39228(int iParam0)
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

int sub_41139()
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

void sub_41507(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_665(), -1 * iParam2 );
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
        sub_12203( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_41819(unknown uParam0)
{
    if (sub_20100( 5, 0 ))
    {
        if (sub_20481( 5, uParam0, 0 ))
        {
            sub_831( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_665() )))
    {
        sub_831( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_42158(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
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
    if (sub_38279())
    {
        if ((NOT sub_38359()) AND (NOT (IS_SCORE_GREATER( sub_665(), iVar48 - 1 ))))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_L" );
            while (NOT (sub_38488( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_41139())
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
            sub_42795( uParam37, uParam0._fU80, iVar48, uParam39, uParam45 );
            while (NOT (sub_38488( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_41819( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_38488( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
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
    if ((sub_14641( sub_598(), 88 )) AND (sub_14641( sub_598(), 80 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_598(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

void sub_42795(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_665(), -1 * iParam2 );
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
        sub_12203( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_43627(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
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

    sub_43638( ref uVar16 );
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
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", sub_27642( uVar16 ) )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER_WITH_STRING( "LB_TRYON_R3", sub_27642( uVar16 ) );
            }
            sVar18 = "LB_TRYON_R3";
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_F", sub_27642( uVar16 ) )))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_27642( uVar16 ) );
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
            sub_44235( 1, uParam0 );
        }
        else if (iVar21 >= 64)
        {
            sub_44235( 0, uParam0 );
        }
    }
    else if ((iVar19 < 65472) || ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 ))))
    {
        sub_44235( 1, uParam0 );
    }
    else if ((iVar19 >= 64) || ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 ))))
    {
        sub_44235( 0, uParam0 );
    }
    else if (sub_38279())
    {
        if (NOT ((NOT ((g_U15728[6]) || (g_U8915))) AND (g_U8862[uVar16])))
        {
            CLEAR_PRINTS();
            if (NOT sub_41139())
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
                sub_44899( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_38488( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
            else if (NOT (IS_SCORE_GREATER( sub_665(), iVar17 - 1 )))
            {
                CLEAR_PRINTS();
                PRINT_HELP( "HELP_POOR_F" );
                while (NOT (sub_38488( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
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
                sub_44899( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_38488( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
        }
    }
    else if (sub_41819( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_38488( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_25973( uVar16, 3, 0 ), 4, "", "", "", iVar17, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_25973( uVar16, 3, 0 ), iVar17, 7500, 1 );
    };;;;;;
    if ((sub_14641( sub_598(), 88 )) AND (sub_14641( sub_598(), 80 )))
    {
        if (TIMERA() > iParam1)
        {
            TASK_PLAY_ANIM( sub_598(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

void sub_43638(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_25352( I, ref iVar6, ref iVar7 );
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

void sub_44235(boolean bParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    if (IS_SCREEN_FADED_IN())
    {
        iVar5 = -1;
        iVar6 = -1;
        sub_43638( ref iVar7 );
        for ( I = 0; I < (uParam1^); I++ )
        {
            if (iVar7 == (uParam1^)[I])
            {
                iVar5 = I;
            }
        }
        if (bParam0)
        {
            sub_10402( "  * left (iThis_foot: " );
            sub_10645( iVar5 );
            iVar6 = iVar5 - 1;
            if (iVar6 < 0)
            {
                iVar6 += (uParam1^);
            }
        }
        else
        {
            sub_10402( "  * right (iThis_foot: " );
            sub_10645( iVar5 );
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
        sub_10402( "),  next: " );
        sub_10645( iVar6 );
        sub_21295();
        sub_25339( (uParam1^)[iVar6] );
        DO_SCREEN_FADE_IN( 125 );
    }
    WAIT( 0 );
    return;
}

void sub_44899(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_665(), -1 * iParam2 );
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
        sub_12203( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_45941(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;
    unknown uVar11;
    string sVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    unknown uVar17;
    unknown uVar18;

    iVar10 = ProtectedGet(l_U1322);
    if (g_U8921)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar10 );
        iVar10 = ProtectedGet(l_U1322) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar10 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (NOT (sub_41819( "BLANK" )))
    {
        l_U1320 = 0;
    }
    sub_46104( ref uVar11 );
    if (g_U8883[uVar11])
    {
        if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_H", sub_35236( uVar11 ) )))
        {
            CLEAR_HELP();
            CLEAR_PRINTS();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_H", sub_35236( uVar11 ) );
        }
        sVar12 = "HELP_OWN_H";
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_H" )))
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
        PRINT_HELP_FOREVER( "HELP_BUY_H" );
    }
    sVar12 = "HELP_BUY_H";;
    GET_KEYBOARD_MOVE_INPUT( ref iVar13, ref iVar14 );
    if ((iVar14 != 0) || ((iVar13 != 0) || (IS_BUTTON_PRESSED( 0, 0 ))))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar15, ref iVar16, ref uVar17, ref uVar18 );
        if ((iVar16 == 0) AND (iVar15 == 0))
        {
            iVar15 = iVar13;
            iVar16 = iVar14;
        }
        if (iVar15 < 65472)
        {
            if (sub_46553( 1 ))
            {
                return sub_51789( sVar12, uParam0, ref uParam1 );
            }
        }
        else if (iVar15 >= 64)
        {
            if (sub_46553( 0 ))
            {
                return sub_51789( sVar12, uParam0, ref uParam1 );
            }
        }
    }
    else if ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 )))
    {
        if (sub_46553( 1 ))
        {
            return sub_51789( sVar12, uParam0, ref uParam1 );
        }
    }
    else if ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 )))
    {
        if (sub_46553( 0 ))
        {
            return sub_51789( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (sub_38279())
    {
        CLEAR_PRINTS();
        if (NOT sub_41139())
        {
            iVar10 = 0;
            PRINT_HELP( "HELP_BOUGHT_H_F" );
            sub_52166( 0, uVar11, iVar10, uParam2, l_U1325 );
            while (NOT (sub_38488( ref l_U1363, ref l_U1364, sVar12, "LB_HEAD", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_665(), iVar10 - 1 )))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_H" );
            return sub_51789( sVar12, uParam0, ref uParam1 );
        }
        else
        {
            CLEAR_PRINTS();
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_H", iVar10 );
            StrCopy( ref g_U8923, "HELP_BOUGHT_H", 16 );
            sub_52166( 0, uVar11, iVar10, uParam2, l_U1325 );
            while (NOT (sub_38488( ref l_U1363, ref l_U1364, sVar12, "LB_HEAD", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
    }
    else if ((NOT l_U1320) AND (sub_41819( "BLANK" )))
    {
        return sub_51789( sVar12, uParam0, ref uParam1 );
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_34687( uVar11, 3, 0 ), 4, "", "", "", iVar10, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_34687( uVar11, 3, 0 ), iVar10, 7500, 1 );
    };;;;;;
    if ((sub_14641( sub_598(), 88 )) AND (sub_14641( sub_598(), 80 )))
    {
        if (TIMERA() > l_U1374)
        {
            TASK_PLAY_ANIM( sub_598(), "Examine Hat_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1374 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_46104(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_598(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_34355( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_598(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_598(), 8 );
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

int sub_46553(boolean bParam0)
{
    if (bParam0)
    {
        if (l_U1413 < 1)
        {
            sub_46104( ref l_U1415 );
            l_U1413 = 1;
        }
        else
        {
            while (l_U1413 >= 1)
            {
                switch (l_U1415)
                {
                    case 0:
                    switch (l_U1413)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_598(), l_U197[0]._fU56, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1408 )))
                            {
                                CREATE_OBJECT( -1555357815, l_U278[5]._fU56._fU0 + 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1408, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1408, l_U1330 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1409 )))
                            {
                                CREATE_OBJECT( -526280927, l_U278[5]._fU56._fU0 - 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1409, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1409, l_U1330 );
                            }
                            l_U1413 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[0]._fU64)
                            {
                                sub_34075( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1409, sub_598(), 1232, l_U197[0]._fU24, l_U197[0]._fU36, 0 );
                                l_U1413 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[0]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1409 ))
                                {
                                    DELETE_OBJECT( ref l_U1409 );
                                    l_U1413 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU56 )))
                        {
                            sub_34075( -1 );
                            TASK_PLAY_ANIM( sub_598(), l_U197[1]._fU52, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            l_U1413 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[1]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1408, sub_598(), 1219, l_U197[1]._fU0, l_U197[1]._fU12, 0 );
                                l_U1413 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[1]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1408 ))
                                {
                                    DELETE_OBJECT( ref l_U1408 );
                                    sub_34075( 1 );
                                    l_U1413 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1408 ))
                            {
                                DELETE_OBJECT( ref l_U1408 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1409 ))
                            {
                                DELETE_OBJECT( ref l_U1409 );
                            }
                            l_U1413 = 0;
                        }
                        break;
                    }
                    break;
                    case 1:
                    switch (l_U1413)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_598(), l_U197[1]._fU56, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1408 )))
                            {
                                CREATE_OBJECT( -1555357815, l_U278[5]._fU56._fU0 + 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1408, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1408, l_U1330 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1409 )))
                            {
                                CREATE_OBJECT( -526280927, l_U278[5]._fU56._fU0 - 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1409, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1409, l_U1330 );
                            }
                            l_U1413 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[1]._fU64)
                            {
                                sub_34075( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1408, sub_598(), 1232, l_U197[1]._fU24, l_U197[1]._fU36, 0 );
                                l_U1413 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[1]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1408 ))
                                {
                                    DELETE_OBJECT( ref l_U1408 );
                                    l_U1413 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU56 )))
                        {
                            sub_34075( -1 );
                            TASK_PLAY_ANIM( sub_598(), l_U197[0]._fU52, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            l_U1413 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[0]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1409, sub_598(), 1219, l_U197[0]._fU0, l_U197[0]._fU12, 0 );
                                l_U1413 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[0]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1409 ))
                                {
                                    DELETE_OBJECT( ref l_U1409 );
                                    sub_34075( 0 );
                                    l_U1413 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1408 ))
                            {
                                DELETE_OBJECT( ref l_U1408 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1409 ))
                            {
                                DELETE_OBJECT( ref l_U1409 );
                            }
                            l_U1413 = 0;
                        }
                        break;
                    }
                    break;
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_H" )))
                {
                    PRINT_HELP_FOREVER( "LB_LEAVE_H" );
                }
                if (sub_41819( "LB_LEAVE_H" ))
                {
                    return 1;
                }
                WAIT( 0 );
            }
        }
    }
    else if (l_U1414 < 1)
    {
        sub_46104( ref l_U1415 );
        l_U1414 = 1;
    }
    else
    {
        while (l_U1414 >= 1)
        {
            switch (l_U1415)
            {
                case 0:
                switch (l_U1414)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_598(), l_U197[0]._fU48, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1408 )))
                        {
                            CREATE_OBJECT( -1555357815, l_U278[5]._fU56._fU0 + 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1408, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1408, l_U1330 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1409 )))
                        {
                            CREATE_OBJECT( -526280927, l_U278[5]._fU56._fU0 - 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1409, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1409, l_U1330 );
                        }
                        l_U1414 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[0]._fU64)
                        {
                            sub_34075( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1409, sub_598(), 1219, l_U197[0]._fU0, l_U197[0]._fU12, 0 );
                            l_U1414 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[0]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1409 ))
                            {
                                DELETE_OBJECT( ref l_U1409 );
                                l_U1414 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU48 )))
                    {
                        sub_34075( -1 );
                        TASK_PLAY_ANIM( sub_598(), l_U197[1]._fU60, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        l_U1414 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[0]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1408, sub_598(), 1232, l_U197[1]._fU24, l_U197[1]._fU36, 0 );
                            l_U1414 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[0]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1408 ))
                            {
                                DELETE_OBJECT( ref l_U1408 );
                                sub_34075( 1 );
                                l_U1414 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1408 ))
                        {
                            DELETE_OBJECT( ref l_U1408 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1409 ))
                        {
                            DELETE_OBJECT( ref l_U1409 );
                        }
                        l_U1414 = 0;
                    }
                    break;
                }
                break;
                case 1:
                switch (l_U1414)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_598(), l_U197[1]._fU48, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1408 )))
                        {
                            CREATE_OBJECT( -1555357815, l_U278[5]._fU56._fU0 + 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1408, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1408, l_U1330 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1409 )))
                        {
                            CREATE_OBJECT( -526280927, l_U278[5]._fU56._fU0 - 0.50000000, l_U278[5]._fU56._fU4, l_U278[5]._fU56._fU8, ref l_U1409, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1409, l_U1330 );
                        }
                        l_U1414 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[1]._fU64)
                        {
                            sub_34075( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1408, sub_598(), 1219, l_U197[1]._fU0, l_U197[1]._fU12, 0 );
                            l_U1414 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[1]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[1]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1408 ))
                            {
                                DELETE_OBJECT( ref l_U1408 );
                                l_U1414 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[1]._fU48 )))
                    {
                        sub_34075( -1 );
                        TASK_PLAY_ANIM( sub_598(), l_U197[0]._fU60, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        l_U1414 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[1]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1409, sub_598(), 1232, l_U197[0]._fU24, l_U197[0]._fU36, 0 );
                            l_U1414 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[0]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[1]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1409 ))
                            {
                                DELETE_OBJECT( ref l_U1409 );
                                sub_34075( 0 );
                                l_U1414 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[0]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1408 ))
                        {
                            DELETE_OBJECT( ref l_U1408 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1409 ))
                        {
                            DELETE_OBJECT( ref l_U1409 );
                        }
                        l_U1414 = 0;
                    }
                    break;
                }
                break;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_H" )))
            {
                PRINT_HELP_FOREVER( "LB_LEAVE_H" );
            }
            if (sub_41819( "LB_LEAVE_H" ))
            {
                return 1;
            }
            WAIT( 0 );
        }
    }
    sub_831( 5, "LB_LEAVE_H" );
    return 0;
}

int sub_51789(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CLEAR_HELP();
    if (DOES_OBJECT_EXIST( l_U1408 ))
    {
        DELETE_OBJECT( ref l_U1408 );
    }
    if (DOES_OBJECT_EXIST( l_U1409 ))
    {
        DELETE_OBJECT( ref l_U1409 );
    }
    l_U1413 = 0;
    l_U1414 = 0;
    while (NOT (sub_38488( ref l_U1363, ref l_U1364, uParam0, "LB_HEAD", uParam1, 1, uParam2, 1 )))
    {
        WAIT( 0 );
    }
    l_U1318 = 0;
    return 1;
}

void sub_52166(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_665(), -1 * iParam2 );
    g_U8883[uParam1] = 1;
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
        sub_12203( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_52946(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;
    unknown uVar11;
    string sVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    unknown uVar17;
    unknown uVar18;

    iVar10 = ProtectedGet(l_U1322);
    if (g_U8921)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar10 );
        iVar10 = ProtectedGet(l_U1322) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar10 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (NOT (sub_41819( "BLANK" )))
    {
        l_U1320 = 0;
    }
    sub_53109( ref uVar11 );
    sub_10402( "get_eyes_americanAmbiance_name(" );
    sub_10402( sub_53254( uVar11 ) );
    sub_10402( "): ''" );
    sub_10402( sub_36883( uVar11 ) );
    sub_10402( "''\n" );
    if (g_U8888[uVar11])
    {
        if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_G", sub_36883( uVar11 ) )))
        {
            CLEAR_HELP();
            CLEAR_PRINTS();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_G", sub_36883( uVar11 ) );
        }
        sVar12 = "HELP_OWN_G";
    }
    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BUY_G" )))
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
        PRINT_HELP_FOREVER( "HELP_BUY_G" );
    }
    sVar12 = "HELP_BUY_G";;
    GET_KEYBOARD_MOVE_INPUT( ref iVar13, ref iVar14 );
    if ((iVar14 != 0) || ((iVar13 != 0) || (IS_BUTTON_PRESSED( 0, 0 ))))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar15, ref iVar16, ref uVar17, ref uVar18 );
        if ((iVar16 == 0) AND (iVar15 == 0))
        {
            iVar15 = iVar13;
            iVar16 = iVar14;
        }
        if (iVar15 < 65472)
        {
            if (sub_53764( 1 ))
            {
                return sub_59000( sVar12, uParam0, ref uParam1 );
            }
        }
        else if (iVar15 >= 64)
        {
            if (sub_53764( 0 ))
            {
                return sub_59000( sVar12, uParam0, ref uParam1 );
            }
        }
    }
    else if ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 )))
    {
        if (sub_53764( 1 ))
        {
            return sub_59000( sVar12, uParam0, ref uParam1 );
        }
    }
    else if ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 )))
    {
        if (sub_53764( 0 ))
        {
            return sub_59000( sVar12, uParam0, ref uParam1 );
        }
    }
    else if (sub_38279())
    {
        CLEAR_PRINTS();
        if (NOT sub_41139())
        {
            iVar10 = 0;
            PRINT_HELP( "HELP_BOUGHT_G_F" );
            sub_59377( 0, uVar11, iVar10, uParam2, l_U1325 );
            while (NOT (sub_38488( ref l_U1363, ref l_U1364, sVar12, "LB_EYES", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_665(), iVar10 - 1 )))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_G" );
            while (NOT (sub_38488( ref l_U1363, ref l_U1364, sVar12, "LB_EYES", uParam0, 1, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_G", iVar10 );
            StrCopy( ref g_U8923, "HELP_BOUGHT_G", 16 );
            sub_59377( 0, uVar11, iVar10, uParam2, l_U1325 );
            while (NOT (sub_38488( ref l_U1363, ref l_U1364, sVar12, "LB_EYES", uParam0, 0, ref uParam1, 1 )))
            {
                WAIT( 0 );
            }
            l_U1318 = 0;
            return 1;
        }
    }
    else if ((NOT l_U1320) AND (sub_41819( "BLANK" )))
    {
        CLEAR_HELP();
        while (NOT (sub_38488( ref l_U1363, ref l_U1364, sVar12, "LB_EYES", uParam0, 1, ref uParam1, 1 )))
        {
            WAIT( 0 );
        }
        l_U1318 = 0;
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_36322( uVar11, 3, 0 ), 4, "", "", "", iVar10, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_36322( uVar11, 3, 0 ), iVar10, 7500, 1 );
    };;;;;;
    if ((sub_14641( sub_598(), 88 )) AND (sub_14641( sub_598(), 80 )))
    {
        if (TIMERA() > l_U1374)
        {
            TASK_PLAY_ANIM( sub_598(), "Examine Glasses_b", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U1374 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    DISPLAY_CASH( 1 );
    return 0;
}

void sub_53109(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_598(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_34112( I, ref iVar5 );
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

string sub_53254(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        return "EYES_NONE";
        break;
        case 0:
        return "EYES_0";
        break;
        case 1:
        return "EYES_1_unused";
        break;
        case 2:
        return "EYES_2";
        break;
        case 3: return "NUMBER_OF_PLAYER_CLOTHES_EYES";
    }
    return "null";
}

int sub_53764(boolean bParam0)
{
    if (bParam0)
    {
        if (l_U1413 < 1)
        {
            sub_53109( ref l_U1416 );
            l_U1413 = 1;
        }
        else
        {
            while (l_U1413 >= 1)
            {
                switch (l_U1416)
                {
                    case 0:
                    switch (l_U1413)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_598(), l_U197[2]._fU56, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1411 )))
                            {
                                CREATE_OBJECT( 1257247272, l_U278[4]._fU56._fU0 + 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1411, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1411, l_U1330 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1410 )))
                            {
                                CREATE_OBJECT( 2084697291, l_U278[4]._fU56._fU0 - 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1410, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1410, l_U1330 );
                            }
                            l_U1413 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[2]._fU64)
                            {
                                sub_34100( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1411, sub_598(), 1232, l_U197[2]._fU24, l_U197[2]._fU36, 0 );
                                l_U1413 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[2]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1411 ))
                                {
                                    DELETE_OBJECT( ref l_U1411 );
                                    sub_34100( -1 );
                                    l_U1413 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU56 )))
                        {
                            TASK_PLAY_ANIM( sub_598(), l_U197[2]._fU52, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            l_U1413 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[2]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1410, sub_598(), 1219, l_U197[2]._fU0, l_U197[2]._fU12, 0 );
                                l_U1413 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[2]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1410 ))
                                {
                                    DELETE_OBJECT( ref l_U1410 );
                                    sub_34100( 2 );
                                    l_U1413 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1410 ))
                            {
                                DELETE_OBJECT( ref l_U1410 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1411 ))
                            {
                                DELETE_OBJECT( ref l_U1411 );
                            }
                            l_U1413 = 0;
                        }
                        break;
                    }
                    break;
                    case 2:
                    switch (l_U1413)
                    {
                        case 1:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU56 )))
                        {
                            CLEAR_HELP();
                            CLEAR_PRINTS();
                            TASK_PLAY_ANIM( sub_598(), l_U197[3]._fU56, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            if (NOT (DOES_OBJECT_EXIST( l_U1410 )))
                            {
                                CREATE_OBJECT( 2084697291, l_U278[4]._fU56._fU0 - 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1410, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1410, l_U1330 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U1411 )))
                            {
                                CREATE_OBJECT( 1257247272, l_U278[4]._fU56._fU0 + 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1411, 1 );
                                ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1411, l_U1330 );
                            }
                            l_U1413 = 2;
                        }
                        break;
                        case 2:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[3]._fU64)
                            {
                                sub_34100( -1 );
                                ATTACH_OBJECT_TO_PED( l_U1410, sub_598(), 1232, l_U197[3]._fU24, l_U197[3]._fU36, 0 );
                                l_U1413 = 3;
                            }
                        }
                        break;
                        case 3:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU56 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU56, ref l_U1412 );
                            if (l_U1412 >= l_U197[3]._fU68)
                            {
                                if (DOES_OBJECT_EXIST( l_U1410 ))
                                {
                                    DELETE_OBJECT( ref l_U1410 );
                                    sub_34100( -1 );
                                    l_U1413 = 4;
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU56 )))
                        {
                            TASK_PLAY_ANIM( sub_598(), l_U197[3]._fU52, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                            l_U1413 = 5;
                        }
                        break;
                        case 5:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[3]._fU72)
                            {
                                ATTACH_OBJECT_TO_PED( l_U1411, sub_598(), 1219, l_U197[3]._fU0, l_U197[3]._fU12, 0 );
                                l_U1413 = 6;
                            }
                        }
                        break;
                        case 6:
                        if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU52 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU52, ref l_U1412 );
                            if (l_U1412 >= l_U197[3]._fU76)
                            {
                                if (DOES_OBJECT_EXIST( l_U1411 ))
                                {
                                    DELETE_OBJECT( ref l_U1411 );
                                    sub_34100( 0 );
                                    l_U1413 = 7;
                                }
                            }
                        }
                        break;
                        case 7:
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU52 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U1410 ))
                            {
                                DELETE_OBJECT( ref l_U1410 );
                            }
                            if (DOES_OBJECT_EXIST( l_U1411 ))
                            {
                                DELETE_OBJECT( ref l_U1411 );
                            }
                            l_U1413 = 0;
                        }
                        break;
                    }
                    break;
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_G" )))
                {
                    PRINT_HELP_FOREVER( "LB_LEAVE_G" );
                }
                if (sub_41819( "LB_LEAVE_G" ))
                {
                    return 1;
                }
                WAIT( 0 );
            }
        }
    }
    else if (l_U1414 < 1)
    {
        sub_53109( ref l_U1416 );
        l_U1414 = 1;
    }
    else
    {
        while (l_U1414 >= 1)
        {
            switch (l_U1416)
            {
                case 0:
                switch (l_U1414)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_598(), l_U197[2]._fU48, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1410 )))
                        {
                            CREATE_OBJECT( 2084697291, l_U278[4]._fU56._fU0 - 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1410, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1410, l_U1330 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1411 )))
                        {
                            CREATE_OBJECT( 1257247272, l_U278[4]._fU56._fU0 + 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1411, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1410, l_U1330 );
                        }
                        l_U1414 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[2]._fU64)
                        {
                            sub_34100( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1411, sub_598(), 1219, l_U197[2]._fU0, l_U197[2]._fU12, 0 );
                            l_U1414 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[2]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1411 ))
                            {
                                DELETE_OBJECT( ref l_U1411 );
                                l_U1414 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU48 )))
                    {
                        sub_34100( -1 );
                        TASK_PLAY_ANIM( sub_598(), l_U197[2]._fU60, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        l_U1414 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[2]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1410, sub_598(), 1232, l_U197[2]._fU24, l_U197[2]._fU36, 0 );
                            l_U1414 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[2]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[2]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1410 ))
                            {
                                DELETE_OBJECT( ref l_U1410 );
                                sub_34100( 2 );
                                l_U1414 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[2]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1410 ))
                        {
                            DELETE_OBJECT( ref l_U1410 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1411 ))
                        {
                            DELETE_OBJECT( ref l_U1411 );
                        }
                        l_U1414 = 0;
                    }
                    break;
                }
                break;
                case 2:
                switch (l_U1414)
                {
                    case 1:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU48 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        TASK_PLAY_ANIM( sub_598(), l_U197[3]._fU48, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        if (NOT (DOES_OBJECT_EXIST( l_U1410 )))
                        {
                            CREATE_OBJECT( 2084697291, l_U278[4]._fU56._fU0 - 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1410, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1410, l_U1330 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U1411 )))
                        {
                            CREATE_OBJECT( 1257247272, l_U278[4]._fU56._fU0 + 0.50000000, l_U278[4]._fU56._fU4, l_U278[4]._fU56._fU8, ref l_U1411, 1 );
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1411, l_U1330 );
                        }
                        l_U1414 = 2;
                    }
                    break;
                    case 2:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[3]._fU64)
                        {
                            sub_34100( -1 );
                            ATTACH_OBJECT_TO_PED( l_U1410, sub_598(), 1219, l_U197[3]._fU0, l_U197[3]._fU12, 0 );
                            l_U1414 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU48 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU48, ref l_U1412 );
                        if (l_U1412 >= l_U197[3]._fU68)
                        {
                            if (DOES_OBJECT_EXIST( l_U1410 ))
                            {
                                DELETE_OBJECT( ref l_U1410 );
                                l_U1414 = 4;
                            }
                        }
                    }
                    break;
                    case 4:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU48 )))
                    {
                        sub_34100( -1 );
                        TASK_PLAY_ANIM( sub_598(), l_U197[3]._fU60, "clothing", l_U1380, 0, 0, 0, 0, -1 );
                        l_U1414 = 5;
                    }
                    break;
                    case 5:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[3]._fU72)
                        {
                            ATTACH_OBJECT_TO_PED( l_U1411, sub_598(), 1232, l_U197[3]._fU24, l_U197[3]._fU36, 0 );
                            l_U1414 = 6;
                        }
                    }
                    break;
                    case 6:
                    if (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU60 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_598(), "clothing", l_U197[3]._fU60, ref l_U1412 );
                        if (l_U1412 >= l_U197[3]._fU76)
                        {
                            if (DOES_OBJECT_EXIST( l_U1411 ))
                            {
                                DELETE_OBJECT( ref l_U1411 );
                                sub_34100( 0 );
                                l_U1414 = 7;
                            }
                        }
                    }
                    break;
                    case 7:
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_598(), "clothing", l_U197[3]._fU60 )))
                    {
                        if (DOES_OBJECT_EXIST( l_U1410 ))
                        {
                            DELETE_OBJECT( ref l_U1410 );
                        }
                        if (DOES_OBJECT_EXIST( l_U1411 ))
                        {
                            DELETE_OBJECT( ref l_U1411 );
                        }
                        l_U1414 = 0;
                    }
                    break;
                }
                break;
            }
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LB_LEAVE_G" )))
            {
                PRINT_HELP_FOREVER( "LB_LEAVE_G" );
            }
            if (sub_41819( "LB_LEAVE_G" ))
            {
                return 1;
            }
            WAIT( 0 );
        }
    }
    sub_831( 5, "LB_LEAVE_G" );
    return 0;
}

int sub_59000(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CLEAR_HELP();
    if (DOES_OBJECT_EXIST( l_U1411 ))
    {
        DELETE_OBJECT( ref l_U1411 );
    }
    if (DOES_OBJECT_EXIST( l_U1410 ))
    {
        DELETE_OBJECT( ref l_U1410 );
    }
    l_U1413 = 0;
    l_U1414 = 0;
    while (NOT (sub_38488( ref l_U1363, ref l_U1364, uParam0, "LB_EYES", uParam1, 1, uParam2, 1 )))
    {
        WAIT( 0 );
    }
    l_U1318 = 0;
    return 1;
}

void sub_59377(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_665(), -1 * iParam2 );
    g_U8888[uParam1] = 1;
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
        sub_12203( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

