// This might be useful to try to use in my scripts.
// TODO Play around with this, try to make these work on my stripped main.

void main()
{
    l_U0 = 0;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_39())
            {
                switch (l_U0)
                {
                    case 0:
                    if (sub_124())
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
                sub_879();
            }
        }
        else
        {
            sub_879();
        }
    }
    return;
}

void sub_39()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Ray1" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

int sub_124()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    REQUEST_MODEL( 135553133 );
    REQUEST_MODEL( -16333017 );
    REQUEST_MODEL( 1667998832 );
    if ((HAS_MODEL_LOADED( 1667998832 )) AND ((HAS_MODEL_LOADED( -16333017 )) AND (HAS_MODEL_LOADED( 135553133 ))))
    {
        CREATE_OBJECT_NO_OFFSET( 135553133, -544.81900000, 1257.20000000, 18.04000000, ref uVar2, 1 );
        if (DOES_OBJECT_EXIST( uVar2 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( uVar2, "ProjectF1_MloRoom" );
            SET_OBJECT_HEADING( uVar2, 80.44999000 );
            FREEZE_OBJECT_POSITION( uVar2, 1 );
        }
        CREATE_OBJECT_NO_OFFSET( 135553133, -544.31900000, 1260.49900000, 18.04000000, ref uVar3, 1 );
        if (DOES_OBJECT_EXIST( uVar3 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( uVar3, "ProjectF1_MloRoom" );
            SET_OBJECT_HEADING( uVar3, 80.00000000 );
            FREEZE_OBJECT_POSITION( uVar3, 1 );
        }
        CREATE_OBJECT_NO_OFFSET( -16333017, -543.12300000, 1260.33400000, 17.84000000, ref uVar4, 1 );
        if (DOES_OBJECT_EXIST( uVar4 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( uVar4, "ProjectF1_MloRoom" );
            SET_OBJECT_HEADING( uVar4, 80.00000000 );
            FREEZE_OBJECT_POSITION( uVar4, 1 );
        }
        CREATE_OBJECT_NO_OFFSET( 1667998832, -543.11900000, 1260.29900000, 17.84000000, ref uVar5, 1 );
        if (DOES_OBJECT_EXIST( uVar5 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( uVar5, "ProjectF1_MloRoom" );
            SET_OBJECT_HEADING( uVar5, 80.00000000 );
            FREEZE_OBJECT_POSITION( uVar5, 1 );
        }
        CREATE_OBJECT_NO_OFFSET( -16333017, -543.12300000, 1260.33400000, 89.81550000, ref uVar6, 1 );
        if (DOES_OBJECT_EXIST( uVar6 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( uVar6, "ProjectSG_MloRoom1" );
            SET_OBJECT_HEADING( uVar6, 80.00000000 );
            FREEZE_OBJECT_POSITION( uVar6, 1 );
        }
        CREATE_OBJECT_NO_OFFSET( 1667998832, -543.11900000, 1260.29900000, 89.81550000, ref uVar7, 1 );
        if (DOES_OBJECT_EXIST( uVar7 ))
        {
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( uVar7, "ProjectSG_MloRoom1" );
            SET_OBJECT_HEADING( uVar7, 80.00000000 );
            FREEZE_OBJECT_POSITION( uVar7, 1 );
        }
        return 1;
    }
    else
    {
        REQUEST_MODEL( 135553133 );
        REQUEST_MODEL( -16333017 );
        REQUEST_MODEL( 1667998832 );
    }
    return 0;
}

void sub_879()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

