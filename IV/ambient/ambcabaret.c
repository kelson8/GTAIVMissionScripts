void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 1;
    l_U15 = 1000;
    l_U16 = 1;
    l_U19 = {957.50000000, -273.42000000, 18.47000000};
    l_U22 = {957.44850000, -278.03430000, 17.12360000};
    l_U25 = {965.75970000, -274.38010000, 17.27170000};
    l_U28 = {966.37200000, -277.24790000, 17.37360000};
    l_U31 = {948.10130000, -271.28230000, 17.27470000};
    l_U34 = {947.65110000, -268.34590000, 17.27220000};
    l_U37 = {947.60410000, -269.00350000, 17.27320000};
    l_U40 = {946.49000000, -284.00000000, 22.55000000};
    l_U43 = {968.23000000, -261.44000000, 17.52000000};
    l_U46 = {963.47950000, -287.80000000, 18.97730000};
    l_U49 = {947.50530000, -271.46350000, 17.27470000};
    l_U52 = {967.00000000, -278.70000000, 18.25000000};
    l_U55 = {967.75000000, -278.15000000, 18.25000000};
    l_U58 = 0.10000000;
    l_U59 = 0.97000000;
    l_U60 = 113.27100000;
    l_U61 = 286.99040000;
    l_U62 = 270.24430000;
    l_U63 = 270.13120000;
    l_U64 = 107.97380000;
    l_U69 = "Caberet_room";
    l_U70 = "GtaMloRoom01";
    l_U71 = "GtaMloRoom05";
    l_U72 = "GtaMloRoom02";
    l_U73 = "GtaMloRoom03";
    l_U74 = 0;
    l_U75 = 0;
    l_U76 = 0;
    l_U77 = 0;
    l_U78 = 0;
    l_U98 = 0;
    l_U99 = 0;
    l_U100 = 0;
    l_U101 = {957.37000000, -261.48000000, 21.41200000};
    l_U104 = {-90.00000000, 0.00000000, 180.00000000};
    l_U143 = {957.42000000, -258.95000000, 18.14000000};
    l_U146 = 0;
    l_U147 = 0;
    l_U148 = 0;
    l_U153 = {968.36000000, -256.77000000, 23.33000000};
    l_U156 = {946.87000000, -288.07000000, 17.67000000};
    l_U159 = {945.84820000, -298.33460000, 17.58440000};
    l_U162 = 94.35000000;
    l_U163 = 1;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_727();
    }
    GET_INTERIOR_AT_COORDS( l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U164 );
    while (l_U164 == nil)
    {
        WAIT( 0 );
        GET_INTERIOR_AT_COORDS( l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U164 );
    }
    ACTIVATE_INTERIOR( l_U164, 1 );
    g_U9348 = 0;
    while (l_U163)
    {
        WAIT( 0 );
        if (g_U10978)
        {
            if ((NOT l_U100) AND (NOT (sub_1554( 5 ))))
            {
                l_U13 = 0;
                if (DOES_BLIP_EXIST( l_U85 ))
                {
                    REMOVE_BLIP( l_U85 );
                }
            }
        }
        sub_2113();
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U9)
            {
                case 0:
                if (NOT l_U146)
                {
                    SWITCH_PED_PATHS_OFF( 952.23000000, -264.79000000, 16.52000000, 962.55000000, -257.22000000, 20.98000000 );
                    SWITCH_PED_PATHS_OFF( 946.75000000, -274.57000000, 17.36000000, 949.30000000, -267.16000000, 19.84000000 );
                    l_U146 = 1;
                }
                else
                {
                    sub_2723();
                }
                break;
                case 2:
                if (IS_CHAR_IN_ANY_CAR( sub_2133() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2133(), ref l_U152 );
                }
                if (NOT (IS_CHAR_INJURED( sub_2133() )))
                {
                    if (sub_2825( sub_2133() ))
                    {
                        if ((sub_1554( 5 )) AND ((g_U9347) AND (NOT sub_3646())))
                        {
                            l_U100 = sub_3741( ref l_U95 );
                        }
                        else
                        {
                            l_U100 = 0;
                            l_U75 = 1;
                        }
                        if (l_U100)
                        {
                            sub_3825();
                        }
                        if ((NOT (IS_CHAR_IN_AREA_3D( sub_2133(), 946.48000000, -284.36000000, 16.99000000, 968.44000000, -261.10000000, 23.76000000, 0 ))) AND (NOT l_U78))
                        {
                            sub_2962();
                        }
                        l_U9 = 1;
                    }
                }
                break;
                case 1:
                sub_4292();
                sub_4436();
                SWITCH_PED_PATHS_OFF( l_U28._fU0 + 1.50000000, l_U28._fU4 + 1.50000000, l_U28._fU8 + 1.50000000, l_U28._fU0 - 1.50000000, l_U28._fU4 - 1.50000000, l_U28._fU8 - 1.50000000 );
                CLEAR_AREA_OF_CHARS( l_U28._fU0, l_U28._fU4, l_U28._fU8, 1.00000000 );
                l_U9 = 3;
                break;
                case 3:
                if ((NOT (IS_CHAR_IN_AREA_3D( sub_2133(), 946.48000000, -284.36000000, 16.99000000, 968.44000000, -261.10000000, 23.76000000, 0 ))) AND (NOT l_U78))
                {
                    sub_2962();
                }
                if (l_U75)
                {
                    if ((l_U13) AND ((sub_1554( 5 )) AND ((NOT sub_3646()) AND (g_U9347))))
                    {
                        l_U100 = sub_3741( ref l_U95 );
                        if (l_U100)
                        {
                            sub_3825();
                        }
                        l_U75 = 0;
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( sub_2133() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2133(), ref l_U152 );
                }
                sub_4846( l_U80 );
                sub_5680( l_U79 );
                if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U40, l_U43, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U80 )))
                    {
                        CLEAR_CHAR_TASKS( l_U80 );
                        if (NOT sub_6483())
                        {
                            TASK_SEEK_COVER_FROM_POS( l_U80, 957.20000000, -271.42000000, 18.58000000, 0 );
                        }
                        else
                        {
                            TASK_SMART_FLEE_POINT( l_U80, 957.20000000, -271.42000000, 18.58000000, 40.00000000, 40000 );
                        }
                        l_U74 = 1;
                    }
                    if (DOES_BLIP_EXIST( l_U85 ))
                    {
                        REMOVE_BLIP( l_U85 );
                    }
                    if (l_U100)
                    {
                        l_U99 = 1;
                        sub_868( 3 );
                        sub_1044();
                    }
                    l_U9 = 7;
                }
                if (((l_U100) || (sub_6860())) AND ((NOT sub_6808()) AND ((NOT g_U10980) AND ((NOT g_U9893._fU12) AND ((l_U13) AND ((NOT sub_3646()) AND ((NOT sub_6483()) AND ((NOT sub_6702()) AND (g_U9347)))))))))
                {
                    if (NOT l_U12)
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_2133(), l_U22._fU0, l_U22._fU4, l_U22._fU8 + 4.00000000, 4.00000000, 4.00000000, 4.00000000, 0 ))
                        {
                            PRINT_HELP( "CABARET_HLP1" );
                            if (NOT (DOES_BLIP_EXIST( l_U85 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U25._fU0, l_U25._fU4, l_U25._fU8, ref l_U85 );
                                g_U9348 = 1;
                            }
                            l_U12 = 1;
                        }
                    }
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_2133(), l_U25._fU0, l_U25._fU4, l_U25._fU8 + 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1 ))
                    {
                        CLEAR_HELP();
                        l_U9 = 4;
                        sub_7388();
                    }
                }
                break;
                case 4:
                switch (l_U10)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_8183(), 0 );
                    BEGIN_CAM_COMMANDS( ref l_U14 );
                    SET_CAM_ACTIVE( l_U89, 1 );
                    SET_CAM_PROPAGATE( l_U89, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    END_CAM_COMMANDS( ref l_U14 );
                    if (DOES_BLIP_EXIST( l_U85 ))
                    {
                        REMOVE_BLIP( l_U85 );
                    }
                    CLEAR_CHAR_TASKS( sub_2133() );
                    TASK_GO_STRAIGHT_TO_COORD( sub_2133(), l_U28._fU0, l_U28._fU4, l_U28._fU8, 2, -1 );
                    if (NOT (IS_CHAR_INJURED( l_U81 )))
                    {
                        TASK_GO_STRAIGHT_TO_COORD( l_U81, l_U28._fU0, l_U28._fU4, l_U28._fU8, 2, -1 );
                    }
                    l_U10 = 1;
                    SETTIMERA( 0 );
                    break;
                    case 1:
                    if (TIMERA() > 1300)
                    {
                        l_U10 = 2;
                    }
                    break;
                    case 2:
                    l_U9 = 5;
                    l_U10 = 0;
                    break;
                }
                break;
                case 5:
                sub_8452();
                break;
                case 6:
                switch (l_U11)
                {
                    case 0:
                    BEGIN_CAM_COMMANDS( ref l_U14 );
                    SET_CAM_ACTIVE( l_U89, 0 );
                    SET_CAM_PROPAGATE( l_U89, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U14 );
                    if (NOT (IS_CHAR_INJURED( sub_2133() )))
                    {
                        DETACH_PED( sub_2133(), 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2133() );
                        TASK_CLEAR_LOOK_AT( sub_2133() );
                        SET_CHAR_COORDINATES( sub_2133(), 965.86560000, -274.37060000, 17.27180000 );
                        SET_CHAR_HEADING( sub_2133(), 121.89080000 );
                        SET_CHAR_IN_CUTSCENE( sub_2133(), 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U81 )))
                    {
                        DETACH_PED( l_U81, 1 );
                        CLEAR_CHAR_TASKS( l_U81 );
                        TASK_CLEAR_LOOK_AT( l_U81 );
                        SET_CHAR_COORDINATES( l_U81, 966.49070000, -276.10510000, 17.27300000 );
                        SET_CHAR_HEADING( l_U81, 43.62050000 );
                        SET_CHAR_IN_CUTSCENE( l_U81, 0 );
                    }
                    if (DOES_OBJECT_EXIST( l_U93 ))
                    {
                        DELETE_OBJECT( ref l_U93 );
                    }
                    if (DOES_OBJECT_EXIST( l_U94 ))
                    {
                        DELETE_OBJECT( ref l_U94 );
                    }
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1341473171 );
                    SET_CAM_BEHIND_PED( sub_2133() );
                    if (NOT (DOES_OBJECT_EXIST( l_U92 )))
                    {
                        CREATE_OBJECT( l_U84, l_U101._fU0, l_U101._fU4, l_U101._fU8, ref l_U92, 1 );
                        SET_OBJECT_ROTATION( l_U92, l_U104._fU0, l_U104._fU4, l_U104._fU8 );
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U92, l_U69 );
                        SET_OBJECT_COORDINATES( l_U92, l_U101._fU0, l_U101._fU4, l_U101._fU8 );
                    }
                    else
                    {
                        SET_OBJECT_ROTATION( l_U92, l_U104._fU0, l_U104._fU4, l_U104._fU8 );
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U92, l_U69 );
                        SET_OBJECT_COORDINATES( l_U92, l_U101._fU0, l_U101._fU4, l_U101._fU8 );
                    }
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CABARET_HLP3" ))
                    {
                        CLEAR_HELP();
                    }
                    WAIT( 1000 );
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    SETTIMERA( 0 );
                    l_U11 = 2;
                    break;
                    case 2:
                    SET_PLAYER_CONTROL( sub_8183(), 1 );
                    l_U9 = 7;
                    l_U11 = 0;
                    break;
                }
                break;
                case 7:
                if (NOT l_U74)
                {
                    sub_4846( l_U80 );
                    sub_5680( l_U79 );
                }
                if (l_U100)
                {
                    if (NOT l_U99)
                    {
                        if (sub_6860())
                        {
                            l_U9 = 3;
                        }
                    }
                }
                else if (NOT (IS_WANTED_LEVEL_GREATER( sub_8183(), 0 )))
                {
                    if (sub_6860())
                    {
                        l_U9 = 3;
                    }
                }
                break;
            }
        }
        else
        {
            l_U163 = 0;
        }
    }
    SWITCH_PED_PATHS_ON( l_U28._fU0 + 1.50000000, l_U28._fU4 + 1.50000000, l_U28._fU8 + 1.50000000, l_U28._fU0 - 1.50000000, l_U28._fU4 - 1.50000000, l_U28._fU8 - 1.50000000 );
    sub_727();
    return;
}

void sub_727()
{
    CLEAR_HELP();
    if (DOES_CAM_EXIST( l_U89 ))
    {
        DESTROY_CAM( l_U89 );
    }
    SWITCH_PED_PATHS_ON( 952.23000000, -264.79000000, 16.82000000, 962.55000000, -257.22000000, 20.98000000 );
    SWITCH_PED_PATHS_ON( 946.75000000, -274.57000000, 17.36000000, 949.30000000, -267.16000000, 19.84000000 );
    if ((NOT l_U99) AND (l_U100))
    {
        sub_868( 3 );
        sub_1044();
    }
    if (DOES_BLIP_EXIST( l_U85 ))
    {
        REMOVE_BLIP( l_U85 );
    }
    if (NOT l_U99)
    {
        sub_1286();
    }
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000, 1.00000000 );
    CLEAR_SEQUENCE_TASK( l_U90 );
    CLEAR_SEQUENCE_TASK( l_U91 );
    CLEAR_SCRIPTED_CONVERSION_CENTRE();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_868(unknown uParam0)
{
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        g_U32898._fU20 = uParam0;
        if (sub_935( g_U32898._fU0 ))
        {
            g_U32898._fU16 = uParam0;
        }
        return;
    }
    g_U32898._fU16 = uParam0;
    return;
}

int sub_935(unknown uParam0)
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

void sub_1044()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U10979 = 0;
    if (g_U32898._fU0 == 54)
    {
        g_U10978 = 0;
        sub_1099();
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU20 == 8)
        {
            g_U32898._fU20 = 3;
        }
    }
    else if (NOT (g_U32898._fU4 == 9))
    {
        if (g_U32898._fU16 == 8)
        {
            g_U32898._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U32898._fU28 = 1;
    return;
}

void sub_1099()
{
    g_U32896._fU4 = 1;
    return;
}

void sub_1286()
{
    if (NOT g_U32898._fU72)
    {
        return;
    }
    g_U32898._fU72 = 0;
    g_U32898._fU36[5]++;
    return;
}

int sub_1554(int iParam0)
{
    unknown uVar3;

    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    if (sub_935( g_U32898._fU0 ))
    {
        if (NOT (sub_1615( g_U32898._fU0, iParam0 )))
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

int sub_1615(int iParam0, int iParam1)
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

void sub_2113()
{
    if (NOT l_U77)
    {
        if (sub_2174( sub_2133() ))
        {
            SET_SCRIPTED_CONVERSION_CENTRE( l_U19 );
            l_U77 = 1;
        }
    }
    else if (NOT (sub_2174( sub_2133() )))
    {
        CLEAR_SCRIPTED_CONVERSION_CENTRE();
        l_U77 = 0;
    }
    return;
}

void sub_2133()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2174(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_CHAR_IN_AREA_3D( uParam0, 952.52000000, -289.02000000, 18.95000000, 965.01000000, -284.13000000, 22.76000000, 0 )) || ((IS_CHAR_IN_AREA_3D( uParam0, 946.48000000, -284.36000000, 16.99000000, 968.44000000, -261.10000000, 23.76000000, 0 )) || ((IS_CHAR_IN_AREA_3D( uParam0, 946.48000000, -261.00000000, 17.66000000, 967.75000000, -257.34000000, 23.76000000, 0 )) || ((IS_CHAR_IN_AREA_3D( uParam0, 949.85000000, -258.04000000, 15.88000000, 952.86000000, -258.05000000, 20.97000000, 0 )) || ((IS_CHAR_IN_AREA_3D( uParam0, 949.28010000, -254.17000000, 15.88000000, 959.31000000, -250.72000000, 18.77000000, 0 )) || (IS_CHAR_IN_AREA_3D( uParam0, 948.23000000, -250.29000000, 15.88000000, 955.78000000, -245.13000000, 18.40000000, 0 )))))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_2723()
{
    switch (l_U8)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( sub_2133() )))
        {
            if ((sub_2825( sub_2133() )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2133(), 957.74120000, -291.33820000, 18.68050000, 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                sub_2962();
                l_U82 = -1788328884;
                l_U83 = -2139064254;
                l_U84 = 617421203;
                REQUEST_MODEL( l_U82 );
                REQUEST_MODEL( l_U83 );
                REQUEST_ANIMS( "MISSCABARET" );
                l_U8 = 1;
            }
        }
        break;
        case 1:
        while ((NOT (HAS_MODEL_LOADED( l_U83 ))) || (NOT (HAS_MODEL_LOADED( l_U82 ))))
        {
            WAIT( 0 );
        }
        CREATE_OBJECT( l_U84, l_U101._fU0, l_U101._fU4, l_U101._fU8, ref l_U92, 1 );
        SET_OBJECT_ROTATION( l_U92, l_U104._fU0, l_U104._fU4, l_U104._fU8 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U92, l_U69 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U84 );
        while (NOT (HAVE_ANIMS_LOADED( "MISSCABARET" )))
        {
            WAIT( 0 );
        }
        if (DOES_OBJECT_EXIST( l_U92 ))
        {
            SET_OBJECT_COORDINATES( l_U92, l_U101._fU0, l_U101._fU4, l_U101._fU8 );
        }
        BEGIN_CAM_COMMANDS( ref l_U14 );
        CREATE_CAM( 14, ref l_U89 );
        SET_CAM_POS( l_U89, 968.34000000, -278.89000000, 19.54000000 );
        SET_CAM_ROT( l_U89, -23.93000000, -0.00000000, 45.32000000 );
        SET_CAM_FOV( l_U89, 45.70000000 );
        END_CAM_COMMANDS( ref l_U14 );
        l_U9 = 2;
        break;
    }
    return;
}

int sub_2825(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
        if ((iVar3 == (GET_HASH_KEY( l_U73 ))) || ((iVar3 == (GET_HASH_KEY( l_U72 ))) || ((iVar3 == (GET_HASH_KEY( l_U71 ))) || ((iVar3 == (GET_HASH_KEY( l_U70 ))) || (iVar3 == (GET_HASH_KEY( l_U69 )))))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_2962()
{
    if (DOES_SCENARIO_EXIST_IN_AREA( 950.37070000, -267.27340000, 17.27310000, 8.00000000, 1 ))
    {
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 951.74290000, -281.71600000, 18.90250000, 5.00000000, 5 );
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 963.68720000, -281.04060000, 18.90240000, 5.00000000, 5 );
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 950.37070000, -267.27340000, 17.27310000, 8.00000000, 6 );
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 965.03540000, -271.38370000, 18.17290000, 12.00000000, 12 );
        l_U78 = 1;
    }
    return;
}

int sub_3646()
{
    if (DOES_SCRIPT_EXIST( "michelle1" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "michelle1" )) > 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3741(unknown uParam0)
{
    (uParam0^) = g_U32898._fU0;
    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    return 1;
}

void sub_3825()
{
    if ((NOT (l_U98 == 0)) AND (IS_CHAR_INJURED( l_U81 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U81, sub_2133(), 0 ))
        {
            sub_868( 5 );
        }
        else
        {
            sub_868( 4 );
        }
        l_U99 = 1;
        sub_1044();
    }
    else
    {
        switch (l_U98)
        {
            case 0:
            sub_3952();
            GET_GROUP_MEMBER( sub_4138(), 0, ref l_U81 );
            l_U98 = 1;
            break;
            case 1: break;
            case 2: break;
        }
    }
    return;
}

void sub_3952()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U10979 = 1;
    if (NOT (g_U32898._fU0 == 54))
    {
        g_U32898._fU24 = 1;
        g_U32898._fU28 = 0;
        if (NOT (g_U32898._fU8 == 9))
        {
            sub_4031();
        }
        return;
    }
    g_U10978 = 1;
    sub_4103();
    return;
}

void sub_4031()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_4103()
{
    g_U32896._fU4 = 0;
    return;
}

void sub_4138()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4292()
{
    CREATE_CHAR( 5, l_U82, l_U46._fU0, l_U46._fU4, l_U46._fU8, ref l_U79, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U79, 7, 1, 0 );
    SET_CHAR_HEADING( l_U79, l_U60 );
    SET_CHAR_NEVER_TARGETTED( l_U79, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U79, l_U72 );
    SET_CHAR_RELATIONSHIP( l_U79, 0, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U82 );
    return;
}

void sub_4436()
{
    CREATE_CHAR( 4, l_U83, l_U49._fU0, l_U49._fU4, l_U49._fU8, ref l_U80, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U80 );
    SET_CHAR_HEADING( l_U80, l_U61 );
    SET_CHAR_NEVER_TARGETTED( l_U80, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U80, l_U69 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U83 );
    return;
}

void sub_4846(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT l_U74)
        {
            GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U88 );
            if (l_U88 == 7)
            {
                GENERATE_RANDOM_INT_IN_RANGE( l_U16, l_U15, ref l_U18 );
                if (l_U18 > 950)
                {
                    sub_4936( uParam0 );
                }
            }
        }
        else if (NOT l_U147)
        {
            CLEAR_CHAR_TASKS( l_U80 );
            TASK_SEEK_COVER_FROM_POS( l_U80, 957.20000000, -271.42000000, 18.58000000, 0 );
            l_U147 = 1;
        }
    }
    return;
}

void sub_4936(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4947( 1, 4 );
    if (iVar3 == 1)
    {
        l_U96 = 1;
        sub_4997( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U96 = 2;
        sub_4997( uParam0 );
    }
    else if (iVar3 == 3)
    {
        l_U96 = 3;
        sub_4997( uParam0 );
    };;;
    return;
}

void sub_4947(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_4997(unknown uParam0)
{
    switch (l_U96)
    {
        case 1:
        OPEN_SEQUENCE_TASK( ref l_U86 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U34._fU0, l_U34._fU4, l_U34._fU8, 2, 10000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U63 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", "MISSCABARET", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U86 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U86 );
            CLEAR_SEQUENCE_TASK( l_U86 );
        }
        break;
        case 2:
        OPEN_SEQUENCE_TASK( ref l_U86 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U31._fU0, l_U31._fU4, l_U31._fU8, 2, 10000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U62 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", "MISSCABARET", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U86 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U86 );
            CLEAR_SEQUENCE_TASK( l_U86 );
        }
        break;
        case 3:
        OPEN_SEQUENCE_TASK( ref l_U86 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U37._fU0, l_U37._fU4, l_U37._fU8, 2, 10000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U64 );
        TASK_PLAY_ANIM( 0, "USE_OPTIC", "MISSCABARET", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U86 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U86 );
            CLEAR_SEQUENCE_TASK( l_U86 );
        }
        break;
    }
    return;
}

void sub_5680(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_2D( uParam0, l_U46._fU0, l_U46._fU4, 1.00000000, 1.00000000, 0 ))
        {
            l_U148 = 0;
            GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U88 );
            if (l_U88 == 7)
            {
                GENERATE_RANDOM_INT_IN_RANGE( l_U16, l_U15, ref l_U17 );
                if (l_U17 > 950)
                {
                    sub_5804( uParam0 );
                }
            }
        }
        else if (NOT l_U148)
        {
            OPEN_SEQUENCE_TASK( ref l_U149 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U46._fU0, l_U46._fU4, l_U46._fU8, 2, -2, 0.25000000 );
            TASK_ACHIEVE_HEADING( 0, l_U60 );
            CLOSE_SEQUENCE_TASK( l_U149 );
            TASK_PERFORM_SEQUENCE( uParam0, l_U149 );
            CLEAR_SEQUENCE_TASK( l_U149 );
            l_U148 = 1;
        }
    }
    return;
}

void sub_5804(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4947( 0, 3 );
    if (iVar3 == 0)
    {
        l_U97 = 0;
        sub_5839( uParam0 );
    }
    else if (iVar3 == 1)
    {
        l_U97 = 1;
        sub_5839( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U97 = 2;
        sub_5839( uParam0 );
    };;;
    return;
}

void sub_5839(unknown uParam0)
{
    switch (l_U97)
    {
        case 0:
        OPEN_SEQUENCE_TASK( ref l_U87 );
        TASK_PLAY_ANIM_UPPER_BODY( 0, "sit_idle_b", "MISSCABARET", 4.00000000, 0, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( l_U87 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U87 );
            CLEAR_SEQUENCE_TASK( l_U87 );
        }
        break;
        case 1:
        OPEN_SEQUENCE_TASK( ref l_U87 );
        TASK_PLAY_ANIM_UPPER_BODY( 0, "sit_idle_a", "MISSCABARET", 4.00000000, 0, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( l_U87 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U87 );
            CLEAR_SEQUENCE_TASK( l_U87 );
        }
        break;
        case 2:
        OPEN_SEQUENCE_TASK( ref l_U87 );
        TASK_PLAY_ANIM_UPPER_BODY( 0, "idle_stretch_a", "MISSCABARET", 4.00000000, 0, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( l_U87 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U87 );
            CLEAR_SEQUENCE_TASK( l_U87 );
        }
        break;
    }
    return;
}

int sub_6483()
{
    if (DOES_SCRIPT_EXIST( "faustin6" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "faustin6" )) > 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_6702()
{
    if (DOES_SCRIPT_EXIST( "faustin3" ))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "faustin3" )) > 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_6808()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_6860()
{
    if (g_U9349._fU0._fU4 == 0)
    {
        return 1;
    }
    else if (sub_6900( g_U9349 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_6900(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar6 == uParam0._fU0._fU0) AND (iVar7 == uParam0._fU0._fU4))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_7069( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_7069(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7388()
{
    sub_7397();
    sub_7500( ref g_U9893._fU68 );
    sub_7549();
    return;
}

void sub_7397()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_7500(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7549()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7587( 1, g_U569[I] )) == 0)
        {
            sub_7838( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8016())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_7838(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7923( g_U569 - 1 );
    return;
}

void sub_7923(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_8016()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7587( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8183()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_8452()
{
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    if (NOT l_U76)
    {
        sub_8515();
    }
    sub_8858();
    if (DOES_VEHICLE_EXIST( l_U152 ))
    {
        if (IS_VEH_DRIVEABLE( l_U152 ))
        {
            if (IS_CAR_IN_AREA_3D( l_U152, l_U156._fU0, l_U156._fU4, l_U156._fU8, l_U153._fU0, l_U153._fU4, l_U153._fU8, 0 ))
            {
                if (IS_VEH_DRIVEABLE( l_U152 ))
                {
                    SET_CAR_COORDINATES( l_U152, l_U159._fU0, l_U159._fU4, l_U159._fU8 );
                    SET_CAR_HEADING( l_U152, l_U162 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U152 );
                }
            }
        }
        else
        {
            DELETE_CAR( ref l_U152 );
        }
    }
    CLEAR_AREA_OF_CARS( l_U143._fU0, l_U143._fU4, l_U143._fU8, 20.00000000 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    MUTE_GAMEWORLD_AUDIO( 1 );
    MUTE_POSITIONED_RADIO( 1 );
    CLEAR_AREA( l_U28._fU0, l_U28._fU4, l_U28._fU8, 2.00000000, 1 );
    if (g_U9363 == 0)
    {
        l_U150 = "show_1";
        l_U151 = "SHOW1AU";
    }
    else if (g_U9363 == 1)
    {
        l_U150 = "show_2";
        l_U151 = "SHOW2AU";
    }
    else if (g_U9363 == 2)
    {
        l_U150 = "show_3";
        l_U151 = "SHOW3AU";
    }
    else if (g_U9363 == 3)
    {
        l_U150 = "show_4";
        l_U151 = "SHOW4AU";
    }
    else if (g_U9363 == 4)
    {
        l_U150 = "show_5";
        l_U151 = "SHOW5AU";
    }
    else if (g_U9363 == 5)
    {
        l_U150 = "show_6";
        l_U151 = "SHOW6AU";
    }
    else if (g_U9363 == 6)
    {
        l_U150 = "show_7";
        l_U151 = "SHOW7AU";
    }
    else if (g_U9363 == 7)
    {
        l_U150 = "show_8";
        l_U151 = "SHOW8AU";
    };;;;;;;;
    LOAD_ADDITIONAL_TEXT( l_U151, 3 );
    ENABLE_SCENE_STREAMING( 0 );
    START_CUTSCENE_NOW( l_U150 );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
        if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
        {
            for ( l_U107 = 0; l_U107 < l_U108; l_U107++ )
            {
                sub_10338( l_U107 );
            }
            if (NOT (IS_CHAR_DEAD( sub_2133() )))
            {
                TASK_LOOK_AT_COORD( sub_2133(), l_U143._fU0, l_U143._fU4, l_U143._fU8 + 0.80000000, 20000, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U81 )))
            {
                TASK_LOOK_AT_COORD( l_U81, l_U143._fU0, l_U143._fU4, l_U143._fU8 + 0.80000000, 20000, 0 );
            }
        }
    }
    if (g_U9363 == 7)
    {
        g_U9363 = 0;
    }
    else
    {
        g_U9363++;
    }
    CLEAR_NAMED_CUTSCENE( l_U150 );
    ENABLE_SCENE_STREAMING( 1 );
    for ( l_U107 = 0; l_U107 < l_U108; l_U107++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U108[l_U107] )))
        {
            TASK_CLEAR_LOOK_AT( l_U108[l_U107] );
        }
    }
    if (l_U100)
    {
        if (WAS_CUTSCENE_SKIPPED())
        {
            sub_868( 3 );
        }
        else
        {
            sub_868( 0 );
        }
        l_U99 = 1;
        sub_1044();
        if (NOT (IS_CHAR_INJURED( l_U81 )))
        {
            SET_CHAR_PROOFS( l_U81, 0, 0, 0, 0, 0 );
        }
    }
    sub_10791();
    MUTE_GAMEWORLD_AUDIO( 0 );
    MUTE_POSITIONED_RADIO( 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    l_U99 = 1;
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    l_U9 = 6;
    return;
}

void sub_8515()
{
    unknown uVar2;

    for ( l_U107 = 0; l_U107 < l_U108; l_U107++ )
    {
        ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
        GET_CLOSEST_CHAR( 959, 65268, 18.50000000, 35.00000000, 1, 0, ref uVar2 );
        if (NOT (IS_CHAR_INJURED( uVar2 )))
        {
            SET_CHAR_AS_MISSION_CHAR( uVar2 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( uVar2, 0 );
            GET_CHAR_COORDINATES( uVar2, ref l_U65, ref l_U66, ref l_U67 );
            WAIT( 0 );
            if (NOT (IS_CHAR_INJURED( uVar2 )))
            {
                if (DOES_SCENARIO_EXIST_IN_AREA( l_U65, l_U66, l_U67, 4.00000000, 1 ))
                {
                    TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( uVar2, l_U65, l_U66, l_U67, 4.00000000 );
                    GET_CHAR_HEADING( uVar2, ref l_U68 );
                    SET_CHAR_IN_CUTSCENE( uVar2, 1 );
                    l_U108[l_U107] = uVar2;
                }
                else
                {
                    DELETE_CHAR( ref uVar2 );
                }
            }
            else if (DOES_CHAR_EXIST( uVar2 ))
            {
                DELETE_CHAR( ref uVar2 );
            }
        }
        else if (DOES_CHAR_EXIST( uVar2 ))
        {
            DELETE_CHAR( ref uVar2 );
        }
    }
    l_U76 = 1;
    return;
}

void sub_8858()
{
    REQUEST_MODEL( -1341473171 );
    while (NOT (HAS_MODEL_LOADED( -1341473171 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_INJURED( sub_2133() )))
    {
        CREATE_OBJECT( -1341473171, l_U52._fU0, l_U52._fU4, l_U52._fU8, ref l_U93, 1 );
        SET_OBJECT_VISIBLE( l_U93, 0 );
        SET_OBJECT_COLLISION( l_U93, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2133() )))
        {
            SET_CHAR_COORDINATES( sub_2133(), l_U52._fU0, l_U52._fU4, l_U52._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_2133(), l_U52._fU0, l_U52._fU4, l_U52._fU8 );
        }
        SET_CHAR_IN_CUTSCENE( sub_2133(), 1 );
        ATTACH_PED_TO_OBJECT( sub_2133(), l_U93, 0, 0, 0, 0, l_U58, 0, 0, 0 );
        TASK_PLAY_ANIM( sub_2133(), "sit_down_idle_01", "MISSCABARET", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_LOOK_AT_COORD( sub_2133(), l_U143._fU0, l_U143._fU4, l_U143._fU8 + 0.80000000, 20000, 0 );
    }
    WAIT( 400 );
    if (NOT (IS_CHAR_INJURED( l_U81 )))
    {
        CREATE_OBJECT( -1341473171, l_U55._fU0, l_U55._fU4, l_U55._fU8, ref l_U94, 1 );
        SET_OBJECT_VISIBLE( l_U94, 0 );
        SET_OBJECT_COLLISION( l_U94, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U81 )))
        {
            SET_CHAR_COORDINATES( l_U81, l_U55._fU0, l_U55._fU4, l_U55._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U81, l_U55._fU0, l_U55._fU4, l_U55._fU8 );
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U81, 1 );
        SET_CHAR_IN_CUTSCENE( l_U81, 1 );
        ATTACH_PED_TO_OBJECT( l_U81, l_U94, 0, 0, 0, 0, l_U59, 0, 0, 0 );
        TASK_PLAY_ANIM( l_U81, "sit_down_idle_01", "MISSCABARET", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_LOOK_AT_COORD( l_U81, l_U143._fU0, l_U143._fU4, l_U143._fU8 + 0.80000000, 20000, 0 );
    }
    return;
}

void sub_10338(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U108[uParam0] )))
    {
        TASK_LOOK_AT_COORD( l_U108[uParam0], l_U143._fU0, l_U143._fU4, l_U143._fU8 + 0.80000000, 20000, 0 );
    }
    return;
}

void sub_10791()
{
    sub_10804( ref g_U9349 );
    sub_10882( ref g_U9349._fU0 );
    return;
}

void sub_10804(int iParam0)
{
    sub_10817( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_10817(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_10882(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_10913( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_10913(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

