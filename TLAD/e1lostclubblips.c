void main()
{
    boolean bVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U6 = nil;
    l_U7 = nil;
    l_U8 = nil;
    l_U9 = nil;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    g_U39169 = sub_64();
    while (true)
    {
        if (g_U15728[18])
        {
            sub_251();
            sub_479();
            sub_530();
            sub_581();
            sub_632();
            TERMINATE_THIS_SCRIPT();
        }
        bVar2 = sub_64();
        if (bVar2)
        {
            if (NOT g_U39169)
            {
                sub_251();
                sub_722();
                sub_1212();
                sub_1370();
                sub_1525();
            }
            sub_1631();
            sub_1753();
            sub_1844();
        }
        else if (g_U39169)
        {
            sub_1949();
            sub_479();
            sub_530();
            sub_581();
            sub_632();
        }
        g_U39169 = bVar2;
        WAIT( 0 );
    }
    return;
}

int sub_64()
{
    int iVar2;

    if (IS_CHAR_DEAD( sub_73() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_IN_AREA_3D( sub_73(), -1745.00000000, 300.00000000, 20.00000000, -1680.00000000, 365.00000000, 45.00000000, 0 )))
    {
        return 0;
    }
    iVar2 = nil;
    GET_INTERIOR_FROM_CHAR( sub_73(), ref iVar2 );
    if (iVar2 == nil)
    {
        return 0;
    }
    return 1;
}

void sub_73()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_251()
{
    PRINTSTRING( "-------------------------------------------> Switch_Off_Savehouse_Blip?\n" );
    if (NOT g_U11005[0]._fU0)
    {
        return;
    }
    if (NOT (DOES_BLIP_EXIST( g_U11005[0]._fU32 )))
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( g_U11005[0]._fU32, 0 );
    PRINTSTRING( "----------------------------------------------> YES\n" );
    return;
}

void sub_479()
{
    if (NOT (DOES_BLIP_EXIST( l_U6 )))
    {
        return;
    }
    REMOVE_BLIP( l_U6 );
    l_U6 = nil;
    return;
}

void sub_530()
{
    if (NOT (DOES_BLIP_EXIST( l_U7 )))
    {
        return;
    }
    REMOVE_BLIP( l_U7 );
    l_U7 = nil;
    return;
}

void sub_581()
{
    if (NOT (DOES_BLIP_EXIST( l_U8 )))
    {
        return;
    }
    REMOVE_BLIP( l_U8 );
    l_U8 = nil;
    return;
}

void sub_632()
{
    if (NOT (DOES_BLIP_EXIST( l_U9 )))
    {
        return;
    }
    REMOVE_BLIP( l_U9 );
    l_U9 = nil;
    return;
}

void sub_722()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "hi_lo_cards" )) < 1)
    {
        return;
    }
    if (g_U12303)
    {
        if (NOT (sub_773( 5 )))
        {
            return;
        }
    }
    if (NOT g_U10460)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U6 ))
    {
        return;
    }
    if (NOT g_U26737._fU4)
    {
        return;
    }
    ADD_BLIP_FOR_COORD( -1726.06900000, 329.83070000, 30.10120000, ref l_U6 );
    CHANGE_BLIP_DISPLAY( l_U6, 2 );
    CHANGE_BLIP_SPRITE( l_U6, 112 );
    CHANGE_BLIP_PRIORITY( l_U6, 0 );
    return;
}

int sub_773(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12303)
    {
        return 1;
    }
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_817( iParam0 ))
    {
        return 0;
    }
    if (sub_876( g_U26739._fU0 ))
    {
        if (NOT (sub_908( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_817(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_876(unknown uParam0)
{
    return 0;
}

int sub_908(unknown uParam0, unknown uParam1)
{
    return 1;
}

void sub_1212()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "arm_wrestling" )) < 1)
    {
        return;
    }
    if (NOT g_U10460)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U7 ))
    {
        return;
    }
    if (NOT g_U26737._fU4)
    {
        return;
    }
    ADD_BLIP_FOR_COORD( -1714.98000000, 347.07860000, 30.72680000, ref l_U7 );
    CHANGE_BLIP_DISPLAY( l_U7, 2 );
    CHANGE_BLIP_SPRITE( l_U7, 110 );
    CHANGE_BLIP_PRIORITY( l_U7, 0 );
    return;
}

void sub_1370()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "pool_table" )) < 1)
    {
        return;
    }
    if (NOT g_U10460)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U8 ))
    {
        return;
    }
    if (NOT g_U26737._fU4)
    {
        return;
    }
    ADD_BLIP_FOR_COORD( -1723.31800000, 349.94210000, 30.72680000, ref l_U8 );
    CHANGE_BLIP_DISPLAY( l_U8, 2 );
    CHANGE_BLIP_SPRITE( l_U8, 46 );
    CHANGE_BLIP_PRIORITY( l_U8, 0 );
    return;
}

void sub_1525()
{
    if (g_U12303)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U9 ))
    {
        return;
    }
    ADD_BLIP_FOR_COORD( -1720.46900000, 337.21990000, 25.34170000, ref l_U9 );
    CHANGE_BLIP_DISPLAY( l_U9, 2 );
    CHANGE_BLIP_SPRITE( l_U9, 29 );
    CHANGE_BLIP_PRIORITY( l_U9, 0 );
    return;
}

void sub_1631()
{
    if (DOES_BLIP_EXIST( l_U6 ))
    {
        if ((NOT g_U10460) || ((NOT g_U26737._fU4) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "hi_lo_cards" )) < 1)))
        {
            sub_479();
            return;
        }
        if (g_U12303)
        {
            if (NOT (sub_773( 5 )))
            {
                sub_479();
                return;
            }
        }
        return;
    }
    sub_722();
    return;
}

void sub_1753()
{
    if (DOES_BLIP_EXIST( l_U7 ))
    {
        if ((NOT g_U10460) || ((NOT g_U26737._fU4) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "arm_wrestling" )) < 1)))
        {
            sub_530();
        }
        return;
    }
    sub_1212();
    return;
}

void sub_1844()
{
    if (DOES_BLIP_EXIST( l_U8 ))
    {
        if ((NOT g_U10460) || ((NOT g_U26737._fU4) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "pool_table" )) < 1)))
        {
            sub_581();
        }
        return;
    }
    sub_1370();
    return;
}

void sub_1949()
{
    PRINTSTRING( "-------------------------------------------> Switch_On_Savehouse_Blip?\n" );
    if (NOT g_U11005[0]._fU0)
    {
        return;
    }
    if (NOT (DOES_BLIP_EXIST( g_U11005[0]._fU32 )))
    {
        return;
    }
    if (NOT g_U26737._fU4)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( g_U11005[0]._fU32, 2 );
    PRINTSTRING( "----------------------------------------------> YES\n" );
    return;
}

