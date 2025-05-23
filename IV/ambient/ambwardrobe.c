void main()
{
    l_U79 = 0;
    l_U80 = 0;

    // l_U81 is possibly Wardrobe number, seems to be checked here: sub_1419()
    // 0 = BROOKLYN_WARDROBE
    // 1 = BRONX_WARDROBE
    // 2 = MANHATTAN_WARDROBE
    // 3 = JERSEY_WARDROBE
    // 4 = PLAYBOY_WARDROBE
    wardrobeNumber = 5;

    l_U82 = 2;
    l_U129 = 1;
    l_U130 = 0;
    l_U131 = 0;
    l_U143 = "clothing";
    l_U187 = 0.50000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (l_U79 == 3)
        {
            if (l_U80 < 2)
            {
                sub_113();
            }
        }
        sub_1152();
    }
    sub_1419();
    SELECT_WARDROBE_LOCATION( l_U197 );
    while (l_U129)
    {
        WAIT( 0 );
        if (sub_2888())
        {
            switch (l_U79)
            {
                case 0:
                if (sub_3012())
                {
                    sub_3152();
                    l_U130 = 1;
                    l_U79 = 1;
                }
                break;

                case 1:
                if (sub_6171())
                {
                    l_U79 = 2;
                }
                break;

                case 2:
                sub_6311( "WD_USE", "WD_CANT" );
                break;

                case 3:
                sub_8012();
                break;
            }
        }
        // Possibly a changing room global or something, seems to only really be in use in the clothes stores and ambwardrobe.c
        g_U8220 = l_U82;
    }
    sub_1152();
    return;
}

void sub_113()
{
    int I;

    if (sub_164( CurrentPlayerChar(), 29 ))
    {
        l_U190 = 0;
        l_U191 = 0;
        l_U192 = 0;
        l_U193 = 0;
        l_U194 = 0;
        l_U195 = 0;
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        for ( I = 0; I < l_U145; I++ )
        {
            DESTROY_CAM( l_U145[I] );
        }

        DESTROY_CAM( wardrobeCamera );
        CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );

        sub_328( ref l_U144 );

        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CHAR_CURRENT_WEAPON_VISIBLE( CurrentPlayerChar(), 1 );
        SET_CHAR_COLLISION( CurrentPlayerChar(), 1 );
        FREEZE_CHAR_POSITION( CurrentPlayerChar(), 0 );

        DisableMinigameInProgress();
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        sub_554( 5, "nowt" );

        sub_884();
        while (sub_1084())
        {
            WAIT( 0 );
        }
        l_U80 = 3;
    }
    return;
}

// sub_122
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_164(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_328(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

// sub_474
void DisableMinigameInProgress()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

// sub_499
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_554(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U3) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_775();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( CurrentPlayerId(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_775()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_884()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;

    GET_GROUP_SIZE( sub_893(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_893(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( CurrentPlayerId() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( uVar5 )))
                {
                    CLEAR_CHAR_TASKS( uVar5 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_GOTO_CHAR_OFFSET( uVar5, CurrentPlayerChar(), -1, 2.50000000, 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_893()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1084()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_1152()
{
    int I;

    REMOVE_ANIMS( l_U143 );
    for ( I = 0; I < 6; I++ )
    {
        if ((NOT (IS_STRING_NULL( l_U153[I] ))) AND (l_U130))
        {
            CurrentPlayerChar4( "iClear: " );
            sub_1243( I );
            CurrentPlayerChar4( ", " );
            CurrentPlayerChar4( l_U153[I] );
            sub_1284();
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( l_U153[I] ))
            {
                CLEAR_HELP();
            }
        }
    }
    sub_554( 2, "WD_USE" );
    g_U8220 = 6;
    if (l_U79 > 1)
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void CurrentPlayerChar4(unknown uParam0)
{
    return;
}

void sub_1243(unknown uParam0)
{
    return;
}

void sub_1284()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

void sub_1419()
{
    l_U153[2] = "WD_TORSO";
    l_U153[3] = "WD_LEGS";
    l_U153[4] = "WD_FEET";
    l_U153[0] = "WD_HEAD";
    l_U153[1] = "WD_EYES";
    l_U153[5] = "WD_BODY";
    l_U135[0] = "Brushoff_Suit_Stand";
    l_U135[1] = "Examine Glasses_b";
    l_U135[2] = "Examine Hat_b";
    l_U135[3] = "Examine Legs";
    l_U135[4] = "Examine Shirt";
    l_U135[5] = "Examine Shoes";
    l_U135[6] = "Tie_Adjust_Stand";
    l_U160[0] = {0.00000000, 0.40000000, 0.60000000};
    l_U160[1] = {0.00000000, 0.40000000, 0.55000000};
    l_U160[2] = {-0.00000000, 0.75000000, 0.25000000};
    l_U160[3] = {0.00000000, 0.85000000, -0.25000000};
    l_U160[4] = {0.00000000, 0.75000000, -0.65000000};
    l_U160[5] = {0.00000000, 1.60000000, 0.00000000};
    l_U179[0] = 0.60000000;
    l_U179[1] = 0.55000000;
    l_U179[2] = 0.25000000;
    l_U179[3] = -0.45000000;
    l_U179[4] = -0.90000000;
    l_U179[5] = -0.15000000;
    l_U186 = 45.00000000;

    // l_U83 seems to be wardrobes
    wardrobes[0]._fU0 = "BROOKLYN_WARDROBE";
    wardrobes[0]._fU4 = {890.52500000, -497.60100000, 20.00000000};
    wardrobes[0]._fU16 = 270.00000000;
    wardrobes[0]._fU20 = {904.30990000, -498.31270000, 14.63890000};
    wardrobes[0]._fU32 = 168.54500000;

    wardrobes[1]._fU0 = "BRONX_WARDROBE";
    wardrobes[1]._fU4 = {604.00720000, 1412.38400000, 18.02580000};
    wardrobes[1]._fU16 = 215.00000000;
    wardrobes[1]._fU20 = {589.58100000, 1398.41700000, 10.90680000};
    wardrobes[1]._fU32 = 17.54190000;

    wardrobes[2]._fU0 = "MANHATTAN_WARDROBE";
    wardrobes[2]._fU4 = {106.55000000, 846.15000000, 45.60000000};
    wardrobes[2]._fU16 = 270.00000000;
    wardrobes[2]._fU20 = {119.25970000, 845.22920000, 14.65260000};
    wardrobes[2]._fU32 = 166.84770000;

    wardrobes[3]._fU0 = "JERSEY_WARDROBE";
    wardrobes[3]._fU4 = {-970.40000000, 889.20000000, 19.50000000};
    wardrobes[3]._fU16 = 180.00000000;
    wardrobes[3]._fU20 = {-961.77940000, 901.54690000, 13.60570000};
    wardrobes[3]._fU32 = 268.55740000;

    wardrobes[4]._fU0 = "PLAYBOY_WARDROBE";
    wardrobes[4]._fU4 = {-433.40000000, 1459.73000000, 39.50000000};
    wardrobes[4]._fU16 = 90.00000000;
    wardrobes[4]._fU20 = {-421.26020000, 1493.19000000, 18.81150000};
    wardrobes[4]._fU32 = 293.53930000;
    return;
}

// Possibly SELECT_WARDROBE_LOCATION
// sub_2540
void SELECT_WARDROBE_LOCATION(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    // Possibly bFound_a_wardrobe
    // bVar25
    boolean bFound_a_wardrobe;
    int I;
    int iVar27;
    float fVar28;
    float fVar29;

    bFound_a_wardrobe = false;
    iVar27 = 99;
    fVar29 = 1E8;
    for ( I = 0; I < 5; I++ )
    {
        fVar28 = VDIST( uParam0._fU4[0], wardrobes[I]._fU4 );
        if (fVar28 < fVar29)
        {
            iVar27 = I;
            fVar29 = fVar28;
            bFound_a_wardrobe = true;
        }
    }
    if (bFound_a_wardrobe)
    {
        wardrobeNumber = iVar27;
        if (wardrobeNumber == 0)
        {
            if (sub_2681())
            {
                l_U129 = 0;
            }
        }
        if (wardrobeNumber == 4)
        {
            g_U8332[17] = 1;
        }
        else
        {
            g_U8332[17] = 0;
        }
        if (l_U129)
        {
            REQUEST_ANIMS( l_U143 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "SELECT_WARDROBE_LOCATION() - NOT bFound_a_wardrobe" );
    }
    return;
}

void sub_2681()
{
    int Result;

    Result = 1;
    if (g_U15654[33])
    {
        Result = 1;
    }
    else
    {
        Result = 0;
    }
    return Result;
}

int sub_2888()
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
            {
                return 1;
            }
        }
    }
    l_U129 = 0;
    return 0;
}

int sub_3012()
{
    int iVar2;

    GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), wardrobes[wardrobeNumber]._fU4._fU0, wardrobes[wardrobeNumber]._fU4._fU4, wardrobes[wardrobeNumber]._fU4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            REGISTER_SCRIPT_WITH_AUDIO( 0 );
            return 1;
        }
    }
    return 0;
}

void sub_3152()
{
    // TODO Figure out what these are
    sub_3167( ref l_U72._fU0 );
    sub_4297( ref l_U72._fU4 );
    sub_5024( ref l_U72._fU8 );
    sub_5625( ref l_U72._fU12 );
    sub_5922( ref l_U72._fU16 );
    l_U72._fU20 = -1;
    l_U72._fU24 = -1;
    return;
}

void sub_3167(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_3237( I, ref iVar6, ref iVar7 );
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

void sub_3237(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_4297(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    // This seems interesting to look into
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_4365( I, ref iVar6, ref iVar7 );
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

void sub_4365(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5024(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_5092( I, ref iVar6, ref iVar7 );
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

void sub_5092(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_5625(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_5678( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 8 );
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

void sub_5678(unknown uParam0, unknown uParam1)
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

void sub_5922(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_5971( I, ref iVar5 );
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

void sub_5971(unknown uParam0, unknown uParam1)
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

int sub_6171()
{
    if (NOT (HAVE_ANIMS_LOADED( l_U143 )))
    {
        REQUEST_ANIMS( l_U143 );
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

void sub_6311(unknown uParam0, unknown uParam1)
{
    if ((g_U15654[57]) AND ((sub_6332()) AND (IS_PLAYER_CONTROL_ON( CurrentPlayerId() ))))
    {
        if (sub_6528( 1, 1 ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), wardrobes[wardrobeNumber]._fU4._fU0, wardrobes[wardrobeNumber]._fU4._fU4, wardrobes[wardrobeNumber]._fU4._fU8, 1.00000000, 1.00000000, 1.60000000, 1 ))
            {
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_NOSAV" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BED_TRI" )))
                {
                    CLEAR_HELP();
                }
                if (g_U8361)
                {
                    if (sub_6960( 2, 0 ))
                    {
                        if (sub_7247( 2, uParam0, 0 ))
                        {
                            sub_554( 2, uParam0 );
                            GET_GAME_TIMER( ref l_U189 );
                            l_U79 = 3;
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
            sub_554( 2, uParam0 );;
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam1 ))
        {
            CLEAR_HELP();
        }
        sub_554( 2, uParam0 );;
    }
    return;
}

int sub_6332()
{
    switch (wardrobeNumber)
    {
        case 0:
        return g_U9943[0]._fU0;
        break;
        case 1:
        return g_U9943[1]._fU0;
        break;
        case 2:
        return g_U9943[2]._fU0;
        break;
        case 3:
        return g_U9943[3]._fU0;
        break;
        case 4:
        return g_U9943[4]._fU0;
        break;
        case 5:
        return 0;
        break;
    }
    return 0;
}

int sub_6528(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == CurrentPlayerChar()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( CurrentPlayerId() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( CurrentPlayerId() )))
    {
        return 0;
    }
    return 1;
}

int sub_6960(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerId() )))))
                {
                    if (NOT sub_7056())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( CurrentPlayerChar() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_7141())
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

int sub_7056()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_7141()
{
    return sub_7152( 0, 0 );
}

int sub_7152(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_7247(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_6960( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( CurrentPlayerId(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7522();
                l_U1 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_7522()
{
    return sub_7152( 1, 1 );
}

void sub_8012()
{
    switch (l_U80)
    {
        case 0:
        sub_8070( 10.00000000 );
        break;
        case 1:
        sub_11006();
        break;
        case 2:
        sub_113();
        break;
        case 3:
        l_U82 = 2;
        l_U80 = 0;
        l_U79 = 2;
        break;
    }
    return;
}

void sub_8070(unknown uParam0)
{
    int J;
    // Got this from the debug leftover below, should be correct.
    unknown players_last_car;
    unknown uVar5;
    int I;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
    SET_WIDESCREEN_BORDERS( 1 );
    EnableMinigameInProgress();
    sub_8129( ref l_U144 );

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref players_last_car );

    if (NOT (IS_CAR_DEAD( players_last_car )))
    {
        if (LOCATE_CAR_3D( players_last_car, wardrobes[wardrobeNumber]._fU4._fU0, wardrobes[wardrobeNumber]._fU4._fU4, wardrobes[wardrobeNumber]._fU4._fU8, uParam0 * 1.25000000, uParam0 * 1.25000000, uParam0 * 1.25000000, 0 ))
        {
            SET_CAR_COORDINATES( players_last_car, wardrobes[wardrobeNumber]._fU20._fU0, wardrobes[wardrobeNumber]._fU20._fU4, wardrobes[wardrobeNumber]._fU20._fU8 );
            SET_CAR_HEADING( players_last_car, wardrobes[wardrobeNumber]._fU32 );
            CLEAR_ROOM_FOR_CAR( players_last_car );

            PRINTSTRING( "  * repos players_last_car: " );
            PRINTVECTOR( wardrobes[wardrobeNumber]._fU20 );
            PRINTSTRING( ", " );
            PRINTFLOAT( wardrobes[wardrobeNumber]._fU32 );
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

    CLEAR_AREA( wardrobes[wardrobeNumber]._fU4._fU0, wardrobes[wardrobeNumber]._fU4._fU4, wardrobes[wardrobeNumber]._fU4._fU8, uParam0, 0 );
    GET_GROUND_Z_FOR_3D_COORD( wardrobes[wardrobeNumber]._fU4._fU0, wardrobes[wardrobeNumber]._fU4._fU4, wardrobes[wardrobeNumber]._fU4._fU8, ref uVar5 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
    
    SET_CHAR_COORDINATES( CurrentPlayerChar(), wardrobes[wardrobeNumber]._fU4._fU0, wardrobes[wardrobeNumber]._fU4._fU4, uVar5 );
    SET_CHAR_HEADING( CurrentPlayerChar(), wardrobes[wardrobeNumber]._fU16 );
    FREEZE_CHAR_POSITION( CurrentPlayerChar(), 1 );

    for ( I = 0; I < 45; I++ )
    {
        if (g_U8229[I])
        {
            l_U190++;
        }
    }

    for ( I = 0; I < 26; I++ )
    {
        if (g_U8275[I])
        {
            l_U191++;
        }
    }

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8302[I])
        {
            l_U192++;
        }
    }

    for ( I = 0; I < 4; I++ )
    {
        if (g_U8323[I])
        {
            l_U193++;
        }
    }

    for ( I = 0; I < 3; I++ )
    {
        if (g_U8328[I])
        {
            l_U194++;
        }
    }

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8332[I])
        {
            l_U195++;
        }
    }

    sub_3152();
    SET_CHAR_CURRENT_WEAPON_VISIBLE( CurrentPlayerChar(), 0 );
    
    for ( J = 0; J < 6; J++ )
    {
        CREATE_CAM( 14, ref l_U145[J] );
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( CurrentPlayerChar(), l_U160[J]._fU0, l_U160[J]._fU4 + l_U187, l_U160[J]._fU8, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        uVar7._fU8 += l_U179[J];
        SET_CAM_POS( l_U145[J], uVar10._fU0, uVar10._fU4, uVar10._fU8 );
        POINT_CAM_AT_COORD( l_U145[J], uVar7._fU0, uVar7._fU4, uVar7._fU8 );
        SET_CAM_FOV( l_U145[J], l_U186 );
        SET_CAM_ACTIVE( l_U145[J], 1 );
    }
    l_U132._fU0 = uVar7._fU0;
    l_U132._fU4 = uVar7._fU4;
    l_U132._fU8 = uVar7._fU8 + l_U179[wardrobeNumber];

    CREATE_CAM( 3, ref wardrobeCamera );
    sub_9444();

    SET_CAM_PROPAGATE( l_U145[l_U82], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (sub_1084())
    {
        while (sub_1084())
        {
            PRINTSTRING( "ambWardrobe - IS_BUTTON_PRESSED(PAD1, LEFT SHOULDER1)\n" );
            WAIT( 0 );
        }
    }
    l_U80 = 1;
    return;
}

// sub_8100
void EnableMinigameInProgress()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_8129(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_9444()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown uVar5;
    vector vVar6;
    float fVar9;
    unknown uVar10;

    GET_GROUP_SIZE( sub_893(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        for ( I = 0; I < iVar3; I++ )
        {
            GET_GROUP_MEMBER( sub_893(), I, ref uVar5 );
            if ((IS_PLAYER_PLAYING( CurrentPlayerId() )) AND (NOT (IS_CHAR_INJURED( uVar5 ))))
            {
                vVar6 = {0.00000000, 0.00000000, 0.00000000};
                fVar9 = 0.00000000;
                sub_9566( I, ref vVar6, ref fVar9, uVar10 );
                PRINTSTRING( "  * buddy " );
                PRINTINT( I );
                PRINTSTRING( " vFollower_pos: " );
                PRINTVECTOR( vVar6 );
                PRINTSTRING( ", fFollower_head: " );
                PRINTFLOAT( fVar9 );
                PRINTSTRING( ", sFollower_room: ''" );
                PRINTSTRING( uVar10 );
                PRINTSTRING( "''\n" );
                SET_CHAR_COORDINATES( uVar5, vVar6.x, vVar6.y, vVar6.z );
                SET_CHAR_HEADING( uVar5, fVar9 );
                TASK_LOOK_AT_CHAR( uVar5, CurrentPlayerChar(), -1, 0 );
                TASK_START_SCENARIO_AT_POSITION( uVar5, "Scenario_Standing", vVar6, fVar9 );
            }
            else if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                PRINTSTRING( "  * buddy " );
                PRINTINT( I );
                PRINTSTRING( " injured" );
            }
            else
            {
                PRINTSTRING( "  * buddy " );
                PRINTINT( I );
                PRINTSTRING( " NOT injured" );
            }
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                PRINTSTRING( ", IS_PLAYER_PLAYING(PLAYER_ID())\n" );
            }
            else
            {
                PRINTSTRING( ", NOT IS_PLAYER_PLAYING(PLAYER_ID())\n" );
            }
        }
    }
    return;
}

void sub_9566(unknown uParam0, unknown uParam1, unknown uParam2, string sParam3)
{
    switch (wardrobeNumber)
    {
        case 0:
        sParam3 = "NULL";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {892.35310000, -493.13920000, 18.42370000};
            (uParam2^) = 188.52910000;
            break;
            case 1:
            (uParam1^) = {893.76660000, -493.35610000, 18.42540000};
            (uParam2^) = 159.10940000;
            break;
            case 2:
            (uParam1^) = {894.36680000, -494.81130000, 18.40230000};
            (uParam2^) = 112.19680000;
            break;
        }
        break;
        case 1:
        sParam3 = "NULL";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {602.65380000, 1408.49800000, 16.53330000};
            (uParam2^) = 137.34260000;
            break;
            case 1:
            (uParam1^) = {601.21870000, 1409.52200000, 16.53330000};
            (uParam2^) = 190.59120000;
            break;
            case 2:
            (uParam1^) = {599.67760000, 1409.01600000, 16.53330000};
            (uParam2^) = 241.81800000;
            break;
        }
        break;
        case 2:
        sParam3 = "loftrm1";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {101.58110000, 852.48850000, 44.11390000};
            (uParam2^) = 294.10350000;
            break;
            case 1:
            (uParam1^) = {101.79780000, 854.73090000, 44.09510000};
            (uParam2^) = 194.73610000;
            break;
            case 2:
            (uParam1^) = {104.05750000, 855.98630000, 44.04600000};
            (uParam2^) = 163.30880000;
            break;
        }
        break;
        case 3:
        sParam3 = "NULL";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {-964.90640000, 891.60750000, 18.00130000};
            (uParam2^) = 207.13060000;
            break;
            case 1:
            (uParam1^) = {-966.15090000, 890.80290000, 18.29300000};
            (uParam2^) = 287.76010000;
            break;
            case 2:
            (uParam1^) = {-966.45930000, 889.48610000, 18.00130000};
            (uParam2^) = 327.35100000;
            break;
        }
        break;
        case 4:
        sParam3 = "PlayXroom";
        switch (uParam0)
        {
            case 0:
            (uParam1^) = {-423.81730000, 1461.69300000, 37.96650000};
            (uParam2^) = 128.35710000;
            break;
            case 1:
            (uParam1^) = {-424.88310000, 1461.97900000, 37.96650000};
            (uParam2^) = 171.62390000;
            break;
            case 2:
            (uParam1^) = {-417.54780000, 1468.36500000, 37.96650000};
            (uParam2^) = 151.90180000;
            break;
        }
        break;
    }
    return;
}

void sub_11006()
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

    if (IS_CAM_PROPAGATING( l_U145[l_U82] ))
    {
        StrCopy( ref cVar2, l_U153[l_U82], 16 );
        if (NOT (OWN_SEVERAL_OF_CLOTHES_ENUM( l_U82 )))
        {
            ConcatString(ref cVar2, "N", 16);
        }
        if (PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT( l_U82 ))
        {
            ConcatString(ref cVar2, "_O", 16);
        }
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar2 )))
        {
            for ( I = 0; I < 6; I++ )
            {
                StrCopy( ref cVar7, l_U153[I], 16 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                ConcatString(ref cVar7, "N", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U153[I], 16 );
                ConcatString(ref cVar7, "_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar7, l_U153[I], 16 );
                ConcatString(ref cVar7, "N_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar7 ))
                {
                    CLEAR_HELP();
                }
            }
            PRINT_HELP_FOREVER( ref cVar2 );
        }
        if (NOT l_U131)
        {
            if ((NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))))))))
            {
                l_U131 = 1;
            }
        }
        else if (sub_13524())
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "WD_ACCE" )))
            {
                for ( J = 0; J < 6; J++ )
                {
                    StrCopy( ref cVar12, l_U153[J], 16 );
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    ConcatString(ref cVar12, "N", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar12, l_U153[J], 16 );
                    ConcatString(ref cVar12, "_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                    StrCopy( ref cVar12, l_U153[J], 16 );
                    ConcatString(ref cVar12, "N_O", 16);
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar12 ))
                    {
                        CLEAR_HELP();
                    }
                }
                if (NOT (sub_13790( 0, 19, 1 )))
                {
                    PRINT_HELP( "WD_ACCE" );
                }
            }
            sub_14035( 0 );
            l_U80 = 2;
        }
        else if (sub_14867( "BLANK" ))
        {
            for ( J = 0; J < 6; J++ )
            {
                StrCopy( ref cVar16, l_U153[J], 16 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                ConcatString(ref cVar16, "N", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar16, l_U153[J], 16 );
                ConcatString(ref cVar16, "_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
                StrCopy( ref cVar16, l_U153[J], 16 );
                ConcatString(ref cVar16, "N_O", 16);
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar16 ))
                {
                    CLEAR_HELP();
                }
            }
            if (NOT (sub_13790( 0, 19, 1 )))
            {
                DO_SCREEN_FADE_OUT( 125 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                sub_14035( 19 );
                DO_SCREEN_FADE_IN( 125 );
            }
            l_U80 = 2;
        }
        sub_15210();
        sub_15722( l_U82 );
        if (OWN_SEVERAL_OF_CLOTHES_ENUM( l_U82 ))
        {
            if ((sub_16640( 10 )) || ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 10 ))))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_16933( l_U82, ref uVar20 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, GET_CLOTHES_AUDIO( uVar20 ), CurrentPlayerChar() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    prev_player_clothes( l_U82 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U131 = 0;
                }
            }
            else if ((sub_16640( 11 )) || ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 11 ))))
            {
                if (IS_SCREEN_FADED_IN())
                {
                    if (sub_16933( l_U82, ref uVar21 ))
                    {
                        PLAY_SOUND_FROM_PED( -1, GET_CLOTHES_AUDIO( uVar21 ), CurrentPlayerChar() );
                    }
                    DO_SCREEN_FADE_OUT( 125 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    next_player_clothes( ref l_U82 );
                    DO_SCREEN_FADE_IN( 125 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    PLAY_SOUND_FRONTEND( -1, "FRONTEND_OTHER_INFO" );
                    l_U131 = 0;
                }
            }
        }
        if ((sub_16640( 8 )) || ((IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 8 ))))
        {
            sub_3167( ref uVar22 );
            if (NOT (sub_11552( uVar22 )))
            {
                if (l_U82 > 0)
                {
                    sub_19061( l_U82, sub_22371() );
                    l_U131 = 0;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
            else
            {
                switch (l_U82)
                {
                    case 4:
                    sub_19061( l_U82, 5 );
                    l_U131 = 0;
                    l_U82 = 5;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    case 5:
                    sub_19061( l_U82, 1 );
                    l_U131 = 0;
                    l_U82 = 1;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    default:
                      case 6: if (l_U82 > 0)
                    {
                        sub_19061( l_U82, sub_22371() );
                        l_U131 = 0;
                        while (NOT (sub_19306( l_U82 )))
                        {
                            WAIT( 0 );
                        }
                    }
                }
            }
        }
        else if ((sub_16640( 9 )) || ((IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 )) || (IS_BUTTON_PRESSED( 0, 9 ))))
        {
            sub_3167( ref uVar23 );
            if (NOT (sub_11552( uVar23 )))
            {
                if (l_U82 < 4)
                {
                    sub_19061( l_U82, sub_22739() );
                    l_U131 = 0;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                }
            }
            else
            {
                switch (l_U82)
                {
                    case 1:
                    sub_19061( l_U82, 5 );
                    l_U131 = 0;
                    l_U82 = 5;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    case 5:
                    sub_19061( l_U82, 4 );
                    l_U131 = 0;
                    l_U82 = 4;
                    while (NOT (sub_19306( l_U82 )))
                    {
                        WAIT( 0 );
                    }
                    break;
                    default:
                      case 6: if (l_U82 < 4)
                    {
                        sub_19061( l_U82, sub_22739() );
                        l_U131 = 0;
                        while (NOT (sub_19306( l_U82 )))
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
        for ( iVar24 = 0; iVar24 < l_U145; iVar24++ )
        {
            if (IS_CAM_PROPAGATING( l_U145[iVar24] ))
            {
                CurrentPlayerChar4( "  * iProp" );
                sub_1243( iVar24 );
                sub_1284();
            }
        }
    }
    return;
}

// Function possibly OWN_SEVERAL_OF_CLOTHES_ENUM
// Old: sub_11059
// uParam0 is possibly int NUMBER_OF_SHOP_CAM
// int OWN_SEVERAL_OF_CLOTHES_ENUM(unknown uParam0)
int OWN_SEVERAL_OF_CLOTHES_ENUM(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (l_U193 > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;

        case 1:
        if (l_U194 > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;

        case 2:
        if ((l_U195 > 0) || (l_U190 > 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;

        case 3:
        if (l_U191 > 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 4:
        if (l_U192 > 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
        case 5:
        if ((l_U190 > 1) || (l_U195 > 0))
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

// Function Possibly PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT
// Old: sub_11461
int PLAYER_LOOKING_AT_FEET_OR_EYES_WHILE_WEARING_OUTFIT(unknown uParam0)
{
    unknown uVar3;

    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        sub_3167( ref uVar3 );
        if (sub_11552( uVar3 ))
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
        sub_3167( ref uVar3 );
        if (sub_11552( uVar3 ))
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

int sub_11552(int iParam0)
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
            sub_11600( I, ref uVar4 );
            if (iParam0 == uVar4._fU0)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_11600(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (uParam0)
    {
        case 19:
        iParam1->_fU0 = l_U72._fU0;
        iParam1->_fU4 = l_U72._fU4;
        iParam1->_fU8 = l_U72._fU8;
        iParam1->_fU12 = l_U72._fU12;
        iParam1->_fU16 = l_U72._fU16;
        iParam1->_fU20 = l_U72._fU20;
        iParam1->_fU24 = l_U72._fU24;
        break;

        case 0:
        sub_3167( iParam1 + 0 );
        sub_4297( iParam1 + 4 );
        sub_5024( iParam1 + 8 );
        sub_5625( iParam1 + 12 );
        sub_5922( iParam1 + 16 );
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

int sub_13524()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_13790(unknown uParam0, unknown uParam1, boolean bParam2)
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

    sub_11600( uParam0, ref uVar5 );
    sub_11600( uParam1, ref uVar12 );
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

void sub_14035(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    sub_11600( uParam0, ref uVar3 );
    if (uVar3._fU0 < 45)
    {
        sub_14069( uVar3._fU0 );
    }
    if (uVar3._fU4 < 26)
    {
        sub_14173( uVar3._fU4 );
    }
    if (uVar3._fU8 < 20)
    {
        sub_14277( uVar3._fU8 );
    }
    if (uVar3._fU12 < 4)
    {
        sub_14381( uVar3._fU12 );
    }
    if (uVar3._fU16 < 3)
    {
        sub_14406( uVar3._fU16 );
    }
    switch (uVar3._fU20)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 4, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 4, 0, 0 );
        break;
    }
    switch (uVar3._fU24)
    {
        case 0:
        SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 3, 0, 0 );
        break;
        case 1:
        SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 3, 0, 0 );
        break;
    }
    return;
}

void sub_14069(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_3237( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 1 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 1 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 1, iVar3, iVar4 );
    }
    return;
}

void sub_14173(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_4365( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 2 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 2 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 2, iVar3, iVar4 );
    }
    return;
}

void sub_14277(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    sub_5092( uParam0, ref iVar3, ref iVar4 );
    iVar5 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 5 );
    iVar6 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 5 );
    if ((iVar6 != iVar4) || (iVar5 != iVar3))
    {
        SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 5, iVar3, iVar4 );
    }
    return;
}

void sub_14381(int iParam0)
{
    int iVar3;
    int iVar4;

    if (iParam0 == 3)
    {
        sub_14381( -1 );
        sub_14406( -1 );
        if (((GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 8 )) != 1))
        {
            SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 8, 1, 0 );
        }
    }
    else
    {
        sub_5678( iParam0, ref iVar3 );
        GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 0, ref iVar4 );
        if (((GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 8 )) != 0) || ((GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 8 )) != 0))
        {
            SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 8, 0, 0 );
        }
        if (iVar4 != iVar3)
        {
            if (iVar3 < 0)
            {
                CLEAR_CHAR_PROP( CurrentPlayerChar(), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( CurrentPlayerChar(), 0, iVar3 );
            }
        }
    }
    return;
}

void sub_14406(unknown uParam0)
{
    int iVar3;
    int iVar4;

    sub_5971( uParam0, ref iVar3 );
    GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 1, ref iVar4 );
    if (iVar4 != iVar3)
    {
        if (iVar3 < 0)
        {
            CLEAR_CHAR_PROP( CurrentPlayerChar(), 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( CurrentPlayerChar(), 1, iVar3 );
        }
    }
    return;
}

int sub_14867(unknown uParam0)
{
    if (sub_6960( 5, 0 ))
    {
        if (sub_7247( 5, uParam0, 0 ))
        {
            sub_554( 5, uParam0 );
            return 1;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        sub_554( 5, uParam0 );
        return 1;
    }
    return 0;
}

void sub_15210()
{
    int iVar2;
    string sVar3;
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref l_U188 );
    switch (l_U82)
    {
        case 0:
        sub_5625( ref iVar4 );
        if (iVar4 != -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iVar2 );
            sVar3 = l_U135[2];
        }
        else
        {
            iVar2 = 2147483647;
            sVar3 = "nowt";
        }
        break;
        case 1:
        sub_5922( ref iVar5 );
        if (iVar5 != -1)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 7500, 10000, ref iVar2 );
            sVar3 = l_U135[1];
        }
        else
        {
            iVar2 = 2147483647;
            sVar3 = "nowt";
        }
        break;
        case 2:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        sVar3 = l_U135[4];
        break;
        case 3:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        sVar3 = l_U135[3];
        break;
        case 4:
        GENERATE_RANDOM_INT_IN_RANGE( 2500, 5000, ref iVar2 );
        sVar3 = l_U135[5];
        break;
        case 5:
        GENERATE_RANDOM_INT_IN_RANGE( 5000, 7500, ref iVar2 );
        if ((iVar2 mod 2) == 0)
        {
            sVar3 = l_U135[0];
        }
        else
        {
            sVar3 = l_U135[6];
        }
        break;
        default:
          case 6:
        iVar2 = 2147483647;
        sVar3 = "nowt";
    }
    if ((GET_HASH_KEY( sVar3 )) != (GET_HASH_KEY( "nowt" )))
    {
        if (IS_CHAR_PLAYING_ANIM( CurrentPlayerChar(), l_U143, sVar3 ))
        {
            GET_GAME_TIMER( ref l_U189 );
        }
    }
    if (((l_U189 + iVar2) > 0) AND (l_U188 > (l_U189 + iVar2)))
    {
        TASK_PLAY_ANIM( CurrentPlayerChar(), sVar3, l_U143, 4.00000000, 0, 0, 0, 0, -1 );
    }
    return;
}

void sub_15722(unknown uParam0)
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

    if ((IS_CAM_ACTIVE( l_U145[uParam0] )) AND (IS_CAM_ACTIVE( l_U145[uParam0] )))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if ((iVar6 == 0) AND (iVar5 == 0))
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        if (IS_USING_CONTROLLER())
        {
            GET_CHAR_COORDINATES( CurrentPlayerChar(), ref l_U132._fU0, ref l_U132._fU4, ref l_U132._fU8 );
        }
        if (IS_USING_CONTROLLER())
        {
            l_U132._fU0 += (COS( wardrobes[wardrobeNumber]._fU16 + 180.00000000 )) * ((TO_FLOAT( iVar5 )) / 512.00000000);
            l_U132._fU4 += (SIN( wardrobes[wardrobeNumber]._fU16 + 180.00000000 )) * ((TO_FLOAT( iVar5 )) / 512.00000000);
            l_U132._fU8 += l_U179[uParam0] - ((TO_FLOAT( iVar6 )) / 512.00000000);
        }
        else
        {
            l_U132._fU0 += (TO_FLOAT( iVar5 )) / (512.00000000 * 8.00000000);
            l_U132._fU4 += (TO_FLOAT( iVar5 )) / (512.00000000 * 8.00000000);
            l_U132._fU8 += ((TO_FLOAT( iVar6 )) / (512.00000000 * 8.00000000)) * -1.00000000;
            fVar10 = uVar7._fU0 + ((COS( wardrobes[wardrobeNumber]._fU16 + 180.00000000 )) * -0.50000000);
            fVar11 = uVar7._fU0 + ((COS( wardrobes[wardrobeNumber]._fU16 + 180.00000000 )) * 0.50000000);
            if (l_U132._fU0 < fVar10)
            {
                l_U132._fU0 = fVar10;
            }
            else if (l_U132._fU0 > fVar11)
            {
                l_U132._fU0 = fVar11;
            }
            fVar10 = uVar7._fU4 + ((SIN( wardrobes[wardrobeNumber]._fU16 + 180.00000000 )) * -0.50000000);
            fVar11 = uVar7._fU4 + ((SIN( wardrobes[wardrobeNumber]._fU16 + 180.00000000 )) * 0.50000000);
            if (l_U132._fU4 < fVar10)
            {
                l_U132._fU4 = fVar10;
            }
            else if (l_U132._fU4 > fVar11)
            {
                l_U132._fU4 = fVar11;
            }
            fVar10 = (uVar7._fU8 + l_U179[uParam0]) - 0.50000000;
            fVar11 = (uVar7._fU8 + l_U179[uParam0]) + 0.50000000;
            if (l_U132._fU8 < fVar10)
            {
                l_U132._fU8 = fVar10;
            }
            else if (l_U132._fU8 > fVar11)
            {
                l_U132._fU8 = fVar11;
            }
            if (wardrobeNumber == 4)
            {
                l_U132._fU4 = uVar7._fU4;
            }
        }
        POINT_CAM_AT_COORD( l_U145[uParam0], l_U132._fU0, l_U132._fU4, l_U132._fU8 );
    }
    return;
}

// Possibly MOVE_CAM_WITH_LEFT_STICK
int sub_16640(unknown uParam0)
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

int sub_16933(unknown uParam0, unknown uParam1)
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
        sub_3167( ref uVar4 );
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
        sub_4297( ref uVar5 );
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

// Possibly GET_CLOTHES_AUDIO
// Old: sub_17981
string GET_CLOTHES_AUDIO(int audioId)
{
    char[64] cVar3;

    switch (audioId)
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
    ConcatString(ref cVar3, audioId, 64);
    ConcatString(ref cVar3, ")", 64);
    SCRIPT_ASSERT( ref cVar3 );
    return "GET_CLOTHES_AUDIO(unknown this_clothes_audio)";
}

// Possibly prev_player_clothes
// Old: sub_18557
void prev_player_clothes(unknown uParam0)
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

    GET_GAME_TIMER( ref l_U189 );
    if (NOT (sub_164( CurrentPlayerChar(), 80 )))
    {
        CLEAR_CHAR_TASKS( CurrentPlayerChar() );
    }
    switch (uParam0)
    {
        case 2:
        sub_3167( ref iVar5 );
        iVar4 = iVar5;
        iVar3 = iVar5 - 1;
        bVar6 = false;
        while ((NOT bVar6) AND (iVar3 >= 0))
        {
            iVar5 = iVar3;
            CurrentPlayerChar4( "  A iTorso = " );
            sub_1243( iVar3 );
            sub_1284();
            if ((NOT (sub_11552( iVar5 ))) AND (sub_18744( iVar5 )))
            {
                sub_14069( iVar5 );
                bVar6 = true;
            }
            iVar3--;
        }
        iVar3 = 20 - 1;
        sub_18811( ref iVar7 );
        while ((iVar3 >= 0) AND (NOT bVar6))
        {
            iVar7 = iVar3;
            if (sub_18954( iVar7 ))
            {
                sub_19061( uParam0, 5 );
                l_U131 = 0;
                while (NOT (sub_19306( 5 )))
                {
                    WAIT( 0 );
                }
                sub_14035( iVar7 );
                bVar6 = true;
                l_U196 = l_U82;
                l_U82 = 5;
            }
            iVar3--;
        }
        sub_3167( ref iVar5 );
        iVar3 = 45 - 1;
        while ((NOT bVar6) AND (iVar3 >= iVar4))
        {
            iVar5 = iVar3;
            CurrentPlayerChar4( "  C iTorso = " );
            sub_1243( iVar3 );
            sub_1284();
            if ((NOT (sub_11552( iVar5 ))) AND (sub_18744( iVar5 )))
            {
                sub_14069( iVar5 );
                bVar6 = true;
            }
            iVar3--;
        }
        break;
        case 3:
        sub_4297( ref iVar8 );
        iVar8 = ((iVar8 + 26) - 1) mod 26;
        while (NOT (sub_19774( iVar8 )))
        {
            iVar8 = ((iVar8 + 26) - 1) mod 26;
            WAIT( 0 );
        }
        sub_14173( iVar8 );
        break;
        case 4:
        sub_5024( ref iVar9 );
        iVar9 = ((iVar9 + 20) - 1) mod 20;
        while (NOT (sub_19866( iVar9 )))
        {
            iVar9 = ((iVar9 + 20) - 1) mod 20;
            WAIT( 0 );
        }
        sub_14277( iVar9 );
        break;
        case 0:
        sub_5625( ref iVar10 );
        PRINTSTRING( "  * head: " );
        PRINTSTRING( sub_19966( iVar10 ) );
        if (iVar10 >= 0)
        {
            iVar10--;
        }
        else
        {
            iVar10 = 4 - 1;
        }
        while (NOT (sub_20209( iVar10 )))
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
        PRINTSTRING( sub_19966( iVar10 ) );
        PRINTNL();
        sub_14381( iVar10 );
        break;
        case 1:
        sub_5922( ref iVar11 );
        if (iVar11 >= 0)
        {
            iVar11--;
        }
        else
        {
            iVar11 = 3 - 1;
        }
        while (NOT (sub_20393( iVar11 )))
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
        sub_14406( iVar11 );
        break;
        case 5:
        sub_18811( ref iVar12 );
        iVar13 = iVar12 - 1;
        bVar14 = false;
        while ((NOT bVar14) AND (iVar13 >= 0))
        {
            iVar12 = iVar13;
            CurrentPlayerChar4( "  A prev iOutfit = " );
            sub_1243( iVar13 );
            sub_1284();
            if (sub_18954( iVar12 ))
            {
                sub_14035( iVar12 );
                bVar14 = true;
            }
            iVar13--;
        }
        iVar13 = 45 - 1;
        sub_3167( ref iVar15 );
        while ((iVar13 >= 0) AND (NOT bVar14))
        {
            iVar15 = iVar13;
            if ((NOT (sub_11552( iVar15 ))) AND (sub_18744( iVar15 )))
            {
                sub_19061( 5, l_U196 );
                l_U131 = 0;
                while (NOT (sub_19306( l_U196 )))
                {
                    WAIT( 0 );
                }
                sub_14035( 19 );
                sub_14069( iVar15 );
                bVar14 = true;
                l_U82 = l_U196;
                l_U196 = 6;
            }
            iVar13--;
        }
        break;
        default:
          case 6: SCRIPT_ASSERT( "invalid param in prev_player_clothes()" );
    }
    return;
}

void sub_18744(unknown uParam0)
{
    return g_U8229[uParam0];
}

void sub_18811(unknown uParam0)
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
    sub_11600( 0, ref uVar4 );
    for ( I = 0; I < 20; I++ )
    {
        if (((NOT bVar3) == 1) AND ((I != 19) AND ((I != 18) AND ((I != 1) AND (I != 0)))))
        {
            if (sub_13790( I, 0, 0 ))
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

void sub_18954(unknown uParam0)
{
    CurrentPlayerChar4( "  * DOES_PLAYER_OWN_OUTFIT(" );
    sub_1243( uParam0 );
    CurrentPlayerChar4( ") [" );
    sub_1243( g_U8332 );
    CurrentPlayerChar4( "]\n" );
    return g_U8332[uParam0];
}

void sub_19061(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (IS_CAM_ACTIVE( l_U145[uParam1] ))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        uVar5._fU8 += l_U179[uParam1];
        POINT_CAM_AT_COORD( l_U145[uParam1], uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        l_U132._fU0 = uVar5._fU0;
        l_U132._fU4 = uVar5._fU4;
        l_U132._fU8 = uVar5._fU8;
    }
    SET_CAM_INTERP_STYLE_CORE( wardrobeCamera, l_U145[uParam0], l_U145[uParam1], 1500, 0 );
    for ( I = 0; I < 6; I++ )
    {
        SET_CAM_PROPAGATE( l_U145[I], 0 );
    }
    SET_CAM_ACTIVE( wardrobeCamera, 1 );
    SET_CAM_PROPAGATE( wardrobeCamera, 1 );
    return;
}

int sub_19306(unknown uParam0)
{
    int I;
    char[16] cVar4;

    if (IS_SPECIFIC_CAM_INTERPOLATING( wardrobeCamera ))
    {
        for ( I = 0; I < 6; I++ )
        {
            StrCopy( ref cVar4, l_U153[I], 16 );
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            ConcatString(ref cVar4, "N", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            StrCopy( ref cVar4, l_U153[I], 16 );
            ConcatString(ref cVar4, "_O", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
            StrCopy( ref cVar4, l_U153[I], 16 );
            ConcatString(ref cVar4, "N_O", 16);
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar4 ))
            {
                CLEAR_HELP();
            }
        }
        if (NOT (sub_164( CurrentPlayerChar(), 80 )))
        {
            CLEAR_CHAR_TASKS( CurrentPlayerChar() );
        }
        return 0;
        break;
    }
    SET_CAM_PROPAGATE( wardrobeCamera, 0 );
    SET_CAM_PROPAGATE( l_U145[uParam0], 1 );
    GET_GAME_TIMER( ref l_U189 );
    return 1;
}

void sub_19774(unknown uParam0)
{
    return g_U8275[uParam0];
}

void sub_19866(unknown uParam0)
{
    return g_U8302[uParam0];
}

string sub_19966(unknown uParam0)
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

void sub_20209(int iParam0)
{
    if (iParam0 < 0)
    {
        return 1;
        break;
    }
    return g_U8323[iParam0];
}

void sub_20393(int iParam0)
{
    if (iParam0 < 0)
    {
        return 1;
        break;
    }
    return g_U8328[iParam0];
}

// Possibly next_player_clothes
// Old: sub_21026
void next_player_clothes(unknown uParam0)
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

    GET_GAME_TIMER( ref l_U189 );
    if (NOT (sub_164( CurrentPlayerChar(), 80 )))
    {
        CLEAR_CHAR_TASKS( CurrentPlayerChar() );
    }
    switch ((uParam0^))
    {
        case 2:
        sub_3167( ref iVar3 );
        bVar5 = false;
        for ( I = iVar3 + 1; I <= (45 - 2); I++ )
        {
            if (NOT bVar5)
            {
                iVar3 = I;
                CurrentPlayerChar4( "  D iTorso = " );
                sub_1243( I );
                sub_1284();
                if ((NOT (sub_11552( iVar3 ))) AND (sub_18744( iVar3 )))
                {
                    sub_14069( iVar3 );
                    bVar5 = true;
                }
            }
        }
        if (NOT bVar5)
        {
            sub_18811( ref iVar6 );
            for ( I = 0; I <= (20 - 1); I++ )
            {
                if (NOT bVar5)
                {
                    iVar6 = I;
                    CurrentPlayerChar4( "  E iTorso = " );
                    sub_1243( I );
                    sub_1284();
                    if (sub_18954( iVar6 ))
                    {
                        sub_19061( (uParam0^), 5 );
                        l_U131 = 0;
                        while (NOT (sub_19306( 5 )))
                        {
                            WAIT( 0 );
                        }
                        sub_14035( iVar6 );
                        bVar5 = true;
                        l_U196 = l_U82;
                        l_U82 = 5;
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
                    CurrentPlayerChar4( "  F iTorso = " );
                    sub_1243( I );
                    sub_1284();
                    if ((NOT (sub_11552( iVar3 ))) AND (sub_18744( iVar3 )))
                    {
                        sub_14069( iVar3 );
                        bVar5 = true;
                    }
                }
            }
        }
        break;
        case 3:
        sub_4297( ref iVar7 );
        iVar7 = (iVar7 + 1) mod 26;
        while (NOT (sub_19774( iVar7 )))
        {
            iVar7 = (iVar7 + 1) mod 26;
            WAIT( 0 );
        }
        sub_14173( iVar7 );
        break;
        case 4:
        sub_5024( ref iVar8 );
        iVar8 = (iVar8 + 1) mod 20;
        while (NOT (sub_19866( iVar8 )))
        {
            iVar8 = (iVar8 + 1) mod 20;
            WAIT( 0 );
        }
        sub_14277( iVar8 );
        break;
        case 0:
        sub_5625( ref iVar9 );
        PRINTSTRING( "  * head: " );
        PRINTSTRING( sub_19966( iVar9 ) );
        iVar9 = ((iVar9 + 2) mod (4 + 1)) - 1;
        while (NOT (sub_20209( iVar9 )))
        {
            iVar9 = ((iVar9 + 2) mod (4 + 1)) - 1;
            WAIT( 0 );
        }
        PRINTSTRING( ", next: " );
        PRINTSTRING( sub_19966( iVar9 ) );
        PRINTNL();
        sub_14381( iVar9 );
        break;
        case 1:
        sub_5922( ref iVar10 );
        iVar10 = ((iVar10 + 2) mod (3 + 1)) - 1;
        while (NOT (sub_20393( iVar10 )))
        {
            iVar10 = ((iVar10 + 2) mod (3 + 1)) - 1;
            WAIT( 0 );
        }
        sub_14406( iVar10 );
        break;
        case 5:
        sub_18811( ref iVar11 );
        bVar13 = false;
        for ( J = iVar11 + 1; J <= (20 - 2); J++ )
        {
            if (NOT bVar13)
            {
                iVar11 = J;
                CurrentPlayerChar4( "  A next iOutfit = " );
                sub_1243( J );
                sub_1284();
                if (sub_18954( iVar11 ))
                {
                    sub_14035( iVar11 );
                    bVar13 = true;
                }
            }
        }
        if (NOT bVar13)
        {
            sub_3167( ref iVar14 );
            for ( J = 0; J <= 20; J++ )
            {
                if (NOT bVar13)
                {
                    iVar14 = J;
                    if ((NOT (sub_11552( iVar14 ))) AND (sub_18744( iVar14 )))
                    {
                        sub_19061( 5, l_U196 );
                        l_U131 = 0;
                        while (NOT (sub_19306( l_U196 )))
                        {
                            WAIT( 0 );
                        }
                        sub_14035( 19 );
                        sub_14069( iVar14 );
                        bVar13 = true;
                        l_U82 = l_U196;
                        l_U196 = 6;
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

void sub_22371()
{
    l_U82 = ((l_U82 + 6) - 1) mod 6;
    return l_U82;
}

void sub_22739()
{
    l_U82 = (l_U82 + 1) mod 6;
    return l_U82;
}

