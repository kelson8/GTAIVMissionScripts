void main()
{
    boolean bVar2;
    boolean bVar3;

    l_U0 = 14;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    SETTIMERA( 0 );
    bVar2 = true;
    bVar3 = true;
    while (bVar2)
    {
        WAIT( 0 );
        bVar3 = true;
        if (NOT g_U10978)
        {
            bVar3 = false;
            if (TIMERA() > 5000)
            {
                if (sub_85( l_U0 ))
                {
                    bVar2 = false;
                }
            }
        }
        if (bVar3)
        {
            SETTIMERA( 0 );
        }
    }
    PRINT_HELP( "R2_PROFILE_22" );
    SETTIMERA( 0 );
    while ((sub_327( l_U0 )) AND (TIMERA() < 7500))
    {
        WAIT( 0 );
        if ((g_U10978) || (g_U9893._fU12))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "R2_PROFILE_22" ))
            {
                CLEAR_HELP();
            }
            sub_424( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "R2_PROFILE_22" ))
    {
        CLEAR_HELP();
    }
    sub_424( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_85(int iParam0)
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

boolean sub_327(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_424(unknown uParam0)
{
    if (NOT (sub_327( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

