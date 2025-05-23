void main()
{
    PRINTSTRING( "ambNightclubHC - starting.." );
    PRINTNL();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" )) == 0)
    {
        g_U30110[2] = 1;
        REQUEST_SCRIPT( "ambNightclubHC2" );
        while (NOT (HAS_SCRIPT_LOADED( "ambNightclubHC2" )))
        {
            WAIT( 0 );
        }
        while (sub_163() > 1)
        {
            if (NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
            {
                PRINTSTRING( "CLUB_HERCULES script no longer within activation range. Terminating." );
                g_U30110[2] = 0;
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubHC2" );
                TERMINATE_THIS_SCRIPT();
            }
            else
            {
                PRINTSTRING( "CLUB_HERCULES script waiting for another club script to terminate first" );
                PRINTNL();
            }
            WAIT( 0 );
        }
        START_NEW_SCRIPT_WITH_ARGS( "ambNightclubHC2", ref l_U1, 23, 2024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubHC2" );
        WAIT( 1000 );
    }
    else
    {
        PRINTSTRING( "...already running ambNightclubHC2" );
        PRINTNL();
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" )) == 0)
    {
        PRINTSTRING( "resetting g_bWaitingForClubScriptToStreamIn[CLUB_HERCULES] to FALSE" );
        PRINTNL();
        g_U30110[2] = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_163()
{
    int Result;

    Result = 0;
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" );
    return Result;
}

