void main()
{
    boolean bVar2;
    unknown uVar3;

    PRINTSTRING( "ambNightclubM9 - starting.." );
    PRINTNL();
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" )) == 0)
    {
        while (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "rocco1" )) == 0))
        {
            GET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, ref bVar2, ref uVar3 );
            if (bVar2)
            {
                PRINTSTRING( "\n\n\n\n\n\nKGM*******************AMBNIGHTCLUBM9: UNLOCKING DOOR FOR LARRY'S MISSION\n\n\n\n\n" );
                PRINTNL();
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, -468.00000000, 153.00000000, 10.00000000, 0, 0.00000000 );
            }
            WAIT( 1000 );
        }
        g_U30110[1] = 1;
        REQUEST_SCRIPT( "ambNightclubM92" );
        while (NOT (HAS_SCRIPT_LOADED( "ambNightclubM92" )))
        {
            WAIT( 0 );
        }
        while (sub_373() > 1)
        {
            if (NOT IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
            {
                PRINTSTRING( "Maisonette 9 script no longer within activation range. Terminating." );
                g_U30110[1] = 0;
                MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubM92" );
                TERMINATE_THIS_SCRIPT();
            }
            else
            {
                PRINTSTRING( "Maisonette 9 script waiting for another club script to terminate first" );
                PRINTNL();
            }
            WAIT( 0 );
        }
        START_NEW_SCRIPT_WITH_ARGS( "ambNightclubM92", ref l_U1, 23, 2024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambNightclubM92" );
    }
    else
    {
        PRINTSTRING( "...ambNightclubM92 already running" );
        PRINTNL();
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" )) == 0)
    {
        PRINTSTRING( "resetting g_bWaitingForClubScriptToStreamIn[CLUB_MAISONETTE_9] to FALSE" );
        PRINTNL();
        g_U30110[1] = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_373()
{
    int Result;

    Result = 0;
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" );
    Result += GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" );
    return Result;
}

