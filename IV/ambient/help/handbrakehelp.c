void main()
{
    boolean bVar2;
    boolean bVar3;

    l_U0 = 13;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    SETTIMERA( 0 );
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (g_U15654[9])
        {
            TERMINATE_THIS_SCRIPT();
        }
        bVar3 = true;
        if (NOT g_U10978)
        {
            if (IS_PLAYER_PLAYING( sub_80() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_123() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_123() ))
                    {
                        bVar3 = false;
                        if (TIMERA() > 4000)
                        {
                            if (sub_216( l_U0 ))
                            {
                                PRINT_HELP( "HELP5" );
                                bVar2 = false;
                            }
                        }
                    }
                }
            }
        }
        if (bVar3)
        {
            SETTIMERA( 0 );
        }
    }
    sub_431( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_80()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_123()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_216(int iParam0)
{
    int iVar3;

    iVar3 = g_U64522[iParam0];
    if (g_U64539 == iParam0)
    {
        return 1;
    }
    if (g_U64541 == iParam0)
    {
        if (iVar3 <= g_U64538)
        {
            return 0;
        }
        g_U64538 = g_U64540;
        g_U64539 = g_U64541;
        g_U64540 = 0;
        g_U64541 = 16;
        return 1;
    }
    if (iVar3 <= g_U64540)
    {
        return 0;
    }
    g_U64540 = iVar3;
    g_U64541 = iParam0;
    return 0;
}

void sub_431(unknown uParam0)
{
    if (NOT (sub_442( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

boolean sub_442(int iParam0)
{
    return iParam0 == g_U64539;
}

