void main()
{
    char[32] cVar2;
    char[12] cVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;

    StrCopy( ref l_U0, "INDEPENDENT", 32 );
    StrCopy( ref l_U8, "OFF", 32 );
    THIS_SCRIPT_SHOULD_BE_SAVED();
    array(ref cVar10, 2);
    StrCopy( ref cVar10[0], "ME_IND_FM_TUT1", 32 );
    StrCopy( ref cVar10[1], "ME_INFM_TUT5", 32 );
    l_U16 = 0;
    l_U19 = 0;
    while (true)
    {
        WAIT( 0 );
        if (sub_117() == 1)
        {
            TERMINATE_THIS_SCRIPT();
        }
        if (NOT GET_MISSION_FLAG())
        {
            if (g_U9600 == 0)
            {
                if (IS_RADIO_HUD_ON() == 1)
                {
                    StrCopy( ref cVar2, GET_PLAYER_RADIO_STATION_NAME_ROLL(), 32 );
                    if ((COMPARE_STRING( ref cVar2, ref l_U8 )) == 0)
                    {
                        l_U8 = {cVar2};
                        if ((COMPARE_STRING( ref cVar2, ref l_U0 )) == 1)
                        {
                            if (IS_HELP_MESSAGE_BEING_DISPLAYED() == 0)
                            {
                                CLEAR_HELP();
                                if (GET_PLAYER_HAS_TRACKS() == 1)
                                {
                                    if (GET_PLAYER_RADIO_MODE() != 0)
                                    {
                                        PRINT_HELP( ref cVar10[1] );
                                        l_U18++;
                                    }
                                }
                                else if (l_U17 < 1)
                                {
                                    PRINT_HELP( ref cVar10[0] );
                                    l_U17++;
                                }
                                WAIT( 0 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_117()
{
    if (l_U18 == 1)
    {
        return 1;
    }
    return 0;
}

