void main()
{
    l_U6 = -1;
    l_U7 = -1;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 1.70000000;
    l_U0 = {l_U18};
    sub_41();
    sub_171();
    sub_231();
    sub_319( l_U6, 0, 0 );
    SETTIMERA( 0 );
    sub_971();
    sub_1020();
    while (true)
    {
        WAIT( 0 );
        sub_1147( l_U6 );
        sub_1365();
        sub_1712();
        sub_319( l_U6, 0, 0 );
        sub_41();
        sub_171();
        sub_2246();
    }
    return;
}

void sub_41()
{
    if (NOT (l_U6 == -1))
    {
        return;
    }
    l_U6 = sub_69( l_U0._fU4 );
    return;
}

int sub_69(int iParam0)
{
    int I;

    if (iParam0 == nil)
    {
        return -1;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (iParam0 == g_U9105[I]._fU4)
        {
            return g_U9105[I]._fU0;
        }
    }
    return -1;
}

void sub_171()
{
    if (l_U0._fU16 == nil)
    {
        return;
    }
    if (NOT (l_U7 == -1))
    {
        return;
    }
    l_U7 = sub_69( l_U0._fU16 );
    return;
}

void sub_231()
{
    l_U8 = 0;
    if (l_U0._fU4 == sub_249())
    {
        l_U8 = 1;
        g_U9200 = 1;
    }
    return;
}

void sub_249()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_319(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_336( uParam0, uParam1, uParam2, 0, 0 );
    return;
}

void sub_336(int iParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for poster is unknown" );
        return;
    }
    if (iParam1 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for reader is unknown" );
        return;
    }
    if (iParam2 == 5)
    {
        SCRIPT_ASSERT( "Post_Notice: Notice ID is unknown" );
        return;
    }
    if (sub_558( iParam0, iParam1, iParam2 ))
    {
        return;
    }
    iVar7 = sub_707();
    if (iVar7 == -1)
    {
        SCRIPT_ASSERT( "All drunk notice slots are full - Tell Keith to increase MAX_NUMBER_OF_DRUNK_NOTICES" );
        return;
    }
    g_U9116[iVar7]._fU0 = iParam0;
    g_U9116[iVar7]._fU4 = iParam1;
    g_U9116[iVar7]._fU8 = iParam2;
    g_U9116[iVar7]._fU12 = uParam3;
    g_U9116[iVar7]._fU16 = uParam4;
    return;
}

int sub_558(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_573( uParam0, uParam1, uParam2 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_573(int iParam0, int iParam1, int iParam2)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (iParam2 == g_U9116[Result]._fU8)
        {
            if (iParam0 == g_U9116[Result]._fU0)
            {
                if (iParam1 == g_U9116[Result]._fU4)
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_707()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (g_U9116[Result]._fU8 == 5)
        {
            return Result;
        }
    }
    return -1;
}

void sub_971()
{
    l_U11._fU0 = l_U0._fU8;
    l_U11._fU4 = l_U0._fU12;
    l_U11._fU8 = -1;
    l_U11._fU12 = -1;
    return;
}

void sub_1020()
{
    l_U16._fU0 = 4;
    if (NOT (IS_CHAR_DEAD( l_U0._fU4 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U0._fU4 ))
        {
            l_U16._fU0 = 13;
        }
    }
    if (l_U8)
    {
        l_U16._fU4 = 1;
        return;
    }
    if (NOT (l_U0._fU16 == nil))
    {
        l_U16._fU4 = 2;
        return;
    }
    l_U16._fU4 = 15;
    return;
}

void sub_1147(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0 == g_U9116[I]._fU0)
        {
            sub_1192( I );
        }
    }
    return;
}

void sub_1192(int iParam0)
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

void sub_1365()
{
    if (NOT (l_U11._fU0 == -1))
    {
        if (TIMERA() >= l_U11._fU0)
        {
            sub_1405();
            l_U11._fU0 = -1;
            l_U16._fU0 = 15;
        }
    }
    if (TIMERA() > l_U11._fU4)
    {
        sub_1545();
    }
    return;
}

void sub_1405()
{
    if (IS_CHAR_INJURED( l_U0._fU4 ))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( l_U0._fU4 )))
    {
        return;
    }
    if (NOT l_U9)
    {
        return;
    }
    CREATE_NM_MESSAGE( 0, 79 );
    SEND_NM_MESSAGE( l_U0._fU4 );
    SWITCH_PED_TO_ANIMATED( l_U0._fU4, 0 );
    l_U9 = 0;
    return;
}

void sub_1545()
{
    sub_1405();
    if (l_U8)
    {
        g_U9200 = 0;
    }
    sub_1573();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1573()
{
    unknown uVar2;
    int iVar3;

    if (IS_CHAR_DEAD( l_U0._fU4 ))
    {
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( l_U0._fU4 )))
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U0._fU4, ref uVar2 );
    iVar3 = nil;
    GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
    if (NOT (l_U0._fU4 == iVar3))
    {
        return;
    }
    SET_VEHICLE_STEER_BIAS( uVar2, 0.00000000 );
    return;
}

void sub_1712()
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
            if (g_U9116[I]._fU4 == l_U6)
            {
                sub_1784( I );
                sub_1192( I );
            }
            else if (g_U9116[I]._fU4 == 2)
            {
                if (NOT (l_U7 == -1))
                {
                    if (l_U7 == g_U9116[I]._fU0)
                    {
                        sub_1784( I );
                    }
                }
            }
        }
    }
    return;
}

void sub_1784(unknown uParam0)
{
    unknown uVar3;

    uVar3 = g_U9116[uParam0]._fU8;
    switch (uVar3)
    {
        case 1:
        sub_1545();
        break;
        case 2:
        sub_1884( g_U9116[uParam0]._fU12 );
        break;
        case 3:
        sub_1962( g_U9116[uParam0]._fU16 );
        break;
        case 4:
        sub_2010();
        break;
        case 0: break;
        case 5: break;
        default:
        SCRIPT_ASSERT( "drunk: Read_This_Drunk_Notice - Unknown Drunk Notice ID. Tell Keith." );
        break;
    }
    return;
}

void sub_1884(int iParam0)
{
    if (NOT (iParam0 == nil))
    {
        if (NOT (DOES_CHAR_EXIST( iParam0 )))
        {
            return;
        }
    }
    l_U0._fU16 = iParam0;
    l_U7 = -1;
    sub_171();
    return;
}

void sub_1962(int iParam0)
{
    l_U0._fU12 = l_U0._fU8 + iParam0;
    l_U11._fU4 = l_U11._fU0 + iParam0;
    return;
}

void sub_2010()
{
    l_U16._fU4 = 3;
    return;
}

void sub_2246()
{
    boolean bVar2;

    if (IS_CHAR_DEAD( l_U0._fU4 ))
    {
        sub_1545();
    }
    if (l_U8)
    {
        if (NOT (IS_PLAYER_PLAYING( sub_2285() )))
        {
            sub_1545();
        }
    }
    sub_2334();
    bVar2 = true;
    switch (l_U16._fU0)
    {
        case 4:
        sub_3071();
        return;
        case 5:
        sub_3761();
        return;
        case 6:
        sub_3940();
        return;
        case 7:
        sub_4137();
        return;
        case 8:
        sub_4195();
        return;
        case 9:
        sub_4319();
        return;
        case 10:
        sub_5740();
        return;
        case 11:
        sub_7226();
        return;
        case 12:
        sub_7305();
        return;
        case 13:
        sub_7518();
        sub_7739();
        sub_8609();
        return;
        case 14:
        sub_8937();
        return;
        case 15: break;
        default:
        bVar2 = false;
        break;
    }
    if (NOT bVar2)
    {
        SCRIPT_ASSERT( "drunk: Maintain_Being_Drunk(): Found a ped with an illegal Short-Term Status" );
        return;
    }
    if (NOT (l_U16._fU0 == 15))
    {
        SCRIPT_ASSERT( "drunk: Maintain_Being_Drunk(): Long-term status for a ped is being checked but their Short-term Status is not Idle" );
        return;
    }
    switch (l_U16._fU4)
    {
        case 1:
        if (NOT sub_9278())
        {
            sub_3788();
        }
        break;
        case 2:
        sub_9809();
        break;
        case 3:
        sub_10214();
        break;
        case 15:
        sub_10589();
        break;
        default:
        SCRIPT_ASSERT( "drunk: Maintain_Being_Drunk(): Found a ped with an illegal long-term Status" );
        break;
    }
    return;
}

void sub_2285()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2334()
{
    if (sub_2343())
    {
        return;
    }
    return;
}

int sub_2343()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    boolean bVar8;
    boolean bVar9;

    switch (l_U16._fU0)
    {
        case 6:
        case 7:
        case 8: return 1;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14: return 0;
        case 4:
        case 5:
        case 9:
        case 15: break;
        default:
        SCRIPT_ASSERT( "drunk: Check_If_Falling(): Unknown short term status. Tell Keith." );
        break;
    }
    uVar2 = {sub_2553()};
    fVar5 = uVar2._fU8 + 2.00000000;
    fVar6 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, fVar5, ref fVar6 );
    fVar7 = uVar2._fU8 - fVar6;
    if (fVar7 < 0)
    {
        fVar7 *= -1.00000000;
    }
    bVar8 = false;
    if (fVar7 > 1.20000000)
    {
        bVar8 = true;
    }
    bVar9 = true;
    if (bVar8)
    {
        if (IS_PED_RAGDOLL( l_U0._fU4 ))
        {
            if (CHECK_NM_FEEDBACK( l_U0._fU4, 80, 1 ))
            {
                bVar9 = false;
            }
        }
    }
    if ((NOT bVar8) || (NOT bVar9))
    {
        l_U16._fU0 = 6;
        l_U11._fU8 = -1;
        l_U11._fU12 = TIMERA() + 3000;
        return 1;
    }
    return 0;
}

void sub_2553()
{
    unknown Result;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;

    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    if (WAS_PED_SKELETON_UPDATED( l_U0._fU4 ))
    {
        GET_PED_BONE_POSITION( l_U0._fU4, 1205, 0.00000000, 0.00000000, 0.00000000, ref Result );
        fVar5 = Result._fU8 + 1.00000000;
        GET_GROUND_Z_FOR_3D_COORD( Result._fU0, Result._fU4, fVar5, ref fVar6 );
        l_U10 = Result._fU8 - fVar6;
    }
    else
    {
        GET_CHAR_COORDINATES( l_U0._fU4, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        fVar5 = Result._fU8 + 2.00000000;
        GET_GROUND_Z_FOR_3D_COORD( Result._fU0, Result._fU4, fVar5, ref fVar6 );
        Result._fU8 = fVar6 + l_U10;
    }
    return Result;
}

void sub_3071()
{
    if (IS_CHAR_IN_ANY_CAR( l_U0._fU4 ))
    {
        l_U16._fU0 = 13;
        return;
    }
    if (IS_PED_RAGDOLL( l_U0._fU4 ))
    {
        l_U16._fU0 = 15;
        return;
    }
    if (l_U11._fU0 == -1)
    {
        return;
    }
    if (NOT sub_3147())
    {
        return;
    }
    l_U16._fU0 = 15;
    return;
}

int sub_3147()
{
    int iVar2;

    iVar2 = sub_3156();
    if (iVar2 == -1)
    {
        return 0;
    }
    if (IS_CHAR_INJURED( l_U0._fU4 ))
    {
        return 0;
    }
    if ((IS_CHAR_GETTING_IN_TO_A_CAR( l_U0._fU4 )) || (IS_CHAR_IN_ANY_CAR( l_U0._fU4 )))
    {
        return 0;
    }
    if (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U0._fU4 ))
    {
        return 0;
    }
    if (NOT (SWITCH_PED_TO_RAGDOLL( l_U0._fU4, 0, iVar2, 1, 1, 1, 0 )))
    {
        return 0;
    }
    if (NOT (IS_PED_RAGDOLL( l_U0._fU4 )))
    {
        return 0;
    }
    CREATE_NM_MESSAGE( 1, 79 );
    SET_NM_MESSAGE_FLOAT( 89, 8.70000000 );
    SET_NM_MESSAGE_FLOAT( 98, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 81, 8.39999900 );
    SET_NM_MESSAGE_FLOAT( 82, 0.70000000 );
    SET_NM_MESSAGE_INT( 85, 65535 );
    SET_NM_MESSAGE_BOOL( 95, 1 );
    SET_NM_MESSAGE_FLOAT( 101, 0.80000000 );
    SET_NM_MESSAGE_FLOAT( 102, 999.00000000 );
    SET_NM_MESSAGE_FLOAT( 84, 1.40000000 );
    SET_NM_MESSAGE_FLOAT( 83, 1.95000000 );
    SET_NM_MESSAGE_FLOAT( 94, 1.00000000 );
    SET_NM_MESSAGE_FLOAT( 110, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 111, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 112, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 108, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 113, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 109, 0.20000000 );
    SET_NM_MESSAGE_FLOAT( 91, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 93, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 106, -0.30000000 );
    SEND_NM_MESSAGE( l_U0._fU4 );
    if (l_U8)
    {
        GIVE_PLAYER_RAGDOLL_CONTROL( sub_2285(), 1 );
    }
    l_U9 = 1;
    return 1;
}

void sub_3156()
{
    int Result;

    if (l_U11._fU0 == -1)
    {
        return -1;
    }
    Result = l_U11._fU0 - TIMERA();
    if (Result < 0)
    {
        return -1;
    }
    if (Result > 65534)
    {
        Result = 65534;
    }
    return Result;
}

void sub_3761()
{
    if (TIMERA() < l_U11._fU8)
    {
        sub_3788();
        return;
    }
    sub_3844();
    l_U11._fU8 = -1;
    l_U16._fU0 = 15;
    return;
}

void sub_3788()
{
    if (NOT l_U9)
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( l_U0._fU4 )))
    {
        sub_3147();
    }
    return;
}

void sub_3844()
{
    if (NOT (IS_PED_RAGDOLL( l_U0._fU4 )))
    {
        return;
    }
    if (NOT l_U9)
    {
        return;
    }
    CREATE_NM_MESSAGE( 0, 119 );
    SEND_NM_MESSAGE( l_U0._fU4 );
    return;
}

void sub_3940()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (TIMERA() > l_U11._fU12)
    {
        l_U11._fU12 = -1;
        l_U11._fU8 = TIMERA() + 100;
        l_U16._fU0 = 7;
        return;
    }
    GET_CHAR_VELOCITY( l_U0._fU4, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if ((VMAG( uVar2 )) < 0.10000000)
    {
        if (l_U11._fU8 == -1)
        {
            l_U11._fU8 = TIMERA() + 1000;
            return;
        }
        if (TIMERA() > l_U11._fU8)
        {
            l_U11._fU12 = -1;
            l_U11._fU8 = TIMERA() + 100;
            l_U16._fU0 = 7;
            return;
        }
    }
    l_U11._fU8 = -1;
    return;
}

void sub_4137()
{
    if (TIMERA() < l_U11._fU8)
    {
        return;
    }
    l_U11._fU8 = -1;
    l_U16._fU0 = 8;
    sub_1405();
    return;
}

void sub_4195()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    uVar2 = {sub_2553()};
    fVar5 = uVar2._fU8 + 2.00000000;
    fVar6 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, fVar5, ref fVar6 );
    fVar7 = uVar2._fU8 - fVar6;
    if (fVar7 < 0)
    {
        fVar7 *= -1.00000000;
    }
    if (fVar7 < 1.20000000)
    {
        return;
    }
    l_U11._fU8 = -1;
    l_U16._fU0 = 4;
    return;
}

void sub_4319()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;
    int iVar10;
    boolean bVar11;

    PRINTSTRING( "KGM.....Maintain_ShortTerm_Status_Enter_Vehicle\n" );
    if (l_U8)
    {
        SCRIPT_ASSERT( "drunk: Maintain_ShortTerm_Status_Enter_Vehicle(): ped should not be player" );
        return;
    }
    if (l_U0._fU20 == nil)
    {
        PRINTSTRING( "KGM........vehicle is NULL\n" );
        l_U16._fU0 = 4;
        return;
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U0._fU20 )))
    {
        PRINTSTRING( "KGM........vehicle is not driveable\n" );
        l_U0._fU20 = nil;
        l_U16._fU0 = 4;
        return;
    }
    GET_CHAR_COORDINATES( l_U0._fU4, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CAR_COORDINATES( l_U0._fU20, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    fVar8 = sub_4668( uVar2, uVar5 );
    if (fVar8 > 3.00000000)
    {
        PRINTSTRING( "KGM........still a bit far away\n" );
        if (NOT (sub_4796( uVar5, 1045220557 )))
        {
            l_U16._fU0 = 15;
            return;
        }
        l_U16._fU0 = 5;
        l_U11._fU8 = TIMERA() + 2000;
        return;
    }
    iVar9 = 0;
    GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U0._fU20, ref iVar9 );
    iVar10 = 0;
    bVar11 = true;
    if (sub_5086( l_U0._fU16 ))
    {
        iVar10 = 1;
    }
    while (bVar11)
    {
        if (iVar10 < iVar9)
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( l_U0._fU20, iVar10 ))
            {
                PRINTSTRING( "KGM........found an empty car seat\n" );
                bVar11 = false;
            }
            else
            {
                iVar10++;
            }
        }
        else
        {
            bVar11 = false;
            iVar10 = -1;
        }
    }
    if (iVar10 == -1)
    {
        if (NOT (sub_5086( l_U0._fU16 )))
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( l_U0._fU20, 0 ))
            {
                iVar10 = 0;
                PRINTSTRING( "KGM........using front seat of the taxi\n" );
            }
        }
        if (iVar10 == -1)
        {
            PRINTSTRING( "KGM........failed to find an empty car seat\n" );
            l_U16._fU0 = 4;
            return;
        }
    }
    sub_1405();
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    TASK_ENTER_CAR_AS_PASSENGER( l_U0._fU4, l_U0._fU20, -1, iVar10 );
    PRINTSTRING( "KGM........enter car as passenger\n" );
    l_U16._fU0 = 10;
    return;
}

void sub_4668(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

int sub_4796(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    if (NOT (IS_PED_RAGDOLL( l_U0._fU4 )))
    {
        return 0;
    }
    if (NOT l_U9)
    {
        return 0;
    }
    iVar6 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar6 );
    if (iVar6 < 50)
    {
        uParam0._fU0 += 1.00000000;
    }
    else
    {
        uParam0._fU0 -= 1.00000000;
    }
    iVar6 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar6 );
    if (iVar6 < 50)
    {
        uParam0._fU4 += 1.00000000;
    }
    else
    {
        uParam0._fU4 -= 1.00000000;
    }
    CREATE_NM_MESSAGE( 1, 119 );
    SET_NM_MESSAGE_VEC3( 121, uParam0 );
    SET_NM_MESSAGE_FLOAT( 122, uParam3 );
    SEND_NM_MESSAGE( l_U0._fU4 );
    return 1;
}

int sub_5086(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_5150( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_5150(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_5740()
{
    int iVar2;
    boolean bVar3;
    int iVar4;
    int iVar5;

    if (NOT l_U8)
    {
        PRINTSTRING( "KGM.....Maintain_ShortTerm_Status_Entering_Vehicle\n" );
    }
    iVar2 = nil;
    bVar3 = false;
    if (sub_5086( l_U0._fU4 ))
    {
        bVar3 = true;
        if (NOT l_U8)
        {
            PRINTSTRING( "KGM........in back of taxi\n" );
        }
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U0._fU4 )) || (bVar3))
    {
        if (NOT l_U8)
        {
            PRINTSTRING( "KGM........in a vehicle\n" );
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U0._fU4, ref iVar2 );
        if (NOT (iVar2 == l_U0._fU20))
        {
            if (NOT l_U8)
            {
                PRINTSTRING( "KGM...........wrong vehicle\n" );
            }
            if (NOT l_U8)
            {
                if (NOT l_U8)
                {
                    PRINTSTRING( "KGM..............leave vehicle\n" );
                }
                TASK_LEAVE_ANY_CAR( l_U0._fU4 );
                l_U16._fU0 = 14;
                return;
            }
            l_U0._fU20 = iVar2;
        }
        if (bVar3)
        {
            if (NOT l_U8)
            {
                PRINTSTRING( "KGM...........status now In Vehicle (back of taxi)\n" );
            }
            sub_6191();
            return;
        }
        if (NOT l_U8)
        {
            if (NOT l_U8)
            {
                PRINTSTRING( "KGM...........status now In Vehicle\n" );
            }
            sub_6191();
            return;
        }
        if (NOT l_U8)
        {
            PRINTSTRING( "KGM...........NON-PLAYER'S SHOULDN'T REACH HERE\n" );
        }
        iVar4 = nil;
        GET_DRIVER_OF_CAR( l_U0._fU20, ref iVar4 );
        if (iVar4 == l_U0._fU4)
        {
            sub_6191();
            return;
        }
        TASK_SHUFFLE_TO_NEXT_CAR_SEAT( l_U0._fU4, iVar2 );
        l_U16._fU0 = 12;
        l_U11._fU12 = TIMERA() + 1000;
        return;
    }
    if (NOT sub_6483())
    {
        CLEAR_CHAR_TASKS( l_U0._fU4 );
        l_U16._fU0 = 4;
        return;
    }
    if (NOT l_U8)
    {
        GET_SCRIPT_TASK_STATUS( l_U0._fU4, 11, ref iVar5 );
        if (iVar5 == 7)
        {
            if (sub_5086( l_U0._fU16 ))
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U0._fU4 )))
                {
                    sub_6695();
                    return;
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( l_U0._fU4 )))
            {
                CLEAR_CHAR_TASKS( l_U0._fU4 );
                l_U16._fU0 = 4;
                return;
            }
        }
    }
    return;
}

void sub_6191()
{
    if (l_U16._fU0 == 13)
    {
        return;
    }
    l_U16._fU0 = 13;
    if (l_U6 == -1)
    {
        return;
    }
    sub_319( l_U6, 2, 4 );
    l_U11._fU16 = TIMERA();
    return;
}

boolean sub_6483()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if (l_U0._fU20 == nil)
    {
        return 0;
    }
    if (IS_CAR_DEAD( l_U0._fU20 ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( l_U0._fU4, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CAR_COORDINATES( l_U0._fU20, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    fVar8 = sub_4668( uVar2, uVar5 );
    return fVar8 < 7.00000000;
}

void sub_6695()
{
    int iVar2;
    int iVar3;
    int iVar4;
    boolean bVar5;

    if (IS_CHAR_DEAD( l_U0._fU16 ))
    {
        l_U16._fU0 = 4;
        return;
    }
    if (NOT (sub_5086( l_U0._fU16 )))
    {
        l_U16._fU0 = 4;
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U0._fU16, ref iVar2 );
    if (NOT (IS_VEH_DRIVEABLE( iVar2 )))
    {
        l_U16._fU0 = 4;
        return;
    }
    if (NOT (iVar2 == l_U0._fU20))
    {
        l_U16._fU0 = 4;
        return;
    }
    if (NOT sub_6483())
    {
        l_U16._fU0 = 4;
        return;
    }
    iVar3 = 0;
    GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U0._fU20, ref iVar3 );
    iVar4 = iVar3 - 1;
    bVar5 = true;
    while (bVar5)
    {
        if (iVar4 >= 0)
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( l_U0._fU20, iVar4 ))
            {
                PRINTSTRING( "KGM........found an empty taxi seat for warp\n" );
                bVar5 = false;
            }
            else
            {
                iVar4--;
            }
        }
        else
        {
            bVar5 = false;
            iVar4 = -1;
        }
    }
    if (iVar4 == -1)
    {
        PRINTSTRING( "KGM........failed to find an empty taxi seat for warp\n" );
        l_U16._fU0 = 4;
        return;
    }
    sub_1405();
    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U0._fU4, l_U0._fU20, iVar4 );
    PRINTSTRING( "KGM........warping into taxi as passenger\n" );
    l_U16._fU0 = 11;
    l_U11._fU12 = TIMERA() + 500;
    return;
}

void sub_7226()
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U0._fU4 ))
    {
        l_U16._fU0 = 13;
        return;
    }
    if (TIMERA() < l_U11._fU12)
    {
        return;
    }
    l_U16._fU0 = 4;
    l_U11._fU12 = -1;
    return;
}

void sub_7305()
{
    int iVar2;
    unknown uVar3;
    int iVar4;

    if (TIMERA() <= l_U11._fU12)
    {
        return;
    }
    GET_SCRIPT_TASK_STATUS( sub_249(), 39, ref iVar2 );
    if (NOT (iVar2 == 7))
    {
        l_U11._fU12 = TIMERA() + 1000;
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( l_U0._fU4 )))
    {
        l_U16._fU0 = 4;
        l_U11._fU12 = -1;
        return;
    }
    uVar3 = nil;
    iVar4 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U0._fU4, ref uVar3 );
    GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
    if (iVar4 == l_U0._fU4)
    {
        sub_6191();
        l_U11._fU12 = -1;
        return;
    }
    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( l_U0._fU4, uVar3 );
    l_U16._fU0 = 12;
    l_U11._fU12 = TIMERA() + 1000;
    return;
}

void sub_7518()
{
    unknown uVar2;

    if (NOT (IS_CHAR_IN_ANY_CAR( l_U0._fU4 )))
    {
        l_U16._fU0 = 4;
        return;
    }
    if (l_U8)
    {
        return;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U0._fU4, ref uVar2 );
    if (NOT (IS_VEH_DRIVEABLE( uVar2 )))
    {
        TASK_LEAVE_ANY_CAR( l_U0._fU4 );
        l_U16._fU0 = 14;
        return;
    }
    if (l_U0._fU16 == nil)
    {
        TASK_LEAVE_ANY_CAR( l_U0._fU4 );
        l_U16._fU0 = 14;
        return;
    }
    if (IS_CHAR_DEAD( l_U0._fU16 ))
    {
        TASK_LEAVE_ANY_CAR( l_U0._fU4 );
        l_U16._fU0 = 14;
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U0._fU16, uVar2 )))
    {
        TASK_LEAVE_ANY_CAR( l_U0._fU4 );
        l_U16._fU0 = 14;
        return;
    }
    return;
}

void sub_7739()
{
    unknown uVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    int iVar6;

    if (TIMERA() < l_U11._fU16)
    {
        return;
    }
    l_U11._fU16 = TIMERA() + 1000;
    if (NOT (IS_CHAR_IN_ANY_CAR( l_U0._fU4 )))
    {
        return;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U0._fU4, ref uVar2 );
    iVar3 = nil;
    GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
    if (NOT (iVar3 == l_U0._fU4))
    {
        return;
    }
    fVar4 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar4 );
    if (fVar4 < 0.04000000)
    {
        SET_VEHICLE_STEER_BIAS( uVar2, 0.00000000 );
        return;
    }
    fVar5 = 0.00000000;
    iVar6 = l_U11._fU4 - TIMERA();
    if (iVar6 < 10000)
    {
        fVar5 = 0.00000000;
        PRINTSTRING( "KGM...STEERINGBIAS: less than 10 secs, so none\n" );
    }
    else if (iVar6 < 30000)
    {
        fVar5 = sub_8024( 0.05000000, 0.02000000 );
        PRINTSTRING( "KGM...STEERINGBIAS: less than 30 secs, so mild\n" );
    }
    else if (iVar6 < 60000)
    {
        fVar5 = sub_8024( 0.07000000, 0.03000000 );
        PRINTSTRING( "KGM...STEERINGBIAS: less than 60 secs, so medium\n" );
    }
    else if (iVar6 < 90000)
    {
        fVar5 = sub_8024( 0.09000000, 0.04000000 );
        PRINTSTRING( "KGM...STEERINGBIAS: less than 90 secs, so heavy\n" );
    }
    else if (iVar6 < 120000)
    {
        fVar5 = sub_8024( 0.10000000, 0.05000000 );
        PRINTSTRING( "KGM...STEERINGBIAS: less than 120 secs, so very heavy\n" );
    }
    else
    {
        fVar5 = sub_8024( 0.13000000, 0.06000000 );
        PRINTSTRING( "KGM...STEERINGBIAS: greater than 120 secs, so extreme\n" );
    };;;;;
    SET_VEHICLE_STEER_BIAS( uVar2, fVar5 );
    return;
}

void sub_8024(unknown uParam0, unknown uParam1)
{
    float Result;
    float fVar5;

    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( -uParam0, uParam0, ref Result );
    fVar5 = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, uParam1, ref fVar5 );
    if (Result < 0.00000000)
    {
        Result -= fVar5;
    }
    else
    {
        Result += fVar5;
    }
    if (Result < -1.00000000)
    {
        Result = -1.00000000;
    }
    if (Result > 1.00000000)
    {
        Result = 1.00000000;
    }
    return Result;
}

void sub_8609()
{
    unknown uVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U8)
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2285() )))
    {
        return;
    }
    if (sub_5086( sub_249() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_249() )))
    {
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_2285(), 0 ))
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_249(), ref uVar2 );
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if (fVar3 < 6.00000000)
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_249(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    uVar7._fU0 = uVar4._fU0 - 30.00000000;
    uVar7._fU4 = uVar4._fU4 - 30.00000000;
    uVar7._fU8 = uVar4._fU8 - 3.00000000;
    uVar10._fU0 = uVar4._fU0 + 30.00000000;
    uVar10._fU4 = uVar4._fU4 + 30.00000000;
    uVar10._fU8 = uVar4._fU8 + 3.00000000;
    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar10._fU0, uVar10._fU4, uVar10._fU8 )))
    {
        return;
    }
    ALTER_WANTED_LEVEL_NO_DROP( sub_2285(), 1 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2285() );
    return;
}

void sub_8937()
{
    if (NOT (IS_CHAR_IN_ANY_CAR( l_U0._fU4 )))
    {
        l_U16._fU0 = 4;
        return;
    }
    return;
}

int sub_9278()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    float fVar7;
    float fVar8;
    int iVar9;
    boolean bVar10;
    boolean bVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    if (NOT (IS_BUTTON_JUST_PRESSED( 0, 15 )))
    {
        return 0;
    }
    iVar5 = nil;
    GET_CHAR_COORDINATES( l_U0._fU4, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    iVar6 = 70;
    iVar5 = GET_CLOSEST_CAR( uVar2, 7.00000000, 0, iVar6 );
    if (iVar5 == nil)
    {
        return 0;
    }
    if (NOT (IS_VEH_DRIVEABLE( iVar5 )))
    {
        return 0;
    }
    fVar7 = -1.00000000;
    fVar8 = 2.00000000;
    iVar9 = 1;
    bVar10 = false;
    bVar11 = false;
    if ((IS_CAR_MODEL( iVar5, 1208856469 )) || ((IS_CAR_MODEL( iVar5, 1884962369 )) || (IS_CAR_MODEL( iVar5, -956048545 ))))
    {
        fVar8 = 4.00000000;
        fVar7 = 0.00000000;
        bVar11 = true;
    }
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iVar5, fVar7, 0.00000000, 0.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
    if (LOCATE_CHAR_ANY_MEANS_3D( l_U0._fU4, uVar12._fU0, uVar12._fU4, uVar12._fU8, fVar8, fVar8, fVar8, 0 ))
    {
        bVar10 = true;
        iVar9 = 1;
    }
    if ((NOT bVar11) AND (NOT bVar10))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iVar5, 1.00000000, 0.00000000, 0.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U0._fU4, uVar12._fU0, uVar12._fU4, uVar12._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
        {
            bVar10 = true;
            iVar9 = 0;
        }
    }
    if (NOT bVar10)
    {
        return 0;
    }
    sub_1405();
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    GET_CAR_MODEL( iVar5, ref uVar15 );
    uVar16 = IS_THIS_MODEL_A_BIKE( uVar15 );
    if ((uVar16) || (iVar9))
    {
        TASK_ENTER_CAR_AS_DRIVER( l_U0._fU4, iVar5, -1 );
    }
    else
    {
        TASK_ENTER_CAR_AS_PASSENGER( l_U0._fU4, iVar5, -1, 0 );
    }
    l_U0._fU20 = iVar5;
    l_U16._fU0 = 10;
    return 1;
}

void sub_9809()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    PRINTSTRING( ".........................Maintain_LongTerm_Status_Go_To_Leader\n" );
    if (l_U8)
    {
        SCRIPT_ASSERT( "drunk: Maintain_LongTerm_Status_Go_To_Leader(): ped should not be player" );
        return;
    }
    if (l_U11._fU0 == -1)
    {
        l_U0._fU16 = nil;
        l_U7 = -1;
        l_U16._fU4 = 15;
        return;
    }
    l_U0._fU20 = nil;
    if (IS_CHAR_DEAD( l_U0._fU16 ))
    {
        l_U0._fU16 = nil;
        l_U7 = -1;
        l_U16._fU4 = 15;
        return;
    }
    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U0._fU16 ))
    {
        l_U16._fU4 = 3;
        return;
    }
    if (IS_CHAR_IN_ANY_CAR( l_U0._fU4 ))
    {
        TASK_LEAVE_ANY_CAR( l_U0._fU4 );
        l_U16._fU0 = 14;
        return;
    }
    GET_CHAR_COORDINATES( l_U0._fU16, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if (NOT (sub_4796( uVar2, 1045220557 )))
    {
        l_U16._fU0 = 4;
        l_U16._fU4 = 15;
        return;
    }
    l_U16._fU0 = 5;
    l_U11._fU8 = TIMERA() + 5000;
    return;
}

void sub_10214()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    PRINTSTRING( ".........................Maintain_LongTerm_Status_Get_Into_Vehicle\n" );
    if (l_U8)
    {
        SCRIPT_ASSERT( "drunk: Maintain_LongTerm_Status_Get_Into_Vehicle(): ped should not be player" );
        return;
    }
    if (IS_CHAR_DEAD( l_U0._fU16 ))
    {
        l_U0._fU16 = nil;
        l_U7 = -1;
        l_U16._fU4 = 15;
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( l_U0._fU16 )))
    {
        l_U16._fU4 = 2;
        return;
    }
    uVar2 = nil;
    GET_CAR_CHAR_IS_USING( l_U0._fU16, ref uVar2 );
    l_U0._fU20 = uVar2;
    if (NOT sub_6483())
    {
        GET_CHAR_COORDINATES( l_U0._fU16, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT (sub_4796( uVar3, 1045220557 )))
        {
            l_U16._fU4 = 15;
            return;
        }
        l_U16._fU0 = 5;
        l_U11._fU8 = TIMERA() + 5000;
        return;
    }
    l_U16._fU0 = 9;
    return;
}

void sub_10589()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    int iVar6;

    PRINTSTRING( ".........................Maintain_LongTerm_Status_Idle\n" );
    if (l_U8)
    {
        SCRIPT_ASSERT( "drunk: Maintain_LongTerm_Status_Idle(): ped should not be player" );
        return;
    }
    l_U0._fU20 = nil;
    if (NOT (l_U0._fU16 == nil))
    {
        l_U16._fU4 = 2;
        return;
    }
    GET_CHAR_COORDINATES( l_U0._fU4, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    fVar5 = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.05000000, 0.20000000, ref fVar5 );
    if (NOT (sub_4796( uVar2, fVar5 )))
    {
        return;
    }
    iVar6 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 500, 3000, ref iVar6 );
    l_U16._fU0 = 5;
    l_U11._fU8 = TIMERA() + iVar6;
    return;
}

