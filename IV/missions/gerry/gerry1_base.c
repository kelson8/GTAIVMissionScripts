void main()
{
    l_U0 = 1;
    l_U1 = 1;
    WAIT( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_37();
    }
    while (l_U1)
    {
        WAIT( 0 );
        switch (l_U0)
        {
            case 1:
            sub_95();
            break;
            default: break;
        }
    }
    sub_37();
    return;
}

void sub_37()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_95()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_104(), 65144, 1784.93000000, 10.75000000, 200.00000000, 200.00000000, 50.00000000, 0 )))
    {
        l_U1 = 0;
    }
    return;
}

void sub_104()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

