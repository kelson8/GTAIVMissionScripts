void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = {718.02100000, -254.87400000, 10.55200000};
    l_U6 = 155.00000000;
    l_U7 = {709.17100000, -250.72400000, 10.55200000};
    l_U10 = {677.75500000, -314.24600000, 10.44500000};
    l_U13 = 335.27300000;
    l_U14 = {697.57260000, -305.50410000, 10.05000000};
    l_U17 = 154.00000000;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_159())
            {
                switch (l_U2)
                {
                    case 0:
                    if (sub_220())
                    {
                        l_U2 = 1;
                    }
                    break;
                    case 1: break;
                    case 2: break;
                }
            }
            else
            {
                sub_669();
            }
        }
        else
        {
            sub_669();
        }
    }
    return;
}

void sub_159()
{
    int Result;

    Result = 1;
    return Result;
}

int sub_220()
{
    REQUEST_MODEL( 1185749008 );
    REQUEST_MODEL( 1983427299 );
    if ((HAS_MODEL_LOADED( 1983427299 )) AND (HAS_MODEL_LOADED( 1185749008 )))
    {
        CREATE_OBJECT( 1185749008, l_U3._fU0, l_U3._fU4, l_U3._fU8, ref l_U18[0], 1 );
        SET_OBJECT_HEADING( l_U18[0], l_U6 );
        FREEZE_OBJECT_POSITION( l_U18[0], 1 );
        CREATE_OBJECT( 1185749008, l_U7._fU0, l_U7._fU4, l_U7._fU8, ref l_U18[1], 1 );
        SET_OBJECT_HEADING( l_U18[1], l_U6 );
        FREEZE_OBJECT_POSITION( l_U18[1], 1 );
        CLEAR_AREA( l_U10._fU0, l_U10._fU4, l_U10._fU8, 2.00000000, 0 );
        CREATE_OBJECT_NO_OFFSET( 1983427299, l_U10._fU0, l_U10._fU4, l_U10._fU8, ref l_U21, 1 );
        SET_OBJECT_HEADING( l_U21, l_U13 );
        FREEZE_OBJECT_POSITION( l_U21, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U21, "GtaMloRoom02" );
        CLEAR_AREA( l_U14._fU0, l_U14._fU4, l_U14._fU8, 2.00000000, 0 );
        CREATE_OBJECT_NO_OFFSET( 1983427299, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U22, 1 );
        SET_OBJECT_HEADING( l_U22, l_U17 );
        FREEZE_OBJECT_POSITION( l_U22, 1 );
        return 1;
    }
    else
    {
        REQUEST_MODEL( 1185749008 );
        REQUEST_MODEL( 1983427299 );
    }
    return 0;
}

void sub_669()
{
    if (DOES_OBJECT_EXIST( l_U18[0] ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U18[0] );
    }
    if (DOES_OBJECT_EXIST( l_U18[1] ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U18[1] );
    }
    if (DOES_OBJECT_EXIST( l_U21 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U21 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

