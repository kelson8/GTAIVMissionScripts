void main()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    boolean bVar11;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 1;
    l_U112 = 0;
    l_U113 = 1;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 1;
    l_U123 = l_U122;
    l_U124 = 0;
    l_U125 = 0;
    l_U126 = 0;
    l_U127 = 0;
    l_U128 = 0;
    l_U129 = 0;
    l_U130 = 0;
    l_U131 = 0;
    l_U135 = 0;
    l_U136 = 0;
    l_U137 = 0;
    l_U138 = 0;
    l_U139 = 0;
    l_U140 = 0;
    l_U141 = 0;
    l_U142 = 0;
    l_U143 = 0;
    l_U144 = 0;
    l_U145 = 0;
    l_U149 = 0.53500000;
    l_U153 = 0.00000000;
    l_U161 = 30.00000000;
    l_U162 = 40.00000000;
    l_U163 = 4.00000000;
    l_U164 = -4.00000000;
    l_U165 = 4.00000000;
    l_U166 = -89.00000000;
    l_U167 = 89.00000000;
    l_U170 = 0.00000000;
    l_U171 = 0.22000000;
    l_U174 = 0;
    l_U175 = 0;
    l_U177 = -1;
    l_U180 = 0;
    l_U181 = 0;
    l_U183 = 0;
    l_U184 = 0;
    l_U185 = 0;
    l_U186 = 0;
    l_U187 = 0;
    l_U188 = 0;
    l_U189 = 0;
    l_U190 = 0;
    l_U191 = 0;
    l_U193 = -1;
    l_U194 = 0;
    l_U195 = 0;
    l_U196 = 0;
    l_U308 = 1;
    l_U310 = nil;
    l_U311 = nil;
    l_U312 = nil;
    l_U334 = {0.00000000, 0.00000000, 0.11900000};
    l_U337 = {-8.00000000, 0.00000000, 0.00000000};
    l_U344 = -1;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_571();
    }
    sub_2626( ref l_U182 );
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U344 );
    sub_2666( "" );
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        sub_2804( 0, sub_1588(), "JOHNNY", 0 );
    }
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1588() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1588(), ref l_U343 );
            if (NOT (IS_CAR_DEAD( l_U343 )))
            {
                GET_DRIVER_OF_CAR( l_U343, ref l_U198 );
                if (l_U343 == g_U2687)
                {
                    if (DOES_CHAR_EXIST( l_U198 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            sub_2804( 1, l_U198, "CABBY", 0 );
                            SET_AMBIENT_VOICE_NAME( l_U198, "CABBY" );
                        }
                    }
                }
            }
        }
    }
    while (sub_3124())
    {
        if (NOT l_U145)
        {
            if (LOAD_ALL_PATH_NODES( 1 ))
            {
                if (NOT l_U126)
                {
                    l_U129 = 1;
                    l_U126 = 1;
                }
            }
        }
        if (NOT l_U122)
        {
            sub_3524();
        }
        if (NOT (IS_CHAR_INJURED( l_U198 )))
        {
            if ((sub_2254( l_U202 )) || (NOT sub_3622()))
            {
                if (NOT (l_U193 == -1))
                {
                    switch (l_U193)
                    {
                        case 0:
                        if (NOT g_U2673)
                        {
                            SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_WHERE_TO", 1, 1, 0 );
                            l_U193 = 20;
                        }
                        else if (NOT g_U2679)
                        {
                            if (g_U2688 < 2)
                            {
                                if (sub_3993( "TAX1_PICK", g_U2688, 1, ref l_U202, 2, 1 ))
                                {
                                    g_U2688++;
                                    l_U193 = 20;
                                }
                            }
                            else if (sub_4994( "TAX1_ARR", ref l_U202, 2, 1 ))
                            {
                                l_U193 = 20;
                            }
                        }
                        else if (g_U2689 < 2)
                        {
                            if (sub_3993( "TAX1_BETTER", g_U2689, 1, ref l_U202, 2, 1 ))
                            {
                                g_U2689++;
                                l_U193 = 20;
                            }
                        }
                        else if (sub_4994( "TAX1_ARR", ref l_U202, 2, 1 ))
                        {
                            l_U193 = 20;
                        };;;;
                        break;
                        case 1:
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            sub_5237( sub_1588() );
                            l_U193 = 2;
                        }
                        break;
                        case 2:
                        if (NOT sub_9627())
                        {
                            if (NOT g_U2673)
                            {
                                SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_BEGIN_JOURNEY", 1, 1, 0 );
                                l_U193 = 20;
                            }
                            else if (sub_4994( "TAX1_GO", ref l_U202, 2, 1 ))
                            {
                                l_U193 = 20;
                            }
                        }
                        break;
                        case 3:
                        if (NOT g_U2673)
                        {
                            SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_BANTER", 0, 0, 0 );
                            l_U193 = 20;
                        }
                        else
                        {
                            switch (g_U2690)
                            {
                                case 0:
                                if (sub_4994( "TAXI_BANT1", ref l_U202, 2, 1 ))
                                {
                                    l_U193 = 20;
                                    g_U2690++;
                                }
                                break;
                                case 1:
                                if (sub_4994( "TAXI_BANT2", ref l_U202, 2, 1 ))
                                {
                                    l_U193 = 20;
                                    g_U2690++;
                                }
                                break;
                                case 2:
                                if (sub_4994( "TAXI_BANT3", ref l_U202, 2, 1 ))
                                {
                                    l_U193 = 20;
                                    g_U2690++;
                                }
                                break;
                                case 3:
                                if (sub_4994( "TAXI_BANT4", ref l_U202, 2, 1 ))
                                {
                                    l_U193 = 20;
                                    g_U2690++;
                                }
                                break;
                                case 4:
                                if (sub_4994( "TAXI_BANT5", ref l_U202, 2, 1 ))
                                {
                                    l_U193 = 20;
                                    g_U2690++;
                                }
                                break;
                                default:
                                l_U193 = 20;
                                break;
                            }
                        }
                        break;
                        case 4:
                        if (NOT g_U2673)
                        {
                            SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_ARRIVE_AT_DEST", 1, 1, 0 );
                            l_U193 = 21;
                        }
                        else if (sub_4994( "TAX1_OUT", ref l_U202, 2, 1 ))
                        {
                            l_U193 = 21;
                        }
                        break;
                        case 5:
                        SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_CLOSE_AS_POSS", 1, 1, 0 );
                        l_U193 = 20;
                        break;
                        case 6:
                        SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_NO_MONEY", 1, 1, 0 );
                        l_U193 = 20;
                        break;
                        case 7:
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1588() );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1588(), 0 );
                            }
                            SAY_AMBIENT_SPEECH( sub_1588(), "TAXI_CHANGE_DEST", 1, 1, 0 );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1588(), 1 );
                            }
                            l_U193 = 8;
                        }
                        break;
                        case 8:
                        if (NOT sub_9627())
                        {
                            if (IS_PLAYER_PLAYING( sub_1532() ))
                            {
                                sub_5237( sub_1588() );
                                l_U193 = 9;
                            }
                        }
                        break;
                        case 9:
                        if (NOT sub_9627())
                        {
                            if (NOT g_U2673)
                            {
                                SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_CHANGE_DEST", 1, 1, 0 );
                                l_U193 = 20;
                            }
                            else if (sub_4994( "TAX1_GO", ref l_U202, 2, 1 ))
                            {
                                l_U193 = 20;
                            }
                        }
                        break;
                        case 10:
                        SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_RUN_AWAY", 1, 1, 0 );
                        l_U193 = 20;
                        break;
                        case 11:
                        SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_GET_OUT_EARLY", 1, 1, 0 );
                        l_U193 = 20;
                        break;
                        case 12:
                        if (NOT g_U2673)
                        {
                            SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_TRASHED", 1, 1, 0 );
                            l_U193 = 20;
                        }
                        break;
                        case 13:
                        if (NOT l_U141)
                        {
                            SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_AFFORD_PART_JOURNEY", 1, 1, 0 );
                            PRINT_HELP( "TX_H13" );
                            l_U141 = 1;
                        }
                        l_U193 = 20;
                        break;
                        case 14:
                        SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_TAKE_FIRST_CAB", 1, 1, 0 );
                        l_U193 = 20;
                        break;
                        case 15:
                        if (NOT g_U2673)
                        {
                            l_U193 = 16;
                        }
                        else if (sub_4994( "TAX1_RADIO", ref l_U202, 1, 1 ))
                        {
                            l_U193 = 16;
                        }
                        break;
                        case 16:
                        if (NOT sub_9627())
                        {
                            if ((l_U191 > 4000.00000000) AND (NOT IS_RADIO_RETUNING()))
                            {
                                I = GET_PLAYER_RADIO_STATION_INDEX();
                                if (IS_PLAYER_PLAYING( sub_1532() ))
                                {
                                    bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1588() );
                                    if (bVar11)
                                    {
                                        STOP_PED_SPEAKING( sub_1588(), 0 );
                                    }
                                    switch (I)
                                    {
                                        case 0:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_VIBE", 1, 1, 0 );
                                        break;
                                        case 1:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_LRR", 1, 1, 0 );
                                        break;
                                        case 2:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_JNR", 1, 1, 0 );
                                        break;
                                        case 3:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_MASSIVEB", 1, 1, 0 );
                                        break;
                                        case 4:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_K109", 1, 1, 0 );
                                        break;
                                        case 5:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_WKTT", 1, 1, 0 );
                                        break;
                                        case 6:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_LCHC", 1, 1, 0 );
                                        break;
                                        case 7:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_JOURNEY", 1, 1, 0 );
                                        break;
                                        case 8:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_FUSION", 1, 1, 0 );
                                        break;
                                        case 9:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_BEAT", 1, 1, 0 );
                                        break;
                                        case 10:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_BROKER", 1, 1, 0 );
                                        break;
                                        case 11:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_VLADIVOSTOK", 1, 1, 0 );
                                        break;
                                        case 12:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_PLR", 1, 1, 0 );
                                        break;
                                        case 13:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_SANJUAN", 1, 1, 0 );
                                        break;
                                        case 14:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_FRANCOIS", 1, 1, 0 );
                                        break;
                                        case 15:
                                        SAY_AMBIENT_SPEECH( sub_1588(), "RADIO_REQ_CLASSICS", 1, 1, 0 );
                                        break;
                                    }
                                    if (bVar11)
                                    {
                                        STOP_PED_SPEAKING( sub_1588(), 1 );
                                    }
                                }
                                if (g_U2673)
                                {
                                    l_U193 = 17;
                                }
                                else
                                {
                                    l_U193 = 20;
                                }
                            }
                        }
                        break;
                        case 17:
                        if (NOT sub_9627())
                        {
                            if (sub_4994( "TAX1_RESP", ref l_U202, 2, 1 ))
                            {
                                l_U193 = 20;
                            }
                        }
                        break;
                        case 18:
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1588() );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1588(), 0 );
                            }
                            SAY_AMBIENT_SPEECH( sub_1588(), "TAXI_STEP_ON_IT", 1, 1, 0 );
                            if (bVar11)
                            {
                                STOP_PED_SPEAKING( sub_1588(), 1 );
                            }
                            l_U193 = 19;
                        }
                        break;
                        case 19:
                        if (NOT sub_9627())
                        {
                            if (NOT g_U2673)
                            {
                                SAY_AMBIENT_SPEECH( l_U198, "TAXI_D_SPEED_UP", 1, 1, 0 );
                                l_U193 = 20;
                            }
                            else
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                switch (I)
                                {
                                    case 0:
                                    if (sub_3993( "TAX1_RESP", 1, 1, ref l_U202, 2, 1 ))
                                    {
                                        l_U193 = 20;
                                    }
                                    break;
                                    case 1:
                                    if (sub_3993( "TAX1_RESP", 5, 1, ref l_U202, 2, 1 ))
                                    {
                                        l_U193 = 20;
                                    }
                                    break;
                                }
                            }
                        }
                        break;
                        case 21:
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            if (NOT sub_9627())
                            {
                                bVar11 = IS_AMBIENT_SPEECH_DISABLED( sub_1588() );
                                if (bVar11)
                                {
                                    STOP_PED_SPEAKING( sub_1588(), 0 );
                                }
                                SAY_AMBIENT_SPEECH( sub_1588(), "THANKS", 1, 1, 0 );
                                if (bVar11)
                                {
                                    STOP_PED_SPEAKING( sub_1588(), 1 );
                                }
                                l_U193 = 20;
                            }
                        }
                        break;
                        case 20:
                        if (NOT sub_9627())
                        {
                            l_U193 = -1;
                        }
                        break;
                    }
                }
            }
            else
            {
                l_U193 = -1;
            }
        }
        switch (l_U174)
        {
            case 0:
            g_U2678 = 0;
            if (IS_PLAYER_PLAYING( sub_1532() ))
            {
                BLOCK_PED_WEAPON_SWITCHING( sub_1588(), 1 );
                GET_CHAR_COORDINATES( sub_1588(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                l_U172 = GET_MAP_AREA_FROM_COORDS( uVar8 );
                l_U173 = l_U172;
            }
            g_U2673 = 0;
            if (sub_12739( l_U343 ))
            {
                g_U2673 = 1;
            }
            if (NOT g_U2673)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_1532(), 0 ))
                {
                    l_U114 = 1;
                    l_U178 = 5;
                    sub_12827( 3 );
                    break;
                }
            }
            if (l_U113)
            {
                l_U309 = GET_TXD( "blips" );
            }
            if (IS_VEH_DRIVEABLE( l_U343 ))
            {
                GET_CAR_COORDINATES( l_U343, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            }
            if (IS_CAR_MODEL( l_U343, -956048545 ))
            {
                l_U319 = {0.01000000, 0.51500000, 0.33300000};
                l_U331 = {-0.52000000, -1.00000000, 0.50000000};
                l_U164 = -12.00000000;
                l_U165 = 35.00000000;
                l_U166 = -130.00000000;
                l_U167 = 130.00000000;
            }
            if (IS_CAR_MODEL( l_U343, 1208856469 ))
            {
                l_U319 = {0.02400000, 0.69600000, 0.29200000};
                l_U331 = {-0.52000000, -0.99500000, 0.48000000};
                l_U164 = -12.00000000;
                l_U165 = 32.00000000;
                l_U166 = -130.00000000;
                l_U167 = 130.00000000;
            }
            if (IS_CAR_MODEL( l_U343, 1884962369 ))
            {
                l_U319 = {0.05700000, 0.84900000, 0.37000000};
                l_U331 = {-0.51100000, -0.81699990, 0.60200000};
                l_U164 = -12.00000000;
                l_U165 = 36.00000000;
                l_U166 = -130.00000000;
                l_U167 = 130.00000000;
            }
            if (sub_12739( l_U343 ))
            {
                if (IS_CAR_MODEL( l_U343, -1932515764 ))
                {
                    l_U319 = {0.00000000, 0.40300000, 0.33300000};
                    l_U331 = {-0.52000000, -1.03000000, 0.54000000};
                    l_U164 = -12.00000000;
                    l_U165 = 32.00000000;
                    l_U166 = -130.00000000;
                    l_U167 = 130.00000000;
                }
                else
                {
                    l_U319 = {0.00000000, 0.63300000, 0.51300000};
                    l_U331 = {-0.52000000, -0.93000000, 0.75200000};
                    l_U164 = -12.00000000;
                    l_U165 = 35.00000000;
                    l_U166 = -130.00000000;
                    l_U167 = 130.00000000;
                }
            }
            l_U162 = 40.00000000;
            l_U325 = {0.00000000, -1.51600000, 0.33500000};
            l_U328 = {0.00000000, -1.03200000, 0.30400000};
            if (NOT (IS_CHAR_INJURED( l_U198 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U198, 48, ref l_U200 );
                if (l_U200 == 7)
                {
                    if (IS_VEH_DRIVEABLE( l_U343 ))
                    {
                        TASK_CAR_TEMP_ACTION( l_U198, l_U343, 6, 15000 );
                    }
                }
            }
            for ( I = 0; I < 3; I++ )
            {
                if (NOT (IS_CAR_DEAD( l_U343 )))
                {
                    if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U343, I )))
                    {
                        GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U343, I, ref l_U199 );
                        if (NOT (IS_CHAR_INJURED( l_U199 )))
                        {
                            if ((NOT (l_U199 == sub_1588())) AND (NOT (IS_GROUP_MEMBER( l_U199, sub_1362() ))))
                            {
                                TASK_LEAVE_CAR_IMMEDIATELY( l_U199, l_U343 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U198 )))
            {
                FORCE_FULL_VOICE( l_U198 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U198, 0 );
                GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref I );
                SET_CHAR_MONEY( l_U198, I );
                CLEAR_CHAR_TASKS( l_U198 );
                CLEAR_CHAR_SECONDARY_TASK( l_U198 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U198, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U198, 1 );
                if (IS_VEH_DRIVEABLE( l_U343 ))
                {
                    TASK_CAR_TEMP_ACTION( l_U198, l_U343, 6, 99999999 );
                    SET_CAR_HEALTH( l_U343, 3000 );
                    SET_ENGINE_HEALTH( l_U343, 3000 );
                    SET_PETROL_TANK_HEALTH( l_U343, 3000 );
                }
                if (NOT (IS_PED_A_MISSION_PED( l_U198 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U198 );
                }
            }
            PRIORITIZE_STREAMING_REQUEST();
            REQUEST_ANIMS( "amb@taxi" );
            PRIORITIZE_STREAMING_REQUEST();
            REQUEST_MODEL( 2120484425 );
            while ((NOT (HAS_MODEL_LOADED( 2120484425 ))) || (NOT (HAVE_ANIMS_LOADED( "amb@taxi" ))))
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            while ((TIMERA() < 5000) AND (sub_14115()))
            {
                WAIT( 0 );
            }
            l_U154[0] = 0.27000000;
            l_U154[1] = 0.34700000;
            l_U154[2] = 0.43400000;
            l_U154[3] = 0.52100000;
            l_U154[4] = 0.60500000;
            STORE_SCORE( sub_1532(), ref l_U180 );
            if (g_U2673)
            {
                l_U170 = 0.00000000;
            }
            else
            {
                l_U170 = 2.00000000;
            }
            if (NOT (IS_CHAR_INJURED( l_U198 )))
            {
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U198, "taxi_driver_chat_in", "amb@taxi", 1000.00000000, 0, 0, 0, 1, -1 );
            }
            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U344 );
            sub_14500();
            l_U103 = 1;
            l_U110 = 0;
            l_U127 = 0;
            l_U128 = 0;
            if (DOES_GROUP_EXIST( sub_1362() ))
            {
                GET_GROUP_SIZE( sub_1362(), ref iVar3, ref I );
                if (I > 0)
                {
                    l_U127 = 1;
                }
            }
            l_U103 = 1;
            g_U2675 = 0;
            SETTIMERA( 0 );
            sub_12827( 1 );
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U198 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U198, 1 );
                BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 1 );
            }
            switch (l_U175)
            {
                case 0:
                sub_19381();
                if (IS_VEH_DRIVEABLE( l_U343 ))
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U197 )))
                    {
                        CREATE_OBJECT( 2120484425, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref l_U197, 1 );
                        ATTACH_OBJECT_TO_CAR( l_U197, l_U343, 0, l_U319, 0.00000000, 0.00000000, 0.00000000 );
                        LOCK_CAR_DOORS( l_U343, 4 );
                        SET_TAXI_LIGHTS( l_U343, 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U343 ))
                {
                    if (DOES_OBJECT_EXIST( l_U197 ))
                    {
                        GET_KEY_FOR_CAR_IN_ROOM( l_U343, ref l_U195 );
                        if (NOT (l_U195 == 0))
                        {
                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U197, l_U195 );
                        }
                    }
                }
                if (NOT (DOES_CAM_EXIST( l_U146 )))
                {
                    CREATE_CAM( 14, ref l_U146 );
                }
                if (DOES_OBJECT_EXIST( l_U197 ))
                {
                    ATTACH_CAM_TO_OBJECT( l_U146, l_U197 );
                    SET_CAM_ATTACH_OFFSET( l_U146, l_U325._fU0, l_U325._fU4, l_U325._fU8 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U146, 1 );
                }
                sub_30833( l_U343, ref l_U146, l_U337 );
                SET_CAM_FOV( l_U146, l_U161 );
                SET_CAM_ACTIVE( l_U146, 1 );
                SET_CAM_PROPAGATE( l_U146, 1 );
                SET_INTERP_FROM_GAME_TO_SCRIPT( 1, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_PTFX_CAM_INSIDE_VEHICLE( 1 );
                SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
                if (IS_PLAYER_PLAYING( sub_1532() ))
                {
                    SET_PLAYER_CONTROL( sub_1532(), 0 );
                }
                GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U177 );
                while (l_U177 == -1)
                {
                    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U177 );
                    if (l_U177 == -1)
                    {
                        WAIT( 0 );
                    }
                }
                if (l_U111)
                {
                    SET_TEXT_RENDER_ID( l_U177 );
                    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                }
                l_U141 = 0;
                l_U196 = 0;
                l_U103 = 1;
                SETTIMERA( 0 );
                l_U175++;
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U198 )))
                {
                    switch (l_U196)
                    {
                        case 0:
                        if ((NOT (IS_CHAR_PLAYING_ANIM( l_U198, "amb@taxi", "taxi_driver_chat_out" ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( l_U198, "amb@taxi", "taxi_driver_chat" ))) AND (IS_CHAR_PLAYING_ANIM( l_U198, "amb@taxi", "taxi_driver_chat_in" ))))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U198, "amb@taxi", "taxi_driver_chat_in", ref fVar7 );
                            if (fVar7 > 0.99000000)
                            {
                                l_U193 = 0;
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U198, "taxi_driver_chat", "amb@taxi", 1000.00000000, 0, 0, 0, 1, -1 );
                                SETTIMERA( 0 );
                                l_U196++;
                            }
                        }
                        break;
                        case 1:
                        if ((NOT (IS_CHAR_PLAYING_ANIM( l_U198, "amb@taxi", "taxi_driver_chat_out" ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( l_U198, "amb@taxi", "taxi_driver_chat_in" ))) AND (IS_CHAR_PLAYING_ANIM( l_U198, "amb@taxi", "taxi_driver_chat" ))))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U198, "amb@taxi", "taxi_driver_chat", ref fVar7 );
                            if (fVar7 > 0.99000000)
                            {
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U198, "taxi_driver_chat_out", "amb@taxi", 1000.00000000, 0, 0, 0, 0, -1 );
                                if (l_U194 == 0)
                                {
                                    l_U194++;
                                }
                                l_U196++;
                            }
                        }
                        break;
                    }
                }
                if (l_U194 == 0)
                {
                    if (TIMERA() > 5000)
                    {
                        l_U194 = 1;
                    }
                }
                if (l_U194 == 1)
                {
                    if (NOT (DOES_CAM_EXIST( l_U147 )))
                    {
                        CREATE_CAM( 14, ref l_U147 );
                        ATTACH_CAM_TO_OBJECT( l_U147, l_U197 );
                        SET_CAM_ATTACH_OFFSET( l_U147, l_U328._fU0, l_U328._fU4, l_U328._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U147, 1 );
                        sub_30833( l_U343, ref l_U147, l_U337 );
                        SET_CAM_FOV( l_U147, l_U161 );
                    }
                    else
                    {
                        sub_30833( l_U343, ref l_U147, l_U337 );
                        SET_CAM_FOV( l_U147, l_U161 );
                        if (sub_32103( ref l_U146, ref l_U147, 2000 ))
                        {
                            l_U325 = {l_U328};
                            DESTROY_CAM( l_U147 );
                            SET_CAM_ACTIVE( l_U146, 1 );
                            SET_CAM_PROPAGATE( l_U146, 1 );
                            l_U194++;
                        }
                    }
                }
                if (DOES_CAM_EXIST( l_U146 ))
                {
                    if (DOES_OBJECT_EXIST( l_U197 ))
                    {
                        ATTACH_CAM_TO_OBJECT( l_U146, l_U197 );
                        SET_CAM_ATTACH_OFFSET( l_U146, l_U325._fU0, l_U325._fU4, l_U325._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U146, 1 );
                        sub_30833( l_U343, ref l_U146, l_U337 );
                        SET_CAM_FOV( l_U146, l_U161 );
                    }
                }
                if (NOT sub_32559())
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (l_U117)
                        {
                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H08" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                PRINT_HELP_FOREVER( "TX_H08" );
                            }
                        }
                        else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H04" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP_FOREVER( "TX_H04" );
                        }
                    }
                }
                else
                {
                    sub_588();
                }
                sub_32763( 0 );
                sub_19381();
                sub_33749();
                if (NOT l_U103)
                {
                    if ((NOT sub_32559()) AND ((NOT l_U107) AND (IS_CONTROL_PRESSED( 2, 77 ))))
                    {
                        if (l_U183 > 0)
                        {
                            l_U103 = 1;
                            if (IS_SCORE_GREATER( sub_1532(), (FLOOR( l_U170 )) - 1 ))
                            {
                                sub_588();
                                if (NOT (IS_CHAR_INJURED( l_U198 )))
                                {
                                    l_U193 = 1;
                                }
                                l_U109 = 0;
                                g_U2678 = 0;
                                l_U110 = 0;
                                l_U108 = 0;
                                sub_34631( ref l_U208[l_U176]._fU0, ref l_U313, ref l_U150 );
                                if (DOES_BLIP_EXIST( l_U101 ))
                                {
                                    if (l_U130)
                                    {
                                        SET_BLIP_AS_SHORT_RANGE( l_U101, 1 );
                                        l_U130 = 0;
                                    }
                                }
                                l_U101 = l_U208[l_U176]._fU0;
                                if (DOES_BLIP_EXIST( l_U101 ))
                                {
                                    if (IS_BLIP_SHORT_RANGE( l_U101 ))
                                    {
                                        SET_BLIP_AS_SHORT_RANGE( l_U101, 0 );
                                        l_U130 = 1;
                                    }
                                }
                                if (NOT (IS_CHAR_INJURED( l_U198 )))
                                {
                                    if (IS_VEH_DRIVEABLE( l_U343 ))
                                    {
                                        CLOSE_ALL_CAR_DOORS( l_U343 );
                                        CLEAR_CHAR_SECONDARY_TASK( l_U198 );
                                        sub_37839( ref l_U198, ref l_U343, l_U313 );
                                    }
                                }
                                sub_32763( 1 );
                                l_U181 = 0;
                                if (g_U2673)
                                {
                                    l_U170 = 0.00000000;
                                }
                                else
                                {
                                    l_U170 = 2.00000000;
                                }
                                l_U171 = 0.22000000;
                                SETTIMERA( 0 );
                                if (NOT (IS_CHAR_INJURED( l_U198 )))
                                {
                                    CLEAR_CHAR_SECONDARY_TASK( l_U198 );
                                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U198, "Taxi_driver_Meter_Press", "amb@taxi", 8.00000000, 0, 0, 0, 0, -1 );
                                }
                                if (IS_VEH_DRIVEABLE( l_U343 ))
                                {
                                    LOCK_CAR_DOORS( l_U343, 4 );
                                }
                                if (IS_PLAYER_PLAYING( sub_1532() ))
                                {
                                    SET_PLAYER_CONTROL( sub_1532(), 1 );
                                    SET_PLAYER_CAN_DO_DRIVE_BY( sub_1532(), 1 );
                                }
                                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
                                l_U190 = 60000;
                                l_U191 = 30000;
                                if (l_U122)
                                {
                                    sub_38202();
                                }
                                l_U325 = {l_U328};
                                if (DOES_CAM_EXIST( l_U147 ))
                                {
                                    DESTROY_CAM( l_U147 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U198 )))
                                {
                                    BLOCK_CHAR_GESTURE_ANIMS( l_U198, 0 );
                                    BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 0 );
                                }
                                sub_12827( 2 );
                                break;
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U198 )))
                            {
                                BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 0 );
                            }
                            l_U178 = 1;
                            sub_12827( 3 );
                            break;;
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 0 );
                        }
                        l_U178 = 2;
                        sub_12827( 3 );
                        break;;
                    }
                }
                if (NOT l_U103)
                {
                    if ((NOT sub_32559()) AND (IS_CONTROL_PRESSED( 2, 43 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( l_U198 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 0 );
                        }
                        l_U103 = 1;
                        l_U178 = 2;
                        sub_12827( 3 );
                        break;
                    }
                }
                break;
            }
            break;
            case 2:
            if (l_U144)
            {
                if (LOAD_ALL_PATH_NODES( 1 ))
                {
                    sub_34631( ref l_U101, ref l_U313, ref l_U150 );
                    if (NOT l_U144)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U343 ))
                            {
                                if (IS_CHAR_IN_CAR( l_U198, l_U343 ))
                                {
                                    if ((NOT l_U143) AND (g_U2678))
                                    {
                                        CLEAR_CHAR_TASKS( l_U198 );
                                        sub_38720( ref l_U198, ref l_U343, l_U313 );
                                    }
                                    else
                                    {
                                        CLEAR_CHAR_TASKS( l_U198 );
                                        sub_37839( ref l_U198, ref l_U343, l_U313 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            sub_38807();
            if (sub_32559())
            {
                sub_588();
            }
            else if ((l_U193 == 3) || (l_U193 == -1))
            {
                sub_40847();
            }
            if (l_U135)
            {
                if (DOES_BLIP_EXIST( l_U101 ))
                {
                    SET_ROUTE( l_U101, 1 );
                }
                l_U135 = 0;
            }
            if (l_U104)
            {
                uVar8 = {l_U313};
                uVar8._fU8 += 10.00000000;
                LINE( l_U313._fU0, l_U313._fU4, l_U313._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
            }
            sub_19381();
            GET_FRAME_TIME( ref l_U152 );
            l_U181 += ROUND( l_U152 * 1000.00000000 );
            l_U190 += ROUND( l_U152 * 1000.00000000 );
            l_U191 += ROUND( l_U152 * 1000.00000000 );
            if (NOT l_U136)
            {
                if (g_U10935 == 9)
                {
                    l_U170 += 5.00000000;
                    l_U136 = 1;
                }
            }
            if (l_U193 == -1)
            {
                if (NOT g_U2673)
                {
                    if (l_U190 > 120000)
                    {
                        l_U193 = 3;
                        l_U190 = 0;
                    }
                }
                else if (NOT l_U121)
                {
                    if (l_U190 > 65000)
                    {
                        l_U193 = 3;
                        l_U190 = 0;
                        l_U121 = 1;
                    }
                }
            }
            if (NOT l_U108)
            {
                if ((IS_CONTROL_PRESSED( 2, 53 )) || (IS_CONTROL_PRESSED( 2, 52 )))
                {
                    if (NOT sub_32559())
                    {
                        if (l_U191 > 30000)
                        {
                            l_U193 = 15;
                        }
                        l_U191 = 0;
                    }
                }
            }
            if (NOT g_U2673)
            {
                if (l_U181 > 5000)
                {
                    l_U170 += l_U171;
                    l_U181 = 0;
                }
            }
            else
            {
                l_U170 = 0.00000000;
            }
            if (NOT g_U2673)
            {
                if (IS_PLAYER_PLAYING( sub_1532() ))
                {
                    GET_CHAR_COORDINATES( sub_1588(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                }
                GET_DISTANCE_BETWEEN_COORDS_2D( uVar8._fU0, uVar8._fU4, l_U322._fU0, l_U322._fU4, ref fVar7 );
                if (fVar7 > 50.00000000)
                {
                    INCREMENT_FLOAT_STAT_NO_MESSAGE( 86, fVar7 );
                    l_U170 += l_U171;
                    l_U181 = 0;
                    l_U322 = {uVar8};
                }
            }
            else
            {
                l_U170 = 0.00000000;
            }
            if (NOT (IS_SCORE_GREATER( sub_1532(), (FLOOR( l_U170 )) - 1 )))
            {
                STORE_SCORE( sub_1532(), ref I );
                l_U170 = TO_FLOAT( I );
                ADD_SCORE( sub_1532(), I * -1 );
                INCREMENT_INT_STAT_NO_MESSAGE( 98, I );
                if (NOT (IS_CHAR_INJURED( l_U198 )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                    SET_CHAR_MONEY( l_U198, I + iVar3 );
                }
                l_U116 = 1;
                l_U178 = 1;
                sub_12827( 3 );
                break;
            }
            if (IS_VEH_DRIVEABLE( l_U343 ))
            {
                if (DOES_GROUP_EXIST( sub_1362() ))
                {
                    GET_GROUP_SIZE( sub_1362(), ref iVar3, ref I );
                    if (I > 0)
                    {
                        GET_GROUP_MEMBER( sub_1362(), 0, ref l_U199 );
                        if (NOT (IS_CHAR_INJURED( l_U199 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U199, l_U343 )))
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U199 )))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 1 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 1 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 2 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 2 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 0 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 0 );
                                    };;;
                                }
                            }
                        }
                        if (I > 1)
                        {
                            GET_GROUP_MEMBER( sub_1362(), 1, ref l_U199 );
                            if (NOT (IS_CHAR_INJURED( l_U199 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U199, l_U343 )))
                                {
                                    if (NOT (IS_CHAR_ON_SCREEN( l_U199 )))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 1 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 1 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 2 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 2 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 0 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 0 );
                                        };;;
                                    }
                                }
                            }
                        }
                        CLOSE_ALL_CAR_DOORS( l_U343 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U198 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U198, 49, ref l_U200 );
                if (l_U200 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U198, 48, ref l_U200 );
                    if ((TIMERA() > 2000) || (l_U200 == 7))
                    {
                        if (IS_VEH_DRIVEABLE( l_U343 ))
                        {
                            if (LOCATE_CAR_2D( l_U343, l_U313._fU0, l_U313._fU4, 5.00000000, 5.00000000, 0 ))
                            {
                                ADD_SCORE( sub_1532(), (FLOOR( l_U170 )) * -1 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( l_U170 ) );
                                if (NOT (IS_CHAR_INJURED( l_U198 )))
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                                    SET_CHAR_MONEY( l_U198, (FLOOR( l_U170 )) + iVar3 );
                                }
                                l_U116 = 1;
                                l_U178 = 0;
                                sub_12827( 3 );
                                break;
                            }
                            else if (IS_CHAR_IN_CAR( l_U198, l_U343 ))
                            {
                                if ((NOT l_U143) AND (g_U2678))
                                {
                                    CLEAR_CHAR_TASKS( l_U198 );
                                    sub_38720( ref l_U198, ref l_U343, l_U313 );
                                }
                                else
                                {
                                    CLEAR_CHAR_TASKS( l_U198 );
                                    sub_37839( ref l_U198, ref l_U343, l_U313 );
                                }
                            }
                        }
                    }
                }
                else if (NOT l_U143)
                {
                    if (g_U10935 == 9)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            CLEAR_CHAR_TASKS( l_U198 );
                            l_U143 = 1;
                        }
                    }
                }
                else if (NOT (g_U10935 == 9))
                {
                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                    {
                        CLEAR_CHAR_TASKS( l_U198 );
                        l_U143 = 0;
                    }
                }
                if (g_U2675)
                {
                    ADD_SCORE( sub_1532(), (FLOOR( l_U170 )) * -1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( l_U170 ) );
                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                        SET_CHAR_MONEY( l_U198, (FLOOR( l_U170 )) + iVar3 );
                    }
                    l_U116 = 1;
                    l_U178 = 0;
                    g_U2675 = 0;
                    sub_12827( 3 );
                    break;
                }
                if (NOT (IS_CAR_DEAD( l_U343 )))
                {
                    if (NOT (IS_CAR_STOPPED_AT_TRAFFIC_LIGHTS( l_U343 )))
                    {
                        if (CHECK_STUCK_TIMER( l_U343, 3, 3000 ))
                        {
                            if (NOT (CHECK_STUCK_TIMER( l_U343, 0, 3000 )))
                            {
                                CLEAR_CHAR_TASKS( l_U198 );
                                TASK_CAR_TEMP_ACTION( l_U198, l_U343, 3, 2000 );
                                SETTIMERA( 0 );
                            }
                        }
                    }
                    if ((NOT (IS_VEH_DRIVEABLE( l_U343 ))) || ((IS_CAR_ON_FIRE( l_U343 )) || (CHECK_STUCK_TIMER( l_U343, 0, 3000 ))))
                    {
                        l_U178 = 3;
                        sub_12827( 3 );
                    }
                    if (CHECK_STUCK_TIMER( l_U343, 1, 3000 ))
                    {
                        l_U178 = 3;
                        sub_12827( 3 );
                    }
                    if (NOT g_U2673)
                    {
                        if (NOT l_U115)
                        {
                            if (IS_PLAYER_PLAYING( sub_1532() ))
                            {
                                if (IS_CHAR_SHOOTING( sub_1588() ))
                                {
                                    l_U114 = 1;
                                    l_U178 = 5;
                                    sub_12827( 3 );
                                }
                            }
                        }
                    }
                }
                if (NOT l_U110)
                {
                    if (IS_VEH_DRIVEABLE( l_U343 ))
                    {
                        if (LOCATE_CAR_2D( l_U343, l_U313._fU0, l_U313._fU4, 15.00000000, 15.00000000, 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U198 );
                            sub_37839( ref l_U198, ref l_U343, l_U313 );
                            l_U110 = 1;
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U343 ))
                {
                    if (NOT g_U2678)
                    {
                        if (LOCATE_CAR_3D( l_U343, l_U340._fU0, l_U340._fU4, l_U340._fU8, 25.00000000, 25.00000000, 5.00000000, 0 ))
                        {
                            ADD_SCORE( sub_1532(), (FLOOR( l_U170 )) * -1 );
                            INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( l_U170 ) );
                            if (NOT (IS_CHAR_INJURED( l_U198 )))
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                                SET_CHAR_MONEY( l_U198, (FLOOR( l_U170 )) + iVar3 );
                            }
                            l_U116 = 1;
                            l_U178 = 0;
                            sub_12827( 3 );
                            break;
                        }
                    }
                    else if (LOCATE_CAR_3D( l_U343, l_U340._fU0, l_U340._fU4, l_U340._fU8, 50.00000000, 50.00000000, 5.00000000, 0 ))
                    {
                        ADD_SCORE( sub_1532(), (FLOOR( l_U170 )) * -1 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( l_U170 ) );
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                            SET_CHAR_MONEY( l_U198, (FLOOR( l_U170 )) + iVar3 );
                        }
                        l_U116 = 1;
                        l_U178 = 0;
                        sub_12827( 3 );
                        break;
                    }
                }
            }
            if (NOT (IS_PED_DOING_DRIVEBY( sub_1588() )))
            {
                if (NOT l_U103)
                {
                    if (NOT l_U108)
                    {
                        if ((NOT sub_32559()) AND (sub_44535()))
                        {
                            if ((sub_33840( 0 )) || (sub_33759( 0 )))
                            {
                                SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
                                SET_PLAYER_CAN_DO_DRIVE_BY( sub_1532(), 0 );
                                SET_PLAYER_CONTROL( sub_1532(), 0 );
                                if (DOES_CAM_EXIST( l_U146 ))
                                {
                                    DESTROY_CAM( l_U146 );
                                }
                                CREATE_CAM( 14, ref l_U146 );
                                if (DOES_OBJECT_EXIST( l_U197 ))
                                {
                                    ATTACH_CAM_TO_OBJECT( l_U146, l_U197 );
                                    SET_CAM_ATTACH_OFFSET( l_U146, l_U325._fU0, l_U325._fU4, l_U325._fU8 );
                                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U146, 1 );
                                }
                                sub_30833( l_U343, ref l_U146, l_U337 );
                                SET_CAM_FOV( l_U146, l_U161 );
                                SET_CAM_ACTIVE( l_U146, 1 );
                                SET_CAM_PROPAGATE( l_U146, 1 );
                                SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_PTFX_CAM_INSIDE_VEHICLE( 1 );
                                if (NOT (IS_CHAR_INJURED( l_U198 )))
                                {
                                    BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 1 );
                                }
                                l_U108 = 1;
                                l_U103 = 1;
                            }
                        }
                    }
                }
                if (l_U108)
                {
                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                    {
                        BLOCK_CHAR_GESTURE_ANIMS( l_U198, 1 );
                        BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 1 );
                    }
                    if (DOES_CAM_EXIST( l_U146 ))
                    {
                        if (DOES_OBJECT_EXIST( l_U197 ))
                        {
                            sub_30833( l_U343, ref l_U146, l_U337 );
                        }
                    }
                    if (NOT (IS_CONTROL_PRESSED( 2, 78 )))
                    {
                        if (NOT sub_32559())
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H06" )))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                    PRINT_HELP_FOREVER( "TX_H06" );
                                }
                            }
                        }
                        else
                        {
                            sub_588();
                        }
                        sub_33749();
                        if (NOT l_U103)
                        {
                            if ((NOT sub_32559()) AND ((NOT l_U107) AND (IS_CONTROL_PRESSED( 2, 77 ))))
                            {
                                l_U103 = 1;
                                if (IS_SCORE_GREATER( sub_1532(), (FLOOR( l_U170 )) - 1 ))
                                {
                                    sub_588();
                                    if (NOT (l_U101 == l_U208[l_U176]._fU0))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                                        {
                                            l_U193 = 7;
                                        }
                                        l_U141 = 0;
                                        g_U2678 = 0;
                                        l_U110 = 0;
                                        sub_34631( ref l_U208[l_U176]._fU0, ref l_U313, ref l_U150 );
                                        if (DOES_BLIP_EXIST( l_U101 ))
                                        {
                                            if (l_U130)
                                            {
                                                SET_BLIP_AS_SHORT_RANGE( l_U101, 1 );
                                                l_U130 = 0;
                                            }
                                        }
                                        l_U101 = l_U208[l_U176]._fU0;
                                        if (DOES_BLIP_EXIST( l_U101 ))
                                        {
                                            if (IS_BLIP_SHORT_RANGE( l_U101 ))
                                            {
                                                SET_BLIP_AS_SHORT_RANGE( l_U101, 0 );
                                                l_U130 = 1;
                                            }
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                                        {
                                            if (IS_VEH_DRIVEABLE( l_U343 ))
                                            {
                                                CLEAR_CHAR_SECONDARY_TASK( l_U198 );
                                                sub_37839( ref l_U198, ref l_U343, l_U313 );
                                            }
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                                        {
                                            CLEAR_CHAR_SECONDARY_TASK( l_U198 );
                                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U198, "Taxi_driver_Meter_Press", "amb@taxi", 8.00000000, 0, 0, 0, 0, -1 );
                                        }
                                    }
                                    l_U108 = 0;
                                    sub_45609();
                                    l_U171 = 0.22000000;
                                    SETTIMERA( 0 );
                                    if (IS_PLAYER_PLAYING( sub_1532() ))
                                    {
                                        SET_PLAYER_CONTROL( sub_1532(), 1 );
                                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_1532(), 1 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                                    {
                                        BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 0 );
                                    }
                                    sub_12827( 2 );
                                    break;
                                }
                                else
                                {
                                    l_U178 = 1;
                                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                                    {
                                        BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 0 );
                                    }
                                    sub_12827( 3 );
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        l_U103 = 1;
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H06" ))
                        {
                            sub_588();
                        }
                        sub_45609();
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            SET_PLAYER_CONTROL( sub_1532(), 1 );
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1532(), 1 );
                        }
                        l_U108 = 0;
                        l_U118 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            BLOCK_CHAR_AMBIENT_ANIMS( l_U198, 0 );
                        }
                    }
                }
                else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H08" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H04" )))
                {
                    sub_588();
                    l_U109 = 0;
                }
                if (NOT l_U103)
                {
                    if ((NOT sub_32559()) AND (IS_CONTROL_JUST_PRESSED( 2, 77 )))
                    {
                        fVar7 = (((sub_46120( uVar8, l_U313 )) / 50.00000000) * l_U171) * 2.40000000;
                        I = (FLOOR( l_U170 )) + (ROUND( fVar7 ));
                        fVar7 = TO_FLOAT( I );
                        fVar7 *= 1.33000000;
                        I = ROUND( fVar7 );
                        if (g_U2673)
                        {
                            I = 0;
                        }
                        l_U103 = 1;
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            if (IS_SCORE_GREATER( sub_1532(), I - 1 ))
                            {
                                l_U120 = 1;
                                SET_PLAYER_CONTROL( sub_1532(), 0 );
                                sub_588();
                                SETTIMERA( 0 );
                                l_U170 = TO_FLOAT( I );
                                sub_12827( 5 );
                                break;
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U198 )))
                            {
                                l_U193 = 13;
                            }
                        }
                    }
                }
                if (NOT g_U2678)
                {
                    if (NOT l_U103)
                    {
                        if (((NOT sub_32559()) AND (IS_CONTROL_PRESSED( 2, 2 ))) || (IS_BUTTON_PRESSED( 0, 14 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U198 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U343 ))
                                {
                                    CLEAR_CHAR_TASKS( l_U198 );
                                    sub_38720( ref l_U198, ref l_U343, l_U313 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U198 )))
                            {
                                l_U193 = 18;
                            }
                            l_U171 = 0.22000000 * 2.00000000;
                            g_U2678 = 1;
                            BLOCK_PED_WEAPON_SWITCHING( sub_1588(), 0 );
                            l_U103 = 1;
                            l_U109 = 0;
                            break;
                        }
                    }
                }
                if (NOT l_U103)
                {
                    if ((NOT sub_32559()) AND (IS_CONTROL_PRESSED( 2, 43 )))
                    {
                        ADD_SCORE( sub_1532(), (FLOOR( l_U170 )) * -1 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( l_U170 ) );
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                            SET_CHAR_MONEY( l_U198, (FLOOR( l_U170 )) + iVar3 );
                        }
                        l_U103 = 1;
                        l_U116 = 1;
                        l_U178 = 4;
                        sub_12827( 3 );
                        break;
                    }
                }
            }
            else
            {
                sub_588();
            }
            break;
            case 5:
            if (IS_SCREEN_FADED_OUT())
            {
                sub_32763( 0 );
                while (l_U144)
                {
                    sub_34631( ref l_U101, ref l_U313, ref l_U150 );
                    if (l_U144)
                    {
                        WAIT( 0 );
                    }
                }
                iVar4 = 0;
                iVar5 = 0;
                iVar6 = 0;
                if (NOT (IS_CHAR_INJURED( sub_1588() )))
                {
                    GET_CHAR_COORDINATES( sub_1588(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                }
                fVar7 = sub_46120( uVar8, l_U313 );
                INCREMENT_FLOAT_STAT_NO_MESSAGE( 86, fVar7 );
                if (g_U2678)
                {
                    iVar4 = FLOOR( (fVar7 / 200.00000000) / 60.00000000 );
                    iVar5 = ROUND( (fVar7 / 200.00000000) - (60.00000000 * (TO_FLOAT( iVar4 ))) );
                }
                else
                {
                    iVar4 = FLOOR( (fVar7 / 100.00000000) / 60.00000000 );
                    iVar5 = ROUND( (fVar7 / 100.00000000) - (60.00000000 * (TO_FLOAT( iVar4 ))) );
                }
                if ((iVar4 + 2) < (sub_47048( 0 )))
                {
                    GET_TIME_OF_DAY( ref I, ref iVar3 );
                    iVar3 += iVar5;
                    if (iVar3 > 59)
                    {
                        iVar3 += 65476;
                        iVar4++;
                    }
                    I += iVar4;
                    if (I > 23)
                    {
                        I += 65512;
                        iVar6++;
                    }
                    if (iVar6 > 0)
                    {
                        SET_TIME_ONE_DAY_FORWARD();
                    }
                    SET_TIME_OF_DAY( I, iVar3 );
                }
                if (NOT (IS_CAR_DEAD( l_U343 )))
                {
                    LOAD_ALL_PATH_NODES( 0 );
                    l_U145 = 1;
                    sub_19381();
                    SET_CAR_HEADING( l_U343, l_U150 );
                    SET_CAR_COORDINATES( l_U343, l_U313._fU0, l_U313._fU4, l_U313._fU8 );
                    if (NOT l_U140)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U343, 0.00000000, -3.00000000, 1.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    }
                    else
                    {
                        GET_CAR_COORDINATES( l_U343, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    }
                    REQUEST_COLLISION_AT_POSN( uVar8._fU0, uVar8._fU4, uVar8._fU8 );
                    LOAD_ALL_OBJECTS_NOW();
                    SET_CAR_HEADING( l_U343, l_U150 );
                    SET_CAR_COORDINATES( l_U343, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
                    LOAD_SCENE( l_U313._fU0, l_U313._fU4, l_U313._fU8 );
                    POPULATE_NOW();
                }
                SETTIMERA( 0 );
                l_U137 = 0;
                while (NOT l_U137)
                {
                    CLEAR_AREA( l_U313._fU0, l_U313._fU4, l_U313._fU8, 20.00000000, 1 );
                    if (NOT (IS_CAR_DEAD( l_U343 )))
                    {
                        if ((TIMERA() > 2000) || (SET_CAR_ON_GROUND_PROPERLY( l_U343 )))
                        {
                            if (TIMERA() > 2000)
                            {
                                SET_CAR_COORDINATES( l_U343, l_U313._fU0, l_U313._fU4, l_U313._fU8 );
                            }
                            l_U137 = 1;
                        }
                    }
                    WAIT( 0 );
                }
                if (g_U42891)
                {
                    bVar11 = false;
                    SETTIMERA( 0 );
                    while (NOT bVar11)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_1588(), 1066.50300000, 87.56122000, 34.13000000, 50.00000000, 50.00000000, 50.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_1588(), -1334.70000000, 317.90000000, 14.49000000, 50.00000000, 50.00000000, 50.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1588(), 81.12530000, -338.25000000, 11.15940000, 50.00000000, 50.00000000, 50.00000000, 0 ))))
                        {
                            if (TIMERA() < 4000)
                            {
                                if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "gunLockupCT" )) > 0) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "gunLockup" )) > 0))
                                {
                                    bVar11 = true;
                                }
                                else
                                {
                                    WAIT( 0 );
                                }
                            }
                            else
                            {
                                bVar11 = true;
                            }
                        }
                        else
                        {
                            bVar11 = true;
                        }
                    }
                }
                sub_48580( 0, 0 );
                if (NOT (IS_CAR_DEAD( l_U343 )))
                {
                    SET_CAR_FORWARD_SPEED( l_U343, 10.00000000 );
                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                    {
                        CLEAR_CHAR_TASKS( l_U198 );
                        sub_37839( ref l_U198, ref l_U343, l_U313 );
                    }
                    DO_SCREEN_FADE_IN( 1000 );
                    l_U142 = 0;
                    SETTIMERA( 0 );
                    l_U178 = 0;
                    sub_2019();
                    l_U174 = 3;
                    ADD_SCORE( sub_1532(), (FLOOR( l_U170 )) * -1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 98, FLOOR( l_U170 ) );
                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 10, 100, ref iVar3 );
                        SET_CHAR_MONEY( l_U198, (FLOOR( l_U170 )) + iVar3 );
                    }
                    l_U116 = 1;
                }
            }
            else
            {
                sub_38807();
                if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADING_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 1000 );
                    l_U142 = 1;
                    SETTIMERA( 0 );
                }
            }
            break;
            case 3:
            switch (l_U175)
            {
                case 0:
                if (IS_PLAYER_PLAYING( sub_1532() ))
                {
                    GET_CHAR_COORDINATES( sub_1588(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    l_U173 = GET_MAP_AREA_FROM_COORDS( uVar8 );
                }
                sub_2019();
                sub_1667();
                if (IS_PLAYER_PLAYING( sub_1532() ))
                {
                    SET_PLAYER_CONTROL( sub_1532(), 1 );
                }
                sub_588();
                SETTIMERA( 0 );
                if ((l_U115) || (NOT l_U114))
                {
                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U343 )))
                        {
                            if ((IS_VEH_DRIVEABLE( l_U343 )) AND ((NOT (IS_CAR_ON_FIRE( l_U343 ))) AND (NOT (CHECK_STUCK_TIMER( l_U343, 0, 3000 )))))
                            {
                                CLEAR_CHAR_TASKS( l_U198 );
                                OPEN_SEQUENCE_TASK( ref l_U201 );
                                if (NOT l_U140)
                                {
                                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U343, 0, 21, 12.00000000, 1, 3, 3 );
                                }
                                TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U343, 0, 5, 12.00000000, 1, 3, 3 );
                                CLOSE_SEQUENCE_TASK( l_U201 );
                                TASK_PERFORM_SEQUENCE( l_U198, l_U201 );
                                CLEAR_SEQUENCE_TASK( l_U201 );
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U198, 29, ref l_U200 );
                                if (l_U200 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U198 );
                                    OPEN_SEQUENCE_TASK( ref l_U201 );
                                    TASK_LEAVE_CAR( 0, l_U343 );
                                    TASK_WANDER_STANDARD( 0 );
                                    CLOSE_SEQUENCE_TASK( l_U201 );
                                    TASK_PERFORM_SEQUENCE( l_U198, l_U201 );
                                    CLEAR_SEQUENCE_TASK( l_U201 );
                                }
                            }
                        }
                    }
                }
                if (l_U114)
                {
                    if ((IS_PLAYER_PLAYING( sub_1532() )) AND (NOT (IS_CHAR_INJURED( l_U198 ))))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U198, 1 );
                        CLEAR_CHAR_TASKS( l_U198 );
                        OPEN_SEQUENCE_TASK( ref l_U201 );
                        if (IS_VEH_DRIVEABLE( l_U343 ))
                        {
                            TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U343, 0, 5, 12.00000000, 1, 3, 3 );
                            TASK_LEAVE_CAR( 0, l_U343 );
                        }
                        TASK_SMART_FLEE_CHAR( 0, sub_1588(), 9999.90000000, 999999 );
                        CLOSE_SEQUENCE_TASK( l_U201 );
                        TASK_PERFORM_SEQUENCE( l_U198, l_U201 );
                        CLEAR_SEQUENCE_TASK( l_U201 );
                    }
                }
                l_U175++;
                break;
                case 1:
                if (IS_SCREEN_FADED_IN())
                {
                    if (NOT (IS_CHAR_INJURED( l_U198 )))
                    {
                        switch (l_U178)
                        {
                            case 0:
                            if ((NOT g_U2673) AND (l_U160 > 75.00000000))
                            {
                                l_U193 = 5;
                            }
                            else
                            {
                                l_U193 = 4;
                            }
                            break;
                            case 1:
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "NOCASH", 7500, 1 );
                            }
                            l_U193 = 6;
                            break;
                            case 2: break;
                            case 3:
                            l_U193 = 12;
                            break;
                            case 4:
                            if (NOT g_U2673)
                            {
                                l_U193 = 11;
                            }
                            else
                            {
                                l_U193 = 4;
                            }
                            break;
                            case 5:
                            l_U193 = 10;
                            break;
                        }
                    }
                    SETTIMERA( 0 );
                    l_U175++;
                }
                break;
                case 2:
                if (NOT (IS_CAR_DEAD( l_U343 )))
                {
                    bVar11 = false;
                    GET_CAR_SPEED( l_U343, ref fVar7 );
                    if ((TIMERA() > 3000) || (fVar7 < 0.10000000))
                    {
                        bVar11 = true;
                    }
                    if ((IS_CAR_ON_FIRE( l_U343 )) || (CHECK_STUCK_TIMER( l_U343, 0, 3000 )))
                    {
                        bVar11 = true;
                    }
                    if ((NOT l_U114) AND (bVar11))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U343 ))
                            {
                                TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( l_U198, l_U343, 0, 5, 12.00000000, 0, 3, 3 );
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            GET_SCRIPT_TASK_STATUS( sub_1588(), 30, ref l_U200 );
                            if (l_U200 == 7)
                            {
                                sub_2019();
                                LOCK_CAR_DOORS( l_U343, 1 );
                                if (NOT l_U114)
                                {
                                    CLEAR_CHAR_TASKS( sub_1588() );
                                    TASK_LEAVE_CAR( sub_1588(), l_U343 );
                                }
                                l_U174 = 99;
                            }
                        }
                        sub_52118( l_U343 );
                    }
                    if ((bVar11) AND (l_U114))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U198 )))
                        {
                            CLEAR_CHAR_TASKS( l_U198 );
                            OPEN_SEQUENCE_TASK( ref l_U201 );
                            TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U343 );
                            if (IS_PLAYER_PLAYING( sub_1532() ))
                            {
                                TASK_SMART_FLEE_CHAR( 0, sub_1588(), 9999.90000000, 999999 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U201 );
                            TASK_PERFORM_SEQUENCE( l_U198, l_U201 );
                            CLEAR_SEQUENCE_TASK( l_U201 );
                        }
                        sub_2019();
                        l_U174 = 99;
                    }
                }
                break;
                case 3:
                CLEAR_CHAR_TASKS( sub_1588() );
                OPEN_SEQUENCE_TASK( ref l_U201 );
                TASK_SWAP_WEAPON( 0, 1 );
                CLOSE_SEQUENCE_TASK( l_U201 );
                TASK_PERFORM_SEQUENCE( sub_1588(), l_U201 );
                CLEAR_SEQUENCE_TASK( l_U201 );
                l_U174 = 99;
                break;
            }
            break;
        }
        sub_52529();
        WAIT( 0 );
    }
    if (NOT l_U120)
    {
        if (NOT (l_U172 == l_U173))
        {
            AWARD_ACHIEVEMENT( 21 );
        }
    }
    if (NOT g_U2677)
    {
        if (IS_PLAYER_PLAYING( sub_1532() ))
        {
            SET_PLAYER_CONTROL( sub_1532(), 1 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U343 )))
    {
        LOCK_CAR_DOORS( l_U343, 1 );
    }
    if ((NOT l_U114) AND (NOT g_U2677))
    {
        sub_52118( l_U343 );
    }
    if (NOT (l_U177 == -1))
    {
        SET_TEXT_RENDER_ID( l_U177 );
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    }
    if ((NOT l_U114) AND (NOT g_U2677))
    {
        bVar11 = true;
        while (bVar11)
        {
            if (NOT (IS_CAR_DEAD( l_U343 )))
            {
                if (IS_PLAYER_PLAYING( sub_1532() ))
                {
                    if (NOT (IS_CHAR_IN_CAR( sub_1588(), l_U343 )))
                    {
                        if (NOT (sub_53015( sub_1588() )))
                        {
                            bVar11 = false;
                        }
                    }
                }
                else
                {
                    bVar11 = false;
                }
            }
            else
            {
                bVar11 = false;
            }
            WAIT( 0 );
        }
    }
    if ((NOT l_U114) AND (NOT g_U2677))
    {
        bVar11 = true;
        while (bVar11)
        {
            if (NOT (IS_CAR_DEAD( l_U343 )))
            {
                if (IS_PLAYER_PLAYING( sub_1532() ))
                {
                    if ((NOT (sub_53561( l_U343 ))) AND ((NOT (sub_53394( l_U343 ))) AND ((NOT (sub_53015( sub_1588() ))) AND (NOT (IS_CHAR_IN_CAR( sub_1588(), l_U343 ))))))
                    {
                        bVar11 = false;
                    }
                }
                else
                {
                    bVar11 = false;
                }
            }
            else
            {
                bVar11 = false;
            }
            WAIT( 0 );
        }
    }
    if (l_U114)
    {
        bVar11 = true;
        while (bVar11)
        {
            bVar11 = false;
            if (NOT (IS_CAR_DEAD( l_U343 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U198 )))
                {
                    if ((sub_53015( l_U198 )) || (IS_CHAR_IN_CAR( l_U198, l_U343 )))
                    {
                        bVar11 = true;
                    }
                }
            }
            WAIT( 0 );
        }
    }
    if ((NOT l_U114) AND ((NOT g_U2673) AND (l_U116)))
    {
        PRINT_WITH_NUMBER( "FARE", FLOOR( l_U170 ), 7500, 0 );
        l_U116 = 0;
    }
    if ((NOT l_U114) AND (NOT g_U2677))
    {
        if (DOES_VEHICLE_EXIST( l_U343 ))
        {
            WAIT( 400 );
        }
    }
    sub_571();
    return;
}

void sub_571()
{
    int iVar2;
    int I;
    unknown uVar4;
    unknown uVar5;

    SET_PTFX_CAM_INSIDE_VEHICLE( 0 );
    sub_588();
    if (DOES_OBJECT_EXIST( l_U197 ))
    {
        DELETE_OBJECT( ref l_U197 );
    }
    if (NOT l_U114)
    {
        if (NOT (IS_CHAR_INJURED( l_U198 )))
        {
            SET_CHAR_KEEP_TASK( l_U198, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U198, 0 );
            if (IS_VEH_DRIVEABLE( l_U343 ))
            {
                if (IS_CHAR_IN_CAR( l_U198, l_U343 ))
                {
                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U198, 0 );
                    if (NOT g_U2677)
                    {
                        TASK_CAR_DRIVE_WANDER( l_U198, l_U343, 20.00000000, 1 );
                    }
                    SET_TAXI_LIGHTS( l_U343, 1 );
                }
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U198 )))
    {
        SET_CHAR_KEEP_TASK( l_U198, 1 );
    }
    if (NOT (IS_CAR_DEAD( l_U343 )))
    {
        GET_CAR_HEALTH( l_U343, ref iVar2 );
        if (iVar2 > 1000)
        {
            SET_CAR_HEALTH( l_U343, iVar2 );
        }
        iVar2 = ROUND( GET_ENGINE_HEALTH( l_U343 ) );
        if (iVar2 > 1000)
        {
            SET_ENGINE_HEALTH( l_U343, TO_FLOAT( iVar2 ) );
        }
        iVar2 = ROUND( GET_PETROL_TANK_HEALTH( l_U343 ) );
        if (iVar2 > 1000)
        {
            SET_PETROL_TANK_HEALTH( l_U343, TO_FLOAT( iVar2 ) );
        }
    }
    if ((NOT l_U114) AND (NOT g_U2677))
    {
        if (DOES_GROUP_EXIST( sub_1362() ))
        {
            GET_GROUP_SIZE( sub_1362(), ref I, ref iVar2 );
            for ( I = 0; I < iVar2; I++ )
            {
                GET_GROUP_MEMBER( sub_1362(), I, ref uVar4 );
                if (NOT (IS_CHAR_INJURED( uVar4 )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( uVar4 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( uVar4, ref uVar5 );
                        TASK_LEAVE_CAR_IMMEDIATELY( uVar4, uVar5 );
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( uVar4 );
                    }
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_1532(), 1 );
        BLOCK_PED_WEAPON_SWITCHING( sub_1588(), 0 );
    }
    if (IS_VEH_DRIVEABLE( l_U343 ))
    {
        SET_HAS_BEEN_OWNED_BY_PLAYER( l_U343, 0 );
    }
    sub_1667();
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        SET_CHAR_VISIBLE( sub_1588(), 1 );
    }
    sub_2019();
    sub_2071( ref l_U182 );
    if (DOES_BLIP_EXIST( l_U102 ))
    {
        if (l_U131)
        {
            SET_BLIP_AS_SHORT_RANGE( l_U102, 1 );
            l_U131 = 0;
        }
        FLASH_BLIP( l_U102, 0 );
    }
    if (DOES_BLIP_EXIST( l_U101 ))
    {
        if (l_U130)
        {
            SET_BLIP_AS_SHORT_RANGE( l_U101, 1 );
            l_U130 = 0;
        }
    }
    l_U101 = nil;
    if (NOT g_U2677)
    {
        if ((l_U142) AND (IS_SCREEN_FADED_OUT()))
        {
            DO_SCREEN_FADE_IN( 1000 );
        }
    }
    if (sub_2254( l_U202 ))
    {
        sub_2438( ref l_U202, 1 );
    }
    REMOVE_ANIMS( "amb@taxi" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2120484425 );
    g_U2677 = 0;
    LOAD_ALL_PATH_NODES( 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_588()
{
    if ((l_U109) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H13" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10B" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09B" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H12" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H11" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H08" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H07" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H06" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05F" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05E" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05D" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05C" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05B" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H04" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H03" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H02" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H01" ))))))))))))))))))))))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_1362()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1532()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1588()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1667()
{
    if ((DOES_CAM_EXIST( l_U148 )) || ((DOES_CAM_EXIST( l_U348 )) || ((DOES_CAM_EXIST( l_U148 )) || (DOES_CAM_EXIST( l_U146 )))))
    {
        if (DOES_CAM_EXIST( l_U148 ))
        {
            DESTROY_CAM( l_U148 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U146 ))
        {
            DESTROY_CAM( l_U146 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U147 ))
        {
            DESTROY_CAM( l_U147 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U148 ))
        {
            DESTROY_CAM( l_U148 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U348 ))
        {
            DESTROY_CAM( l_U348 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        l_U192 = 0;
        if (IS_PLAYER_PLAYING( sub_1532() ))
        {
            SET_CHAR_VISIBLE( sub_1588(), 1 );
        }
        SET_PTFX_CAM_INSIDE_VEHICLE( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    l_U118 = 0;
    return;
}

void sub_2019()
{
    if (NOT (l_U344 == -1))
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U344 );
        l_U344 = -1;
    }
    return;
}

void sub_2071(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

int sub_2254(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_2366( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2366( "\n speech is not playing" );
    }
    return 0;
}

void sub_2366(unknown uParam0)
{
    return;
}

void sub_2438(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_2626(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_2666(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_2683();
    return;
}

void sub_2683()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_2804(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2884( "\n PED NUMBER ", uParam0 );
    sub_2924( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2884(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2924(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3124()
{
    if (l_U174 == 3)
    {
        return 1;
    }
    if (l_U174 == 99)
    {
        return 0;
    }
    if (NOT g_U2677)
    {
        if (IS_PLAYER_PLAYING( sub_1532() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1588() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1588(), ref l_U343 );
                if (NOT (IS_CAR_DEAD( l_U343 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_1588(), l_U343 ))
                    {
                        if (sub_3273( l_U343 ))
                        {
                            GET_DRIVER_OF_CAR( l_U343, ref l_U198 );
                            if (DOES_CHAR_EXIST( l_U198 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U198 )))
                                {
                                    if (IS_CHAR_SITTING_IN_CAR( l_U198, l_U343 ))
                                    {
                                        if (NOT (l_U198 == sub_1588()))
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
    }
    return 0;
}

int sub_3273(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_3524()
{
    return sub_3535( 1, 1 );
}

int sub_3535(boolean bParam0, unknown uParam1)
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

int sub_3622()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_3993(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_4018( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_4018(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_4076( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_4076(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4098( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    sub_4774( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_4098(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2366( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_2366( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_2366( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_4774(int iParam0, int iParam1)
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

void sub_4994(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_5015( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_5015(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4076( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_5237(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;

    uVar4 = sub_5253( l_U302._fU4 );
    PRINTSTRING( "Taxi goto street audio is - " );
    PRINTSTRING( uVar4 );
    PRINTSTRING( "\n" );
    if (NOT (COMPARE_STRING( uVar4, "EMPTY" )))
    {
        bVar3 = IS_AMBIENT_SPEECH_DISABLED( uParam0 );
        if (bVar3)
        {
            STOP_PED_SPEAKING( uParam0, 0 );
        }
        SAY_AMBIENT_SPEECH( uParam0, uVar4, 1, 1, 0 );
        if (bVar3)
        {
            STOP_PED_SPEAKING( sub_1588(), 1 );
        }
    }
    return;
}

string sub_5253(unknown uParam0)
{
    if (IS_STRING_NULL( l_U347 ))
    {
        return "TAXI_GIVE_DEST_GENERIC";
    }
    if (COMPARE_STRING( l_U347, "BEGGA" ))
    {
        return "TAXI_GIVE_DEST_BEGGA";
    }
    if (COMPARE_STRING( l_U347, "BOULE" ))
    {
        return "TAXI_GIVE_DEST_BOULE";
    }
    if (COMPARE_STRING( l_U347, "LTBAY" ))
    {
        return "TAXI_GIVE_DEST_LTBAY";
    }
    if (COMPARE_STRING( l_U347, "NRTGA" ))
    {
        return "TAXI_GIVE_DEST_NRTGA";
    }
    if (COMPARE_STRING( l_U347, "FORSI" ))
    {
        return "TAXI_GIVE_DEST_FORSI";
    }
    if (COMPARE_STRING( l_U347, "INSTI" ))
    {
        return "TAXI_GIVE_DEST_INSTI";
    }
    if (COMPARE_STRING( l_U347, "STHBO" ))
    {
        return "TAXI_GIVE_DEST_STHBO";
    }
    if (COMPARE_STRING( l_U347, "CHAPO" ))
    {
        return "TAXI_GIVE_DEST_CHAPO";
    }
    if (COMPARE_STRING( l_U347, "CHISL" ))
    {
        return "TAXI_GIVE_DEST_CHISL";
    }
    if (COMPARE_STRING( l_U347, "COISL" ))
    {
        return "TAXI_GIVE_DEST_COISL";
    }
    if (COMPARE_STRING( l_U347, "ROTTH" ))
    {
        return "TAXI_GIVE_DEST_ROTTH";
    }
    if (COMPARE_STRING( l_U347, "STEIN" ))
    {
        return "TAXI_GIVE_DEST_STEIN";
    }
    if (COMPARE_STRING( l_U347, "EISLC" ))
    {
        return "TAXI_GIVE_DEST_EISLC";
    }
    if (COMPARE_STRING( l_U347, "MEADP" ))
    {
        return "TAXI_GIVE_DEST_MEADP";
    }
    if (COMPARE_STRING( l_U347, "MEADH" ))
    {
        return "TAXI_GIVE_DEST_MEADH";
    }
    if (COMPARE_STRING( l_U347, "CERHE" ))
    {
        return "TAXI_GIVE_DEST_CERHE";
    }
    if (COMPARE_STRING( l_U347, "WILLI" ))
    {
        return "TAXI_GIVE_DEST_WILLI";
    }
    if (COMPARE_STRING( l_U347, "SCHOL" ))
    {
        return "TAXI_GIVE_DEST_SCHOL";
    }
    if (COMPARE_STRING( l_U347, "BEECW" ))
    {
        return "TAXI_GIVE_DEST_BEECW";
    }
    if (COMPARE_STRING( l_U347, "DOWTW" ))
    {
        return "TAXI_GIVE_DEST_DOWTW";
    }
    if (COMPARE_STRING( l_U347, "ESHOO" ))
    {
        return "TAXI_GIVE_DEST_ESHOO";
    }
    if (COMPARE_STRING( l_U347, "BOAB" ))
    {
        return "TAXI_GIVE_DEST_BOAB";
    }
    if (COMPARE_STRING( l_U347, "FRANI" ))
    {
        return "TAXI_GIVE_DEST_FRANI";
    }
    if (COMPARE_STRING( l_U347, "SUTHS" ))
    {
        return "TAXI_GIVE_DEST_SUTHS";
    }
    if (COMPARE_STRING( l_U347, "HOBEH" ))
    {
        return "TAXI_GIVE_DEST_HOBEH";
    }
    if (COMPARE_STRING( l_U347, "FIISL" ))
    {
        return "TAXI_GIVE_DEST_FIISL";
    }
    if (COMPARE_STRING( l_U347, "FIREP" ))
    {
        return "TAXI_GIVE_DEST_FIREP";
    }
    if (COMPARE_STRING( l_U347, "OUTL" ))
    {
        return "TAXI_GIVE_DEST_OUTL";
    }
    if (COMPARE_STRING( l_U347, "ANGBY" ))
    {
        return "TAXI_GIVE_DEST_ANGBY";
    }
    if (COMPARE_STRING( l_U347, "CASGR" ))
    {
        return "TAXI_GIVE_DEST_CASGR";
    }
    if (COMPARE_STRING( l_U347, "THXCH" ))
    {
        return "TAXI_GIVE_DEST_THXCH";
    }
    if (COMPARE_STRING( l_U347, "CHITO" ))
    {
        return "TAXI_GIVE_DEST_CHITO";
    }
    if (COMPARE_STRING( l_U347, "LITAL" ))
    {
        return "TAXI_GIVE_DEST_LITAL";
    }
    if (COMPARE_STRING( l_U347, "FISSN" ))
    {
        return "TAXI_GIVE_DEST_FISSN";
    }
    if (COMPARE_STRING( l_U347, "FISSO" ))
    {
        return "TAXI_GIVE_DEST_FISSO";
    }
    if (COMPARE_STRING( l_U347, "CASGC" ))
    {
        return "TAXI_GIVE_DEST_CASGC";
    }
    if (COMPARE_STRING( l_U347, "NOROL" ))
    {
        return "TAXI_GIVE_DEST_NOROL";
    }
    if (COMPARE_STRING( l_U347, "SUFFO" ))
    {
        return "TAXI_GIVE_DEST_SUFFO";
    }
    if (COMPARE_STRING( l_U347, "LOWEA" ))
    {
        return "TAXI_GIVE_DEST_LOWEA";
    }
    if (COMPARE_STRING( l_U347, "EASON" ))
    {
        return "TAXI_GIVE_DEST_EASON";
    }
    if (COMPARE_STRING( l_U347, "THTRI" ))
    {
        return "TAXI_GIVE_DEST_THTRI";
    }
    if (COMPARE_STRING( l_U347, "TMEQU" ))
    {
        return "TAXI_GIVE_DEST_TMEQU";
    }
    if (COMPARE_STRING( l_U347, "THPRES" ))
    {
        return "TAXI_GIVE_DEST_THPRES";
    }
    if (COMPARE_STRING( l_U347, "WESMI" ))
    {
        return "TAXI_GIVE_DEST_WESMI";
    }
    if (COMPARE_STRING( l_U347, "PUGAT" ))
    {
        return "TAXI_GIVE_DEST_PUGAT";
    }
    if (COMPARE_STRING( l_U347, "STARJ" ))
    {
        return "TAXI_GIVE_DEST_STARJ";
    }
    if (COMPARE_STRING( l_U347, "HATGA" ))
    {
        return "TAXI_GIVE_DEST_HATGA";
    }
    if (COMPARE_STRING( l_U347, "MIDPE" ))
    {
        return "TAXI_GIVE_DEST_MIDPE";
    }
    if (COMPARE_STRING( l_U347, "LANCA" ))
    {
        return "TAXI_GIVE_DEST_LANCA";
    }
    if (COMPARE_STRING( l_U347, "MIDPA" ))
    {
        return "TAXI_GIVE_DEST_MIDPA";
    }
    if (COMPARE_STRING( l_U347, "VASIH" ))
    {
        return "TAXI_GIVE_DEST_VASIH";
    }
    if (COMPARE_STRING( l_U347, "MIDPW" ))
    {
        return "TAXI_GIVE_DEST_MIDPW";
    }
    if (COMPARE_STRING( l_U347, "NOHOL" ))
    {
        return "TAXI_GIVE_DEST_NOHOL";
    }
    if (COMPARE_STRING( l_U347, "EAHOL" ))
    {
        return "TAXI_GIVE_DEST_EAHOL";
    }
    if (COMPARE_STRING( l_U347, "JEFFH" ))
    {
        return "TAXI_GIVE_DEST_JEFFH";
    }
    if (COMPARE_STRING( l_U347, "NORWO" ))
    {
        return "TAXI_GIVE_DEST_NORWO";
    }
    if (COMPARE_STRING( l_U347, "WESDY" ))
    {
        return "TAXI_GIVE_DEST_WESDY";
    }
    if (COMPARE_STRING( l_U347, "LEFWO" ))
    {
        return "TAXI_GIVE_DEST_LEFWO";
    }
    if (COMPARE_STRING( l_U347, "ALDCI" ))
    {
        return "TAXI_GIVE_DEST_ALDCI";
    }
    if (COMPARE_STRING( l_U347, "BERCH" ))
    {
        return "TAXI_GIVE_DEST_BERCH";
    }
    if (COMPARE_STRING( l_U347, "NORMY" ))
    {
        return "TAXI_GIVE_DEST_NORMY";
    }
    if (COMPARE_STRING( l_U347, "ACTRR" ))
    {
        return "TAXI_GIVE_DEST_ACTRR";
    }
    if (COMPARE_STRING( l_U347, "ACTBY" ))
    {
        return "TAXI_GIVE_DEST_ACTBY";
    }
    if (COMPARE_STRING( l_U347, "PORTU" ))
    {
        return "TAXI_GIVE_DEST_PORTU";
    }
    if (COMPARE_STRING( l_U347, "TUDOR" ))
    {
        return "TAXI_GIVE_DEST_TUDOR";
    }
    if (COMPARE_STRING( l_U347, "ACTIP" ))
    {
        return "TAXI_GIVE_DEST_ACTIP";
    }
    if (COMPARE_STRING( l_U347, "RICHM" ))
    {
        return "TAXI_GIVE_DEST_RICHM";
    }
    if (COMPARE_STRING( l_U347, "FROGT" ))
    {
        return "TAXI_GIVE_DEST_FROGT";
    }
    if (COMPARE_STRING( l_U347, "HAPIN" ))
    {
        return "TAXI_GIVE_DEST_HAPIN";
    }
    if (COMPARE_STRING( l_U347, "CITH" ))
    {
        return "TAXI_GIVE_DEST_CITH";
    }
    if (COMPARE_STRING( l_U347, "Gelf" ))
    {
        return "TAXI_GIVE_DEST_Gelf";
    }
    if (COMPARE_STRING( l_U347, "AEROP" ))
    {
        return "TAXI_GIVE_DEST_AEROP";
    }
    if (COMPARE_STRING( l_U347, "ALSCF" ))
    {
        return "TAXI_GIVE_DEST_ALSCF";
    }
    if (COMPARE_STRING( l_U347, "BRBRO" ))
    {
        return "TAXI_GIVE_DEST_BRBRO";
    }
    if (COMPARE_STRING( l_U347, "BRALG" ))
    {
        return "TAXI_GIVE_DEST_BRALG";
    }
    if (COMPARE_STRING( l_U347, "BREBB" ))
    {
        return "TAXI_GIVE_DEST_BREBB";
    }
    if (COMPARE_STRING( l_U347, "BRDBB" ))
    {
        return "TAXI_GIVE_DEST_BRDBB";
    }
    if (COMPARE_STRING( l_U347, "HIBRG" ))
    {
        return "TAXI_GIVE_DEST_HIBRG";
    }
    if (COMPARE_STRING( l_U347, "NOWOB" ))
    {
        return "TAXI_GIVE_DEST_NOWOB";
    }
    if (COMPARE_STRING( l_U347, "BOTU" ))
    {
        return "TAXI_GIVE_DEST_BOTU";
    }
    if (COMPARE_STRING( l_U347, "LEAPE" ))
    {
        return "TAXI_GIVE_DEST_LEAPE";
    }
    return "TAXI_GIVE_DEST_GENERIC";
}

int sub_9627()
{
    unknown uVar2;
    int iVar3;
    int I;

    if (NOT (IS_CHAR_INJURED( l_U198 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U198 ))
        {
            return 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( sub_1588() ))
        {
            return 1;
        }
    }
    if ((sub_3622()) || (sub_2254( l_U202 )))
    {
        return 1;
    }
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        if (DOES_GROUP_EXIST( sub_1362() ))
        {
            GET_GROUP_SIZE( sub_1362(), ref I, ref iVar3 );
            if (iVar3 > 0)
            {
                for ( I = 0; I < iVar3; I++ )
                {
                    GET_GROUP_MEMBER( sub_1362(), I, ref uVar2 );
                    if (NOT (IS_CHAR_INJURED( uVar2 )))
                    {
                        if (IS_AMBIENT_SPEECH_PLAYING( uVar2 ))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12739(int iParam0)
{
    if (iParam0 == g_U2687)
    {
        return 1;
    }
    return 0;
}

void sub_12827(int iParam0)
{
    if (NOT (l_U174 == iParam0))
    {
        l_U174 = iParam0;
        l_U175 = 0;
    }
    return;
}

int sub_14115()
{
    int I;

    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U343 )))
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U343, I )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U343, I, ref l_U199 );
                if (NOT (IS_CHAR_INJURED( l_U199 )))
                {
                    if ((NOT (l_U199 == sub_1588())) AND (NOT (IS_GROUP_MEMBER( l_U199, sub_1362() ))))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_14500()
{
    int I;

    l_U183 = 0;
    sub_14515();
    sub_14675( 8, 0 );
    sub_14675( 0, 0 );
    sub_14675( 1, 0 );
    sub_14675( 2, 0 );
    sub_14675( 82, 0 );
    sub_14675( 31, 1 );
    sub_14675( 32, 1 );
    sub_14675( 69, 1 );
    sub_14675( 34, 1 );
    sub_14675( 35, 1 );
    sub_14675( 28, 1 );
    sub_14675( 36, 1 );
    sub_14675( 37, 1 );
    sub_14675( 26, 1 );
    sub_14675( 25, 1 );
    sub_14675( 74, 1 );
    sub_14675( 38, 1 );
    sub_14675( 39, 1 );
    sub_14675( 40, 1 );
    sub_14675( 41, 1 );
    sub_14675( 42, 1 );
    sub_14675( 43, 1 );
    sub_14675( 44, 1 );
    sub_14675( 45, 1 );
    sub_14675( 27, 1 );
    sub_14675( 23, 1 );
    sub_14675( 55, 1 );
    sub_14675( 53, 1 );
    sub_14675( 118, 1 );
    sub_14675( 119, 1 );
    sub_14675( 95, 1 );
    sub_14675( 96, 1 );
    sub_14675( 97, 1 );
    sub_14675( 98, 1 );
    sub_14675( 99, 1 );
    sub_14675( 100, 1 );
    sub_14675( 101, 1 );
    sub_14675( 102, 1 );
    sub_14675( 103, 1 );
    sub_14675( 104, 1 );
    sub_14675( 105, 1 );
    sub_14675( 107, 1 );
    sub_14675( 72, 0 );
    sub_14675( 77, 0 );
    sub_14675( 78, 0 );
    sub_14675( 76, 0 );
    sub_14675( 92, 0 );
    sub_14675( 54, 0 );
    sub_14675( 33, 0 );
    sub_14675( 80, 0 );
    sub_14675( 29, 0 );
    sub_14675( 59, 0 );
    sub_14675( 75, 1 );
    sub_14675( 60, 1 );
    sub_14675( 61, 1 );
    sub_14675( 62, 1 );
    sub_14675( 66, 0 );
    sub_14675( 70, 0 );
    sub_14675( 71, 0 );
    sub_14675( 126, 0 );
    sub_14675( 127, 0 );
    sub_14675( 56, 1 );
    sub_14675( 58, 1 );
    sub_14675( 46, 0 );
    sub_14675( 49, 0 );
    sub_14675( 52, 0 );
    sub_14675( 110, 0 );
    sub_14675( 111, 0 );
    sub_14675( 112, 0 );
    sub_14675( 113, 0 );
    sub_14675( 114, 0 );
    sub_14675( 48, 1 );
    sub_14675( 106, 1 );
    sub_14675( 108, 1 );
    sub_14675( 109, 1 );
    sub_14675( 122, 1 );
    sub_14675( 120, 1 );
    sub_14675( 121, 1 );
    sub_14675( 65, 1 );
    sub_14675( 24, 0 );
    sub_14675( 50, 0 );
    sub_14675( 47, 0 );
    sub_14675( 21, 0 );
    sub_14675( 22, 0 );
    sub_14675( 51, 0 );
    sub_14675( 57, 0 );
    if (g_U12379)
    {
        if (sub_18503() == 0)
        {
            if (DOES_BLIP_EXIST( g_U2669 ))
            {
                for ( I = 0; I < 30; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U208[I]._fU0 ))
                    {
                        if (l_U208[I]._fU0 == g_U2669)
                        {
                            l_U176 = I;
                            I = 30;
                        }
                    }
                }
            }
        }
    }
    else if (NOT (g_U2669 == nil))
    {
        g_U2669 = nil;
    }
    if (g_U12379)
    {
        if (NOT (g_U2670 == 6))
        {
            for ( I = 0; I < 30; I++ )
            {
                if (DOES_BLIP_EXIST( l_U208[I]._fU0 ))
                {
                    if ((sub_15389( l_U208[I]._fU0 )) == g_U2670)
                    {
                        l_U176 = I;
                        I = 30;
                    }
                }
            }
        }
    }
    else if (NOT (g_U2670 == 6))
    {
        g_U2670 = 6;
    }
    return;
}

void sub_14515()
{
    int I;

    for ( I = 0; I < 30; I++ )
    {
        l_U208[I]._fU0 = nil;
        l_U208[I]._fU4 = 0;
        l_U208[I]._fU8 = 0;
    }
    l_U299._fU0 = nil;
    l_U299._fU4 = 0;
    l_U299._fU8 = 0;
    l_U302._fU0 = nil;
    l_U302._fU4 = 0;
    l_U302._fU8 = 0;
    l_U305._fU0 = nil;
    l_U305._fU4 = 0;
    l_U305._fU8 = 0;
    l_U183 = 0;
    return;
}

void sub_14675(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    int iVar8;

    iVar8 = GET_FIRST_BLIP_INFO_ID( uParam0 );
    while (DOES_BLIP_EXIST( iVar8 ))
    {
        if (l_U183 < 30)
        {
            if (sub_14726( iVar8 ))
            {
                if (sub_14797( iVar8 ))
                {
                    sub_15218( ref iVar8, ref uVar4 );
                    if (sub_15376( uVar4 ))
                    {
                        if (NOT (sub_15636( ref iVar8, uParam0 )))
                        {
                            bVar7 = false;
                            switch (uParam0)
                            {
                                case 8:
                                case 0:
                                case 1:
                                case 2:
                                case 23:
                                case 25:
                                case 26:
                                case 27:
                                case 28:
                                case 31:
                                case 32:
                                case 34:
                                case 35:
                                case 36:
                                case 37:
                                case 38:
                                case 39:
                                case 40:
                                case 41:
                                case 42:
                                case 43:
                                case 44:
                                case 45:
                                case 46:
                                case 54:
                                case 29:
                                case 59:
                                case 60:
                                case 61:
                                case 62:
                                case 33:
                                case 56:
                                case 58:
                                case 48:
                                case 49:
                                case 52:
                                case 24:
                                case 50:
                                case 21:
                                case 22:
                                case 47:
                                case 51:
                                case 57:
                                case 63:
                                case 64:
                                case 65:
                                case 66:
                                case 69:
                                case 70:
                                case 71:
                                case 72:
                                case 74:
                                case 75:
                                case 76:
                                case 77:
                                case 78:
                                case 80:
                                case 82:
                                case 92:
                                case 55:
                                case 53:
                                case 95:
                                case 96:
                                case 97:
                                case 98:
                                case 99:
                                case 100:
                                case 101:
                                case 102:
                                case 103:
                                case 104:
                                case 105:
                                case 106:
                                case 107:
                                case 108:
                                case 109:
                                case 120:
                                case 121:
                                case 122:
                                case 110:
                                case 111:
                                case 112:
                                case 113:
                                case 114:
                                case 118:
                                case 119:
                                case 126:
                                case 127:
                                bVar7 = true;
                                break;
                                default:
                                bVar7 = false;
                                break;
                            }
                            if (DOES_BLIP_EXIST( g_U2672 ))
                            {
                                if ((sub_15389( iVar8 )) == 1)
                                {
                                    if (NOT (g_U2672 == iVar8))
                                    {
                                        bVar7 = false;
                                    }
                                }
                            }
                            if (bVar7)
                            {
                                bVar7 = false;
                                if ((sub_16524( iVar8 )) || (((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 3) || (((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 6) || (((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 5) || ((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 4)))))
                                {
                                    bVar7 = true;
                                }
                                if ((GET_MISSION_FLAG()) AND ((GET_BLIP_INFO_ID_TYPE( iVar8 )) == 5))
                                {
                                    bVar7 = false;
                                }
                                if (bVar7)
                                {
                                    sub_17211( uVar4, uParam1 );
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar8 = GET_NEXT_BLIP_INFO_ID( uParam0 );
    }
    return;
}

int sub_14726(unknown uParam0)
{
    int iVar3;

    if (DOES_BLIP_EXIST( uParam0 ))
    {
        iVar3 = GET_BLIP_INFO_ID_DISPLAY( uParam0 );
        if ((NOT (iVar3 == 1)) AND (NOT (iVar3 == 0)))
        {
            return 1;
        }
    }
    return 0;
}

void sub_14797(unknown uParam0)
{
    return sub_15146( sub_14808( uParam0 ) );
}

void sub_14808(unknown uParam0)
{
    unknown uVar3;
    vector Result;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    Result = {0.00000000, 0.00000000, 0.00000000};
    uVar3 = GET_BLIP_INFO_ID_TYPE( uParam0 );
    switch (uVar3)
    {
        case 1:
        uVar7 = GET_BLIP_INFO_ID_CAR_INDEX( uParam0 );
        if (IS_VEH_DRIVEABLE( uVar7 ))
        {
            GET_CAR_COORDINATES( uVar7, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 2:
        uVar8 = GET_BLIP_INFO_ID_PED_INDEX( uParam0 );
        if (NOT (IS_CHAR_INJURED( uVar8 )))
        {
            GET_CHAR_COORDINATES( uVar8, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 3:
        uVar9 = GET_BLIP_INFO_ID_OBJECT_INDEX( uParam0 );
        if (DOES_OBJECT_EXIST( uVar9 ))
        {
            GET_OBJECT_COORDINATES( uVar9, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 4:
        GET_BLIP_COORDS( uParam0, ref Result );
        break;
        case 6:
        uVar10 = GET_BLIP_INFO_ID_PICKUP_INDEX( uParam0 );
        if (DOES_PICKUP_EXIST( uVar10 ))
        {
            GET_PICKUP_COORDINATES( uVar10, ref Result.x, ref Result.y, ref Result.z );
        }
        break;
        case 5:
        GET_BLIP_COORDS( uParam0, ref Result );
        break;
    }
    return Result;
}

int sub_15146(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = GET_INT_STAT( 363 );
    iVar6 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    if (iVar6 <= iVar5)
    {
        return 1;
    }
    return 0;
}

void sub_15218(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        GET_CHAR_COORDINATES( sub_1588(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    iParam1->_fU0 = (uParam0^);
    if (NOT (iParam1->_fU0 == g_U2668))
    {
        FIND_STREET_NAME_AT_POSITION( sub_14808( iParam1->_fU0 ), ref uVar4, ref iVar5 );
    }
    else
    {
        FIND_STREET_NAME_AT_POSITION( g_U2683, ref uVar4, ref iVar5 );
    }
    iParam1->_fU4 = uVar4;
    if (NOT (iVar5 == 0))
    {
        iParam1->_fU8 = iVar5;
    }
    else
    {
        iParam1->_fU8 = uVar4;
    }
    return;
}

int sub_15376(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if (NOT ((sub_15389( uParam0._fU0 )) == 1))
    {
        fVar5 = sub_15470( uParam0._fU0 );
        if (fVar5 > 40.00000000)
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_15389(unknown uParam0)
{
    int Result;

    Result = 6;
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        Result = GET_BLIP_SPRITE( uParam0 );
        if ((Result == 2) || ((Result == 1) || (Result == 0)))
        {
            Result = 1;
        }
    }
    return Result;
}

void sub_15470(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    vector vVar9;

    vVar9 = {0.00000000, 0.00000000, 1E7};
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        GET_CHAR_COORDINATES( sub_1588(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        if (DOES_BLIP_EXIST( uParam0 ))
        {
            vVar6 = {sub_14808( uParam0 )};
            vVar9 = {vVar6 - vVar3};
        }
    }
    return VMAG( vVar9 );
}

int sub_15636(unknown uParam0, unknown uParam1)
{
    if (g_U2671 == (uParam0^))
    {
        return 1;
    }
    return 0;
}

int sub_16524(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;
    float fVar8;

    GET_BLIP_COLOUR( uParam0, ref iVar7 );
    if ((iVar7 == 8) || ((iVar7 == 18) || ((iVar7 == 9) || (iVar7 == 7))))
    {
        uVar6 = GET_BLIP_INFO_ID_TYPE( uParam0 );
        switch (uVar6)
        {
            case 2:
            uVar3 = GET_BLIP_INFO_ID_PED_INDEX( uParam0 );
            if (NOT (IS_CHAR_INJURED( uVar3 )))
            {
                if (NOT (sub_16639( uVar3 )))
                {
                    if (NOT (IS_GROUP_MEMBER( uVar3, sub_1362() )))
                    {
                        if (IS_PLAYER_PLAYING( sub_1532() ))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( uVar3, sub_1588(), 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                if (IS_CHAR_IN_ANY_CAR( uVar3 ))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uVar3, ref iVar5 );
                                    if (IS_VEH_DRIVEABLE( iVar5 ))
                                    {
                                        GET_DRIVER_OF_CAR( iVar5, ref uVar4 );
                                        if (DOES_CHAR_EXIST( uVar4 ))
                                        {
                                            ;
                                        }
                                        if (iVar5 == g_U2687)
                                        {
                                            return 0;
                                        }
                                        else if (IS_PLAYBACK_GOING_ON_FOR_CAR( iVar5 ))
                                        {
                                            return 0;
                                        }
                                        else if (NOT (sub_16888( iVar5 )))
                                        {
                                            return 0;
                                        };;;
                                    }
                                }
                                GET_CHAR_SPEED( uVar3, ref fVar8 );
                                if ((fVar8 > -0.10000000) AND (fVar8 < 0.10000000))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 1:
            iVar5 = GET_BLIP_INFO_ID_CAR_INDEX( uParam0 );
            if (DOES_VEHICLE_EXIST( iVar5 ))
            {
                if (IS_VEH_DRIVEABLE( iVar5 ))
                {
                    if (IS_PLAYER_PLAYING( sub_1532() ))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_1588(), iVar5, 10.00000000, 10.00000000, 10.00000000, 0 )))
                        {
                            if (NOT (IS_CAR_MODEL( iVar5, 2046537925 )))
                            {
                                if (sub_16888( iVar5 ))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 4:
            return 1;
            break;
        }
    }
    return 0;
}

int sub_16639(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_PED_TYPE( uParam0, ref iVar3 );
        if ((iVar3 == 2) || (iVar3 == 6))
        {
            return 1;
        }
    }
    return 0;
}

int sub_16888(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.50000000)
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_17211(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int I;
    int iVar7;

    I = 0;
    iVar7 = 0;
    for ( I = 0; I < 30; I++ )
    {
        if ((sub_15389( l_U208[I]._fU0 )) == (sub_15389( uParam0._fU0 )))
        {
            iVar7 = I;
            I = 30;
        }
        else if (I == l_U183)
        {
            iVar7 = I;
            I = 30;
        }
    }
    I = 0;
    for ( I = 0; I < 30; I++ )
    {
        if (I < iVar7)
        {
            I = iVar7;
        }
        if (I < l_U183)
        {
            if ((sub_15389( l_U208[I]._fU0 )) == (sub_15389( uParam0._fU0 )))
            {
                if (sub_17398( uParam0, l_U208[I] ))
                {
                    if (bParam3)
                    {
                        sub_17461( uParam0, I );
                        I = 30;
                        return;
                    }
                    else
                    {
                        sub_17507( uParam0, I );
                        l_U183++;
                        I = 30;
                        return;
                    }
                }
                else if (bParam3)
                {
                    I = 30;
                    return;
                }
            }
            else
            {
                sub_17507( uParam0, I );
                l_U183++;
                I = 30;
                return;
            }
        }
        else
        {
            sub_17507( uParam0, I );
            l_U183++;
            I = 30;
            return;
        }
    }
    return;
}

int sub_17398(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((sub_15470( uParam0._fU0 )) < (sub_15470( uParam3._fU0 )))
    {
        return 1;
    }
    return 0;
}

void sub_17461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U208[uParam3] = {uParam0};
    return;
}

void sub_17507(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_17518( uParam3 );
    l_U208[uParam3] = {uParam0};
    return;
}

void sub_17518(int iParam0)
{
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    for ( I = 29; I > iParam0; I-- )
    {
        uVar4 = {l_U208[I - 1]};
        l_U208[I] = {uVar4};
    }
    return;
}

void sub_18503()
{
    int Result;
    unknown uVar3;

    Result = 0;
    l_U138 = 1;
    uVar3 = GET_FIRST_BLIP_INFO_ID( 0 );
    while (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_14726( uVar3 ))
        {
            if (sub_14797( uVar3 ))
            {
                if ((sub_16524( uVar3 )) || (((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 3) || (((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 6) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 4))))
                {
                    Result++;
                }
            }
        }
        uVar3 = GET_NEXT_BLIP_INFO_ID( 0 );
    }
    uVar3 = GET_FIRST_BLIP_INFO_ID( 1 );
    while (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_14726( uVar3 ))
        {
            if (sub_14797( uVar3 ))
            {
                if ((sub_16524( uVar3 )) || (((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 3) || (((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 6) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 4))))
                {
                    Result++;
                }
            }
        }
        uVar3 = GET_NEXT_BLIP_INFO_ID( 1 );
    }
    uVar3 = GET_FIRST_BLIP_INFO_ID( 2 );
    while (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_14726( uVar3 ))
        {
            if (sub_14797( uVar3 ))
            {
                if ((sub_16524( uVar3 )) || (((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 3) || (((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 6) || ((GET_BLIP_INFO_ID_TYPE( uVar3 )) == 4))))
                {
                    Result++;
                }
            }
        }
        uVar3 = GET_NEXT_BLIP_INFO_ID( 2 );
    }
    uVar3 = GET_FIRST_BLIP_INFO_ID( 8 );
    if (DOES_BLIP_EXIST( uVar3 ))
    {
        if (sub_14726( uVar3 ))
        {
            if (sub_14797( uVar3 ))
            {
                Result++;
            }
        }
    }
    l_U138 = 0;
    return Result;
}

void sub_19381()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;

    if ((NOT (l_U177 == -1)) AND (DOES_OBJECT_EXIST( l_U197 )))
    {
        fVar9 = 1.26400000;
        fVar10 = 3.93000000;
        fVar11 = 0.60399990;
        fVar12 = 2.32300000;
        fVar13 = 0.60399990;
        fVar14 = 2.32300000;
        if (IS_JAPANESE_VERSION())
        {
            fVar9 = 0.95000000;
            fVar10 = 3.00000000;
            fVar11 = 0.40400000;
            fVar12 = 2.12300000;
            fVar13 = 0.50400000;
            fVar14 = 2.22300000;
        }
        if (NOT (l_U174 == 5))
        {
            sub_19537();
        }
        if (l_U111)
        {
            SET_TEXT_RENDER_ID( l_U177 );
        }
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
        if (l_U107)
        {
            if (l_U132)
            {
                if (DOES_BLIP_EXIST( l_U299._fU0 ))
                {
                    if ((sub_15389( l_U299._fU0 )) == 1)
                    {
                        if (DOES_BLIP_EXIST( l_U299._fU0 ))
                        {
                            GET_BLIP_COLOUR( l_U299._fU0, ref uVar3 );
                        }
                        GET_HUD_COLOUR( uVar3, ref uVar4, ref uVar5, ref uVar6, ref uVar7 );
                        sub_24572( uVar4, uVar5, uVar6, ref uVar4, ref uVar5, ref uVar6 );
                    }
                    fVar2 = (0.07500000 - 0.60000000) + (l_U153 * 0.60000000);
                    if (fVar2 < l_U149)
                    {
                        SET_TEXT_FONT( l_U308 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar9, fVar10 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_15389( l_U299._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        sub_24853( 0.26500000, fVar2, l_U299._fU0 );
                    }
                    if (l_U126)
                    {
                        fVar2 = (0.33700000 - 0.60000000) + (l_U153 * 0.60000000);
                        if (fVar2 < l_U149)
                        {
                            SET_TEXT_FONT( l_U308 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar11, fVar12 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_15389( l_U299._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            if (((sub_25470( l_U299._fU4, l_U299._fU8 )) > 37) || (l_U299._fU4 == l_U299._fU8))
                            {
                                DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY( 0.27000000, fVar2, "STRTNM1", l_U299._fU4 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS( 0.27000000, fVar2, "STRTNM2", l_U299._fU4, l_U299._fU8 );
                            }
                        }
                        fVar2 = (0.47600000 - 0.60000000) + (l_U153 * 0.60000000);
                        if (fVar2 < l_U149)
                        {
                            SET_TEXT_FONT( l_U308 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar13, fVar14 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_15389( l_U299._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            uVar8 = sub_25827( l_U299._fU0 );
                            l_U347 = sub_26532( l_U299._fU0 );
                            if ((NOT ((sub_26623( l_U347, uVar8 )) > 37)) AND (NOT (COMPARE_STRING( uVar8, "FULSTP" ))))
                            {
                                DISPLAY_TEXT_WITH_TWO_STRINGS( 0.27000000, fVar2, "STRTNM3", l_U347, uVar8 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_STRING( 0.27000000, fVar2, "STRTNM1", l_U347 );
                            }
                        }
                    }
                    if (l_U113)
                    {
                        if ((sub_15389( l_U299._fU0 )) == 1)
                        {
                            DRAW_SPRITE( l_U310, 0.09700000, (0.32000000 - 0.60000000) + (l_U153 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_24572( 255, 255, 255, ref uVar4, ref uVar5, ref uVar6 );
                            DRAW_SPRITE( l_U310, 0.09700000, (0.32000000 - 0.60000000) + (l_U153 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                    }
                }
            }
        }
        if (l_U133)
        {
            if (DOES_BLIP_EXIST( l_U302._fU0 ))
            {
                if ((sub_15389( l_U302._fU0 )) == 1)
                {
                    if (DOES_BLIP_EXIST( l_U302._fU0 ))
                    {
                        GET_BLIP_COLOUR( l_U302._fU0, ref uVar3 );
                    }
                    GET_HUD_COLOUR( uVar3, ref uVar4, ref uVar5, ref uVar6, ref uVar7 );
                    sub_24572( uVar4, uVar5, uVar6, ref uVar4, ref uVar5, ref uVar6 );
                }
                fVar2 = 0.07500000 + (l_U153 * 0.60000000);
                if (fVar2 < l_U149)
                {
                    SET_TEXT_FONT( l_U308 );
                    if (IS_JAPANESE_VERSION())
                    {
                        SET_TEXT_FONT( 2 );
                    }
                    SET_TEXT_SCALE( fVar9, fVar10 );
                    SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                    SET_TEXT_CENTRE( 0 );
                    SET_TEXT_RIGHT_JUSTIFY( 0 );
                    if ((sub_15389( l_U302._fU0 )) == 1)
                    {
                        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                    }
                    else
                    {
                        sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                    }
                    SET_TEXT_BACKGROUND( 0 );
                    SET_TEXT_PROPORTIONAL( 1 );
                    sub_24853( 0.26500000, fVar2, l_U302._fU0 );
                }
                if (l_U126)
                {
                    fVar2 = 0.33700000 + (l_U153 * 0.60000000);
                    if (fVar2 < l_U149)
                    {
                        SET_TEXT_FONT( l_U308 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar11, fVar12 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_15389( l_U302._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        if (((sub_25470( l_U302._fU4, l_U302._fU8 )) > 37) || (l_U302._fU4 == l_U302._fU8))
                        {
                            DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY( 0.27000000, fVar2, "STRTNM1", l_U302._fU4 );
                        }
                        else
                        {
                            DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS( 0.27000000, fVar2, "STRTNM2", l_U302._fU4, l_U302._fU8 );
                        }
                    }
                    fVar2 = 0.47600000 + (l_U153 * 0.60000000);
                    if (fVar2 < l_U149)
                    {
                        SET_TEXT_FONT( l_U308 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar13, fVar14 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_15389( l_U302._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        uVar8 = sub_25827( l_U302._fU0 );
                        l_U347 = sub_26532( l_U302._fU0 );
                        if ((NOT ((sub_26623( l_U347, uVar8 )) > 37)) AND (NOT (COMPARE_STRING( uVar8, "FULSTP" ))))
                        {
                            DISPLAY_TEXT_WITH_TWO_STRINGS( 0.27000000, fVar2, "STRTNM3", l_U347, uVar8 );
                        }
                        else
                        {
                            DISPLAY_TEXT_WITH_STRING( 0.27000000, fVar2, "STRTNM1", l_U347 );
                        }
                    }
                }
                if (l_U113)
                {
                    if ((sub_15389( l_U302._fU0 )) == 1)
                    {
                        DRAW_SPRITE( l_U311, 0.09700000, 0.32000000 + (l_U153 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                    }
                    else
                    {
                        sub_24572( 255, 255, 255, ref uVar4, ref uVar5, ref uVar6 );
                        DRAW_SPRITE( l_U311, 0.09700000, 0.32000000 + (l_U153 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                    }
                }
            }
        }
        if (l_U107)
        {
            if (l_U134)
            {
                if (DOES_BLIP_EXIST( l_U305._fU0 ))
                {
                    if ((sub_15389( l_U305._fU0 )) == 1)
                    {
                        if (DOES_BLIP_EXIST( l_U305._fU0 ))
                        {
                            GET_BLIP_COLOUR( l_U305._fU0, ref uVar3 );
                        }
                        GET_HUD_COLOUR( uVar3, ref uVar4, ref uVar5, ref uVar6, ref uVar7 );
                        sub_24572( uVar4, uVar5, uVar6, ref uVar4, ref uVar5, ref uVar6 );
                    }
                    fVar2 = (0.07500000 + 0.60000000) + (l_U153 * 0.60000000);
                    if (fVar2 < l_U149)
                    {
                        SET_TEXT_FONT( l_U308 );
                        if (IS_JAPANESE_VERSION())
                        {
                            SET_TEXT_FONT( 2 );
                        }
                        SET_TEXT_SCALE( fVar9, fVar10 );
                        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                        SET_TEXT_CENTRE( 0 );
                        SET_TEXT_RIGHT_JUSTIFY( 0 );
                        if ((sub_15389( l_U305._fU0 )) == 1)
                        {
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                            SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                        }
                        SET_TEXT_BACKGROUND( 0 );
                        SET_TEXT_PROPORTIONAL( 1 );
                        sub_24853( 0.26500000, fVar2, l_U305._fU0 );
                    }
                    if (l_U126)
                    {
                        fVar2 = (0.33700000 + 0.60000000) + (l_U153 * 0.60000000);
                        if (fVar2 < l_U149)
                        {
                            SET_TEXT_FONT( l_U308 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar11, fVar12 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_15389( l_U305._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            if (((sub_25470( l_U305._fU4, l_U305._fU8 )) > 37) || (l_U305._fU4 == l_U305._fU8))
                            {
                                DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY( 0.27000000, fVar2, "STRTNM1", l_U305._fU4 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS( 0.27000000, fVar2, "STRTNM2", l_U305._fU4, l_U305._fU8 );
                            }
                        }
                        fVar2 = (0.47600000 + 0.60000000) + (l_U153 * 0.60000000);
                        if (fVar2 < l_U149)
                        {
                            SET_TEXT_FONT( l_U308 );
                            if (IS_JAPANESE_VERSION())
                            {
                                SET_TEXT_FONT( 2 );
                            }
                            SET_TEXT_SCALE( fVar13, fVar14 );
                            SET_TEXT_WRAP( 0.00000000, 2.00000000 );
                            SET_TEXT_CENTRE( 0 );
                            SET_TEXT_RIGHT_JUSTIFY( 0 );
                            if ((sub_15389( l_U305._fU0 )) == 1)
                            {
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            else
                            {
                                sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
                                SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
                            }
                            SET_TEXT_BACKGROUND( 0 );
                            SET_TEXT_PROPORTIONAL( 1 );
                            uVar8 = sub_25827( l_U305._fU0 );
                            l_U347 = sub_26532( l_U305._fU0 );
                            if ((NOT ((sub_26623( l_U347, uVar8 )) > 37)) AND (NOT (COMPARE_STRING( uVar8, "FULSTP" ))))
                            {
                                DISPLAY_TEXT_WITH_TWO_STRINGS( 0.27000000, fVar2, "STRTNM3", l_U347, uVar8 );
                            }
                            else
                            {
                                DISPLAY_TEXT_WITH_STRING( 0.27000000, fVar2, "STRTNM1", l_U347 );
                            }
                        }
                    }
                    if (l_U113)
                    {
                        if ((sub_15389( l_U305._fU0 )) == 1)
                        {
                            DRAW_SPRITE( l_U312, 0.09700000, (0.32000000 + 0.60000000) + (l_U153 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                        else
                        {
                            sub_24572( 255, 255, 255, ref uVar4, ref uVar5, ref uVar6 );
                            DRAW_SPRITE( l_U312, 0.09700000, (0.32000000 + 0.60000000) + (l_U153 * 0.60000000), 0.14100000, 0.40700000, 0.00000000, uVar4, uVar5, uVar6, 255 );
                        }
                    }
                }
            }
        }
        if (g_U2673)
        {
            l_U170 = 0.00000000;
        }
        iVar15 = FLOOR( l_U170 );
        iVar16 = FLOOR( (TO_FLOAT( iVar15 )) * 0.00100000 );
        iVar15 += iVar16 * 64536;
        iVar17 = FLOOR( (TO_FLOAT( iVar15 )) * 0.01000000 );
        iVar15 += iVar17 * 65436;
        iVar18 = FLOOR( (TO_FLOAT( iVar15 )) * 0.10000000 );
        iVar15 += iVar18 * -10;
        iVar19 = iVar15;
        SET_TEXT_FONT( l_U308 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT( l_U154[0], 0.73100000, "DOLLR" );
        }
        else
        {
            DISPLAY_TEXT( l_U154[4], 0.73100000, "DOLLR" );
        }
        SET_TEXT_FONT( l_U308 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[1], 0.73100000, "NUMBR", iVar16 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[0], 0.73100000, "NUMBR", iVar16 );
        }
        SET_TEXT_FONT( l_U308 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[2], 0.73100000, "NUMBR", iVar17 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[1], 0.73100000, "NUMBR", iVar17 );
        }
        SET_TEXT_FONT( l_U308 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[3], 0.73100000, "NUMBR", iVar18 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[2], 0.73100000, "NUMBR", iVar18 );
        }
        SET_TEXT_FONT( l_U308 );
        if (IS_JAPANESE_VERSION())
        {
            SET_TEXT_FONT( 2 );
        }
        SET_TEXT_SCALE( 1.66100000, 4.80000000 );
        SET_TEXT_WRAP( 0.00000000, 1.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        sub_24572( 255, 0, 0, ref uVar4, ref uVar5, ref uVar6 );
        SET_TEXT_COLOUR( uVar4, uVar5, uVar6, 255 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (NOT (4 == GET_CURRENT_LANGUAGE()))
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[4], 0.73100000, "NUMBR", iVar19 );
        }
        else
        {
            DISPLAY_TEXT_WITH_NUMBER( l_U154[3], 0.73100000, "NUMBR", iVar19 );
        }
    }
    return;
}

void sub_19537()
{
    int I;
    boolean bVar3;

    bVar3 = false;
    if (l_U183 > 0)
    {
        sub_19561();
        l_U132 = 1;
        if (l_U176 > 0)
        {
            l_U299 = {l_U208[l_U176 - 1]};
        }
        else if (l_U176 == 0)
        {
            l_U299 = {l_U208[l_U183 - 1]};
        }
        else
        {
            l_U132 = 0;
        }
        l_U133 = 1;
        if (l_U183 > 0)
        {
            l_U302 = {l_U208[l_U176]};
        }
        else
        {
            l_U133 = 0;
        }
        l_U134 = 1;
        if (l_U176 < (l_U183 - 1))
        {
            l_U305 = {l_U208[l_U176 + 1]};
        }
        else if (l_U176 == (l_U183 - 1))
        {
            l_U305 = {l_U208[0]};
        }
        else
        {
            l_U134 = 0;
        }
        if (NOT (l_U310 == nil))
        {
            sub_19875( l_U310 );
        }
        l_U310 = sub_19982( sub_15389( l_U299._fU0 ) );
        if (NOT (l_U311 == nil))
        {
            sub_19875( l_U311 );
        }
        l_U311 = sub_19982( sub_15389( l_U302._fU0 ) );
        if (NOT (l_U312 == nil))
        {
            sub_19875( l_U312 );
        }
        l_U312 = sub_19982( sub_15389( l_U305._fU0 ) );
        if (l_U132)
        {
            if (NOT (DOES_BLIP_EXIST( l_U299._fU0 )))
            {
                bVar3 = true;
            }
        }
        if (l_U133)
        {
            if (NOT (DOES_BLIP_EXIST( l_U302._fU0 )))
            {
                bVar3 = true;
            }
        }
        if (l_U134)
        {
            if (NOT (DOES_BLIP_EXIST( l_U305._fU0 )))
            {
                bVar3 = true;
            }
        }
        if ((l_U174 == 1) || (l_U108))
        {
            if (DOES_BLIP_EXIST( l_U102 ))
            {
                if (NOT (l_U102 == l_U302._fU0))
                {
                    if (l_U131)
                    {
                        SET_BLIP_AS_SHORT_RANGE( l_U102, 1 );
                        l_U131 = 0;
                    }
                    FLASH_BLIP( l_U102, 0 );
                }
            }
            l_U102 = l_U302._fU0;
            if (DOES_BLIP_EXIST( l_U102 ))
            {
                if (IS_BLIP_SHORT_RANGE( l_U102 ))
                {
                    SET_BLIP_AS_SHORT_RANGE( l_U102, 0 );
                    l_U131 = 1;
                }
                FLASH_BLIP( l_U102, 1 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U102 ))
        {
            FLASH_BLIP( l_U102, 0 );
        }
    }
    if (l_U129)
    {
        bVar3 = true;
        l_U129 = 0;
    }
    if (NOT bVar3)
    {
        for ( I = 0; I < l_U183; I++ )
        {
            if (NOT (l_U208[I]._fU0 == nil))
            {
                if (NOT (DOES_BLIP_EXIST( l_U208[I]._fU0 )))
                {
                    bVar3 = true;
                }
            }
        }
    }
    if (NOT bVar3)
    {
        l_U186 = sub_23957();
        if (NOT (l_U186 == l_U187))
        {
            bVar3 = true;
        }
        l_U187 = l_U186;
    }
    if (NOT bVar3)
    {
        l_U184 = sub_18503();
        if (NOT (l_U184 == l_U185))
        {
            bVar3 = true;
        }
        l_U185 = l_U184;
    }
    if (NOT bVar3)
    {
        l_U188 = sub_24162();
        if (NOT (l_U188 == l_U189))
        {
            bVar3 = true;
        }
        l_U189 = l_U188;
    }
    if (NOT bVar3)
    {
        if (NOT (GET_MISSION_FLAG() == l_U124))
        {
            bVar3 = true;
        }
        l_U124 = GET_MISSION_FLAG();
    }
    if (bVar3)
    {
        sub_14500();
        sub_19537();
    }
    return;
}

void sub_19561()
{
    if (l_U176 < 0)
    {
        l_U176 = l_U183 - 1;
    }
    if (l_U176 > (l_U183 - 1))
    {
        l_U176 = 0;
    }
    return;
}

void sub_19875(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    if (iParam0 == l_U310)
    {
        iVar3++;
    }
    if (iParam0 == l_U311)
    {
        iVar3++;
    }
    if (iParam0 == l_U312)
    {
        iVar3++;
    }
    if (iVar3 == 1)
    {
        RELEASE_TEXTURE( iParam0 );
    }
    return;
}

void sub_19982(unknown uParam0)
{
    switch (uParam0)
    {
        case 21: return GET_TEXTURE( l_U309, "radar_burgershot" );
        case 22: return GET_TEXTURE( l_U309, "radar_chicken" );
        case 23: return GET_TEXTURE( l_U309, "radar_vlad" );
        case 24: return GET_TEXTURE( l_U309, "radar_internet" );
        case 26: return GET_TEXTURE( l_U309, "radar_littlejacob" );
        case 27: return GET_TEXTURE( l_U309, "radar_roman" );
        case 28: return GET_TEXTURE( l_U309, "radar_faustin" );
        case 29: return GET_TEXTURE( l_U309, "radar_safehouse" );
        case 31: return GET_TEXTURE( l_U309, "radar_berniecrane" );
        case 32: return GET_TEXTURE( l_U309, "radar_brucie" );
        case 33: return GET_TEXTURE( l_U309, "radar_cia" );
        case 34: return GET_TEXTURE( l_U309, "radar_dwayne" );
        case 35: return GET_TEXTURE( l_U309, "radar_elizabeta" );
        case 36: return GET_TEXTURE( l_U309, "radar_gambetti" );
        case 37: return GET_TEXTURE( l_U309, "radar_jimmy" );
        case 38: return GET_TEXTURE( l_U309, "radar_mcderrick" );
        case 39: return GET_TEXTURE( l_U309, "radar_mcfrancis" );
        case 40: return GET_TEXTURE( l_U309, "radar_mcgerry" );
        case 41: return GET_TEXTURE( l_U309, "radar_mckatie" );
        case 42: return GET_TEXTURE( l_U309, "radar_mcpackie" );
        case 43: return GET_TEXTURE( l_U309, "radar_philbell" );
        case 44: return GET_TEXTURE( l_U309, "radar_playboyx" );
        case 45: return GET_TEXTURE( l_U309, "radar_rayboccino" );
        case 46: return GET_TEXTURE( l_U309, "radar_8ball" );
        case 47: return GET_TEXTURE( l_U309, "radar_bar" );
        case 48: return GET_TEXTURE( l_U309, "radar_boattour" );
        case 49: return GET_TEXTURE( l_U309, "radar_bowling" );
        case 50: return GET_TEXTURE( l_U309, "radar_clothes" );
        case 51: return GET_TEXTURE( l_U309, "radar_club" );
        case 52: return GET_TEXTURE( l_U309, "radar_darts" );
        case 54: return GET_TEXTURE( l_U309, "radar_girlfriend" );
        case 56: return GET_TEXTURE( l_U309, "radar_helitour" );
        case 57: return GET_TEXTURE( l_U309, "radar_restaurant" );
        case 58: return GET_TEXTURE( l_U309, "radar_station" );
        case 59: return GET_TEXTURE( l_U309, "radar_weapons" );
        case 1: return GET_TEXTURE( l_U309, "radar_level" );
        case 60: return GET_TEXTURE( l_U309, "radar_police" );
        case 61: return GET_TEXTURE( l_U309, "radar_fire" );
        case 62: return GET_TEXTURE( l_U309, "radar_hospital" );
        case 8: return GET_TEXTURE( l_U309, "radar_waypoint" );
        case 63: return GET_TEXTURE( l_U309, "radar_male" );
        case 64: return GET_TEXTURE( l_U309, "radar_female" );
        case 65: return GET_TEXTURE( l_U309, "radar_raceflag" );
        case 66: return GET_TEXTURE( l_U309, "radar_stripclub" );
        case 69: return GET_TEXTURE( l_U309, "radar_dimitri" );
        case 70: return GET_TEXTURE( l_U309, "radar_comedy" );
        case 71: return GET_TEXTURE( l_U309, "radar_cabaret" );
        case 72: return GET_TEXTURE( l_U309, "radar_ransom" );
        case 74: return GET_TEXTURE( l_U309, "radar_michelle" );
        case 75: return GET_TEXTURE( l_U309, "radar_sprayshop" );
        case 76: return GET_TEXTURE( l_U309, "radar_assassin" );
        case 77: return GET_TEXTURE( l_U309, "radar_snake" );
        case 78: return GET_TEXTURE( l_U309, "radar_deal" );
        case 25: return GET_TEXTURE( l_U309, "radar_manny" );
        case 80: return GET_TEXTURE( l_U309, "radar_lawyer" );
        case 82: return GET_TEXTURE( l_U309, "radar_multiplayer" );
        case 92: return GET_TEXTURE( l_U309, "radar_united_liberty_paper" );
        case 55: return GET_TEXTURE( l_U309, "radar_playboyx_red" );
        case 53: return GET_TEXTURE( l_U309, "radar_dwayne_red" );
        case 95: return GET_TEXTURE( l_U309, "episode_blip_1" );
        case 96: return GET_TEXTURE( l_U309, "episode_blip_2" );
        case 97: return GET_TEXTURE( l_U309, "episode_blip_3" );
        case 98: return GET_TEXTURE( l_U309, "episode_blip_4" );
        case 99: return GET_TEXTURE( l_U309, "episode_blip_5" );
        case 100: return GET_TEXTURE( l_U309, "episode_blip_6" );
        case 101: return GET_TEXTURE( l_U309, "episode_blip_7" );
        case 102: return GET_TEXTURE( l_U309, "episode_blip_8" );
        case 103: return GET_TEXTURE( l_U309, "episode_blip_9" );
        case 104: return GET_TEXTURE( l_U309, "episode_blip_10" );
        case 105: return GET_TEXTURE( l_U309, "episode_blip_11" );
        case 106: return GET_TEXTURE( l_U309, "episode_blip_12" );
        case 107: return GET_TEXTURE( l_U309, "episode_blip_13" );
        case 108: return GET_TEXTURE( l_U309, "episode_blip_14" );
        case 109: return GET_TEXTURE( l_U309, "episode_blip_15" );
        case 120: return GET_TEXTURE( l_U309, "TERRITORY_1" );
        case 121: return GET_TEXTURE( l_U309, "TERRITORY_2" );
        case 122: return GET_TEXTURE( l_U309, "TERRITORY_3" );
        case 110: return GET_TEXTURE( l_U309, "radar_armwrestling" );
        case 111: return GET_TEXTURE( l_U309, "radar_roadrage" );
        case 112: return GET_TEXTURE( l_U309, "radar_cardgame" );
        case 113: return GET_TEXTURE( l_U309, "radar_airhockey" );
        case 114: return GET_TEXTURE( l_U309, "radar_gangwar" );
        case 118: return GET_TEXTURE( l_U309, "radar_terry" );
        case 119: return GET_TEXTURE( l_U309, "radar_clay" );
        case 126: return GET_TEXTURE( l_U309, "radar_motorcycle" );
        case 127: return GET_TEXTURE( l_U309, "radar_jimsweapon" );
    }
    return GET_TEXTURE( l_U309, "radar_level" );
    return nil;
}

void sub_23957()
{
    int I;
    int Result;
    unknown uVar4;
    int iVar5;

    Result = 0;
    for ( I = 0; I < 128; I++ )
    {
        uVar4 = GET_FIRST_BLIP_INFO_ID( I );
        while (DOES_BLIP_EXIST( uVar4 ))
        {
            iVar5 = GET_BLIP_INFO_ID_TYPE( uVar4 );
            if (iVar5 == 5)
            {
                Result++;
            }
            uVar4 = GET_NEXT_BLIP_INFO_ID( I );
        }
    }
    return Result;
}

void sub_24162()
{
    int I;
    int Result;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    Result = 0;
    iVar5 = 21;
    iVar6 = 127;
    for ( I = 0; I < 128; I++ )
    {
        if ((I <= iVar6) AND (I >= iVar5))
        {
            uVar4 = GET_FIRST_BLIP_INFO_ID( I );
            while (DOES_BLIP_EXIST( uVar4 ))
            {
                iVar7 = GET_BLIP_INFO_ID_TYPE( uVar4 );
                if (NOT (iVar7 == 5))
                {
                    Result++;
                }
                uVar4 = GET_NEXT_BLIP_INFO_ID( I );
            }
        }
    }
    return Result;
}

void sub_24572(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (l_U139)
    {
        GET_CORRECTED_COLOUR( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
    }
    else
    {
        (uParam3^) = uParam0;
        (uParam4^) = uParam1;
        (uParam5^) = uParam2;
    }
    return;
}

void sub_24853(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    if (DOES_BLIP_EXIST( uParam2 ))
    {
        iVar5 = sub_15389( uParam2 );
        if (iVar5 == 92)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_ULP" );
        }
        else if (iVar5 == 82)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_MPT" );
        }
        else if (iVar5 == 108)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_WAR" );
        }
        else if (iVar5 == 106)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_BAS" );
        }
        else if (iVar5 == 122)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_BAS" );
        }
        else if (iVar5 == 120)
        {
            DISPLAY_TEXT( uParam0, uParam1, "TX_FIC" );
        }
        else
        {
            DISPLAY_TEXT_WITH_BLIP_NAME( uParam0, uParam1, "STRTNM1", uParam2 );
        };;;;;;
    }
    else
    {
        SCRIPT_ASSERT( "DISPLAY_TAXI_BLIP_NAME - blip doesn't exist. What should be displayed in this case?" );
    }
    return;
}

int sub_25470(int iParam0, int iParam1)
{
    if (iParam0 == iParam1)
    {
        return GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY( iParam0 );
        break;
    }
    return ((GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY( iParam0 )) + (GET_LENGTH_OF_STRING_WITH_THIS_HASH_KEY( iParam1 ))) + 5;
}

string sub_25827(unknown uParam0)
{
    unknown uVar3;

    l_U138 = 1;
    uVar3 = GET_MAP_AREA_FROM_COORDS( sub_14808( uParam0 ) );
    l_U138 = 0;
    switch (uVar3)
    {
        case 0:
        if (sub_25907( uParam0 ))
        {
            return "DEST_BR";
        }
        else
        {
            return "DEST_DK";
        }
        break;
        case 1:
        if (sub_26323( uParam0 ))
        {
            return "FULSTP";
        }
        else
        {
            return "DEST_BO";
        }
        break;
        case 2:
        return "DEST_AL";
        break;
        case 3:
        return "DEST_AD";
        break;
        default:
        return "FULSTP";
        break;
    }
    return "FULSTP";
}

int sub_25907(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_BLIP_EXIST( uParam0 ))
    {
        uVar3 = {sub_14808( uParam0 )};
        uVar6 = GET_NAME_OF_ZONE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        if (COMPARE_STRING( uVar6, "ESHOO" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "OUTL" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "SCHOL" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "SUTHS" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "BEECW" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "BEGGA" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "DOWTW" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "BOAB" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "ROTTH" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "FIISL" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "FIREP" ))
        {
            return 1;
        }
        if (COMPARE_STRING( uVar6, "HOBEH" ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26323(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_BLIP_EXIST( uParam0 ))
    {
        uVar3 = {sub_14808( uParam0 )};
        uVar6 = GET_NAME_OF_ZONE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        if (COMPARE_STRING( uVar6, "CHISL" ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_26532(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U138 = 1;
    uVar3 = {sub_14808( uParam0 )};
    l_U138 = 0;
    return GET_NAME_OF_ZONE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
}

int sub_26623(unknown uParam0, unknown uParam1)
{
    if (COMPARE_STRING( uParam0, uParam1 ))
    {
        return GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam0 );
        break;
    }
    return ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam0 )) + (GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( uParam1 ))) + 2;
}

void sub_30833(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CAR_HEADING( uParam0, ref uVar7 );
            GET_CAR_ROLL( uParam0, ref uVar9 );
            GET_CAR_PITCH( uParam0, ref uVar8 );
            vVar10.x = uVar8 * 0.80000000;
            vVar10.y = uVar9 * -0.80000000;
            vVar10.z = uVar7;
            vVar10 = {vVar10 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar10.x, vVar10.y, vVar10.z );
        }
    }
    return;
}

int sub_32103(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_CAM_EXIST( l_U348 )))
    {
        if (DOES_CAM_EXIST( (uParam0^) ))
        {
            SET_CAM_ACTIVE( (uParam0^), 1 );
            SET_CAM_PROPAGATE( (uParam0^), 0 );
        }
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            SET_CAM_ACTIVE( (uParam1^), 1 );
            SET_CAM_PROPAGATE( (uParam1^), 0 );
        }
        CREATE_CAM( 3, ref l_U348 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U348, 1, 1, 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U348, (uParam0^), (uParam1^), uParam2, 0 );
        SET_CAM_ACTIVE( l_U348, 1 );
        SET_CAM_PROPAGATE( l_U348, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U348 )))
    {
        DESTROY_CAM( l_U348 );
        SET_CAM_ACTIVE( (uParam1^), 1 );
        SET_CAM_PROPAGATE( (uParam1^), 1 );
        return 1;
    }
    return 0;
}

int sub_32559()
{
    if ((sub_32573()) AND (l_U122))
    {
        return 1;
    }
    return 0;
}

int sub_32573()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_32763(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if ((IS_PLAYER_PLAYING( sub_1532() )) AND (NOT (IS_CAR_DEAD( l_U343 ))))
    {
        if (DOES_GROUP_EXIST( sub_1362() ))
        {
            GET_GROUP_SIZE( sub_1362(), ref uVar4, ref iVar3 );
            if (iVar3 > 0)
            {
                GET_GROUP_MEMBER( sub_1362(), 0, ref l_U199 );
                if (NOT (IS_CHAR_INJURED( l_U199 )))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U199, l_U343 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1588(), l_U199, 15.00000000, 15.00000000, 15.00000000, 0 ))
                        {
                            if ((IS_SCREEN_FADED_OUT()) || (NOT (sub_32949( l_U199, l_U343 ))))
                            {
                                if ((IS_SCREEN_FADED_OUT()) || ((uParam0) || (NOT (IS_CHAR_ON_SCREEN( l_U199 )))))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 1 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 1 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 2 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 2 );
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 0 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 0 );
                                    };;;
                                }
                            }
                        }
                    }
                }
                if (iVar3 > 1)
                {
                    GET_GROUP_MEMBER( sub_1362(), 1, ref l_U199 );
                    if (NOT (IS_CHAR_INJURED( l_U199 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U199, l_U343 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1588(), l_U199, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                if ((IS_SCREEN_FADED_OUT()) || (NOT (sub_32949( l_U199, l_U343 ))))
                                {
                                    if ((IS_SCREEN_FADED_OUT()) || ((uParam0) || (NOT (IS_CHAR_ON_SCREEN( l_U199 )))))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 1 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 1 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 2 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 2 );
                                        }
                                        else if (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 0 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U199, l_U343, 0 );
                                        };;;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U127)
        {
            if (NOT l_U128)
            {
                if (DOES_GROUP_EXIST( sub_1362() ))
                {
                    l_U128 = 1;
                    GET_GROUP_SIZE( sub_1362(), ref uVar4, ref iVar3 );
                    if (iVar3 > 0)
                    {
                        GET_GROUP_MEMBER( sub_1362(), 0, ref l_U199 );
                        if (NOT (IS_CHAR_INJURED( l_U199 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U199, l_U343 )))
                            {
                                l_U128 = 0;
                            }
                        }
                        if (iVar3 > 1)
                        {
                            GET_GROUP_MEMBER( sub_1362(), 1, ref l_U199 );
                            if (NOT (IS_CHAR_INJURED( l_U199 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U199, l_U343 )))
                                {
                                    l_U128 = 0;
                                }
                            }
                        }
                    }
                }
                if (l_U128)
                {
                    CLOSE_ALL_CAR_DOORS( l_U343 );
                }
            }
        }
    }
    return;
}

int sub_32949(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( iParam1 )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (DOES_VEHICLE_EXIST( iVar4 ))
            {
                if (iVar4 == iParam1)
                {
                    if (IS_PED_JACKING( uParam0 ))
                    {
                        return 1;
                    }
                    if (NOT (IS_CHAR_ON_FOOT( uParam0 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_33749()
{
    if ((sub_33840( 0 )) || (sub_33759( 0 )))
    {
        GET_FRAME_TIME( ref l_U152 );
        l_U179 += ROUND( l_U152 * 1000.00000000 );
    }
    else
    {
        l_U179 = 0;
    }
    if (NOT l_U106)
    {
        if (NOT l_U103)
        {
            if ((NOT sub_32559()) AND (sub_33759( 0 )))
            {
                l_U105 = 1;
                l_U103 = 1;
            }
        }
        else if ((NOT sub_32559()) AND (sub_33759( 0 )))
        {
            if (l_U179 > 1000)
            {
                l_U105 = 1;
            }
        }
    }
    if (NOT l_U105)
    {
        if (NOT l_U103)
        {
            if ((NOT sub_32559()) AND (sub_33840( 0 )))
            {
                l_U106 = 1;
                l_U103 = 1;
            }
        }
        else if ((NOT sub_32559()) AND (sub_33840( 0 )))
        {
            if (l_U179 > 1000)
            {
                l_U106 = 1;
            }
        }
    }
    if (l_U105)
    {
        sub_34177();
    }
    if (l_U106)
    {
        sub_34319();
    }
    return;
}

int sub_33759(unknown uParam0)
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
    if (((IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )) AND (uParam0)) || (iVar4 < 65504))
    {
        return 1;
    }
    return 0;
}

int sub_33840(unknown uParam0)
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
    if (((IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 )) AND (uParam0)) || (iVar4 > 32))
    {
        return 1;
    }
    return 0;
}

void sub_34177()
{
    l_U153 += 0.20000000;
    if (l_U153 > 1.00000000)
    {
        l_U153 = 0.00000000;
        l_U176 += -1;
        sub_19561();
        l_U105 = 0;
        l_U107 = 0;
        PLAY_AUDIO_EVENT( "HEADLAMP_SWITCH_BEAM_ON" );
    }
    else
    {
        l_U107 = 1;
    }
    return;
}

void sub_34319()
{
    l_U153 += 0.20000000 * -1.00000000;
    if (l_U153 < -1.00000000)
    {
        l_U153 = 0.00000000;
        l_U176++;
        sub_19561();
        l_U106 = 0;
        l_U107 = 0;
        PLAY_AUDIO_EVENT( "HEADLAMP_SWITCH_BEAM_ON" );
    }
    else
    {
        l_U107 = 1;
    }
    return;
}

void sub_34631(unknown uParam0, int iParam1, unknown uParam2)
{
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    boolean bVar12;
    boolean bVar13;
    vector vVar14;
    vector vVar17;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    int iVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    int iVar27;

    bVar13 = false;
    SETTIMERA( 0 );
    if (NOT ((uParam0^) == g_U2668))
    {
        if (LOAD_ALL_PATH_NODES( 1 ))
        {
            bVar13 = true;
        }
    }
    iVar11 = 1;
    bVar12 = false;
    l_U140 = 0;
    l_U144 = 0;
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        if (NOT ((uParam0^) == g_U2668))
        {
            if (NOT (sub_34740( uParam0, iParam1, uParam2 )))
            {
                vVar5 = {sub_14808( (uParam0^) )};
                l_U340 = {vVar5};
                sub_34946( ref vVar5 );
                if (NOT (sub_35163( vVar5, iParam1, uParam2 )))
                {
                    if (bVar13)
                    {
                        if (sub_36091( vVar5 ))
                        {
                            while (NOT bVar12)
                            {
                                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( vVar5.x, vVar5.y, vVar5.z, iVar11, GET_MAP_AREA_FROM_COORDS( vVar5 ), iParam1 + 0, iParam1 + 4, iParam1 + 8, uParam2, ref iVar27 );
                                if (sub_36276( vVar5 ))
                                {
                                    if (iVar27 >= 1)
                                    {
                                        if (iVar27 == 1)
                                        {
                                            sub_36425( iParam1, (uParam2^), 0.00000000 );
                                        }
                                        else
                                        {
                                            sub_36425( iParam1, (uParam2^), 2.00000000 );
                                        }
                                        if (sub_36804( vVar5, (iParam1^) ))
                                        {
                                            bVar12 = true;
                                        }
                                        else
                                        {
                                            iVar11++;
                                            bVar12 = false;
                                        }
                                    }
                                    else
                                    {
                                        iVar11++;
                                        bVar12 = false;
                                    }
                                }
                                else if (iVar27 >= 2)
                                {
                                    sub_36425( iParam1, (uParam2^), 2.00000000 );
                                    if (sub_36804( vVar5, (iParam1^) ))
                                    {
                                        bVar12 = true;
                                    }
                                    else
                                    {
                                        iVar11++;
                                        bVar12 = false;
                                    }
                                }
                                else
                                {
                                    iVar11++;
                                    bVar12 = false;
                                }
                                if (iVar11 > 100)
                                {
                                    bVar12 = true;
                                }
                            }
                        }
                        else
                        {
                            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( vVar5.x, vVar5.y, vVar5.z, 1, GET_MAP_AREA_FROM_COORDS( vVar5 ), iParam1 + 0, iParam1 + 4, iParam1 + 8, uParam2, ref iVar27 );
                            if (sub_36276( vVar5 ))
                            {
                                iVar23 = 1;
                            }
                            else
                            {
                                iVar23 = 2;
                            }
                            GET_CLOSEST_ROAD( (iParam1^), 0.00000000, iVar23, ref vVar17, ref vVar14, ref uVar24, ref uVar25, ref uVar26 );
                            uVar20 = {(vVar17 + vVar14) * 0.50000000};
                            while (NOT bVar12)
                            {
                                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar20._fU0, uVar20._fU4, uVar20._fU8, iVar11, GET_MAP_AREA_FROM_COORDS( uVar20 ), iParam1 + 0, iParam1 + 4, iParam1 + 8, uParam2, ref iVar27 );
                                iVar11++;
                                if (sub_36276( vVar5 ))
                                {
                                    if (iVar27 >= 1)
                                    {
                                        if (iVar27 == 1)
                                        {
                                            sub_36425( iParam1, (uParam2^), 0.00000000 );
                                        }
                                        else
                                        {
                                            sub_36425( iParam1, (uParam2^), 2.00000000 );
                                        }
                                        if (sub_36804( vVar5, (iParam1^) ))
                                        {
                                            bVar12 = true;
                                        }
                                    }
                                }
                                else if (iVar27 >= 2)
                                {
                                    sub_36425( iParam1, (uParam2^), 2.00000000 );
                                    if (sub_36804( vVar5, (iParam1^) ))
                                    {
                                        bVar12 = true;
                                    }
                                }
                                if (iVar11 > 100)
                                {
                                    bVar12 = true;
                                }
                            }
                        }
                    }
                    else
                    {
                        l_U144 = 1;
                        (iParam1^) = {vVar5};
                        (uParam2^) = 0.00000000;
                    }
                }
                else
                {
                    l_U140 = 1;
                }
            }
            else
            {
                l_U140 = 1;
            }
        }
        else
        {
            (iParam1^) = {g_U2683};
            (uParam2^) = g_U2681;
            l_U140 = 1;
        }
    }
    uVar8 = {vVar5 - (iParam1^)};
    uVar8._fU8 = 0.00000000;
    l_U160 = VMAG( uVar8 );
    return;
}

int sub_34740(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam0^) == g_U11582[8]._fU32)
    {
        (uParam1^) = {1083.58600000, -638.18510000, 12.30600000};
        (uParam2^) = 167.03590000;
        return 1;
    }
    if ((uParam0^) == g_U11582[7]._fU32)
    {
        (uParam1^) = {1083.58600000, -638.18510000, 12.30600000};
        (uParam2^) = 167.03590000;
        return 1;
    }
    if ((uParam0^) == g_U11582[43]._fU32)
    {
        (uParam1^) = {60.54850000, -349.28930000, 13.68210000};
        (uParam2^) = 347.51950000;
        return 1;
    }
    return 0;
}

void sub_34946(int iParam0)
{
    if (sub_34991( (iParam0^), 827.20500000, -22.47010000, -100.00000000, 870.00480000, 40.87990000, 100.00000000 ))
    {
        iParam0->_fU8 = 25.00000000;
    }
    if (sub_34991( (iParam0^), 836.77980000, -59.49510000, -100.00000000, 885.12980000, 7.05490000, 100.00000000 ))
    {
        iParam0->_fU8 = 25.00000000;
    }
    return;
}

int sub_34991(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((uParam0._fU8 < uParam6._fU8) AND ((uParam0._fU8 > uParam3._fU8) AND ((uParam0._fU4 < uParam6._fU4) AND ((uParam0._fU4 > uParam3._fU4) AND ((uParam0._fU0 < uParam6._fU0) AND (uParam0._fU0 > uParam3._fU0))))))
    {
        return 1;
    }
    return 0;
}

int sub_35163(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_34991( uParam0, -1424.09100000, 1419.62500000, -100.00000000, -1326.14100000, 1537.05000000, 100.00000000 ))
    {
        (uParam3^) = {-1336.92300000, 1398.01600000, 16.42480000};
        (uParam4^) = 51.45030000;
        return 1;
    }
    if ((sub_34991( uParam0, -961.97500000, 1613.37500000, -100.00000000, -801.82500000, 1852.27500000, 100.00000000 )) || (sub_34991( uParam0, -1015.45000000, 1839.62700000, -100.00000000, -912.00000000, 1911.17700000, 100.00000000 )))
    {
        (uParam3^) = {-967.80370000, 1621.11400000, 22.68430000};
        (uParam4^) = 346.00000000;
        return 1;
    }
    if (sub_34991( uParam0, -280.00000000, -1064.00000000, -100.00000000, 40.00000000, -829.70000000, 100.00000000 ))
    {
        (uParam3^) = {-62.74670000, -802.31920000, 4.08270000};
        (uParam4^) = 263.42180000;
        return 1;
    }
    if (sub_34991( uParam0, 1150.35000000, 166.92000000, -100.00000000, 1209.71800000, 220.72960000, 100.00000000 ))
    {
        (uParam3^) = {1187.63500000, 191.45070000, 31.45980000};
        (uParam4^) = 10.10320000;
        return 1;
    }
    if (sub_34991( uParam0, 905.62530000, 555.79520000, -100.00000000, 938.07530000, 585.87020000, 100.00000000 ))
    {
        (uParam3^) = {931.05550000, 555.78030000, 21.22510000};
        (uParam4^) = 87.32521000;
        return 1;
    }
    if (sub_34991( uParam0, -1747.39500000, 326.90120000, -100.00000000, -1693.32000000, 373.90120000, 100.00000000 ))
    {
        (uParam3^) = {-1709.75000000, 364.30460000, 24.41140000};
        (uParam4^) = 239.73120000;
        return 1;
    }
    if (sub_34991( uParam0, -668.37000000, 1192.00000000, -100.00000000, -579.52000000, 1231.31000000, 100.00000000 ))
    {
        (uParam3^) = {-626.61740000, 1213.13600000, 4.93560000};
        (uParam4^) = 261.57100000;
        return 1;
    }
    if (sub_34991( uParam0, -386.21990000, 1523.56100000, -100.00000000, -361.45190000, 1550.42000000, 100.00000000 ))
    {
        (uParam3^) = {-380.23610000, 1535.66000000, 18.62940000};
        (uParam4^) = 174.67110000;
        return 1;
    }
    if (sub_34991( uParam0, -461.56820000, 1379.09300000, -100.00000000, -443.18930000, 1409.12700000, 100.00000000 ))
    {
        (uParam3^) = {-458.49660000, 1393.50500000, 14.36390000};
        (uParam4^) = 180;
        return 1;
    }
    if (sub_34991( uParam0, -460.71810000, 342.04720000, -100.00000000, -442.80620000, 372.72280000, 100.00000000 ))
    {
        (uParam3^) = {-459.08250000, 358.33610000, 9.82769900};
        (uParam4^) = 180;
        return 1;
    }
    if (sub_34991( uParam0, -466.46440000, 133.69040000, -100.00000000, -448.70820000, 170.94790000, 100.00000000 ))
    {
        (uParam3^) = {-461.65680000, 166.77250000, 8.70850000};
        (uParam4^) = 180;
        return 1;
    }
    return 0;
}

int sub_36091(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_34991( uParam0, -1242.89800000, 245.24480000, -100.00000000, -898.57300000, 577.49480000, 100.00000000 ))
    {
        return 1;
    }
    if (sub_34991( uParam0, -1266.19900000, -175.80000000, -100.00000000, -895.25000000, 240.00000000, 100.00000000 ))
    {
        return 1;
    }
    return 0;
}

int sub_36276(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_34991( uParam0, 433.00000000, 576.00000000, -100.00000000, 701.87500000, 1144.00000000, 100.00000000 ))
    {
        return 1;
    }
    if (sub_34991( uParam0, 565.19190000, 1365.01900000, -100.00000000, 651.79190000, 1445.51900000, 100.00000000 ))
    {
        return 1;
    }
    return 0;
}

void sub_36425(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;

    vVar5 = {0.00000000, uParam2, 0.00000000};
    vVar8 = {0.00000000, 0.00000000, uParam1 - 90.00000000};
    sub_36476( ref vVar5, vVar8 );
    (uParam0^) = {(uParam0^) + vVar5};
    return;
}

void sub_36476(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar6 = COS( uParam1._fU0 );
    uVar7 = SIN( uParam1._fU0 );
    uVar8._fU0 = iParam0->_fU0;
    uVar8._fU4 = (uVar6 * iParam0->_fU4) - (uVar7 * iParam0->_fU8);
    uVar8._fU8 = (uVar7 * iParam0->_fU4) + (uVar6 * iParam0->_fU8);
    (iParam0^) = {uVar8};
    uVar6 = COS( uParam1._fU4 );
    uVar7 = SIN( uParam1._fU4 );
    uVar8._fU0 = (uVar6 * iParam0->_fU0) + (uVar7 * iParam0->_fU8);
    uVar8._fU4 = iParam0->_fU4;
    uVar8._fU8 = (uVar6 * iParam0->_fU8) - (uVar7 * iParam0->_fU0);
    (iParam0^) = {uVar8};
    uVar6 = COS( uParam1._fU8 );
    uVar7 = SIN( uParam1._fU8 );
    uVar8._fU0 = (uVar6 * iParam0->_fU0) - (uVar7 * iParam0->_fU4);
    uVar8._fU4 = (uVar7 * iParam0->_fU0) + (uVar6 * iParam0->_fU4);
    uVar8._fU8 = iParam0->_fU8;
    (iParam0^) = {uVar8};
    return;
}

int sub_36804(vector vParam0, vector vParam3)
{
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_INTERIOR_AT_COORDS( vParam3.x, vParam3.y, vParam3.z, ref iVar8 );
    if (NOT (sub_36840( vParam0, vParam3 )))
    {
        return 0;
    }
    if (NOT (iVar8 == nil))
    {
        return 0;
    }
    else if (vParam3.z > 0.00000000)
    {
        uVar9 = {vParam0 - vParam3};
        uVar9._fU8 = 0.00000000;
        if ((VMAG2( uVar9 )) < (10.00000000 * 10.00000000))
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_36840(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

void sub_37839(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (l_U143)
    {
        TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( (uParam0^), (uParam1^), uParam2._fU0, uParam2._fU4, uParam2._fU8, 4, 6.00000000, 1, 5, 10 );
    }
    else
    {
        TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( (uParam0^), (uParam1^), uParam2._fU0, uParam2._fU4, uParam2._fU8, 4, 12.00000000, 1, 5, 10 );
    }
    return;
}

void sub_38202()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_38720(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( (uParam0^), (uParam1^), uParam2._fU0, uParam2._fU4, uParam2._fU8, 4, 22.00000000, 2, 5, 10 );
    return;
}

void sub_38807()
{
    int iVar2;
    int iVar3;
    boolean bVar4;
    float fVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    int iVar12;

    fVar6 = l_U163;
    l_U117 = 0;
    if (IS_PLAYER_PLAYING( sub_1532() ))
    {
        if ((sub_32559()) || ((l_U118) || (NOT (IS_CONTROL_PRESSED( 2, 51 )))))
        {
            if (NOT l_U108)
            {
                if (l_U119)
                {
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U345 );
                    l_U119 = 0;
                }
                if (NOT (IS_BUTTON_PRESSED( 0, 5 )))
                {
                    if (l_U125)
                    {
                        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U346 );
                        l_U125 = 0;
                    }
                    if (IS_VEH_DRIVEABLE( l_U343 ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( sub_1588(), l_U343 ))
                        {
                            bVar4 = false;
                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U343, 1 )))
                            {
                                GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U343, 1, ref iVar3 );
                                if (iVar3 == sub_1588())
                                {
                                    bVar4 = true;
                                }
                            }
                            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
                            if (iVar2 == 4)
                            {
                                iVar7 = 28;
                                switch (l_U192)
                                {
                                    case 0:
                                    GET_GAME_CAM_CHILD( ref uVar8 );
                                    if (DOES_CAM_EXIST( l_U148 ))
                                    {
                                        DESTROY_CAM( l_U148 );
                                    }
                                    CREATE_CAM( 14, ref l_U148 );
                                    ATTACH_CAM_TO_VEHICLE( l_U148, l_U343 );
                                    if (bVar4)
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U148, l_U331._fU0, l_U331._fU4, l_U331._fU8 );
                                    }
                                    else
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U148, l_U331._fU0 * -1.00000000, l_U331._fU4, l_U331._fU8 );
                                    }
                                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U148, 1 );
                                    sub_30833( l_U343, ref l_U148, 0.00000000, 0.00000000, 0.00000000 );
                                    SET_CAM_FOV( l_U148, l_U162 );
                                    SET_CAM_NEAR_CLIP( l_U148, 0.01000000 );
                                    l_U169 = 0.00000000;
                                    l_U168 = 0.00000000;
                                    if (IS_CAR_MODEL( l_U343, -956048545 ))
                                    {
                                        if (bVar4)
                                        {
                                            l_U169 = -26.67400000;
                                            l_U168 = 6.22300000;
                                        }
                                        else
                                        {
                                            l_U169 = 26.67400000;
                                            l_U168 = 6.22300000;
                                        }
                                    }
                                    if (IS_CAR_MODEL( l_U343, 1208856469 ))
                                    {
                                        if (bVar4)
                                        {
                                            l_U169 = -23.57100000;
                                            l_U168 = -1.41800000;
                                        }
                                        else
                                        {
                                            l_U169 = 23.57100000;
                                            l_U168 = -1.41800000;
                                        }
                                    }
                                    if (IS_CAR_MODEL( l_U343, 1884962369 ))
                                    {
                                        if (bVar4)
                                        {
                                            l_U169 = -26.64200000;
                                            l_U168 = -1.84600000;
                                        }
                                        else
                                        {
                                            l_U169 = 26.64200000;
                                            l_U168 = -1.84600000;
                                        }
                                    }
                                    if (sub_12739( l_U343 ))
                                    {
                                        if (IS_CAR_MODEL( l_U343, -1932515764 ))
                                        {
                                            if (bVar4)
                                            {
                                                l_U169 = -20.65400000;
                                                l_U168 = 0.92400000;
                                            }
                                            else
                                            {
                                                l_U169 = 20.65400000;
                                                l_U168 = 0.92400000;
                                            }
                                        }
                                        else if (bVar4)
                                        {
                                            l_U169 = -21.48700000;
                                            l_U168 = -0.20300000;
                                        }
                                        else
                                        {
                                            l_U169 = 21.48700000;
                                            l_U168 = -0.20300000;
                                        }
                                    }
                                    if (DOES_CAM_EXIST( l_U146 ))
                                    {
                                        DESTROY_CAM( l_U146 );
                                    }
                                    SET_CAM_ACTIVE( l_U148, 1 );
                                    SET_CAM_PROPAGATE( l_U148, 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    SET_PTFX_CAM_INSIDE_VEHICLE( 1 );
                                    sub_30833( l_U343, ref l_U148, l_U168, 0.00000000, l_U169 );
                                    SET_CAM_FOV( l_U148, l_U162 );
                                    if (bVar4)
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U148, l_U331._fU0, l_U331._fU4, l_U331._fU8 );
                                    }
                                    else
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U148, l_U331._fU0 * -1.00000000, l_U331._fU4, l_U331._fU8 );
                                    }
                                    l_U192++;
                                    if (IS_PLAYER_PLAYING( sub_1532() ))
                                    {
                                        SET_CHAR_VISIBLE( sub_1588(), 0 );
                                    }
                                    break;
                                    case 1:
                                    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar9, ref uVar10, ref iVar11, ref iVar12 );
                                    if ((iVar12 == 0) AND (iVar11 == 0))
                                    {
                                        GET_MOUSE_INPUT( ref iVar11, ref iVar12 );
                                        fVar6 *= 1.00000000 + ((8.00000000 - 1.00000000) * GET_MOUSE_SENSITIVITY());
                                        iVar7 = 1;
                                    }
                                    if (NOT IS_LOOK_INVERTED())
                                    {
                                        iVar12 *= -1;
                                    }
                                    if ((iVar12 < (iVar7 * -1)) || (iVar12 > iVar7))
                                    {
                                        fVar5 = TO_FLOAT( iVar12 );
                                        fVar5 *= fVar5;
                                        fVar5 /= (TO_FLOAT( 128 - iVar7 )) * (TO_FLOAT( 128 - iVar7 ));
                                        fVar5 *= fVar6;
                                        if (iVar12 < 0)
                                        {
                                            fVar5 *= -1.00000000;
                                        }
                                        l_U168 += fVar5;
                                        if (l_U168 < l_U164)
                                        {
                                            l_U168 = l_U164;
                                        }
                                        if (l_U168 > l_U165)
                                        {
                                            l_U168 = l_U165;
                                        }
                                    }
                                    if ((iVar11 < (iVar7 * -1)) || (iVar11 > iVar7))
                                    {
                                        fVar5 = TO_FLOAT( iVar11 );
                                        fVar5 *= fVar5;
                                        fVar5 /= (TO_FLOAT( 128 - iVar7 )) * (TO_FLOAT( 128 - iVar7 ));
                                        fVar5 *= fVar6;
                                        if (iVar11 > 0)
                                        {
                                            fVar5 *= -1.00000000;
                                        }
                                        l_U169 += fVar5;
                                        if (l_U169 < l_U166)
                                        {
                                            l_U169 = l_U166;
                                        }
                                        if (l_U169 > l_U167)
                                        {
                                            l_U169 = l_U167;
                                        }
                                    }
                                    sub_30833( l_U343, ref l_U148, l_U168, 0.00000000, l_U169 );
                                    SET_CAM_FOV( l_U148, l_U162 );
                                    if (bVar4)
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U148, l_U331._fU0, l_U331._fU4, l_U331._fU8 );
                                    }
                                    else
                                    {
                                        SET_CAM_ATTACH_OFFSET( l_U148, l_U331._fU0 * -1.00000000, l_U331._fU4, l_U331._fU8 );
                                    }
                                    if (NOT (IS_CONTROL_PRESSED( 2, 78 )))
                                    {
                                        l_U118 = 0;
                                    }
                                    break;
                                }
                                l_U117 = 1;
                            }
                            else
                            {
                                sub_1667();
                            }
                        }
                        else
                        {
                            sub_1667();
                        }
                    }
                    else
                    {
                        sub_1667();
                    }
                }
                else if (NOT l_U125)
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U346 );
                    l_U125 = 1;
                }
                sub_1667();;
            }
        }
        else if (NOT l_U108)
        {
            if (NOT l_U103)
            {
                if (NOT (IS_CAR_DEAD( l_U343 )))
                {
                    if ((NOT sub_32559()) AND ((NOT (IS_BUTTON_PRESSED( 0, 5 ))) AND ((NOT (IS_PED_DOING_DRIVEBY( sub_1588() ))) AND (IS_CHAR_SITTING_IN_CAR( sub_1588(), l_U343 )))))
                    {
                        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
                        if (iVar2 == 4)
                        {
                            sub_1667();
                        }
                        if (NOT (iVar2 == 5))
                        {
                            l_U345 = iVar2;
                            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 5 );
                            l_U119 = 1;
                        }
                        l_U103 = 1;
                    }
                }
            }
        }
    }
    else
    {
        sub_1667();
    }
    return;
}

void sub_40847()
{
    if (NOT l_U109)
    {
        if ((IS_SCREEN_FADED_IN()) AND ((NOT sub_32559()) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H13" ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))))
        {
            if (l_U117)
            {
                if (NOT g_U2678)
                {
                    if (NOT g_U2673)
                    {
                        if (NOT l_U141)
                        {
                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09" )))
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                                PRINT_HELP( "TX_H09" );
                                l_U109 = 1;
                            }
                        }
                        else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H09B" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP( "TX_H09B" );
                            l_U109 = 1;
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H11" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H11" );
                        l_U109 = 1;
                    }
                }
                else if (NOT g_U2673)
                {
                    if (NOT l_U141)
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP( "TX_H10" );
                            l_U109 = 1;
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H10B" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H10B" );
                        l_U109 = 1;
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H12" )))
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                    PRINT_HELP( "TX_H12" );
                    l_U109 = 1;
                };;;
            }
            else if (NOT g_U2673)
            {
                if (NOT g_U2678)
                {
                    if (NOT l_U141)
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05" )))
                        {
                            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                            PRINT_HELP( "TX_H05" );
                            l_U109 = 1;
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05B" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H05B" );
                        l_U109 = 1;
                    }
                }
                else if (NOT l_U141)
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05C" )))
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                        PRINT_HELP( "TX_H05C" );
                        l_U109 = 1;
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05D" )))
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                    PRINT_HELP( "TX_H05D" );
                    l_U109 = 1;
                };;;
            }
            else if (NOT g_U2678)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05E" )))
                {
                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                    PRINT_HELP( "TX_H05E" );
                    l_U109 = 1;
                }
            }
            else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H05F" )))
            {
                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
                PRINT_HELP( "TX_H05F" );
                l_U109 = 1;
            };;;;
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TX_H13" ))
    {
        l_U109 = 0;
    }
    return;
}

int sub_44535()
{
    int iVar2;

    if (IS_VEH_DRIVEABLE( l_U343 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_1588(), l_U343 ))
        {
            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
            if (iVar2 == 4)
            {
                if (NOT (l_U192 == 1))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

void sub_45609()
{
    if ((DOES_CAM_EXIST( l_U148 )) || (DOES_CAM_EXIST( l_U348 )))
    {
        if (DOES_CAM_EXIST( l_U148 ))
        {
            DESTROY_CAM( l_U148 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        if (DOES_CAM_EXIST( l_U348 ))
        {
            DESTROY_CAM( l_U348 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        l_U192 = 0;
    }
    return;
}

void sub_46120(vector vParam0, vector vParam3)
{
    float Result;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    uVar9 = {vParam3 - vParam0};
    Result = (VMAG( uVar9 )) * 1.30000000;
    return Result;
}

int sub_47048(boolean bParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;

    iVar4 = sub_47057();
    uVar5 = GET_CURRENT_DAY_OF_WEEK();
    iVar6 = 7 - 1;
    bVar7 = true;
    iVar8 = 0;
    sub_47160( ref iVar4, 1, 0, 3 );
    iVar8 += sub_47269( iVar4 );
    if (iVar4 == 0)
    {
        sub_47160( ref uVar5, 1, 0, 6 );
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
            if ((sub_47437( uVar5, iVar4 )) != 0)
            {
                return iVar8 - 1;
            }
            else
            {
                sub_47160( ref iVar4, 1, 0, 3 );
                iVar8 += sub_47622( iVar4 );
                if (iVar4 == 0)
                {
                    bVar7 = false;
                }
            }
        }
        bVar7 = true;
        sub_47160( ref uVar5, 1, 0, 6 );
    }
    if (bParam0)
    {
        return 6;
    }
    return -1;
}

int sub_47057()
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

void sub_47160(unknown uParam0, int iParam1, int iParam2, int iParam3)
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

int sub_47269(unknown uParam0)
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

int sub_47437(unknown uParam0, unknown uParam1)
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

int sub_47622(unknown uParam0)
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

void sub_48580(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if (((bParam0) || (IS_SCREEN_FADED_OUT())) AND (NOT (IS_CHAR_INJURED( sub_1588() ))))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_48960( sub_1588(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_48960( sub_1588(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_48960( sub_1588(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_50237( 0 );
        sub_50237( 1 );
        sub_50237( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U100 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U100;
            if (((g_U30110[2] == 0) AND ((g_U30110[1] == 0) AND (g_U30110[0] == 0))) || (iVar6 > 15000))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_48960(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_48971( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_49131( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_48971(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( -399.10690000, 397.67000000, 14.17720000);
        break;
        case 1:
        return vector( -468.03000000, 153.41000000, 9.80000000);
        break;
        case 2:
        return vector( -440.28000000, 356.98000000, 11.54000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_49131(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_49159( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_49159(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_1588(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_50237(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_52118(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (DOES_GROUP_EXIST( sub_1362() ))
        {
            GET_GROUP_SIZE( sub_1362(), ref I, ref iVar3 );
            if (iVar3 > 0)
            {
                for ( I = 0; I < iVar3; I++ )
                {
                    GET_GROUP_MEMBER( sub_1362(), I, ref uVar5 );
                    if (NOT (IS_CHAR_INJURED( uVar5 )))
                    {
                        if (IS_CHAR_IN_CAR( uVar5, uParam0 ))
                        {
                            TASK_LEAVE_CAR_IMMEDIATELY( uVar5, uParam0 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_52529()
{
    if (l_U103)
    {
        if ((NOT (sub_33840( 0 ))) AND ((NOT (sub_33759( 0 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 10 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 7 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 6 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 5 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 4 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 15 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 14 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 17 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 16 ))))))))))))))))
        {
            l_U103 = 0;
        }
    }
    return;
}

int sub_53015(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ps" )) || ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ds" )) || ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ps" )) || ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds_angry" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds" ))))))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_53394(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_1532() ))
        {
            if (DOES_GROUP_EXIST( sub_1362() ))
            {
                GET_GROUP_SIZE( sub_1362(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_1362(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (sub_53015( uVar5 ))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_53561(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_1532() ))
        {
            if (DOES_GROUP_EXIST( sub_1362() ))
            {
                GET_GROUP_SIZE( sub_1362(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_1362(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (IS_CHAR_IN_CAR( uVar5, uParam0 ))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

