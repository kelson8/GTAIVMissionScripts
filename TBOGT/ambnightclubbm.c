void main()
{
    PRINTSTRING( "ambNightclubBM - starting.." );
    PRINTNL();
    if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" )) == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" )) == 0))
    {
        if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "E2EndCredits" )) == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tony6" )) == 0))
        {
            PRINTSTRING( "...ambNightclubBM_min starting." );
            PRINTNL();
            g_U30110[0] = 1;
            REQUEST_SCRIPT( "ambNightclubBM_min" );
            while (NOT (HAS_SCRIPT_LOADED( "ambNightclubBM_min" )))
            {
                WAIT( 0 );
            }
            while (sub_295() > 1)
            {
                if (NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                {
                    PRINTSTRING( "BAHAMA_MAMAS (min) script no longer within activation range. Terminating." );
                    g_U30110[0] = 0;
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM_min" );
                    TERMINATE_THIS_SCRIPT();
                }
                else
                {
                    PRINTSTRING( "BAHAMA_MAMAS (min) script waiting for another club script to terminate first" );
                    PRINTNL();
                }
                WAIT( 0 );
            }
            START_NEW_SCRIPT_WITH_ARGS( "ambNightclubBM_min", ref l_U1, 23, 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM_min" );
            WAIT( 1000 );
        }
        else
        {
            PRINTSTRING( "...ambNightclubBM2 starting." );
            PRINTNL();
            g_U30110[0] = 1;
            REQUEST_SCRIPT( "ambNightclubBM2" );
            while (NOT (HAS_SCRIPT_LOADED( "ambNightclubBM2" )))
            {
                WAIT( 0 );
            }
            while (sub_295() > 1)
            {
                if (NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                {
                    PRINTSTRING( "BAHAMA_MAMAS script no longer within activation range. Terminating." );
                    g_U30110[0] = 0;
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM2" );
                    TERMINATE_THIS_SCRIPT();
                }
                else
                {
                    PRINTSTRING( "BAHAMA_MAMAS script waiting for another club script to terminate first" );
                    PRINTNL();
                }
                WAIT( 0 );
            }
            START_NEW_SCRIPT_WITH_ARGS( "ambNightclubBM2", ref l_U1, 23, 16888 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubBM2" );
            WAIT( 1000 );
        }
    }
    else
    {
        PRINTSTRING( "...ambNightclubBM already has a clubscript running." );
        PRINTNL();
    }
    if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" )) == 0) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" )) == 0))
    {
        PRINTSTRING( "resetting g_bWaitingForClubScriptToStreamIn[CLUB_BAHAMA_MAMAS] to FALSE" );
        PRINTNL();
        g_U30110[0] = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_295()
{
    int Result;

    Result = 0;
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" );
    return Result;
}

