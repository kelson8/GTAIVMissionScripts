void main()
{
    l_U0 = 0;
    l_U1 = 1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U0 = 0;
    while (sub_28())
    {
        WAIT( 0 );
        if (NOT (IS_PLAYER_PLAYING( sub_515() )))
        {
            sub_559();
        }
    }
    sub_700();
    sub_805( "ROMAN MARKER (help script): should never reach ENDSCRIPT" );
    return;
}

int sub_28()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman2" )) > 0)
    {
        return 0;
    }
    if (g_U9788[1]._fU0)
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_83() ))
    {
        return 1;
    }
    if (g_U10978)
    {
        return 1;
    }
    if (NOT g_U9387[1]._fU24)
    {
        return 1;
    }
    GET_CHAR_COORDINATES( sub_83(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    uVar5 = {g_U9387[1]._fU0};
    fVar8 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref fVar8 );
    if (l_U0)
    {
        if (fVar8 > 12.00000000)
        {
            l_U0 = 0;
        }
    }
    else if (fVar8 < 10.00000000)
    {
        if (sub_298( l_U1 ))
        {
            l_U0 = 1;
            PRINT_HELP( "ROMMARK" );
        }
    }
    return 1;
}

void sub_83()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_298(int iParam0)
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

void sub_515()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_559()
{
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ROMMARK" ))
    {
        CLEAR_HELP();
    }
    sub_600( l_U1 );
    return;
}

void sub_600(unknown uParam0)
{
    if (NOT (sub_611( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

boolean sub_611(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_700()
{
    sub_709();
    return;
}

void sub_709()
{
    sub_559();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_805(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

