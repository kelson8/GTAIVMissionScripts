void main()
{
    int I;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U172 = 0;
    l_U192 = 0;
    l_U193 = 0;
    l_U194 = 18;
    l_U790 = 2;
    l_U798 = 1;
    l_U799 = 0;
    l_U801 = 0;
    l_U802 = 0;
    l_U803 = 0;
    l_U804 = 0;
    l_U806 = -1;
    l_U807 = -1;
    l_U808 = -1;
    l_U809 = 1;
    l_U853 = "C_RETAIL_14x10_room01";
    l_U857 = {-0.50000000, -4.00000000, 1.00000000};
    l_U860 = {2.00000000, 1.50000000, 1.50000000};
    l_U863 = {-25.00000000, -35.00000000, -5.00000000};
    l_U866 = {35.00000000, 10.00000000, 15.00000000};
    StrCopy( ref l_U869, "blank", 16 );
    l_U873 = "blank";
    l_U988 = 13.50000000;
    l_U990 = 0;
    l_U991 = 0;
    l_U992 = 0;
    l_U993 = 0;
    l_U994 = 0;
    l_U995 = 0;
    l_U997 = -1;
    l_U998 = 5000;
    l_U999 = 0;
    l_U1000 = 0;
    l_U1001 = 0;
    l_U1002 = 1;
    l_U883 = {l_U1003._fU4[0]};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_373();
    }
    while (l_U798)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U193)
            {
                case 0:
                if (l_U852 == nil)
                {
                    sub_2860( "get swank_clothes_shop_interior at " );
                    sub_2883( l_U883 );
                    sub_2920();
                    GET_INTERIOR_AT_COORDS( l_U883._fU0, l_U883._fU4, l_U883._fU8, ref l_U852 );
                }
                else
                {
                    g_U8834 = 1;
                    sub_2997();
                    sub_6180();
                    l_U193 = 1;
                }
                break;
                case 1:
                if (NOT l_U801)
                {
                    if (sub_7573())
                    {
                        if (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U810._fU0 ))
                        {
                            ACTIVATE_INTERIOR( l_U852, 1 );
                        }
                        else
                        {
                            l_U801 = 1;
                        }
                    }
                }
                if (IS_CHAR_IN_ANGLED_AREA_3D( sub_634(), l_U974[l_U790]._fU0, l_U974[l_U790]._fU4, l_U974[l_U790]._fU8, l_U981[l_U790]._fU0, l_U981[l_U790]._fU4, l_U981[l_U790]._fU8, l_U988, 0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U810._fU0 )))
                    {
                        CLEAR_CHAR_TASKS( l_U810._fU0 );
                        SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U810._fU0, l_U974[l_U790]._fU0, l_U974[l_U790]._fU4, l_U974[l_U790]._fU8, l_U981[l_U790]._fU0, l_U981[l_U790]._fU4, l_U981[l_U790]._fU8, l_U988 );
                        if (sub_8016( sub_634(), l_U853 ))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U810._fU0, sub_634() );
                            l_U193 = 2;
                        }
                    }
                }
                break;
                case 2:
                if ((sub_15226()) AND (sub_8090()))
                {
                    l_U803 = 0;
                    if (sub_16171( l_U853, l_U883 ))
                    {
                        for ( l_U879 = 0; l_U879 < 18; l_U879++ )
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_634(), l_U195[l_U879]._fU8._fU0, l_U195[l_U879]._fU8._fU4, l_U195[l_U879]._fU8._fU8, l_U195[l_U879]._fU32._fU0, l_U195[l_U879]._fU32._fU4, l_U195[l_U879]._fU32._fU8, 0 ))
                            {
                                l_U803 = 1;
                                l_U989 = l_U195[l_U879]._fU0;
                                if (NOT (sub_16581( ref g_U8852, l_U805, ref l_U808 )))
                                {
                                    sub_2860( "clothes_info[" );
                                    sub_6467( l_U879 );
                                    sub_2860( "].name: " );
                                    sub_2860( l_U195[l_U879]._fU0 );
                                    sub_2920();
                                    switch (l_U195[l_U879]._fU72)
                                    {
                                        case 0:
                                        if (sub_17017( l_U195[l_U879]._fU44, ref l_U195[l_U879]._fU56, ref l_U195[l_U879]._fU68, l_U195[l_U879]._fU96, l_U195[l_U879]._fU100, l_U195[l_U879]._fU4, ref l_U195[l_U879]._fU104, ref l_U195[l_U879]._fU116, l_U195[l_U879]._fU128, ref l_U809 ))
                                        {
                                            sub_23582();
                                            l_U194 = l_U879;
                                            l_U193 = 3;
                                        }
                                        break;
                                        default:
                                        sub_2860( "  ** clothes_info[" );
                                        sub_6467( l_U879 );
                                        sub_2860( "]." );
                                        SCRIPT_ASSERT( "ped_comp in perseus_manhat_8.sc not found!" );
                                        sub_2920();
                                    }
                                }
                            }
                            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, l_U195[l_U879]._fU20, ref l_U195[l_U879]._fU8 );
                        }
                    }
                    if ((sub_8016( sub_634(), l_U853 )) AND (NOT l_U803))
                    {
                        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            for ( I = 0; I < 18; I++ )
                            {
                                if (NOT (IS_STRING_NULL( l_U195[I]._fU4 )))
                                {
                                    if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U195[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U195[I]._fU4 )))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                sub_868( 2, "BLANK" );
                            }
                        }
                        l_U809 = 1;
                        l_U989 = "BLANK";
                    }
                }
                else if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    for ( I = 0; I < 18; I++ )
                    {
                        if (NOT (IS_STRING_NULL( l_U195[I]._fU4 )))
                        {
                            if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", l_U195[I]._fU4 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", l_U195[I]._fU4 )))
                            {
                                CLEAR_HELP();
                            }
                        }
                        sub_868( 2, "BLANK" );
                    }
                }
                break;
                case 3:
                if (sub_25330( l_U195[l_U194], l_U810._fU60 ))
                {
                    l_U995 = 0;
                    l_U997 = -1;
                    l_U193 = 2;
                }
                break;
                case 4:
                if (sub_29771( l_U195[l_U194], l_U876, ref l_U805, ref l_U874, ref l_U875, 2, l_U878, l_U810._fU60, l_U810._fU0 ))
                {
                    l_U995 = 0;
                    l_U997 = -1;
                    l_U193 = 2;
                }
                break;
                case 5:
                if (sub_31255( ref l_U791, l_U876, ref l_U805, ref l_U874, ref l_U875, 2, l_U878, l_U810._fU60, l_U810._fU0 ))
                {
                    l_U995 = 0;
                    l_U997 = -1;
                    l_U193 = 2;
                }
                break;
            }
        }
        else
        {
            l_U798 = 0;
        }
    }
    sub_373();
    return;
}

void sub_373()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U810._fU0 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U831._fU0 );
    sub_408();
    REMOVE_DECISION_MAKER( l_U810._fU52 );
    REMOVE_DECISION_MAKER( l_U810._fU56 );
    REMOVE_DECISION_MAKER( l_U831._fU52 );
    REMOVE_DECISION_MAKER( l_U831._fU56 );
    REMOVE_ANIMS( "clothing" );
    if (NOT (IS_CHAR_DEAD( sub_634() )))
    {
        FREEZE_CHAR_POSITION( sub_634(), 0 );
        if ((l_U799) AND (IS_PLAYER_PLAYING( sub_701() )))
        {
            SET_PLAYER_CONTROL( sub_701(), 1 );
            l_U799 = 0;
        }
    }
    sub_794( ref l_U875, ref l_U874, l_U873, ref l_U869, 2, IS_THIS_A_MINIGAME_SCRIPT() );
    StrCopy( ref g_U8852, "blank", 16 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_408()
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

void sub_634()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_701()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_794(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
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
    sub_868( 5, uParam2 );
    sub_868( 2, uParam3 );
    sub_868( 2, "BLANK" );
    if (bParam5)
    {
        if (g_U8780)
        {
            sub_1248( sub_634(), l_U173 );
            sub_2433();
            g_U8780 = 0;
        }
    }
    if (g_U8779 != 1)
    {
        sub_2476();
        g_U8779 = 1;
    }
    return;
}

void sub_868(int iParam0, string sParam1)
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
                    sub_1089();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_701(), 1 );
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

void sub_1089()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1248(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18)
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
        sub_1277( uParam0, ref uVar21, 0 );
        if (uParam1._fU0 != uVar21._fU0)
        {
            if (uParam1._fU0 != 10)
            {
                if (uParam1._fU0 < 0)
                {
                    CLEAR_CHAR_PROP( sub_634(), 0 );
                }
                else
                {
                    SET_CHAR_PROP_INDEX( sub_634(), 0, uParam1._fU0 );
                }
            }
            else
            {
                CLEAR_CHAR_PROP( uParam0, 0 );
                if (((GET_CHAR_TEXTURE_VARIATION( sub_634(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_634(), 8 )) != 1))
                {
                    SET_CHAR_COMPONENT_VARIATION( sub_634(), 8, 1, 0 );
                }
            }
        }
        if (uParam1._fU4 != uVar21._fU4)
        {
            if (uParam1._fU4 < 0)
            {
                CLEAR_CHAR_PROP( sub_634(), 1 );
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

void sub_1277(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 8 );
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

void sub_2433()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_2476()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_2485(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_2485(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( sub_701() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_634(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_2485()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2860(unknown uParam0)
{
    return;
}

void sub_2883(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U10602)
    {
        PRINTVECTOR( uParam0 );
    }
    return;
}

void sub_2920()
{
    if (g_U10602)
    {
        PRINTNL();
    }
    return;
}

void sub_2997()
{
    l_U810._fU4 = -151000142;
    l_U810._fU8[0] = {24.26820000, 807.43440000, 14.76180000};
    l_U810._fU8[1] = {11.87360000, -661.74200000, 13.86160000};
    l_U831._fU4 = -409283472;
    l_U831._fU8[0] = {20.33500000, 808.11030000, 14.76180000};
    l_U831._fU8[1] = {8.94040000, -660.86620000, 13.86160000};
    l_U974[1] = {15.61582000, -659.56750000, 17.46503000};
    l_U981[1] = {6.26549600, -659.75470000, 14.32902000};
    l_U974[0] = {27.25000000, 809.36000000, 17.15000000};
    l_U981[0] = {17.35000000, 809.36000000, 13.76000000};
    l_U790 = sub_3240( l_U883 );
    sub_3390();
    sub_4783();
    sub_6126();
    sub_1277( sub_634(), ref l_U173, 0 );
    StrCopy( ref g_U8852, "blank", 16 );
    return;
}

void sub_3240(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_3390()
{
    sub_3449( 0, -4.50000000, 5, 1, 0.70000000, 1, 1.50000000, -5, 5, 1, -3.96210000, 5.15830000, 0.00000000, 291.35540000 );
    sub_3449( 1, -4.70000000, -3.90000000, 1.00000000, 0.70000000, 0.75000000, 1.50000000, -5.00000000, -3.20000000, 1.00000000, -4.03980000, -3.98170000, 0.00010000, 81.72000000 );
    sub_3449( 2, -4.70000000, -2.45000000, 1.00000000, 0.70000000, 0.70000000, 1.50000000, -5.00000000, -3.20000000, 1.00000000, -4.03980000, -2.44730000, 0.00010000, 81.72000000 );
    sub_3449( 3, -4.70000000, -1.05000000, 1.00000000, 0.70000000, 0.70000000, 1.50000000, -5.00000000, -0.30000000, 1.00000000, -4.03980000, -1.47490000, 0.00010000, 169.92000000 );
    sub_3449( 4, -4.70000000, 0.40000000, 1.00000000, 0.70000000, 0.75000000, 1.50000000, -5.00000000, -0.30000000, 1.00000000, -4.03980000, 0.37880000, 0.00000000, 110.52000000 );
    sub_3449( 5, -4.70000000, 1.60000000, 1.00000000, 0.70000000, 0.45000000, 1.50000000, -5.10000000, 3.30000000, 0.80000000, -4.00000000, 1.59990000, 0.00010000, 51.12000000 );
    sub_3449( 6, -4.70000000, 2.50000000, 1.00000000, 0.70000000, 0.45000000, 1.50000000, -5.10000000, 1.90000000, 1.50000000, -4.00000000, 2.50000000, 0.00010000, 79.92000000 );
    sub_3449( 7, -4.70000000, 3.40000000, 1.00000000, 0.70000000, 0.45000000, 1.50000000, 4.10000000, 5.50000000, 0.80000000, -4.00000000, 3.40000000, 0.00000000, 192.24000000 );
    sub_4176( 8, -2.30000000, 1.30000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 2.20000000, 1.50000000 );
    sub_4176( 9, -2.30000000, 2.30000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 2.20000000, 1.50000000 );
    sub_4176( 10, -2.30000000, 3.50000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 4.10000000, 1.50000000 );
    sub_4176( 11, -2.30000000, 4.50000000, 1, 1, 0.50000000, 1.50000000, -2.60000000, 4.10000000, 1.50000000 );
    sub_4176( 12, 1.80000000, 1.30000000, 1, 1, 0.50000000, 1.50000000, 1.70000000, 2.20000000, 1 );
    sub_4176( 13, 1.80000000, 2.30000000, 1, 1, 0.50000000, 1.50000000, 1.70000000, 2.20000000, 1 );
    sub_4176( 14, 1.80000000, 3.80000000, 1.00000000, 1.00000000, 0.80000000, 1.50000000, 1.80000000, 4.00000000, 1.00000000 );
    sub_3449( 15, 3.90000000, 3.30000000, 1.00000000, 0.70000000, 0.50000000, 1.50000000, 4.10000000, 3.20000000, 1.00000000, 3.20000000, 3.30000000, 0.00010000, 12.24000000 );
    sub_3449( 16, 3.90000000, 4.30000000, 1.00000000, 0.70000000, 0.50000000, 1.50000000, 4.10000000, 4.20000000, 1.00000000, 3.20000000, 4.30000000, 0.00000000, 234.72000000 );
    sub_3449( 17, 3.90000000, 6.90000000, 1.00000000, 0.70000000, 0.70000000, 1.50000000, 4.10000000, 6.90000000, 1.00000000, 3.20000000, 6.90000000, 0.00000000, 338.04000000 );
    return;
}

void sub_3449(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    l_U195[uParam0]._fU20 = {uParam1};
    l_U195[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, l_U195[uParam0]._fU20, ref l_U195[uParam0]._fU8 );
    l_U195[uParam0]._fU44 = {uParam7};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, uParam10, ref l_U195[uParam0]._fU56 );
    l_U195[uParam0]._fU68 = uParam13;
    return;
}

void sub_4176(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    l_U195[uParam0]._fU20 = {uParam1};
    l_U195[uParam0]._fU32 = {uParam4};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, l_U195[uParam0]._fU20, ref l_U195[uParam0]._fU8 );
    l_U195[uParam0]._fU44 = {uParam7};
    return;
}

void sub_4783()
{
    sub_4830( 0, -4.55448700, 5.97628200, 0.71170000, -13.63334000, 0.00000000, 35.39263000, 70.00000000 );
    sub_4830( 1, -1.69000000, -4.52430000, 0.99140000, -4.10080000, 0.00000000, -104.49830000, 45.00000000 );
    sub_4830( 2, -2.10430000, -4.41170000, 0.95990000, -2.63960000, 0.00000000, -122.97750000, 45.00000000 );
    sub_4830( 3, -2.74020000, 1.32760000, 0.91420000, 0.28190000, 0.00000000, -33.48510000, 45.00000000 );
    sub_4830( 4, -1.72320000, 0.60220000, 1.36740000, -10.83310000, 0.00000000, -78.48130000, 45.00000000 );
    sub_4830( 5, -2.83260000, -0.59210000, 1.27540000, -9.10120000, 0.00000000, -146.20220000, 45.00000000 );
    sub_4830( 6, -2.52550000, 0.32290000, 1.22080000, -7.46690000, 0.00000000, -140.02610000, 45.00000000 );
    sub_4830( 7, -3.37510000, 5.61750000, 1.19880000, -7.95010000, 0.00000000, -13.73870000, 45.00000000 );
    sub_5293( 8, 0.06910000, -0.55330000, 1.34650000, -8.94419900, 0.00000000, -136.95590000, -4.92230000, 3.15220000, 1.03490000, -3.61100000, 0.00000000, 54.35730000, 45.00000000 );
    sub_5293( 9, 1.04110000, 1.64360000, 1.26390000, -8.72439900, 0.00000000, -103.26440000, -4.57160000, 4.41690000, 1.16050000, -5.50040000, 0.00000000, 40.11320000, 45.00000000 );
    sub_5293( 10, 0.39740000, 1.63170000, 1.23020000, -7.31950000, 0.00000000, -132.47660000, -4.92120000, 5.55270000, 1.05760000, -3.93160000, 0.00000000, 43.48990000, 45.00000000 );
    sub_5293( 11, 0.76090000, 3.08040000, 1.04680000, -3.31450000, 0.00000000, -124.49060000, -4.86740000, 6.44790000, 1.07290000, -3.65370000, 0.00000000, 39.58870000, 45.00000000 );
    sub_5293( 12, 3.65780000, -1.03430000, 1.21380000, -8.06170000, 0.00000000, -154.30100000, -1.15620000, 2.71690000, 1.14310000, -6.39000000, 0.00000000, 54.63970000, 45.00000000 );
    sub_5293( 13, 3.90450000, -0.04100000, 1.18740000, -5.29950000, 0.00000000, -150.57020000, -1.25150000, 3.35980000, 1.26600000, -8.91220000, 0.00000000, 69.25640000, 45.00000000 );
    sub_5293( 14, 4.12760000, 1.82550000, 1.21180000, -7.67760000, 0.00000000, -137.50910000, -0.42750000, 5.80700000, 1.08740000, -5.61680000, 0.00000000, 43.47570000, 45.00000000 );
    sub_4830( 15, 2.66470000, 0.64510000, 1.47730000, -13.96020000, 0.00000000, 164.19350000, 45.00000000 );
    sub_4830( 16, 1.72030000, 5.86890000, 1.26320000, -8.92240100, 0.00000000, 42.31780000, 45.00000000 );
    sub_4830( 17, 1.00480000, 5.40630000, 1.16660000, -7.06530000, 0.00000000, 121.38670000, 45.00000000 );
    return;
}

void sub_4830(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, uParam1, ref l_U195[uParam0]._fU104 );
    l_U195[uParam0]._fU116 = {uParam4};
    l_U195[uParam0]._fU128 = uParam7;
    return;
}

void sub_5293(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    sub_4830( uParam0, uParam1, uParam4, uParam13 );
    l_U886[sub_5324( uParam0 )] = {uParam1};
    l_U908[sub_5324( uParam0 )] = {uParam4};
    l_U930[sub_5324( uParam0 )] = {uParam7};
    l_U952[sub_5324( uParam0 )] = {uParam10};
    return;
}

int sub_5324(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        return 0;
        break;
        case 9:
        return 1;
        break;
        case 10:
        return 2;
        break;
        case 11:
        return 3;
        break;
        case 12:
        return 4;
        break;
        case 13:
        return 5;
        break;
        case 14:
        return 6;
        break;
    }
    return 7;
}

void sub_6126()
{
    return;
}

void sub_6180()
{
    sub_6196( l_U810._fU4 );
    sub_6196( l_U831._fU4 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U876 );
    GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U877 );
    while (NOT sub_6340())
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 3, ref l_U810._fU52 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U810._fU56 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U810._fU52, 31, 601, 100, 100, 100, 100, 0, 1 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U831._fU52 );
    COPY_COMBAT_DECISION_MAKER( 65568, ref l_U831._fU56 );
    CREATE_CHAR( 4, l_U810._fU4, l_U810._fU8[l_U790]._fU0, l_U810._fU8[l_U790]._fU4, l_U810._fU8[l_U790]._fU8, ref l_U810._fU0, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U810._fU0, l_U853 );
    sub_6732();
    SET_CHAR_HEADING( l_U810._fU0, 70.00000000 );
    SET_CHAR_DECISION_MAKER( l_U810._fU0, l_U810._fU52 );
    SET_COMBAT_DECISION_MAKER( l_U810._fU0, l_U810._fU56 );
    CREATE_CHAR( 4, l_U831._fU4, l_U831._fU8[l_U790]._fU0, l_U831._fU8[l_U790]._fU4, l_U831._fU8[l_U790]._fU8, ref l_U831._fU0, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U831._fU0, l_U853 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U831._fU0 );
    SET_CHAR_HEADING( l_U831._fU0, 250.00000000 );
    SET_CHAR_DECISION_MAKER( l_U831._fU0, l_U831._fU52 );
    SET_COMBAT_DECISION_MAKER( l_U831._fU0, l_U831._fU56 );
    TASK_START_SCENARIO_IN_PLACE( l_U831._fU0, "Scenario_Bouncer", -1082130432 );
    SET_AMBIENT_VOICE_NAME( l_U831._fU0, "M_Y_GAfr_Hi_01_FULL_01" );
    sub_7237( "" );
    sub_7364( 0, sub_634(), "NIKO", 0 );
    sub_7364( 2, l_U810._fU0, "GAY_SHOP_ASST", 0 );
    return;
}

void sub_6196(unknown uParam0)
{
    sub_2860( "REQUEST_A_MODEL(" );
    sub_2860( GET_MODEL_NAME_FOR_DEBUG( uParam0 ) );
    sub_2860( ")\n" );
    REQUEST_MODEL( uParam0 );
    l_U6[l_U39] = uParam0;
    l_U39++;
    return;
}

int sub_6340()
{
    int I;

    if (l_U39 != 0)
    {
        for ( I = 0; I <= (l_U39 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U6[I] )))
            {
                REQUEST_MODEL( l_U6[I] );
                sub_2860( "REQUEST_MODEL(" );
                sub_2860( GET_MODEL_NAME_FOR_DEBUG( l_U6[I] ) );
                sub_2860( ") [" );
                sub_6467( I );
                sub_2860( "]\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_6467(unknown uParam0)
{
    return;
}

void sub_6732()
{
    unknown uVar2;
    unknown uVar3;

    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U810._fU0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, GET_NUMBER_OF_CHAR_TEXTURE_VARIATIONS( l_U810._fU0, 1, 1 ), ref uVar2 );
    SET_CHAR_COMPONENT_VARIATION( l_U810._fU0, 1, 1, uVar2 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
    SET_CHAR_PROP_INDEX( l_U810._fU0, 1, uVar3 );
    sub_2860( "  * iShop_asst_random_torso = " );
    sub_6467( uVar2 );
    sub_2860( " iShop_asst_random_eyes = " );
    sub_6467( uVar3 );
    sub_2920();
    return;
}

void sub_7237(unknown uParam0)
{
    StrCopy( ref l_U74._fU0, uParam0, 16 );
    sub_7256();
    return;
}

void sub_7256()
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

void sub_7364(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U74._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U74._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7448( "\n PED NUMBER ", uParam0 );
    sub_7488( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7448(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7488(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_7573()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( l_U810._fU0 )))
    {
        if (IS_CHAR_ON_SCREEN( l_U810._fU0 ))
        {
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, l_U863, ref uVar2 );
            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, l_U866, ref uVar5 );
            if (IS_CHAR_IN_AREA_3D( sub_634(), uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

boolean sub_8016(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_8090()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( l_U810._fU0 )))
    {
        if (NOT sub_8119())
        {
            if (sub_8016( l_U810._fU0, l_U853 ))
            {
                if (sub_8016( sub_634(), l_U853 ))
                {
                    if ((IS_WANTED_LEVEL_GREATER( sub_701(), 0 )) || (IS_CHAR_IN_ANY_CAR( sub_634() )))
                    {
                        if (NOT l_U991)
                        {
                            sub_8275( 1, ref l_U810._fU60, 2, ref l_U810._fU0 );
                            l_U991 = 1;
                            l_U992 = 0;
                            l_U1000 = 1;
                        }
                        return 0;
                    }
                    else if (NOT g_U8781)
                    {
                        if (NOT l_U999)
                        {
                            PRINT_HELP( "CLO_CANT" );
                            l_U999 = 1;
                        }
                        return 0;
                    }
                    else if (NOT l_U991)
                    {
                        if (NOT l_U1000)
                        {
                            sub_8275( 3, ref l_U810._fU60, 2, ref l_U810._fU0 );
                            l_U991 = 1;
                            l_U992 = 0;
                        }
                    }
                    if ((l_U802) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U810._fU0, sub_634(), 0 )) || (IS_CHAR_SHOOTING( sub_634() ))))
                    {
                        if (sub_8016( sub_634(), l_U853 ))
                        {
                            if (sub_10514( l_U810._fU0, 91 ))
                            {
                                CLEAR_CHAR_TASKS( l_U810._fU0 );
                                SET_CHAR_RELATIONSHIP( l_U810._fU0, 4, 0 );
                                TASK_COMBAT( l_U810._fU0, sub_634() );
                                ALTER_WANTED_LEVEL_NO_DROP( sub_701(), 1 );
                                if (IS_CHAR_SHOOTING( sub_634() ))
                                {
                                    SAY_AMBIENT_SPEECH( l_U810._fU0, "SHOP_SHOTS_FIRED", 1, 0, 0 );
                                }
                                if (NOT l_U802)
                                {
                                    WAIT( 500 );
                                    PLAY_SOUND_FROM_POSITION( -1, "SHOP_ALARMS_RANDOM", l_U883 );
                                }
                                l_U802 = 1;
                            }
                        }
                    }
                    else if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_701(), l_U810._fU0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_701(), l_U810._fU0 )))
                    {
                        if (NOT l_U993)
                        {
                            if (IS_CHAR_ARMED( sub_634(), 4 ))
                            {
                                sub_8275( 7, ref l_U810._fU60, 2, ref l_U810._fU0 );
                            }
                            else
                            {
                                sub_8275( 6, ref l_U810._fU60, 2, ref l_U810._fU0 );
                            }
                            l_U993 = 1;
                        }
                    }
                    else if (NOT (sub_10887( l_U810._fU60 )))
                    {
                        l_U993 = 0;
                    }
                    if (NOT (sub_10887( l_U810._fU60 )))
                    {
                        if (l_U997 < 0)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 6000, 10000, ref l_U998 );
                            GET_GAME_TIMER( ref l_U997 );
                        }
                        else if (NOT l_U995)
                        {
                            GET_GAME_TIMER( ref l_U996 );
                            sub_2860( "  ** time to bitch: " );
                            sub_6467( (l_U997 + l_U998) - l_U996 );
                            sub_2920();
                            if (l_U996 > (l_U997 + l_U998))
                            {
                                switch (sub_11226())
                                {
                                    case 0:
                                    sub_8275( 8, ref l_U810._fU60, 2, ref l_U810._fU0 );
                                    break;
                                    case 1:
                                    sub_8275( 10, ref l_U810._fU60, 2, ref l_U810._fU0 );
                                    break;
                                    case 2:
                                    sub_8275( 9, ref l_U810._fU60, 2, ref l_U810._fU0 );
                                    break;
                                }
                                l_U995 = 1;
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U997 );
                    }
                    if (sub_10514( l_U810._fU0, 21 ))
                    {
                        if (TIMERB() > l_U877)
                        {
                            CLEAR_CHAR_TASKS( l_U810._fU0 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_GO_TO_CHAR( l_U810._fU0, sub_634(), -1, 5.00000000 );
                            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U877 );
                        }
                        else if ((sub_10514( l_U810._fU0, 25 )) AND (sub_10514( l_U810._fU0, 34 )))
                        {
                            if (NOT (IS_CHAR_FACING_CHAR( l_U810._fU0, sub_634(), 10.00000000 )))
                            {
                                CLEAR_CHAR_TASKS( l_U810._fU0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U810._fU0, sub_634() );
                            }
                        }
                    }
                    else
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U810._fU0, 2 );
                        SETTIMERB( 0 );
                    }
                    if ((NOT l_U994) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U810._fU0, sub_634(), 0 )))
                    {
                        sub_8275( 0, ref l_U810._fU60, 2, ref l_U810._fU0 );
                        l_U994 = 1;
                        l_U1000 = 1;
                    };;;
                }
                else if (NOT l_U802)
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_2D( l_U810._fU0, l_U810._fU8[l_U790]._fU0, l_U810._fU8[l_U790]._fU4, 1.00000000, 1.00000000, 0 )))
                    {
                        if (sub_10514( l_U810._fU0, 29 ))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar5 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, l_U810._fU8[l_U790]._fU0, l_U810._fU8[l_U790]._fU4, l_U810._fU8[l_U790]._fU8, 2, -2 );
                            GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, 0.00000000, -10.00000000, 1.00000000, ref uVar2 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            CLOSE_SEQUENCE_TASK( uVar5 );
                            TASK_PERFORM_SEQUENCE( l_U810._fU0, uVar5 );
                            CLEAR_SEQUENCE_TASK( uVar5 );
                        }
                    }
                    else if ((sub_10514( l_U810._fU0, 29 )) AND (sub_10514( l_U810._fU0, 1 )))
                    {
                        TASK_STAND_STILL( l_U810._fU0, -2 );
                    }
                }
                if (NOT l_U992)
                {
                    if (NOT l_U1000)
                    {
                        sub_8275( 2, ref l_U810._fU60, 2, ref l_U810._fU0 );
                        l_U992 = 1;
                    }
                }
                if ((sub_14488( sub_634(), l_U810._fU0 )) >= 25.00000000)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CLO_CANT" )))
                    {
                        l_U999 = 0;
                    }
                    l_U991 = 0;
                }
                if (l_U804)
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SHOP_H_EMPTY" ))
                    {
                        CLEAR_HELP();
                    }
                }
            }
            else if (NOT l_U804)
            {
                if (NOT (sub_8016( l_U810._fU0, l_U853 )))
                {
                    if (sub_8016( sub_634(), l_U853 ))
                    {
                        CLEAR_HELP();
                        PRINT_HELP( "SHOP_H_EMPTY" );
                        l_U804 = 1;
                    }
                }
            }
            return 0;;
        }
        else if ((sub_8016( l_U810._fU0, l_U853 )) AND (sub_8016( sub_634(), l_U853 )))
        {
            if (sub_10514( l_U810._fU0, 25 ))
            {
                sub_8275( 1, ref l_U810._fU60, 2, ref l_U810._fU0 );
                TASK_SMART_FLEE_CHAR( l_U810._fU0, sub_634(), 100.00000000, -1 );
                l_U1000 = 1;
            }
        }
        return 0;;
        return 1;
        break;
    }
    if (DOES_CHAR_EXIST( l_U810._fU0 ))
    {
        if (IS_CHAR_DEAD( l_U810._fU0 ))
        {
            sub_2860( "perseus shop_asst dead\n" );
        }
        else
        {
            sub_2860( "perseus shop_asst exists\n" );
        }
    }
    else
    {
        sub_2860( "perseus shop_asst doesn't exist\n" );
    }
    if (NOT l_U804)
    {
        if (DOES_CHAR_EXIST( l_U810._fU0 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U804 = 1;
        }
    }
    return 0;
}

int sub_8119()
{
    if ((l_U790 == 0) AND (g_U8840))
    {
        if (g_U8841)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8275(int iParam0, unknown uParam1, int iParam2, unknown uParam3)
{
    char[16] cVar6;

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
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_634() );
    }
    if ((iParam2 == 0) AND (sub_8757()))
    {
        if (NOT g_U8839)
        {
            if (iParam0 == 5)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_PLAYER_PURCHASES  - " );
                PRINTSTRING( "gbPKMAL_25_displayed:" );
                sub_8975( g_U8839 );
                PRINTNL();
                g_U8839 = 1;
                return 0;
            }
        }
        if (NOT g_U8836)
        {
            if (iParam0 == 3)
            {
                PRINTSTRING( "  * skipping speech ''" );
                PRINTSTRING( ref cVar6 );
                PRINTSTRING( "'' because ''roman3'' running and dateSpeech = CLOTHES_SHOP_GREETING  - " );
                PRINTSTRING( "bClothes_bought_in_roman3:" );
                sub_8975( g_U8836 );
                PRINTNL();
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( (uParam3^) )))
    {
        TASK_TURN_CHAR_TO_FACE_CHAR( (uParam3^), sub_634() );
    }
    sub_2860( "  * PLAY_SHOP_ASST_SPEECH(''" );
    sub_2860( ref cVar6 );
    sub_2860( "'')\n" );
    return sub_9339( ref cVar6, uParam1, 1, 0 );
}

void sub_8757()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_8975(boolean bParam0)
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

void sub_9339(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9362( uParam0, ref l_U74._fU0, uParam1, uParam2, uParam3 );
}

void sub_9362(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9416( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9416(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9438( iParam1 )))
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_10118( ref g_U8868, ref l_U74 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_9438(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2860( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_2860( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_2860( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_10118(int iParam0, int iParam1)
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

int sub_10514(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_10887(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_2860( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2860( "\n speech is not playing" );
    }
    return 0;
}

int sub_11226()
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
    sub_11245( ref uVar5 );
    sub_11463( ref uVar6 );
    sub_11702( ref uVar7 );
    if (bVar4)
    {
        if (bVar2)
        {
            PRINTSTRING( "  * bPosh_outfit + bPosh_feet: ALL_PERSEUS\n" );
            return 2;
        }
        else
        {
            PRINTSTRING( "  * bPosh_outfit + NOT bPosh_feet: SOME_PERSEUS\n" );
            return 1;
        }
        break;
    }
    if ((iVar3) || (bVar2))
    {
        PRINTSTRING( "  * NOT bPosh_outfit + bPosh_feet: SOME_PERSEUS\n" );
        return 1;
        break;
    }
    PRINTSTRING( "  * NOT bPosh_outfit + NOT bPosh_feet +  NOT bPosh_legs: NO_PERSEUS\n" );
    return 0;
}

void sub_11245(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 5 );
    bVar8 = false;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT bVar8)
        {
            sub_11313( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 2;
    }
    return;
}

void sub_11313(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        default:
          case 2:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_11463(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 2 );
    bVar8 = false;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT bVar8)
        {
            sub_11531( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_11531(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        default:
          case 3:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_11702(unknown uParam0)
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
    sub_11716( 0, ref uVar4 );
    for ( I = 0; I < 10; I++ )
    {
        if (((NOT bVar3) == 1) AND ((I != 1) AND (I != 0)))
        {
            if (sub_13127( I, 0, 0 ))
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

void sub_11716(unknown uParam0, int iParam1)
{
    switch (uParam0)
    {
        case 1:
        iParam1->_fU0 = g_U8789._fU0;
        iParam1->_fU4 = g_U8789._fU4;
        iParam1->_fU8 = g_U8789._fU8;
        iParam1->_fU12 = g_U8789._fU12;
        iParam1->_fU16 = g_U8789._fU16;
        iParam1->_fU20 = g_U8789._fU20;
        iParam1->_fU24 = g_U8789._fU24;
        break;
        case 0:
        sub_11915( iParam1 + 0 );
        sub_11463( iParam1 + 4 );
        sub_11245( iParam1 + 8 );
        sub_12280( iParam1 + 12 );
        sub_12486( iParam1 + 16 );
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        break;
        case 2:
        iParam1->_fU0 = 0;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 3:
        iParam1->_fU0 = 1;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 4:
        iParam1->_fU0 = 2;
        iParam1->_fU4 = 1;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 5:
        iParam1->_fU0 = 3;
        iParam1->_fU4 = 2;
        iParam1->_fU8 = 1;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 6:
        iParam1->_fU0 = 4;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 7:
        iParam1->_fU0 = 5;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 8:
        iParam1->_fU0 = 6;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        case 9:
        iParam1->_fU0 = 7;
        iParam1->_fU4 = 0;
        iParam1->_fU8 = 0;
        iParam1->_fU12 = 0;
        iParam1->_fU16 = 0;
        iParam1->_fU20 = 0;
        iParam1->_fU24 = 0;
        break;
        default:
          case 10:
        iParam1->_fU0 = 8;
        iParam1->_fU4 = 3;
        iParam1->_fU8 = 2;
        iParam1->_fU12 = 1;
        iParam1->_fU16 = 1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
    }
    return;
}

void sub_11915(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 1 );
    bVar8 = false;
    for ( I = 0; I < 8; I++ )
    {
        if (NOT bVar8)
        {
            sub_11983( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 8;
    }
    return;
}

void sub_11983(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 2:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 4:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        default:
          case 8:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_12280(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_PROP_INDEX( sub_634(), 0, ref iVar3 );
    (uParam0^) = 1;
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_12333( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == 0)
    {
        uVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 8 );
        uVar8 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 8 );
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_12333(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

void sub_12486(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_634(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_12535( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_12535(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = -1;
        break;
        default:
          case 1: (uParam1^) = 2147483647;
    }
    return;
}

int sub_13127(unknown uParam0, unknown uParam1, boolean bParam2)
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

    sub_11716( uParam0, ref uVar5 );
    sub_11716( uParam1, ref uVar12 );
    if ((NOT ((uVar12._fU0 == 8) || (uVar5._fU0 == 8))) AND (uVar5._fU0 != uVar12._fU0))
    {
        return 0;
    }
    if ((NOT ((uVar12._fU4 == 3) || (uVar5._fU4 == 3))) AND (uVar5._fU4 != uVar12._fU4))
    {
        return 0;
    }
    if ((NOT ((uVar12._fU8 == 2) || (uVar5._fU8 == 2))) AND (uVar5._fU8 != uVar12._fU8))
    {
        return 0;
    }
    if (bParam2)
    {
        if ((NOT ((uVar12._fU12 == 1) || (uVar5._fU12 == 1))) AND (uVar5._fU12 != uVar12._fU12))
        {
            return 0;
        }
        if ((NOT ((uVar12._fU16 == 1) || (uVar5._fU16 == 1))) AND (uVar5._fU16 != uVar12._fU16))
        {
            return 0;
        }
    }
    return 1;
}

void sub_14488(unknown uParam0, unknown uParam1)
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

int sub_15226()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( l_U831._fU0 )))
    {
        if ((sub_8016( l_U831._fU0, l_U853 )) AND (sub_8016( sub_634(), l_U853 )))
        {
            if ((NOT l_U802) AND (NOT sub_8119()))
            {
                if (NOT (IS_CHAR_ARMED( sub_634(), 7 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U831._fU0, l_U831._fU8[l_U790]._fU0, l_U831._fU8[l_U790]._fU4, l_U831._fU8[l_U790]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                    {
                        if (sub_10514( l_U831._fU0, 114 ))
                        {
                            TASK_CLEAR_LOOK_AT( l_U831._fU0 );
                            TASK_START_SCENARIO_IN_PLACE( l_U831._fU0, "Scenario_Bouncer", -1082130432 );
                        }
                    }
                    else if (sub_10514( l_U831._fU0, 29 ))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_CLEAR_LOOK_AT( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U831._fU8[l_U790]._fU0, l_U831._fU8[l_U790]._fU4, l_U831._fU8[l_U790]._fU8, 2, -2, 2.00000000 );
                        TASK_ACHIEVE_HEADING( 0, 250.00000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U831._fU0, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                        l_U1001 = 0;
                    }
                    else if (l_U1001)
                    {
                        CLEAR_CHAR_TASKS( l_U831._fU0 );
                    };;;
                }
                else if (sub_10514( l_U831._fU0, 29 ))
                {
                    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
                    {
                        SAY_AMBIENT_SPEECH( l_U831._fU0, "GANG_WEAPON_WARNING", 0, 0, 0 );
                    }
                    OPEN_SEQUENCE_TASK( ref uVar2 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GO_TO_CHAR( 0, sub_634(), -1, 5.00000000 );
                    TASK_LOOK_AT_CHAR( 0, sub_634(), -1, 0 );
                    CLOSE_SEQUENCE_TASK( uVar2 );
                    TASK_PERFORM_SEQUENCE( l_U831._fU0, uVar2 );
                    CLEAR_SEQUENCE_TASK( uVar2 );
                    l_U1001 = 1;
                }
                else if (NOT l_U1001)
                {
                    CLEAR_CHAR_TASKS( l_U831._fU0 );
                };;;
            }
            else if (sub_10514( l_U831._fU0, 91 ))
            {
                TASK_COMBAT( l_U831._fU0, sub_634() );
            }
            return 0;;
        }
        return 1;
        break;
    }
    if (DOES_CHAR_EXIST( l_U831._fU0 ))
    {
        if (IS_CHAR_DEAD( l_U831._fU0 ))
        {
            sub_2860( "perseus shop_bouncer dead\n" );
        }
        else
        {
            sub_2860( "perseus shop_bouncer exists\n" );
        }
    }
    else
    {
        sub_2860( "perseus shop_bouncer doesn't exist\n" );
    }
    if (NOT l_U804)
    {
        if (DOES_CHAR_EXIST( l_U831._fU0 ))
        {
            PRINT_HELP( "SHOP_H_DEAD" );
            l_U804 = 1;
        }
    }
    return 0;
}

int sub_16171(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (sub_8016( sub_634(), uParam0 ))
    {
        if (NOT (HAVE_ANIMS_LOADED( "clothing" )))
        {
            REQUEST_ANIMS( "clothing" );
        }
        else if (NOT l_U990)
        {
            l_U990 = 1;
        }
        return 1;;
    }
    else if (HAVE_ANIMS_LOADED( "clothing" ))
    {
        GET_CHAR_COORDINATES( sub_634(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, uParam1._fU0, uParam1._fU4, ref fVar9 );
        if (fVar9 > 15.00000000)
        {
            REMOVE_ANIMS( "clothing" );
            l_U990 = 0;
        }
    }
    return 0;
}

int sub_16581(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( uParam0, uParam1 ))
    {
        if ((uParam2^) < 0)
        {
            GET_GAME_TIMER( uParam2 );
        }
        GET_GAME_TIMER( ref iVar5 );
        sub_2860( "  ''" );
        sub_2860( uParam0 );
        sub_2860( "'', " );
        sub_6467( uParam1 );
        sub_2860( "    //" );
        sub_6467( iVar5 - (uParam2^) );
        sub_2860( "\n" );
        if ((iVar5 - (uParam2^)) > 2000)
        {
            CLEAR_HELP();
        }
        return 1;
    }
    (uParam2^) = -1;
    return 0;
}

int sub_17017(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, uParam0, ref l_U880 );
    if ((NOT l_U800) AND (sub_17047( 2, 0 )))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_BOUGHT_B_F" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "HELP_BOUGHT_B", iParam6 ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_POOR_B" )))))
        {
            if (sub_17428( 2, "BLANK", 0 ))
            {
                l_U800 = 1;
            }
            if (NOT g_U8823[uParam5])
            {
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam7 )))
                {
                    sub_18100( "LB_TRYON", uParam7, uParam11 );
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam7 )))
            {
                sub_18100( "LB_TRYON_B", uParam7, uParam11 );
            }
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_B", uParam7 )) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON", uParam7 )))
    {
        CLEAR_HELP();
    }
    if (l_U800)
    {
        sub_18424( uParam3, uParam4 );
        sub_19575();
        while (NOT (sub_19904( ref l_U874, l_U880, (uParam3^), (uParam4^), 2, 0, 0 )))
        {
            WAIT( 0 );
        }
        l_U806 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 3 );
        l_U807 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 3 );
        sub_1277( sub_634(), ref l_U173, 0 );
        sub_21219( uParam5 );
        TASK_PLAY_ANIM( sub_634(), "examine shirt", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
        if (NOT g_U8842)
        {
            PRINT_WITH_NUMBER_NOW( "BUY_SUIT", iParam6, 7500, 1 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUY_SUIT_A", iParam6 / 2, 7500, 1 );
        }
        PRINT_HELP_FOREVER( "HELP_BUY_B" );
        sub_22121( 2, ref l_U874, 0, ref l_U875, ref l_U869, ref l_U878, (uParam8^), (uParam9^), uParam10 );
        l_U800 = 0;
        l_U805 = iParam6;
        return 1;
    }
    return 0;
}

int sub_17047(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_701() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_701() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_701() )))))
                {
                    if (NOT sub_17143())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_634() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_17228())
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

int sub_17143()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_17228()
{
    return sub_17239( 0, 0 );
}

int sub_17239(boolean bParam0, unknown uParam1)
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

int sub_17428(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_17047( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_701(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_17703();
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

void sub_17703()
{
    return sub_17239( 1, 1 );
}

void sub_18100(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_2860( "ar_PRINT_SHOP_HELP(''" );
    sub_2860( uParam0 );
    sub_2860( "'', ''" );
    sub_2860( uParam1 );
    sub_2860( "'', " );
    sub_18181( (uParam2^) );
    sub_2860( ")    //" );
    sub_18181( IS_HELP_MESSAGE_BEING_DISPLAYED() );
    sub_2920();
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

void sub_18181(unknown uParam0)
{
    if (g_U10602)
    {
        sub_8975( uParam0 );
    }
    return;
}

void sub_18424(int iParam0, unknown uParam1)
{
    int I;

    if (IS_PLAYER_CONTROL_ON( sub_701() ))
    {
        SET_PLAYER_CONTROL( sub_701(), 0 );
    }
    for ( I = 0; I < 18; I++ )
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_634(), l_U195[I]._fU8._fU0, l_U195[I]._fU8._fU4, l_U195[I]._fU8._fU8, l_U195[I]._fU32._fU0, l_U195[I]._fU32._fU4, l_U195[I]._fU32._fU8, 0 ))
        {
            if (sub_18591( I ))
            {
                if (sub_18669( sub_5324( I ) ))
                {
                    (iParam0^) = {l_U195[I]._fU8};
                    iParam0->_fU0 -= l_U195[I]._fU32._fU0 - 0.25000000;
                    GET_GROUND_Z_FOR_3D_COORD( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0 + 8 );
                    (uParam1^) = 70.00000000;
                }
                else if (sub_19189( sub_5324( I ) ))
                {
                    (iParam0^) = {l_U195[I]._fU8};
                    iParam0->_fU0 += l_U195[I]._fU32._fU0 - 0.25000000;
                    GET_GROUND_Z_FOR_3D_COORD( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0 + 8 );
                    (uParam1^) = 240.00000000;
                }
            }
        }
    }
    return;
}

int sub_18591(int iParam0)
{
    if ((iParam0 == 14) || ((iParam0 == 13) || ((iParam0 == 12) || ((iParam0 == 11) || ((iParam0 == 10) || ((iParam0 == 9) || (iParam0 == 8)))))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_18669(unknown uParam0)
{
    if (IS_CHAR_IN_AREA_3D( sub_634(), l_U195[sub_18685( uParam0 )]._fU8._fU0, (l_U195[sub_18685( uParam0 )]._fU8._fU4) + (l_U195[sub_18685( uParam0 )]._fU32._fU4), (l_U195[sub_18685( uParam0 )]._fU8._fU8) + (l_U195[sub_18685( uParam0 )]._fU32._fU8), (l_U195[sub_18685( uParam0 )]._fU8._fU0) - (l_U195[sub_18685( uParam0 )]._fU32._fU0), (l_U195[sub_18685( uParam0 )]._fU8._fU4) - (l_U195[sub_18685( uParam0 )]._fU32._fU4), (l_U195[sub_18685( uParam0 )]._fU8._fU8) - (l_U195[sub_18685( uParam0 )]._fU32._fU8), 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_18685(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 8;
        break;
        case 1:
        return 9;
        break;
        case 2:
        return 10;
        break;
        case 3:
        return 11;
        break;
        case 4:
        return 12;
        break;
        case 5:
        return 13;
        break;
        case 6:
        return 14;
        break;
    }
    return 18;
}

int sub_19189(unknown uParam0)
{
    if (IS_CHAR_IN_AREA_3D( sub_634(), (l_U195[sub_18685( uParam0 )]._fU8._fU0) + (l_U195[sub_18685( uParam0 )]._fU32._fU0), (l_U195[sub_18685( uParam0 )]._fU8._fU4) + (l_U195[sub_18685( uParam0 )]._fU32._fU4), (l_U195[sub_18685( uParam0 )]._fU8._fU8) + (l_U195[sub_18685( uParam0 )]._fU32._fU8), l_U195[sub_18685( uParam0 )]._fU8._fU0, (l_U195[sub_18685( uParam0 )]._fU8._fU4) - (l_U195[sub_18685( uParam0 )]._fU32._fU4), (l_U195[sub_18685( uParam0 )]._fU8._fU8) - (l_U195[sub_18685( uParam0 )]._fU32._fU8), 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_19575()
{
    int I;

    for ( I = 0; I < 18; I++ )
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_634(), l_U195[I]._fU8._fU0, l_U195[I]._fU8._fU4, l_U195[I]._fU8._fU8, l_U195[I]._fU32._fU0, l_U195[I]._fU32._fU4, l_U195[I]._fU32._fU8, 0 ))
        {
            if (sub_18591( I ))
            {
                if (sub_18669( sub_5324( I ) ))
                {
                    sub_4830( I, l_U886[sub_5324( I )], l_U908[sub_5324( I )], l_U195[I]._fU128 );
                }
                else if (sub_19189( sub_5324( I ) ))
                {
                    sub_4830( I, l_U930[sub_5324( I )], l_U952[sub_5324( I )], l_U195[I]._fU128 );
                }
            }
        }
    }
    return;
}

int sub_19904(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, boolean bParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT l_U192)
    {
        sub_19924();
        g_U8780 = 1;
        g_U8779 = uParam9;
        l_U192 = 1;
    }
    if ((NOT bParam10) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 0 );
            if (sub_20013( uParam9, ref uVar13 ))
            {
                PLAY_SOUND_FROM_PED( -1, sub_20070( uVar13 ), sub_634() );
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
            if (sub_20689( uParam8, ref uVar15, ref uVar18 ))
            {
                SET_CAR_HEADING( uVar14, uVar18 );
                SET_CAR_COORDINATES( uVar14, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
            }
        }
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_634() );
    SET_CHAR_COORDINATES( sub_634(), uParam4._fU0, uParam4._fU4, uParam4._fU8 );
    SET_CHAR_HEADING( sub_634(), uParam7 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_634(), 1 );
    CLEAR_AREA_OF_OBJECTS( uParam4._fU0, uParam4._fU4, uParam4._fU8, 5.00000000 );
    l_U192 = 0;
    return 1;
}

void sub_19924()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

int sub_20013(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        return 1;
        break;
        default:
    }
    return 0;
}

string sub_20070(unknown uParam0)
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

int sub_20689(unknown uParam0, unknown uParam1, unknown uParam2)
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
        GET_CHAR_COORDINATES( sub_634(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        switch (sub_3240( uVar5 ))
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

void sub_21219(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_11716( uParam0, ref uVar3 );
    if (uVar3._fU0 < 8)
    {
        sub_21251( uVar3._fU0 );
    }
    if (uVar3._fU4 < 3)
    {
        sub_21355( uVar3._fU4 );
    }
    if (uVar3._fU8 < 2)
    {
        sub_21459( uVar3._fU8 );
    }
    if (uVar3._fU12 < 1)
    {
        sub_21563( uVar3._fU12 );
    }
    if (uVar3._fU16 < 1)
    {
        sub_21720( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_21251(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_11983( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_21355(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_11531( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_21459(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_11313( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_634(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_634(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_21563(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_12333( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_634(), 0, ref iVar4 );
    if (((GET_CHAR_TEXTURE_VARIATION( sub_634(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_634(), 8 )) != 0))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_634(), 8, 0, 0 );
    }
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_634(), 0 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_634(), 0, iVar3 );
        }
    }
    return;
}

void sub_21720(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_12535( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_634(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_634(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_634(), 1, iVar3 );
        }
    }
    return;
}

void sub_22121(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    sub_22132( uParam1 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_USE_HIGHDOF( 1 );
    CREATE_CAM( 14, uParam3 );
    SET_CAM_POS( (uParam3^), uParam6._fU0, uParam6._fU4, uParam6._fU8 );
    SET_CAM_ROT( (uParam3^), uParam9._fU0, uParam9._fU4, uParam9._fU8 );
    SET_CAM_FOV( (uParam3^), uParam12 );
    SET_CAM_ACTIVE( (uParam3^), 1 );
    SET_CAM_NEAR_DOF( (uParam3^), 0.50000000 );
    SET_CAM_FAR_DOF( (uParam3^), 5.00000000 );
    FREEZE_CHAR_POSITION( sub_634(), 0 );
    SET_PLAYER_CONTROL( sub_701(), 0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_701(), 1 );
    SET_CAM_PROPAGATE( (uParam3^), 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    GET_GAME_TIMER( uParam5 );
    g_U8779 = uParam2;
    sub_868( 2, "BLANK" );
    sub_868( 2, uParam4 );
    sub_22462( uParam0 );
    if ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    while (sub_23489())
    {
        WAIT( 0 );
    }
    return;
}

void sub_22132(unknown uParam0)
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

void sub_22462(unknown uParam0)
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

    GET_GROUP_SIZE( sub_2485(), ref uVar3, ref iVar4 );
    if (iVar4 > 0)
    {
        for ( I = 0; I < iVar4; I++ )
        {
            GET_GROUP_MEMBER( sub_2485(), I, ref uVar10 );
            if ((IS_PLAYER_PLAYING( sub_701() )) AND (NOT (IS_CHAR_INJURED( uVar10 ))))
            {
                vVar11 = {0.00000000, 0.00000000, 0.00000000};
                fVar14 = 0.00000000;
                sub_22587( uParam0, I, ref vVar11, ref fVar14 );
                SET_CHAR_COORDINATES( uVar10, vVar11.x, vVar11.y, vVar11.z );
                SET_CHAR_HEADING( uVar10, fVar14 );
                TASK_LOOK_AT_CHAR( uVar10, sub_634(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar10, "Scenario_Standing", vVar11, fVar14 );
            }
        }
    }
    return;
}

void sub_22587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
        GET_CHAR_COORDINATES( sub_634(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        switch (sub_3240( uVar6 ))
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

int sub_23489()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_23582()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;
    vector vVar11;
    vector vVar14;
    vector vVar17;
    vector vVar20;
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
    unknown uVar39;
    unknown uVar40;

    SET_ROOM_FOR_CHAR_BY_NAME( sub_634(), l_U853 );
    vVar2 = {0.00000000, 0.70000000, 0.00000000};
    vVar5 = {-5.00000000, -5.75000000, 2.00000000};
    vVar8 = {5.00000000, 7.50000000, 2.00000000};
    vVar11 = {3.75000000, 3.08000000, 0.00000000};
    vVar14 = {3.75000000, -1.50000000, 0.00000000};
    vVar17 = {-4.08000000, 3.08000000, 0.00000000};
    vVar20 = {-4.08000000, -1.50000000, 0.00000000};
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar2, ref uVar23 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar5, ref uVar26 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar5.x, vVar8.y, vVar5.z, ref uVar29 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar8.x, vVar5.y, vVar8.z, ref uVar32 );
    GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar8, ref uVar35 );
    if (IS_CHAR_IN_AREA_3D( sub_634(), uVar26._fU0, uVar26._fU4, uVar26._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar11, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U810._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U810._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U810._fU0, 314.47700000 );
            PRINTSTRING( "repos vPerseus_min_l_pos\n" );
        }
    }
    else if (IS_CHAR_IN_AREA_3D( sub_634(), uVar29._fU0, uVar29._fU4, uVar29._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar14, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U810._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U810._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U810._fU0, 207.76360000 );
            PRINTSTRING( "repos vPerseus_max_l_pos\n" );
        }
    }
    else if (IS_CHAR_IN_AREA_3D( sub_634(), uVar32._fU0, uVar32._fU4, uVar32._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar17, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U810._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U810._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U810._fU0, 39.78040000 );
            PRINTSTRING( "repos vPerseus_min_r_pos\n" );
        }
    }
    else if (IS_CHAR_IN_AREA_3D( sub_634(), uVar35._fU0, uVar35._fU4, uVar35._fU8, uVar23._fU0, uVar23._fU4, uVar23._fU8, 1 ))
    {
        GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS( l_U852, vVar20, ref uVar38 );
        if (NOT (IS_CHAR_INJURED( l_U810._fU0 )))
        {
            SET_CHAR_COORDINATES( l_U810._fU0, uVar38._fU0, uVar38._fU4, uVar38._fU8 );
            SET_CHAR_HEADING( l_U810._fU0, 139.45880000 );
            PRINTSTRING( "repos vPerseus_max_r_pos\n" );
        }
    };;;;
    if (NOT (IS_CHAR_INJURED( l_U831._fU0 )))
    {
        SET_CHAR_COORDINATES( l_U831._fU0, l_U831._fU8[l_U790]._fU0, l_U831._fU8[l_U790]._fU4, l_U831._fU8[l_U790]._fU8 );
        SET_CHAR_HEADING( l_U831._fU0, 250.00000000 );
        CLEAR_CHAR_TASKS( l_U831._fU0 );
        TASK_START_SCENARIO_IN_PLACE( l_U831._fU0, "Scenario_Bouncer", -1082130432 );
        l_U1001 = 0;
    }
    return;
}

int sub_25330(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38)
{
    int iVar41;
    int iVar42;
    int iVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;

    iVar41 = l_U805;
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar41 );
        iVar41 = l_U805 / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar41 );
        PRINTSTRING( "  (50%)\n" );
    }
    if ((sub_10514( sub_634(), 88 )) AND (sub_10514( sub_634(), 80 )))
    {
        if (TIMERA() > l_U876)
        {
            if (l_U1002)
            {
                TASK_PLAY_ANIM( sub_634(), "Tie_Adjust_Stand", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            }
            else
            {
                TASK_PLAY_ANIM( sub_634(), "Brushoff_Suit_Stand", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
            }
            l_U1002 = NOT l_U1002;
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref l_U876 );
        }
    }
    else
    {
        SETTIMERA( 0 );
    }
    iVar42 = -1;
    iVar43 = -1;
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar42, ref iVar43 );
    }
    if (((iVar42 != -1) AND (iVar42 != 0)) || (IS_BUTTON_PRESSED( 0, 0 )))
    {
        if (IS_USING_CONTROLLER())
        {
            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar44, ref uVar45, ref uVar46, ref uVar47 );
        }
        else
        {
            GET_KEYBOARD_MOVE_INPUT( ref uVar44, ref uVar45 );
        }
    }
    else if (sub_25818())
    {
        CLEAR_PRINTS();
        if (NOT sub_25885())
        {
            iVar41 = 0;
            PRINT_HELP( "HELP_BOUGHT_B_F" );
            sub_26010( 2, uParam0._fU96, iVar41, uParam33, l_U810._fU0 );
            SET_CHAR_COMPONENT_VARIATION( sub_634(), 3, l_U806, l_U807 );
            while (NOT (sub_26288( ref l_U874, ref l_U875, "null", "LB_TRYON", 2, 0, ref l_U878, 0 )))
            {
                WAIT( 0 );
            }
            l_U799 = 0;
            return 1;
        }
        else if (NOT (IS_SCORE_GREATER( sub_701(), iVar41 - 1 )))
        {
            PRINT_HELP( "HELP_POOR_B" );
            while (NOT (sub_26288( ref l_U874, ref l_U875, "null", "LB_TRYON", 2, 1, ref l_U878, 0 )))
            {
                WAIT( 0 );
            }
            l_U799 = 0;
            return 1;
        }
        else
        {
            StrCopy( ref g_U8852, "HELP_BOUGHT_B", 16 );
            PRINT_HELP_WITH_NUMBER( "HELP_BOUGHT_B", iVar41 );
            sub_26010( 2, uParam0._fU96, iVar41, uParam33, l_U810._fU0 );
            SET_CHAR_COMPONENT_VARIATION( sub_634(), 3, l_U806, l_U807 );
            while (NOT (sub_26288( ref l_U874, ref l_U875, "null", "LB_TRYON", 2, 0, ref l_U878, 0 )))
            {
                WAIT( 0 );
            }
            l_U799 = 0;
            return 1;
        }
    }
    else if (sub_29337( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_26288( ref l_U874, ref l_U875, "null", "LB_TRYON", 2, 1, ref l_U878, 0 )))
        {
            WAIT( 0 );
        }
        l_U799 = 0;
        return 1;
    }
    else if (NOT g_U8842)
    {
        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_SUIT", 4, "", "", "", iVar41, -1, -1, -1, -1, -1 )))
        {
            PRINT_WITH_NUMBER( "BUY_SUIT", iVar41, 7500, 1 );
        }
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "BUY_SUIT_A", 4, "", "", "", iVar41, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( "BUY_SUIT_A", iVar41, 7500, 1 );
    };;;;;
    DISPLAY_CASH( 1 );
    return 0;
}

int sub_25818()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_25885()
{
    if (g_U8837)
    {
        if (NOT g_U8836)
        {
            g_U8836 = 1;
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

void sub_26010(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_701(), -1 * iParam2 );
    g_U8823[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8859 += iParam2;
        g_U8862++;
        break;
        case 1:
        g_U8860 += iParam2;
        g_U8863++;
        break;
        case 2:
        g_U8861 += iParam2;
        g_U8864++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_8275( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_26288(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, boolean bParam7)
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
                if (sub_20013( g_U8779, ref uVar10 ))
                {
                    PLAY_SOUND_FROM_PED( -1, sub_20070( uVar10 ), sub_634() );
                }
            }
        }
        return 0;
        break;
    }
    while (sub_23489())
    {
        WAIT( 0 );
    }
    sub_868( 5, uParam2 );
    sub_868( 5, "LB_LEAVE_H" );
    sub_868( 5, "BLANK" );
    sub_868( 2, uParam3 );
    sub_868( 2, "BLANK" );
    CLEAR_CHAR_TASKS( sub_634() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_634(), 0 );
    if (bParam5)
    {
        sub_1248( sub_634(), l_U173 );
    }
    GET_GAME_TIMER( ref iVar11 );
    INCREMENT_INT_STAT_NO_MESSAGE( 50, iVar11 - (uParam6^) );
    switch (uParam4)
    {
        case 0:
        g_U8856 += iVar11 - (uParam6^);
        break;
        case 1:
        g_U8857 += iVar11 - (uParam6^);
        break;
        case 2:
        g_U8858 += iVar11 - (uParam6^);
        break;
    }
    (uParam6^) = 0;
    REGISTER_STRING_FOR_FRONTEND_STAT( 668, sub_26661() );
    CLEAR_PRINTS();
    SET_CAM_BEHIND_PED( sub_634() );
    FREEZE_CHAR_POSITION( sub_634(), 0 );
    sub_2433();
    g_U8780 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 0 );
    }
    SET_PLAYER_CONTROL( sub_701(), 1 );
    SET_EVERYONE_IGNORE_PLAYER( sub_701(), 0 );
    sub_1089();
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    sub_28809( uParam0 );
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
    sub_2476();
    g_U8779 = 1;
    return 1;
}

string sub_26661()
{
    if (CAN_THE_STAT_HAVE_STRING( 668 ))
    {
        switch (sub_26685())
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
            PRINTINT( g_U8859 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8860 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8861 );
            PRINTNL();
            PRINTSTRING( "  # L" );
            PRINTINT( g_U8862 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8863 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8864 );
            PRINTNL();
            PRINTSTRING( "  @ L" );
            PRINTINT( g_U8856 );
            PRINTSTRING( ", M" );
            PRINTINT( g_U8857 );
            PRINTSTRING( ", H" );
            PRINTINT( g_U8858 );
            PRINTNL();
            return "null";
            break;
        }
        PRINTSTRING( "  ** GET_NAME_FAVOURITE_SHOP(" );
        PRINTINT( sub_26685() );
        PRINTSTRING( ") **\n" );
        PRINTSTRING( "  $ L" );
        PRINTINT( g_U8859 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8860 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8861 );
        PRINTNL();
        PRINTSTRING( "  # L" );
        PRINTINT( g_U8862 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8863 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8864 );
        PRINTNL();
        PRINTSTRING( "  @ L" );
        PRINTINT( g_U8856 );
        PRINTSTRING( ", M" );
        PRINTINT( g_U8857 );
        PRINTSTRING( ", H" );
        PRINTINT( g_U8858 );
        PRINTNL();
        SCRIPT_ASSERT( "invalid get_shop_most_money()" );
        return "invalid get_shop_most_money() - ALWYN FUCKED UP AGAIN!!!";
        break;
    }
    return "GET_NAME_FAVOURITE_SHOP()";
}

void sub_26685()
{
    if ((g_U8859 > g_U8861) AND (g_U8859 > g_U8860))
    {
        return 0;
        break;
    }
    if ((g_U8860 > g_U8861) AND (g_U8860 > g_U8859))
    {
        return 1;
        break;
    }
    if ((g_U8861 > g_U8860) AND (g_U8861 > g_U8859))
    {
        return 2;
        break;
    }
    if ((g_U8859 == 0) AND ((g_U8859 == 0) AND (g_U8859 == 0)))
    {
        return sub_26834( 8 );
        break;
    }
    if ((g_U8861 != g_U8859) AND ((g_U8860 != g_U8861) AND (g_U8859 == g_U8860)))
    {
        return sub_26834( 5 );
        break;
    }
    if ((g_U8861 != g_U8859) AND ((g_U8860 == g_U8861) AND (g_U8859 != g_U8860)))
    {
        return sub_26834( 6 );
        break;
    }
    if ((g_U8861 == g_U8859) AND ((g_U8860 != g_U8861) AND (g_U8859 != g_U8860)))
    {
        return sub_26834( 7 );
        break;
    }
    return sub_26834( 8 );
}

void sub_26834(int iParam0)
{
    if (((iParam0 == 8) || ((iParam0 == 7) || (iParam0 == 5))) AND ((g_U8862 > g_U8864) AND (g_U8862 > g_U8863)))
    {
        return 0;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 5) || (iParam0 == 6))) AND ((g_U8863 > g_U8864) AND (g_U8863 > g_U8862)))
    {
        return 1;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 6) || (iParam0 == 7))) AND ((g_U8864 > g_U8863) AND (g_U8864 > g_U8862)))
    {
        return 2;
        break;
    }
    if ((g_U8862 == 0) AND ((g_U8862 == 0) AND (g_U8862 == 0)))
    {
        return sub_27028( 8 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 5)) AND ((g_U8864 != g_U8862) AND ((g_U8863 != g_U8864) AND (g_U8862 == g_U8863))))
    {
        return sub_27028( 5 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 6)) AND ((g_U8864 != g_U8862) AND ((g_U8863 == g_U8864) AND (g_U8862 != g_U8863))))
    {
        return sub_27028( 6 );
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 7)) AND ((g_U8864 == g_U8862) AND ((g_U8863 != g_U8864) AND (g_U8862 != g_U8863))))
    {
        return sub_27028( 7 );
        break;
    }
    return sub_27028( 8 );
}

int sub_27028(int iParam0)
{
    if (((iParam0 == 8) || ((iParam0 == 7) || (iParam0 == 5))) AND ((g_U8856 > g_U8858) AND (g_U8856 > g_U8857)))
    {
        return 0;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 5) || (iParam0 == 6))) AND ((g_U8857 > g_U8858) AND (g_U8857 > g_U8856)))
    {
        return 1;
        break;
    }
    if (((iParam0 == 8) || ((iParam0 == 6) || (iParam0 == 7))) AND ((g_U8858 > g_U8857) AND (g_U8858 > g_U8856)))
    {
        return 2;
        break;
    }
    if ((g_U8856 == 0) AND ((g_U8856 == 0) AND (g_U8856 == 0)))
    {
        return 4;
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 5)) AND ((g_U8858 != g_U8856) AND ((g_U8857 != g_U8858) AND (g_U8856 == g_U8857))))
    {
        return 5;
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 6)) AND ((g_U8858 != g_U8856) AND ((g_U8857 == g_U8858) AND (g_U8856 != g_U8857))))
    {
        return 6;
        break;
    }
    if (((iParam0 == 8) || (iParam0 == 7)) AND ((g_U8858 == g_U8856) AND ((g_U8857 != g_U8858) AND (g_U8856 != g_U8857))))
    {
        return 7;
        break;
    }
    return 8;
}

void sub_28809(unknown uParam0)
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

int sub_29337(unknown uParam0)
{
    if (sub_17047( 5, 0 ))
    {
        if (sub_17428( 5, uParam0, 0 ))
        {
            sub_868( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_701() )))
    {
        sub_868( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_29771(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, int iParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45)
{
    int iVar48;

    iVar48 = (uParam34^);
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar48 );
        iVar48 = (uParam34^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar48 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (sub_25818())
    {
        if ((NOT sub_29947()) AND (NOT (IS_SCORE_GREATER( sub_701(), iVar48 - 1 ))))
        {
            CLEAR_PRINTS();
            PRINT_HELP( "HELP_POOR_L" );
            while (NOT (sub_26288( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            return 1;
        }
        else
        {
            CLEAR_PRINTS();
            if (NOT sub_25885())
            {
                iVar48 = 0;
                switch (uParam37)
                {
                    case 0:
                    StrCopy( ref g_U8844, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_L_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_L_F", 16 );
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
                    StrCopy( ref g_U8844, "HELP_BOUGHT_L", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_L", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_L", 16 );
                    break;
                }
            }
            sub_30459( uParam37, uParam0._fU80, iVar48, uParam39, uParam45 );
            while (NOT (sub_26288( uParam35, uParam36, "null", "LB_TRYON", uParam37, 0, ref uParam38, 0 )))
            {
                WAIT( 0 );
            }
            (uParam34^) = iVar48;
            return 1;
        }
    }
    else if (sub_29337( "null" ))
    {
        CLEAR_HELP();
        while (NOT (sub_26288( uParam35, uParam36, "null", "LB_TRYON", uParam37, 1, ref uParam38, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT g_U8842)
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
    if ((sub_10514( sub_634(), 88 )) AND (sub_10514( sub_634(), 80 )))
    {
        if (TIMERA() > iParam33)
        {
            TASK_PLAY_ANIM( sub_634(), "examine legs", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

int sub_29947()
{
    if (g_U8837)
    {
        if (g_U8836)
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

void sub_30459(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_701(), -1 * iParam2 );
    g_U8812[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8859 += iParam2;
        g_U8862++;
        break;
        case 1:
        g_U8860 += iParam2;
        g_U8863++;
        break;
        case 2:
        g_U8861 += iParam2;
        g_U8864++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_8275( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

int sub_31255(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
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

    sub_11245( ref uVar16 );
    iVar17 = (uParam2^);
    if (g_U8842)
    {
        PRINTSTRING( "  * ALEX_HALF_PRICE_DISCOUNT: $" );
        PRINTINT( iVar17 );
        iVar17 = (uParam2^) / 2;
        PRINTSTRING( " becomes $" );
        PRINTINT( iVar17 );
        PRINTSTRING( "  (50%)\n" );
    }
    if (g_U8816[uVar16])
    {
        if ((NOT g_U15811[6]) AND (NOT g_U8836))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "LB_TRYON_R3", sub_31447( uVar16 ) )))
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER_WITH_STRING( "LB_TRYON_R3", sub_31447( uVar16 ) );
            }
            sVar18 = "LB_TRYON_R3";
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( "HELP_OWN_F", sub_31447( uVar16 ) )))
        {
            CLEAR_HELP();
            PRINT_HELP_FOREVER_WITH_STRING( "HELP_OWN_F", sub_31447( uVar16 ) );
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
        if (NOT IS_USING_CONTROLLER())
        {
            GET_KEYBOARD_MOVE_INPUT( ref iVar21, ref uVar22 );
        }
        if (iVar21 < 65472)
        {
            sub_31947( 1, uParam0 );
        }
        else if (iVar21 >= 64)
        {
            sub_31947( 0, uParam0 );
        }
    }
    else if ((iVar19 < 65472) || ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 ))))
    {
        sub_31947( 1, uParam0 );
    }
    else if ((iVar19 >= 64) || ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 ))))
    {
        sub_31947( 0, uParam0 );
    }
    else if (sub_25818())
    {
        if (NOT ((NOT ((g_U15811[6]) || (g_U8836))) AND (g_U8816[uVar16])))
        {
            CLEAR_PRINTS();
            if (NOT sub_25885())
            {
                iVar17 = 0;
                PRINT_HELP( "HELP_BOUGHT_F_F" );
                switch (uParam5)
                {
                    case 0:
                    StrCopy( ref g_U8844, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_F_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_F_F", 16 );
                    break;
                }
                sub_32611( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_26288( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
            else if (NOT (IS_SCORE_GREATER( sub_701(), iVar17 - 1 )))
            {
                CLEAR_PRINTS();
                PRINT_HELP( "HELP_POOR_F" );
                while (NOT (sub_26288( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
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
                    StrCopy( ref g_U8844, "HELP_BOUGHT_F", 16 );
                    break;
                    case 1:
                    StrCopy( ref g_U8848, "HELP_BOUGHT_F", 16 );
                    break;
                    case 2:
                    StrCopy( ref g_U8852, "HELP_BOUGHT_F", 16 );
                    break;
                }
                sub_32611( uParam5, uVar16, iVar17, uParam7, uParam13 );
                while (NOT (sub_26288( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 0, ref uParam6, 0 )))
                {
                    WAIT( 0 );
                }
                (uParam2^) = iVar17;
                return 1;
            }
        }
    }
    else if (sub_29337( "BLANK" ))
    {
        CLEAR_HELP();
        while (NOT (sub_26288( uParam3, uParam4, sVar18, "LB_SHOE", uParam5, 1, ref uParam6, 0 )))
        {
            WAIT( 0 );
        }
        return 1;
    }
    else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( sub_33312( uVar16, 3, 0 ), 4, "", "", "", iVar17, -1, -1, -1, -1, -1 )))
    {
        PRINT_WITH_NUMBER( sub_33312( uVar16, 3, 0 ), iVar17, 7500, 1 );
    };;;;;;
    if ((sub_10514( sub_634(), 88 )) AND (sub_10514( sub_634(), 80 )))
    {
        if (TIMERA() > iParam1)
        {
            TASK_PLAY_ANIM( sub_634(), "examine shoes", "clothing", 4.00000000, 0, 0, 0, 0, -1 );
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

string sub_31447(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "clo_FEET_0_0";
        break;
        case 1:
        return "clo_FEET_1_0";
        break;
        case 2: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
    }
    SCRIPT_ASSERT( "get_feet_americanAmbiance_name - null" );
    return "null feet";
}

void sub_31947(boolean bParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    if (IS_SCREEN_FADED_IN())
    {
        iVar5 = -1;
        iVar6 = -1;
        sub_11245( ref iVar7 );
        for ( I = 0; I < (uParam1^); I++ )
        {
            if (iVar7 == (uParam1^)[I])
            {
                iVar5 = I;
            }
        }
        if (bParam0)
        {
            sub_2860( "  * left (iThis_foot: " );
            sub_6467( iVar5 );
            iVar6 = iVar5 - 1;
            if (iVar6 < 0)
            {
                iVar6 += (uParam1^);
            }
        }
        else
        {
            sub_2860( "  * right (iThis_foot: " );
            sub_6467( iVar5 );
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
        sub_2860( "),  next: " );
        sub_6467( iVar6 );
        sub_2920();
        sub_21459( (uParam1^)[iVar6] );
        DO_SCREEN_FADE_IN( 125 );
    }
    WAIT( 0 );
    return;
}

void sub_32611(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 92, iParam2 );
    ADD_SCORE( sub_701(), -1 * iParam2 );
    g_U8816[uParam1] = 1;
    switch (iParam0)
    {
        case 0:
        g_U8859 += iParam2;
        g_U8862++;
        break;
        case 1:
        g_U8860 += iParam2;
        g_U8863++;
        break;
        case 2:
        g_U8861 += iParam2;
        g_U8864++;
        break;
    }
    if (iParam0 != 3)
    {
        PLAY_SOUND_FRONTEND( -1, "WARDROBE_BUY" );
        sub_8275( 5, ref uParam3, iParam0, ref uParam9 );
    }
    return;
}

string sub_33312(unknown uParam0, unknown uParam1, unknown uParam2)
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
            if (NOT g_U8842)
            {
                return "buy_FEET_0_0";
            }
            else
            {
                return "buy_FEET_0_0_A";
            }
            break;
            default:
              case 2: return "NUMBER_OF_PLAYER_CLOTHES_FEET";
        }
        break;
        default:
          case 4: return "NUMBER_OF_TORSO_PRINT";
    }
    return "get_feet_print_here()";
}

