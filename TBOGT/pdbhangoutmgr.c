void main()
{
    l_U0 = 1;
    l_U1 = 0;
    l_U167 = -1;
    sub_28( l_U169 );
    while (true)
    {
        if (IS_PLAYER_PLAYING( sub_496() ))
        {
            if ((g_U8769) || (NOT g_U12379))
            {
                sub_557( 8 );
            }
            if ((NOT g_U8769) AND ((NOT g_U12379) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_585() )))))
            {
                TERMINATE_THIS_SCRIPT();
            }
            if (NOT sub_771())
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_28(unknown uParam0)
{
    int I;

    sub_37();
    if (DOES_BLIP_EXIST( g_U8637._fU0 ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PDBMostWanted" )) == 0)
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U8637._fU0 );
        }
    }
    else
    {
        sub_149( uParam0 );
        ADD_BLIP_FOR_COORD( g_U2832[uParam0]._fU60[0]._fU16._fU0, g_U2832[uParam0]._fU60[0]._fU16._fU4, g_U2832[uParam0]._fU60[0]._fU16._fU8, ref g_U8637._fU0 );
        CHANGE_BLIP_COLOUR( g_U8637._fU0, 5 );
        PRINT_NOW( "PDB_BLIPADD", 7500, 1 );
        for ( I = 0; I <= 3; I++ )
        {
            CHANGE_BLIP_DISPLAY( g_U8637._fU0, 0 );
            WAIT( 150 );
            CHANGE_BLIP_DISPLAY( g_U8637._fU0, 4 );
            WAIT( 150 );
        }
        SET_ROUTE( g_U8637._fU0, 1 );
        g_U8637._fU4 = {g_U2832[uParam0]._fU60[0]._fU16};
    }
    return;
}

void sub_37()
{
    g_U8637._fU4 = {-3000.00000000, -3000.00000000, -3000.00000000};
    return;
}

void sub_149(int iParam0)
{
    if ((iParam0 < 100) AND (iParam0 > -1))
    {
        g_U8642 = iParam0;
    }
    else
    {
        SCRIPT_ASSERT( "For some reason the index is out of bounds" );
    }
    return;
}

void sub_496()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_557(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U8637._fU0 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_585(), g_U8637._fU4._fU0, g_U8637._fU4._fU4, g_U8637._fU4._fU8, 50.00000000, 50.00000000, 15.00000000, 0 ))
        {
            SET_ROUTE( g_U8637._fU0, 0 );
            REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U8637._fU0 );
            g_U8637._fU0 = nil;
            return 1;
        }
    }
    return 0;
}

void sub_585()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_771()
{
    return DOES_BLIP_EXIST( g_U8637._fU0 );
}

