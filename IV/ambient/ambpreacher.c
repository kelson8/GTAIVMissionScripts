void main()
{
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 1;
    l_U105 = 0;
    l_U106 = 0;
    l_U150 = 0;
    l_U153 = 0;
    l_U154 = 999999;
    l_U155 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_79();
    }
    WAIT( 0 );
    preacherPed = l_U287;
    if (DOES_CHAR_EXIST( preacherPed ))
    {
        if (NOT (IS_CHAR_DEAD( preacherPed )))
        {
            SET_CHAR_HEADING( preacherPed, 270 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( preacherPed, 1 );
        }
    }
    if (NOT g_U8673)
    {
        if (NOT (IS_CHAR_DEAD( preacherPed )))
        {
            GET_CHAR_COORDINATES( preacherPed, ref l_U128._fU0, ref l_U128._fU4, ref l_U128._fU8 );
            g_U8673 = 1;
            l_U105 = 1;
        }
        else
        {
            l_U104 = 0;
        }
    }
    else
    {
        l_U104 = 0;
    }
    while (l_U104)
    {
        WAIT( 0 );
        if (sub_349())
        {
            switch (l_U102)
            {
                case 0:
                // Preacher rants
                PreacherRants();

                break;
                case 1:
                sub_3371();
                break;
                default: break;
            }
        }
        else
        {
            l_U104 = 0;
        }
        sub_5483();
    }
    if (l_U105)
    {
        if (DOES_CHAR_EXIST( preacherPed ))
        {
            if (NOT (IS_CHAR_DEAD( preacherPed )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( preacherPed, 1 );
            }
        }
        g_U8673 = 0;
    }
    sub_79();
    return;
}

void sub_79()
{
    if (NOT (IS_CHAR_DEAD( preacherPed )))
    {
        CLEAR_CHAR_SECONDARY_TASK( preacherPed );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref preacherPed );
    REMOVE_BLIP( l_U120 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_349()
{
    if (DOES_CHAR_EXIST( preacherPed ))
    {
        if (NOT (IS_CHAR_INJURED( preacherPed )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( preacherPed )))
            {
                if (NOT g_U10978)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

// sub_468
void PreacherRants()
{
    l_U156[0][0] = "RANT_A_01";
    l_U156[0][1] = "RANT_A_02";
    l_U156[0][2] = "RANT_A_03";
    l_U156[0][3] = "RANT_A_04";
    l_U156[0][4] = "RANT_A_05";
    l_U156[0][5] = "RANT_A_06";
    l_U156[0][6] = "RANT_A_07";
    l_U156[0][7] = "RANT_A_08";
    l_U156[0][8] = "RANT_A_09";
    l_U156[0][9] = "RANT_A_10";
    l_U156[0][10] = "RANT_A_11";
    l_U156[0][11] = "RANT_A_12";
    l_U156[0][12] = "RANT_A_13";
    l_U156[0][13] = "RANT_A_14";
    l_U156[0][14] = "RANT_A_15";
    l_U156[0][15] = "RANT_A_16";
    l_U156[0][16] = "RANT_A_17";
    l_U156[0][17] = "RANT_A_18";
    l_U156[0][18] = "RANT_A_19";
    l_U156[0][19] = "RANT_A_20";
    l_U156[0][20] = "RANT_A_21";
    l_U156[0][21] = "RANT_A_22";
    l_U156[0][22] = "RANT_A_23";
    l_U156[0][23] = "RANT_A_24";
    l_U156[0][24] = "RANT_A_25";
    l_U156[1][0] = "RANT_B_01";
    l_U156[1][1] = "RANT_B_02";
    l_U156[1][2] = "RANT_B_03";
    l_U156[1][3] = "RANT_B_04";
    l_U156[1][4] = "RANT_B_05";
    l_U156[1][5] = "RANT_B_06";
    l_U156[1][6] = "RANT_B_07";
    l_U156[1][7] = "RANT_B_08";
    l_U156[1][8] = "RANT_B_09";
    l_U156[1][9] = "RANT_B_10";
    l_U156[1][10] = "RANT_B_11";
    l_U156[1][11] = "RANT_B_12";
    l_U156[1][12] = "RANT_B_13";
    l_U156[1][13] = "RANT_B_14";
    l_U156[1][14] = "RANT_B_15";
    l_U156[1][15] = "RANT_B_16";
    l_U156[1][16] = "RANT_B_17";
    l_U156[1][17] = "RANT_B_18";
    l_U156[1][18] = "RANT_B_19";
    l_U156[1][19] = "RANT_B_20";
    l_U156[1][20] = "RANT_B_21";
    l_U156[1][21] = "RANT_B_22";
    l_U156[1][22] = "RANT_B_23";
    l_U156[1][23] = "RANT_B_24";
    l_U156[1][24] = "RANT_B_25";
    l_U156[2][0] = "RANT_C_01";
    l_U156[2][1] = "RANT_C_02";
    l_U156[2][2] = "RANT_C_03";
    l_U156[2][3] = "RANT_C_04";
    l_U156[2][4] = "RANT_C_05";
    l_U156[2][5] = "RANT_C_06";
    l_U156[2][6] = "RANT_C_07";
    l_U156[2][7] = "RANT_C_08";
    l_U156[2][8] = "RANT_C_09";
    l_U156[2][9] = "RANT_C_10";
    l_U156[2][10] = "RANT_C_11";
    l_U156[2][11] = "RANT_C_12";
    l_U156[2][12] = "RANT_C_13";
    l_U156[2][13] = "RANT_C_14";
    l_U156[2][14] = "RANT_C_15";
    l_U156[2][15] = "RANT_C_16";
    l_U156[2][16] = "RANT_C_17";
    l_U156[2][17] = "RANT_C_18";
    l_U156[2][18] = "RANT_C_19";
    l_U156[2][19] = "RANT_C_20";
    l_U156[2][20] = "RANT_C_21";
    l_U156[2][21] = "RANT_C_22";
    l_U156[2][22] = "RANT_C_23";
    l_U156[2][23] = "RANT_C_24";
    l_U156[2][24] = "RANT_C_25";
    l_U156[3][0] = "RANT_D_01";
    l_U156[3][1] = "RANT_D_02";
    l_U156[3][2] = "RANT_D_03";
    l_U156[3][3] = "RANT_D_04";
    l_U156[3][4] = "RANT_D_05";
    l_U156[3][5] = "RANT_D_06";
    l_U156[3][6] = "RANT_D_07";
    l_U156[3][7] = "RANT_D_08";
    l_U156[3][8] = "RANT_D_09";
    l_U156[3][9] = "RANT_D_10";
    l_U156[3][10] = "RANT_D_11";
    l_U156[3][11] = "RANT_D_12";
    l_U156[3][12] = "RANT_D_13";
    l_U156[3][13] = "RANT_D_14";
    l_U156[3][14] = "RANT_D_15";
    l_U156[3][15] = "RANT_D_16";
    l_U156[3][16] = "RANT_D_17";
    l_U156[3][17] = "RANT_D_18";
    l_U156[3][18] = "RANT_D_19";
    l_U156[3][19] = "RANT_D_20";
    l_U156[3][20] = "RANT_D_21";
    l_U156[3][21] = "RANT_D_22";
    l_U156[3][22] = "RANT_D_23";
    l_U156[3][23] = "RANT_D_24";
    l_U156[3][24] = "RANT_D_25";
    l_U156[4][0] = "RANT_E_01";
    l_U156[4][1] = "RANT_E_02";
    l_U156[4][2] = "RANT_E_03";
    l_U156[4][3] = "RANT_E_04";
    l_U156[4][4] = "RANT_E_05";
    l_U156[4][5] = "RANT_E_06";
    l_U156[4][6] = "RANT_E_07";
    l_U156[4][7] = "RANT_E_08";
    l_U156[4][8] = "RANT_E_09";
    l_U156[4][9] = "RANT_E_10";
    l_U156[4][10] = "RANT_E_11";
    l_U156[4][11] = "RANT_E_12";
    l_U156[4][12] = "RANT_E_13";
    l_U156[4][13] = "RANT_E_14";
    l_U156[4][14] = "RANT_E_15";
    l_U156[4][15] = "RANT_E_16";
    l_U156[4][16] = "RANT_E_17";
    l_U156[4][17] = "RANT_E_18";
    l_U156[4][18] = "RANT_E_19";
    l_U156[4][19] = "RANT_E_20";
    l_U156[4][20] = "RANT_E_21";
    l_U156[4][21] = "RANT_E_22";
    l_U156[4][22] = "RANT_E_23";
    l_U156[4][23] = "RANT_E_24";
    l_U156[4][24] = "RANT_E_25";
    l_U102 = 1;
    return;
}

void sub_3371()
{
    unknown uVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT (l_U103 == 4))
    {
        if ((IS_PED_IN_COMBAT( preacherPed )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( preacherPed, sub_3398(), 0 )))
        {
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( preacherPed, sub_3398(), 300, -1 );
            l_U103 = 4;
        }
    }

    switch (l_U103)
    {
        case 0:
        GET_CHAR_COORDINATES( preacherPed, ref l_U131._fU0, ref l_U131._fU4, ref l_U131._fU8 );
        TASK_TURN_CHAR_TO_FACE_COORD( preacherPed, 584.00000000, 1403.59600000, 11.00000000 );

        GET_GAME_TIMER( ref currentGameTimer );
        newGameTimer = currentGameTimer - l_U150;
        if (newGameTimer >= 10000)
        {
            BLOCK_CHAR_AMBIENT_ANIMS( preacherPed, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U153 );
            if (NOT (l_U153 == l_U154))
            {
                l_U155 = 0;
                l_U154 = l_U153;
                SAY_AMBIENT_SPEECH( preacherPed, l_U156[l_U153][l_U155], 1, 1, 2 );
                l_U103 = 1;
            }
        }
        for ( I = 0; I <= 4; I++ )
        {
            sub_3740( I );
        }
        break;

        case 1:
        BLOCK_CHAR_AMBIENT_ANIMS( preacherPed, 1 );
        uVar2 = nil;
        GET_CLOSEST_CHAR( l_U131._fU0, l_U131._fU4, l_U131._fU8, 5.00000000, 1, 1, ref uVar2 );

        if ((NOT (IS_CHAR_DEAD( l_U114[0] ))) AND (DOES_CHAR_EXIST( l_U114[0] )))
        {
            if ((NOT (IS_CHAR_DEAD( preacherPed ))) AND (DOES_CHAR_EXIST( preacherPed )))
            {
                TASK_GO_TO_CHAR( preacherPed, l_U114[0], -1, 3.50000000 );
            }
        }

        else if ((NOT (IS_CHAR_DEAD( preacherPed ))) AND (DOES_CHAR_EXIST( preacherPed )))
        {
            TASK_TURN_CHAR_TO_FACE_COORD( preacherPed, 584.00000000, 1403.59600000, 11.00000000 );
        }

        if (NOT (IS_AMBIENT_SPEECH_PLAYING( preacherPed )))
        {
            l_U155++;
            if (l_U155 >= 25)
            {
                GET_GAME_TIMER( ref l_U150 );
                l_U103 = 0;
            }
            else
            {
                SAY_AMBIENT_SPEECH( preacherPed, l_U156[l_U153][l_U155], 1, 1, 2 );
            }
        }
        break;

        case 5: break;
    }

    if ((l_U103 == 3) || ((l_U103 == 2) || (l_U103 == 1)))
    {
        sub_4160( ref preacherPed );
    }
    return;
}

void sub_3398()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3740(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U114[uParam0] );
    l_U114[uParam0] = nil;
    l_U107[uParam0] = 0;
    return;
}

void sub_4160(unknown uParam0)
{
    int I;
    int iVar4;

    if (NOT l_U106)
    {
        for ( I = 0; I < 5; I++ )
        {
            l_U107[I] = 0;
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U114[I] );
            l_U114[I] = nil;
            if (DOES_BLIP_EXIST( l_U121[I] ))
            {
                REMOVE_BLIP( l_U121[I] );
            }
        }
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            switch (I)
            {
                case 0:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, 3.00000000, 0.00000000, ref l_U134[0]._fU0, ref l_U134[0]._fU4, ref l_U134[0]._fU8 );
                break;
                case 1:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), 2.00000000, 3.00000000, 0.00000000, ref l_U134[1]._fU0, ref l_U134[1]._fU4, ref l_U134[1]._fU8 );
                break;
                case 2:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), -2.00000000, 3.00000000, 0.00000000, ref l_U134[2]._fU0, ref l_U134[2]._fU4, ref l_U134[2]._fU8 );
                break;
                case 3:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), 4.00000000, 4.00000000, 0.00000000, ref l_U134[3]._fU0, ref l_U134[3]._fU4, ref l_U134[3]._fU8 );
                break;
                case 4:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), -4.00000000, 4.00000000, 0.00000000, ref l_U134[4]._fU0, ref l_U134[4]._fU4, ref l_U134[4]._fU8 );
                break;
                default:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, 4.00000000, 0.00000000, ref l_U134[0]._fU0, ref l_U134[0]._fU4, ref l_U134[0]._fU8 );
                break;
            }
        }
        l_U106 = 1;
    }
    else
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT l_U107[I])
            {
                if (l_U114[I] == nil)
                {
                    sub_4760( ref l_U114[I], I );
                }
                else
                {
                    sub_3740( I );
                }
            }
            else if (DOES_CHAR_EXIST( l_U114[I] ))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 128, ref iVar4 );
                if (iVar4 < 2)
                {
                    SAY_AMBIENT_SPEECH( l_U114[I], "HECKLE", 1, 1, 2 );
                }
                else if (iVar4 < 4)
                {
                    SAY_AMBIENT_SPEECH( l_U114[I], "GENERIC_FUCK_OFF", 1, 1, 2 );
                }
                if (IS_CHAR_INJURED( preacherPed ))
                {
                    SAY_AMBIENT_SPEECH( l_U114[I], "GANG_FIGHT_CHEER", 1, 1, 2 );
                    sub_3740( I );
                }
                if (IS_CHAR_INJURED( l_U114[I] ))
                {
                    sub_3740( I );
                }
                else if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( (uParam0^), l_U114[I], 5.00000000 + 1.00000000, 5.00000000 + 1.00000000, 5.00000000, 0 )))
                {
                    sub_3740( I );
                }
            }
            else
            {
                sub_3740( I );
            }
        }
    }
    return;
}

void sub_4760(unknown uParam0, unknown uParam1)
{
    GET_CHAR_COORDINATES( preacherPed, ref l_U131._fU0, ref l_U131._fU4, ref l_U131._fU8 );
    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 26 );
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 27 );
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 28 );
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 29 );
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 30 );
    END_CHAR_SEARCH_CRITERIA();
    (uParam0^) = nil;
    GET_CLOSEST_CHAR( l_U131._fU0, l_U131._fU4, l_U131._fU8, 5.00000000, 1, 0, uParam0 );
    if (NOT ((uParam0^) == nil))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            if (NOT (IS_PED_HOLDING_AN_OBJECT( (uParam0^) )))
            {
                SET_CHAR_AS_MISSION_CHAR( (uParam0^) );
                if ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND (DOES_CHAR_EXIST( (uParam0^) )))
                {
                    if ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND (DOES_CHAR_EXIST( preacherPed )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U127 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_GO_TO_CHAR( 0, preacherPed, -1, 4.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, preacherPed );
                        CLOSE_SEQUENCE_TASK( l_U127 );
                        TASK_PERFORM_SEQUENCE( (uParam0^), l_U127 );
                        CLEAR_SEQUENCE_TASK( l_U127 );
                    }
                }
                l_U107[uParam1] = 1;
                if (DOES_CHAR_EXIST( (uParam0^) ))
                {
                    ;
                }
            }
        }
    }
    return;
}

void sub_5483()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U104 = 0;
    }
    return;
}

