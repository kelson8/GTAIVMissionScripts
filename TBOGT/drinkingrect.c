void main()
{
    while (true)
    {
        WAIT( 0 );
        if (NOT l_U0)
        {
            GET_GAME_TIMER( ref l_U1 );
            l_U0 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U2 );
            l_U3 = l_U2 - l_U1;
            if (NOT (l_U3 >= 10000))
            {
                PRINTNL();
                PRINTSTRING( "Time is " );
                PRINTINT( l_U3 );
                PRINTNL();
                PRINTSTRING( "Drawing the rectangle" );
                DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
            }
            else if (NOT IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            WAIT( 4000 );
            SAY_AMBIENT_SPEECH( sub_226(), "WHERE_AM_I", 0, 0, 0 );
            TERMINATE_THIS_SCRIPT();;
        }
    }
    return;
}

void sub_226()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

