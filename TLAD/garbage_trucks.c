void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U18 = 1917016601;
    l_U19 = 1136499716;
    l_U20 = 1917016601;
    l_U24 = {0.72000000, -5.00000000, 0.46000000};
    l_U27 = 275.76000000;
    l_U28 = {-0.77999990, -5.24000000, 0.46000000};
    l_U31 = 65.51999000;
    l_U46 = 0;
    l_U49 = 1136499716;
    l_U50 = "amb@garbage";
    WAIT( 0 );
    if (l_U4)
    {
        ;
    }
    else
    {
        l_U10 = l_U51;
    }
    while (l_U3)
    {
        WAIT( 0 );
        if (sub_210())
        {
            switch (l_U0)
            {
                case 0:
                sub_455();
                break;
                case 1:
                sub_1132();
                break;
                case 2:
                sub_1520();
                break;
                default:
                  case 3: break;
            }
            if (l_U0 > 0)
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U16 )))
                {
                    l_U3 = 0;
                }
                else
                {
                    sub_4996();
                }
            }
        }
        else
        {
            l_U3 = 0;
        }
        sub_5666();
    }
    sub_5688();
    return;
}

int sub_210()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( l_U10 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U10 ))
        {
            GET_CHAR_COORDINATES( l_U10, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            if (NOT (IS_CHAR_DEAD( sub_269() )))
            {
                GET_CHAR_COORDINATES( sub_269(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if ((VDIST( uVar5, uVar2 )) <= 200.00000000)
                {
                    if (sub_368())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_269()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_368()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_455()
{
    l_U20 = 1917016601;
    if (NOT (IS_CHAR_DEAD( l_U10 )))
    {
        if (IS_CHAR_IN_ANY_CAR( l_U10 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U10, ref l_U16 );
            GET_CAR_MODEL( l_U16, ref l_U18 );
            if (l_U18 == l_U20)
            {
                SET_CAR_AS_MISSION_CAR( l_U16 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U16, 0 );
                sub_560();
                if (NOT l_U9)
                {
                    l_U0 = 3;
                }
                else
                {
                    l_U0 = 1;
                }
            }
        }
    }
    return;
}

void sub_560()
{
    GET_CAR_COORDINATES( l_U16, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
    if (NOT (IS_CHAR_DEAD( l_U10 )))
    {
        GET_CHAR_MODEL( l_U10, ref l_U19 );
        REQUEST_MODEL( l_U19 );
        while (NOT (HAS_MODEL_LOADED( l_U19 )))
        {
            WAIT( 0 );
        }
    }
    REQUEST_ANIMS( l_U50 );
    while (NOT (HAVE_ANIMS_LOADED( l_U50 )))
    {
        WAIT( 0 );
    }
    if (IS_VEH_DRIVEABLE( l_U16 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U10 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U10 )))
            {
                CREATE_CHAR( 26, l_U19, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref l_U11, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U11 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U11, 1 );
                ATTACH_PED_TO_CAR( l_U11, l_U16, 0, l_U24, l_U27, 0.00000000, 0, 0 );
                CREATE_CHAR( 26, l_U19, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref l_U12, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U12 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U12, 1 );
                ATTACH_PED_TO_CAR( l_U12, l_U16, 0, l_U28, l_U31, 0.00000000, 0, 0 );
                TASK_PLAY_ANIM( l_U11, "HANGONTRUCK", l_U50, 12.00000000, 1, 0, 0, 0, -1 );
                TASK_PLAY_ANIM( l_U12, "HANGONTRUCK", l_U50, 12.00000000, 1, 0, 0, 0, -1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U11, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U12, 1 );
                if (NOT (IS_CHAR_DEAD( l_U10 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U10 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U10 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U16 ))
                            {
                                TASK_CAR_MISSION( l_U10, l_U16, 0, 1, 10.00000000, 0, -1, -1 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_1132()
{
    if (sub_1141())
    {
        if (sub_1217())
        {
            l_U0 = 2;
        }
    }
    return;
}

int sub_1141()
{
    if (IS_VEH_DRIVEABLE( l_U16 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U10 )))
        {
            if (IS_CHAR_IN_CAR( l_U10, l_U16 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_1217()
{
    boolean bVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    bVar2 = false;
    GET_CAR_COORDINATES( l_U16, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
    if (IS_VEH_DRIVEABLE( l_U16 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, -12.00000000, -2.00000000, -3.00000000, ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, 9.00000000, 2.00000000, 3.00000000, ref l_U35._fU0, ref l_U35._fU4, ref l_U35._fU8 );
    }
    else
    {
        return 0;
    }
    FIND_NEAREST_COLLECTABLE_BIN_BAGS( l_U21 );
    if (LOOK_AT_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE( 0, ref uVar7, ref fVar3, ref uVar4, ref uVar5, ref uVar6 ))
    {
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref fVar3 );
        if (fVar3 <= 8.00000000)
        {
            bVar2 = true;
        }
    }
    if (bVar2)
    {
        if (sub_1141())
        {
            CLEAR_CHAR_TASKS( l_U10 );
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

void sub_1520()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector vVar16;
    vector vVar19;

    vVar16 = {0.00000000, 1.65000000, 1.70000000};
    vVar19 = {0.00000000, 0.00000000, 0.00000000};
    if (sub_1141())
    {
        if (NOT (IS_CHAR_DEAD( l_U11 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U11 )))
            {
                switch (l_U1)
                {
                    case 0:
                    GET_CAR_SPEED( l_U16, ref fVar5 );
                    if (fVar5 <= 0.10000000)
                    {
                        l_U1 = 2;
                    }
                    break;
                    case 1:
                    GET_SCRIPT_TASK_STATUS( l_U11, 80, ref l_U48 );
                    if (l_U48 == 7)
                    {
                        l_U1 = 2;
                    }
                    break;
                    case 2:
                    GET_CAR_COORDINATES( l_U16, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
                    FIND_NEAREST_COLLECTABLE_BIN_BAGS( l_U21 );
                    l_U5 = 0;
                    if (LOOK_AT_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE( 0, ref uVar13, ref fVar9, ref uVar10, ref uVar11, ref uVar12 ))
                    {
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar13._fU0, uVar13._fU4, uVar13._fU8, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref fVar9 );
                        if (fVar9 <= 12.00000000)
                        {
                            GRAB_NEARBY_OBJECT_WITH_SPECIAL_ATTRIBUTE( 0, ref l_U14 );
                            SET_OBJECT_DYNAMIC( l_U14, 0 );
                            l_U5 = 1;
                        }
                    }
                    if (l_U5)
                    {
                        if (DOES_OBJECT_EXIST( l_U14 ))
                        {
                            GET_OBJECT_COORDINATES( l_U14, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U11 ))
                            {
                                DETACH_PED( l_U11, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U13 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 1.00000000 );
                            TASK_GO_TO_OBJECT( 0, l_U14, -1, 1.20000000 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            TASK_PLAY_ANIM( 0, "pickuprubbish", l_U50, 1000.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U13 );
                            TASK_PERFORM_SEQUENCE( l_U11, l_U13 );
                            CLEAR_SEQUENCE_TASK( l_U13 );
                            l_U7 = 0;
                            l_U1 = 3;
                        }
                    }
                    else if (IS_PED_ATTACHED_TO_ANY_CAR( l_U11 ))
                    {
                        l_U1 = 8;
                    }
                    else
                    {
                        l_U1 = 6;
                    }
                    break;
                    case 3:
                    if (DOES_OBJECT_EXIST( l_U14 ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U11, 29, ref l_U48 );
                        if (l_U48 == 7)
                        {
                            GET_CAR_COORDINATES( l_U16, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, 0.00000000, -5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            OPEN_SEQUENCE_TASK( ref l_U13 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 1.00000000 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U21._fU0, l_U21._fU4, l_U21._fU8 );
                            TASK_PLAY_ANIM( 0, "THROWRUBBISH", l_U50, 1000.00000000, 0, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U13 );
                            TASK_PERFORM_SEQUENCE( l_U11, l_U13 );
                            CLEAR_SEQUENCE_TASK( l_U13 );
                            l_U1 = 4;
                        }
                        else if (NOT l_U7)
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U11, l_U50, "PICKUPRUBBISH" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U11, l_U50, "PICKUPRUBBISH", ref fVar6 );
                                if (fVar6 > 0.60000000)
                                {
                                    SET_OBJECT_COORDINATES( l_U14, 0.00000000, 0.00000000, 0.00000000 );
                                    l_U38 = {0.00000000, 0.40000000, -0.25000000};
                                    l_U41 = {0.00000000, 0.00000000, 0.00000000};
                                    ATTACH_OBJECT_TO_PED( l_U14, l_U11, 0, l_U38, l_U41, 0 );
                                    l_U7 = 1;
                                }
                            }
                        }
                    }
                    else
                    {
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U14 );
                        l_U1 = 2;
                        l_U5 = 0;
                    }
                    break;
                    case 4:
                    GET_SCRIPT_TASK_STATUS( l_U11, 29, ref l_U48 );
                    if (l_U48 == 7)
                    {
                        GET_GAME_TIMER( ref l_U44 );
                        l_U1 = 5;
                    }
                    else if (IS_CHAR_PLAYING_ANIM( l_U11, l_U50, "THROWRUBBISH" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U11, l_U50, "THROWRUBBISH", ref fVar6 );
                        if (fVar6 > 0.50000000)
                        {
                            if (DOES_OBJECT_EXIST( l_U14 ))
                            {
                                GET_OBJECT_COORDINATES( l_U14, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                GET_CHAR_HEADING( l_U11, ref uVar12 );
                                DETACH_OBJECT( l_U14, 1 );
                                APPLY_FORCE_TO_OBJECT( l_U14, 1, vVar16, vVar19, 0, 0, 0, 1 );
                                GET_GAME_TIMER( ref l_U44 );
                                l_U1 = 5;
                            }
                            else
                            {
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U14 );
                                l_U1 = 2;
                                l_U5 = 0;
                            }
                        }
                    }
                    break;
                    case 5:
                    GET_GAME_TIMER( ref iVar7 );
                    iVar8 = iVar7 - l_U44;
                    if (iVar8 >= 500)
                    {
                        DELETE_OBJECT( ref l_U14 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U14 );
                        l_U1 = 2;
                        l_U5 = 0;
                    }
                    break;
                    case 6:
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, l_U24._fU0, l_U24._fU4 - 1.00000000, l_U24._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    OPEN_SEQUENCE_TASK( ref l_U13 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U24._fU0, l_U24._fU4, l_U24._fU8 );
                    CLOSE_SEQUENCE_TASK( l_U13 );
                    TASK_PERFORM_SEQUENCE( l_U11, l_U13 );
                    CLEAR_SEQUENCE_TASK( l_U13 );
                    l_U1 = 7;
                    break;
                    case 7:
                    GET_SCRIPT_TASK_STATUS( l_U11, 29, ref l_U48 );
                    if (l_U48 == 7)
                    {
                        ATTACH_PED_TO_CAR( l_U11, l_U16, 0, l_U24, l_U27, 0.00000000, 0, 0 );
                        TASK_PLAY_ANIM( l_U11, "HANGONTRUCK", l_U50, 12.00000000, 1, 0, 0, 0, -1 );
                        l_U1 = 8;
                    }
                    break;
                    case 8: break;
                }
            }
            else
            {
                l_U1 = 8;
            }
        }
        else
        {
            l_U1 = 8;
        }
        if (NOT (IS_CHAR_DEAD( l_U12 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U12 )))
            {
                switch (l_U2)
                {
                    case 0:
                    GET_CAR_SPEED( l_U16, ref fVar5 );
                    if (fVar5 <= 0.10000000)
                    {
                        l_U2 = 2;
                    }
                    break;
                    case 1:
                    GET_SCRIPT_TASK_STATUS( l_U12, 80, ref l_U48 );
                    if (l_U48 == 7)
                    {
                        l_U2 = 2;
                    }
                    break;
                    case 2:
                    GET_CAR_COORDINATES( l_U16, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, -12.00000000, -10.00000000, -3.00000000, ref l_U32._fU0, ref l_U32._fU4, ref l_U32._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, 12.00000000, 10.00000000, 3.00000000, ref l_U35._fU0, ref l_U35._fU4, ref l_U35._fU8 );
                    FIND_NEAREST_COLLECTABLE_BIN_BAGS( l_U21 );
                    l_U6 = 0;
                    if (LOOK_AT_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE( 0, ref uVar13, ref fVar9, ref uVar10, ref uVar11, ref uVar12 ))
                    {
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar13._fU0, uVar13._fU4, uVar13._fU8, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref fVar9 );
                        if (fVar9 <= 12.00000000)
                        {
                            GRAB_NEARBY_OBJECT_WITH_SPECIAL_ATTRIBUTE( 0, ref l_U15 );
                            SET_OBJECT_DYNAMIC( l_U15, 0 );
                            l_U6 = 1;
                        }
                    }
                    if (l_U6)
                    {
                        if (DOES_OBJECT_EXIST( l_U15 ))
                        {
                            GET_OBJECT_COORDINATES( l_U15, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if (IS_PED_ATTACHED_TO_ANY_CAR( l_U12 ))
                            {
                                DETACH_PED( l_U12, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U13 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 1.00000000 );
                            TASK_GO_TO_OBJECT( 0, l_U15, -1, 1.20000000 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            TASK_PLAY_ANIM( 0, "pickuprubbish", l_U50, 1000.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U13 );
                            TASK_PERFORM_SEQUENCE( l_U12, l_U13 );
                            CLEAR_SEQUENCE_TASK( l_U13 );
                            l_U8 = 0;
                            l_U2 = 3;
                        }
                    }
                    else if (IS_PED_ATTACHED_TO_ANY_CAR( l_U12 ))
                    {
                        l_U2 = 8;
                    }
                    else
                    {
                        l_U2 = 6;
                    }
                    break;
                    case 3:
                    if (DOES_OBJECT_EXIST( l_U15 ))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U12, 29, ref l_U48 );
                        if (l_U48 == 7)
                        {
                            GET_CAR_COORDINATES( l_U16, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, 0.00000000, -5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            OPEN_SEQUENCE_TASK( ref l_U13 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 1.00000000 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U21._fU0, l_U21._fU4, l_U21._fU8 );
                            TASK_PLAY_ANIM( 0, "THROWRUBBISH", l_U50, 1000.00000000, 0, 0, 0, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U13 );
                            TASK_PERFORM_SEQUENCE( l_U12, l_U13 );
                            CLEAR_SEQUENCE_TASK( l_U13 );
                            l_U2 = 4;
                        }
                        else if (NOT l_U8)
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U12, l_U50, "PICKUPRUBBISH" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U12, l_U50, "PICKUPRUBBISH", ref fVar6 );
                                if (fVar6 > 0.60000000)
                                {
                                    SET_OBJECT_COORDINATES( l_U15, 0.00000000, 0.00000000, 0.00000000 );
                                    l_U38 = {0.00000000, 0.40000000, -0.25000000};
                                    l_U41 = {0.00000000, 0.00000000, 0.00000000};
                                    ATTACH_OBJECT_TO_PED( l_U15, l_U12, 0, l_U38, l_U41, 0 );
                                    l_U8 = 1;
                                }
                            }
                        }
                    }
                    else
                    {
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U15 );
                        l_U2 = 2;
                        l_U6 = 0;
                    }
                    break;
                    case 4:
                    GET_SCRIPT_TASK_STATUS( l_U12, 29, ref l_U48 );
                    if (l_U48 == 7)
                    {
                        GET_GAME_TIMER( ref l_U45 );
                        l_U2 = 5;
                    }
                    else if (IS_CHAR_PLAYING_ANIM( l_U12, l_U50, "THROWRUBBISH" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U12, l_U50, "THROWRUBBISH", ref fVar6 );
                        if (fVar6 > 0.50000000)
                        {
                            if (DOES_OBJECT_EXIST( l_U15 ))
                            {
                                GET_OBJECT_COORDINATES( l_U15, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                GET_CHAR_HEADING( l_U12, ref uVar12 );
                                DETACH_OBJECT( l_U15, 1 );
                                APPLY_FORCE_TO_OBJECT( l_U15, 1, vVar16, vVar19, 0, 0, 0, 1 );
                                GET_GAME_TIMER( ref l_U45 );
                                l_U2 = 5;
                            }
                            else
                            {
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U15 );
                                l_U2 = 2;
                                l_U6 = 0;
                            }
                        }
                    }
                    break;
                    case 5:
                    GET_GAME_TIMER( ref iVar7 );
                    iVar8 = iVar7 - l_U45;
                    if (iVar8 >= 500)
                    {
                        DELETE_OBJECT( ref l_U15 );
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U15 );
                        l_U2 = 2;
                        l_U6 = 0;
                    }
                    break;
                    case 6:
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U16, l_U28._fU0, l_U28._fU4 - 1.00000000, l_U28._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    OPEN_SEQUENCE_TASK( ref l_U13 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1 );
                    TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U28._fU0, l_U28._fU4, l_U28._fU8 );
                    CLOSE_SEQUENCE_TASK( l_U13 );
                    TASK_PERFORM_SEQUENCE( l_U12, l_U13 );
                    CLEAR_SEQUENCE_TASK( l_U13 );
                    l_U2 = 7;
                    break;
                    case 7:
                    GET_SCRIPT_TASK_STATUS( l_U12, 29, ref l_U48 );
                    if (l_U48 == 7)
                    {
                        ATTACH_PED_TO_CAR( l_U12, l_U16, 0, l_U28, l_U31, 0.00000000, 0, 0 );
                        TASK_PLAY_ANIM( l_U12, "HANGONTRUCK", l_U50, 12.00000000, 1, 0, 0, 0, -1 );
                        l_U2 = 8;
                    }
                    break;
                    case 8: break;
                }
            }
            else
            {
                l_U2 = 8;
            }
        }
        else
        {
            l_U2 = 8;
        }
        if ((l_U2 == 8) AND (l_U1 == 8))
        {
            if (sub_1141())
            {
                TASK_CAR_MISSION( l_U10, l_U16, 0, 1, 10.00000000, 0, -1, -1 );
            }
            l_U1 = 0;
            l_U2 = 0;
            l_U0 = 1;
        }
    }
    return;
}

void sub_4996()
{
    boolean bVar2;
    int iVar3;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_5008() ))
    {
        if (DOES_CHAR_EXIST( l_U11 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U11, sub_269(), 0 ))
            {
                bVar2 = true;
            }
        }
        if (DOES_CHAR_EXIST( l_U12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U12, sub_269(), 0 ))
            {
                bVar2 = true;
            }
        }
        if (DOES_CHAR_EXIST( l_U10 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U10, sub_269(), 0 ))
            {
                bVar2 = true;
            }
        }
        if (IS_VEH_DRIVEABLE( l_U16 ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U16, sub_269() ))
            {
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U16 );
                GET_CAR_HEALTH( l_U16, ref iVar3 );
                l_U46 += l_U47 - iVar3;
                if (l_U46 >= 100)
                {
                    bVar2 = true;
                }
            }
            else
            {
                GET_CAR_HEALTH( l_U16, ref l_U47 );
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U16 ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U16, sub_269() ))
            {
                bVar2 = true;
            }
        }
        if (bVar2)
        {
            if (NOT (IS_CHAR_DEAD( l_U11 )))
            {
                if (IS_PED_ATTACHED_TO_ANY_CAR( l_U11 ))
                {
                    DETACH_PED( l_U11, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U11 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U11, 0 );
                        CLEAR_CHAR_TASKS( l_U11 );
                        SET_CHAR_RELATIONSHIP( l_U11, 5, 0 );
                        TASK_SMART_FLEE_CHAR( l_U11, sub_269(), 100.00000000, -1 );
                        SET_CHAR_KEEP_TASK( l_U11, 1 );
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U12 )))
            {
                if (IS_PED_ATTACHED_TO_ANY_CAR( l_U12 ))
                {
                    DETACH_PED( l_U12, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U12 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U12, 0 );
                        CLEAR_CHAR_TASKS( l_U12 );
                        TASK_SMART_FLEE_CHAR( l_U12, sub_269(), 100.00000000, -1 );
                        SET_CHAR_RELATIONSHIP( l_U12, 5, 0 );
                        SET_CHAR_KEEP_TASK( l_U12, 1 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U10 )))
            {
                CLEAR_CHAR_TASKS( l_U10 );
                TASK_SMART_FLEE_CHAR( l_U10, sub_269(), 100.00000000, -1 );
                SET_CHAR_RELATIONSHIP( l_U10, 5, 0 );
                SET_CHAR_KEEP_TASK( l_U10, 1 );
            }
            l_U3 = 0;
        }
    }
    return;
}

void sub_5008()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5666()
{
    return;
}

void sub_5688()
{
    if (NOT (IS_CHAR_DEAD( l_U11 )))
    {
        if (IS_PED_ATTACHED_TO_ANY_CAR( l_U11 ))
        {
            DETACH_PED( l_U11, 1 );
            if (NOT (IS_CHAR_INJURED( l_U11 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U11, 0 );
                CLEAR_CHAR_TASKS( l_U11 );
                SET_CHAR_RELATIONSHIP( l_U11, 5, 0 );
                if (IS_PLAYER_PLAYING( sub_5008() ))
                {
                    TASK_SMART_FLEE_CHAR( l_U11, sub_269(), 100.00000000, -1 );
                }
                SET_CHAR_KEEP_TASK( l_U11, 1 );
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U12 )))
    {
        if (IS_PED_ATTACHED_TO_ANY_CAR( l_U12 ))
        {
            DETACH_PED( l_U12, 1 );
            if (NOT (IS_CHAR_INJURED( l_U12 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U12, 0 );
                CLEAR_CHAR_TASKS( l_U12 );
                if (IS_PLAYER_PLAYING( sub_5008() ))
                {
                    TASK_SMART_FLEE_CHAR( l_U12, sub_269(), 100.00000000, -1 );
                }
                SET_CHAR_RELATIONSHIP( l_U12, 5, 0 );
                SET_CHAR_KEEP_TASK( l_U12, 1 );
            }
        }
    }
    REMOVE_BLIP( l_U17 );
    TERMINATE_THIS_SCRIPT();
    return;
}

