void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 0;
    l_U108 = 0;
    l_U152 = 0;
    l_U155 = 0;
    l_U156 = 999999;
    l_U157 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_95();
    }
    WAIT( 0 );
    l_U115 = l_U289;
    if (DOES_CHAR_EXIST( l_U115 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U115 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U115, 1 );
        }
    }
    if (NOT g_U9275)
    {
        if (NOT (IS_CHAR_DEAD( l_U115 )))
        {
            GET_CHAR_COORDINATES( l_U115, ref l_U130._fU0, ref l_U130._fU4, ref l_U130._fU8 );
            g_U9275 = 1;
            l_U107 = 1;
        }
        else
        {
            l_U106 = 0;
        }
    }
    else
    {
        l_U106 = 0;
    }
    while (l_U106)
    {
        WAIT( 0 );
        if (sub_348())
        {
            switch (l_U104)
            {
                case 0:
                sub_634();
                break;
                case 1:
                sub_3537();
                break;
                default: break;
            }
        }
        else
        {
            l_U106 = 0;
        }
        sub_4048();
    }
    if (l_U107)
    {
        if (DOES_CHAR_EXIST( l_U115 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U115 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U115, 1 );
            }
        }
        g_U9275 = 0;
    }
    sub_95();
    return;
}

void sub_95()
{
    if (NOT (IS_CHAR_DEAD( l_U115 )))
    {
        CLEAR_CHAR_SECONDARY_TASK( l_U115 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115 );
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U122 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_348()
{
    if (DOES_CHAR_EXIST( l_U115 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U115 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U115 )))
            {
                if ((NOT sub_416()) AND (NOT g_U12379))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_416()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_634()
{
    l_U158[0][0] = "RANT_A_01";
    l_U158[0][1] = "RANT_A_02";
    l_U158[0][2] = "RANT_A_03";
    l_U158[0][3] = "RANT_A_04";
    l_U158[0][4] = "RANT_A_05";
    l_U158[0][5] = "RANT_A_06";
    l_U158[0][6] = "RANT_A_07";
    l_U158[0][7] = "RANT_A_08";
    l_U158[0][8] = "RANT_A_09";
    l_U158[0][9] = "RANT_A_10";
    l_U158[0][10] = "RANT_A_11";
    l_U158[0][11] = "RANT_A_12";
    l_U158[0][12] = "RANT_A_13";
    l_U158[0][13] = "RANT_A_14";
    l_U158[0][14] = "RANT_A_15";
    l_U158[0][15] = "RANT_A_16";
    l_U158[0][16] = "RANT_A_17";
    l_U158[0][17] = "RANT_A_18";
    l_U158[0][18] = "RANT_A_19";
    l_U158[0][19] = "RANT_A_20";
    l_U158[0][20] = "RANT_A_21";
    l_U158[0][21] = "RANT_A_22";
    l_U158[0][22] = "RANT_A_23";
    l_U158[0][23] = "RANT_A_24";
    l_U158[0][24] = "RANT_A_25";
    l_U158[1][0] = "RANT_B_01";
    l_U158[1][1] = "RANT_B_02";
    l_U158[1][2] = "RANT_B_03";
    l_U158[1][3] = "RANT_B_04";
    l_U158[1][4] = "RANT_B_05";
    l_U158[1][5] = "RANT_B_06";
    l_U158[1][6] = "RANT_B_07";
    l_U158[1][7] = "RANT_B_08";
    l_U158[1][8] = "RANT_B_09";
    l_U158[1][9] = "RANT_B_10";
    l_U158[1][10] = "RANT_B_11";
    l_U158[1][11] = "RANT_B_12";
    l_U158[1][12] = "RANT_B_13";
    l_U158[1][13] = "RANT_B_14";
    l_U158[1][14] = "RANT_B_15";
    l_U158[1][15] = "RANT_B_16";
    l_U158[1][16] = "RANT_B_17";
    l_U158[1][17] = "RANT_B_18";
    l_U158[1][18] = "RANT_B_19";
    l_U158[1][19] = "RANT_B_20";
    l_U158[1][20] = "RANT_B_21";
    l_U158[1][21] = "RANT_B_22";
    l_U158[1][22] = "RANT_B_23";
    l_U158[1][23] = "RANT_B_24";
    l_U158[1][24] = "RANT_B_25";
    l_U158[2][0] = "RANT_C_01";
    l_U158[2][1] = "RANT_C_02";
    l_U158[2][2] = "RANT_C_03";
    l_U158[2][3] = "RANT_C_04";
    l_U158[2][4] = "RANT_C_05";
    l_U158[2][5] = "RANT_C_06";
    l_U158[2][6] = "RANT_C_07";
    l_U158[2][7] = "RANT_C_08";
    l_U158[2][8] = "RANT_C_09";
    l_U158[2][9] = "RANT_C_10";
    l_U158[2][10] = "RANT_C_11";
    l_U158[2][11] = "RANT_C_12";
    l_U158[2][12] = "RANT_C_13";
    l_U158[2][13] = "RANT_C_14";
    l_U158[2][14] = "RANT_C_15";
    l_U158[2][15] = "RANT_C_16";
    l_U158[2][16] = "RANT_C_17";
    l_U158[2][17] = "RANT_C_18";
    l_U158[2][18] = "RANT_C_19";
    l_U158[2][19] = "RANT_C_20";
    l_U158[2][20] = "RANT_C_21";
    l_U158[2][21] = "RANT_C_22";
    l_U158[2][22] = "RANT_C_23";
    l_U158[2][23] = "RANT_C_24";
    l_U158[2][24] = "RANT_C_25";
    l_U158[3][0] = "RANT_D_01";
    l_U158[3][1] = "RANT_D_02";
    l_U158[3][2] = "RANT_D_03";
    l_U158[3][3] = "RANT_D_04";
    l_U158[3][4] = "RANT_D_05";
    l_U158[3][5] = "RANT_D_06";
    l_U158[3][6] = "RANT_D_07";
    l_U158[3][7] = "RANT_D_08";
    l_U158[3][8] = "RANT_D_09";
    l_U158[3][9] = "RANT_D_10";
    l_U158[3][10] = "RANT_D_11";
    l_U158[3][11] = "RANT_D_12";
    l_U158[3][12] = "RANT_D_13";
    l_U158[3][13] = "RANT_D_14";
    l_U158[3][14] = "RANT_D_15";
    l_U158[3][15] = "RANT_D_16";
    l_U158[3][16] = "RANT_D_17";
    l_U158[3][17] = "RANT_D_18";
    l_U158[3][18] = "RANT_D_19";
    l_U158[3][19] = "RANT_D_20";
    l_U158[3][20] = "RANT_D_21";
    l_U158[3][21] = "RANT_D_22";
    l_U158[3][22] = "RANT_D_23";
    l_U158[3][23] = "RANT_D_24";
    l_U158[3][24] = "RANT_D_25";
    l_U158[4][0] = "RANT_E_01";
    l_U158[4][1] = "RANT_E_02";
    l_U158[4][2] = "RANT_E_03";
    l_U158[4][3] = "RANT_E_04";
    l_U158[4][4] = "RANT_E_05";
    l_U158[4][5] = "RANT_E_06";
    l_U158[4][6] = "RANT_E_07";
    l_U158[4][7] = "RANT_E_08";
    l_U158[4][8] = "RANT_E_09";
    l_U158[4][9] = "RANT_E_10";
    l_U158[4][10] = "RANT_E_11";
    l_U158[4][11] = "RANT_E_12";
    l_U158[4][12] = "RANT_E_13";
    l_U158[4][13] = "RANT_E_14";
    l_U158[4][14] = "RANT_E_15";
    l_U158[4][15] = "RANT_E_16";
    l_U158[4][16] = "RANT_E_17";
    l_U158[4][17] = "RANT_E_18";
    l_U158[4][18] = "RANT_E_19";
    l_U158[4][19] = "RANT_E_20";
    l_U158[4][20] = "RANT_E_21";
    l_U158[4][21] = "RANT_E_22";
    l_U158[4][22] = "RANT_E_23";
    l_U158[4][23] = "RANT_E_24";
    l_U158[4][24] = "RANT_E_25";
    l_U104 = 1;
    return;
}

void sub_3537()
{
    if (NOT (l_U105 == 4))
    {
        if ((IS_PED_IN_COMBAT( l_U115 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U115, sub_3564(), 0 )))
        {
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U115, sub_3564(), 300, -1 );
            l_U105 = 4;
        }
    }
    switch (l_U105)
    {
        case 0:
        GET_CHAR_COORDINATES( l_U115, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
        GET_GAME_TIMER( ref l_U153 );
        l_U154 = l_U153 - l_U152;
        if (l_U154 >= 10000)
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U115, 1 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U155 );
            if (NOT (l_U155 == l_U156))
            {
                l_U157 = 0;
                l_U156 = l_U155;
                SAY_AMBIENT_SPEECH( l_U115, l_U158[l_U155][l_U157], 1, 1, 2 );
                l_U105 = 1;
            }
        }
        break;
        case 1:
        BLOCK_CHAR_AMBIENT_ANIMS( l_U115, 1 );
        if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U115 )))
        {
            l_U157++;
            if (l_U157 >= 25)
            {
                GET_GAME_TIMER( ref l_U152 );
                l_U105 = 0;
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U115, l_U158[l_U155][l_U157], 1, 1, 2 );
            }
        }
        break;
        case 5: break;
    }
    if ((l_U105 == 3) || ((l_U105 == 2) || (l_U105 == 1)))
    {
        ;
    }
    return;
}

void sub_3564()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4048()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U106 = 0;
    }
    return;
}

