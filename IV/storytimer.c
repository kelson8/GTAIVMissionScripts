void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 1000 );
        sub_58();
    }
    return;
}

void sub_58()
{
    unknown uVar2;
    float fVar3;

    if (sub_67() == 0)
    {
        uVar2 = GET_INT_STAT( 44 );
        fVar3 = TO_FLOAT( uVar2 );
        fVar3 /= 1000;
        fVar3 /= 60;
        fVar3 /= 60;
        g_U9072 = fVar3;
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    sub_194();
    return;
}

int sub_67()
{
    if ((HAS_ACHIEVEMENT_BEEN_PASSED( 39 )) || (g_U9072 > 31))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_194()
{
    if (sub_203() == 1)
    {
        if (g_U9072 <= 30)
        {
            AWARD_ACHIEVEMENT( 39 );
        }
    }
    return;
}

int sub_203()
{
    if ((g_U9069 == 1) AND (g_U9068 == 1))
    {
        return 1;
    }
    return 0;
}

