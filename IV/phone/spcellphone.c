// kelson8 -
// I have renamed some variables in here and guessed what some of these functions do.

// This one came from one of the debug lines here: sub_1814( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
// g_U91 = cellphone3Dstructure

void main()
{
    int I;
    int iVar3;
    char[16] cVar4;

    l_U0 = 225;
    l_U1 = -1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    cellphone3Dstructure._fU496 = GET_IS_HIDEF();
    g_U555 = 9;
    
    // I think this is the textStatus? Seems to be set when a text is received
    cellphone3Dstructure._fU0 = 1000;
    cellphone3Dstructure.hideCellPhone = 0;
    cellphone3Dstructure.disableCellPhone = 0;

    // cellphone3Dstructure._fU568, unknown name but I guessed this one.
    cellphone3Dstructure.getUnacceptedInvites = NETWORK_GET_NUM_UNACCEPTED_INVITES();
    if (cellphone3Dstructure.getUnacceptedInvites == 0)
    {
        cellphone3Dstructure._fU572 = 0;
    }
    else
    {
        cellphone3Dstructure._fU572 = 1;
    }
    g_U821 = 0;
    l_U12 = 0;
    l_U13 = -1;
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            g_U555 = 9;
            cellphone3Dstructure._fU496 = GET_IS_HIDEF();
            sub_197();
            for ( I = 0; I <= (g_U15946 - 1); I++ )
            {
                g_U15946[I]._fU132._fU24 = 6;
            }
            cellphone3Dstructure._fU632 = 0;
            cellphone3Dstructure._fU0 = 1000;
            cellphone3Dstructure._fU4 = 1000;
            g_U565 = 19;
            g_U566 = 19;
            g_U567 = 19;
            cellphone3Dstructure._fU404 = 1000;
            cellphone3Dstructure._fU580 = 0;
            cellphone3Dstructure.hideCellPhone = 0;
            cellphone3Dstructure.disableCellPhone = 0;
            cellphone3Dstructure._fU512 = nil;
            cellphone3Dstructure._fU124 = 0;
            cellphone3Dstructure._fU48 = 0;
            cellphone3Dstructure._fU52 = 0;
            cellphone3Dstructure._fU56 = 0;
            cellphone3Dstructure._fU392 = 0;
            cellphone3Dstructure._fU484 = 1;
            cellphone3Dstructure._fU656 = -1;
            cellphone3Dstructure._fU368 = 0;
            cellphone3Dstructure.missionAnsweredPhone = 0;
            g_U815 = 0;
            g_U816 = 0;
            g_U817 = 0;
            g_U818 = 0;
            g_U819 = 0;
            g_U820 = 0;
            g_U821 = 0;
            cellphone3Dstructure._fU580 = 0;
            cellphone3Dstructure._fU532 = 0;
            l_U4 = 0;
            cellphone3Dstructure._fU540 = 0;
            SET_SLEEP_MODE_ACTIVE( 0 );
            if (sub_1228())
            {
                SET_MESSAGES_WAITING( 1 );
            }
            cellphone3Dstructure.getUnacceptedInvites = NETWORK_GET_NUM_UNACCEPTED_INVITES();
            if (cellphone3Dstructure.getUnacceptedInvites == 0)
            {
                cellphone3Dstructure._fU572 = 0;
            }
            else
            {
                cellphone3Dstructure._fU572 = 1;
            }
            l_U12 = 0;
            l_U13 = -1;
        }
        if ((NOT cellphone3Dstructure._fU580) AND (NETWORK_HAVE_SUMMONS()))
        {
            if (g_U555 == 9)
            {
                g_U15 = GET_EPISODE_INDEX_FROM_SUMMONS();
                g_U813 = g_U10978;
                cellphone3Dstructure._fU580 = 1;
                sub_1682();
            }
        }
        if (NOT cellphone3Dstructure._fU580)
        {
            switch (cellphone3Dstructure._fU40)
            {
                case 0:
                if (IS_PLAYER_PLAYING( sub_2711() ))
                {
                    switch (g_U555)
                    {
                        case 9:
                        if (IS_PLAYER_CONTROL_ON( sub_2711() ))
                        {
                            if (sub_2791())
                            {
                                if ((NOT (IS_BUTTON_PRESSED( 0, 4 ))) AND ((sub_3669( 0 )) == 0))
                                {
                                    cellphone3Dstructure._fU376 = 0;
                                    cellphone3Dstructure._fU380 = 1;
                                    if ((g_U822) || (g_U818))
                                    {
                                        sub_7750( 3 );
                                    }
                                    else if (IS_PLAYER_SIGNED_IN_LOCALLY())
                                    {
                                        sub_7750( 2 );
                                    }
                                    else
                                    {
                                        sub_7750( 0 );
                                    }
                                }
                            }
                        }
                        break;
                        default:
                        if (NOT (IS_THREAD_ACTIVE( g_U556[g_U555] )))
                        {
                            sub_197();
                        }
                        break;
                    }
                }
                break;
                default:
                if (IS_PLAYER_PLAYING( sub_2711() ))
                {
                    switch (g_U555)
                    {
                        case 9:
                        if (NOT l_U12)
                        {
                            if (TIMERB() >= 60000)
                            {
                                l_U12 = 1;
                                sub_11067();
                            }
                        }
                        if (IS_PLAYER_CONTROL_ON( sub_2711() ))
                        {
                            if ((cellphone3Dstructure._fU52) || (cellphone3Dstructure._fU48))
                            {
                                if ((cellphone3Dstructure._fU376) || (sub_2791()))
                                {
                                    sub_7750( 1 );
                                }
                            }
                            else if ((NOT (IS_CONTROL_PRESSED( 0, 23 ))) AND ((sub_3669( 0 )) == 0))
                            {
                                if (sub_2791())
                                {
                                    cellphone3Dstructure._fU376 = 0;
                                    cellphone3Dstructure._fU380 = 1;
                                    if ((g_U822) || (g_U818))
                                    {
                                        sub_7750( 3 );
                                    }
                                    else if (NOT cellphone3Dstructure._fU548)
                                    {
                                        if (cellphone3Dstructure._fU540)
                                        {
                                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                                            {
                                                cellphone3Dstructure._fU548 = 1;
                                                // The phone is in Sleep Mode. To switch the phone back on and allow phonecalls and text messages to come through go to "options" in the menu and select Turn Sleep Mode Off.
                                                PRINT_HELP( "CP_SLEEP_H1" );
                                            }
                                        }
                                    }
                                    sub_7750( 0 );;
                                }
                            }
                        }
                        else if ((cellphone3Dstructure._fU376) AND ((cellphone3Dstructure._fU52) || (cellphone3Dstructure._fU48)))
                        {
                            sub_7750( 1 );
                        }
                        break;
                        default:
                        SETTIMERB( 0 );
                        if (NOT (IS_THREAD_ACTIVE( g_U556[g_U555] )))
                        {
                            sub_197();
                        }
                        else if (cellphone3Dstructure._fU392)
                        {
                            sub_9783( 1 );
                            cellphone3Dstructure._fU392 = 0;
                        }
                        break;
                    }
                    sub_11533();
                    switch (l_U4)
                    {
                        case 3: if (TIMERA() >= 5000)
                        {
                            sub_12385( ref l_U5 );
                            l_U4 = 0;
                        }
                        case 0:
                        if (cellphone3Dstructure._fU0 == 1005)
                        {
                            if ((sub_13442( 21, 1 )) || (sub_13340( "9485550100" )))
                            {
                                if (sub_13767( "MF6_LAZLOW", "", 1 ))
                                {
                                    sub_16937( "LAZLOW" );
                                    if (l_U4 == 3)
                                    {
                                        sub_12385( ref l_U5 );
                                    }
                                    l_U4 = 1;
                                }
                            }
                        }
                        break;
                        case 1:
                        case 2:
                        switch (sub_16993())
                        {
                            case 6:
                            if (l_U4 == 2)
                            {
                                if (IS_GAME_IN_CONTROL_OF_MUSIC())
                                {
                                    iVar3 = GET_AUDIBLE_MUSIC_TRACK_TEXT_ID();
                                    StrCopy( ref cVar4, "TM_82_", 16 );
                                    ConcatString(ref cVar4, iVar3, 16);
                                    if (iVar3 > 1)
                                    {
                                        if (DOES_TEXT_LABEL_EXIST( ref cVar4 ))
                                        {
                                            REPORT_TAGGED_RADIO_TRACK( iVar3 );
                                        }
                                        else
                                        {
                                            sub_8210( "\n setting Zit! ID to 1 as no text exists for ", iVar3 );
                                            sub_1814( "\n" );
                                            iVar3 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 290, 295, ref iVar3 );
                                }
                                sub_17252( 82, iVar3, 16383, 16383, ref l_U5 );
                                sub_17595( 21 );
                                SETTIMERA( 0 );
                                l_U4 = 3;
                            }
                            else
                            {
                                l_U4 = 0;
                            }
                            break;
                            default:
                            if (sub_17755() >= 2)
                            {
                                l_U4 = 2;
                            }
                            break;
                        }
                        break;
                    }
                }
                break;
            }
        }
        else if (g_U555 != 9)
        {
            if (NOT (IS_THREAD_ACTIVE( g_U556[g_U555] )))
            {
                sub_197();
            }
        }
        if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
        {
            if (IS_PLAYER_PLAYING( sub_2711() ))
            {
                if (NETWORK_CHECK_INVITE_ARRIVAL())
                {
                    cellphone3Dstructure._fU572 = 1;
                    if (NOT cellphone3Dstructure._fU576)
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            cellphone3Dstructure._fU576 = 1;
                            PRINT_HELP( "FIRST_INVITE" );
                        }
                    }
                    PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
                    SET_PHONE_HUD_ITEM( 10, "INVITE_REC", 0 );
                    NETWORK_CLEAR_INVITE_ARRIVAL();
                }
            }
            if (cellphone3Dstructure._fU572)
            {
                cellphone3Dstructure.getUnacceptedInvites = NETWORK_GET_NUM_UNACCEPTED_INVITES();
                if (cellphone3Dstructure.getUnacceptedInvites == 0)
                {
                    cellphone3Dstructure._fU572 = 0;
                }
            }
        }
        if (cellphone3Dstructure._fU540)
        {
            if (g_U10978)
            {
                cellphone3Dstructure._fU540 = 0;
                SET_SLEEP_MODE_ACTIVE( 0 );
            }
        }
    }
    return;
}

void sub_197()
{
    g_U555 = 9;
    sub_212();
    sub_387();
    cellphone3Dstructure.hideCellPhone = 0;
    l_U12 = 0;
    sub_845();
    return;
}

void sub_212()
{
    int I;

    if (g_U555 == 9)
    {
        for ( I = 0; I <= (g_U556 - 1); I++ )
        {
            if (IS_THREAD_ACTIVE( g_U556[I] ))
            {
                DESTROY_THREAD( g_U556[I] );
            }
        }
        cellphone3Dstructure._fU124 = 0;
        cellphone3Dstructure._fU48 = 0;
        cellphone3Dstructure._fU52 = 0;
        cellphone3Dstructure._fU56 = 0;
        cellphone3Dstructure._fU392 = 0;
        cellphone3Dstructure._fU484 = 1;
        cellphone3Dstructure._fU532 = 0;
        cellphone3Dstructure._fU376 = 0;
    }
    return;
}

void sub_387()
{
    sub_396();
    sub_677( 0 );
    return;
}

void sub_396()
{
    int I;

    if (g_U481._fU160 != 0)
    {
        for ( I = 0; I <= (g_U481._fU160 - 1); I++ )
        {
            RELEASE_TEXTURE( g_U481._fU0[I] );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_LQ" );
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_HQ" );
        g_U481._fU160 = 0;
        if (g_U481._fU164)
        {
            for ( I = 0; I <= 11; I++ )
            {
                RELEASE_TEXTURE( g_U481._fU88[I] );
            }
            MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "phone3D_dial" );
            RELEASE_TEXTURE( g_U481._fU144[0] );
            RELEASE_TEXTURE( g_U481._fU144[1] );
            RELEASE_TEXTURE( g_U481._fU144[2] );
            g_U481._fU164 = 0;
        }
    }
    return;
}

void sub_677(boolean bParam0)
{
    int I;
    char[32] cVar4;

    StrCopy( ref cVar4, "phone3D_HQ_private", 32 );
    if (bParam0)
    {
        ConcatString(ref cVar4, cellphone3Dstructure._fU400, 32);
    }
    else
    {
        ConcatString(ref cVar4, cellphone3Dstructure._fU396, 32);
    }
    if (g_U523._fU16)
    {
        for ( I = 0; I <= 2; I++ )
        {
            RELEASE_TEXTURE( g_U523._fU0[I] );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( ref cVar4 );
        g_U523._fU16 = 0;
    }
    return;
}

void sub_845()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U10975[I] = 0;
    }
    return;
}

int sub_1228()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1266( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_1266(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1682()
{
    sub_1691();
    sub_2435();
    g_U10 = 1;
    return;
}

void sub_1691()
{
    if (IS_NETWORK_GAME_RUNNING())
    {
        g_U65042 = 1;
        FAKE_DEATHARREST();
        if (NETWORK_IS_SESSION_STARTED())
        {
            sub_1814( "\n #### networkSetup.sch - NETWORK_IS_SESSION_STARTED is returning TRUE. " );
            if (NETWORK_END_SESSION())
            {
                sub_1814( "\n #### networkSetup.sch - called NETWORK_END_SESSION. " );
                while (NETWORK_END_SESSION_PENDING())
                {
                    WAIT( 0 );
                    sub_1814( "\n #### networkSetup.sch - NETWORK_END_SESSION_PENDING is returning TRUE. " );
                    g_U65042 = 1;
                }
            }
        }
        if ((NETWORK_HAVE_ACCEPTED_INVITE()) || (NOT NETWORK_IS_RENDEZVOUS()))
        {
            NETWORK_LEAVE_GAME();
            sub_1814( "\n #### networkSetup.sch - called NETWORK_LEAVE_GAME(). " );
            while (NETWORK_LEAVE_GAME_PENDING())
            {
                WAIT( 0 );
                sub_1814( "\n #### networkSetup.sch - NETWORK_LEAVE_GAME_PENDING is returning TRUE. " );
                g_U65042 = 1;
            }
        }
        else
        {
            sub_1814( "\n #### networkSetup.sch - not leaving game as NETWORK_IS_RENDEZVOUS is returning TRUE. " );
        }
    }
    else
    {
        sub_1814( "\n #### networkSetup.sch - IS_NETWORK_GAME_RUNNING is returning FALSE no need to clean up. " );
    }
    return;
}

void sub_1814(unknown uParam0)
{
    return;
}

void sub_2435()
{
    unknown uVar2;
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

    array(ref uVar2._fU0, 10);
    ref uVar2;
    uVar2._fU0[0] = cellphone3Dstructure._fU40;
    uVar2._fU0[1] = cellphone3Dstructure._fU108;
    uVar2._fU0[2] = cellphone3Dstructure._fU112;
    uVar2._fU0[3] = cellphone3Dstructure._fU396;
    if (cellphone3Dstructure._fU500)
    {
        uVar2._fU0[4] = 1;
    }
    else
    {
        uVar2._fU0[4] = 0;
    }
    if (cellphone3Dstructure._fU524)
    {
        uVar2._fU0[5] = 1;
    }
    else
    {
        uVar2._fU0[5] = 0;
    }
    uVar2._fU0[6] = cellphone3Dstructure._fU656;
    if (g_U15946[21]._fU132._fU0)
    {
        uVar2._fU0[7] = 1;
    }
    else
    {
        uVar2._fU0[7] = 0;
    }
    STORE_SCRIPT_VALUES_FOR_NETWORK_GAME( ref uVar2 );
    return;
}

void sub_2711()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2791()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2711() )))
    {
        sub_1814( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_1814( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (cellphone3Dstructure._fU376)
    {
        sub_1814( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((cellphone3Dstructure.disableCellPhone) || (cellphone3Dstructure.hideCellPhone))
    {
        sub_1814( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2711() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3201() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3201(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_1814( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3201() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_1814( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_1814( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2711() )))
    {
        sub_1814( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_3201()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3669(unknown uParam0)
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
            Result = sub_3835( iVar4 );
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
            Result = sub_3835( iVar4 );
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
            Result = sub_3835( iVar4 );
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
            Result = sub_3835( iVar4 );
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
            Result = sub_3835( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 ))))
        {
            Result = sub_3835( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT IS_USING_CONTROLLER()) AND (NOT (IS_CONTROL_PRESSED( 2, 22 ))))
        {
            Result = sub_3835( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_3835( iVar4 );
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
            uVar6 = sub_6415( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))) AND (((NOT (IS_CONTROL_PRESSED( 2, 182 ))) || (IS_USING_CONTROLLER())) AND ((NOT (IS_CONTROL_PRESSED( 2, 78 ))) || (NOT IS_USING_CONTROLLER()))))
        {
            uVar6 = sub_6415( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_6415( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U567)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_6877( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_6877( iVar4 );
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

void sub_3835(unknown uParam0)
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
            sub_4236( 2, uParam0 );
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
            sub_4236( 8, uParam0 );
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
            sub_4236( 8, uParam0 );
            break;
        }
    }
    else if ((NOT bVar4) AND ((NOT bVar5) AND (bVar3)))
    {
        g_U565 = 3;
        if ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003))
        {
            sub_4236( 7, uParam0 );
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
            sub_4236( 8, uParam0 );
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
            sub_4236( 2, uParam0 );
            break;
        }
    }
    else if ((NOT bVar4) AND ((NOT bVar5) AND (bVar6)))
    {
        g_U565 = 2;
        if ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003))
        {
            sub_4236( 3, uParam0 );
        }
    }
    else
    {
        g_U565 = 19;
    };;;;;;;
    return g_U565;
}

// Keypad tones and the volume for them
void sub_4236(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (((cellphone3Dstructure._fU0 == 1005) || (NOT cellphone3Dstructure._fU376)) AND (uParam1))
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
            sub_1814( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_1814( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_1814( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_1814( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_1814( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_1814( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_1814( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_1814( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_1814( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_1814( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_1814( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_1814( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_6415(unknown uParam0)
{
    if ((IS_MOUSE_BUTTON_PRESSED( 1 )) || (((IS_CONTROL_PRESSED( 2, 181 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) AND (IS_USING_CONTROLLER()))))
    {
        g_U566 = 6;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_4236( 6, uParam0 );
            break;
        }
    }
    else if ((IS_MOUSE_BUTTON_PRESSED( 2 )) || (((IS_CONTROL_PRESSED( 2, 182 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 78 )) AND (IS_USING_CONTROLLER()))))
    {
        g_U566 = 7;
        if (cellphone3Dstructure._fU0 != 1007)
        {
            sub_4236( 4, uParam0 );
        }
    }
    else
    {
        g_U566 = 19;
    }
    return g_U566;
}

void sub_6877(unknown uParam0)
{
    g_U567 = 19;
    if ((IS_NUMLOCK_ENABLED()) AND ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003)))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U567 = 8;
            sub_4236( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U567 = 9;
            sub_4236( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U567 = 10;
            sub_4236( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U567 = 11;
            sub_4236( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U567 = 12;
            sub_4236( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U567 = 13;
            sub_4236( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U567 = 14;
            sub_4236( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U567 = 15;
            sub_4236( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U567 = 16;
            sub_4236( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U567 = 17;
            sub_4236( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U567;
}

void sub_7750(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    sub_7762( ref uVar3, uParam0 );
    cellphone3Dstructure._fU552 = USING_STANDARD_CONTROLS();
    REQUEST_SCRIPT( ref uVar3 );
    sub_8109();
    while (NOT (HAS_SCRIPT_LOADED( ref uVar3 )))
    {
        WAIT( 0 );
        REQUEST_SCRIPT( ref uVar3 );
    }
    SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 0, 15, 3 );
    cellphone3Dstructure._fU0 = 1000;
    cellphone3Dstructure._fU504 = 0;
    StrCopy( ref cellphone3Dstructure._fU128, "", 16 );
    g_U555 = uParam0;
    g_U556[uParam0] = START_NEW_SCRIPT( ref uVar3, 16888 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref uVar3 );
    return;
}

void sub_7762(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        StrCopy( (uParam0^), "SPcellphoneMain", 32 );
        break;
        case 1:
        StrCopy( (uParam0^), "SPcellphoneCalling", 32 );
        break;
        case 2:
        StrCopy( (uParam0^), "SPcellphoneNetwork", 32 );
        break;
        case 3:
        StrCopy( (uParam0^), "SPcellphoneTutorial", 32 );
        break;
        case 4:
        StrCopy( (uParam0^), "MPcellphoneMain", 32 );
        break;
        case 5:
        StrCopy( (uParam0^), "MPcellphoneCalling", 32 );
        break;
        case 6:
        StrCopy( (uParam0^), "MPcellphoneNetwork", 32 );
        break;
        case 7:
        StrCopy( (uParam0^), "MPcellphoneParty", 32 );
        break;
    }
    return;
}

void sub_8109()
{
    sub_8118();
    return;
}

// Looks like phone txds
void sub_8118()
{
    char[16] cVar2;
    char[32] cVar6;
    boolean bVar14;

    StrCopy( ref cVar2, "phone3D_LQ", 16 );
    StrCopy( ref cVar6, "phone3D_dial", 32 );
    sub_8210( "\n Number of phone textures loaded is ", g_U481._fU160 );
    if (g_U481._fU160 == 0)
    {
        if (cellphone3Dstructure._fU40 == 2)
        {
            StrCopy( ref cVar2, "phone3D_HQ", 16 );
        }
        REQUEST_STREAMED_TXD( ref cVar2, 1 );
        sub_1814( "\n requested streamed txd - " );
        sub_1814( "mainTXD" );
        bVar14 = true;
        sub_8345( 1, ref cellphone3Dstructure._fU8 );
        sub_8975();
        CREATE_MOBILE_PHONE( 2 );
        if (NOT IS_NETWORK_SESSION())
        {
            REQUEST_STREAMED_TXD( ref cVar6, 1 );
            bVar14 = false;
        }
        while ((NOT bVar14) || (NOT (HAS_STREAMED_TXD_LOADED( ref cVar2 ))))
        {
            WAIT( 0 );
            if (NOT bVar14)
            {
                if (HAS_STREAMED_TXD_LOADED( ref cVar6 ))
                {
                    bVar14 = true;
                }
            }
        }
        g_U481._fU0[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "menuArrow" );
        g_U481._fU0[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad1" );
        g_U481._fU0[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad2" );
        g_U481._fU0[3] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad3" );
        g_U481._fU0[4] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad4" );
        g_U481._fU0[5] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad5" );
        g_U481._fU0[6] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad6" );
        g_U481._fU0[7] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad7" );
        g_U481._fU0[8] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad8" );
        g_U481._fU0[9] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad9" );
        g_U481._fU0[10] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadStar" );
        g_U481._fU0[11] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypad0" );
        g_U481._fU0[12] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadHash" );
        g_U481._fU0[13] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadPhoneLeft" );
        g_U481._fU0[14] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "keypadPhoneRight" );
        g_U481._fU0[15] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertMsg" );
        g_U481._fU0[16] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertBell" );
        g_U481._fU0[17] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "alertInvite" );
        g_U481._fU0[18] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "inGTA" );
        if (cellphone3Dstructure._fU40 == 2)
        {
            g_U481._fU0[19] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "envelope1" );
            g_U481._fU0[20] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "envelope2" );
            g_U481._fU160 = 21;
            sub_9783( 0 );
        }
        else
        {
            g_U481._fU0[19] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar2, "background" );
            g_U481._fU160 = 20;
        }
        if ((NOT IS_NETWORK_SESSION()) AND (NOT g_U481._fU164))
        {
            g_U481._fU88[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad1" );
            g_U481._fU88[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad2" );
            g_U481._fU88[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad3" );
            g_U481._fU88[3] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad4" );
            g_U481._fU88[4] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad5" );
            g_U481._fU88[5] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad6" );
            g_U481._fU88[6] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad7" );
            g_U481._fU88[7] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad8" );
            g_U481._fU88[8] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad9" );
            g_U481._fU88[9] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypadStar" );
            g_U481._fU88[10] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypad0" );
            g_U481._fU88[11] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar6, "dialkeypadHash" );
            g_U481._fU140 = GET_TXD( "buttons" );
            if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
            {
                g_U481._fU144[0] = GET_TEXTURE( g_U481._fU140, "A_butt" );
                g_U481._fU144[1] = GET_TEXTURE( g_U481._fU140, "X_butt" );
                g_U481._fU144[2] = GET_TEXTURE( g_U481._fU140, "B_butt" );
            }
            else
            {
                g_U481._fU144[0] = GET_TEXTURE( g_U481._fU140, "p_Cross" );
                g_U481._fU144[1] = GET_TEXTURE( g_U481._fU140, "p_Square" );
                g_U481._fU144[2] = GET_TEXTURE( g_U481._fU140, "p_Circle" );
            }
            g_U481._fU164 = 1;
        }
        sub_1814( "\n streamed txd's loaded" );
    }
    return;
}

void sub_8210(unknown uParam0, unknown uParam1)
{
    return;
}

// Looks like something to do with widescreen checking
void sub_8345(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_8462( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_8462( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
        case 2:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_8462( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_8462( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
        case 3:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_8462( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_8462( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
        case 4:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_8462( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_8462( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_8462(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

// Set the phone scale, position and rotation.
void sub_8975()
{
    SET_MOBILE_PHONE_SCALE( cellphone3Dstructure._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( cellphone3Dstructure._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( cellphone3Dstructure._fU8._fU12 );
    return;
}

void sub_9783(unknown uParam0)
{
    char[32] cVar3;

    StrCopy( ref cVar3, "phone3D_HQ_private", 32 );
    ConcatString(ref cVar3, cellphone3Dstructure._fU396, 32);
    REQUEST_STREAMED_TXD( ref cVar3, 1 );
    while (NOT (HAS_STREAMED_TXD_LOADED( ref cVar3 )))
    {
        WAIT( 0 );
    }
    sub_677( uParam0 );
    g_U523._fU0[0] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "background" );
    g_U523._fU0[1] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "logo" );
    g_U523._fU0[2] = GET_TEXTURE_FROM_STREAMED_TXD( ref cVar3, "animated" );
    g_U523._fU16 = 1;
    return;
}

void sub_11067()
{
    int J;
    int I;

    for ( J = 0; J <= (g_U15946 - 1); J++ )
    {
        for ( I = 0; I <= (g_U15946._fU4._fU8._fU4._fU0 - 1); I++ )
        {
            g_U15946[J]._fU8[1]._fU0[I] = 0;
        }
    }
    return;
}

void sub_11533()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar2 = GET_MINUTES_OF_DAY();
    if (l_U13 == iVar2)
    {
        return;
    }
    else
    {
        l_U13 = iVar2;
    }
    if ((iVar2 != 30) AND (iVar2 != 0))
    {
        return;
    }
    uVar3 = GET_CURRENT_DAY_OF_WEEK();
    uVar4 = GET_HOURS_OF_DAY();
    iVar5 = 0;
    iVar6 = -1;
    iVar7 = -1;
    switch (uVar4)
    {
        case 7:
        case 11:
        case 17:
        case 23:
        iVar5 = 1;
        if (iVar2 != 30)
        {
            return;
        }
        break;
        case 6:
        case 10:
        case 16:
        case 22:
        if (iVar2 != 0)
        {
            return;
        }
        break;
        default:
        return;
        break;
    }
    switch (GET_HOURS_OF_DAY())
    {
        case 7:
        case 6:
        iVar6 = 8;
        iVar7 = sub_11821( uVar3, 1 );
        break;
        case 11:
        case 10:
        iVar6 = 12;
        iVar7 = sub_11821( uVar3, 2 );
        break;
        case 17:
        case 16:
        iVar6 = 18;
        iVar7 = sub_11821( uVar3, 3 );
        break;
        case 23:
        case 22:
        iVar6 = 0;
        sub_12022( ref uVar3, 1, 0, 6 );
        iVar7 = sub_11821( uVar3, 0 );
        break;
    }
    if (iVar7 != -1)
    {
        sub_12154( iVar7, iVar6 );
    }
    return;
}

int sub_11821(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_12022(unknown uParam0, int iParam1, int iParam2, int iParam3)
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

// Possibly play a cell phone sound for MOBILE_PHONE_SMS_RECIEVE
void sub_12154(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (iParam0 > 0)
    {
        sub_12189( ref uVar4, "CP_APMNT_", iParam0, -1, -1 );
        PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
        SET_PHONE_HUD_ITEM( 3, ref uVar4, uParam1 );
    }
    return;
}

// Example usage:
// sub_12189( ref uVar4, "CP_APMNT_", iParam0, -1, -1 );

// In above example:
// uParam0 = uVar4
// uParam1 = "CP_APMNT_"
// uParam2 = iParam0 of sub_12189
// iParam3 = -1
// iParam4 = -1
void sub_12189(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
    if (iParam3 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam3, 16);
        if (iParam4 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam4, 16);
        }
    }
    return;
}

int sub_12385(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (cellphone3Dstructure._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_12455())
        {
            sub_12519( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_12732( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_12519( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_1266( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            cellphone3Dstructure._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                cellphone3Dstructure._fU404 = 1015;
            }
            else if (cellphone3Dstructure._fU0 == 1014)
            {
                cellphone3Dstructure._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_1266( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_12455()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1266( 1, g_U569[I] )) != 0))
        {
            sub_12519( I );
            return 1;
        }
    }
    return 0;
}

void sub_12519(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_12604( g_U569 - 1 );
    return;
}

void sub_12604(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_12732(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_12797( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_12797(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1266( 0, uParam0 );
        if (iVar14 == (sub_1266( 0, uParam6 )))
        {
            iVar15 = sub_1266( 3, uParam0 );
            if (iVar15 == (sub_1266( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_13340(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((cellphone3Dstructure._fU508 >= 4) AND (cellphone3Dstructure._fU0 == 1005))
    {
        if (cellphone3Dstructure._fU60 == 56)
        {
            return COMPARE_STRING( ref cellphone3Dstructure._fU128, uParam0 );
        }
    }
    return 0;
}

int sub_13442(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_1814( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_1814( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((cellphone3Dstructure._fU60 == iParam0) AND (cellphone3Dstructure._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT cellphone3Dstructure.missionAnsweredPhone) AND (cellphone3Dstructure._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT cellphone3Dstructure._fU368)
        {
            return 1;
        }
    }
    return 0;
}

int sub_13767(unknown uParam0, unknown uParam1, boolean bParam2)
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
            return sub_13875( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT cellphone3Dstructure._fU368) == 1)
        {
            StrCopy( ref cellphone3Dstructure._fU224[0], uParam1, 16 );
            StrCopy( ref cellphone3Dstructure._fU224[1], uParam0, 16 );
            sub_14931( uVar23, ref cellphone3Dstructure._fU176 );
            cellphone3Dstructure._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_13875(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (cellphone3Dstructure._fU540)
    {
        return 0;
    }
    sub_1814( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_1814( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2711() )))
    {
        sub_1814( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3201() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3201() )))
    {
        sub_1814( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_1814( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_14390()))
        {
            return 0;
        }
        cellphone3Dstructure._fU60 = uParam0;
        cellphone3Dstructure._fU48 = 1;
        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        // This one came from one of the debug lines here: sub_1814( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
        // g_U91 = cellphone3Dstructure
        if (cellphone3Dstructure._fU368)
        {
            if ((NOT bParam8) || (cellphone3Dstructure.missionAnsweredPhone))
            {
                sub_1814( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        cellphone3Dstructure._fU368 = 1;
        cellphone3Dstructure.missionAnsweredPhone = bParam8;
        uParam0 = cellphone3Dstructure._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_14390()))
        {
            return 0;
        }
        cellphone3Dstructure._fU60 = uParam0;
        cellphone3Dstructure._fU52 = 1;
        cellphone3Dstructure._fU56 = 1;
        cellphone3Dstructure.missionAnsweredPhone = 1;
        cellphone3Dstructure._fU368 = 1;
        g_U15946[cellphone3Dstructure._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }

    // PhoneContacts?
    sub_14931( uParam0, ref cellphone3Dstructure._fU176 );
    sub_16312( ref cellphone3Dstructure._fU160 );

    cellphone3Dstructure._fU380 = uParam10;
    cellphone3Dstructure._fU376 = bParam11;
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
        sub_16552( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_14390()
{
    if ((cellphone3Dstructure._fU52) || (cellphone3Dstructure._fU48))
    {
        return 0;
    }
    if (cellphone3Dstructure._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_2791())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

// Looks like phone contacts
void sub_14931(int iParam0, unknown uParam1)
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

void sub_16312(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_16552(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16937(unknown uParam0)
{
    StrCopy( ref cellphone3Dstructure._fU176, uParam0, 32 );
    return;
}

int sub_16993()
{
    if (cellphone3Dstructure._fU60 != -1)
    {
        return g_U15946[cellphone3Dstructure._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_17252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_17274( uParam0, 0, iParam4 + 0 );
    sub_17274( uParam1, 1, iParam4 + 0 );
    sub_17274( uParam2, 2, iParam4 + 0 );
    sub_17274( uParam3, 3, iParam4 + 0 );
    sub_17274( 0, 4, iParam4 + 0 );
    sub_17274( 1, 5, iParam4 + 0 );
    sub_17274( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_17274(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_17595(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (cellphone3Dstructure._fU0 == 1012)
        {
            cellphone3Dstructure._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        cellphone3Dstructure._fU520 = 0;
    }
    return;
}

void sub_17755()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

