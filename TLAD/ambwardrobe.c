void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U84 = 0;
    l_U85 = 0;
    l_U86 = 1;
    l_U87 = 2;
    l_U88 = 1;
    l_U89 = 0;
    l_U90 = 0;
    l_U102 = "clothing";
    l_U146 = 0.50000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (l_U84 == 3)
        {
            if (l_U85 < 2)
            {
                sub_129();
            }
        }
        sub_1176();
    }
    sub_1443();
    sub_2127( l_U156 );
    while (l_U88)
    {
        WAIT( 0 );
        if (sub_2425())
        {
            switch (l_U84)
            {
                case 0:
                if (sub_2549())
                {
                    sub_2689();
                    l_U89 = 1;
                    l_U84 = 1;
                }
                break;
                case 1:
                if (sub_5708())
                {
                    l_U84 = 2;
                }
                break;
                case 2:
                sub_5848( "WD_USE", "WD_CANT" );
                break;
                case 3:
                sub_7455();
                break;
            }
        }
        g_U8765 = l_U87;
    }
    sub_1176();
    return;
}

void sub_129()
{
    int I;

    if (sub_180( sub_138(), 29 ))
    {
        l_U149 = 0;
        l_U150 = 0;
        l_U151 = 0;
        l_U152 = 0;
        l_U153 = 0;
        l_U154 = 0;
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        for ( I = 0; I < l_U104; I++ )
        {
            DESTROY_CAM( l_U104[I] );
        }
        DESTROY_CAM( l_U111 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_138() );
        sub_344( ref l_U103 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_138(), 1 );
        SET_CHAR_COLLISION( sub_138(), 1 );
        FREEZE_CHAR_POSITION( sub_138(), 0 );
        sub_498();
        SET_PLAYER_CONTROL( sub_523(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        sub_578( 5, "nowt" );
        sub_908();
        while (sub_1108())
        {
            WAIT( 0 );
        }
        l_U85 = 3;
    }
    return;
}

void sub_138()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_180(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_344(unknown uParam0)
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

void sub_498()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_523()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_578(int iParam0, string sParam1)
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
                    sub_799();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_523(), 1 );
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

void sub_799()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_908()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_917(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_917(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( sub_523() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, sub_138(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_917()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1108()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_1176()
{
    int I;

    REMOVE_ANIMS( l_U102 );
    for ( I = 0; I < 6; I++ )
    {
        if ((NOT (IS_STRING_NULL( l_U112[I] ))) AND (l_U89))
        {
            sub_1248( "iClear: " );
            sub_1267( I );
            sub_1248( ", " );
            sub_1248( l_U112[I] );
            sub_1308();
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U112[I] ))
            {
                CLEAR_HELP();
            }
        }
    }
    sub_578( 2, "WD_USE" );
    g_U8765 = 6;
    if (l_U84 > 1)
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1248(unknown uParam0)
{
    return;
}

void sub_1267(unknown uParam0)
{
    return;
}

void sub_1308()
{
    if (g_U10532)
    {
        PRINTNL();
    }
    return;
}

void sub_1443()
{
    l_U112[2] = "WD_TORSO";
    l_U112[3] = "WD_LEGS";
    l_U112[4] = "WD_FEET";
    l_U112[0] = "WD_HEAD";
    l_U112[1] = "WD_EYES";
    l_U112[5] = "WD_BODY";
    l_U94[0] = "Brushoff_Suit_Stand";
    l_U94[1] = "Examine Glasses_b";
    l_U94[2] = "Examine Hat_b";
    l_U94[3] = "Examine Legs";
    l_U94[4] = "Examine Shirt";
    l_U94[5] = "Examine Shoes";
    l_U94[6] = "Tie_Adjust_Stand";
    l_U119[0] = {0.00000000, 0.40000000, 0.60000000};
    l_U119[1] = {0.00000000, 0.40000000, 0.55000000};
    l_U119[2] = {-0.00000000, 0.75000000, 0.25000000};
    l_U119[3] = {0.00000000, 0.85000000, -0.25000000};
    l_U119[4] = {0.00000000, 0.75000000, -0.65000000};
    l_U119[5] = {0.00000000, 1.60000000, 0.00000000};
    l_U138[0] = 0.60000000;
    l_U138[1] = 0.55000000;
    l_U138[2] = 0.25000000;
    l_U138[3] = -0.45000000;
    l_U138[4] = -0.90000000;
    l_U138[5] = -0.15000000;
    l_U145 = 45.00000000;
    sub_1979();
    return;
}

void sub_1979()
{
    l_U74[0]._fU0 = "CLUBHOUSE_WARDROBE";
    l_U74[0]._fU4 = {-1722.05800000, 334.11770000, 26.34660000};
    l_U74[0]._fU16 = 0.00000000;
    l_U74[0]._fU20 = {-1723.87200000, 365.51490000, 24.44400000};
    l_U74[0]._fU32 = 240.75730000;
    return;
}

void sub_2127(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
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
        fVar28 = VDIST( uParam0._fU4[0], l_U74[I]._fU4 );
        if (fVar28 < fVar29)
        {
            iVar27 = I;
            fVar29 = fVar28;
            bVar25 = true;
        }
    }
    if (bVar25)
    {
        l_U86 = iVar27;
        if (sub_2261( l_U86 ))
        {
            l_U88 = 0;
        }
        sub_2295( l_U86 );
        if (l_U88)
        {
            REQUEST_ANIMS( l_U102 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "SELECT_WARDROBE_LOCATION() - NOT bFound_a_wardrobe" );
    }
    return;
}

int sub_2261(unknown uParam0)
{
    return 0;
}

void sub_2295(unknown uParam0)
{
    return;
}

int sub_2425()
{
    if (IS_PLAYER_PLAYING( sub_523() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_138() )))
        {
            if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
            {
                return 1;
            }
        }
    }
    l_U88 = 0;
    return 0;
}

int sub_2549()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( sub_138(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_138(), l_U74[l_U86]._fU4._fU0, l_U74[l_U86]._fU4._fU4, l_U74[l_U86]._fU4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            REGISTER_SCRIPT_WITH_AUDIO( 0 );
            return 1;
        }
    }
    return 0;
}

void sub_2689()
{
    sub_2704( ref g_U8775._fU0 );
    sub_3834( ref g_U8775._fU4 );
    sub_4561( ref g_U8775._fU8 );
    sub_5162( ref g_U8775._fU12 );
    sub_5459( ref g_U8775._fU16 );
    g_U8775._fU20 = -1;
    g_U8775._fU24 = -1;
    return;
}

void sub_2704(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_138(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_138(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_2774( I, ref iVar6, ref iVar7 );
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

void sub_2774(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_3834(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_138(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_138(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_3902( I, ref iVar6, ref iVar7 );
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

void sub_3902(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_4561(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_138(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_138(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_4629( I, ref iVar6, ref iVar7 );
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

void sub_4629(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5162(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_138(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_5215( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_138(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_138(), 8 );
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

void sub_5215(unknown uParam0, unknown uParam1)
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

void sub_5459(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_138(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_5508( I, ref iVar5 );
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

void sub_5508(unknown uParam0, unknown uParam1)
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

int sub_5708()
{
    if (NOT (HAVE_ANIMS_LOADED( l_U102 )))
    {
        REQUEST_ANIMS( l_U102 );
        return 0;
        break;
    }
    if (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\WARDROBE" )))
    {
        return 0;
        break;
    }
    return 1;
}

void sub_5848(unknown uParam0, unknown uParam1)
{
    if ((sub_5945()) AND ((sub_5874( l_U86 )) AND (IS_PLAYER_CONTROL_ON( sub_523() ))))
    {
        if (sub_5971( 1, 1 ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_138(), l_U74[l_U86]._fU4._fU0, l_U74[l_U86]._fU4._fU4, l_U74[l_U86]._fU4._fU8, 1.00000000, 1.00000000, 1.60000000, 1 ))
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                {
                    CLEAR_HELP();
                }
                if (g_U8767)
                {
                    if (sub_6403( 2, 0 ))
                    {
                        if (sub_6690( 2, uParam0, 0 ))
                        {
                            sub_578( 2, uParam0 );
                            GET_GAME_TIMER( ref l_U148 );
                            l_U84 = 3;
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
            sub_578( 2, uParam0 );;
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 ))
        {
            CLEAR_HELP();
        }
        sub_578( 2, uParam0 );;
    }
    return;
}

int sub_5874(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return g_U11005[0]._fU0;
        break;
        case 1:
        return 0;
        break;
    }
    return 1;
}

int sub_5945()
{
    return 1;
}

int sub_5971(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_138() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_138(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_138() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_138(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_138()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_138() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_138() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_523() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_523() )))
    {
        return 0;
    }
    return 1;
}

int sub_6403(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_523() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_523() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_523() )))))
                {
                    if (NOT sub_6499())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_138() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_6584())
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

int sub_6499()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_6584()
{
    return sub_6595( 0, 0 );
}

int sub_6595(boolean bParam0, unknown uParam1)
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

int sub_6690(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6403( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_523(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_6965();
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

void sub_6965()
{
    return sub_6595( 1, 1 );
}

void sub_7455()
{
    switch (l_U85)
    {
        case 0:
        sub_7513( 10.00000000 );
        break;
        case 1:
        sub_9529();
        break;
        case 2:
        sub_129();
        break;
        case 3:
        l_U87 = 2;
        l_U85 = 0;
        l_U84 = 2;
        break;
    }
    return;
}

void sub_7513(unknown uParam0)
{
    int J;
    unknown uVar4;
    unknown uVar5;
    int I;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    SET_PLAYER_CONTROL( sub_523(), 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    sub_7543();
    sub_7572( ref l_U103 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar4 );
    if (NOT (IS_CAR_DEAD( uVar4 )))
    {
        if (LOCATE_CAR_3D( uVar4, l_U74[l_U86]._fU4._fU0, l_U74[l_U86]._fU4._fU4, l_U74[l_U86]._fU4._fU8, uParam0 * 1.25000000, uParam0 * 1.25000000, uParam0 * 1.25000000, 0 ))
        {
            SET_CAR_COORDINATES( uVar4, l_U74[l_U86]._fU20._fU0, l_U74[l_U86]._fU20._fU4, l_U74[l_U86]._fU20._fU8 );
            SET_CAR_HEADING( uVar4, l_U74[l_U86]._fU32 );
            CLEAR_ROOM_FOR_CAR( uVar4 );
            PRINTSTRING( "  * repos players_last_car: " );
            PRINTVECTOR( l_U74[l_U86]._fU20 );
            PRINTSTRING( ", " );
            PRINTFLOAT( l_U74[l_U86]._fU32 );
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
    CLEAR_AREA( l_U74[l_U86]._fU4._fU0, l_U74[l_U86]._fU4._fU4, l_U74[l_U86]._fU4._fU8, uParam0, 0 );
    GET_GROUND_Z_FOR_3D_COORD( l_U74[l_U86]._fU4._fU0, l_U74[l_U86]._fU4._fU4, l_U74[l_U86]._fU4._fU8, ref uVar5 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_138() );
    SET_CHAR_COORDINATES( sub_138(), l_U74[l_U86]._fU4._fU0, l_U74[l_U86]._fU4._fU4, uVar5 );
    SET_CHAR_HEADING( sub_138(), l_U74[l_U86]._fU16 );
    FREEZE_CHAR_POSITION( sub_138(), 1 );
    for ( I = 0; I < 45; I++ )
    {
        if (g_U8789[I])
        {
            l_U149++;
        }
    }
    for ( I = 0; I < 26; I++ )
    {
        if (g_U8835[I])
        {
            l_U150++;
        }
    }
    for ( I = 0; I < 20; I++ )
    {
        if (g_U8862[I])
        {
            l_U151++;
        }
    }
    for ( I = 0; I < 4; I++ )
    {
        if (g_U8883[I])
        {
            l_U152++;
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U8888[I])
        {
            l_U153++;
        }
    }
    for ( I = 0; I < 20; I++ )
    {
        if (g_U8892[I])
        {
            l_U154++;
        }
    }
    sub_2689();
    SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_138(), 0 );
    for ( J = 0; J < 6; J++ )
    {
        CREATE_CAM( 14, ref l_U104[J] );
        GET_CHAR_COORDINATES( sub_138(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_138(), l_U119[J]._fU0, l_U119[J]._fU4 + l_U146, l_U119[J]._fU8, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        uVar7._fU8 += l_U138[J];
        SET_CAM_POS( l_U104[J], uVar10._fU0, uVar10._fU4, uVar10._fU8 );
        POINT_CAM_AT_COORD( l_U104[J], uVar7._fU0, uVar7._fU4, uVar7._fU8 );
        SET_CAM_FOV( l_U104[J], l_U145 );
        SET_CAM_ACTIVE( l_U104[J], 1 );
    }
    l_U91._fU0 = uVar7._fU0;
    l_U91._fU4 = uVar7._fU4;
    l_U91._fU8 = uVar7._fU8 + l_U138[l_U86];
    CREATE_CAM( 3, ref l_U111 );
    sub_8895();
    SET_CAM_PROPAGATE( l_U104[l_U87], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (sub_1108())
    {
        while (sub_1108())
        {
            PRINTSTRING( "ambWardrobe - IS_BUTTON_PRESSED(PAD1, LEFT SHOULDER1)\n" );
            WAIT( 0 );
        }
    }
    l_U85 = 1;
    return;
}

void sub_7543()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_7572(unknown uParam0)
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

void sub_8895()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;
    vector vVar6;
    float fVar9;
    unknown uVar10;

    GET_GROUP_SIZE( sub_917(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_917(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( sub_523() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                vVar6 = {0.00000000, 0.00000000, 0.00000000};
                fVar9 = 0.00000000;
                sub_9022( l_U86, I, ref vVar6, ref fVar9, uVar10 );
                SET_CHAR_COORDINATES( uVar5, vVar6.x, vVar6.y, vVar6.z );
                SET_CHAR_HEADING( uVar5, fVar9 );
                TASK_LOOK_AT_CHAR( uVar5, sub_138(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar5, "Scenario_Standing", vVar6, fVar9 );
            }
        }
    }
    return;
}

void sub_9022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, string sParam4)
{
    switch (uParam0)
    {
        case 0:
        sParam4 = "E1_Lost";
        switch (uParam1)
        {
            case 0:
            (uParam2^) = {-1719.91800000, 332.16510000, 25.34160000};
            (uParam3^) = 8.66440000;
            break;
            case 1:
            (uParam2^) = {-1719.91800000, 332.16510000, 25.34160000};
            (uParam3^) = 8.66440000;
            break;
            case 2:
            (uParam2^) = {-1719.91800000, 332.16510000, 25.34160000};
            (uParam3^) = 8.66440000;
            break;
        }
        break;
        case 1:
        SCRIPT_ASSERT( "GTA4_Get_Wardrobe_Buddies_Coords(NUMBER_OF_WARDROBES)" );
        break;
    }
    return;
}

void sub_9529()
{
    char[16] cVar2;
    int I;
    char[16] cVar7;
    int J;
    char[16] cVar12;
    char[16] cVar16;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;

    if (IS_CAM_PROPAGATING( l_U104[l_U87] ))
    {
        StrCopy( ref cVar2, l_U112[l_U87], 16 );
        if (NOT (sub_9582( l_U87 )))
        {
            ConcatString(ref cVar2, "N", 16);
        }
        if (sub_9984( l_U87 ))
        {
            ConcatString(ref cVar2, "_O", 16);
        }
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar2 )))
        {
            for ( I = 0; I < 6; I++ )
            {
                StrCopy( ref cVar7, l_U112[I], 16 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                ConcatString(ref cVar7, "N", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U112[I], 16 );
                ConcatString(ref cVar7, "_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U112[I], 16 );
                ConcatString(ref cVar7, "N_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
            }
            PRINT_HELP_FOREVER( ref cVar2 );
        }
        if (NOT l_U90)
        {
            if ((NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))))))))
            {
                l_U90 = 1;
            }
        }
        else if (sub_12047())
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WD_ACCE" )))
            {
                for ( J = 0; J < 6; J++ )
                {
                    StrCopy( ref cVar12, l_U112[J], 16 );
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    ConcatString(ref cVar12, "N", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar12, l_U112[J], 16 );
                    ConcatString(ref cVar12, "_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar12, l_U112[J], 16 );
                    ConcatString(ref cVar12, "N_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                }
                if (NOT (sub_12313( 0, 19, 1 )))
                {
                    PRINT_HELP( "WD_ACCE" );
                }
            }
            sub_12558( 0 );
            l_U85 = 2;
        }
        else if (sub_13390( "BLANK" ))
        {
            for ( J = 0; J < 6; J++ )
            {
                StrCopy( ref cVar16, l_U112[J], 16 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                ConcatString(ref cVar16, "N", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar16, l_U112[J], 16 );
                ConcatString(ref cVar16, "_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar16, l_U112[J], 16 );
                ConcatString(ref cVar16, "N_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
            }
            if (NOT (sub_12313( 0, 19, 1 )))
            {
                DO_SCREEN_FADE_OUT( 125 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                sub_12558( 19 );
                DO_SCREEN_FADE_IN( 125 );
            }
            l_U85 = 2;
        }
        sub_13733();
        sub_14245( l_U87 );
        if (sub_9582( l_U87 ))
        {
            if ((sub_15140( 10 )) || ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 ))))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_15433( l_U87, ref uVar20 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, sub_16481( uVar20 ), sub_138() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_17057( l_U87 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U90 = 0;
                }
            }
            else if ((sub_15140( 11 )) || ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 ))))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_15433( l_U87, ref uVar21 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, sub_16481( uVar21 ), sub_138() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    sub_19526( ref l_U87 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U90 = 0;
                }
            }
        }
        if ((sub_15140( 8 )) || ((IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 8 ))))
        {
            sub_2704( ref uVar22 );
            if (NOT (sub_10075( uVar22 )))
            {
                if (l_U87 > 0)
                {
                    sub_17561( l_U87, sub_20871() );
                    l_U90 = 0;
                    while (NOT (sub_17806( l_U87 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
            else
            {
                switch (l_U87)
                {
                    case 4:
                    sub_17561( l_U87, 5 );
                    l_U90 = 0;
                    l_U87 = 5;
                    while (NOT (sub_17806( l_U87 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    case 5:
                    sub_17561( l_U87, 1 );
                    l_U90 = 0;
                    l_U87 = 1;
                    while (NOT (sub_17806( l_U87 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    default:
                      case 6: if (l_U87 > 0)
                    {
                        sub_17561( l_U87, sub_20871() );
                        l_U90 = 0;
                        while (NOT (sub_17806( l_U87 )))
                        {
                            WAIT( 0 );
                        }
                    }
                }
            }
        }
        else if ((sub_15140( 9 )) || ((IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 9 ))))
        {
            sub_2704( ref uVar23 );
            if (NOT (sub_10075( uVar23 )))
            {
                if (l_U87 < 4)
                {
                    sub_17561( l_U87, sub_21239() );
                    l_U90 = 0;
                    while (NOT (sub_17806( l_U87 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
            else
            {
                switch (l_U87)
                {
                    case 1:
                    sub_17561( l_U87, 5 );
                    l_U90 = 0;
                    l_U87 = 5;
                    while (NOT (sub_17806( l_U87 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    case 5:
                    sub_17561( l_U87, 4 );
                    l_U90 = 0;
                    l_U87 = 4;
                    while (NOT (sub_17806( l_U87 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    default:
                      case 6: if (l_U87 < 4)
                    {
                        sub_17561( l_U87, sub_21239() );
                        l_U90 = 0;
                        while (NOT (sub_17806( l_U87 )))
                        {
                            WAIT( 0 );
                        }
                    }
                }
            }
        };;;
    }
    else
    {
        for ( iVar24 = 0; iVar24 < l_U104; iVar24++ )
        {
            if (IS_CAM_PROPAGATING( l_U104[iVar24] ))
            {
                sub_1248( "  * iProp" );
                sub_1267( iVar24 );
                sub_1308();
            }
        }
    }
    return;
}

int sub_9582(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (l_U152 > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 1:
        if (l_U153 > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 2:
        if ((l_U154 > 0) || (l_U149 > 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 3:
        if (l_U150 > 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 4:
        if (l_U151 > 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 5:
        if ((l_U149 > 1) || (l_U154 > 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 6:
        SCRIPT_ASSERT( "OWN_SEVERAL_OF_CLOTHES_ENUM(NUMBER_OF_SHOP_CAM)" );
        return 0;
    }
    SCRIPT_ASSERT( "OWN_SEVERAL_OF_CLOTHES_ENUM(other)" );
    return 0;
}

int sub_9984(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        sub_2704( ref uVar3 );
        if (sub_10075( uVar3 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 2:
        return 0;
        break;
        case 3:
        return 0;
        break;
        case 4:
        sub_2704( ref uVar3 );
        if (sub_10075( uVar3 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 5:
        return 0;
        break;
        case 6:
        SCRIPT_ASSERT( "PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT(NUMBER_OF_SHOP_CAM)" );
        return 0;
    }
    SCRIPT_ASSERT( "PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT(other)" );
    return 0;
}

int sub_10075(int iParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    for ( I = 0; I < 20; I++ )
    {
        if ((I != 18) AND ((I != 1) AND ((I != 19) AND (I != 0))))
        {
            sub_10123( I, ref uVar4 );
            if (iParam0 == uVar4._fU0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_10123(unknown uParam0, int iParam1)
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
        sub_2704( iParam1 + 0 );
        sub_3834( iParam1 + 4 );
        sub_4561( iParam1 + 8 );
        sub_5162( iParam1 + 12 );
        sub_5459( iParam1 + 16 );
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

int sub_12047()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_12313(unknown uParam0, unknown uParam1, boolean bParam2)
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

    sub_10123( uParam0, ref uVar5 );
    sub_10123( uParam1, ref uVar12 );
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

void sub_12558(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_10123( uParam0, ref uVar3 );
    if (uVar3._fU0 < 45)
    {
        sub_12592( uVar3._fU0 );
    }
    if (uVar3._fU4 < 26)
    {
        sub_12696( uVar3._fU4 );
    }
    if (uVar3._fU8 < 20)
    {
        sub_12800( uVar3._fU8 );
    }
    if (uVar3._fU12 < 4)
    {
        sub_12904( uVar3._fU12 );
    }
    if (uVar3._fU16 < 3)
    {
        sub_12929( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_138(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_138(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( sub_138(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( sub_138(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_12592(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_2774( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_138(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_138(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_138(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_12696(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_3902( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_138(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_138(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_138(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_12800(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_4629( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_138(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_138(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_138(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_12904(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_12904( -1 );
        sub_12929( -1 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_138(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_138(), 8 )) != 1))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_138(), 8, 1, 0 );
        }
    }
    else
    {
        sub_5215( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( sub_138(), 0, ref iVar4 );
        if (((GET_CHAR_TEXTURE_VARIATION( sub_138(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( sub_138(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_138(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( sub_138(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( sub_138(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_12929(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_5508( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( sub_138(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( sub_138(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( sub_138(), 1, iVar3 );
        }
    }
    return;
}

int sub_13390(unknown uParam0)
{
    if (sub_6403( 5, 0 ))
    {
        if (sub_6690( 5, uParam0, 0 ))
        {
            sub_578( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_523() )))
    {
        sub_578( 5, uParam0 );
        return 1;
    }
    return 0;
}

void sub_13733()
{
    int iVar2;
    string sVar3;
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref l_U147 );
    switch (l_U87)
    {
        case 0:
        sub_5162( ref iVar4 );
        if (iVar4 != -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iVar2 );
            sVar3 = l_U94[2];
        }
        else
        {
            iVar2 = 2147483647;
            sVar3 = "nowt";
        }
        break;
        case 1:
        sub_5459( ref iVar5 );
        if (iVar5 != -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iVar2 );
            sVar3 = l_U94[1];
        }
        else
        {
            iVar2 = 2147483647;
            sVar3 = "nowt";
        }
        break;
        case 2:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        sVar3 = l_U94[4];
        break;
        case 3:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        sVar3 = l_U94[3];
        break;
        case 4:
        GENERATE_RANDOM_INT_IN_RANGE( 2500, 5000, ref iVar2 );
        sVar3 = l_U94[5];
        break;
        case 5:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        if ((iVar2 mod 2) == 0)
        {
            sVar3 = l_U94[0];
        }
        else
        {
            sVar3 = l_U94[6];
        }
        break;
        default:
          case 6:
        iVar2 = 2147483647;
        sVar3 = "nowt";
    }
    if ((GET_HASH_KEY( sVar3 )) != (GET_HASH_KEY( "nowt" )))
    {
        if (IS_CHAR_PLAYING_ANIM( sub_138(), l_U102, sVar3 ))
        {
            GET_GAME_TIMER( ref l_U148 );
        }
    }
    if (((l_U148 + iVar2) > 0) AND (l_U147 > (l_U148 + iVar2)))
    {
        TASK_PLAY_ANIM( sub_138(), sVar3, l_U102, 4.00000000, 0, 0, 0, 0, -1 );
    }
    return;
}

void sub_14245(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;

    if ((IS_CAM_ACTIVE( l_U104[uParam0] )) AND (IS_CAM_ACTIVE( l_U104[uParam0] )))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if ((iVar6 == 0) AND (iVar5 == 0))
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        GET_CHAR_COORDINATES( sub_138(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        if (IS_USING_CONTROLLER())
        {
            GET_CHAR_COORDINATES( sub_138(), ref l_U91._fU0, ref l_U91._fU4, ref l_U91._fU8 );
        }
        if (IS_USING_CONTROLLER())
        {
            l_U91._fU0 += (COS( l_U74[l_U86]._fU16 + 180.00000000 )) * ((TO_FLOAT( iVar5 )) / 512.00000000);
            l_U91._fU4 += (SIN( l_U74[l_U86]._fU16 + 180.00000000 )) * ((TO_FLOAT( iVar5 )) / 512.00000000);
            l_U91._fU8 += l_U138[uParam0] - ((TO_FLOAT( iVar6 )) / 512.00000000);
        }
        else
        {
            l_U91._fU0 += (TO_FLOAT( iVar5 )) / (512.00000000 * 8.00000000);
            l_U91._fU4 += (TO_FLOAT( iVar5 )) / (512.00000000 * 8.00000000);
            l_U91._fU8 += ((TO_FLOAT( iVar6 )) / (512.00000000 * 8.00000000)) * -1.00000000;
            fVar10 = uVar7._fU0 + ((COS( l_U74[l_U86]._fU16 + 180.00000000 )) * -0.50000000);
            fVar11 = uVar7._fU0 + ((COS( l_U74[l_U86]._fU16 + 180.00000000 )) * 0.50000000);
            if (l_U91._fU0 < fVar10)
            {
                l_U91._fU0 = fVar10;
            }
            else if (l_U91._fU0 > fVar11)
            {
                l_U91._fU0 = fVar11;
            }
            fVar10 = uVar7._fU4 + ((SIN( l_U74[l_U86]._fU16 + 180.00000000 )) * -0.50000000);
            fVar11 = uVar7._fU4 + ((SIN( l_U74[l_U86]._fU16 + 180.00000000 )) * 0.50000000);
            if (l_U91._fU4 < fVar10)
            {
                l_U91._fU4 = fVar10;
            }
            else if (l_U91._fU4 > fVar11)
            {
                l_U91._fU4 = fVar11;
            }
            fVar10 = (uVar7._fU8 + l_U138[uParam0]) - 0.50000000;
            fVar11 = (uVar7._fU8 + l_U138[uParam0]) + 0.50000000;
            if (l_U91._fU8 < fVar10)
            {
                l_U91._fU8 = fVar10;
            }
            else if (l_U91._fU8 > fVar11)
            {
                l_U91._fU8 = fVar11;
            }
        }
        POINT_CAM_AT_COORD( l_U104[uParam0], l_U91._fU0, l_U91._fU4, l_U91._fU8 );
    }
    return;
}

int sub_15140(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar4 == 0) AND (iVar3 == 0))
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

int sub_15433(unknown uParam0, unknown uParam1)
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
        sub_2704( ref uVar4 );
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
        sub_3834( ref uVar5 );
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

string sub_16481(unknown uParam0)
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

void sub_17057(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    boolean bVar14;
    int iVar15;

    GET_GAME_TIMER( ref l_U148 );
    if (NOT (sub_180( sub_138(), 80 )))
    {
        CLEAR_CHAR_TASKS( sub_138() );
    }
    switch (uParam0)
    {
        case 2:
        sub_2704( ref iVar5 );
        iVar4 = iVar5;
        iVar3 = iVar5 - 1;
        bVar6 = false;
        while ((NOT bVar6) AND (iVar3 >= 0))
        {
            iVar5 = iVar3;
            sub_1248( "  A iTorso = " );
            sub_1267( iVar3 );
            sub_1308();
            if ((NOT (sub_10075( iVar5 ))) AND (sub_17244( iVar5 )))
            {
                sub_12592( iVar5 );
                bVar6 = true;
            }
            iVar3--;
        }
        iVar3 = 20 - 1;
        sub_17311( ref iVar7 );
        while ((iVar3 >= 0) AND (NOT bVar6))
        {
            iVar7 = iVar3;
            if (sub_17454( iVar7 ))
            {
                sub_17561( uParam0, 5 );
                l_U90 = 0;
                while (NOT (sub_17806( 5 )))
                {
                    WAIT( 0 );
                }
                sub_12558( iVar7 );
                bVar6 = true;
                l_U155 = l_U87;
                l_U87 = 5;
            }
            iVar3--;
        }
        sub_2704( ref iVar5 );
        iVar3 = 45 - 1;
        while ((NOT bVar6) AND (iVar3 >= iVar4))
        {
            iVar5 = iVar3;
            sub_1248( "  C iTorso = " );
            sub_1267( iVar3 );
            sub_1308();
            if ((NOT (sub_10075( iVar5 ))) AND (sub_17244( iVar5 )))
            {
                sub_12592( iVar5 );
                bVar6 = true;
            }
            iVar3--;
        }
        break;
        case 3:
        sub_3834( ref iVar8 );
        iVar8 = ((iVar8 + 26) - 1) mod 26;
        while (NOT (sub_18274( iVar8 )))
        {
            iVar8 = ((iVar8 + 26) - 1) mod 26;
            WAIT( 0 );
        }
        sub_12696( iVar8 );
        break;
        case 4:
        sub_4561( ref iVar9 );
        iVar9 = ((iVar9 + 20) - 1) mod 20;
        while (NOT (sub_18366( iVar9 )))
        {
            iVar9 = ((iVar9 + 20) - 1) mod 20;
            WAIT( 0 );
        }
        sub_12800( iVar9 );
        break;
        case 0:
        sub_5162( ref iVar10 );
        PRINTSTRING( "  * head: " );
        PRINTSTRING( sub_18466( iVar10 ) );
        if (iVar10 >= 0)
        {
            iVar10--;
        }
        else
        {
            iVar10 = 4 - 1;
        }
        while (NOT (sub_18709( iVar10 )))
        {
            if (iVar10 >= 0)
            {
                iVar10--;
            }
            else
            {
                iVar10 = 4 - 1;
            }
            WAIT( 0 );
        }
        PRINTSTRING( ", prev: " );
        PRINTSTRING( sub_18466( iVar10 ) );
        PRINTNL();
        sub_12904( iVar10 );
        break;
        case 1:
        sub_5459( ref iVar11 );
        if (iVar11 >= 0)
        {
            iVar11--;
        }
        else
        {
            iVar11 = 3 - 1;
        }
        while (NOT (sub_18893( iVar11 )))
        {
            if (iVar11 >= 0)
            {
                iVar11--;
            }
            else
            {
                iVar11 = 3 - 1;
            }
            WAIT( 0 );
        }
        sub_12929( iVar11 );
        break;
        case 5:
        sub_17311( ref iVar12 );
        iVar13 = iVar12 - 1;
        bVar14 = false;
        while ((NOT bVar14) AND (iVar13 >= 0))
        {
            iVar12 = iVar13;
            sub_1248( "  A prev iOutfit = " );
            sub_1267( iVar13 );
            sub_1308();
            if (sub_17454( iVar12 ))
            {
                sub_12558( iVar12 );
                bVar14 = true;
            }
            iVar13--;
        }
        iVar13 = 45 - 1;
        sub_2704( ref iVar15 );
        while ((iVar13 >= 0) AND (NOT bVar14))
        {
            iVar15 = iVar13;
            if ((NOT (sub_10075( iVar15 ))) AND (sub_17244( iVar15 )))
            {
                sub_17561( 5, l_U155 );
                l_U90 = 0;
                while (NOT (sub_17806( l_U155 )))
                {
                    WAIT( 0 );
                }
                sub_12558( 19 );
                sub_12592( iVar15 );
                bVar14 = true;
                l_U87 = l_U155;
                l_U155 = 6;
            }
            iVar13--;
        }
        break;
        default:
          case 6: SCRIPT_ASSERT( "invalid param in prev_player_clothes()" );
    }
    return;
}

void sub_17244(unknown uParam0)
{
    return g_U8789[uParam0];
}

void sub_17311(unknown uParam0)
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
    sub_10123( 0, ref uVar4 );
    for ( I = 0; I < 20; I++ )
    {
        if (((NOT bVar3) == 1) AND ((I != 19) AND ((I != 18) AND ((I != 1) AND (I != 0)))))
        {
            if (sub_12313( I, 0, 0 ))
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

void sub_17454(unknown uParam0)
{
    sub_1248( "  * DOES_PLAYER_OWN_OUTFIT(" );
    sub_1267( uParam0 );
    sub_1248( ") [" );
    sub_1267( g_U8892 );
    sub_1248( "]\n" );
    return g_U8892[uParam0];
}

void sub_17561(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (IS_CAM_ACTIVE( l_U104[uParam1] ))
    {
        GET_CHAR_COORDINATES( sub_138(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        uVar5._fU8 += l_U138[uParam1];
        POINT_CAM_AT_COORD( l_U104[uParam1], uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        l_U91._fU0 = uVar5._fU0;
        l_U91._fU4 = uVar5._fU4;
        l_U91._fU8 = uVar5._fU8;
    }
    SET_CAM_INTERP_STYLE_CORE( l_U111, l_U104[uParam0], l_U104[uParam1], 1500, 0 );
    for ( I = 0; I < 6; I++ )
    {
        SET_CAM_PROPAGATE( l_U104[I], 0 );
    }
    SET_CAM_ACTIVE( l_U111, 1 );
    SET_CAM_PROPAGATE( l_U111, 1 );
    return;
}

int sub_17806(unknown uParam0)
{
    int I;
    char[16] cVar4;

    if (IS_SPECIFIC_CAM_INTERPOLATING( l_U111 ))
    {
        for ( I = 0; I < 6; I++ )
        {
            StrCopy( ref cVar4, l_U112[I], 16 );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            ConcatString(ref cVar4, "N", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            StrCopy( ref cVar4, l_U112[I], 16 );
            ConcatString(ref cVar4, "_O", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            StrCopy( ref cVar4, l_U112[I], 16 );
            ConcatString(ref cVar4, "N_O", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
        }
        if (NOT (sub_180( sub_138(), 80 )))
        {
            CLEAR_CHAR_TASKS( sub_138() );
        }
        return 0;
        break;
    }
    SET_CAM_PROPAGATE( l_U111, 0 );
    SET_CAM_PROPAGATE( l_U104[uParam0], 1 );
    GET_GAME_TIMER( ref l_U148 );
    return 1;
}

void sub_18274(unknown uParam0)
{
    return g_U8835[uParam0];
}

void sub_18366(unknown uParam0)
{
    return g_U8862[uParam0];
}

string sub_18466(unknown uParam0)
{
    switch (uParam0)
    {
        case -1:
        return "HEAD_NONE";
        break;
        case 0:
        return "HEAD_0";
        break;
        case 1:
        return "HEAD_1";
        break;
        case 2:
        return "HEAD_2";
        break;
        case 3:
        return "HEAD_3";
        break;
        case 4: return "NUMBER_OF_PLAYER_CLOTHES_HEAD";
    }
    return "null";
}

void sub_18709(int iParam0)
{
    if (iParam0 < 0)
    {
        return 1;
        break;
    }
    return g_U8883[iParam0];
}

void sub_18893(int iParam0)
{
    if (iParam0 < 0)
    {
        return 1;
        break;
    }
    return g_U8888[iParam0];
}

void sub_19526(unknown uParam0)
{
    int iVar3;
    int I;
    boolean bVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int J;
    boolean bVar13;
    int iVar14;

    GET_GAME_TIMER( ref l_U148 );
    if (NOT (sub_180( sub_138(), 80 )))
    {
        CLEAR_CHAR_TASKS( sub_138() );
    }
    switch ((uParam0^))
    {
        case 2:
        sub_2704( ref iVar3 );
        bVar5 = false;
        for ( I = iVar3 + 1; I <= (45 - 2); I++ )
        {
            if (NOT bVar5)
            {
                iVar3 = I;
                sub_1248( "  D iTorso = " );
                sub_1267( I );
                sub_1308();
                if ((NOT (sub_10075( iVar3 ))) AND (sub_17244( iVar3 )))
                {
                    sub_12592( iVar3 );
                    bVar5 = true;
                }
            }
        }
        if (NOT bVar5)
        {
            sub_17311( ref iVar6 );
            for ( I = 0; I <= (20 - 1); I++ )
            {
                if (NOT bVar5)
                {
                    iVar6 = I;
                    sub_1248( "  E iTorso = " );
                    sub_1267( I );
                    sub_1308();
                    if (sub_17454( iVar6 ))
                    {
                        sub_17561( (uParam0^), 5 );
                        l_U90 = 0;
                        while (NOT (sub_17806( 5 )))
                        {
                            WAIT( 0 );
                        }
                        sub_12558( iVar6 );
                        bVar5 = true;
                        l_U155 = l_U87;
                        l_U87 = 5;
                    }
                }
            }
        }
        if (NOT bVar5)
        {
            for ( I = 0; I <= iVar3; I++ )
            {
                if (NOT bVar5)
                {
                    iVar3 = I;
                    sub_1248( "  F iTorso = " );
                    sub_1267( I );
                    sub_1308();
                    if ((NOT (sub_10075( iVar3 ))) AND (sub_17244( iVar3 )))
                    {
                        sub_12592( iVar3 );
                        bVar5 = true;
                    }
                }
            }
        }
        break;
        case 3:
        sub_3834( ref iVar7 );
        iVar7 = (iVar7 + 1) mod 26;
        while (NOT (sub_18274( iVar7 )))
        {
            iVar7 = (iVar7 + 1) mod 26;
            WAIT( 0 );
        }
        sub_12696( iVar7 );
        break;
        case 4:
        sub_4561( ref iVar8 );
        iVar8 = (iVar8 + 1) mod 20;
        while (NOT (sub_18366( iVar8 )))
        {
            iVar8 = (iVar8 + 1) mod 20;
            WAIT( 0 );
        }
        sub_12800( iVar8 );
        break;
        case 0:
        sub_5162( ref iVar9 );
        PRINTSTRING( "  * head: " );
        PRINTSTRING( sub_18466( iVar9 ) );
        iVar9 = ((iVar9 + 2) mod (4 + 1)) - 1;
        while (NOT (sub_18709( iVar9 )))
        {
            iVar9 = ((iVar9 + 2) mod (4 + 1)) - 1;
            WAIT( 0 );
        }
        PRINTSTRING( ", next: " );
        PRINTSTRING( sub_18466( iVar9 ) );
        PRINTNL();
        sub_12904( iVar9 );
        break;
        case 1:
        sub_5459( ref iVar10 );
        iVar10 = ((iVar10 + 2) mod (3 + 1)) - 1;
        while (NOT (sub_18893( iVar10 )))
        {
            iVar10 = ((iVar10 + 2) mod (3 + 1)) - 1;
            WAIT( 0 );
        }
        sub_12929( iVar10 );
        break;
        case 5:
        sub_17311( ref iVar11 );
        bVar13 = false;
        for ( J = iVar11 + 1; J <= (20 - 2); J++ )
        {
            if (NOT bVar13)
            {
                iVar11 = J;
                sub_1248( "  A next iOutfit = " );
                sub_1267( J );
                sub_1308();
                if (sub_17454( iVar11 ))
                {
                    sub_12558( iVar11 );
                    bVar13 = true;
                }
            }
        }
        if (NOT bVar13)
        {
            sub_2704( ref iVar14 );
            for ( J = 0; J <= 20; J++ )
            {
                if (NOT bVar13)
                {
                    iVar14 = J;
                    if ((NOT (sub_10075( iVar14 ))) AND (sub_17244( iVar14 )))
                    {
                        sub_17561( 5, l_U155 );
                        l_U90 = 0;
                        while (NOT (sub_17806( l_U155 )))
                        {
                            WAIT( 0 );
                        }
                        sub_12558( 19 );
                        sub_12592( iVar14 );
                        bVar13 = true;
                        l_U87 = l_U155;
                        l_U155 = 6;
                    }
                }
            }
        }
        break;
        default:
          case 6: SCRIPT_ASSERT( "invalid param in next_player_clothes()" );
    }
    return;
}

void sub_20871()
{
    l_U87 = ((l_U87 + 6) - 1) mod 6;
    return l_U87;
}

void sub_21239()
{
    l_U87 = (l_U87 + 1) mod 6;
    return l_U87;
}

