void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U134 = 10.00000000;
    l_U135 = 15.00000000;
    l_U150 = 0;
    l_U151 = 1;
    l_U152 = 3;
    l_U154 = 4.00000000;
    l_U155 = 0;
    l_U156 = 0;
    l_U157 = 0;
    l_U158 = 0;
    l_U167 = -1;
    l_U168 = 1;
    l_U170 = 0;
    l_U185 = 15;
    l_U186 = sub_162( l_U185 );
    l_U217 = 0;
    l_U218 = 0;
    l_U231 = 0;
    l_U232 = 0;
    l_U234 = 0;
    l_U235 = 0;
    l_U249 = 0;
    l_U253 = 0;
    l_U254 = 0;
    l_U255 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_694();
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U171 = {l_U277._fU4[0]};
    while (true)
    {
        WAIT( 0 );
        switch (l_U157)
        {
            case 0:
            if (sub_1496())
            {
                if (NOT l_U170)
                {
                    if (g_U12379)
                    {
                        sub_694();
                    }
                }
                switch (l_U155)
                {
                    case 0:
                    if (sub_2470())
                    {
                        l_U155 = 1;
                    }
                    break;
                    case 1:
                    if (sub_3484())
                    {
                        sub_4009();
                    }
                    else
                    {
                        sub_4199();
                    }
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3203() )))
                    {
                        sub_5684();
                    }
                    break;
                }
            }
            else
            {
                sub_694();
            }
            break;
            case 1:
            switch (l_U158)
            {
                case 2:
                sub_12145();
                break;
                case 3:
                sub_12698();
                sub_12847();
                sub_13345();
                sub_17893();
                sub_17989( l_U159 );
                sub_18176();
                sub_29214();
                break;
                case 4:
                sub_29657();
                break;
                case 5:
                sub_37422();
                break;
                case 6:
                sub_4009();
                break;
            }
            break;
        }
        sub_40091();
    }
    return;
}

int sub_162(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_577( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_577(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_694()
{
    PRINTNL();
    PRINTSTRING( "*************** CLEANUP! **********************" );
    PRINTNL();
    g_U2674 = 0;
    SET_NO_RESPRAYS( 0 );
    if (sub_798( l_U185, l_U168 ))
    {
        sub_888( l_U185, l_U168 );
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    CLEAR_PED_NON_CREATION_AREA();
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U270[0]._fU0, l_U270[0]._fU4, l_U270[0]._fU8, l_U270[1]._fU0, l_U270[1]._fU4, l_U270[1]._fU8 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_798(int iParam0, int iParam1)
{
    if (NOT g_U30318._fU4)
    {
        return 0;
    }
    if (NOT (g_U30318._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U30318._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_888(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_798( uParam0, uParam1 )))
    {
        sub_577( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_984();
    if (g_U819)
    {
        sub_1066();
    }
    else
    {
        sub_1195();
    }
    g_U12379 = 0;
    return;
}

void sub_984()
{
    if (g_U0)
    {
        g_U30318._fU0 = 0;
    }
    else
    {
        g_U30318._fU0 = 1;
    }
    g_U30318._fU4 = 0;
    g_U30318._fU8 = 34;
    g_U30318._fU12 = 0;
    return;
}

void sub_1066()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_1112();
    return;
}

void sub_1112()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1195()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_1241();
    return;
}

void sub_1241()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

int sub_1496()
{
    if (NOT l_U256)
    {
        sub_1516();
        l_U256 = 1;
    }
    if (l_U256)
    {
        if (l_U257)
        {
            if (IS_PLAYER_PLAYING( sub_2262() ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2262(), 0 )))
                {
                    if (NOT (sub_2325( 15 )))
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
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

void sub_1516()
{
    if (sub_1535( l_U185, l_U168 ))
    {
        l_U257 = 1;
    }
    else
    {
        l_U257 = 0;
    }
    return;
}

void sub_1535(unknown uParam0, unknown uParam1)
{
    if (sub_1544())
    {
        return 0;
    }
    return sub_1591( uParam0, uParam1 );
}

int sub_1544()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_1591(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_1602( uParam0 );
    if (NOT g_U30318._fU0)
    {
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU4)
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 2 ))
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        if (sub_1883( g_U30257[uVar4]._fU8 ))
        {
            g_U30257[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        return 0;
    }
    if (g_U30257[uVar4]._fU28 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_1602(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_1613( uParam0 )))
    {
        sub_577( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_1613(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

int sub_1883(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar6 == uParam0._fU0._fU0) AND (iVar7 == uParam0._fU0._fU4))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_2052( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_2052(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2262()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2325(int iParam0)
{
    if (iParam0 == 37)
    {
        return 0;
    }
    if (NOT (g_U42871._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

int sub_2470()
{
    if (sub_2479())
    {
        l_U171 = {-441.52150000 + 0.60000000, 364.97620000, 9.42240000};
        l_U252 = 107.24020000;
        CREATE_CHAR( 5, 1798610950, l_U171._fU0, l_U171._fU4, l_U171._fU8, ref l_U159, 1 );
        ADD_BLIP_FOR_CHAR( l_U159, ref l_U161 );
        CHANGE_BLIP_SPRITE( l_U161, 64 );
        CHANGE_BLIP_DISPLAY( l_U161, 2 );
        SET_BLIP_AS_FRIENDLY( l_U161, 1 );
        sub_2726( l_U185, l_U168 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U159, 1 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U159, 0 );
        SET_CHAR_DROWNS_IN_WATER( l_U159, 0 );
        SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U159, 0 );
        SET_PED_DIES_WHEN_INJURED( l_U159, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U159, 1 );
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U159, 3 );
        SET_CHAR_HEADING( l_U159, l_U252 );
        ENABLE_PED_HELMET( l_U159, 0 );
        SET_ANIM_GROUP_FOR_CHAR( l_U159, "move_f@margot" );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U159, 1 );
        sub_2951();
        sub_3046( "GIRL1AU", 9 );
        sub_3046( "MARG1", 10 );
        if (NOT (IS_CHAR_INJURED( sub_3203() )))
        {
            sub_3271( 0, sub_3203(), "LUIS", 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U159 )))
        {
            sub_3271( 1, l_U159, "MARGOT", 0 );
        }
        return 1;
    }
    return 0;
}

int sub_2479()
{
    REQUEST_MODEL( 1798610950 );
    REQUEST_ANIMS( "move_f@margot" );
    if ((HAVE_ANIMS_LOADED( "move_f@margot" )) AND (HAS_MODEL_LOADED( 1798610950 )))
    {
        return 1;
    }
    return 0;
}

void sub_2726(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_1602( uParam0 );
    if (NOT (g_U30257[uVar4]._fU28 == iParam1))
    {
        return;
    }
    g_U30257[uVar4]._fU76 = 1;
    return;
}

void sub_2951()
{
    if (NOT l_U250)
    {
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U159 )))
            {
                TASK_SIT_DOWN_INSTANTLY( l_U159, 0, 0, -2 );
                l_U250 = 1;
            }
        }
    }
    return;
}

void sub_3046(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3082())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_3082()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3203()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3271(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3351( "\n PED NUMBER ", uParam0 );
    sub_3391( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3351(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3391(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3484()
{
    if (NOT (IS_CHAR_INJURED( l_U159 )))
    {
        if (HAS_CHAR_SPOTTED_CHAR( l_U159, sub_3203() ))
        {
            if (IS_CHAR_ARMED( sub_3203(), 7 ))
            {
                if (IS_PLAYER_TARGETTING_CHAR( sub_2262(), l_U159 ))
                {
                    PRINTNL();
                    PRINTSTRING( "*************** INTERFERED WITH MARGOT! **********************" );
                    PRINTNL();
                    return 1;
                }
                if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2262(), l_U159 ))
                {
                    PRINTNL();
                    PRINTSTRING( "*************** INTERFERED WITH MARGOT! **********************" );
                    PRINTNL();
                    return 1;
                }
                if (IS_CHAR_SHOOTING( sub_3203() ))
                {
                    PRINTNL();
                    PRINTSTRING( "*************** INTERFERED WITH MARGOT! **********************" );
                    PRINTNL();
                    return 1;
                }
            }
        }
    }
    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U159, sub_3203(), 0 ))
    {
        PRINTNL();
        PRINTSTRING( "*************** INTERFERED WITH MARGOT! **********************" );
        PRINTNL();
        return 1;
    }
    return 0;
}

void sub_4009()
{
    PRINTNL();
    PRINTSTRING( "*************** FAILED! **********************" );
    PRINTNL();
    if (l_U209 == 1)
    {
        PRINT_NOW( "M1_F1", 7500, 1 );
    }
    if (l_U209 == 2)
    {
        PRINT_NOW( "M1_F2", 7500, 1 );
    }
    if (l_U209 == 3)
    {
        PRINT_NOW( "M1_F3", 7500, 1 );
    }
    sub_694();
    return;
}

void sub_4199()
{
    sub_4208();
    switch (l_U169)
    {
        case 0:
        if (l_U178 <= 10)
        {
            if (NOT (sub_4373( 0 )))
            {
                sub_4627( "GIRL1_TRAK1", ref l_U219, 6, 1 );
                GET_GAME_TIMER( ref l_U211 );
                l_U169++;
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U210 );
        if ((l_U210 - l_U211) >= 15000)
        {
            l_U169 = 0;
        }
        break;
    }
    return;
}

void sub_4208()
{
    if (DOES_CHAR_EXIST( sub_3203() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3203() )))
        {
            GET_CHAR_COORDINATES( sub_3203(), ref l_U174, ref l_U175, ref l_U176 );
        }
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( l_U174, l_U175, l_U176, l_U171._fU0, l_U171._fU4, l_U171._fU8, ref l_U178 );
    return;
}

int sub_4373(boolean bParam0)
{
    if ((sub_4531()) || ((IS_SCRIPTED_CONVERSATION_ONGOING()) || ((sub_4472()) || ((((bParam0) AND (sub_4443())) || ((NOT bParam0) AND (sub_4389()))) || (IS_MESSAGE_BEING_DISPLAYED())))))
    {
        return 1;
    }
    return 0;
}

int sub_4389()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_4443()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_4472()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_4531()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U137;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_4627(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4648( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_4648(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4702( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_4702(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4724( iParam1 )))
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
    sub_5412( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_4724(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4801( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4801( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4801( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_4801(unknown uParam0)
{
    return;
}

void sub_5412(int iParam0, int iParam1)
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

void sub_5684()
{
    int I;
    vector[2] vVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[2] uVar10;
    unknown uVar13;

    array(ref vVar3, 2);
    array(ref uVar10, 2);
    switch (l_U156)
    {
        case 0:
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3203(), l_U159, l_U154, l_U154, l_U154, 0 ))
        {
            if (sub_5770( 1, 1 ))
            {
                l_U156 = 1;
            }
        }
        break;
        case 1:
        CLEAR_PRINTS();
        sub_6079( 0 );
        SET_MISSION_FLAG( 1 );
        sub_6237( l_U185, l_U168 );
        if (IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_OUT( 500 );
        }
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        sub_8340( -449.05020000, 361.68440000, 10.49040000, 4.71480000, ref l_U166 );
        CLEAR_AREA( -449.05020000, 361.68440000, 10.49040000, 30.00000000, 1 );
        sub_8602();
        g_U2792 = 1;
        sub_8727();
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U159, 0, 0, 0 );
        }
        vVar3[0] = {-321.31040000, 1607.82100000, 20.28150000};
        vVar3[1] = {-315.36610000, 1611.21700000, 20.27950000};
        for ( I = 0; I < 2; I++ )
        {
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( vVar3[I]._fU0, vVar3[I]._fU4, vVar3[I]._fU8, 2.00000000, 0, 0, ref uVar10[I] );
            if (IS_VEH_DRIVEABLE( uVar10[I] ))
            {
                SET_CAR_AS_MISSION_CAR( uVar10[I] );
                SET_CAR_IN_CUTSCENE( uVar10[I], 1 );
            }
        }
        REMOVE_ANIMS( "move_f@margot" );
        if (NOT (IS_CHAR_INJURED( l_U159 )))
        {
            DELETE_CHAR( ref l_U159 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1798610950 );
        CLEAR_AREA( l_U171._fU0, l_U171._fU4, l_U171._fU8, 2.00000000, 1 );
        sub_9152();
        sub_9376( 2, 0 );
        START_CUTSCENE_NOW( "RP3_MAR" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "RP3_MAR" );
        sub_9489();
        sub_9548( 0, 0 );
        CLEAR_WANTED_LEVEL( sub_2262() );
        sub_11534();
        sub_11905();
        GET_GAME_TIMER( ref l_U212 );
        SET_PLAYER_CONTROL( sub_2262(), 1 );
        l_U157 = 1;
        l_U158 = 2;
        break;
    }
    return;
}

int sub_5770(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3203(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3203(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3203()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2262() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2262() )))
    {
        return 0;
    }
    return 1;
}

void sub_6079(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 <= 8) AND (g_U8865 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_6237(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U12379)
    {
        sub_577( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_1602( uParam0 );
    if (g_U30318._fU4)
    {
        sub_577( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U30257[uVar4]._fU0 = 1;
        g_U30257[uVar4]._fU4 = 1;
        g_U30257[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        sub_577( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U30318._fU4 = 1;
    g_U30318._fU8 = uParam0;
    g_U30318._fU12 = uParam1;
    sub_6584();
    sub_7420( g_U30257[uVar4]._fU32 );
    g_U30257[uVar4]._fU32 = 0;
    sub_7543( uParam0, uParam1 );
    g_U12379 = 1;
    return;
}

void sub_6584()
{
    sub_6593();
    sub_6738( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_6812();
    return;
}

void sub_6593()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_6738(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6812()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_6850( 1, g_U575[I] )) == 0)
        {
            sub_7101( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7279())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_6850(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_7101(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_7186( g_U575 - 1 );
    return;
}

void sub_7186(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_7279()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_6850( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7420(int iParam0)
{
    g_U30318._fU16._fU4 += iParam0;
    sub_7450();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7450()
{
    if (g_U0)
    {
        return;
    }
    if (g_U30318._fU16._fU4 < g_U30318._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_7543(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 13:
        StrCopy( ref cVar4, "ARNAUD", 16 );
        iVar8 = 2;
        break;
        case 14:
        StrCopy( ref cVar4, "DAISY", 16 );
        iVar8 = 1;
        break;
        case 15:
        StrCopy( ref cVar4, "MARGOT", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_8077( cVar4 );
    return;
}

void sub_8077(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10966, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up (see console log)" );
    }
    g_U10966 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10966 );
    return;
}

void sub_8340(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    GET_PLAYERS_LAST_CAR_NO_SAVE( uParam4 );
    if ((NOT (IS_CHAR_INJURED( sub_3203() ))) AND (IS_VEH_DRIVEABLE( (uParam4^) )))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_3203(), (uParam4^) )))
        {
            if (LOCATE_CAR_3D( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8, 100, 100, 100, 0 ))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( (uParam4^) )))
                {
                    SET_CAR_AS_MISSION_CAR( (uParam4^) );
                }
                SET_LOAD_COLLISION_FOR_CAR_FLAG( (uParam4^), 0 );
                GET_CAR_MODEL( (uParam4^), ref uVar7 );
                if (IS_THIS_MODEL_A_CAR( uVar7 ))
                {
                    CLOSE_ALL_CAR_DOORS( (uParam4^) );
                }
                SET_CAR_COORDINATES( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
                SET_CAR_HEADING( (uParam4^), uParam3 );
                SET_CAR_ON_GROUND_PROPERLY( (uParam4^) );
            }
        }
    }
    return;
}

void sub_8602()
{
    if ((g_U8867 == 4) || (g_U560 == 1))
    {
        if (g_U95._fU60 != -1)
        {
            g_U16014[g_U95._fU60]._fU212._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U95._fU376 = 0;
        g_U95._fU100 = 1;
    }
    return;
}

void sub_8727()
{
    sub_3046( "GIRL1AU", 6 );
    sub_3046( "MARG1", 0 );
    l_U208 = 0;
    l_U215 = 180000;
    l_U258 = -297585214;
    l_U187 = {-445.59070000, 361.77400000, 9.57660000};
    l_U193 = {95.63110000, 143.62480000, 17.00000000};
    l_U251 = 321.14800000;
    return;
}

void sub_9152()
{
    sub_9162( 0 );
    sub_9162( 2 );
    sub_9162( 1 );
    return;
}

void sub_9162(unknown uParam0)
{
    PRINTSTRING( "UNLOAD_CLUB_BEFORE_MOCAP - called for " );
    switch (uParam0)
    {
        case 2:
        PRINTSTRING( "HERCULES" );
        break;
        case 0:
        PRINTSTRING( "BAHAMA_MAMAS" );
        break;
        case 1:
        PRINTSTRING( "MAISONETTE 9" );
        break;
    }
    PRINTNL();
    g_U30120[uParam0] = 1;
    return;
}

void sub_9376(unknown uParam0, unknown uParam1)
{
    g_U30154[uParam0] = 1;
    return;
}

void sub_9489()
{
    sub_9499( 0 );
    sub_9499( 2 );
    sub_9499( 1 );
    return;
}

void sub_9499(unknown uParam0)
{
    g_U30120[uParam0] = 0;
    return;
}

void sub_9548(boolean bParam0, unknown uParam1)
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
    if (((bParam0) || (IS_SCREEN_FADED_OUT())) AND (NOT (IS_CHAR_INJURED( sub_3203() ))))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_9928( sub_3203(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_9928( sub_3203(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_9928( sub_3203(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_11205( 0 );
        sub_11205( 1 );
        sub_11205( 2 );
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

int sub_9928(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_9939( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_10099( uParam0, uParam1, 0 ))
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

vector sub_9939(unknown uParam0)
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

int sub_10099(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_10127( uParam0, uParam1 ))
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

int sub_10127(unknown uParam0, unknown uParam1)
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
            if (IS_CHAR_IN_AREA_3D( sub_3203(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_11205(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_11534()
{
    SET_CHAR_COORDINATES( sub_3203(), -444.25350000, 364.45940000, 9.33830000 );
    SET_CHAR_HEADING( sub_3203(), 164.04580000 );
    SET_CAM_BEHIND_PED( sub_3203() );
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_NO_RESPRAYS( 1 );
    REQUEST_MODEL( 1798610950 );
    REQUEST_ANIMS( "move_f@margot" );
    while ((NOT (HAVE_ANIMS_LOADED( "move_f@margot" ))) || (NOT (HAS_MODEL_LOADED( 1798610950 ))))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 5, 1798610950, -445.54960000, 361.58280000, 9.59830000, ref l_U159, 1 );
    if (NOT (IS_CHAR_INJURED( l_U159 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U159 );
        SET_CHAR_COORDINATES( l_U159, -445.54960000, 361.58280000, 9.59830000 );
        SET_CHAR_HEADING( l_U159, 340.96020000 );
        if (DOES_BLIP_EXIST( l_U161 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U161 );
        }
        SET_ANIM_GROUP_FOR_CHAR( l_U159, "move_f@margot" );
        sub_3271( 1, l_U159, "MARGOT", 0 );
    }
    return;
}

void sub_11905()
{
    SWITCH_ROADS_OFF( 45.86700000, 129.28530000, 13.75080000, 111.44920000, 144.98820000, 13.75410000 );
    SWITCH_PED_PATHS_OFF( 81.92240000, 143.19230000, 13.63850000, 109.53450000, 156.69080000, 13.76690000 );
    CLEAR_AREA( 92.55950000, 142.04340000, 13.70210000, 100.00000000, 1 );
    return;
}

void sub_12145()
{
    if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
    {
        if (sub_12176())
        {
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING())
            {
                WAIT( 0 );
            }
        }
    }
    else
    {
        l_U158 = 3;
    }
    return;
}

int sub_12176()
{
    if (sub_12185())
    {
        if ((DOES_VEHICLE_EXIST( l_U164 )) AND (DOES_CHAR_EXIST( l_U160 )))
        {
            return 1;
        }
        CREATE_CHAR( 5, -1193778389, 87.74060000, 149.61560000, 14.76800000, ref l_U160, 1 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U160, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U160, 1 );
        SET_CHAR_HEADING( l_U160, 194.99090000 );
        if (NOT (DOES_OBJECT_EXIST( l_U162 )))
        {
            CREATE_OBJECT( -268530289, 273.21490000, 1716.68800000, -9.93360000, ref l_U162, 1 );
            ATTACH_OBJECT_TO_PED( l_U162, l_U160, 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
        }
        if (NOT (DOES_VEHICLE_EXIST( l_U164 )))
        {
            CREATE_CAR( 1376298265, -458.63080000, 360.02380000, 12.64780000, ref l_U164, 1 );
            SET_CAR_HEADING( l_U164, 179.96000000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U164 );
        }
    }
    return 0;
}

int sub_12185()
{
    REQUEST_MODEL( -268530289 );
    REQUEST_MODEL( -1193778389 );
    REQUEST_MODEL( 1376298265 );
    REQUEST_ANIMS( "missMargot" );
    if ((HAVE_ANIMS_LOADED( "missMargot" )) AND ((HAS_MODEL_LOADED( 1376298265 )) AND ((HAS_MODEL_LOADED( -268530289 )) AND (HAS_MODEL_LOADED( -1193778389 )))))
    {
        return 1;
    }
    return 0;
}

void sub_12698()
{
    if (DOES_CHAR_EXIST( l_U160 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U160 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U163 );
            TASK_PLAY_ANIM( 0, "stand_smoke", "missMargot", 8.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U163 );
            TASK_PERFORM_SEQUENCE( l_U160, l_U163 );
            CLEAR_SEQUENCE_TASK( l_U163 );
        }
    }
    return;
}

void sub_12847()
{
    if ((NOT IS_SCREEN_FADING_IN()) AND (IS_SCREEN_FADED_IN()))
    {
        if ((l_U255) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() ))))
        {
            switch (l_U218)
            {
                case 0:
                if (NOT (sub_4373( 0 )))
                {
                    if (NOT (sub_12947( l_U219 )))
                    {
                        if (sub_4627( "GIRL1_MOANS", ref l_U225, 6, 1 ))
                        {
                            SETTIMERB( 0 );
                            l_U231 = 1;
                            l_U218++;
                        }
                    }
                }
                break;
                case 1:
                if (TIMERB() >= 10000)
                {
                    l_U218 = 0;
                }
                break;
            }
        }
        else
        {
            sub_13213( ref l_U225, 1 );
        }
    }
    return;
}

int sub_12947(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_4801( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4801( "\n speech is not playing" );
    }
    return 0;
}

void sub_13213(int iParam0, unknown uParam1)
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

void sub_13345()
{
    sub_13354();
    if ((NOT IS_SCREEN_FADING_IN()) AND (IS_SCREEN_FADED_IN()))
    {
        if (NOT (sub_4373( 0 )))
        {
            if (l_U234 == 0)
            {
                if (sub_4627( "GIRL1_WHER1", ref l_U219, 6, 1 ))
                {
                    SETTIMERA( 0 );
                    l_U255 = 1;
                    l_U231 = 1;
                    l_U234++;
                }
            }
        }
    }
    if (l_U234 <= 4)
    {
        if (l_U177 <= 250)
        {
            l_U235 = 0;
            l_U234 = g_U43796;
        }
    }
    if (l_U234 <= 4)
    {
        if (l_U214 >= 150000)
        {
            l_U235 = 0;
            l_U234 = g_U43796;
        }
    }
    if ((NOT (sub_4373( 0 ))) AND ((NOT (IS_WANTED_LEVEL_GREATER( sub_2262(), 0 ))) AND (sub_13691( sub_3203(), l_U159 ))))
    {
        if (l_U231)
        {
            if (l_U232)
            {
                sub_13856( l_U236, ref l_U219, 6, 1 );
                l_U232 = 0;
            }
            if ((l_U235 == 0) AND (l_U234 <= 3))
            {
                l_U234 = g_U43795;
            }
            if (l_U233)
            {
                if (l_U234 != 9)
                {
                    l_U234 = 8;
                }
            }
            switch (l_U234)
            {
                case 1:
                switch (l_U235)
                {
                    case 0:
                    if (sub_4627( "GIRL1_EARL1", ref l_U219, 6, 1 ))
                    {
                        l_U236 = "GIRL1_EARL1";
                        l_U231 = 1;
                        SETTIMERA( 0 );
                        l_U235++;
                        g_U43795++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U236 = "GIRL1_MOANS";
                        l_U231 = 1;
                        l_U235++;
                    }
                    break;
                    case 2:
                    if (TIMERA() >= 3000)
                    {
                        if (sub_4627( "GIRL1_MOANS", ref l_U219, 6, 1 ))
                        {
                            l_U236 = "GIRL1_MOANS";
                            l_U231 = 1;
                            SETTIMERA( 0 );
                            l_U235++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U236 = "GIRL1_EARL2";
                        l_U231 = 1;
                        l_U235++;
                    }
                    break;
                    case 4:
                    if (TIMERA() > 3000)
                    {
                        if (NOT (sub_12947( l_U219 )))
                        {
                            if (sub_4627( "GIRL1_EARL2", ref l_U219, 6, 1 ))
                            {
                                l_U236 = "GIRL1_EARL2";
                                l_U231 = 1;
                                SETTIMERA( 0 );
                                l_U235++;
                            }
                        }
                    }
                    break;
                    case 5:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SETTIMERA( 0 );
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        l_U231 = 1;
                        l_U234 = 4;
                    }
                    break;
                }
                break;
                case 2:
                switch (l_U235)
                {
                    case 0:
                    if (sub_4627( "GIRL1_EARL3", ref l_U219, 6, 1 ))
                    {
                        l_U236 = "GIRL1_EARL3";
                        l_U231 = 1;
                        SETTIMERA( 0 );
                        l_U235++;
                        g_U43795++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U236 = "GIRL1_MOANS";
                        l_U231 = 1;
                        l_U235++;
                    }
                    break;
                    case 2:
                    if (TIMERA() >= 3000)
                    {
                        if (sub_4627( "GIRL1_MOANS", ref l_U219, 6, 1 ))
                        {
                            l_U236 = "GIRL1_MOANS";
                            l_U231 = 1;
                            SETTIMERA( 0 );
                            l_U235++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U236 = "GIRL1_EARL4";
                        l_U231 = 1;
                        l_U235++;
                    }
                    break;
                    case 4:
                    if (TIMERA() > 3000)
                    {
                        if (NOT (sub_12947( l_U219 )))
                        {
                            if (sub_4627( "GIRL1_EARL4", ref l_U219, 6, 1 ))
                            {
                                l_U236 = "GIRL1_EARL4";
                                l_U231 = 1;
                                SETTIMERA( 0 );
                                l_U235++;
                            }
                        }
                    }
                    break;
                    case 5:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SETTIMERA( 0 );
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        l_U231 = 1;
                        l_U234 = 4;
                    }
                    break;
                }
                break;
                case 3:
                switch (l_U235)
                {
                    case 0:
                    if (sub_4627( "GIRL1_EARL5", ref l_U219, 6, 1 ))
                    {
                        l_U236 = "GIRL1_EARL5";
                        l_U231 = 1;
                        SETTIMERA( 0 );
                        l_U235++;
                        g_U43795++;
                    }
                    break;
                    case 1:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U236 = "GIRL1_MOANS";
                        l_U231 = 1;
                        l_U235++;
                    }
                    break;
                    case 2:
                    if (TIMERA() >= 3000)
                    {
                        if (sub_4627( "GIRL1_MOANS", ref l_U219, 6, 1 ))
                        {
                            l_U236 = "GIRL1_MOANS";
                            l_U231 = 1;
                            SETTIMERA( 0 );
                            l_U235++;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U236 = "GIRL1_EARL6";
                        l_U231 = 1;
                        l_U235++;
                    }
                    break;
                    case 4:
                    if (TIMERA() > 3000)
                    {
                        if (NOT (sub_12947( l_U219 )))
                        {
                            if (sub_4627( "GIRL1_EARL6", ref l_U219, 6, 1 ))
                            {
                                l_U236 = "GIRL1_EARL6";
                                l_U231 = 1;
                                SETTIMERA( 0 );
                                l_U235++;
                            }
                        }
                    }
                    break;
                    case 5:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        SETTIMERA( 0 );
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        l_U231 = 1;
                        l_U235 = 0;
                        l_U234 = 4;
                    }
                    break;
                }
                break;
                case 4:
                switch (l_U235)
                {
                    case 0:
                    if (NOT (sub_12947( l_U219 )))
                    {
                        if (TIMERA() > 3000)
                        {
                            if (sub_4627( "GIRL1_MOANS", ref l_U219, 6, 1 ))
                            {
                                SETTIMERA( 0 );
                                l_U235++;
                                l_U231 = 1;
                            }
                        }
                    }
                    break;
                    case 1:
                    if (TIMERA() > 5000)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U235++;
                    }
                    break;
                    case 2:
                    if (TIMERA() > 5000)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U235++;
                    }
                    break;
                    case 3:
                    if (TIMERA() > 10000)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U235++;
                    }
                    break;
                    case 4:
                    if (TIMERA() > 10000)
                    {
                        SAY_AMBIENT_SPEECH_WITH_VOICE( l_U159, "COUGH", "PAIN_VOICE", 1, 1, 1 );
                        SETTIMERA( 0 );
                        l_U235++;
                    }
                    break;
                    case 5:
                    l_U235 = 1;
                    break;
                }
                break;
                case 5:
                if (NOT (sub_12947( l_U219 )))
                {
                    switch (l_U235)
                    {
                        case 0:
                        if (sub_4627( "GIRL1_LATE1", ref l_U219, 6, 1 ))
                        {
                            PRINTNL();
                            PRINTSTRING( "***************** late 1 *************************" );
                            PRINTNL();
                            l_U236 = "GIRL1_LATE1";
                            l_U231 = 1;
                            l_U235++;
                            g_U43796++;
                        }
                        break;
                        case 1:
                        if (sub_4627( "GIRL1_LATE2", ref l_U219, 6, 1 ))
                        {
                            PRINTNL();
                            PRINTSTRING( "***************** late 2 *************************" );
                            PRINTNL();
                            l_U236 = "GIRL1_LATE2";
                            l_U231 = 1;
                            SETTIMERA( 0 );
                            l_U235 = 0;
                            l_U234 = 10;
                        }
                        break;
                    }
                }
                break;
                case 6:
                if (NOT (sub_12947( l_U219 )))
                {
                    switch (l_U235)
                    {
                        case 0:
                        if (sub_4627( "GIRL1_LATE3", ref l_U219, 6, 1 ))
                        {
                            PRINTNL();
                            PRINTSTRING( "***************** late 3 *************************" );
                            PRINTNL();
                            l_U236 = "GIRL1_LATE3";
                            l_U231 = 1;
                            l_U235++;
                            g_U43796++;
                        }
                        break;
                        case 1:
                        if (sub_4627( "GIRL1_LATE4", ref l_U219, 6, 1 ))
                        {
                            PRINTNL();
                            PRINTSTRING( "***************** late 4 *************************" );
                            PRINTNL();
                            l_U236 = "GIRL1_LATE4";
                            l_U231 = 1;
                            SETTIMERA( 0 );
                            l_U235 = 0;
                            l_U234 = 10;
                        }
                        break;
                    }
                }
                break;
                case 7:
                if (NOT (sub_12947( l_U219 )))
                {
                    switch (l_U235)
                    {
                        case 0:
                        if (sub_4627( "GIRL1_LATE5", ref l_U219, 6, 1 ))
                        {
                            PRINTNL();
                            PRINTSTRING( "***************** late 5 *************************" );
                            PRINTNL();
                            l_U236 = "GIRL1_LATE5";
                            l_U231 = 1;
                            SETTIMERA( 0 );
                            g_U43796 = 5;
                            l_U235++;
                        }
                        break;
                        case 1:
                        if (NOT (sub_12947( l_U219 )))
                        {
                            if (sub_4627( "GIRL1_LATE6", ref l_U219, 6, 1 ))
                            {
                                PRINTNL();
                                PRINTSTRING( "***************** late 6 *************************" );
                                PRINTNL();
                                l_U236 = "GIRL1_LATE6";
                                l_U231 = 1;
                                l_U235 = 0;
                                l_U234 = 10;
                            }
                        }
                        break;
                    }
                }
                break;
                case 8:
                if (NOT l_U237)
                {
                    sub_13213( ref l_U219, 0 );
                    sub_6079( 0 );
                    sub_17706( 0 );
                }
                break;
                case 9:
                l_U231 = 0;
                if (NOT (sub_4373( 0 )))
                {
                    l_U158 = 4;
                }
                break;
                case 10: break;
            }
        }
    }
    return;
}

void sub_13354()
{
    if (DOES_CHAR_EXIST( sub_3203() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3203() )))
        {
            GET_CHAR_COORDINATES( sub_3203(), ref l_U174, ref l_U175, ref l_U176 );
        }
    }
    GET_DISTANCE_BETWEEN_COORDS_3D( l_U174, l_U175, l_U176, l_U193._fU0, l_U193._fU4, l_U193._fU8 + 2.00000000, ref l_U177 );
    return;
}

int sub_13691(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_13856(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13877( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_13877(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_4702( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_17706(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 <= 3) AND (g_U8865 >= 1))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_17893()
{
    SWITCH_ROADS_OFF( 45.86700000, 129.28530000, 13.75080000, 111.44920000, 144.98820000, 13.75410000 );
    SWITCH_PED_PATHS_OFF( 81.92240000, 143.19230000, 13.63850000, 109.53450000, 156.69080000, 13.76690000 );
    return;
}

void sub_17989(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar3 = 20.00000000;
    fVar4 = 20.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            GET_PLAYER_GROUP( sub_2262(), ref l_U260 );
            if (NOT (IS_GROUP_MEMBER( uParam0, l_U260 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3203(), uParam0, fVar4, fVar4, fVar4, 0 ))
                {
                    SET_GROUP_MEMBER( l_U260, uParam0 );
                    SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( uParam0, 0 );
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3203(), uParam0, fVar3, fVar3, fVar3, 0 )))
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
            }
        }
    }
    return;
}

void sub_18176()
{
    g_U2674 = 1;
    if (sub_18285( l_U193._fU0, l_U193._fU4, l_U193._fU8, 2.50000000, 2.50000000, 3.00000000, 1, l_U159, 0, 0, "M1_01", "M1_02", "M1_02", "M1_02", "M1_02", 0, 0, "M1_03" ))
    {
        SET_PLAYER_CONTROL( sub_2262(), 0 );
        WAIT( 1500 );
        l_U158 = 4;
        l_U233 = 1;
    }
    return;
}

int sub_18285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    int iVar20;
    int I;
    unknown uVar22;

    l_U141[0] = uParam7;
    l_U141[1] = uParam8;
    l_U141[2] = uParam9;
    l_U140 = uParam7;
    sub_18333();
    sub_18620();
    sub_19500();
    if (sub_19681( l_U141[0], l_U141[1], l_U141[2], uParam11, uParam12, uParam13, uParam14, l_U135, uParam15, 0, 0, 0 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_WANTED_LEVEL_GREATER( sub_2262(), 0 )) AND (uParam16))
            {
                if (DOES_BLIP_EXIST( l_U132 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
                    sub_20229( uParam10 );
                }
                if ((NOT l_U101) AND ((NOT sub_25364()) AND (NOT (sub_4373( 0 )))))
                {
                    sub_20109( uParam17, 0 );
                    l_U145 = uParam17;
                    l_U101 = 1;
                    l_U102 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U141[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U141[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                    }
                }
            }
            else if (l_U101)
            {
                sub_20229( uParam17 );
                l_U101 = 0;
                l_U102 = 1;
            }
            if (l_U102)
            {
                if (NOT (sub_4373( 0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U141[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U141[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                    }
                    l_U102 = 0;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U132 )))
            {
                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U132 );
                sub_22216( l_U132 );
                if (l_U120)
                {
                    SHOW_BLIP_ON_ALTIMETER( l_U132, 1 );
                }
            }
            if (NOT (sub_4373( 0 )))
            {
                if (NOT l_U103)
                {
                    sub_20109( uParam10, 0 );
                    l_U103 = 1;
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3203(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
            {
                iVar20 = 1;
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U141[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                        {
                            if ((NOT (sub_22335( l_U141[I] ))) || (NOT (IS_GROUP_MEMBER( l_U141[I], sub_20339() ))))
                            {
                                iVar20 = 0;
                            }
                        }
                    }
                }
                if ((sub_25917()) AND (iVar20))
                {
                    sub_20229( uParam10 );
                    sub_20229( uParam11 );
                    sub_20229( uParam12 );
                    sub_20229( uParam13 );
                    sub_20229( uParam14 );
                    sub_20229( uParam17 );
                    sub_20229( "MORE_SEATS" );
                    sub_26136();
                    return 1;
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U132 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
        sub_20229( uParam10 );
    }
    sub_26631( uParam0, uParam1, uParam2, 0, 0 );
    sub_28819( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_18333()
{
    int I;

    for ( I = 0; I < l_U141; I++ )
    {
        if (DOES_CHAR_EXIST( l_U141[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
            {
                if ((sub_4389()) AND ((sub_18426( l_U141[I] )) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U141[I] ))))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U141[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_2262() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3203() )))
        {
            if ((sub_4389()) AND ((sub_18426( sub_3203() )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() ))))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3203(), 1 );
            }
        }
    }
    return;
}

int sub_18426(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U2._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_18620()
{
    if (NOT l_U114)
    {
        l_U149 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U101 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U102 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U103 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U104 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U106 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U105 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U107 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U108[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U108[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U108[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U112 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U113 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U134, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U135, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U136, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U146._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U146._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U146._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U115 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U116 );
        END_WIDGET_GROUP();
        l_U114 = 1;
    }
    return;
}

void sub_19500()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_2262() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3203(), 0 );
    }
    for ( I = 0; I < l_U141; I++ )
    {
        if (DOES_CHAR_EXIST( l_U141[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U141[I], 0 );
            }
        }
    }
    return;
}

int sub_19681(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U141[0] = uParam0;
    l_U141[1] = uParam1;
    l_U141[2] = uParam2;
    l_U140 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
        {
            iVar16++;
        }
    }
    if ((NOT (DOES_VEHICLE_EXIST( iParam9 ))) AND ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() )) AND (NOT sub_19852())))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3203(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U121)
            {
                sub_20109( "MORE_SEATS", 0 );
                l_U121 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U121 = 0;
        sub_20229( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U141[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_20339() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U141[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U141[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3203(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U141[I], sub_20339() ))
                        {
                            if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() )) AND (NOT sub_19852()))
                            {
                                if (NOT (sub_20541( l_U141[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U141[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_20339() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U141[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U141[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3203(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U141[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U141[I], sub_20339() ))
                {
                    if (sub_21102())
                    {
                        if (l_U123[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U141[I], -1 );
                            l_U123[I] = 0;
                        }
                    }
                    else if (NOT l_U123[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U141[I], 2 );
                        l_U123[I] = 1;
                    }
                }
                if ((NOT (sub_21380( l_U141[I], iParam9 ))) AND ((NOT (sub_21284( l_U141[I], iParam9 ))) AND (NOT (IS_GROUP_MEMBER( l_U141[I], sub_20339() )))))
                {
                    if (sub_21493( l_U141[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_20339() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U141[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U141[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_20339(), l_U141[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U128[I] )))
                        {
                            GET_GAME_TIMER( ref l_U138 );
                            ADD_BLIP_FOR_CHAR( l_U141[I], ref l_U128[I] );
                            CHANGE_BLIP_DISPLAY( l_U128[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U128[I], 1 );
                            if (bParam8)
                            {
                                sub_22216( l_U128[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U128[I] ))
                {
                    if ((uParam11) || ((sub_21284( l_U141[I], iParam9 )) || (sub_22335( l_U141[I] ))))
                    {
                        if (DOES_BLIP_EXIST( l_U128[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_20229( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_22216( l_U128[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U141[I], iParam9 )))
                    {
                        if ((NOT l_U118) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U141[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U141[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U141[I], iParam9 )))
                                {
                                    if (NOT (sub_22335( l_U141[I] )))
                                    {
                                        if (sub_22842( l_U141[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U141[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U141[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3203(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_3203(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U141[I], sub_20339() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U141[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U141[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U141[I], 1 );
                                if (l_U117)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U141[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U141[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_3203(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U141[I], ref l_U128[I] );
                                CHANGE_BLIP_DISPLAY( l_U128[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U128[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_20339() )))
                        {
                            if (sub_21493( l_U141[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U141[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U141[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U141[I], 0 );
                                SET_GROUP_MEMBER( sub_20339(), l_U141[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_3203(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U141[I], sub_20339() )))
                        {
                            SET_GROUP_MEMBER( sub_20339(), l_U141[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U141[I], sub_20339() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U141[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U128[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_20229( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U128[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_4373( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U141[I], sub_3203(), 40.00000000, 40.00000000, 40.00000000, 0 )) || (sub_20541( l_U141[I] )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if ((iVar16 == 1) || ((iVar17 - l_U138) > 1500))
        {
            if (iVar15 > 0)
            {
                if (l_U139 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U139 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar16 > 1) AND (iVar15 == iVar16))
                    {
                        if ((NOT (l_U139 == iVar15)) AND (NOT l_U107))
                        {
                            sub_20109( uParam6, 0 );
                            l_U107 = 1;
                            l_U139 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT (l_U139 == iVar15)) AND (NOT l_U108[I]))
                                {
                                    sub_20109( uVar28[I], 0 );
                                    l_U108[I] = 1;
                                    l_U139 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U139 = 0;
            }
        }
    }
    l_U117 = 0;
    if ((NOT bVar25) AND (iVar18))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U128[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_20229( uVar28[I] );
            }
        }
        sub_20229( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3203(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                {
                    SET_CHAR_COORDINATES( l_U141[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_19852()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3203(), ref uVar2 );
        if (sub_19893( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_19893(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U141; I++ )
        {
            if (DOES_CHAR_EXIST( l_U141[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_20109(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U137 );
    return;
}

void sub_20229(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_20339()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_20541(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_2262() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3203(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3203(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )))
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

int sub_21102()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_3203(), ref uVar2 );
    if (sub_19893( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_21284(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_21380(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_20339() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_21493(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_3203(), uVar5 ))
                    {
                        if (sub_19852())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3203(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3203(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_21102())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_3203(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_22216(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U133 ))
        {
            SET_ROUTE( l_U133, 0 );
        }
        l_U133 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_22335(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() ))
        {
            if (sub_13691( sub_3203(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_20339(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_20339() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_20339(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_22842(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 < 0.50000000) AND (fVar3 > -0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_25364()
{
    if (NOT (IS_CHAR_INJURED( l_U140 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U140 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_25917()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() ))
    {
        if ((IS_CHAR_IN_ANY_HELI( sub_3203() )) || (IS_CHAR_ON_ANY_BIKE( sub_3203() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U119)
    {
        if (sub_22842( sub_3203() ))
        {
            if ((l_U113) || (sub_5770( 1, iVar2 )))
            {
                return 1;
            }
        }
    }
    else if ((l_U113) || (sub_5770( 1, iVar2 )))
    {
        return 1;
    }
    return 0;
}

void sub_26136()
{
    int I;

    sub_26145();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U128[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U128[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U127 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U127 );
    }
    l_U133 = nil;
    l_U107 = 0;
    for ( I = 0; I < l_U108; I++ )
    {
        l_U108[I] = 0;
        l_U123[I] = 0;
    }
    l_U103 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U104 = 0;
    l_U106 = 0;
    l_U105 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U139 = 0;
    for ( I = 0; I < l_U141; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U141[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U141[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_2262() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_3203(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_2262() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3203(), 1 );
    }
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    return;
}

void sub_26145()
{
    if (DOES_BLIP_EXIST( l_U132 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132 );
    }
    return;
}

void sub_26631(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_18620();
    if (l_U112)
    {
        uParam0 = l_U146._fU0;
        uParam1 = l_U146._fU4;
        uParam2 = l_U146._fU8;
        uVar12 = l_U136;
        l_U112 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_3203() )))
    {
        GET_CHAR_HEADING( sub_3203(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2262() );
            sub_26842( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_27263( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U141; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U141[I] );
                        if (NOT (IS_CHAR_INJURED( sub_3203() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3203(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U141[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U141[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3203() );
                    WARP_CHAR_INTO_CAR( sub_3203(), uParam4 );
                    for ( I = 0; I < l_U141; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U141[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U141[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U141[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U141[I], 0 );
                            }
                        }
                    }
                }
                sub_27263( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3203() );
                    WARP_CHAR_INTO_CAR( sub_3203(), uVar8 );
                    sub_28170( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3203() );
                        WARP_CHAR_INTO_CAR( sub_3203(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U141; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U141[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U141[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U141[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U141; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U141[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U141[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U141[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_9548( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_26842(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_2262() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3203(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_3203(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_26962( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_26962(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_27263(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_3203(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_3203(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_3203(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_3203(), uParam3 );
    return;
}

void sub_28170(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_28819(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_28844( uParam0, uParam1, uParam2, l_U134, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3203(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U134, l_U134, l_U134, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U134 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U134 );
            }
        }
    }
    return;
}

int sub_28844(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_28861( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3203(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_28861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_29214()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (sub_5770( 1, 1 ))
    {
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (IS_CHAR_INJURED( l_U159 ))
            {
                l_U209 = 1;
                sub_29282( 15, l_U159, 11 );
                sub_4009();
            }
        }
        GET_GAME_TIMER( ref l_U213 );
        l_U214 = l_U213 - l_U212;
        PRINTNL();
        PRINTSTRING( "The time now is " );
        PRINTINT( l_U214 );
        if (l_U214 > l_U215)
        {
            l_U209 = 2;
            if (DOES_CHAR_EXIST( l_U159 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U159 )))
                {
                    sub_29282( 15, l_U159, 11 );
                    SET_CHAR_HEALTH( l_U159, 50 );
                }
            }
            sub_4009();
        }
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U159 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3203(), l_U159, 200.00000000, 200.00000000, 200.00000000, 0 )))
                {
                    l_U209 = 3;
                    sub_4009();
                }
            }
        }
    }
    return;
}

void sub_29282(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U42871._fU0 = uParam0;
    g_U42871._fU4 = iParam1;
    g_U42871._fU8 = uParam2;
    g_U42871._fU12 = 0;
    if (g_U12379)
    {
        g_U42871._fU12 = 1;
    }
    return;
}

void sub_29657()
{
    unknown uVar2;
    float fVar3;

    if (sub_29666())
    {
        if (l_U216 != 0)
        {
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
            }
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (IS_SCREEN_FADED_OUT())
            {
                l_U216 = 9;
            }
        }
    }
    switch (l_U216)
    {
        case 0:
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3203(), 1 );
        l_U234 = 0;
        BEGIN_CAM_COMMANDS( ref l_U261 );
        CREATE_CAM( 3, ref l_U263 );
        CREATE_CAM( 3, ref l_U269 );
        CREATE_CAM( 14, ref l_U264 );
        CREATE_CAM( 14, ref l_U265 );
        CREATE_CAM( 14, ref l_U266 );
        CREATE_CAM( 14, ref l_U267 );
        CREATE_CAM( 14, ref l_U268 );
        CREATE_CAM( 14, ref l_U262 );
        SET_CAM_ACTIVE( l_U262, 0 );
        SET_CAM_PROPAGATE( l_U262, 0 );
        SET_CAM_FAR_DOF( l_U262, 9.00000000 );
        SET_CAM_ACTIVE( l_U264, 0 );
        SET_CAM_PROPAGATE( l_U264, 0 );
        SET_CAM_ACTIVE( l_U265, 0 );
        SET_CAM_PROPAGATE( l_U265, 0 );
        SET_CAM_POS( l_U264, 85.92168000, 149.48630000, 15.28765000 );
        SET_CAM_ROT( l_U264, -5.58124300, 0.00000000, -113.66450000 );
        SET_CAM_FOV( l_U264, 45.00000000 );
        SET_CAM_POS( l_U265, 85.92168000, 149.48630000, 15.28765000 );
        SET_CAM_ROT( l_U265, -5.58124300, 0.00000000, -113.66450000 );
        SET_CAM_FOV( l_U265, 42.00001000 );
        SET_CAM_FAR_DOF( l_U264, 20.00000000 );
        SET_CAM_FAR_DOF( l_U265, 20.00000000 );
        SET_CAM_POS( l_U267, 91.38478000, 137.71420000, 17.05852000 );
        SET_CAM_ROT( l_U267, -26.95385000, -0.00000000, -33.97603000 );
        SET_CAM_FOV( l_U267, 40.00000000 );
        SET_CAM_POS( l_U268, 89.37829000, 138.63030000, 16.44157000 );
        SET_CAM_ROT( l_U268, -18.42973000, -0.00000000, -44.44978000 );
        SET_CAM_FOV( l_U268, 40.00000000 );
        SET_CAM_ACTIVE( l_U263, 0 );
        SET_CAM_PROPAGATE( l_U263, 0 );
        SET_CAM_ACTIVE( l_U269, 0 );
        SET_CAM_PROPAGATE( l_U269, 0 );
        SET_CAM_ACTIVE( l_U267, 0 );
        SET_CAM_PROPAGATE( l_U267, 0 );
        SET_CAM_ACTIVE( l_U268, 0 );
        SET_CAM_PROPAGATE( l_U268, 0 );
        SET_CAM_POS( l_U266, l_U196._fU0, l_U196._fU4, l_U196._fU8 );
        SET_CAM_ROT( l_U266, -5.58124300, 0.00000000, -113.66450000 );
        SET_CAM_FOV( l_U266, 40.00000000 );
        SET_CAM_ACTIVE( l_U266, 0 );
        SET_CAM_PROPAGATE( l_U266, 0 );
        SETTIMERA( 0 );
        l_U216++;
        break;
        case 1:
        switch (l_U217)
        {
            case 0:
            if (DOES_CHAR_EXIST( sub_3203() ))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                        {
                            if (IS_CHAR_ON_ANY_BIKE( sub_3203() ))
                            {
                                SET_CAM_INTERP_STYLE_CORE( l_U269, l_U267, l_U268, 17000, 0 );
                                SET_CAM_ACTIVE( l_U269, 1 );
                                SET_CAM_PROPAGATE( l_U269, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SETTIMERA( 0 );
                                l_U217++;
                            }
                            else if (IS_CHAR_ON_FOOT( sub_3203() ))
                            {
                                SET_CHAR_DUCKING( sub_3203(), 0 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( sub_3203(), l_U159 );
                                if (IS_CHAR_IN_ANY_CAR( l_U159 ))
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( l_U159, 92.55950000, 142.04340000, 13.70210000 );
                                }
                                else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U159 )))
                                {
                                    SET_CHAR_COORDINATES( l_U159, 92.55950000, 142.04340000, 13.70210000 );
                                }
                                SET_CAM_INTERP_STYLE_CORE( l_U269, l_U267, l_U268, 17000, 0 );
                                SET_CAM_ACTIVE( l_U269, 1 );
                                SET_CAM_PROPAGATE( l_U269, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SETTIMERA( 0 );
                                l_U217++;
                            }
                        }
                    }
                }
            }
            if (DOES_CHAR_EXIST( sub_3203() ))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3203() )))
                                {
                                    if (NOT (IS_CHAR_ON_FOOT( sub_3203() )))
                                    {
                                        SET_USE_HIGHDOF( 1 );
                                        l_U217++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 1:
            if (DOES_CHAR_EXIST( sub_3203() ))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                        {
                            GET_CHAR_COORDINATES( sub_3203(), ref l_U196._fU0, ref l_U196._fU4, ref l_U196._fU8 );
                            GET_CHAR_COORDINATES( l_U159, ref l_U199._fU0, ref l_U199._fU4, ref l_U199._fU8 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3203(), 0.00000000, 3.00000000, 0.90000000, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U159, 0.00000000, 3.00000000, 0.90000000, ref l_U205._fU0, ref l_U205._fU4, ref l_U205._fU8 );
                        }
                    }
                }
            }
            SET_CAM_POS( l_U266, l_U202._fU0, l_U202._fU4, l_U202._fU8 );
            SET_CAM_ROT( l_U266, -5.58124300, 0.00000000, -113.66450000 );
            SET_CAM_FOV( l_U266, 40.00000000 );
            POINT_CAM_AT_COORD( l_U266, l_U199._fU0, l_U199._fU4, l_U199._fU8 + 0.30000000 );
            SET_CAM_FAR_DOF( l_U266, 6.00000000 );
            sub_11905();
            if (DOES_CHAR_EXIST( sub_3203() ))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3203() )))
                                {
                                    if (NOT (IS_CHAR_ON_FOOT( sub_3203() )))
                                    {
                                        SET_CAM_ACTIVE( l_U266, 1 );
                                        SET_CAM_PROPAGATE( l_U266, 1 );
                                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (DOES_CHAR_EXIST( sub_3203() ))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3203() )))
                                {
                                    TASK_LOOK_AT_CHAR( l_U159, sub_3203(), -2, 0 );
                                    TASK_LOOK_AT_CHAR( sub_3203(), l_U159, -2, 0 );
                                }
                            }
                        }
                    }
                }
            }
            sub_4627( "GIRL1_ARRV1", ref l_U219, 6, 1 );
            if (DOES_CHAR_EXIST( sub_3203() ))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                        {
                            if (IS_CHAR_ON_ANY_BIKE( sub_3203() ))
                            {
                                if ((sub_32105( l_U219 )) > 2)
                                {
                                    l_U216++;
                                }
                            }
                            if (IS_CHAR_ON_FOOT( sub_3203() ))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                                {
                                    if ((sub_32105( l_U219 )) > 2)
                                    {
                                        l_U216++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            SETTIMERA( 0 );
            l_U217++;
            break;
            case 2:
            if (DOES_CHAR_EXIST( sub_3203() ))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                        {
                            GET_CHAR_COORDINATES( sub_3203(), ref l_U196._fU0, ref l_U196._fU4, ref l_U196._fU8 );
                            GET_CHAR_COORDINATES( l_U159, ref l_U199._fU0, ref l_U199._fU4, ref l_U199._fU8 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3203(), 0.00000000, 3.00000000, 0.90000000, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U159, 0.00000000, 3.00000000, 0.90000000, ref l_U205._fU0, ref l_U205._fU4, ref l_U205._fU8 );
                        }
                    }
                }
            }
            SET_CAM_POS( l_U266, l_U202._fU0, l_U202._fU4, l_U202._fU8 );
            SET_CAM_ROT( l_U266, -5.58124300, 0.00000000, -113.66450000 );
            SET_CAM_FOV( l_U266, 40.00000000 );
            POINT_CAM_AT_COORD( l_U266, l_U199._fU0, l_U199._fU4, l_U199._fU8 + 0.30000000 );
            SET_CAM_FAR_DOF( l_U266, 6.00000000 );
            if ((sub_32105( l_U219 )) > 1)
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U159 )))
                    {
                        GET_PLAYER_GROUP( sub_2262(), ref l_U260 );
                        if (IS_GROUP_MEMBER( l_U159, l_U260 ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U159 );
                        }
                    }
                }
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U159 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U159 );
                        }
                    }
                }
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                        {
                            if ((NOT (IS_CHAR_ON_ANY_BIKE( sub_3203() ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3203() )))
                            {
                                l_U253 = 1;
                                TASK_GO_STRAIGHT_TO_COORD( l_U159, 94.40150000, 149.82200000, 13.77230000, 2, -1 );
                                SETTIMERA( 0 );
                                l_U217++;
                            }
                            else
                            {
                                TASK_GO_STRAIGHT_TO_COORD( l_U159, 94.40150000, 147.82200000, 13.77230000, 2, -1 );
                                SETTIMERA( 0 );
                                l_U217++;
                            }
                        }
                    }
                }
            }
            l_U217++;
            break;
            case 3:
            PRINTNL();
            PRINTSTRING( "*********** CASE 3 CONVO CUTS************" );
            PRINTNL();
            if ((sub_32105( l_U219 )) > 2)
            {
                l_U217 = 9;
            }
            break;
            case 9:
            PRINTNL();
            PRINTSTRING( "*********** CASE 9 CONVO CUTS ************" );
            PRINTNL();
            l_U216++;
            break;
        }
        break;
        case 2:
        PRINTNL();
        PRINTSTRING( "*********** CASE 2 ************" );
        PRINTNL();
        SET_CAM_ACTIVE( l_U266, 0 );
        SET_CAM_PROPAGATE( l_U266, 0 );
        SET_CAM_ACTIVE( l_U269, 0 );
        SET_CAM_PROPAGATE( l_U269, 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U263, l_U264, l_U265, 3000, 0 );
        SET_CAM_ACTIVE( l_U263, 1 );
        SET_CAM_PROPAGATE( l_U263, 1 );
        if (NOT l_U253)
        {
            if (DOES_CHAR_EXIST( l_U159 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U159 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U159, 94.40150000, 147.82200000, 13.77230000, 1.50000000, 1.50000000, 1.50000000, 0 ))
                    {
                        l_U254 = 1;
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U159, sub_3203() );
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U159 )))
            {
                GET_PLAYER_GROUP( sub_2262(), ref l_U260 );
                if (IS_GROUP_MEMBER( l_U159, l_U260 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U159 );
                }
            }
        }
        if (DOES_CHAR_EXIST( sub_3203() ))
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3203() )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3203(), l_U159 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U159 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U159 ))
                {
                    TASK_LEAVE_ANY_CAR( l_U159 );
                }
                else
                {
                    l_U216++;
                }
            }
        }
        break;
        case 3:
        if (DOES_CHAR_EXIST( sub_3203() ))
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3203() )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3203(), l_U159 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U159 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                {
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U159, 94.40150000, 147.82200000, 13.77230000, 1.50000000, 1.50000000, 1.50000000, 0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U159, 17, ref l_U259 );
                        if (l_U259 == 7)
                        {
                            TASK_GO_STRAIGHT_TO_COORD( l_U159, 94.40150000, 147.82200000, 13.77230000, 2, -1 );
                        }
                    }
                    if (NOT l_U253)
                    {
                        if (DOES_CHAR_EXIST( l_U159 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U159 )))
                            {
                                if (LOCATE_CHAR_ON_FOOT_3D( l_U159, 94.40150000, 147.82200000, 13.77230000, 1.50000000, 1.50000000, 1.50000000, 0 ))
                                {
                                    l_U254 = 1;
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U159, sub_3203() );
                                }
                            }
                        }
                    }
                    SETTIMERA( 0 );
                    l_U216++;
                }
            }
        }
        break;
        case 4:
        if (DOES_CHAR_EXIST( sub_3203() ))
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
                {
                    if (fVar3 <= 180)
                    {
                        if (TIMERA() >= 3000)
                        {
                            SET_CAM_ACTIVE( l_U263, 0 );
                            SET_CAM_PROPAGATE( l_U263, 0 );
                            SET_CAM_ACTIVE( l_U262, 1 );
                            SET_CAM_PROPAGATE( l_U262, 1 );
                            if (DOES_CHAR_EXIST( sub_3203() ))
                            {
                                if (DOES_CHAR_EXIST( l_U159 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_3203() )))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U159 )))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_3203() ))
                                            {
                                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3203() )))
                                                {
                                                    if (NOT (IS_CHAR_ON_FOOT( sub_3203() )))
                                                    {
                                                        GET_CAR_CHAR_IS_USING( sub_3203(), ref l_U165 );
                                                        GET_CAR_HEADING( l_U165, ref fVar3 );
                                                        if (fVar3 <= 180)
                                                        {
                                                            SET_CAR_HEADING( l_U165, 90.00000000 );
                                                        }
                                                        else
                                                        {
                                                            SET_CAR_HEADING( l_U165, 270.00000000 );
                                                        }
                                                        if (IS_VEH_DRIVEABLE( l_U165 ))
                                                        {
                                                            if (NOT (IS_BIG_VEHICLE( l_U165 )))
                                                            {
                                                                SET_CHAR_COORDINATES( sub_3203(), l_U193._fU0, l_U193._fU4 - 1.00000000, l_U193._fU8 );
                                                            }
                                                            else
                                                            {
                                                                SET_CHAR_COORDINATES( sub_3203(), 101.48370000, 141.90290000, 14.71110000 );
                                                            }
                                                        }
                                                        if (DOES_VEHICLE_EXIST( l_U165 ))
                                                        {
                                                            if (IS_VEH_DRIVEABLE( l_U165 ))
                                                            {
                                                                SET_CAR_ON_GROUND_PROPERLY( l_U165 );
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((NOT l_U254) == 1)
                            {
                                if (DOES_CHAR_EXIST( l_U159 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                                    {
                                        SET_CHAR_COORDINATES( l_U159, 94.65060000, 145.00000000, 13.76570000 );
                                    }
                                }
                            }
                            if (NOT l_U253)
                            {
                                if (DOES_CHAR_EXIST( l_U159 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                                    {
                                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U159 );
                                            TASK_GO_STRAIGHT_TO_COORD( l_U159, 94.59860000, 149.59510000, 14.78210000, 2, -1 );
                                        }
                                    }
                                }
                            }
                            SET_CAM_POS( l_U262, 97.55288000, 147.47540000, 14.04654000 );
                            SET_CAM_ROT( l_U262, 7.29883400, 0.00000000, 91.67746000 );
                            SET_CAM_FOV( l_U262, 39.90001000 );
                            SETTIMERA( 0 );
                            l_U216++;
                        }
                    }
                    else if (TIMERA() >= 2000)
                    {
                        SET_CAM_ACTIVE( l_U263, 0 );
                        SET_CAM_PROPAGATE( l_U263, 0 );
                        SET_CAM_ACTIVE( l_U262, 1 );
                        SET_CAM_PROPAGATE( l_U262, 1 );
                        if (NOT l_U253)
                        {
                            if (DOES_CHAR_EXIST( l_U159 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U159 )))
                                {
                                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                                    {
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U159 );
                                        TASK_GO_STRAIGHT_TO_COORD( l_U159, 94.59860000, 149.59510000, 14.78210000, 2, -1 );
                                    }
                                }
                            }
                        }
                        SET_CAM_POS( l_U262, 97.55288000, 147.47540000, 14.04654000 );
                        SET_CAM_ROT( l_U262, 7.29883400, 0.00000000, 91.67746000 );
                        SET_CAM_FOV( l_U262, 39.90001000 );
                        SETTIMERA( 0 );
                        l_U216++;
                    }
                }
                else if (TIMERA() >= 3000)
                {
                    SET_CAM_ACTIVE( l_U263, 0 );
                    SET_CAM_PROPAGATE( l_U263, 0 );
                    SET_CAM_ACTIVE( l_U262, 1 );
                    SET_CAM_PROPAGATE( l_U262, 1 );
                    if ((NOT l_U254) == 1)
                    {
                        if (DOES_CHAR_EXIST( l_U159 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U159 )))
                            {
                                SET_CHAR_COORDINATES( l_U159, 94.65060000, 145.00000000, 13.76570000 );
                            }
                        }
                    }
                    if (NOT l_U253)
                    {
                        if (DOES_CHAR_EXIST( l_U159 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U159 )))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U159 );
                                    TASK_GO_STRAIGHT_TO_COORD( l_U159, 94.59860000, 149.59510000, 14.78210000, 2, -1 );
                                    l_U216++;
                                }
                            }
                        }
                    }
                    SET_CAM_POS( l_U262, 97.55288000, 147.47540000, 14.04654000 );
                    SET_CAM_ROT( l_U262, 7.29883400, 0.00000000, 91.67746000 );
                    SET_CAM_FOV( l_U262, 39.90001000 );
                    SETTIMERA( 0 );
                    l_U216++;
                }
            }
        }
        break;
        case 5:
        if (DOES_CHAR_EXIST( sub_3203() ))
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3203() )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3203(), l_U159 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U159 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                {
                    if (DOES_CHAR_EXIST( l_U160 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U160 )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U160, l_U159 );
                        }
                    }
                    l_U216++;
                }
            }
        }
        break;
        case 6:
        if (DOES_CHAR_EXIST( sub_3203() ))
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3203() )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3203(), l_U159 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U159 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U159 )))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U159, 94.59860000, 149.59510000, 14.78210000, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        l_U216++;
                    }
                }
            }
        }
        break;
        case 7:
        if (DOES_CHAR_EXIST( sub_3203() ))
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3203() )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3203(), l_U159 );
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U159 )))
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U159, 94.59860000, 149.59510000, 14.78210000, 1.50000000, 1.50000000, 1.50000000, 0 )))
                {
                    SETTIMERA( 0 );
                    l_U216++;
                }
            }
        }
        break;
        case 8:
        if (DOES_CHAR_EXIST( sub_3203() ))
        {
            if (NOT (IS_CHAR_INJURED( sub_3203() )))
            {
                if (DOES_CHAR_EXIST( l_U159 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U159 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3203() )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( sub_3203(), l_U159 );
                        }
                    }
                }
            }
        }
        if ((NOT (IS_CHAR_INJURED( l_U160 ))) AND (DOES_CHAR_EXIST( l_U160 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                TASK_GO_STRAIGHT_TO_COORD( l_U160, 94.59860000, 149.59510000, 14.78210000, 4, 3 );
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        else if (TIMERA() >= 1500)
        {
            if ((NOT IS_SCREEN_FADING_OUT()) AND (IS_SCREEN_FADED_IN()))
            {
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            l_U216++;
        }
        break;
        case 9:
        sub_13213( ref l_U219, 0 );
        SET_USE_HIGHDOF( 0 );
        if (DOES_CHAR_EXIST( l_U159 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U159 )))
            {
                DELETE_CHAR( ref l_U159 );
            }
        }
        if (DOES_CHAR_EXIST( l_U160 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U160 )))
            {
                DELETE_CHAR( ref l_U160 );
            }
        }
        if (DOES_CAM_EXIST( l_U263 ))
        {
            if (IS_CAM_PROPAGATING( l_U263 ))
            {
                SET_CAM_PROPAGATE( l_U263, 0 );
            }
            if (IS_CAM_ACTIVE( l_U263 ))
            {
                SET_CAM_ACTIVE( l_U263, 0 );
            }
            DESTROY_CAM( l_U263 );
        }
        if (DOES_CAM_EXIST( l_U269 ))
        {
            if (IS_CAM_PROPAGATING( l_U269 ))
            {
                SET_CAM_PROPAGATE( l_U269, 0 );
            }
            if (IS_CAM_ACTIVE( l_U269 ))
            {
                SET_CAM_ACTIVE( l_U269, 0 );
            }
            DESTROY_CAM( l_U269 );
        }
        if (DOES_CAM_EXIST( l_U264 ))
        {
            if (IS_CAM_PROPAGATING( l_U264 ))
            {
                SET_CAM_PROPAGATE( l_U264, 0 );
            }
            if (IS_CAM_ACTIVE( l_U264 ))
            {
                SET_CAM_ACTIVE( l_U264, 0 );
            }
            DESTROY_CAM( l_U264 );
        }
        if (DOES_CAM_EXIST( l_U265 ))
        {
            if (IS_CAM_PROPAGATING( l_U265 ))
            {
                SET_CAM_PROPAGATE( l_U265, 0 );
            }
            if (IS_CAM_ACTIVE( l_U265 ))
            {
                SET_CAM_ACTIVE( l_U265, 0 );
            }
            DESTROY_CAM( l_U265 );
        }
        if (DOES_CAM_EXIST( l_U266 ))
        {
            if (IS_CAM_PROPAGATING( l_U266 ))
            {
                SET_CAM_PROPAGATE( l_U266, 0 );
            }
            if (IS_CAM_ACTIVE( l_U266 ))
            {
                SET_CAM_ACTIVE( l_U266, 0 );
            }
            DESTROY_CAM( l_U266 );
        }
        if (DOES_CAM_EXIST( l_U267 ))
        {
            if (IS_CAM_PROPAGATING( l_U267 ))
            {
                SET_CAM_PROPAGATE( l_U267, 0 );
            }
            if (IS_CAM_ACTIVE( l_U267 ))
            {
                SET_CAM_ACTIVE( l_U267, 0 );
            }
            DESTROY_CAM( l_U267 );
        }
        if (DOES_CAM_EXIST( l_U268 ))
        {
            if (IS_CAM_PROPAGATING( l_U268 ))
            {
                SET_CAM_PROPAGATE( l_U268, 0 );
            }
            if (IS_CAM_ACTIVE( l_U268 ))
            {
                SET_CAM_ACTIVE( l_U268, 0 );
            }
            DESTROY_CAM( l_U268 );
        }
        if (DOES_CAM_EXIST( l_U262 ))
        {
            if (IS_CAM_PROPAGATING( l_U262 ))
            {
                SET_CAM_PROPAGATE( l_U262, 0 );
            }
            if (IS_CAM_ACTIVE( l_U262 ))
            {
                SET_CAM_ACTIVE( l_U262, 0 );
            }
            DESTROY_CAM( l_U262 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U261 );
        SET_CAM_BEHIND_PED( sub_3203() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_2262(), 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3203(), 0 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U158 = 5;
        break;
    }
    return;
}

int sub_29666()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_32105(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_12947( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_37422()
{
    CLEAR_WANTED_LEVEL( sub_2262() );
    g_U25 = 81;
    sub_37454( l_U185 );
    sub_694();
    return;
}

void sub_37454(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_1602( uParam0 );
    if (NOT g_U30257[uVar3]._fU4)
    {
        sub_577( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_37574( uParam0 );
    g_U30257[uVar3]._fU28++;
    sub_39253( uParam0, uVar3 );
    return;
}

void sub_37574(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        sub_37616();
        break;
        case 14:
        sub_38589();
        break;
        case 15:
        sub_38762();
        break;
        default: sub_577( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_39031();
    sub_39115();
    return;
}

void sub_37616()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 13;
    uVar3 = sub_1602( iVar2 );
    sub_37652( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_38300( 0 );
        break;
        case 2:
        sub_38300( 500 );
        break;
        default: sub_577( "Interactions_Arnaud_Pass: Unknown Arnaud Sequence - tell Keith" );
    }
    return;
}

void sub_37652(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_37705( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_37837( iParam0 + 0 );
    }
    return;
}

void sub_37705(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_37837( iParam0 + 0 );
    }
    return;
}

void sub_37837(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_37868( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_37868(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_38300(unknown uParam0)
{
    sub_38311( uParam0 );
    return;
}

void sub_38311(unknown uParam0)
{
    ADD_SCORE( sub_2262(), uParam0 );
    sub_38336( uParam0 );
    return;
}

void sub_38336(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_577( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_38589()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 14;
    uVar3 = sub_1602( iVar2 );
    sub_37652( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_38300( 500 );
        break;
        default: sub_577( "Interactions_Daisy_Pass: Unknown Daisy Sequence - tell Keith" );
    }
    return;
}

void sub_38762()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 15;
    uVar3 = sub_1602( iVar2 );
    sub_37652( ref g_U30257[uVar3]._fU8, 24, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_38300( 0 );
        break;
        case 2:
        sub_38300( 0 );
        break;
        default: sub_577( "Interactions_Margot_Pass: Unknown Margot Sequence - tell Keith" );
    }
    return;
}

void sub_39031()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_39115()
{
    sub_39124();
    StrCopy( ref g_U10966, "RIPASS", 16 );
    return;
}

void sub_39124()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_39253(unknown uParam0, unknown uParam1)
{
    sub_39264( uParam1 );
    switch (uParam0)
    {
        case 13:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-65.59000000, -74.01000000, 13.76000000};
            g_U30257[uParam1]._fU52 = 1;
            StrCopy( ref g_U30257[uParam1]._fU60, "Arnaud1", 16 );
        }
        else if (g_U30257[uParam1]._fU28 == 2)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {595.69100000, 1645.17300000, 29.30500000};
            g_U30257[uParam1]._fU52 = 1;
            StrCopy( ref g_U30257[uParam1]._fU60, "Arnaud2", 16 );
        }
        break;
        case 14:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-483.47000000, 157.61000000, 6.62300000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Daisy1", 16 );
        }
        break;
        case 15:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-442.27420000, 365.23310000, 9.25290000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Margot1", 16 );
        }
        else if (g_U30257[uParam1]._fU28 == 2)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {456.33360000, -506.40220000, 16.68020000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Margot2", 16 );
        }
        break;
    }
    return;
}

void sub_39264(unknown uParam0)
{
    g_U30257[uParam0]._fU36 = 0;
    g_U30257[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U30257[uParam0]._fU52 = 1;
    StrCopy( ref g_U30257[uParam0]._fU60, "", 16 );
    sub_39349( uParam0 );
    return;
}

void sub_39349(unknown uParam0)
{
    sub_39360( uParam0 );
    sub_39438( uParam0 );
    return;
}

void sub_39360(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U30257[uParam0]._fU56 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U30257[uParam0]._fU56 );
    }
    g_U30257[uParam0]._fU56 = nil;
    return;
}

void sub_39438(unknown uParam0)
{
    g_U30257[uParam0]._fU76 = 0;
    return;
}

void sub_40091()
{
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            WAIT( 0 );
        }
        l_U158 = 5;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 33 ))
        {
            WAIT( 0 );
        }
        l_U158 = 6;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            WAIT( 0 );
        }
        if (l_U158 == 3)
        {
            l_U215 = 1;
        }
    }
    return;
}

