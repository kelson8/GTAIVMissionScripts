void main()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_21();
    }
    WAIT( 0 );
    LOAD_ADDITIONAL_TEXT( "DARTS", 0 );
    LOAD_SCENE( 1153.12100000, 734.97450000, 35.39900000 );
    SET_CHAR_COORDINATES( sub_91(), 1153.12100000, 734.97450000, 34.39900000 );
    SET_CHAR_HEADING( sub_91(), 80.00000000 );
    sub_186( "GO_TO_BAR", 6000 );
    sub_21();
    return;
}

void sub_21()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_91()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_186(unknown uParam0, unknown uParam1)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, uParam1, 1 );
    return;
}

