void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U172 = 0;
    l_U192 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 1;
    l_U206 = 0;
    l_U210 = 1;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U219 = "clothing";
    l_U232 = 0.50000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (l_U203 == 3)
        {
            if (l_U204 < 2)
            {
                sub_147();
            }
        }
        sub_1231();
    }
    sub_1498();
    sub_1754( l_U242 );
    while (l_U210)
    {
        WAIT( 0 );
        if (sub_2052())
        {
            switch (l_U203)
            {
                case 0:
                if (sub_2176())
                {
                    sub_2316();
                    l_U211 = 1;
                    l_U203 = 1;
                }
                break;
                case 1:
                if (sub_3553())
                {
                    l_U203 = 2;
                }
                break;
                case 2:
                sub_3788( "WD_USE", "WD_CANT" );
                break;
                case 3:
                sub_5570();
                break;
            }
        }
        g_U8779 = l_U206;
    }
    sub_1231();
    return;
}

void sub_147()
{
    int I;

    if (sub_198( sub_156(), 29 ))
    {
        l_U235 = 0;
        l_U236 = 0;
        l_U237 = 0;
        l_U238 = 0;
        l_U239 = 0;
        l_U240 = 0;
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        for ( I = 0; I < l_U221; I++ )
        {
            DESTROY_CAM( l_U221[I] );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_156() );
        sub_350( ref l_U220 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_156(), 1 );
        SET_CHAR_COLLISION( sub_156(), 1 );
        FREEZE_CHAR_POSITION( sub_156(), 0 );
        if (NOT IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_IN( 125 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        sub_553();
        SET_PLAYER_CONTROL( sub_578(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        sub_633( 5, "nowt" );
        sub_963();
        while (sub_1163())
        {
            WAIT( 0 );
        }
        l_U204 = 3;
    }
    return;
}

void sub_156()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_198(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_350(unknown uParam0)
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

void sub_553()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_578()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_633(int iParam0, string sParam1)
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
                    sub_854();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_578(), 1 );
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

void sub_854()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_963()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_972(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_972(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( sub_578() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_156(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_972()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1163()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_1231()
{
    int I;

    REMOVE_ANIMS( l_U219 );
    for ( I = 0; I < 1; I++ )
    {
        if ((NOT (IS_STRING_NULL( l_U223[I] ))) AND (l_U211))
        {
            sub_1303( "iClear: " );
            sub_1322( I );
            sub_1303( ", " );
            sub_1303( l_U223[I] );
            sub_1363();
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U223[I] ))
            {
                CLEAR_HELP();
            }
        }
    }
    sub_633( 2, "WD_USE" );
    g_U8779 = 1;
    if (l_U203 > 1)
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1303(unknown uParam0)
{
    return;
}

void sub_1322(unknown uParam0)
{
    return;
}

void sub_1363()
{
    if (g_U10602)
    {
        PRINTNL();
    }
    return;
}

void sub_1498()
{
    l_U223[0] = "E2WD_BODY";
    l_U217[0] = "Brushoff_Suit_Stand";
    l_U225[0] = {0.00000000, 2.00000000, 0.00000000};
    l_U229[0] = -0.15000000;
    l_U231 = 45.00000000;
    sub_1605();
    return;
}

void sub_1605()
{
    l_U193[0]._fU0 = "LUIS_HOUSE_WARDROBE";
    l_U193[0]._fU4 = {-430.15200000, 1395.39000000, 16.46200000};
    l_U193[0]._fU16 = 90.00000000;
    l_U193[0]._fU20 = {-448.77850000, 1389.96300000, 14.35620000};
    l_U193[0]._fU32 = 359.45810000;
    return;
}

void sub_1754(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    boolean bVar25;
    int I;
    int iVar27;
    float fVar28;
    float fVar29;

    bVar25 = false;
    iVar27 = 99;
    fVar29 = 1E8;
    for ( I = 0; I < 1; I++ )
    {
        fVar28 = VDIST( uParam0._fU4[0], l_U193[I]._fU4 );
        if (fVar28 < fVar29)
        {
            iVar27 = I;
            fVar29 = fVar28;
            bVar25 = true;
        }
    }
    if (bVar25)
    {
        l_U205 = iVar27;
        if (sub_1888( l_U205 ))
        {
            l_U210 = 0;
        }
        sub_1922( l_U205 );
        if (l_U210)
        {
            REQUEST_ANIMS( l_U219 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "SELECT_WARDROBE_LOCATION() - NOT bFound_a_wardrobe" );
    }
    return;
}

int sub_1888(unknown uParam0)
{
    return 0;
}

void sub_1922(unknown uParam0)
{
    return;
}

int sub_2052()
{
    if (IS_PLAYER_PLAYING( sub_578() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_156() )))
        {
            if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
            {
                return 1;
            }
        }
    }
    l_U210 = 0;
    return 0;
}

int sub_2176()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_156(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_156(), l_U193[l_U205]._fU4._fU0, l_U193[l_U205]._fU4._fU4, l_U193[l_U205]._fU4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            REGISTER_SCRIPT_WITH_AUDIO( 0 );
            return 1;
        }
    }
    return 0;
}

void sub_2316()
{
    sub_2331( ref g_U8789._fU0 );
    sub_2680( ref g_U8789._fU4 );
    sub_2924( ref g_U8789._fU8 );
    sub_3147( ref g_U8789._fU12 );
    sub_3355( ref g_U8789._fU16 );
    g_U8789._fU20 = -1;
    g_U8789._fU24 = -1;
    return;
}

void sub_2331(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_156(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_156(), 1 );
    bVar8 = false;
    for ( I = 0; I < 8; I++ )
    {
        if (NOT bVar8)
        {
            sub_2399( I, ref iVar6, ref iVar7 );
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

void sub_2399(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_2680(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_156(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_156(), 2 );
    bVar8 = false;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT bVar8)
        {
            sub_2748( I, ref iVar6, ref iVar7 );
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

void sub_2748(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_2924(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_156(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_156(), 5 );
    bVar8 = false;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT bVar8)
        {
            sub_2992( I, ref iVar6, ref iVar7 );
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

void sub_2992(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_3147(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;

    GET_CHAR_PROP_INDEX( sub_156(), 0, ref iVar3 );
    (uParam0^) = 1;
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_3200( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == 0)
    {
        uVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_156(), 8 );
        uVar8 = GET_CHAR_TEXTURE_VARIATION( sub_156(), 8 );
    }
    if (NOT bVar6)
    {
        (uParam0^) = 1;
    }
    return;
}

void sub_3200(unknown uParam0, unknown uParam1)
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

void sub_3355(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_156(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT bVar6)
        {
            sub_3404( I, ref iVar5 );
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

void sub_3404(unknown uParam0, unknown uParam1)
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

int sub_3553()
{
    if (NOT (HAVE_ANIMS_LOADED( l_U219 )))
    {
        REQUEST_ANIMS( l_U219 );
        return 0;
        break;
    }
    sub_3601();
    if (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\WARDROBE" )))
    {
        return 0;
        break;
    }
    return 1;
}

void sub_3601()
{
    g_U8823[2] = 1;
    g_U8823[3] = 0;
    g_U8823[4] = g_U43692;
    g_U8823[5] = 1;
    g_U8823[6] = 1;
    g_U8823[7] = 1;
    g_U8823[8] = 1;
    g_U8823[9] = 1;
    return;
}

void sub_3788(unknown uParam0, unknown uParam1)
{
    if ((sub_3885()) AND ((sub_3814( l_U205 )) AND (IS_PLAYER_CONTROL_ON( sub_578() ))))
    {
        if ((NOT sub_4330()) AND ((NOT sub_4294()) AND ((NOT sub_4196()) AND (sub_3911( 1, 1 )))))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_156(), l_U193[l_U205]._fU4._fU0, l_U193[l_U205]._fU4._fU4, l_U193[l_U205]._fU4._fU8, 1.00000000, 1.00000000, 1.60000000, 1 ))
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                {
                    CLEAR_HELP();
                }
                if (g_U8781)
                {
                    if (sub_4513( 2, 0 ))
                    {
                        if (sub_4771( 2, uParam0, 0 ))
                        {
                            sub_633( 2, uParam0 );
                            GET_GAME_TIMER( ref l_U234 );
                            if (sub_5046())
                            {
                                l_U213 = 0;
                                l_U203 = 3;
                            }
                        }
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
                    {
                        CLEAR_HELP();
                    }
                    PRINT_HELP_FOREVER( uParam1 );
                }
            }
            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 ))
            {
                CLEAR_HELP();
            }
            sub_633( 2, uParam0 );;
        }
        else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 )))
        {
            CLEAR_HELP();
        }
        sub_633( 2, uParam0 );;
    }
    return;
}

int sub_3814(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return g_U10984[0]._fU0;
        break;
        case 1:
        return 0;
        break;
    }
    return 1;
}

int sub_3885()
{
    return 1;
}

int sub_3911(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_156() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_156(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_156() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_156(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_156()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_156() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_156() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_578() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_578() )))
    {
        return 0;
    }
    return 1;
}

int sub_4196()
{
    if (g_U95._fU60 != -1)
    {
        if ((g_U16014[g_U95._fU60]._fU212._fU24 == 3) || (g_U16014[g_U95._fU60]._fU212._fU24 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4294()
{
    if (g_U560 == 1)
    {
        return 1;
    }
    return 0;
}

int sub_4330()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_4513(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_578() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_578() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_578() )))))
                {
                    if (NOT sub_4330())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_156() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_4665())
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

void sub_4665()
{
    return sub_4676( 0, 0 );
}

int sub_4676(boolean bParam0, unknown uParam1)
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

int sub_4771(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_4513( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_578(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5046();
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

void sub_5046()
{
    return sub_4676( 1, 1 );
}

void sub_5570()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    switch (l_U204)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( sub_156() )))
        {
            GET_CHAR_COORDINATES( sub_156(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            SET_CHAR_PROOFS( sub_156(), 1, 1, 1, 1, 1 );
            DO_SCREEN_FADE_OUT( 125 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 10.00000000, 1 );
            sub_5745( 10.00000000 );
        }
        break;
        case 1:
        sub_7568();
        break;
        case 2:
        sub_147();
        break;
        case 3:
        SET_CHAR_PROOFS( sub_156(), 0, 0, 0, 0, 0 );
        sub_854();
        l_U206 = 0;
        l_U204 = 0;
        l_U203 = 2;
        break;
    }
    return;
}

void sub_5745(unknown uParam0)
{
    int J;
    unknown uVar4;
    unknown uVar5;
    int I;

    SET_PLAYER_CONTROL( sub_578(), 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    sub_5775();
    sub_5804( ref l_U220 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar4 );
    if (NOT (IS_CAR_DEAD( uVar4 )))
    {
        if (LOCATE_CAR_3D( uVar4, l_U193[l_U205]._fU4._fU0, l_U193[l_U205]._fU4._fU4, l_U193[l_U205]._fU4._fU8, uParam0 * 1.25000000, uParam0 * 1.25000000, uParam0 * 1.25000000, 0 ))
        {
            SET_CAR_COORDINATES( uVar4, l_U193[l_U205]._fU20._fU0, l_U193[l_U205]._fU20._fU4, l_U193[l_U205]._fU20._fU8 );
            SET_CAR_HEADING( uVar4, l_U193[l_U205]._fU32 );
            PRINTSTRING( "  * repos players_last_car: " );
            PRINTVECTOR( l_U193[l_U205]._fU20 );
            PRINTSTRING( ", " );
            PRINTFLOAT( l_U193[l_U205]._fU32 );
            PRINTNL();
        }
        else
        {
            PRINTSTRING( "  * players_last_car is NOT IN AREA\n" );
        }
    }
    else
    {
        PRINTSTRING( "  * players_last_car is DEAD\n" );
    }
    CLEAR_AREA( l_U193[l_U205]._fU4._fU0, l_U193[l_U205]._fU4._fU4, l_U193[l_U205]._fU4._fU8, uParam0, 1 );
    GET_GROUND_Z_FOR_3D_COORD( l_U193[l_U205]._fU4._fU0, l_U193[l_U205]._fU4._fU4, l_U193[l_U205]._fU4._fU8, ref uVar5 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_156() );
    SET_CHAR_COORDINATES( sub_156(), l_U193[l_U205]._fU4._fU0, l_U193[l_U205]._fU4._fU4, uVar5 );
    SET_CHAR_HEADING( sub_156(), l_U193[l_U205]._fU16 );
    FREEZE_CHAR_POSITION( sub_156(), 1 );
    for ( I = 0; I < 8; I++ )
    {
        if (g_U8803[I])
        {
            l_U235++;
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U8812[I])
        {
            l_U236++;
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (g_U8816[I])
        {
            l_U237++;
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U8819[I])
        {
            l_U238++;
        }
    }
    for ( I = 0; I < 1; I++ )
    {
        if (g_U8821[I])
        {
            l_U239++;
        }
    }
    for ( I = 0; I < 10; I++ )
    {
        if (g_U8823[I])
        {
            l_U240++;
        }
    }
    sub_2316();
    SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_156(), 0 );
    for ( J = 0; J < 1; J++ )
    {
        CREATE_CAM( 14, ref l_U221[J] );
        SET_CAM_POS( l_U221[J], -432.99460000, 1395.48900000, 16.66256000 );
        SET_CAM_ROT( l_U221[J], -7.28923000, -0.00000000, -76.70937000 );
        SET_CAM_FOV( l_U221[J], l_U231 );
        SET_CAM_ACTIVE( l_U221[J], 1 );
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_156(), 0.77400000, 0.00000000, -0.01500000, ref l_U214._fU0, ref l_U214._fU4, ref l_U214._fU8 );
    sub_7009();
    l_U206 = 0;
    SET_CAM_PROPAGATE( l_U221[l_U206], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    g_U2792 = 1;
    DO_SCREEN_FADE_IN( 125 );
    l_U204 = 1;
    return;
}

void sub_5775()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_5804(unknown uParam0)
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

void sub_7009()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;
    vector vVar6;
    float fVar9;
    unknown uVar10;

    GET_GROUP_SIZE( sub_972(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_972(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( sub_578() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                vVar6 = {0.00000000, 0.00000000, 0.00000000};
                fVar9 = 0.00000000;
                sub_7136( l_U205, I, ref vVar6, ref fVar9, uVar10 );
                SET_CHAR_COORDINATES( uVar5, vVar6.x, vVar6.y, vVar6.z );
                SET_CHAR_HEADING( uVar5, fVar9 );
                TASK_LOOK_AT_CHAR( uVar5, sub_156(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar5, "Scenario_Standing", vVar6, fVar9 );
            }
        }
    }
    return;
}

void sub_7136(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, string sParam4)
{
    switch (uParam0)
    {
        case 0:
        sParam4 = "E1_Lost";
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {-435.98010000, 1392.87600000, 15.46250000};
            (uParam3^) = 87.69610000;
            break;
            case 1:
            (uParam2^) = {-438.37690000, 1393.25300000, 15.46270000};
            (uParam3^) = 217.25030000;
            break;
            case 2:
            (uParam2^) = {-434.19080000, 1392.50500000, 15.46290000};
            (uParam3^) = 342.40190000;
            break;
        }
        break;
        case 1:
        SCRIPT_ASSERT( "GTA4_Get_Wardrobe_Buddies_Coords(NUMBER_OF_WARDROBES)" );
        break;
    }
    return;
}

void sub_7568()
{
    char[16] cVar2;
    int I;
    char[16] cVar7;
    int J;
    char[16] cVar12;
    char[16] cVar16;
    unknown uVar20;
    unknown uVar21;
    int iVar22;

    if (IS_CAM_PROPAGATING( l_U221[l_U206] ))
    {
        StrCopy( ref cVar2, l_U223[l_U206], 16 );
        if (NOT (sub_7621( l_U206 )))
        {
            ConcatString(ref cVar2, "N", 16);
        }
        if (sub_7825( l_U206 ))
        {
            ConcatString(ref cVar2, "_O", 16);
        }
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar2 )))
        {
            for ( I = 0; I < 1; I++ )
            {
                StrCopy( ref cVar7, l_U223[I], 16 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                ConcatString(ref cVar7, "N", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U223[I], 16 );
                ConcatString(ref cVar7, "_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U223[I], 16 );
                ConcatString(ref cVar7, "N_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
            }
            PRINT_HELP_FOREVER( ref cVar2 );
        }
        if (NOT sub_1163())
        {
            l_U213 = 1;
        }
        if (NOT l_U212)
        {
            if ((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))))
            {
                l_U212 = 1;
            }
        }
        else if (l_U213)
        {
            if (sub_8325())
            {
                if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADING_IN()))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WD_ACCE" )))
                    {
                        for ( J = 0; J < 1; J++ )
                        {
                            StrCopy( ref cVar12, l_U223[J], 16 );
                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                            {
                                CLEAR_HELP();
                            }
                            ConcatString(ref cVar12, "N", 16);
                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                            {
                                CLEAR_HELP();
                            }
                            StrCopy( ref cVar12, l_U223[J], 16 );
                            ConcatString(ref cVar12, "_O", 16);
                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                            {
                                CLEAR_HELP();
                            }
                            StrCopy( ref cVar12, l_U223[J], 16 );
                            ConcatString(ref cVar12, "N_O", 16);
                            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                            {
                                CLEAR_HELP();
                            }
                        }
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_8647( 0 );
                    l_U204 = 2;
                }
            }
            else if (sub_10078( "BLANK" ))
            {
                for ( J = 0; J < 1; J++ )
                {
                    StrCopy( ref cVar16, l_U223[J], 16 );
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                    {
                        CLEAR_HELP();
                    }
                    ConcatString(ref cVar16, "N", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar16, l_U223[J], 16 );
                    ConcatString(ref cVar16, "_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar16, l_U223[J], 16 );
                    ConcatString(ref cVar16, "N_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                    {
                        CLEAR_HELP();
                    }
                }
                if (NOT (sub_10352( 0, 1, 1 )))
                {
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_8647( 1 );
                }
                l_U204 = 2;
            }
        }
        sub_10623();
        sub_10852( l_U206 );
        if (sub_7621( l_U206 ))
        {
            if ((sub_11697( 10 )) || ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 ))))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_11989( l_U206, ref uVar20 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, sub_12046( uVar20 ), sub_156() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_12617();
                    SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_156(), 0 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U212 = 0;
                }
            }
            else if ((sub_11697( 11 )) || ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 ))))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_11989( l_U206, ref uVar21 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, sub_12046( uVar21 ), sub_156() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_13369();
                    SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_156(), 0 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U212 = 0;
                }
            }
        }
    }
    else
    {
        for ( iVar22 = 0; iVar22 < l_U221; iVar22++ )
        {
            if (IS_CAM_PROPAGATING( l_U221[iVar22] ))
            {
                sub_1303( "  * iProp" );
                sub_1322( iVar22 );
                sub_1363();
            }
        }
    }
    return;
}

int sub_7621(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if ((l_U235 > 1) || (l_U240 > 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 1:
        SCRIPT_ASSERT( "OWN_SEVERAL_OF_CLOTHES_ENUM(NUMBER_OF_SHOP_CAM)" );
        return 0;
    }
    SCRIPT_ASSERT( "OWN_SEVERAL_OF_CLOTHES_ENUM(other)" );
    return 0;
}

int sub_7825(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        SCRIPT_ASSERT( "PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT(NUMBER_OF_SHOP_CAM)" );
        return 0;
    }
    SCRIPT_ASSERT( "PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT(other)" );
    return 0;
}

int sub_8325()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8647(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_8659( uParam0, ref uVar3 );
    if (uVar3._fU0 < 8)
    {
        sub_9357( uVar3._fU0 );
    }
    if (uVar3._fU4 < 3)
    {
        sub_9461( uVar3._fU4 );
    }
    if (uVar3._fU8 < 2)
    {
        sub_9565( uVar3._fU8 );
    }
    if (uVar3._fU12 < 1)
    {
        sub_9669( uVar3._fU12 );
    }
    if (uVar3._fU16 < 1)
    {
        sub_9826( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_8659(unknown uParam0, int iParam1)
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
        sub_2331( iParam1 + 0 );
        sub_2680( iParam1 + 4 );
        sub_2924( iParam1 + 8 );
        sub_3147( iParam1 + 12 );
        sub_3355( iParam1 + 16 );
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

void sub_9357(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_2399( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_156(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_156(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_9461(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_2748( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_156(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_156(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_9565(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_2992( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_156(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_156(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_9669(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_3200( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_156(), 0, ref iVar4 );
    if (((GET_CHAR_TEXTURE_VARIATION( sub_156(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_156(), 8 )) != 0))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_156(), 8, 0, 0 );
    }
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_156(), 0 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_156(), 0, iVar3 );
        }
    }
    return;
}

void sub_9826(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_3404( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_156(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_156(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_156(), 1, iVar3 );
        }
    }
    return;
}

int sub_10078(unknown uParam0)
{
    if (sub_4513( 5, 0 ))
    {
        if (sub_4771( 5, uParam0, 0 ))
        {
            sub_633( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_578() )))
    {
        sub_633( 5, uParam0 );
        return 1;
    }
    return 0;
}

int sub_10352(unknown uParam0, unknown uParam1, boolean bParam2)
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

    sub_8659( uParam0, ref uVar5 );
    sub_8659( uParam1, ref uVar12 );
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

void sub_10623()
{
    int iVar2;
    string sVar3;

    GET_GAME_TIMER( ref l_U233 );
    switch (l_U206)
    {
        case 0:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        sVar3 = l_U217[0];
        break;
        default:
          case 1:
        iVar2 = 2147483647;
        sVar3 = "nowt";
    }
    if ((GET_HASH_KEY( sVar3 )) != (GET_HASH_KEY( "nowt" )))
    {
        if (IS_CHAR_PLAYING_ANIM( sub_156(), l_U219, sVar3 ))
        {
            GET_GAME_TIMER( ref l_U234 );
        }
    }
    if (((l_U234 + iVar2) > 0) AND (l_U233 > (l_U234 + iVar2)))
    {
        TASK_PLAY_ANIM( sub_156(), sVar3, l_U219, 4.00000000, 0, 0, 0, 0, -1 );
    }
    return;
}

void sub_10852(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;

    if ((IS_CAM_ACTIVE( l_U221[uParam0] )) AND (IS_CAM_ACTIVE( l_U221[uParam0] )))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar6, ref uVar7, ref uVar8, ref uVar9 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_156(), 0.77400000, 0.00000000, -0.01500000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (IS_USING_CONTROLLER())
        {
            l_U214._fU0 = uVar3._fU0 + ((COS( l_U193[l_U205]._fU16 + 180.00000000 )) * ((TO_FLOAT( uVar8 )) / 512.00000000));
            l_U214._fU4 = uVar3._fU4 + ((SIN( l_U193[l_U205]._fU16 + 180.00000000 )) * ((TO_FLOAT( uVar8 )) / 512.00000000));
            l_U214._fU8 = uVar3._fU8 + (l_U229[uParam0] - ((TO_FLOAT( uVar9 )) / 512.00000000));
        }
        else
        {
            GET_MOUSE_INPUT( ref uVar8, ref uVar9 );
            l_U214._fU0 += (TO_FLOAT( uVar8 )) / 4096.00000000;
            l_U214._fU4 += ((TO_FLOAT( uVar8 )) / 4096.00000000) * -1.00000000;
            l_U214._fU8 += ((TO_FLOAT( uVar9 )) / 4096.00000000) * -1.00000000;
            fVar10 = uVar3._fU0 + ((COS( l_U193[l_U205]._fU16 + 180.00000000 )) * -0.50000000);
            fVar11 = uVar3._fU0 + ((COS( l_U193[l_U205]._fU16 + 180.00000000 )) * 0.50000000);
            if (l_U214._fU0 < fVar10)
            {
                l_U214._fU0 = fVar10;
            }
            else if (l_U214._fU0 > fVar11)
            {
                l_U214._fU0 = fVar11;
            }
            fVar10 = uVar3._fU4 + ((SIN( l_U193[l_U205]._fU16 + 180.00000000 )) * 0.40000000);
            fVar11 = uVar3._fU4 + ((SIN( l_U193[l_U205]._fU16 + 180.00000000 )) * -0.50000000);
            if (l_U214._fU4 < fVar10)
            {
                l_U214._fU4 = fVar10;
            }
            else if (l_U214._fU4 > fVar11)
            {
                l_U214._fU4 = fVar11;
            }
            fVar10 = (uVar3._fU8 + l_U229[uParam0]) - 0.50000000;
            fVar11 = (uVar3._fU8 + l_U229[uParam0]) + 0.50000000;
            if (l_U214._fU8 < fVar10)
            {
                l_U214._fU8 = fVar10;
            }
            else if (l_U214._fU8 > fVar11)
            {
                l_U214._fU8 = fVar11;
            }
        }
        POINT_CAM_AT_COORD( l_U221[uParam0], l_U214._fU0, l_U214._fU4, l_U214._fU8 );
    }
    return;
}

int sub_11697(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    switch (uParam0)
    {
        case 8:
        if (iVar4 < 65472)
        {
            return 1;
        }
        break;
        case 9:
        if (iVar4 > 64)
        {
            return 1;
        }
        break;
        case 10:
        if (iVar3 < 65472)
        {
            return 1;
        }
        break;
        case 11:
        if (iVar3 > 64)
        {
            return 1;
        }
        break;
        default: SCRIPT_ASSERT( "ambWardrobe.MOVE_CAM_WITH_LEFT_STICK(only dpad up, down, left & right should be used" );
    }
    return 0;
}

int sub_11989(unknown uParam0, unknown uParam1)
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

string sub_12046(unknown uParam0)
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

void sub_12617()
{
    int iVar2;
    int iVar3;
    boolean bVar4;

    GET_GAME_TIMER( ref l_U234 );
    if (NOT (sub_198( sub_156(), 80 )))
    {
        CLEAR_CHAR_TASKS( sub_156() );
    }
    sub_12669( ref iVar2 );
    iVar3 = iVar2 - 1;
    bVar4 = false;
    while ((NOT bVar4) AND (iVar3 >= sub_12792()))
    {
        iVar2 = iVar3;
        sub_1303( "  A prev iOutfit = " );
        sub_1322( iVar3 );
        sub_1363();
        if (sub_12865( iVar2 ))
        {
            sub_8647( iVar2 );
            bVar4 = true;
        }
        iVar3--;
    }
    iVar3 = 10 - 1;
    while ((NOT bVar4) AND (iVar3 > sub_12792()))
    {
        iVar2 = iVar3;
        sub_1303( "  A prev iOutfit = " );
        sub_1322( iVar3 );
        sub_1363();
        if (sub_12865( iVar2 ))
        {
            sub_8647( iVar2 );
            bVar4 = true;
        }
        iVar3--;
    }
    sub_9669( sub_13088() );
    sub_9826( sub_13111() );
    SET_CHAR_COMPONENT_VARIATION( sub_156(), 3, 0, 0 );
    g_U2792 = 1;
    return;
}

void sub_12669(unknown uParam0)
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
    sub_8659( 0, ref uVar4 );
    for ( I = 0; I < 10; I++ )
    {
        if (((NOT bVar3) == 1) AND ((I != 1) AND (I != 0)))
        {
            if (sub_10352( I, 0, 0 ))
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

int sub_12792()
{
    return 2;
}

void sub_12865(unknown uParam0)
{
    sub_1303( "  * DOES_PLAYER_OWN_OUTFIT(" );
    sub_1322( uParam0 );
    sub_1303( ") [" );
    sub_1322( g_U8823 );
    sub_1303( "]\n" );
    return g_U8823[uParam0];
}

int sub_13088()
{
    return 0;
}

int sub_13111()
{
    return 0;
}

void sub_13369()
{
    int iVar2;
    int iVar3;
    boolean bVar4;

    GET_GAME_TIMER( ref l_U234 );
    if (NOT (sub_198( sub_156(), 80 )))
    {
        CLEAR_CHAR_TASKS( sub_156() );
    }
    sub_12669( ref iVar2 );
    iVar3 = iVar2 + 1;
    bVar4 = false;
    while ((NOT bVar4) AND (iVar3 < 10))
    {
        iVar2 = iVar3;
        sub_1303( "  A prev iOutfit = " );
        sub_1322( iVar3 );
        sub_1363();
        if (sub_12865( iVar2 ))
        {
            sub_8647( iVar2 );
            bVar4 = true;
        }
        iVar3++;
    }
    iVar3 = sub_12792();
    while ((NOT bVar4) AND (iVar3 < 10))
    {
        iVar2 = iVar3;
        sub_1303( "  A prev iOutfit = " );
        sub_1322( iVar3 );
        sub_1363();
        if (sub_12865( iVar2 ))
        {
            sub_8647( iVar2 );
            bVar4 = true;
        }
        iVar3++;
    }
    sub_9669( sub_13088() );
    sub_9826( sub_13111() );
    SET_CHAR_COMPONENT_VARIATION( sub_156(), 3, 0, 0 );
    g_U2792 = 1;
    return;
}

