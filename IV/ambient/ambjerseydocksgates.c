void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U40 = {-1273.05000000, -119.19920000, 4.37280000};
    l_U43 = {-1165.12100000, 578.31390000, 4.52770000};
    l_U46 = {-1237.41700000, 463.32100000, 6.17900000};
    l_U49 = {-1213.58500000, -204.91600000, 4.89800000};
    l_U55 = "CHAINLINK_SLIDING_GATE";
    l_U56 = -1;
    l_U57 = "CHAINLINK_SLIDING_GATE";
    l_U58 = -1;
    l_U59 = 0;
    l_U37 = {l_U60._fU4[0]};
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (sub_222())
    {
        g_U9154 = 0;
        g_U9155 = 0;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U0)
            {
                case 0:
                if (sub_349())
                {
                    l_U0 = 1;
                }
                break;
                case 1:
                sub_1792();
                break;
                case 2: break;
            }
        }
        else
        {
            sub_3915();
        }
    }
    return;
}

void sub_222()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "finale1a" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

int sub_349()
{
    sub_358();
    if (l_U22 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U4 ))
        {
            return 1;
        }
    }
    else if (NOT (DOES_OBJECT_EXIST( l_U3 )))
    {
        REQUEST_MODEL( l_U22 );
        if (HAS_MODEL_LOADED( l_U22 ))
        {
            if (g_U9154)
            {
                CREATE_OBJECT_NO_OFFSET( l_U22, l_U5._fU0, l_U5._fU4, l_U5._fU8, ref l_U3, 1 );
                SET_OBJECT_HEADING( l_U3, l_U36 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U3, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U14._fU0, ref l_U14._fU4, ref l_U14._fU8 );
                SET_OBJECT_COORDINATES( l_U3, l_U14._fU0, l_U14._fU4, l_U14._fU8 );
                l_U1 = 2;
            }
            else
            {
                CREATE_OBJECT_NO_OFFSET( l_U22, l_U5._fU0, l_U5._fU4, l_U5._fU8, ref l_U3, 1 );
            }
            SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( l_U5._fU0, l_U5._fU4, l_U5._fU8, 1.00000000, l_U22, 1 );
            SET_OBJECT_HEADING( l_U3, l_U36 );
        }
        else
        {
            REQUEST_MODEL( l_U22 );
        }
    }
    if (l_U23 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U3 ))
        {
            return 1;
        }
    }
    else if (NOT (DOES_OBJECT_EXIST( l_U4 )))
    {
        REQUEST_MODEL( l_U23 );
        if (HAS_MODEL_LOADED( l_U23 ))
        {
            if (g_U9155)
            {
                CREATE_OBJECT_NO_OFFSET( l_U23, l_U8._fU0, l_U8._fU4, l_U8._fU8, ref l_U4, 1 );
                SET_OBJECT_HEADING( l_U4, l_U36 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4, l_U27._fU0, l_U27._fU4, l_U27._fU8, ref l_U17._fU0, ref l_U17._fU4, ref l_U17._fU8 );
                SET_OBJECT_COORDINATES( l_U4, l_U17._fU0, l_U17._fU4, l_U17._fU8 );
                l_U2 = 2;
            }
            else
            {
                CREATE_OBJECT_NO_OFFSET( l_U23, l_U8._fU0, l_U8._fU4, l_U8._fU8, ref l_U4, 1 );
            }
            SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( l_U8._fU0, l_U8._fU4, l_U8._fU8, 1.00000000, l_U23, 1 );
            SET_OBJECT_HEADING( l_U4, l_U36 );
        }
        else
        {
            REQUEST_MODEL( l_U23 );
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_358()
{
    l_U20 = VDIST( l_U37, l_U40 );
    if (l_U20 < 5.00000000)
    {
        l_U22 = -243292265;
        l_U23 = -978551754;
        l_U24 = {-5.50000000, 0.00000000, 0.00000000};
        l_U27 = {5.50000000, 0.00000000, 0.00000000};
        l_U5 = {-1272.61000000, -114.87900000, 6.01800000};
        l_U8 = {-1272.63900000, -123.66600000, 6.01800000};
        l_U30 = {0.00000000, 8.00000000, 0.00000000};
        l_U33 = {0.00000000, -8.00000000, 0.00000000};
        l_U52 = {5.00000000, 9.00000000, 5.00000000};
        l_U36 = 270.00000000;
    }
    l_U20 = VDIST( l_U37, l_U43 );
    if (l_U20 < 5.00000000)
    {
        l_U22 = -243292265;
        l_U23 = -978551754;
        l_U24 = {-5.50000000, 0.00000000, 0.00000000};
        l_U27 = {5.50000000, 0.00000000, 0.00000000};
        l_U5 = {-1169.72800000, 577.16900000, 6.17900000};
        l_U8 = {-1161.14100000, 577.16900000, 6.17900000};
        l_U30 = {0.00000000, 8.00000000, 0.00000000};
        l_U33 = {0.00000000, -8.00000000, 0.00000000};
        l_U52 = {5.00000000, 9.00000000, 5.00000000};
        l_U36 = 0.00000000;
    }
    l_U20 = VDIST( l_U37, l_U46 );
    if (l_U20 < 5.00000000)
    {
        l_U22 = -243292265;
        l_U23 = -978551754;
        l_U24 = {-5.50000000, 0.00000000, 0.00000000};
        l_U27 = {5.50000000, 0.00000000, 0.00000000};
        l_U5 = {-1237.41700000, 463.32100000, 6.27900000};
        l_U8 = {-1237.41700000, 457.07700000, 6.27900000};
        l_U30 = {0.00000000, 8.00000000, 0.00000000};
        l_U33 = {0.00000000, -8.00000000, 0.00000000};
        l_U52 = {5.00000000, 9.00000000, 5.00000000};
        l_U36 = 270.00000000;
    }
    l_U20 = VDIST( l_U37, l_U49 );
    if (l_U20 < 5.00000000)
    {
        l_U22 = 0;
        l_U23 = -978551754;
        l_U24 = {-5.50000000, 0.00000000, 0.00000000};
        l_U27 = {5.50000000, 0.00000000, 0.00000000};
        l_U5 = {0.00000000, 0.00000000, 0.00000000};
        l_U8 = {-1213.55700000, -205.12240000, 4.92500000};
        l_U30 = {0.00000000, 0.00000000, 0.00000000};
        l_U33 = {0.00000000, 0.00000000, 0.00000000};
        l_U52 = {9.00000000, 9.00000000, 9.00000000};
        l_U36 = 0.00000000;
    }
    return;
}

void sub_1792()
{
    if (sub_1801())
    {
        switch (l_U1)
        {
            case 0:
            if (sub_2009())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U3, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U14._fU0, ref l_U14._fU4, ref l_U14._fU8 );
                l_U1 = 1;
            }
            else if (sub_222())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U3, l_U30._fU0, l_U30._fU4, l_U30._fU8, ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
                if (NOT (IS_CHAR_INJURED( sub_2150() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2150(), l_U11._fU0, l_U11._fU4, l_U11._fU8, l_U52._fU8, l_U52._fU8, l_U52._fU8, l_U59 ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U3, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U14._fU0, ref l_U14._fU4, ref l_U14._fU8 );
                        l_U1 = 1;
                    }
                }
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U11._fU0, l_U11._fU4, l_U11._fU8, 4.50000000, 0, 1, ref l_U21 );
                if (NOT (IS_CAR_DEAD( l_U21 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U3, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U14._fU0, ref l_U14._fU4, ref l_U14._fU8 );
                    l_U1 = 1;
                }
            }
            break;
            case 1:
            if (sub_2009())
            {
                sub_2406();
                if (sub_2489( l_U3, l_U14 ))
                {
                    sub_1874();
                    l_U1 = 2;
                }
            }
            else if (sub_222())
            {
                sub_2406();
                if (sub_2489( l_U3, l_U14 ))
                {
                    sub_1874();
                    l_U1 = 2;
                }
            }
            break;
            case 2:
            if (sub_2632())
            {
                sub_2406();
                if (sub_2489( l_U3, l_U5 ))
                {
                    sub_1874();
                    l_U1 = 0;
                }
            }
            else if (sub_222())
            {
                if (NOT (IS_CHAR_INJURED( sub_2150() )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2150(), l_U5._fU0, l_U5._fU4, l_U5._fU8, 15.00000000, 15.00000000, 15.00000000, l_U59 )))
                    {
                        if (sub_2802( l_U5 ))
                        {
                            sub_2406();
                            if (sub_2489( l_U3, l_U5 ))
                            {
                                sub_1874();
                                l_U1 = 0;
                            }
                        }
                        else
                        {
                            sub_1874();
                        }
                    }
                    else
                    {
                        sub_1874();
                    }
                }
            }
            break;
        }
    }
    if (sub_2928())
    {
        switch (l_U2)
        {
            case 0:
            if (sub_3136())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4, l_U27._fU0, l_U27._fU4, l_U27._fU8, ref l_U17._fU0, ref l_U17._fU4, ref l_U17._fU8 );
                l_U2 = 1;
            }
            else if (sub_222())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4, l_U33._fU0, l_U33._fU4, l_U33._fU8, ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
                if (NOT (IS_CHAR_INJURED( sub_2150() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2150(), l_U11._fU0, l_U11._fU4, l_U11._fU8, l_U52._fU8, l_U52._fU8, l_U52._fU8, l_U59 ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4, l_U27._fU0, l_U27._fU4, l_U27._fU8, ref l_U17._fU0, ref l_U17._fU4, ref l_U17._fU8 );
                        l_U2 = 1;
                    }
                }
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U11._fU0, l_U11._fU4, l_U11._fU8, 4.50000000, 0, 1, ref l_U21 );
                if (NOT (IS_CAR_DEAD( l_U21 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U4, l_U27._fU0, l_U27._fU4, l_U27._fU8, ref l_U17._fU0, ref l_U17._fU4, ref l_U17._fU8 );
                    l_U2 = 1;
                }
            }
            break;
            case 1:
            if (sub_3136())
            {
                sub_3503();
                if (sub_2489( l_U4, l_U17 ))
                {
                    sub_3001();
                    l_U2 = 2;
                }
            }
            else if (sub_222())
            {
                sub_3503();
                if (sub_2489( l_U4, l_U17 ))
                {
                    sub_3001();
                    l_U2 = 2;
                }
            }
            break;
            case 2:
            if (sub_3656())
            {
                sub_3503();
                if (sub_2489( l_U4, l_U8 ))
                {
                    sub_3001();
                    l_U2 = 0;
                }
            }
            else if (sub_222())
            {
                if (NOT (IS_CHAR_INJURED( sub_2150() )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2150(), l_U8._fU0, l_U8._fU4, l_U8._fU8, 15.00000000, 15.00000000, 15.00000000, l_U59 )))
                    {
                        if (sub_2802( l_U8 ))
                        {
                            sub_3503();
                            if (sub_2489( l_U4, l_U8 ))
                            {
                                sub_3001();
                                l_U2 = 0;
                            }
                        }
                        else
                        {
                            sub_3001();
                        }
                    }
                    else
                    {
                        sub_3001();
                    }
                }
            }
            break;
        }
    }
    return;
}

int sub_1801()
{
    if (DOES_OBJECT_EXIST( l_U3 ))
    {
        if (NOT (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U5._fU0, l_U5._fU4, l_U5._fU8, 3.00000000, -243292265, 1, 1 )))
        {
            return 1;
        }
        else
        {
            sub_1874();
        }
    }
    else
    {
        sub_1874();
    }
    return 0;
}

void sub_1874()
{
    if (l_U58 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U58 )))
        {
            STOP_SOUND( l_U58 );
        }
        RELEASE_SOUND_ID( l_U58 );
        l_U58 = -1;
    }
    return;
}

int sub_2009()
{
    if (NOT sub_222())
    {
        if (g_U9154)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2150()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2406()
{
    if (DOES_OBJECT_EXIST( l_U3 ))
    {
        if (l_U58 == -1)
        {
            l_U58 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U58, l_U57, l_U3 );
        }
    }
    return;
}

int sub_2489(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (SLIDE_OBJECT( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 0.10000000, 0.10000000, 0.10000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2632()
{
    if (NOT sub_222())
    {
        if (NOT g_U9154)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2802(unknown uParam0, unknown uParam1, unknown uParam2)
{
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uParam0._fU0, uParam0._fU4, uParam0._fU8, 7.50000000, 0, 1, ref l_U21 );
    if (IS_CAR_DEAD( l_U21 ))
    {
        return 1;
    }
    return 0;
}

int sub_2928()
{
    if (DOES_OBJECT_EXIST( l_U4 ))
    {
        if (NOT (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U8._fU0, l_U8._fU4, l_U8._fU8, 3.00000000, -978551754, 1, 1 )))
        {
            return 1;
        }
        else
        {
            sub_3001();
        }
    }
    else
    {
        sub_3001();
    }
    return 0;
}

void sub_3001()
{
    if (l_U56 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U56 )))
        {
            STOP_SOUND( l_U56 );
        }
        RELEASE_SOUND_ID( l_U56 );
        l_U56 = -1;
    }
    return;
}

int sub_3136()
{
    if (NOT sub_222())
    {
        if (g_U9155)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3503()
{
    if (DOES_OBJECT_EXIST( l_U4 ))
    {
        if (l_U56 == -1)
        {
            l_U56 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U56, l_U55, l_U4 );
        }
    }
    return;
}

int sub_3656()
{
    if (NOT sub_222())
    {
        if (NOT g_U9155)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3915()
{
    sub_3001();
    sub_1874();
    if (DOES_OBJECT_EXIST( l_U3 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U3 );
    }
    if (DOES_OBJECT_EXIST( l_U4 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U4 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

