void main()
{
    boolean bVar2;

    l_U0 = 10;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (NOT g_U10978)
        {
            if (IS_PLAYER_PLAYING( sub_49() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_92() )))
                {
                    if (IS_PLAYER_BEING_ARRESTED())
                    {
                        if (sub_161( l_U0 ))
                        {
                            PRINT_HELP( "COPSESC" );
                            bVar2 = false;
                        }
                    }
                }
            }
        }
    }
    sub_363( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_49()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_92()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_161(int iParam0)
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

void sub_363(unknown uParam0)
{
    if (NOT (sub_374( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

boolean sub_374(int iParam0)
{
    return iParam0 == g_U64539;
}

