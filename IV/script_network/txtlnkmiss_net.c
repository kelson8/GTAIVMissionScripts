void main()
{
    sub_9();
    return;
}

void sub_9()
{
    int I;
    int iVar3;

    g_U9241._fU148[0] = 0;
    g_U9241._fU112[0] = -1;
    StrCopy( ref g_U9241._fU28[0], "", 16 );
    g_U9241._fU148[1] = 0;
    g_U9241._fU112[1] = -1;
    StrCopy( ref g_U9241._fU28[1], "", 16 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_112() ))
        {
            GET_GAME_TIMER( ref g_U9241._fU0 );
            for ( I = 0; I <= 1; I++ )
            {
                switch (g_U9241._fU148[I])
                {
                    case 1:
                    if (((g_U9241._fU124[I] == 2) AND (g_U9241._fU112[I] == g_U9241._fU136[I])) || (g_U9241._fU124[I] == 1))
                    {
                        sub_314( I );
                        g_U9241._fU148[I] = 7;
                        break;
                    }
                    if (sub_447( I ))
                    {
                        if (I == 0)
                        {
                            PRINT_NOW( ref g_U9241._fU64[I], g_U9241._fU16[I] + 100, 1 );
                        }
                        else
                        {
                            PRINT_HELP( ref g_U9241._fU64[I] );
                        }
                    }
                    else
                    {
                        sub_314( I );
                        g_U9241._fU112[I] = -1;
                        g_U9241._fU148[I] = 0;
                        break;
                    }
                    g_U9241._fU4[I] = g_U9241._fU0 + g_U9241._fU16[I];
                    g_U9241._fU148[I] = 2;
                    break;
                    case 2:
                    if (I == 0)
                    {
                        if (g_U9241._fU0 >= g_U9241._fU4[I])
                        {
                            g_U9241._fU100[I]++;
                            g_U9241._fU112[I]++;
                            g_U9241._fU148[I] = 1;
                        }
                        else if (g_U9241._fU124[I] == 1)
                        {
                            sub_314( I );
                            g_U9241._fU148[I] = 7;
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U9241._fU64[I] )))
                    {
                        g_U9241._fU100[I]++;
                        g_U9241._fU112[I]++;
                        g_U9241._fU148[I] = 1;
                    }
                    else if (g_U9241._fU124[I] == 1)
                    {
                        sub_314( I );
                        g_U9241._fU148[I] = 7;
                    };;;
                    break;
                    case 3:
                    if (I == 0)
                    {
                        iVar3 = 0;
                    }
                    if (sub_447( I ))
                    {
                        iVar3++;
                        if (I == 0)
                        {
                            PRINT_NOW( ref g_U9241._fU64[I], g_U9241._fU16[I] + 100, 1 );
                        }
                        else
                        {
                            PRINT_HELP_FOREVER( ref g_U9241._fU64[I] );
                        }
                    }
                    if (I == 1)
                    {
                        if (iVar3 == 0)
                        {
                            sub_314( 0 );
                            g_U9241._fU112[0] = -1;
                            g_U9241._fU148[0] = 0;
                            sub_314( 1 );
                            g_U9241._fU112[1] = -1;
                            g_U9241._fU148[1] = 0;
                        }
                        else
                        {
                            g_U9241._fU4[0] = g_U9241._fU0 + g_U9241._fU16[0];
                            g_U9241._fU148[0] = 4;
                            g_U9241._fU4[1] = g_U9241._fU0 + g_U9241._fU16[1];
                            g_U9241._fU148[1] = 4;
                        }
                    }
                    break;
                    case 4:
                    if (I == 0)
                    {
                        if ((g_U9241._fU0 >= g_U9241._fU4[0]) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U9241._fU64[1] ))))
                        {
                            g_U9241._fU100[0]++;
                            g_U9241._fU112[0]++;
                            g_U9241._fU148[0] = 3;
                            g_U9241._fU100[1]++;
                            g_U9241._fU112[1]++;
                            g_U9241._fU148[1] = 3;
                        }
                        else if (g_U9241._fU124[0] == 1)
                        {
                            sub_314( 0 );
                            sub_314( 1 );
                            g_U9241._fU148[0] = 9;
                            g_U9241._fU148[1] = 9;
                        }
                    }
                    break;
                    case 7:
                    if (g_U9241._fU124[I] == 0)
                    {
                        g_U9241._fU148[I] = 1;
                    }
                    break;
                    case 9:
                    if (g_U9241._fU124[0] == 0)
                    {
                        g_U9241._fU148[0] = 3;
                        g_U9241._fU148[1] = 3;
                    }
                    break;
                }
            }
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_112()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_314(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_366( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_366(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

int sub_447(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    CLEAR_TEXT_LABEL( ref uVar3 );
    ConcatString(ref uVar3, ref g_U9241._fU28[uParam0], 16);
    ConcatString(ref uVar3, g_U9241._fU100[uParam0], 16);
    if (DOES_TEXT_LABEL_EXIST( ref uVar3 ))
    {
        CLEAR_TEXT_LABEL( ref g_U9241._fU64[uParam0] );
        g_U9241._fU64[uParam0] = {uVar3};
        return 1;
    }
    return 0;
}
