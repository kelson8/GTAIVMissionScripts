void main()
{
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            sub_42();
        }
        sub_773( 0 );
        sub_842();
        sub_915();
        sub_1318();
        sub_1600();
        sub_2307();
    }
    return;
}

void sub_42()
{
    sub_51();
    sub_349();
    sub_509();
    sub_708();
    g_U9200 = 0;
    g_U9199 = 0;
    TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME( "drunk" );
    return;
}

void sub_51()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        sub_77( I );
    }
    return;
}

void sub_77(int iParam0)
{
    if ((iParam0 >= 5) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Clear_One_Drunk_Request: array index out of bounds" );
        return;
    }
    if (NOT (g_U9074[iParam0]._fU4 == nil))
    {
        if (g_U9074[iParam0]._fU4 == sub_194())
        {
            g_U9199 = 0;
        }
    }
    g_U9074[iParam0]._fU0 = 16;
    g_U9074[iParam0]._fU4 = nil;
    g_U9074[iParam0]._fU8 = 0;
    g_U9074[iParam0]._fU12 = 0;
    g_U9074[iParam0]._fU16 = nil;
    g_U9074[iParam0]._fU20 = nil;
    return;
}

void sub_194()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_349()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        sub_375( I );
    }
    return;
}

void sub_375(int iParam0)
{
    if ((iParam0 >= 5) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Clear_One_Drunk_Ped: array index out of bounds" );
        return;
    }
    g_U9105[iParam0]._fU0 = -1;
    g_U9105[iParam0]._fU4 = nil;
    return;
}

void sub_509()
{
    int I;

    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        sub_535( I );
    }
    return;
}

void sub_535(int iParam0)
{
    if ((iParam0 >= 16) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Clear_One_Drunk_Notice: array index out of bounds" );
        return;
    }
    g_U9116[iParam0]._fU0 = -1;
    g_U9116[iParam0]._fU4 = -1;
    g_U9116[iParam0]._fU8 = 5;
    g_U9116[iParam0]._fU12 = nil;
    g_U9116[iParam0]._fU16 = 0;
    return;
}

void sub_708()
{
    g_U9197 = 0;
    g_U9198 = 0;
    return;
}

void sub_773(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0 == g_U9116[I]._fU0)
        {
            sub_535( I );
        }
    }
    return;
}

void sub_842()
{
    int I;

    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (g_U9116[I]._fU0 == 1)
        {
            g_U9116[I]._fU0 = 0;
        }
    }
    return;
}

void sub_915()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = -1;
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (g_U9105[I]._fU0 == -1))
        {
            iVar3 = sub_973( g_U9105[I]._fU0, 0 );
            if (iVar3 == -1)
            {
                sub_1082( g_U9105[I]._fU0 );
            }
            else
            {
                sub_535( iVar3 );
            }
        }
    }
    return;
}

int sub_973(int iParam0, int iParam1)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (iParam1 == g_U9116[Result]._fU8)
        {
            if (iParam0 == g_U9116[Result]._fU0)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_1082(unknown uParam0)
{
    int iVar3;

    sub_1093( uParam0 );
    iVar3 = sub_1190( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    sub_375( iVar3 );
    return;
}

void sub_1093(unknown uParam0)
{
    sub_773( uParam0 );
    sub_1111( uParam0 );
    return;
}

void sub_1111(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0 == g_U9116[I]._fU4)
        {
            sub_535( I );
        }
    }
    return;
}

int sub_1190(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9105[Result]._fU0 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

void sub_1318()
{
    int iVar2;
    int I;

    iVar2 = 5;
    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        iVar2 = g_U9116[I]._fU8;
        if (NOT (iVar2 == 5))
        {
            if (g_U9116[I]._fU4 == 0)
            {
                sub_1388( I );
                sub_535( I );
            }
        }
    }
    return;
}

void sub_1388(unknown uParam0)
{
    unknown uVar3;

    uVar3 = g_U9116[uParam0]._fU8;
    switch (uVar3)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: break;
        default:
        SCRIPT_ASSERT( "drunk: Read_This_Drunk_Controller_Notice - Unknown Drunk Notice ID. Tell Keith." );
        break;
    }
    return;
}

void sub_1600()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U9074[I]._fU0 == 0)
        {
            sub_1644( I );
        }
    }
    return;
}

void sub_1644(int iParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if ((iParam0 >= 5) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Maintain_One_Drunk_Request: array index out of bounds" );
        return;
    }
    if (IS_CHAR_DEAD( g_U9074[iParam0]._fU4 ))
    {
        sub_77( iParam0 );
        return;
    }
    if (sub_1777( g_U9074[iParam0]._fU4 ))
    {
        sub_77( iParam0 );
        return;
    }
    if (NOT (HAS_SCRIPT_LOADED( "drunk" )))
    {
        REQUEST_SCRIPT( "drunk" );
        return;
    }
    iVar3 = sub_1977();
    if (iVar3 == -1)
    {
        sub_77( iParam0 );
        SCRIPT_ASSERT( "All drunk ped slots are full - Tell Keith to increase MAX_NUMBER_OF_DRUNK_PEDS" );
        return;
    }
    g_U9105[iVar3]._fU0 = sub_2153();
    g_U9105[iVar3]._fU4 = g_U9074[iParam0]._fU4;
    uVar4 = {g_U9074[iParam0]};
    START_NEW_SCRIPT_WITH_ARGS( "drunk", ref uVar4, 6, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "drunk" );
    sub_77( iParam0 );
    return;
}

int sub_1777(int iParam0)
{
    if (iParam0 == nil)
    {
        return 0;
    }
    if ((sub_1802( iParam0 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_1802(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

int sub_1977()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9105[Result]._fU0 == -1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_2153()
{
    unknown Result;

    Result = g_U9073;
    g_U9073++;
    return Result;
}

void sub_2307()
{
    int iVar2;

    if (NOT g_U9197)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U9198)
    {
        return;
    }
    sub_708();
    return;
}

