void main()
{
    int iVar2;

    SET_MISSION_FLAG( 1 );
    iVar2 = 0;
    SETTIMERB( 0 );
    while (true)
    {
        WAIT( 0 );
        if (g_U819)
        {
            TERMINATE_THIS_SCRIPT();
        }
        if (TIMERB() > 1000)
        {
            if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym8" )) > 0)) AND ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym7" )) > 0)) AND ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym6" )) > 0)) AND ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym5" )) > 0)) AND ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym4" )) > 0)) AND ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym3" )) > 0)) AND ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym2" )) > 0)) AND ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym1" )) > 0)) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ClubSecurity" )) > 0))))))))))
            {
                iVar2++;
            }
            else
            {
                iVar2 = 0;
            }
            if (iVar2 > 3)
            {
                TERMINATE_THIS_SCRIPT();
            }
            SETTIMERB( 0 );
        }
    }
    return;
}

