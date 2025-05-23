void main()
{
    l_U0 = 0;
    l_U12 = {-259.94930000, 703.54550000, 2.69900000};
    l_U15 = {-263.01930000, 702.34550000, 2.69900000};
    l_U18 = 407481427;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_87())
            {
                switch (l_U0)
                {
                    case 0:
                    if (sub_172())
                    {
                        l_U0 = 1;
                    }
                    break;
                    case 1: break;
                    case 2: break;
                }
            }
            else
            {
                sub_1099();
            }
        }
        else
        {
            sub_1099();
        }
    }
    return;
}

void sub_87()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Ray3" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

int sub_172()
{
    REQUEST_MODEL( l_U18 );
    if (HAS_MODEL_LOADED( l_U18 ))
    {
        CREATE_OBJECT( l_U18, l_U12._fU0, l_U12._fU4, l_U12._fU8, ref l_U1[0], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[0], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[0], 270.00000000 );
        CREATE_OBJECT( l_U18, l_U12._fU0, l_U12._fU4 + 1.47000000, l_U12._fU8, ref l_U1[1], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[1], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[1], 270.00000000 );
        CREATE_OBJECT( l_U18, l_U12._fU0, l_U12._fU4 + (1.47000000 * 2), l_U12._fU8, ref l_U1[2], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[2], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[2], 270.00000000 );
        CREATE_OBJECT( l_U18, l_U12._fU0, l_U12._fU4 + (1.47000000 * 3), l_U12._fU8, ref l_U1[3], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[3], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[3], 270.00000000 );
        CREATE_OBJECT( l_U18, l_U12._fU0, l_U12._fU4 + (1.47000000 * 4), l_U12._fU8, ref l_U1[4], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[4], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[4], 270.00000000 );
        CREATE_OBJECT( l_U18, l_U15._fU0, l_U15._fU4, l_U15._fU8, ref l_U1[5], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[5], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[5], 90.00000000 );
        CREATE_OBJECT( l_U18, l_U15._fU0, l_U15._fU4 + 1.47000000, l_U15._fU8, ref l_U1[6], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[6], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[6], 90.00000000 );
        CREATE_OBJECT( l_U18, l_U15._fU0, l_U15._fU4 + (1.47000000 * 2), l_U15._fU8, ref l_U1[7], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[7], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[7], 90.00000000 );
        CREATE_OBJECT( l_U18, l_U15._fU0, l_U15._fU4 + (1.47000000 * 3), l_U15._fU8, ref l_U1[8], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[8], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[8], 90.00000000 );
        CREATE_OBJECT( l_U18, l_U15._fU0, l_U15._fU4 + (1.47000000 * 4), l_U15._fU8, ref l_U1[9], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U1[9], "GTAMLOROOM01" );
        SET_OBJECT_HEADING( l_U1[9], 90.00000000 );
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U18 );
    }
    return 0;
}

void sub_1099()
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U1[I] ))
        {
            DELETE_OBJECT( ref l_U1[I] );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

