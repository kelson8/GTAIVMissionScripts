void main()
{
    int iVar2;
    boolean bVar3;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U19 = 0;
    l_U20 = 4;
    l_U21 = 0;
    l_U22 = 11;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U21 = iVar2 + 5400000;
    l_U19 = 0;
    l_U20 = 4;
    bVar3 = true;
    while (true)
    {
        while ((g_U15811[35]) || (g_U30153))
        {
            WAIT( 0 );
            sub_148();
        }
        l_U21 = iVar2 + 5400000;
        bVar3 = true;
        while (bVar3)
        {
            WAIT( 0 );
            GET_GAME_TIMER( ref iVar2 );
            sub_148();
            if (g_U15811[38])
            {
                if (sub_242( l_U22 ))
                {
                    sub_297( l_U22 );
                }
                sub_400();
            }
            if ((iVar2 > l_U21) || ((g_U15811[35]) || (g_U30153)))
            {
                bVar3 = false;
            }
        }
        if ((NOT g_U15811[35]) AND (NOT g_U30153))
        {
            if (iVar2 > l_U21)
            {
                sub_494();
            }
        }
        if ((g_U15811[35]) || (g_U30153))
        {
            if (sub_242( l_U22 ))
            {
                if (sub_297( l_U22 ))
                {
                    l_U19 = l_U20;
                }
            }
        }
        if (l_U19 == 3)
        {
            bVar3 = true;
            while (bVar3)
            {
                WAIT( 0 );
                sub_148();
                if (sub_836( 13 ))
                {
                    sub_400();
                }
                if (g_U15811[38])
                {
                    sub_297( 13 );
                    sub_400();
                }
                if (g_U30153)
                {
                    if (sub_242( l_U22 ))
                    {
                        if (sub_297( l_U22 ))
                        {
                            l_U19 = l_U20;
                            bVar3 = false;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_148()
{
    if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
    {
        ;
    }
    return;
}

void sub_242(unknown uParam0)
{
    return sub_253( uParam0 );
}

void sub_253(unknown uParam0)
{
    return g_U15904[uParam0]._fU0;
}

void sub_297(unknown uParam0)
{
    return sub_308( uParam0 );
}

int sub_308(unknown uParam0)
{
    if (NOT g_U15904[uParam0]._fU0)
    {
        return 1;
    }
    if (g_U15904[uParam0]._fU12)
    {
        return 0;
    }
    g_U15904[uParam0]._fU0 = 0;
    g_U15904[uParam0]._fU16 = 1;
    return 1;
}

void sub_400()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_494()
{
    l_U20 = l_U19;
    switch (l_U19)
    {
        case 0:
        l_U22 = 11;
        sub_558( l_U22, 10000, 60000 );
        l_U19 = 1;
        break;
        case 1:
        l_U22 = 12;
        sub_558( l_U22, 10000, 60000 );
        l_U19 = 2;
        break;
        case 2:
        l_U22 = 13;
        sub_558( l_U22, 10000, 60000 );
        l_U19 = 3;
        break;
    }
    return;
}

void sub_558(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_573( uParam0, uParam1, uParam2 );
    return;
}

void sub_573(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_836(unknown uParam0)
{
    return g_U15904[uParam0]._fU16;
}

