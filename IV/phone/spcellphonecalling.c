void main()
{
    boolean bVar2;
    boolean bVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;

    l_U98 = 225;
    l_U171 = 0;
    l_U173 = 0;
    l_U174 = 0;
    l_U254 = 0;

    // l_U257
    currentLanguage = GET_CURRENT_LANGUAGE();

    bVar2 = false;
    bVar3 = false;
    l_U172 = 1;
    cellphone3Dstructure._fU540 = 0;
    SET_SLEEP_MODE_ACTIVE( 0 );
    cellphone3Dstructure._fU508 = 0;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    g_U555 = 1;

    PRINTSTRING( "\n cellphone3Dstructure.multipleChoiceNumber is " );
    PRINTINT( cellphone3Dstructure.multipleChoiceNumber );
    
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_197( ref l_U147, 1 );
        cellphone3Dstructure._fU0 = 1000;
        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 6;
        sub_1007( "\n------------------------------------------" );
        sub_1007( "\n callStatus = CALL_ENDED" );
        sub_1007( "\n------------------------------------------" );
        cellphone3Dstructure.multipleChoiceNumber = -2;
        STOP_MOBILE_PHONE_RINGING();
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        UNREGISTER_SCRIPT_WITH_AUDIO();
        DESTROY_MOBILE_PHONE();
        TERMINATE_THIS_SCRIPT();
    }
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
    switch (g_U826)
    {
        case 0:
        cellphone3Dstructure._fU496 = GET_IS_HIDEF();
        break;
        case 1:
        cellphone3Dstructure._fU496 = 1;
        break;
        case 2:
        cellphone3Dstructure._fU496 = 0;
        break;
    }
    if (cellphone3Dstructure._fU380)
    {
        sub_1291( ref l_U112, ref l_U99 );
        sub_2516( ref l_U112 );
    }
    l_U169 = 1;
    cellphone3Dstructure._fU116 = 1;
    SCRIPT_IS_USING_MOBILE_PHONE( 1 );
    SETTIMERA( 0 );
    cellphone3Dstructure._fU504 = 0;
    if (cellphone3Dstructure._fU0 == 1000)
    {
        sub_197( ref l_U147, 1 );
        sub_3398();
        sub_3587();
    }
    else
    {
        l_U147._fU0 = 1;
    }
    while (true)
    {
        WAIT( 0 );
        if (NOT sub_4054())
        {
            if ((NOT l_U254) AND (NOT cellphone3Dstructure._fU504))
            {
                cellphone3Dstructure._fU504 = 1;
                ABORT_SCRIPTED_CONVERSATION( 0 );
                if ((cellphone3Dstructure._fU0 == 1004) || (bVar2))
                {
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 2;
                }
                else if (cellphone3Dstructure._fU364 == 0)
                {
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 6;
                }
                else if (l_U171)
                {
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 4;
                }
                else
                {
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 5;
                };;;
                STOP_MOBILE_PHONE_RINGING();
                sub_5169( 1010 );
            }
        }
        else if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4066() ))
        {
            switch (cellphone3Dstructure._fU0)
            {
                case 1010:
                case 1000: break;
                default:
                if (IS_CONTROL_JUST_PRESSED( 0, 43 ))
                {
                    if ((NOT sub_5286()) AND (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
                        GET_CAR_DOOR_LOCK_STATUS( uVar4, ref uVar5 );
                        switch (uVar5)
                        {
                            case 4: break;
                            default:
                            GET_CAR_SPEED( uVar4, ref fVar6 );
                            if ((fVar6 <= 10.00000000) AND (fVar6 >= -10.00000000))
                            {
                                TASK_LEAVE_ANY_CAR( CurrentPlayerChar() );
                                l_U254 = 1;
                            }
                            break;
                        }
                    }
                }
                break;
            }
        }
        switch (cellphone3Dstructure._fU0)
        {
            case 1000:
            if ((NOT bVar2) AND ((NOT cellphone3Dstructure.overrideCellphoneChecks) AND (cellphone3Dstructure._fU48)))
            {
                PLAY_AUDIO_EVENT( "MOBILE_PRERING" );
                bVar2 = true;
            }
            else if ((TIMERA() < 1000) AND (bVar2))
            {
                break;
            }
            bVar2 = false;
            if (cellphone3Dstructure._fU48)
            {
                sub_5169( 1004 );
            }
            else if (cellphone3Dstructure._fU52)
            {
                sub_5169( 1005 );
            }
            else
            {
                SCRIPT_ASSERT( "SL : cellphoneCALLING loaded not for calling or ringing" );
            };;;
            break;
            case 1004:
            sub_5745();
            if (sub_16939( ref l_U147, 2 ))
            {
                if (NOT l_U253)
                {
                    if ((cellphone3Dstructure._fU532) || (cellphone3Dstructure.overrideCellphoneChecks))
                    {
                        if (TIMERB() >= cellphone3Dstructure._fU80)
                        {
                            INCREMENT_INT_STAT_NO_MESSAGE( 302, 1 );
                            STOP_MOBILE_PHONE_RINGING();
                            g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 3;
                            SETTIMERA( 0 );
                            TASK_USE_MOBILE_PHONE( CurrentPlayerChar(), 1 );
                            l_U253 = 1;
                        }
                    }
                    else if (TIMERB() > 350)
                    {
                        if (TIMERB() < (cellphone3Dstructure._fU80 + 350))
                        {
                            switch (sub_18147( cellphone3Dstructure._fU524 ))
                            {
                                case 6:
                                INCREMENT_INT_STAT_NO_MESSAGE( 302, 1 );
                                STOP_MOBILE_PHONE_RINGING();
                                g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 3;
                                SETTIMERA( 0 );
                                TASK_USE_MOBILE_PHONE( CurrentPlayerChar(), 1 );
                                l_U253 = 1;
                                break;
                                case 7:
                                STOP_MOBILE_PHONE_RINGING();
                                sub_5169( 1010 );
                                g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 2;
                                break;
                            }
                        }
                        else
                        {
                            STOP_MOBILE_PHONE_RINGING();
                            sub_5169( 1010 );
                            g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 1;
                        }
                    }
                }
                else if (sub_21398())
                {
                    if (g_U8394 == 5)
                    {
                        if (NOT IS_MISSION_COMPLETE_PLAYING())
                        {
                            sub_5169( 1007 );
                        }
                    }
                    else if (g_U8394 != 4)
                    {
                        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 2;
                        sub_5169( 1010 );
                    }
                    else
                    {
                        sub_1007( "\n Phone is still trying to stream in text" );
                    }
                }
                else
                {
                    sub_1007( "\n Player dosent have the phone too his head" );
                }
            }
            else
            {
                SETTIMERB( 0 );
            }
            break;
            case 1005:
            sub_5745();
            if (sub_16939( ref l_U147, 2 ))
            {
                if (NOT cellphone3Dstructure._fU56)
                {
                    switch (sub_18147( cellphone3Dstructure._fU524 ))
                    {
                        case 7:
                        STOP_MOBILE_PHONE_RINGING();
                        sub_5169( 1010 );
                        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 2;
                        sub_1007( "\n------------------------------------------" );
                        sub_1007( "\n callStatus = CALL_HANG_UP" );
                        sub_1007( "\n------------------------------------------" );
                        break;
                        default:
                    }
                }
                if ((cellphone3Dstructure._fU508 >= 4) AND (sub_21398()))
                {
                    if (NOT l_U253)
                    {
                        if (NOT cellphone3Dstructure._fU384)
                        {
                            if (TIMERB() >= 2000)
                            {
                                l_U253 = 1;
                            }
                        }
                    }
                    else if (cellphone3Dstructure.missionAnsweredPhone)
                    {
                        if (NOT cellphone3Dstructure.missionAnsweredPhone)
                        {
                            StrCopy( ref l_U186[0], 4, cellphone3Dstructure._fU176, 8);
                            if (NOT (sub_22223( ref cellphone3Dstructure._fU224[1], ref cellphone3Dstructure._fU224[0], 1 )))
                            {
                                STOP_MOBILE_PHONE_RINGING();
                                if (cellphone3Dstructure._fU60 != 56)
                                {
                                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 6;
                                    sub_1007( "\n------------------------------------------" );
                                    sub_1007( "\n callStatus = CALL_ENDED" );
                                    sub_1007( "\n------------------------------------------" );
                                }
                                sub_5169( 1010 );
                            }
                            StrCopy( ref cellphone3Dstructure._fU176, 8, l_U186[0], 4);
                        }
                        else if (g_U8394 == 5)
                        {
                            if (NOT IS_MISSION_COMPLETE_PLAYING())
                            {
                                STOP_MOBILE_PHONE_RINGING();
                                SETTIMERA( 0 );
                                INCREMENT_INT_STAT_NO_MESSAGE( 301, 1 );
                                cellphone3Dstructure.missionAnsweredPhone = 0;
                                g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 3;
                                sub_1007( "\n------------------------------------------" );
                                sub_1007( "\n callStatus = CALL_IN_CALL" );
                                sub_1007( "\n------------------------------------------" );
                                sub_5169( 1007 );
                            }
                        }
                        else if (g_U8394 != 4)
                        {
                            STOP_MOBILE_PHONE_RINGING();
                            if (cellphone3Dstructure._fU60 != 56)
                            {
                                g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 2;
                                sub_1007( "\n------------------------------------------" );
                                sub_1007( "\n callStatus = CALL_HANG_UP" );
                                sub_1007( "\n------------------------------------------" );
                            }
                            sub_5169( 1010 );
                            sub_1007( "\n Putting phone away as it does not think text is streaming for the phone" );
                        };;;
                    }
                    else
                    {
                        STOP_MOBILE_PHONE_RINGING();
                        SETTIMERA( 0 );
                        sub_26135();
                        l_U255 = 1;
                        l_U256 = GET_SOUND_ID();
                        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 3;
                        sub_5169( 1007 );
                    }
                }
                else
                {
                    SETTIMERB( 0 );
                    if (sub_27638())
                    {
                        if (NOT sub_21398())
                        {
                            ;
                        }
                        if (cellphone3Dstructure._fU508 != 4)
                        {
                            ;
                        }
                    }
                }
            }
            break;
            case 1007:
            sub_16939( ref l_U147, 2 );
            sub_5745();
            if (NOT sub_21398())
            {
                break;
            }
            g_U8394 = 6;
            if (l_U255)
            {
                if (((sub_18147( cellphone3Dstructure._fU524 )) == 7) || (TIMERB() >= 2500))
                {
                    STOP_SOUND( l_U256 );
                    RELEASE_SOUND_ID( l_U256 );
                    sub_5169( 1010 );
                }
            }
            else if (NOT IS_MOBILE_PHONE_CALL_ONGOING())
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 69, TIMERB() );
                if (cellphone3Dstructure._fU364)
                {
                    sub_5169( 1008 );
                    cellphone3Dstructure._fU364 = 0;
                }
                else if (cellphone3Dstructure._fU420)
                {
                    sub_5169( 1009 );
                    cellphone3Dstructure._fU420 = 0;
                }
                else if ((g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 != 5) AND (g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 != 4))
                {
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 6;
                }
                PLAY_SOUND_FRONTEND( -1, "SFX_PHONE_REMOTE_HANG_UP_CLICK" );
                sub_5169( 1010 );;;
            }
            else if (cellphone3Dstructure._fU420)
            {
                sub_5169( 1009 );
                cellphone3Dstructure._fU420 = 0;
            }
            if (NOT cellphone3Dstructure.overrideCellphoneChecks)
            {
                switch (sub_18147( cellphone3Dstructure._fU524 ))
                {
                    case 1:
                    SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
                    break;
                    case 7:
                    ABORT_SCRIPTED_CONVERSATION( 0 );
                    if (cellphone3Dstructure._fU364)
                    {
                        sub_5169( 1008 );
                        cellphone3Dstructure._fU364 = 0;
                    }
                    else
                    {
                        PLAY_SOUND_FRONTEND( -1, "FRONTEND_GAME_PHONE_DIAL_HANG_UP" );
                        sub_5169( 1010 );
                    }
                    break;
                }
            };;;
            break;
            case 1008:
            sub_5745();
            sub_16939( ref l_U147, 2 );
            if (NOT l_U253)
            {
                switch (sub_18147( cellphone3Dstructure._fU524 ))
                {
                    case 6:
                    sub_1007( "\n------------------------------------------" );
                    sub_1007( "\n callStatus = CALL_ANSWERED_YES" );
                    sub_1007( "\n------------------------------------------" );
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 4;
                    cellphone3Dstructure._fU364 = 0;
                    sub_28513( ref cellphone3Dstructure._fU260, ref cellphone3Dstructure._fU144, 1 );
                    l_U253 = 1;
                    l_U171 = 1;
                    break;
                    case 7:
                    sub_1007( "\n------------------------------------------" );
                    sub_1007( "\n callStatus = CALL_ANSWERED_NO" );
                    sub_1007( "\n------------------------------------------" );
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 5;
                    cellphone3Dstructure._fU364 = 0;
                    PRINTSTRING( "\n loading from block " );
                    PRINTSTRING( ref cellphone3Dstructure._fU144 );
                    sub_28513( ref cellphone3Dstructure._fU312, ref cellphone3Dstructure._fU144, 1 );
                    l_U253 = 1;
                    l_U171 = 0;
                    break;
                }
            }
            else if (g_U8394 == 5)
            {
                if (NOT IS_MISSION_COMPLETE_PLAYING())
                {
                    sub_5169( 1007 );
                }
            }
            else if (g_U8394 != 4)
            {
                sub_5169( 1010 );
            };;;
            break;
            case 1009:
            sub_5745();
            if (IS_SCRIPTED_CONVERSATION_ONGOING())
            {
                cellphone3Dstructure.multipleChoiceNumber = -1;
                sub_5169( 1010 );
            }
            sub_21398();
            if (sub_16939( ref l_U147, 4 ))
            {
                if (cellphone3Dstructure.multipleChoiceNumber == 0)
                {
                    bVar3 = false;
                    if (NOT l_U254)
                    {
                        switch (sub_18147( cellphone3Dstructure._fU524 ))
                        {
                            case 3:
                            if (l_U172 < 3)
                            {
                                l_U172++;
                            }
                            break;
                            case 2:
                            if (l_U172 > 1)
                            {
                                l_U172--;
                            }
                            break;
                            case 6:
                            bVar3 = true;
                            break;
                            case 7:
                            cellphone3Dstructure.multipleChoiceNumber = -1;
                            ABORT_SCRIPTED_CONVERSATION( 0 );
                            sub_5169( 1010 );
                            break;
                            case 9:
                            l_U172 = 1;
                            bVar3 = true;
                            break;
                            case 10:
                            l_U172 = 2;
                            bVar3 = true;
                            break;
                            case 11:
                            l_U172 = 3;
                            bVar3 = true;
                            break;
                        }
                        if (bVar3)
                        {
                            if (IS_MOBILE_PHONE_CALL_ONGOING())
                            {
                                ABORT_SCRIPTED_CONVERSATION( 0 );
                            }
                            ConcatString(ref cellphone3Dstructure._fU128, l_U172, 16);
                            sub_12861( l_U172, 1 );
                            cellphone3Dstructure.multipleChoiceNumber = l_U172;
                        }
                    }
                }
                else if (cellphone3Dstructure.multipleChoiceNumber == -1)
                {
                    if (NOT IS_MISSION_COMPLETE_PLAYING())
                    {
                        sub_5169( 1007 );
                    }
                }
            }
            sub_9155( l_U172 );
            sub_29439( l_U172 );
            break;
            case 1010:
            if (NOT sub_5286())
            {
                TASK_USE_MOBILE_PHONE( CurrentPlayerChar(), 0 );
            }
            cellphone3Dstructure._fU0 = 1001;
            case 1001:
            if (sub_16939( ref l_U147, 1 ))
            {
                cellphone3Dstructure.missionAnsweredPhone = 0;
                cellphone3Dstructure.missionAnsweredPhone = 0;
                cellphone3Dstructure._fU56 = 0;
                cellphone3Dstructure._fU0 = 1000;
                switch (g_U15946[cellphone3Dstructure._fU60]._fU132._fU24)
                {
                    case 4:
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 7;
                    sub_1007( "\n------------------------------------------" );
                    sub_1007( "\n callStatus = CALL_ENDED_YES" );
                    sub_1007( "\n------------------------------------------" );
                    break;
                    case 5:
                    g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 8;
                    sub_1007( "\n------------------------------------------" );
                    sub_1007( "\n callStatus = CALL_ENDED_NO" );
                    sub_1007( "\n------------------------------------------" );
                    break;
                    case 3:
                    if (cellphone3Dstructure._fU364)
                    {
                        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 8;
                        sub_1007( "\n------------------------------------------" );
                        sub_1007( "\n callStatus = CALL_ENDED_NO" );
                        sub_1007( "\n------------------------------------------" );
                    }
                    else
                    {
                        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 6;
                        sub_1007( "\n------------------------------------------" );
                        sub_1007( "\n callStatus = CALL_ENDED" );
                        sub_1007( "\n------------------------------------------" );
                    }
                    break;
                    case 2:
                    sub_1007( "\n------------------------------------------" );
                    sub_1007( "\n callStatus = CALL_HANG_UP" );
                    sub_1007( "\n------------------------------------------" );
                    break;
                    case 6:
                    sub_1007( "\n------------------------------------------" );
                    sub_1007( "\n callStatus = CALL_ENDED" );
                    sub_1007( "\n------------------------------------------" );
                    break;
                    case 1:
                    sub_1007( "\n------------------------------------------" );
                    sub_1007( "\n callStatus = CALL_NOT_ANSWERED" );
                    sub_1007( "\n------------------------------------------" );
                    break;
                }
                SCRIPT_IS_USING_MOBILE_PHONE( 0 );
                STOP_MOBILE_PHONE_RINGING();
                DESTROY_MOBILE_PHONE();
                UNREGISTER_SCRIPT_WITH_AUDIO();
                cellphone3Dstructure._fU532 = 0;
                cellphone3Dstructure.overrideCellphoneChecks = 0;
                cellphone3Dstructure._fU380 = 1;
                cellphone3Dstructure._fU384 = 0;
                g_U8394 = 0;
                cellphone3Dstructure._fU512 = nil;
                cellphone3Dstructure._fU508 = 0;
                cellphone3Dstructure.multipleChoiceNumber = -2;
                TERMINATE_THIS_SCRIPT();
            }
            break;
        }
    }
    return;
}

void sub_197(int iParam0, unknown uParam1)
{
    iParam0->_fU0 = uParam1;
    sub_221( uParam1, ref cellphone3Dstructure._fU8 );
    sub_851();
    return;
}

void sub_221(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_338( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_338( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
        case 2:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_338( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_338( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
        case 3:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_338( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_338( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
        case 4:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_338( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_338( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_338(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

// Set phone scale, position, and rotation.
void sub_851()
{
    SET_MOBILE_PHONE_SCALE( cellphone3Dstructure._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( cellphone3Dstructure._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( cellphone3Dstructure._fU8._fU12 );
    return;
}

// Debug line, disabled in retail builds
void sub_1007(unknown uParam0)
{
    return;
}

void sub_1291(int iParam0, int iParam1)
{
    sub_1304( iParam0, iParam1 );
    if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
    {
        cellphone3Dstructure._fU564 = 2;
    }
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        sub_1411( iParam1 + 0, 90, 110, 110, 255 );
        sub_1411( iParam1 + 4, 0, 0, 0, 205 );
        sub_1411( iParam1 + 8, 0, 0, 0, 140 );
        sub_1411( iParam1 + 12, 0, 0, 0, 140 );
        sub_1411( iParam1 + 16, 0, 0, 0, 255 );
        sub_1411( iParam1 + 20, 0, 0, 0, 255 );
        sub_1411( iParam1 + 24, 0, 0, 0, 255 );
        sub_1411( iParam1 + 28, 0, 0, 0, 255 );
        sub_1411( iParam1 + 40, 0, 0, 0, 255 );
        sub_1411( iParam1 + 44, 255, 255, 255, 255 );
        sub_1411( iParam1 + 48, 255, 255, 255, 255 );
        sub_1411( ref iParam0->_fU0[0]._fU8, 255, 255, 255, 230 );
        sub_1411( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 230 );
        sub_1411( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 230 );
        sub_1411( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 230 );
        sub_1411( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 230 );
        sub_1411( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 230 );
        break;
        default:
        sub_1411( iParam1 + 0, 90, 110, 110, 255 );
        sub_1411( iParam1 + 4, 20, 30, 30, 255 );
        sub_1411( iParam1 + 8, 40, 60, 60, 255 );
        sub_1411( iParam1 + 12, 30, 50, 50, 255 );
        sub_1411( iParam1 + 16, 40, 60, 60, 255 );
        sub_1411( iParam1 + 20, 40, 60, 60, 255 );
        sub_1411( iParam1 + 24, 40, 60, 60, 255 );
        sub_1411( iParam1 + 28, 40, 60, 60, 255 );
        sub_1411( iParam1 + 32, 80, 100, 100, 255 );
        sub_1411( iParam1 + 36, 40, 60, 60, 255 );
        sub_1411( iParam1 + 40, 0, 0, 0, 255 );
        sub_1411( iParam1 + 44, 255, 255, 255, 255 );
        sub_1411( iParam1 + 48, 255, 255, 255, 255 );
        sub_1411( ref iParam0->_fU0[0]._fU8, 0, 0, 0, 200 );
        sub_1411( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 200 );
        sub_1411( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 200 );
        sub_1411( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 200 );
        sub_1411( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 200 );
        sub_1411( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 200 );
        break;
    }
    return;
}

void sub_1304(int iParam0, unknown uParam1)
{
    sub_1313();
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
        {
            sub_1411( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 230 );
            sub_1411( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 230 );
        }
        else
        {
            sub_1411( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 230 );
            sub_1411( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 230 );
        }
        break;
        default:
        if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
        {
            sub_1411( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 200 );
            sub_1411( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 200 );
        }
        else
        {
            sub_1411( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 200 );
            sub_1411( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 200 );
        }
        break;
    }
    return;
}

void sub_1313()
{
    cellphone3Dstructure._fU560 = 17;
    cellphone3Dstructure._fU556 = 16;
    return;
}

void sub_1411(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam0, 0, 7, uParam1 );
    SET_BITS_IN_RANGE( uParam0, 8, 15, uParam2 );
    SET_BITS_IN_RANGE( uParam0, 16, 23, uParam3 );
    SET_BITS_IN_RANGE( uParam0, 24, 31, uParam4 );
    return;
}

void sub_2516(int iParam0)
{
    float fVar3;

    fVar3 = 1.85000000;
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (cellphone3Dstructure._fU500)
        {
            fVar3 = 1.55000000;
            sub_2590( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2590( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
            sub_2590( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2590( iParam0 + 108, 0.95000000, 0.89000000 );
        }
        else
        {
            sub_2590( ref iParam0->_fU0[3]._fU0, 1.68000000, 1.68000000 );
            sub_2590( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2590( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2590( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2590( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2590( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2590( iParam0 + 132, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
        default:
        if (cellphone3Dstructure._fU500)
        {
            fVar3 = 1.55000000;
            sub_2590( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2590( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2590( iParam0 + 108, 0.95000000, 0.89000000 );
            sub_2590( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        }
        else
        {
            sub_2590( ref iParam0->_fU0[3]._fU0, 1.75000000, 1.75000000 );
            sub_2590( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2590( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2590( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2590( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2590( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2590( iParam0 + 132, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2590( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
    }
    return;
}

void sub_2590(int iParam0, unknown uParam1, float uParam2)
{
    iParam0->_fU0 = uParam1;
    // This seems to be a float
    iParam0->_fU4 = uParam2;
    return;
}

void sub_3398()
{
    sub_1007( "\n == Mobile Phone Created" );
    // _fU44 = phoneRenderId
    GET_MOBILE_PHONE_RENDER_ID( ref cellphone3Dstructure.phoneRenderId );
    while (cellphone3Dstructure.phoneRenderId == -1)
    {
        WAIT( 0 );
        GET_MOBILE_PHONE_RENDER_ID( ref cellphone3Dstructure.phoneRenderId );
        sub_1007( "\n == Getting Render Target" );
    }
    sub_1007( "\n == Mobile Phone Loaded" );
    cellphone3Dstructure._fU8._fU24 = 324.00000000;
    return;
}

void sub_3587()
{
    int I;

    g_U523._fU124 = 255;
    for ( I = 0; I <= 4; I++ )
    {
        sub_3623( I, 0 );
    }
    return;
}

void sub_3623(int iParam0, boolean bParam1)
{
    int randomNumber1;
    int randomNumber2;
    float fVar6;
    float randomFloat;
    float fVar8;
    float fVar9;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref randomNumber1 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref randomNumber2 );
    switch (iParam0 / 2)
    {
        case 0:
        fVar6 = 0.10000000 + (randomNumber1 * 0.20000000);
        fVar8 = 0.20000000 + (randomNumber2 * 0.05000000);
        fVar9 = -0.01400000 + (randomNumber2 * 0.00050000);
        break;

        case 1:
        fVar6 = 0.20000000 + (randomNumber1 * 0.15000000);
        fVar8 = 0.50000000 + (randomNumber2 * 0.05000000);
        fVar9 = -0.01100000 + (randomNumber2 * 0.00050000);
        break;

        case 2:
        fVar6 = 0.40000000 + (randomNumber1 * 0.05000000);
        fVar8 = 0.90000000 + (randomNumber2 * 0.05000000);
        fVar9 = -0.00800000 + (randomNumber2 * 0.00050000);
        break;
    }
    if (bParam1)
    {
        randomFloat = 1.00000000 + (fVar8 * 0.50000000);
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.20000000, 0.81000000, ref randomFloat );
    }
    sub_3926( iParam0, fVar6, randomFloat, fVar8, fVar8, fVar9 );
    return;
}

void sub_3926(unknown uParam0, unknown uParam1, float uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_2590( ref g_U523._fU20[uParam0]._fU0, uParam1, uParam2 );
    sub_2590( ref g_U523._fU20[uParam0]._fU8, uParam3, uParam4 );
    g_U523._fU20[uParam0]._fU16 = uParam5;
    return;
}

int sub_4054()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4066() )))
    {
        sub_1007( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_1007( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (cellphone3Dstructure.overrideCellphoneChecks)
    {
        sub_1007( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((cellphone3Dstructure.hideCellphone) || (cellphone3Dstructure.disableCellphone))
    {
        sub_1007( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4066() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_1007( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( CurrentPlayerChar() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_1007( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_1007( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4066() )))
    {
        sub_1007( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_4066()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}



// void sub_4490()
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5169(unknown uParam0)
{
    l_U169 = 1;
    cellphone3Dstructure._fU0 = uParam0;
    return;
}

int sub_5286()
{
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_5745()
{
    if (cellphone3Dstructure._fU380)
    {
        SET_TEXT_RENDER_ID( cellphone3Dstructure.phoneRenderId );
    }
    if (l_U169)
    {
        sub_5794();
    }
    if (cellphone3Dstructure._fU40 == 2)
    {
        sub_7593( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U99._fU8 );
    }

    // Something to do with getting the current language
    if (sub_7744( ref currentLanguage ))
    {
        l_U112._fU116 = 1678728908;
        l_U112._fU128 = 1678728908;
    }
    switch (cellphone3Dstructure._fU0)
    {
        case 1004:
        if (cellphone3Dstructure._fU380)
        {
            sub_7910( 1, l_U99, 1, 0 );
            if (cellphone3Dstructure._fU40 == 2)
            {
                sub_7593( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U99._fU8 );
            }
            if (cellphone3Dstructure._fU500)
            {
                sub_6641( 0, 0, ref l_U112._fU0[0], ref l_U165, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            else
            {
                sub_6641( 0, 0, ref l_U112._fU0[0], ref l_U165, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            if (NOT cellphone3Dstructure._fU532)
            {
                sub_10214( ref l_U112, "CP_NAV_IGNORE", "CP_ANSWER", ref l_U99 );
            }
            else
            {
                sub_10214( ref l_U112, "BLANK", "BLANK", ref l_U99 );
            }
            sub_11236( ref l_U112._fU0[0], ref l_U99 );
        }
        break;
        case 1005:
        case 1006:
        switch (cellphone3Dstructure._fU508)
        {
            case 0:
            if (cellphone3Dstructure._fU60 == 56)
            {
                l_U175 = {cellphone3Dstructure._fU128};
            }
            else
            {
                string(ref l_U175, g_U15946[cellphone3Dstructure._fU60]._fU132._fU28 / 1000, 16);
                ConcatString(ref l_U175, "5550", 16);
                ConcatString(ref l_U175, g_U15946[cellphone3Dstructure._fU60]._fU132._fU28 mod 1000, 16);
            }
            l_U184 = GET_LENGTH_OF_LITERAL_STRING( ref l_U175 );
            l_U185 = 0;
            cellphone3Dstructure._fU508 = 1;
            break;
            case 1:
            StrCopy( ref l_U179, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref l_U175, l_U185 + 1 ), 16 );
            if (STRING_TO_INT( ref l_U179, ref l_U183 ))
            {
                ;
            }
            l_U183 = l_U183 mod 10;
            sub_12861( l_U183, 1 );
            SETTIMERA( 0 );
            l_U185++;
            if (l_U185 >= l_U184)
            {
                cellphone3Dstructure._fU508 = 3;
            }
            else
            {
                cellphone3Dstructure._fU508 = 2;
            }
            break;
            case 2:
            if (TIMERA() >= 60)
            {
                cellphone3Dstructure._fU508 = 1;
            }
            break;
            case 3:
            if (TIMERA() >= 800)
            {
                START_MOBILE_PHONE_CALLING();
                cellphone3Dstructure._fU508 = 4;
            }
            break;
        }
        if (cellphone3Dstructure._fU380)
        {
            sub_7910( 1, l_U99, 1, 0 );
            if (cellphone3Dstructure._fU40 == 2)
            {
                sub_7593( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U99._fU8 );
            }
            // CP_INFO_CALLING = Calling...
            sub_6641( 0, 0, ref l_U112._fU0[0], "CP_INFO_CALLING", 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            if (cellphone3Dstructure._fU60 == 56)
            {
                sub_6641( 0, 5, ref l_U112._fU0[0], ref cellphone3Dstructure._fU128, 0.90000000, 0.70000000, 0.10000000, 0.90000000, 1, 0, 0, 0, 0, 1 );
            }
            else if (cellphone3Dstructure._fU500)
            {
                sub_6641( 0, 0, ref l_U112._fU0[0], ref l_U165, 0.10000000, 0.64000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            else
            {
                sub_6641( 0, 0, ref l_U112._fU0[0], ref l_U165, 0.10000000, 0.50000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            if (cellphone3Dstructure._fU56)
            {
                sub_10214( ref l_U112, "BLANK", "BLANK", ref l_U99 );
            }
            else
            {
                // CP_NAV_HANG_UP = Hang Up
                sub_10214( ref l_U112, "CP_NAV_HANG_UP", "BLANK", ref l_U99 );
            }
            sub_11236( ref l_U112._fU0[0], ref l_U99 );
        }
        break;
        case 1007:
        if (cellphone3Dstructure._fU380)
        {
            sub_7910( 1, l_U99, 1, 0 );
            if (cellphone3Dstructure._fU40 == 2)
            {
                sub_7593( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U99._fU8 );
            }
            if (cellphone3Dstructure._fU40 != 2)
            {
                if (cellphone3Dstructure._fU60 == 56)
                {
                    sub_6641( 0, 5, ref l_U112._fU0[0], ref cellphone3Dstructure._fU128, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 1, 0, 0, 0, 0, 1 );
                }
                else
                {
                    sub_6641( 0, 0, ref l_U112._fU0[0], ref l_U165, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
                }
                DrawTimeToPhone( ref l_U112._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );
            }
            else if (cellphone3Dstructure._fU60 == 56)
            {
                sub_6641( 0, 5, ref l_U112._fU0[0], ref cellphone3Dstructure._fU128, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 1, 0, 0, 0, 0, 1 );
            }
            else
            {
                sub_6641( 0, 0, ref l_U112._fU0[0], ref l_U165, 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
            }
            DrawTimeToPhone( ref l_U112._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );
            // CP_NAV_HANG_UP = Hang Up
            sub_10214( ref l_U112, "CP_NAV_HANG_UP", "BLANK", ref l_U99 );
            sub_11236( ref l_U112._fU0[0], ref l_U99 );
        }
        break;
        case 1008:
        if (cellphone3Dstructure._fU380)
        {
            sub_7910( 1, l_U99, 1, 0 );
            sub_14963( ref l_U112._fU0[0], ref l_U99, ref l_U241, ref l_U186, 0, ref l_U199, ref l_U200, l_U202 );
            sub_16057( ref l_U203, ref l_U99, l_U203._fU60 );
            // CP_NAV_NO = No
            // CP_NAV_YES = Yes
            sub_10214( ref l_U112, "CP_NAV_NO", "CP_NAV_YES", ref l_U99 );
            sub_11236( ref l_U112._fU0[0], ref l_U99 );
        }
        break;
        case 1009:
        if (cellphone3Dstructure._fU380)
        {
            sub_7910( 1, l_U99, 1, 0 );
            if (cellphone3Dstructure._fU40 == 2)
            {
                sub_7593( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U99._fU8 );
            }
            if (cellphone3Dstructure._fU40 == 1)
            {
                sub_6641( 0, 0, ref l_U112._fU0[0], ref cellphone3Dstructure._fU432[l_U172 - 1], 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
                DrawTimeToPhone( ref l_U112._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );
            }
            else
            {
                sub_6641( 0, 0, ref l_U112._fU0[0], ref cellphone3Dstructure._fU432[l_U172 - 1], 0.10000000, 0.24000000, 0.20000000, 0.80000000, 0, 0, 0, 0, 0, 1 );
                DrawTimeToPhone( ref l_U112._fU0[0], 0.70000000, 0.70000000, TIMERA() / 60000, (TIMERA() / 1000) mod 60 );
            }
            sub_10214( ref l_U112, "CP_NAV_HANG_UP", "CP_NAV_SELECT", ref l_U99 );
            sub_11236( ref l_U112._fU0[0], ref l_U99 );
        }
        break;
    }
    return;
}

void sub_5794()
{
    cellphone3Dstructure._fU528 = 0;
    switch (cellphone3Dstructure._fU0)
    {
        case 1004:
        if (g_U15946[cellphone3Dstructure._fU60]._fU132._fU0)
        {
            StrCopy( ref l_U165, "CONT_", 16 );
            ConcatString(ref l_U165, ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, 16);
        }
        else
        {
            // CONT_UN = Unknown Caller
            StrCopy( ref l_U165, "CONT_UN", 16 );
        }
        switch (cellphone3Dstructure._fU112)
        {
            case 0:
            case 1:
            case 4:
            START_CUSTOM_MOBILE_PHONE_RINGING( cellphone3Dstructure._fU108 );
            break;
        }
        break;
        case 1005:
        cellphone3Dstructure._fU508 = 0;
        if (cellphone3Dstructure._fU60 != 56)
        {
            if (g_U15946[cellphone3Dstructure._fU60]._fU132._fU0)
            {
                StrCopy( ref l_U165, "CONT_", 16 );
                ConcatString(ref l_U165, ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, 16);
            }
            else
            {
                // CONT_UN = Unknown Caller
                StrCopy( ref l_U165, "CONT_UN", 16 );
            }
        }
        else if (cellphone3Dstructure._fU124)
        {
            l_U147._fU0 = 3;
        }
        break;
        case 1007:
        if (NOT l_U255)
        {
            if (g_U8394 != 1)
            {
                sub_6238( "\n CELLPHONE PED VOICE IS ", ref cellphone3Dstructure._fU176 );
            }
            START_MOBILE_PHONE_CALL( CurrentPlayerChar(), ref cellphone3Dstructure._fU160, cellphone3Dstructure._fU512, ref cellphone3Dstructure._fU176, 1, 1 );
        }
        else
        {
            PLAY_SOUND_FRONTEND( l_U256, "PHONE_ENGAGED_TONES" );
        }
        SETTIMERB( 0 );
        break;
        case 1008:
        l_U186[0] = {cellphone3Dstructure._fU208};
        StrCopy( ref l_U186[1], "", 16 );
        StrCopy( ref l_U186[2], "", 16 );
        sub_6451( ref l_U112._fU0[0], ref l_U186, 0, ref l_U202, ref l_U201, ref l_U199, ref l_U200, ref l_U203.phoneRenderId, ref l_U203._fU60, ref l_U203._fU56, ref l_U203._fU52 );
        break;
        case 1009:
        cellphone3Dstructure.multipleChoiceNumber = 0;
        break;
    }
    l_U253 = 0;
    l_U169 = 0;
    return;
}

void sub_6238(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6451(unknown uParam0, unknown uParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    int iVar17;

    if (cellphone3Dstructure._fU500)
    {
        uVar13._fU0 = 0.08000000;
        uVar13._fU4 = 0.10000000;
        uVar15._fU0 = 0.08000000;
        uVar15._fU4 = 0.92000000;
        iVar17 = 6;
    }
    else if (cellphone3Dstructure._fU40 == 2)
    {
        uVar13._fU0 = 0.10000000;
        uVar15._fU0 = 0.10000000;
    }
    else
    {
        uVar13._fU0 = 0.05000000;
        uVar15._fU0 = 0.05000000;
    }
    uVar13._fU4 = 0.10000000;
    uVar15._fU4 = 0.90000000;
    iVar17 = 5;;
    sub_6641( 0, 7, uParam0, "", uVar13._fU0, uVar13._fU4, uVar15._fU0, uVar15._fU4, 0, 0, 0, 0, 0, 1 );
    (uParam4^) = GET_NUMBER_LINES_WITH_SUBSTRINGS( uVar13._fU0, uVar13._fU4, ref (uParam1^)[0], ref (uParam1^)[1], ref (uParam1^)[2] );
    (uParam5^) = 0;
    (uParam7^) = 0;
    (uParam8^) = 0;

    if (bParam2)
    {
        cellphone3Dstructure._fU528 = 1;
        (uParam3^) = (uParam4^) + iVar17;
    }
    else
    {
        (uParam3^) = (uParam4^);
    }

    if ((uParam3^) <= iVar17)
    {
        (uParam6^) = (uParam4^) - 1;
        (uParam10^) = 0;
    }
    else
    {
        (uParam6^) = iVar17 - 1;
        (uParam10^) = 1;
        (uParam9^) = 0.72000000 / ((uParam3^) - (iVar17 - 1));
    }
    return;
}

// Seems to be setting up the text for the phone.
void sub_6641(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, float fParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, int iParam13)
{
    float fVar16;
    float fVar17;

    fVar16 = ref iParam2->_fU0->_fU0;
    fVar17 = ref iParam2->_fU0->_fU4;
    if ((iParam13 == 1) AND (IS_JAPANESE_VERSION()))
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    if (IS_JAPANESE_VERSION())
    {
        fVar16 *= 0.70000000;
    }
    switch (uParam0)
    {
        case 0:
        if (sub_6760( uParam3 ))
        {
            fVar16 *= 0.80000000;
            fVar17 *= 0.80000000;
        }
        SET_TEXT_SCALE( fVar16, fVar17 * 0.65000000 );
        fParam5 *= 0.65000000;
        break;
        case 1:
        SET_TEXT_SCALE( ref iParam2->_fU0->_fU0, (ref iParam2->_fU0->_fU4) * 0.35000000 );
        fParam5 *= 0.35000000;
        break;
    }
    switch (uParam8)
    {
        case 1:
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        break;
        case 2:
        SET_TEXT_CENTRE( 1 );
        break;
    }
    SET_TEXT_WRAP( uParam6, uParam7 );
    SET_TEXT_COLOUR( sub_6996( iParam2 + 8, 0 ), sub_6996( iParam2 + 8, 1 ), sub_6996( iParam2 + 8, 2 ), sub_6996( iParam2 + 8, 3 ) );
    SET_TEXT_DROPSHADOW( uParam12, 0, 0, 0, 255 );
    switch (uParam1)
    {
        case 2:
        case 1: SET_TEXT_LINE_DISPLAY( 0, 0 );
        case 0:
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 4:
        SET_TEXT_LINE_DISPLAY( uParam9, uParam10 );
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 5:
        SET_TEXT_LINE_DISPLAY( 0, 0 );
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_STRING( uParam4, fParam5, "STRING", uParam3 );
        SET_TEXT_USE_UNDERSCORE( 0 );
        break;
        case 6:
        DISPLAY_TEXT_WITH_NUMBER( uParam4, fParam5, uParam3, uParam11 );
        break;
    }
    return;
}

int sub_6760(unknown uParam0)
{
    if ((GET_LENGTH_OF_LITERAL_STRING( uParam0 )) >= 6)
    {
        return COMPARE_STRING( GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( uParam0, 6 ), "TM_82_" );
    }
    return 0;
}

void sub_6996(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( (uParam0^), 0, 7 );
        case 1: return GET_BITS_IN_RANGE( (uParam0^), 8, 15 );
        case 2: return GET_BITS_IN_RANGE( (uParam0^), 16, 23 );
    }
    return GET_BITS_IN_RANGE( (uParam0^), 24, 31 );
}

// I think this is drawing a part of the phone
void sub_7593(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, sub_6996( ref uParam5, 0 ), sub_6996( ref uParam5, 1 ), sub_6996( ref uParam5, 2 ), sub_6996( ref uParam5, 3 ) );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, sub_6996( ref uParam5, 0 ), sub_6996( ref uParam5, 1 ), sub_6996( ref uParam5, 2 ), sub_6996( ref uParam5, 3 ) );
    }
    return;
}

// Something to do with getting the current language
int sub_7744(char languageToCheck)
{
    if ((languageToCheck^) != GET_CURRENT_LANGUAGE())
    {
        (languageToCheck^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_7910(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, boolean bParam14, boolean bParam15)
{
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (bParam14)
        {
            sub_7982( 0, g_U523._fU0[0], 0.50000000, 0.50000000, 1.00000000, 1.00000000 );
            sub_8140( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, g_U828 );
        }
        sub_8251( uParam0 );
        if (bParam15)
        {
            if (NOT cellphone3Dstructure._fU540)
            {
                sub_7982( 0, g_U523._fU0[1], 0.50000000, 0.50000000, 0.85000000, 0.41000000 );
            }
        }
        break;
        default:
        sub_7593( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, uParam1._fU0 );
        if ((NOT cellphone3Dstructure._fU540) AND (cellphone3Dstructure._fU0 == 1002))
        {
            sub_8753( 0, g_U481._fU0[19], 0.50000000, 0.60000000, 0.80000000, 0.40000000, uParam1._fU12 );
        }
        break;
    }
    switch (cellphone3Dstructure._fU0)
    {
        case 1003:
        case 1009: break;
        default:
        if (NOT cellphone3Dstructure._fU528)
        {
            sub_9155( 0 );
        }
        break;
    }
    return;
}

void sub_7982(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, 255, 255, 255, 255 );
    }
    return;
}

void sub_8140(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, uParam5, uParam6, uParam7, uParam8 );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, uParam5, uParam6, uParam7, uParam8 );
    }
    return;
}

void sub_8251(int iParam0)
{
    int I;
    unknown uVar4;

    switch (iParam0)
    {
        case 2:
        if (g_U523._fU124 > 0)
        {
            g_U523._fU124 -= 25;
            sub_8341( ref g_U523._fU124, 0, 255 );
            break;
        }
        break;
        case 1: sub_8439();
        case 0:
        if (iParam0 != 2)
        {
            if (g_U523._fU124 < 255)
            {
                g_U523._fU124 += 25;
                sub_8341( ref g_U523._fU124, 0, 255 );
            }
        }
        sub_1411( ref uVar4, 255, 255, 255, g_U523._fU124 );
        for ( I = 0; I <= 4; I++ )
        {
            sub_8753( 0, g_U523._fU0[2], g_U523._fU20[I]._fU0._fU0, g_U523._fU20[I]._fU0._fU4, g_U523._fU20[I]._fU8._fU0, g_U523._fU20[I]._fU8._fU4, uVar4 );
        }
        break;
    }
    return;
}

int sub_8341(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam2 < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) > iParam2)
    {
        (uParam0^) = iParam2;
        return 1;
    };;;
    return 0;
}

void sub_8439()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        g_U523._fU20[I]._fU0._fU4 += g_U523._fU20[I]._fU16;
        if ((g_U523._fU20[I]._fU0._fU4 + (g_U523._fU20[I]._fU8._fU4 * 0.50000000)) < 0.00000000)
        {
            sub_3623( I, 1 );
        }
    }
    return;
}

void sub_8753(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, sub_6996( ref uParam6, 0 ), sub_6996( ref uParam6, 1 ), sub_6996( ref uParam6, 2 ), sub_6996( ref uParam6, 3 ) );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, sub_6996( ref uParam6, 0 ), sub_6996( ref uParam6, 1 ), sub_6996( ref uParam6, 2 ), sub_6996( ref uParam6, 3 ) );
    }
    return;
}

void sub_9155(int iParam0)
{
    int I;

    sub_8140( 1, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if ((iParam0 > 0) AND (NOT IS_USING_CONTROLLER()))
    {
        iParam0 = 0;
    }
    for ( I = 1; I <= 12; I++ )
    {
        if (iParam0 != I)
        {
            if (cellphone3Dstructure._fU496)
            {
                sub_9325( 1, g_U481._fU0[I], 0.25000000 + (((I - 1) mod 3) * 0.25000000), 0.25000000 + (((I - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 200, 200, 200, 255 );
            }
            else
            {
                sub_7982( 1, g_U481._fU0[I], 0.25000000 + (((I - 1) mod 3) * 0.25000000), 0.25000000 + (((I - 1) / 3) * 0.20000000), 0.24500000, 0.18500000 );
            }
        }
    }
    if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
    {
        if (iParam0 != -1)
        {
            sub_9325( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 108, 130, 187, 255 );
        }
        else
        {
            sub_9325( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 100, 169, 249, 255 );
        }
        if (iParam0 != -2)
        {
            sub_9325( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 204, 43, 71, 255 );
        }
        else
        {
            sub_9325( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 250, 105, 141, 255 );
        }
    }
    else if (iParam0 != -1)
    {
        sub_9325( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 0, 100, 0, 255 );
    }
    else
    {
        sub_9325( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 0, 200, 0, 255 );
    }
    if (iParam0 != -2)
    {
        sub_9325( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 100, 0, 0, 255 );
    }
    else
    {
        sub_9325( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 200, 0, 0, 255 );
    }
    return;
}

void sub_9325(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, uParam6, uParam7, uParam8, uParam9 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, uParam6, uParam7, uParam8, uParam9 );
    }
    return;
}

void sub_10214(int iParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;

    iVar6 = GET_HASH_KEY( uParam2 );
    iVar7 = GET_HASH_KEY( uParam1 );
    if ((iVar7 != iParam0->_fU128) || (iVar6 != iParam0->_fU116))
    {
        iParam0->_fU116 = iVar6;
        iParam0->_fU128 = iVar7;
        sub_10295( iParam0, uParam2, uParam1 );
    }
    uVar8 = sub_10484( uParam1, 0, iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 );
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (cellphone3Dstructure._fU528)
        {
            sub_8140( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, 0, 0, 0, 255 );
        }
        else
        {
            sub_7593( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        }
        break;
        default:
        sub_7593( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        sub_7593( 0, 0.50000000, 0.88000000, 1.00000000, 0.01000000, iParam3->_fU16 );
        sub_7593( 0, 0.50000000, 0.94000000, 0.01000000, 0.12000000, iParam3->_fU20 );
        break;
    }
    if (iParam0->_fU116 != 1678728908)
    {
        sub_6641( 0, 0, ref iParam0->_fU0[1], uParam2, ref iParam0->disableCellphone->_fU0, ref iParam0->disableCellphone->_fU4, 0.00000000, 1.00000000, 0, 0, 0, 0, cellphone3Dstructure._fU564, 1 );
    }
    if (iParam0->_fU128 != 1678728908)
    {
        sub_6641( 0, 0, ref iParam0->_fU0[2], uParam1, (ref iParam0->_fU108->_fU0) - uVar8, ref iParam0->_fU108->_fU4, 0.00000000, ref iParam0->_fU108->_fU0, 0, 0, 0, 0, cellphone3Dstructure._fU564, 1 );
    }
    return;
}

void sub_10295(int iParam0, string sParam1, string sParam2)
{
    boolean bVar5;
    int[2] iVar6;

    bVar5 = true;
    array(ref iVar6, 2);
    sub_10326( ref iParam0->_fU0[1]._fU0, iParam0 + 120 );
    sub_10326( ref iParam0->_fU0[2]._fU0, iParam0 + 132 );
    if (iParam0->_fU116 == 1678728908)
    {
        sParam1 = "A";
        iVar6[0] = 1;
    }
    if (iParam0->_fU128 == 1678728908)
    {
        sParam2 = "A";
        iVar6[1] = 1;
    }
    bVar5 = true;
    while (bVar5)
    {
        if (((sub_10484( sParam1, iVar6[0], iParam0->_fU0[1]._fU0._fU0, iParam0->_fU0[1]._fU0._fU4 )) + (sub_10484( sParam2, iVar6[1], iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 ))) > 0.90000000)
        {
            iParam0->_fU0[1]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[1]._fU0._fU4 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU4 *= 0.80000000;
        }
        else
        {
            bVar5 = false;
        }
    }
    return;
}

void sub_10326(int iParam0, int iParam1)
{
    iParam0->_fU0 = iParam1->_fU0;
    iParam0->_fU4 = iParam1->_fU4;
    return;
}

void sub_10484(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    SET_TEXT_SCALE( uParam2, uParam3 * 0.65000000 );
    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    return GET_STRING_WIDTH( uParam0 );
}

void sub_11236(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    char[16] cVar7;

    iVar5 = GET_BITS_IN_RANGE( cellphone3Dstructure._fU96, 0, 15 );
    iVar6 = GET_BITS_IN_RANGE( cellphone3Dstructure._fU96, 16, 31 );
    iVar6++;
    if (iVar6 >= 120)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 301, ref iVar4 );
        if (iVar4 < 70)
        {
            if (iVar5 > 1)
            {
                iVar5--;
                SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 0, 15, iVar5 );
            }
        }
        else if (iVar4 > 200)
        {
            if (iVar5 < 4)
            {
                iVar5++;
                SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 0, 15, iVar5 );
            }
        }
        SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 16, 31, 0 );
    }
    else
    {
        SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 16, 31, iVar6 );
    }
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        sub_7593( 0, 0.50000000, 0.06000000, 1.00000000, 0.12000000, iParam1->_fU12 );
        if (NOT cellphone3Dstructure._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_8140( 0, 0.20000000, 0.06000000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_8140( 0, 0.16000000, 0.07000000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_8140( 0, 0.12000000, 0.08000000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_8140( 0, 0.08000000, 0.09000000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (cellphone3Dstructure._fU500)
        {
            sub_6641( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            DrawTimeToPhone( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_6641( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            DrawTimeToPhone( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
        default:
        sub_7593( 0, 0.50000000, 0.06500000, 1.00000000, 0.13000000, iParam1->_fU12 );
        if (NOT cellphone3Dstructure._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_8140( 0, 0.20000000, 0.06500000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_8140( 0, 0.16000000, 0.07500000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_8140( 0, 0.12000000, 0.08500000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_8140( 0, 0.08000000, 0.09500000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }

        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (cellphone3Dstructure._fU500)
        {
            sub_6641( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            DrawTimeToPhone( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_6641( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            DrawTimeToPhone( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }

        break;
    }
    return;
}

// I think this is drawing the time to the phone
// sub_11825
void DrawTimeToPhone(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    if (iParam3 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_6641( 0, 6, uParam0, ref cVar7, uParam1 - 0.02000000, uParam2, 0.00000000, uParam1 - 0.02000000, 1, 0, 0, iParam3, 0, 1 );
    sub_6641( 0, 0, uParam0, "CP_TIME_SEP", uParam1, uParam2 - 0.01000000, 0.00000000, 1.00000000, 2, 0, 0, 0, 0, 1 );
    if (iParam4 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_6641( 0, 6, uParam0, ref cVar7, uParam1 + 0.02000000, uParam2, 0.00000000, 1.00000000, 0, 0, 0, iParam4, 0, 1 );
    return;
}

void sub_12861(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (((cellphone3Dstructure._fU0 == 1005) || (NOT cellphone3Dstructure.overrideCellphoneChecks)) AND (uParam1))
    {
        uVar4 = GET_SOUND_ID();
        if (cellphone3Dstructure._fU0 == 1005)
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY_SPEED" );
        }
        else
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY" );
        }
        switch (uParam0)
        {
            case 0:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 10.00000000 );
            sub_1007( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_1007( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_1007( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_1007( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_1007( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_1007( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_1007( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_1007( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_1007( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_1007( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_1007( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_1007( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_14963(unknown uParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    int iVar15;
    int iVar16;

    iVar15 = 5;
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (((uParam6^) != (iParam7 - 1)) AND (uParam4))
        {
            sub_7593( 0, 0.50000000, 0.50500000, 0.90000000, 0.75000000, iParam1->_fU8 );
        }
        else
        {
            sub_7593( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam1->_fU8 );
        }
        break;
        default:
        sub_7593( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, iParam1->_fU0 );
        break;
    }
    if (cellphone3Dstructure._fU500)
    {
        uVar10._fU0 = 0.08000000;
        uVar10._fU4 = 0.10000000;
        uVar12._fU0 = 0.08000000;
        uVar12._fU4 = 0.92000000;
        iVar15 = 6;
    }
    else if (cellphone3Dstructure._fU40 == 2)
    {
        uVar10._fU0 = 0.10000000;
        uVar12._fU0 = 0.10000000;
    }
    else
    {
        uVar10._fU0 = 0.05000000;
        uVar12._fU0 = 0.05000000;
    }
    uVar10._fU4 = 0.10000000;
    uVar12._fU4 = 0.90000000;
    iVar15 = 5;;
    fVar14 = 0.67000000 / (TO_FLOAT( iVar15 ));
    iVar16 = (uParam6^) - iParam7;
    if ((iVar16 < iVar15) AND (uParam4))
    {
        if (sub_15317( iParam2 ))
        {
            sub_7982( 0, iParam2->_fU36, 0.50000000, 0.49000000 - ((iVar16 + 1) * fVar14), 0.85000000, 0.67000000 );
        }
        else
        {
            sub_15598( uParam0, 0.49000000 - ((iVar16 + 1) * fVar14), iVar16 );
        }
        sub_6641( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    else
    {
        sub_6641( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    DISPLAY_TEXT_WITH_TWO_STRINGS( uVar10._fU0, uVar10._fU4, ref (uParam3^)[0], ref (uParam3^)[1], ref (uParam3^)[2] );
    if (cellphone3Dstructure._fU528)
    {
        sub_9155( 0 );
    }
    return;
}

int sub_15317(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU40)
    {
        return 1;
    }
    if (iParam0->phoneRenderId)
    {
        if (HAS_STREAMED_TXD_LOADED( iParam0 + 0 ))
        {
            sub_15378( ref uVar3, iParam0->_fU32 );
            iParam0->_fU36 = GET_TEXTURE_FROM_STREAMED_TXD( iParam0 + 0, ref uVar3 );
            iParam0->_fU40 = 1;
            return 1;
        }
    }
    else
    {
        SCRIPT_ASSERT( "CELLPHONE - photo texture now loaded for some reason" );
    }
    return 0;
}

void sub_15378(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "photo_", 16 );
    ConcatString((uParam0^), iParam1 mod 5, 16);
    return;
}

void sub_15598(unknown uParam0, unknown uParam1, int iParam2)
{
    sub_8140( 0, 0.50000000, uParam1 - 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_8140( 0, 0.50000000, uParam1 + 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_8140( 0, 0.07500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    sub_8140( 0, 0.92500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    if (iParam2 >= -6)
    {
        sub_6641( 0, 0, uParam0, "PHOTO_LOADING", 0.09000000, uParam1 - 0.32000000, 0.10000000, 0.90000000, 0, 0, 0, 0, 0, 1 );
    }
    else
    {
        sub_15848( "\n photo sections", iParam2 );
    }
    return;
}

void sub_15848(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16057(int iParam0, int iParam1, int iParam2)
{
    int iVar5;

    if (iParam2 != -1)
    {
        iVar5 = iParam2;
    }
    else
    {
        iVar5 = iParam0->_fU16[iParam0->phoneRenderId];
    }
    if (iParam0->_fU52)
    {
        if (cellphone3Dstructure._fU40 == 1)
        {
            sub_7593( 0, 0.95000000, 0.50500000, 0.01000000, 0.75000000, iParam1->_fU28 );
            sub_7593( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000, iParam0->_fU56, iParam1->_fU36 );
            sub_7593( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000 * 0.70000000, iParam0->_fU56 * 0.70000000, iParam1->_fU32 );
        }
        else
        {
            sub_7593( 0, 0.97000000, 0.49000000, 0.00700000, 0.72000000, iParam1->_fU28 );
            sub_7593( 0, 0.98500000, 0.13000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_7593( 0, 0.98500000, 0.85000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_7593( 0, 0.98500000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.03000000, iParam0->_fU56, iParam1->_fU28 );
        }
    }
    return;
}

void sub_16939(int iParam0, int iParam1)
{
    boolean Result;
    int iVar5;

    if (cellphone3Dstructure._fU380)
    {
        Result = false;
        iVar5 = 0;
        if (cellphone3Dstructure._fU0 == 1004)
        {
            if ((cellphone3Dstructure._fU112 == 4) || (cellphone3Dstructure._fU112 == 3))
            {
                iVar5 = 1;
                if (cellphone3Dstructure._fU116)
                {
                    SHAKE_PAD( 0, 100, 256 );
                    cellphone3Dstructure._fU8._fU0._fU0 += 0.25000000;
                    if (cellphone3Dstructure._fU8._fU0._fU0 >= (cellphone3Dstructure._fU8._fU28 + 0.50000000))
                    {
                        cellphone3Dstructure._fU116 = 0;
                    }
                }
                else
                {
                    SHAKE_PAD( 0, 100, 128 );
                    cellphone3Dstructure._fU8._fU0._fU0 -= 0.25000000;
                    if (cellphone3Dstructure._fU8._fU0._fU0 <= (cellphone3Dstructure._fU8._fU28 - 0.50000000))
                    {
                        cellphone3Dstructure._fU116 = 1;
                    }
                }
            }
        }
        if (iParam0->_fU0 == iParam1)
        {
            sub_17219( iParam0, iVar5 );
            if (iParam1 == 1)
            {
                SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
            }
            Result = true;
        }
        else if (iParam1 == 1)
        {
            SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 1 );
        }
        if ((iParam1 < 5) AND (iParam0->_fU0 < 5))
        {
            sub_17663( iParam0, iParam0->_fU0, iParam1 );
            iParam0->_fU0 = (iParam0->_fU0 * 10) + iParam1;
        }
        else
        {
            sub_17219( iParam0, iVar5 );
        }
        if ((iVar5) || (NOT Result))
        {
            sub_851();
        }
    }
    else
    {
        Result = true;
    }
    return Result;
}

void sub_17219(int iParam0, boolean bParam1)
{
    unknown uVar4;

    GET_FRAME_TIME( ref uVar4 );
    if (iParam0->_fU0 > 5)
    {
        sub_17292( ref cellphone3Dstructure._fU8._fU0, (ref ref iParam0->_fU4->_fU0->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU8) * uVar4 );
        sub_17292( ref cellphone3Dstructure._fU8._fU12, (ref ref iParam0->_fU4->_fU12->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU8) * uVar4 );
        if (sub_17399( iParam0 ))
        {
            iParam0->_fU0 = iParam0->_fU0 mod 10;
            if (NOT bParam1)
            {
                sub_197( iParam0, iParam0->_fU0 );
            }
        }
    }
    return;
}

void sub_17292(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU0 -= uParam1;
    iParam0->_fU4 -= uParam2;
    iParam0->_fU8 -= uParam3;
    return;
}

int sub_17399(int iParam0)
{
    if ((ref ref iParam0->_fU4->_fU0->_fU4) >= 0.00000000)
    {
        if (cellphone3Dstructure._fU8._fU0._fU4 <= (ref ref iParam0->_fU36->_fU0->_fU4))
        {
            cellphone3Dstructure._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
            return 1;
        }
    }
    else if (cellphone3Dstructure._fU8._fU0._fU4 >= (ref ref iParam0->_fU36->_fU0->_fU4))
    {
        cellphone3Dstructure._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
        return 1;
    }
    return 0;
}

void sub_17663(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    sub_221( uParam1, ref uVar5 );
    sub_221( uParam2, iParam0 + 36 );
    iParam0->_fU68 = 0;
    ref iParam0->_fU4->_fU0 = {(uVar5._fU0._fU0 - (ref ref iParam0->_fU36->_fU0->_fU0)) / 0.18000000, (uVar5._fU0._fU4 - (ref ref iParam0->_fU36->_fU0->_fU4)) / 0.18000000, (uVar5._fU0._fU8 - (ref ref iParam0->_fU36->_fU0->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU12 = {(uVar5._fU12._fU0 - (ref ref iParam0->_fU36->_fU12->_fU0)) / 0.18000000, (uVar5._fU12._fU4 - (ref ref iParam0->_fU36->_fU12->_fU4)) / 0.18000000, (uVar5._fU12._fU8 - (ref ref iParam0->_fU36->_fU12->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU24 = (uVar5._fU24 - (ref iParam0->_fU36->_fU24)) / 0.18000000;
    return;
}

void sub_18147(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int Result;
    unknown uVar6;
    int iVar7;
    int iVar8;

    iVar4 = uParam0;
    iVar7 = 19;
    iVar8 = 0;
    GET_MOUSE_WHEEL( ref iVar8 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        return 19;
    }
    switch (g_U565)
    {
        case 1:
        if (((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 22 )))) AND ((iVar8 <= 0) AND ((NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 ))))))
        {
            Result = sub_18313( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((cellphone3Dstructure._fU484) AND (iVar3 >= g_U568))
            {
                g_U565 = 5;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 5:
        if ((iVar8 <= 0) AND ((NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))))
        {
            Result = sub_18313( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= cellphone3Dstructure._fU488)
            {
                cellphone3Dstructure._fU488 = iVar3 + cellphone3Dstructure._fU492;
                return 1;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 0:
        if ((iVar8 >= 0) AND ((NOT (IS_CONTROL_PRESSED( 2, 21 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 ))))))
        {
            Result = sub_18313( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((cellphone3Dstructure._fU484) AND (iVar3 >= g_U568))
            {
                g_U565 = 4;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 4:
        if ((iVar8 >= 0) AND ((NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))))
        {
            Result = sub_18313( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= cellphone3Dstructure._fU488)
            {
                cellphone3Dstructure._fU488 = iVar3 + cellphone3Dstructure._fU492;
                return 0;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 2:
        if ((NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))
        {
            Result = sub_18313( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 ))))
        {
            Result = sub_18313( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT IS_USING_CONTROLLER()) AND (NOT (IS_CONTROL_PRESSED( 2, 22 ))))
        {
            Result = sub_18313( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_18313( iVar4 );
        break;
    }
    if (Result != 19)
    {
        iVar4 = 0;
    }
    switch (g_U566)
    {
        case 6:
        if ((NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))) AND (((NOT (IS_CONTROL_PRESSED( 2, 181 ))) || (IS_USING_CONTROLLER())) AND ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) || (NOT IS_USING_CONTROLLER()))))
        {
            uVar6 = sub_19925( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))) AND (((NOT (IS_CONTROL_PRESSED( 2, 182 ))) || (IS_USING_CONTROLLER())) AND ((NOT (IS_CONTROL_PRESSED( 2, 78 ))) || (NOT IS_USING_CONTROLLER()))))
        {
            uVar6 = sub_19925( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_19925( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U567)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_20387( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_20387( iVar4 );
            break;
        }
    }
    if (Result != 19)
    {
        return Result;
    }
    if (iVar7 != 19)
    {
        return iVar7;
    }
    return uVar6;
}

void sub_18313(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    GET_MOUSE_WHEEL( ref iVar11 );
    if (IS_CONTROL_PRESSED( 2, 21 ))
    {
        iVar9 = 1;
    }
    if (IS_CONTROL_PRESSED( 2, 22 ))
    {
        iVar10 = 1;
    }
    if ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 )) || (IS_BUTTON_PRESSED( 0, 11 )))
    {
        bVar3 = true;
    }
    if ((IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )) || (IS_BUTTON_PRESSED( 0, 9 )))
    {
        bVar4 = true;
    }
    if (IS_BUTTON_PRESSED( 0, 8 ))
    {
        bVar5 = true;
    }
    if ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 )) || (IS_BUTTON_PRESSED( 0, 10 )))
    {
        bVar6 = true;
    }
    if ((cellphone3Dstructure._fU0 != 1003) AND ((cellphone3Dstructure._fU0 != 1002) AND (iVar11 > 0)))
    {
        iVar7 = 1;
    }
    if (((cellphone3Dstructure._fU0 != 1003) AND ((cellphone3Dstructure._fU0 != 1002) AND ((cellphone3Dstructure._fU0 != 1000) AND (iVar11 < 0)))) || ((cellphone3Dstructure._fU0 != 1002) AND ((cellphone3Dstructure._fU0 != 1000) AND (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))))
    {
        iVar8 = 1;
    }
    if (((cellphone3Dstructure._fU0 == 1002) || (cellphone3Dstructure._fU0 == 1000)) AND (iVar9))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 0;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_12861( 2, uParam0 );
            break;
        }
    }
    else if ((NOT IS_USING_CONTROLLER()) AND (iVar10))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 18;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005: break;
            default:
            sub_12861( 8, uParam0 );
            break;
        }
    }
    else if ((cellphone3Dstructure._fU0 == 1002) AND (iVar10))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 1;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005: break;
            default:
            sub_12861( 8, uParam0 );
            break;
        }
    }
    else if ((NOT bVar4) AND ((NOT bVar5) AND (bVar3)))
    {
        g_U565 = 3;
        if ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003))
        {
            sub_12861( 7, uParam0 );
        }
    }
    else if ((NOT bVar6) AND ((NOT bVar3) AND ((iVar7) || (bVar4))))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        cellphone3Dstructure._fU488 = 0;
        g_U565 = 1;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005: break;
            default:
            sub_12861( 8, uParam0 );
            break;
        }
    }
    else if ((NOT bVar6) AND ((NOT bVar3) AND ((iVar8) || (bVar5))))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        cellphone3Dstructure._fU488 = 0;
        g_U565 = 0;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_12861( 2, uParam0 );
            break;
        }
    }
    else if ((NOT bVar4) AND ((NOT bVar5) AND (bVar6)))
    {
        g_U565 = 2;
        if ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003))
        {
            sub_12861( 3, uParam0 );
        }
    }
    else
    {
        g_U565 = 19;
    };;;;;;;
    return g_U565;
}

void sub_19925(unknown uParam0)
{
    if ((IS_MOUSE_BUTTON_PRESSED( 1 )) || (((IS_CONTROL_PRESSED( 2, 181 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) AND (IS_USING_CONTROLLER()))))
    {
        g_U566 = 6;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_12861( 6, uParam0 );
            break;
        }
    }
    else if ((IS_MOUSE_BUTTON_PRESSED( 2 )) || (((IS_CONTROL_PRESSED( 2, 182 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 78 )) AND (IS_USING_CONTROLLER()))))
    {
        g_U566 = 7;
        if (cellphone3Dstructure._fU0 != 1007)
        {
            sub_12861( 4, uParam0 );
        }
    }
    else
    {
        g_U566 = 19;
    }
    return g_U566;
}

void sub_20387(unknown uParam0)
{
    g_U567 = 19;
    if ((IS_NUMLOCK_ENABLED()) AND ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003)))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U567 = 8;
            sub_12861( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U567 = 9;
            sub_12861( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U567 = 10;
            sub_12861( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U567 = 11;
            sub_12861( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U567 = 12;
            sub_12861( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U567 = 13;
            sub_12861( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U567 = 14;
            sub_12861( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U567 = 15;
            sub_12861( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U567 = 16;
            sub_12861( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U567 = 17;
            sub_12861( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U567;
}

int sub_21398()
{
    unknown uVar2;
    int iVar3;

    if (l_U254)
    {
        l_U254 = IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() );
    }
    if (NOT l_U254)
    {
        GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 53, ref uVar2 );
        switch (uVar2)
        {
            case 7:
            case 2:
            if ((cellphone3Dstructure._fU508 >= 4) || (cellphone3Dstructure._fU0 != 1005))
            {
                sub_1007( "\n TELLING PLAYER TO USE PHONE" );
                TASK_USE_MOBILE_PHONE( CurrentPlayerChar(), 1 );
            }
            return 0;
            break;
            default:
            GET_MOBILE_PHONE_TASK_SUB_TASK( CurrentPlayerChar(), ref iVar3 );
            if (iVar3 != 1)
            {
                return 0;
            }
            break;
        }
    }
    return 1;
}

int sub_22223(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = cellphone3Dstructure._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_22331( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT cellphone3Dstructure.missionAnsweredPhone) == 1)
        {
            StrCopy( ref cellphone3Dstructure._fU224[0], uParam1, 16 );
            StrCopy( ref cellphone3Dstructure._fU224[1], uParam0, 16 );
            sub_23387( uVar23, ref cellphone3Dstructure._fU176 );
            cellphone3Dstructure.missionAnsweredPhone = 1;
            return 1;
        }
    }
    return 0;
}

int sub_22331(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (cellphone3Dstructure._fU540)
    {
        return 0;
    }
    sub_1007( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_1007( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4066() )))
    {
        sub_1007( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() ))) AND (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
    {
        sub_1007( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_1007( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_22846()))
        {
            return 0;
        }
        cellphone3Dstructure._fU60 = uParam0;
        cellphone3Dstructure._fU48 = 1;
        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (cellphone3Dstructure.missionAnsweredPhone)
        {
            if ((NOT bParam8) || (cellphone3Dstructure.missionAnsweredPhone))
            {
                sub_1007( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (cellphone3Dstructure._fU60 != -1)
        {
            if ((g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 != 4) AND (g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 != 5))
            {
                g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 0;
            }
        }
        cellphone3Dstructure.missionAnsweredPhone = 1;
        cellphone3Dstructure.missionAnsweredPhone = bParam8;
        uParam0 = cellphone3Dstructure._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_22846()))
        {
            return 0;
        }
        cellphone3Dstructure._fU60 = uParam0;
        cellphone3Dstructure._fU52 = 1;
        cellphone3Dstructure._fU56 = 1;
        cellphone3Dstructure.missionAnsweredPhone = 1;
        cellphone3Dstructure.missionAnsweredPhone = 1;
        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_23387( uParam0, ref cellphone3Dstructure._fU176 );
    sub_24768( ref cellphone3Dstructure._fU160 );
    cellphone3Dstructure._fU380 = uParam10;
    cellphone3Dstructure.overrideCellphoneChecks = bParam11;
    cellphone3Dstructure._fU420 = uParam12;
    cellphone3Dstructure.multipleChoiceNumber = -1;
    cellphone3Dstructure._fU364 = uParam3;
    StrCopy( ref cellphone3Dstructure._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_6238( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (cellphone3Dstructure._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            cellphone3Dstructure._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref cellphone3Dstructure._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (cellphone3Dstructure._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            cellphone3Dstructure._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref cellphone3Dstructure._fU312[I], "", 16 );
        }
    }
    StrCopy( ref cellphone3Dstructure._fU208, uParam6, 16 );
    cellphone3Dstructure._fU80 = uParam7;
    cellphone3Dstructure._fU384 = 0;
    cellphone3Dstructure._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

int sub_22846()
{
    if ((cellphone3Dstructure._fU52) || (cellphone3Dstructure._fU48))
    {
        return 0;
    }
    if (cellphone3Dstructure._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_4054())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

void sub_23387(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_24768(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

// List of cheats
// https://www.radiotimes.com/technology/gaming/gta-4-cheats/
void sub_26135()
{
    // This is most likely correct
    // cellphone3Dstructure._fU128 = cheatHashKey

    switch (GET_HASH_KEY( ref cheatHashKey ))
    {
        case 1306311795:
        
        // Health, Armor, and Ammo: 482-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "4825550100" ))
        {
            sub_26336( 0 );
        }
        break;
        case -1630191725:
       
        // Weapons 2: 486-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "4865550100" ))
        {
            sub_26336( 2 );
        }
        break;

        case 840034894:
        // Weapons 1: 486-555-0150
        if (COMPARE_STRING( ref cheatHashKey, "4865550150" ))
        {
            sub_26336( 3 );
        }
        break;

        case 504011964:
        // Armour: 362-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "3625550100" ))
        {
            sub_26336( 1 );
        }
        break;

        case -1298242752:
        // Remove Wanted Level: 267-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "2675550100" ))
        {
            sub_26336( 4 );
        }
        break;

        case -772602971:
        // Increase Wanted level: 267-555-0150
        if (COMPARE_STRING( ref cheatHashKey, "2675550150" ))
        {
            sub_26336( 5 );
        }
        break;

        case 1951436162:

        // Change weather and time of day: 468-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "4685550100" ))
        {
            sub_26336( 7 );
        }
        break;

        case 305725148:

        // Spawn an Annihilator helicopter: 359-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "3595550100" ))
        {
            sub_26336( 8 );
        }
        break;

        case 878687547:

        // Spawn NRG-900: 625-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "6255550100" ))
        {
            sub_26336( 10 );
        }
        break;

        case 503223609:

        // Spawn Sanchez: 625-555-0150
        if (COMPARE_STRING( ref cheatHashKey, "6255550150" ))
        {
            sub_26336( 11 );
        }
        break;

        case 2133577737:

        // Spawn Jetmax: 938-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "9385550100" ))
        {
            sub_26336( 9 );
        }
        break;

        case 1853930698:

        // Spawn FIB Buffalo: 227-555-0100
        if (COMPARE_STRING( ref cheatHashKey, "2275550100" ))
        {
            sub_26336( 12 );
        }
        break;

        case -1987983124:

        // Spawn Comet: 227-555-0175
        if (COMPARE_STRING( ref cheatHashKey, "2275550175" ))
        {
            sub_26336( 13 );
        }
        break;

        case -211509820:

        // Spawn a Turismo: 227-555-0147
        if (COMPARE_STRING( ref cheatHashKey, "2275550147" ))
        {
            sub_26336( 14 );
        }
        break;

        case -397047894:

        // Spawn a Cognoscenti: 227-555-0142
        if (COMPARE_STRING( ref cheatHashKey, "2275550142" ))
        {
            sub_26336( 15 );
        }
        break;

        case -1540193883:

        // Spawn a SuperGT: 227-555-0168
        if (COMPARE_STRING( ref cheatHashKey, "2275550168" ))
        {
            sub_26336( 16 );
        }
        break;

        case -1111111111:
        // TODO Why is this one duplicated?
        // Spawn a SuperGT: 227-555-0168
        if (COMPARE_STRING( ref cheatHashKey, "2275550168" ))
        {
            sub_26336( 16 );
        }
        break;
    }
    return;
}

// Activating cheats
// uParam0 seems to be the cheat to activate
// TODO Figure out the cheat ids, I don't think these below are right.
int sub_26336(unknown uParam0)
{
    SET_BIT( 1, uParam0 );
    switch (uParam0)
    {
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        if (IS_INTERIOR_SCENE())
        {
            return 0;
        }
        break;
    }
    switch (uParam0)
    {
        case 0:
        // Weapons 2 
        ACTIVATE_CHEAT( 2 );
        
        // Armour
        ACTIVATE_CHEAT( 1 );
        break;
        case 1:
        
        // Weapons 2
        ACTIVATE_CHEAT( 2 );
        break;
        case 2:
        
        // Armour
        ACTIVATE_CHEAT( 1 );
        break;
        case 3:
        
        // Health, Armor, and Ammo
        ACTIVATE_CHEAT( 0 );
        break;
        case 4:
        
        // Remove Wanted Level
        ACTIVATE_CHEAT( 4 );
        break;

        // Increase Wanted level
        case 5:
        // Unsure what this one is
        ACTIVATE_CHEAT( 3 );
        break;

        case 7:
        ACTIVATE_CHEAT( 6 );
        break;

        case 8:
        ACTIVATE_CHEAT( 7 );
        break;

        case 9:
        ACTIVATE_CHEAT( 10 );
        break;

        case 10:
        ACTIVATE_CHEAT( 8 );
        break;

        case 11:
        ACTIVATE_CHEAT( 15 );
        break;

        case 12:
        ACTIVATE_CHEAT( 9 );
        break;

        case 13:
        ACTIVATE_CHEAT( 11 );
        break;

        case 14:
        ACTIVATE_CHEAT( 12 );
        break;

        case 15:
        ACTIVATE_CHEAT( 13 );
        break;

        case 16:
        ACTIVATE_CHEAT( 14 );
        break;
    }
    return 1;
    break;
    2;
    1;
    ref cellphone3Dstructure._fU536;
    1;
    ref cellphone3Dstructure._fU536;
    break;
}

int sub_27638()
{
    return 0;
}

int sub_28513(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = cellphone3Dstructure._fU60;
    if (bParam2)
    {
        return sub_22331( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT cellphone3Dstructure.missionAnsweredPhone)
    {
        StrCopy( ref cellphone3Dstructure._fU224[0], uParam1, 16 );
        cellphone3Dstructure._fU224[1] = {(uParam0^)[0]};
        sub_23387( uVar14, ref cellphone3Dstructure._fU176 );
        cellphone3Dstructure.missionAnsweredPhone = 1;
        return 1;
    }
    return 0;
}

void sub_29439(int iParam0)
{
    if (iParam0 < 1)
    {
        return;
    }
    if (# -NULL-0xc27c84())
    {
        sub_9325( 1, g_U481._fU88[iParam0 - 1], 0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000), 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 0, 200, 0, 255 );
        if (iParam0 != 12)
        {
            sub_7982( 1, g_U481._fU144[0], (0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000)) + 0.04000000, 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.11000000, 0.17000000 );
        }
    }
    else if (# -NULL-0xc27bfa())
    {
        sub_9325( 1, g_U481._fU88[iParam0 - 1], 0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000), 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 0, 200, 0, 255 );
        if ((IS_USING_CONTROLLER()) AND (iParam0 != 12))
        {
            sub_7982( 1, g_U481._fU144[0], (0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000)) + 0.04000000, 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.11000000, 0.17000000 );
        }
    }
    else
    {
        sub_9325( 1, g_U481._fU88[iParam0 - 1], 0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000), 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 108, 130, 187, 255 );
        if (iParam0 != 12)
        {
            sub_7982( 1, g_U481._fU144[0], (0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000)) + 0.04000000, 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.11000000, 0.17000000 );
        }
    }
    return;
}

