void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U24 = 0;
    l_U25 = 0;
    l_U42 = {-1273.05000000, -119.19920000, 4.37280000};
    l_U45 = {-1165.12100000, 578.31390000, 4.52770000};
    l_U48 = {-1237.41700000, 463.32100000, 6.17900000};
    l_U51 = {-1213.58500000, -204.91600000, 4.89800000};
    l_U57 = "CHAINLINK_SLIDING_GATE";
    l_U58 = -1;
    l_U59 = "CHAINLINK_SLIDING_GATE";
    l_U60 = -1;
    l_U61 = 0;
    l_U39 = {l_U62._fU4[0]};
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (sub_238())
    {
        g_U10500 = 0;
        g_U10501 = 0;
    }
    if (g_U10518)
    {
        g_U10500 = 1;
    }
    if (g_U10519)
    {
        g_U10501 = 1;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U2)
            {
                case 0:
                if (sub_369())
                {
                    l_U2 = 1;
                }
                break;
                case 1:
                sub_1835();
                break;
                case 2: break;
            }
        }
        else
        {
            sub_3963();
        }
    }
    return;
}

void sub_238()
{
    int Result;

    Result = 1;
    return Result;
}

int sub_369()
{
    sub_378();
    if (l_U24 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U6 ))
        {
            return 1;
        }
    }
    else if (NOT (DOES_OBJECT_EXIST( l_U5 )))
    {
        REQUEST_MODEL( l_U24 );
        if (HAS_MODEL_LOADED( l_U24 ))
        {
            if (g_U10500)
            {
                CREATE_OBJECT_NO_OFFSET( l_U24, l_U7._fU0, l_U7._fU4, l_U7._fU8, ref l_U5, 1 );
                SET_OBJECT_HEADING( l_U5, l_U38 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5, l_U26._fU0, l_U26._fU4, l_U26._fU8, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
                SET_OBJECT_COORDINATES( l_U5, l_U16._fU0, l_U16._fU4, l_U16._fU8 );
                l_U3 = 2;
            }
            else
            {
                CREATE_OBJECT_NO_OFFSET( l_U24, l_U7._fU0, l_U7._fU4, l_U7._fU8, ref l_U5, 1 );
            }
            SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( l_U7._fU0, l_U7._fU4, l_U7._fU8, 1.00000000, l_U24, 1 );
            SET_OBJECT_HEADING( l_U5, l_U38 );
        }
        else
        {
            REQUEST_MODEL( l_U24 );
        }
    }
    if (l_U25 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U5 ))
        {
            return 1;
        }
    }
    else if (NOT (DOES_OBJECT_EXIST( l_U6 )))
    {
        REQUEST_MODEL( l_U25 );
        if (HAS_MODEL_LOADED( l_U25 ))
        {
            if (g_U10501)
            {
                CREATE_OBJECT_NO_OFFSET( l_U25, l_U10._fU0, l_U10._fU4, l_U10._fU8, ref l_U6, 1 );
                SET_OBJECT_HEADING( l_U6, l_U38 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U6, l_U29._fU0, l_U29._fU4, l_U29._fU8, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                SET_OBJECT_COORDINATES( l_U6, l_U19._fU0, l_U19._fU4, l_U19._fU8 );
                l_U4 = 2;
            }
            else
            {
                CREATE_OBJECT_NO_OFFSET( l_U25, l_U10._fU0, l_U10._fU4, l_U10._fU8, ref l_U6, 1 );
            }
            SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE( l_U10._fU0, l_U10._fU4, l_U10._fU8, 1.00000000, l_U25, 1 );
            SET_OBJECT_HEADING( l_U6, l_U38 );
        }
        else
        {
            REQUEST_MODEL( l_U25 );
        }
    }
    else if (DOES_OBJECT_EXIST( l_U5 ))
    {
        return 1;
    };;;
    return 0;
}

void sub_378()
{
    l_U22 = VDIST( l_U39, l_U42 );
    if (l_U22 < 5.00000000)
    {
        l_U24 = -243292265;
        l_U25 = -978551754;
        l_U26 = {-5.50000000, 0.00000000, 0.00000000};
        l_U29 = {5.50000000, 0.00000000, 0.00000000};
        l_U7 = {-1272.61000000, -114.87900000, 6.01800000};
        l_U10 = {-1272.63900000, -123.66600000, 6.01800000};
        l_U32 = {0.00000000, 8.00000000, 0.00000000};
        l_U35 = {0.00000000, -8.00000000, 0.00000000};
        l_U54 = {5.00000000, 9.00000000, 5.00000000};
        l_U38 = 270.00000000;
    }
    l_U22 = VDIST( l_U39, l_U45 );
    if (l_U22 < 5.00000000)
    {
        l_U24 = -243292265;
        l_U25 = -978551754;
        l_U26 = {-5.50000000, 0.00000000, 0.00000000};
        l_U29 = {5.50000000, 0.00000000, 0.00000000};
        l_U7 = {-1169.72800000, 577.16900000, 6.17900000};
        l_U10 = {-1161.14100000, 577.16900000, 6.17900000};
        l_U32 = {0.00000000, 8.00000000, 0.00000000};
        l_U35 = {0.00000000, -8.00000000, 0.00000000};
        l_U54 = {5.00000000, 9.00000000, 5.00000000};
        l_U38 = 0.00000000;
    }
    l_U22 = VDIST( l_U39, l_U48 );
    if (l_U22 < 5.00000000)
    {
        l_U24 = -243292265;
        l_U25 = -978551754;
        l_U26 = {-5.50000000, 0.00000000, 0.00000000};
        l_U29 = {5.50000000, 0.00000000, 0.00000000};
        l_U7 = {-1237.41700000, 463.32100000, 6.27900000};
        l_U10 = {-1237.41700000, 457.07700000, 6.27900000};
        l_U32 = {0.00000000, 8.00000000, 0.00000000};
        l_U35 = {0.00000000, -8.00000000, 0.00000000};
        l_U54 = {5.00000000, 9.00000000, 5.00000000};
        l_U38 = 270.00000000;
    }
    l_U22 = VDIST( l_U39, l_U51 );
    if (l_U22 < 5.00000000)
    {
        l_U24 = 0;
        l_U25 = -978551754;
        l_U26 = {-5.50000000, 0.00000000, 0.00000000};
        l_U29 = {5.50000000, 0.00000000, 0.00000000};
        l_U7 = {0.00000000, 0.00000000, 0.00000000};
        l_U10 = {-1213.55700000, -205.12240000, 4.92500000};
        l_U32 = {0.00000000, 0.00000000, 0.00000000};
        l_U35 = {0.00000000, 0.00000000, 0.00000000};
        l_U54 = {9.00000000, 9.00000000, 9.00000000};
        l_U38 = 0.00000000;
    }
    return;
}

void sub_1835()
{
    float fVar2;

    fVar2 = 6.00000000;
    if (sub_1851())
    {
        switch (l_U3)
        {
            case 0:
            if (sub_2059())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5, l_U26._fU0, l_U26._fU4, l_U26._fU8, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
                l_U3 = 1;
            }
            else if (sub_238())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5, l_U26._fU0, l_U26._fU4, l_U26._fU8, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U5, l_U32._fU0, l_U32._fU4, l_U32._fU8, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
                if (NOT (IS_CHAR_INJURED( sub_2249() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2249(), l_U13._fU0, l_U13._fU4, l_U13._fU8, l_U54._fU8, l_U54._fU8, l_U54._fU8, l_U61 ))
                    {
                        l_U3 = 1;
                    }
                }
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U13._fU0, l_U13._fU4, l_U13._fU8, fVar2, 0, 1, ref l_U23 );
                if (NOT (IS_CAR_DEAD( l_U23 )))
                {
                    l_U3 = 1;
                }
                if (g_U10518)
                {
                    l_U3 = 1;
                }
            }
            break;
            case 1:
            if (sub_2059())
            {
                sub_2442();
                if (sub_2525( l_U5, l_U16 ))
                {
                    sub_1924();
                    l_U3 = 2;
                }
            }
            else if (sub_238())
            {
                sub_2442();
                if (sub_2525( l_U5, l_U16 ))
                {
                    sub_1924();
                    l_U3 = 2;
                }
            }
            break;
            case 2:
            if (sub_2668())
            {
                sub_2442();
                if (sub_2525( l_U5, l_U7 ))
                {
                    sub_1924();
                    l_U3 = 0;
                }
            }
            else if (sub_238())
            {
                if (NOT (IS_CHAR_INJURED( sub_2249() )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2249(), l_U7._fU0, l_U7._fU4, l_U7._fU8, 15.00000000, 15.00000000, 15.00000000, l_U61 )))
                    {
                        if ((g_U10518 == 0) AND (sub_2845( l_U7 )))
                        {
                            sub_2442();
                            if (sub_2525( l_U5, l_U7 ))
                            {
                                sub_1924();
                                l_U3 = 0;
                            }
                        }
                        else
                        {
                            sub_1924();
                        }
                    }
                    else
                    {
                        sub_1924();
                    }
                }
            }
            break;
        }
    }
    if (sub_2981())
    {
        switch (l_U4)
        {
            case 0:
            if (sub_3189())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U6, l_U29._fU0, l_U29._fU4, l_U29._fU8, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                l_U4 = 1;
            }
            else if (sub_238())
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U6, l_U35._fU0, l_U35._fU4, l_U35._fU8, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U6, l_U29._fU0, l_U29._fU4, l_U29._fU8, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
                if (NOT (IS_CHAR_INJURED( sub_2249() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2249(), l_U13._fU0, l_U13._fU4, l_U13._fU8, l_U54._fU8, l_U54._fU8, l_U54._fU8, l_U61 ))
                    {
                        l_U4 = 1;
                    }
                }
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U13._fU0, l_U13._fU4, l_U13._fU8, fVar2, 0, 1, ref l_U23 );
                if (NOT (IS_CAR_DEAD( l_U23 )))
                {
                    l_U4 = 1;
                }
                if (g_U10519)
                {
                    l_U4 = 1;
                }
            }
            break;
            case 1:
            if (sub_3189())
            {
                sub_3536();
                if (sub_2525( l_U6, l_U19 ))
                {
                    sub_3054();
                    l_U4 = 2;
                }
            }
            else if (sub_238())
            {
                sub_3536();
                if (sub_2525( l_U6, l_U19 ))
                {
                    sub_3054();
                    l_U4 = 2;
                }
            }
            break;
            case 2:
            if (sub_3689())
            {
                sub_3536();
                if (sub_2525( l_U6, l_U10 ))
                {
                    sub_3054();
                    l_U4 = 0;
                }
            }
            else if (sub_238())
            {
                if (NOT (IS_CHAR_INJURED( sub_2249() )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2249(), l_U10._fU0, l_U10._fU4, l_U10._fU8, 15.00000000, 15.00000000, 15.00000000, l_U61 )))
                    {
                        if ((g_U10519 == 0) AND (sub_2845( l_U10 )))
                        {
                            sub_3536();
                            if (sub_2525( l_U6, l_U10 ))
                            {
                                sub_3054();
                                l_U4 = 0;
                            }
                        }
                        else
                        {
                            sub_3054();
                        }
                    }
                    else
                    {
                        sub_3054();
                    }
                }
            }
            break;
        }
    }
    return;
}

int sub_1851()
{
    if (DOES_OBJECT_EXIST( l_U5 ))
    {
        if (NOT (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U7._fU0, l_U7._fU4, l_U7._fU8, 3.00000000, -243292265, 1, 1 )))
        {
            return 1;
        }
        else
        {
            sub_1924();
        }
    }
    else
    {
        sub_1924();
    }
    return 0;
}

void sub_1924()
{
    if (l_U60 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U60 )))
        {
            STOP_SOUND( l_U60 );
        }
        RELEASE_SOUND_ID( l_U60 );
        l_U60 = -1;
    }
    return;
}

int sub_2059()
{
    if (NOT sub_238())
    {
        if ((g_U10518) || (g_U10500))
        {
            return 1;
        }
    }
    return 0;
}

void sub_2249()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2442()
{
    if (DOES_OBJECT_EXIST( l_U5 ))
    {
        if (l_U60 == -1)
        {
            l_U60 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U60, l_U59, l_U5 );
        }
    }
    return;
}

int sub_2525(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_2668()
{
    if (NOT sub_238())
    {
        if ((NOT g_U10518) AND (NOT g_U10500))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2845(unknown uParam0, unknown uParam1, unknown uParam2)
{
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uParam0._fU0, uParam0._fU4, uParam0._fU8, l_U54._fU4, 0, 1, ref l_U23 );
    if (IS_CAR_DEAD( l_U23 ))
    {
        return 1;
    }
    return 0;
}

int sub_2981()
{
    if (DOES_OBJECT_EXIST( l_U6 ))
    {
        if (NOT (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U10._fU0, l_U10._fU4, l_U10._fU8, 3.00000000, -978551754, 1, 1 )))
        {
            return 1;
        }
        else
        {
            sub_3054();
        }
    }
    else
    {
        sub_3054();
    }
    return 0;
}

void sub_3054()
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

int sub_3189()
{
    if (NOT sub_238())
    {
        if ((g_U10519) || (g_U10501))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3536()
{
    if (DOES_OBJECT_EXIST( l_U6 ))
    {
        if (l_U58 == -1)
        {
            l_U58 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U58, l_U57, l_U6 );
        }
    }
    return;
}

int sub_3689()
{
    if (NOT sub_238())
    {
        if ((NOT g_U10519) AND (NOT g_U10501))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3963()
{
    sub_3054();
    sub_1924();
    if (DOES_OBJECT_EXIST( l_U5 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U5 );
    }
    if (DOES_OBJECT_EXIST( l_U6 ))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U6 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

