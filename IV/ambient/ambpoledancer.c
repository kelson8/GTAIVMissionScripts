void main()
{
    l_U0 = 0;
    l_U16 = 0;
    l_U17 = "NULL";
    l_U19 = 1113677074;
    l_U20 = 1353709999;
    l_U21 = 1;
    l_U22 = 0;
    l_U23 = "MISSSTRIPCLUB";
    if (DOES_OBJECT_EXIST( l_U24 ))
    {
        FREEZE_OBJECT_POSITION( l_U24, 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U24, 0.00000000, 1.00000000, 0.00000000, ref l_U3._fU0, ref l_U3._fU4, ref l_U3._fU8 );
        GET_OBJECT_HEADING( l_U24, ref l_U6 );
        SET_OBJECT_COLLISION( l_U24, 0 );
        l_U8 = {-1.50000000, -1.50000000, -1.50000000};
        l_U11 = {1.50000000, 1.50000000, 1.50000000};
        l_U8 = {l_U3 + l_U8};
        l_U11 = {l_U3 + l_U11};
        SWITCH_PED_PATHS_OFF( l_U8._fU0, l_U8._fU4, l_U8._fU8, l_U11._fU0, l_U11._fU4, l_U11._fU8 );
    }
    if (sub_260())
    {
        l_U1 = 1;
    }
    else
    {
        l_U1 = 0;
    }
    if (g_U10978)
    {
        if (NOT (sub_407( 6 )))
        {
            if (NOT sub_992())
            {
                l_U21 = 0;
                l_U19 = 1113677074;
                l_U20 = 1113677074;
                l_U23 = "MISSSTRIPCLUBLO";
            }
            else
            {
                l_U21 = 0;
                l_U19 = 1113677074;
                l_U20 = 1113677074;
            }
        }
    }
    sub_1222();
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U24 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U24 ))
            {
                switch (l_U0)
                {
                    case 0:
                    if (sub_1325())
                    {
                        sub_1457( l_U24 );
                        if (sub_992())
                        {
                            if (NOT (IS_CHAR_INJURED( l_U2 )))
                            {
                                if (LOCATE_CHAR_ON_FOOT_3D( l_U2, 1176.75500000, 1681.93900000, 16.72200000, 2.00000000, 2.00000000, 2.00000000, 0 ))
                                {
                                    TASK_PLAY_ANIM( l_U2, "Dance_Rick", l_U23, 100.00000000, 0, 0, 0, 1, 0 );
                                    l_U0 = 1;
                                }
                                else
                                {
                                    TASK_PLAY_ANIM( l_U2, "Dance_Wisper_2", l_U23, 100.00000000, 0, 0, 0, 1, 0 );
                                    l_U0 = 1;
                                }
                            }
                        }
                        else
                        {
                            l_U0 = 2;
                        }
                    }
                    break;
                    case 2:
                    sub_1971();
                    if (sub_2672())
                    {
                        SET_OBJECT_COLLISION( l_U24, 1 );
                        l_U0 = 3;
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U2 )))
                    {
                        TASK_COWER( l_U2 );
                        SET_ALL_RANDOM_PEDS_FLEE( sub_1076(), 1 );
                        SET_CHAR_KEEP_TASK( l_U2, 1 );
                        TERMINATE_THIS_SCRIPT();
                    }
                    break;
                    case 1:
                    if (NOT l_U22)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U2 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U2, l_U23, "Dance_Rick" ))
                            {
                                SET_CHAR_ANIM_CURRENT_TIME( l_U2, l_U23, "Dance_Rick", 0.40000000 );
                                l_U22 = 1;
                            }
                            else if (IS_CHAR_PLAYING_ANIM( l_U2, l_U23, "Dance_Wisper_2" ))
                            {
                                SET_CHAR_ANIM_CURRENT_TIME( l_U2, l_U23, "Dance_Wisper_2", 0.10000000 );
                                l_U22 = 1;
                            }
                        }
                    }
                    break;
                }
            }
            else
            {
                sub_3395();
            }
        }
        else
        {
            sub_3395();
        }
    }
    return;
}

int sub_260()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_269() )))
    {
        GET_CHAR_COORDINATES( sub_269(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
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

int sub_407(int iParam0)
{
    unknown uVar3;

    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    if (sub_447( g_U32898._fU0 ))
    {
        if (NOT (sub_534( g_U32898._fU0, iParam0 )))
        {
            return 0;
        }
        g_U32898._fU8 = iParam0;
        g_U32898._fU72 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U32898._fU4)
    {
        if (g_U32898._fU24)
        {
            return 0;
        }
        else
        {
            g_U32898._fU8 = 9;
            if (g_U32898._fU36[uVar3] > 0)
            {
                g_U32898._fU36[uVar3]--;
            }
            g_U32898._fU72 = 0;
            return 1;
        }
    }
    if (g_U32898._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU24)
        {
            return 0;
        }
        else
        {
            g_U32898._fU8 = 9;
        }
    }
    if (g_U32898._fU32 <= 0)
    {
        g_U32898._fU12 = iParam0;
        return 0;
    }
    if (g_U32898._fU36[uVar3] > 0)
    {
        g_U32898._fU8 = iParam0;
        g_U32898._fU36[uVar3]--;
        if (iParam0 == 5)
        {
            g_U32898._fU72 = 1;
        }
        return 1;
    }
    g_U32898._fU12 = iParam0;
    return 0;
}

int sub_447(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        case 10:
        case 28:
        case 29:
        case 30: return 1;
    }
    return 0;
}

int sub_534(int iParam0, int iParam1)
{
    if (iParam1 == 7)
    {
        if ((iParam0 == 28) || (iParam0 == 10))
        {
            return 0;
        }
    }
    if (iParam1 == 6)
    {
        if ((iParam0 == 29) || ((iParam0 == 10) || (iParam0 == 2)))
        {
            return 0;
        }
    }
    return 1;
}

int sub_992()
{
    if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman2" )) >= 1) || (sub_1001()))
    {
        if (IS_PLAYER_PLAYING( sub_1076() ))
        {
            if (NOT (IS_PLAYER_CONTROL_ON( sub_1076() )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_1001()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Michelle1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_1076()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1222()
{
    return;
}

int sub_1325()
{
    REQUEST_MODEL( l_U19 );
    REQUEST_MODEL( l_U20 );
    REQUEST_ANIMS( l_U23 );
    if ((HAVE_ANIMS_LOADED( l_U23 )) AND ((HAS_MODEL_LOADED( l_U20 )) AND (HAS_MODEL_LOADED( l_U19 ))))
    {
        return 1;
    }
    else
    {
        REQUEST_MODEL( l_U19 );
        REQUEST_MODEL( l_U20 );
        REQUEST_ANIMS( l_U23 );
    }
    return 0;
}

void sub_1457(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_DEAD( l_U2 ))
    {
        CREATE_CHAR( 5, sub_1482(), l_U3._fU0, l_U3._fU4, l_U3._fU8, ref l_U2, 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U2 );
        SET_CHAR_HEADING( l_U2, l_U6 );
        SET_CHAR_COORDINATES( l_U2, l_U3._fU0, l_U3._fU4, l_U3._fU8 );
        SET_CHAR_NEVER_TARGETTED( l_U2, 1 );
        GET_ROOM_KEY_FROM_OBJECT( uParam0, ref uVar3 );
        SET_ROOM_FOR_CHAR_BY_KEY( l_U2, uVar3 );
        SET_CHAR_IN_CUTSCENE( l_U2, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2, 1 );
        if (IS_CHAR_MODEL( l_U2, 1113677074 ))
        {
            SET_AMBIENT_VOICE_NAME( l_U2, "STRIPPER_1" );
        }
        else
        {
            SET_AMBIENT_VOICE_NAME( l_U2, "STRIPPER_2" );
        }
    }
    return;
}

void sub_1482()
{
    int Result;
    unknown uVar3;
    int iVar4;

    iVar4 = 2;
    if (g_U10978)
    {
        if (NOT (sub_407( 6 )))
        {
            iVar4 = 1;
        }
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref uVar3 );
    switch (uVar3)
    {
        case 0:
        Result = 1113677074;
        break;
        case 1:
        Result = 1353709999;
        break;
    }
    return Result;
}

void sub_1971()
{
    if (NOT (IS_CHAR_INJURED( l_U2 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U2, 80, ref l_U7 );
        if (l_U7 == 7)
        {
            TASK_PLAY_ANIM( l_U2, sub_2024(), l_U23, 100.00000000, 0, 0, 0, 1, 0 );
        }
        else if (HAS_CHAR_ANIM_FINISHED( l_U2, l_U23, sub_2024() ))
        {
            TASK_PLAY_ANIM( l_U2, sub_2024(), l_U23, 100.00000000, 0, 0, 0, 1, 0 );
        }
        else if (NOT l_U21)
        {
            if (g_U9160 == -1)
            {
                SET_CHAR_ANIM_CURRENT_TIME( l_U2, l_U23, sub_2024(), 0.50000000 );
                g_U9160++;
            }
        }
        if (NOT g_U10978)
        {
            if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2 );
                l_U17 = "NULL";
                g_U9160 = -1;
            }
        }
    }
    return;
}

void sub_2024()
{
    unknown uVar2;

    if (l_U21)
    {
        if (COMPARE_STRING( l_U17, "NULL" ))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar2 );
            switch (uVar2)
            {
                case 0:
                if (g_U9160 == 0)
                {
                    l_U17 = "Dance_Wisper_2";
                }
                else
                {
                    l_U17 = "pole_dance_a";
                    if (g_U9160 == -1)
                    {
                        g_U9160 = 0;
                    }
                }
                break;
                case 1:
                if (g_U9160 == 1)
                {
                    l_U17 = "pole_dance_a";
                }
                else
                {
                    l_U17 = "Dance_Rick";
                    if (g_U9160 == -1)
                    {
                        g_U9160 = 1;
                    }
                }
                break;
                case 2:
                if (g_U9160 == 2)
                {
                    l_U17 = "Dance_Rick";
                }
                else
                {
                    l_U17 = "Dance_Ragga_2";
                    if (g_U9160 == -1)
                    {
                        g_U9160 = 2;
                    }
                }
                break;
                case 3:
                if (g_U9160 == 3)
                {
                    l_U17 = "Dance_Ragga_2";
                }
                else
                {
                    l_U17 = "Dance_Wisper_2";
                    if (g_U9160 == -1)
                    {
                        g_U9160 = 3;
                    }
                }
                break;
            }
        }
    }
    else
    {
        l_U17 = "pole_dance_a";
        l_U23 = "MISSSTRIPCLUBLO";
    }
    return l_U17;
}

int sub_2672()
{
    if (NOT (IS_CHAR_INJURED( sub_269() )))
    {
        if (sub_2704( sub_269() ))
        {
            if (NOT (IS_CHAR_INJURED( l_U2 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_269(), l_U2, 3.00000000, 3.00000000, 0.50000000, 0 ))
                {
                    g_U9158 = 1;
                    return 1;
                }
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U2, sub_269(), 0 ))
                {
                    g_U9158 = 1;
                    return 1;
                }
                if (IS_CHAR_TOUCHING_CHAR( sub_269(), l_U2 ))
                {
                    g_U9158 = 1;
                    return 1;
                }
            }
            if (IS_CHAR_SHOOTING( sub_269() ))
            {
                g_U9158 = 1;
                return 1;
            }
            if (g_U9158)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_2704(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
        switch (l_U1)
        {
            case 0:
            if ((iVar3 == (GET_HASH_KEY( "clamchangeroom" ))) || ((iVar3 == (GET_HASH_KEY( "clamfronrm" ))) || ((iVar3 == (GET_HASH_KEY( "clammainroom" ))) || (iVar3 == (GET_HASH_KEY( "clampalbkrm" ))))))
            {
                return 1;
            }
            break;
            case 1:
            if ((iVar3 == (GET_HASH_KEY( "Bada_room1" ))) || (iVar3 == (GET_HASH_KEY( "Bada_room2" ))))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_3395()
{
    if (NOT (IS_CHAR_DEAD( l_U2 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U2 )))
        {
            DELETE_CHAR( ref l_U2 );
        }
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPoleDancer" )) == 1)
    {
        g_U9160 = -1;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

