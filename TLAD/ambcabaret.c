void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 1;
    l_U17 = 1000;
    l_U18 = 1;
    l_U21 = {957.50000000, -273.42000000, 18.47000000};
    l_U24 = {957.44850000, -278.03430000, 17.12360000};
    l_U27 = {965.75970000, -274.38010000, 17.27170000};
    l_U30 = {966.37200000, -277.24790000, 17.37360000};
    l_U33 = {948.10130000, -271.28230000, 17.27470000};
    l_U36 = {947.65110000, -268.34590000, 17.27220000};
    l_U39 = {947.60410000, -269.00350000, 17.27320000};
    l_U42 = {946.49000000, -284.00000000, 22.55000000};
    l_U45 = {968.23000000, -261.44000000, 17.52000000};
    l_U48 = {963.47950000, -287.80000000, 18.97730000};
    l_U51 = {947.50530000, -271.46350000, 17.27470000};
    l_U54 = {967.00000000, -278.70000000, 18.25000000};
    l_U57 = {967.75000000, -278.15000000, 18.25000000};
    l_U60 = 0.10000000;
    l_U61 = 0.97000000;
    l_U62 = 113.27100000;
    l_U63 = 286.99040000;
    l_U64 = 270.24430000;
    l_U65 = 270.13120000;
    l_U66 = 107.97380000;
    l_U71 = "Caberet_room";
    l_U72 = "GtaMloRoom01";
    l_U73 = "GtaMloRoom05";
    l_U74 = "GtaMloRoom02";
    l_U75 = "GtaMloRoom03";
    l_U76 = 0;
    l_U77 = 0;
    l_U78 = 0;
    l_U79 = 0;
    l_U80 = 0;
    l_U100 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = {957.37000000, -261.48000000, 21.41200000};
    l_U106 = {-90.00000000, 0.00000000, 180.00000000};
    l_U145 = {957.42000000, -258.95000000, 18.14000000};
    l_U148 = 0;
    l_U149 = 0;
    l_U150 = 0;
    l_U155 = {968.36000000, -256.77000000, 23.33000000};
    l_U158 = {946.87000000, -288.07000000, 17.67000000};
    l_U161 = {945.84820000, -298.33460000, 17.58440000};
    l_U164 = 94.35000000;
    l_U165 = 1;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_745();
    }
    GET_INTERIOR_AT_COORDS( l_U21._fU0, l_U21._fU4, l_U21._fU8, ref l_U166 );
    while (l_U166 == nil)
    {
        WAIT( 0 );
        GET_INTERIOR_AT_COORDS( l_U21._fU0, l_U21._fU4, l_U21._fU8, ref l_U166 );
    }
    ACTIVATE_INTERIOR( l_U166, 1 );
    g_U10649 = 0;
    while (l_U165)
    {
        WAIT( 0 );
        if (g_U12303)
        {
            if ((NOT l_U102) AND (NOT (sub_1477( 8 ))))
            {
                l_U15 = 0;
                if (DOES_BLIP_EXIST( l_U87 ))
                {
                    REMOVE_BLIP( l_U87 );
                }
            }
        }
        sub_1981();
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U11)
            {
                case 0:
                if (NOT l_U148)
                {
                    SWITCH_PED_PATHS_OFF( 952.23000000, -264.79000000, 16.52000000, 962.55000000, -257.22000000, 20.98000000 );
                    SWITCH_PED_PATHS_OFF( 946.75000000, -274.57000000, 17.36000000, 949.30000000, -267.16000000, 19.84000000 );
                    l_U148 = 1;
                }
                else
                {
                    sub_2591();
                }
                break;
                case 2:
                if (IS_CHAR_IN_ANY_CAR( sub_2001() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2001(), ref l_U154 );
                }
                if (NOT (IS_CHAR_INJURED( sub_2001() )))
                {
                    if (sub_2693( sub_2001() ))
                    {
                        if ((sub_1477( 8 )) AND ((g_U10648) AND (NOT sub_3514())))
                        {
                            l_U102 = sub_3609( ref l_U97 );
                        }
                        else
                        {
                            l_U102 = 0;
                            l_U77 = 1;
                        }
                        if (l_U102)
                        {
                            sub_3687();
                        }
                        if ((NOT (IS_CHAR_IN_AREA_3D( sub_2001(), 946.48000000, -284.36000000, 16.99000000, 968.44000000, -261.10000000, 23.76000000, 0 ))) AND (NOT l_U80))
                        {
                            sub_2830();
                        }
                        l_U11 = 1;
                    }
                }
                break;
                case 1:
                sub_4136();
                sub_4280();
                SWITCH_PED_PATHS_OFF( l_U30._fU0 + 1.50000000, l_U30._fU4 + 1.50000000, l_U30._fU8 + 1.50000000, l_U30._fU0 - 1.50000000, l_U30._fU4 - 1.50000000, l_U30._fU8 - 1.50000000 );
                CLEAR_AREA_OF_CHARS( l_U30._fU0, l_U30._fU4, l_U30._fU8, 1.00000000 );
                l_U11 = 3;
                break;
                case 3:
                if ((NOT (IS_CHAR_IN_AREA_3D( sub_2001(), 946.48000000, -284.36000000, 16.99000000, 968.44000000, -261.10000000, 23.76000000, 0 ))) AND (NOT l_U80))
                {
                    sub_2830();
                }
                if (l_U77)
                {
                    if ((l_U15) AND ((sub_1477( 8 )) AND ((NOT sub_3514()) AND (g_U10648))))
                    {
                        l_U102 = sub_3609( ref l_U97 );
                        if (l_U102)
                        {
                            sub_3687();
                        }
                        l_U77 = 0;
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( sub_2001() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2001(), ref l_U154 );
                }
                sub_4690( l_U82 );
                sub_5530( l_U81 );
                if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U42, l_U45, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U82 )))
                    {
                        CLEAR_CHAR_TASKS( l_U82 );
                        if (NOT sub_6333())
                        {
                            TASK_SEEK_COVER_FROM_POS( l_U82, 957.20000000, -271.42000000, 18.58000000, 0 );
                        }
                        else
                        {
                            TASK_SMART_FLEE_POINT( l_U82, 957.20000000, -271.42000000, 18.58000000, 40.00000000, 40000 );
                        }
                        l_U76 = 1;
                    }
                    if (DOES_BLIP_EXIST( l_U87 ))
                    {
                        REMOVE_BLIP( l_U87 );
                    }
                    if (l_U102)
                    {
                        l_U101 = 1;
                        sub_886( 3 );
                        sub_995();
                    }
                    l_U11 = 7;
                }
                if (((l_U102) || (sub_6718())) AND ((NOT sub_6666()) AND ((NOT g_U12305) AND ((NOT (IS_BIT_SET( g_U10959._fU0, 4 ))) AND ((l_U15) AND ((NOT sub_3514()) AND ((NOT sub_6333()) AND ((NOT sub_6552()) AND (g_U10648)))))))))
                {
                    if (NOT l_U14)
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_2001(), l_U24._fU0, l_U24._fU4, l_U24._fU8 + 4.00000000, 4.00000000, 4.00000000, 4.00000000, 0 ))
                        {
                            PRINT_HELP( "CABARET_HLP1" );
                            if (NOT (DOES_BLIP_EXIST( l_U87 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U27._fU0, l_U27._fU4, l_U27._fU8, ref l_U87 );
                                g_U10649 = 1;
                            }
                            l_U14 = 1;
                        }
                    }
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_2001(), l_U27._fU0, l_U27._fU4, l_U27._fU8 + 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1 ))
                    {
                        CLEAR_HELP();
                        l_U11 = 4;
                        sub_7246();
                    }
                }
                break;
                case 4:
                switch (l_U12)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_8108(), 0 );
                    BEGIN_CAM_COMMANDS( ref l_U16 );
                    SET_CAM_ACTIVE( l_U91, 1 );
                    SET_CAM_PROPAGATE( l_U91, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    END_CAM_COMMANDS( ref l_U16 );
                    if (DOES_BLIP_EXIST( l_U87 ))
                    {
                        REMOVE_BLIP( l_U87 );
                    }
                    CLEAR_CHAR_TASKS( sub_2001() );
                    TASK_GO_STRAIGHT_TO_COORD( sub_2001(), l_U30._fU0, l_U30._fU4, l_U30._fU8, 2, -1 );
                    if (NOT (IS_CHAR_INJURED( l_U83 )))
                    {
                        TASK_GO_STRAIGHT_TO_COORD( l_U83, l_U30._fU0, l_U30._fU4, l_U30._fU8, 2, -1 );
                    }
                    l_U12 = 1;
                    SETTIMERA( 0 );
                    break;
                    case 1:
                    if (TIMERA() > 1300)
                    {
                        l_U12 = 2;
                    }
                    break;
                    case 2:
                    l_U11 = 5;
                    l_U12 = 0;
                    break;
                }
                break;
                case 5:
                sub_8377();
                break;
                case 6:
                switch (l_U13)
                {
                    case 0:
                    BEGIN_CAM_COMMANDS( ref l_U16 );
                    SET_CAM_ACTIVE( l_U91, 0 );
                    SET_CAM_PROPAGATE( l_U91, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U16 );
                    if (NOT (IS_CHAR_INJURED( sub_2001() )))
                    {
                        DETACH_PED( sub_2001(), 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2001() );
                        TASK_CLEAR_LOOK_AT( sub_2001() );
                        SET_CHAR_COORDINATES( sub_2001(), 965.86560000, -274.37060000, 17.27180000 );
                        SET_CHAR_HEADING( sub_2001(), 121.89080000 );
                        SET_CHAR_IN_CUTSCENE( sub_2001(), 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U83 )))
                    {
                        DETACH_PED( l_U83, 1 );
                        CLEAR_CHAR_TASKS( l_U83 );
                        TASK_CLEAR_LOOK_AT( l_U83 );
                        SET_CHAR_COORDINATES( l_U83, 966.49070000, -276.10510000, 17.27300000 );
                        SET_CHAR_HEADING( l_U83, 43.62050000 );
                        SET_CHAR_IN_CUTSCENE( l_U83, 0 );
                    }
                    if (DOES_OBJECT_EXIST( l_U95 ))
                    {
                        DELETE_OBJECT( ref l_U95 );
                    }
                    if (DOES_OBJECT_EXIST( l_U96 ))
                    {
                        DELETE_OBJECT( ref l_U96 );
                    }
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1341473171 );
                    SET_CAM_BEHIND_PED( sub_2001() );
                    if (NOT (DOES_OBJECT_EXIST( l_U94 )))
                    {
                        CREATE_OBJECT( l_U86, l_U103._fU0, l_U103._fU4, l_U103._fU8, ref l_U94, 1 );
                        SET_OBJECT_ROTATION( l_U94, l_U106._fU0, l_U106._fU4, l_U106._fU8 );
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U94, l_U71 );
                        SET_OBJECT_COORDINATES( l_U94, l_U103._fU0, l_U103._fU4, l_U103._fU8 );
                    }
                    else
                    {
                        SET_OBJECT_ROTATION( l_U94, l_U106._fU0, l_U106._fU4, l_U106._fU8 );
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U94, l_U71 );
                        SET_OBJECT_COORDINATES( l_U94, l_U103._fU0, l_U103._fU4, l_U103._fU8 );
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
                    l_U13 = 2;
                    break;
                    case 2:
                    SET_PLAYER_CONTROL( sub_8108(), 1 );
                    l_U11 = 7;
                    l_U13 = 0;
                    break;
                }
                break;
                case 7:
                if (NOT l_U76)
                {
                    sub_4690( l_U82 );
                    sub_5530( l_U81 );
                }
                if (l_U102)
                {
                    if (NOT l_U101)
                    {
                        if (sub_6718())
                        {
                            l_U11 = 3;
                        }
                    }
                }
                else if (NOT (IS_WANTED_LEVEL_GREATER( sub_8108(), 0 )))
                {
                    if (sub_6718())
                    {
                        l_U11 = 3;
                    }
                }
                break;
            }
        }
        else
        {
            l_U165 = 0;
        }
    }
    SWITCH_PED_PATHS_ON( l_U30._fU0 + 1.50000000, l_U30._fU4 + 1.50000000, l_U30._fU8 + 1.50000000, l_U30._fU0 - 1.50000000, l_U30._fU4 - 1.50000000, l_U30._fU8 - 1.50000000 );
    sub_745();
    return;
}

void sub_745()
{
    CLEAR_HELP();
    if (DOES_CAM_EXIST( l_U91 ))
    {
        DESTROY_CAM( l_U91 );
    }
    SWITCH_PED_PATHS_ON( 952.23000000, -264.79000000, 16.82000000, 962.55000000, -257.22000000, 20.98000000 );
    SWITCH_PED_PATHS_ON( 946.75000000, -274.57000000, 17.36000000, 949.30000000, -267.16000000, 19.84000000 );
    if ((NOT l_U101) AND (l_U102))
    {
        sub_886( 3 );
        sub_995();
    }
    if (DOES_BLIP_EXIST( l_U87 ))
    {
        REMOVE_BLIP( l_U87 );
    }
    if (NOT l_U101)
    {
        sub_1217();
    }
    SET_SCENARIO_PED_DENSITY_MULTIPLIER( 1.00000000, 1.00000000 );
    CLEAR_SEQUENCE_TASK( l_U92 );
    CLEAR_SEQUENCE_TASK( l_U93 );
    CLEAR_SCRIPTED_CONVERSION_CENTRE();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_886(unknown uParam0)
{
    if (g_U26739._fU0 == 19)
    {
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        g_U26739._fU20 = uParam0;
        if (sub_943( g_U26739._fU0 ))
        {
            g_U26739._fU16 = uParam0;
        }
        return;
    }
    g_U26739._fU16 = uParam0;
    return;
}

int sub_943(unknown uParam0)
{
    return 0;
}

void sub_995()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12304 = 0;
    if (g_U26739._fU0 == 19)
    {
        g_U12303 = 0;
        sub_1046();
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU20 == 8)
        {
            g_U26739._fU20 = 3;
        }
    }
    else if (NOT (g_U26739._fU4 == 12))
    {
        if (g_U26739._fU16 == 8)
        {
            g_U26739._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U26739._fU28 = 1;
    return;
}

void sub_1046()
{
    g_U26737._fU4 = 1;
    return;
}

void sub_1217()
{
    if (NOT g_U26739._fU84)
    {
        return;
    }
    g_U26739._fU84 = 0;
    g_U26739._fU36[8]++;
    return;
}

int sub_1477(int iParam0)
{
    unknown uVar3;

    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    if (sub_1506( iParam0 ))
    {
        return 0;
    }
    if (sub_943( g_U26739._fU0 ))
    {
        if (NOT (sub_1584( g_U26739._fU0, iParam0 )))
        {
            return 0;
        }
        g_U26739._fU8 = iParam0;
        g_U26739._fU84 = 0;
        return 1;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U26739._fU4)
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
            if (g_U26739._fU36[uVar3] > 0)
            {
                g_U26739._fU36[uVar3]--;
            }
            g_U26739._fU84 = 0;
            return 1;
        }
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU24)
        {
            return 0;
        }
        else
        {
            g_U26739._fU8 = 12;
        }
    }
    if (g_U26739._fU32 <= 0)
    {
        g_U26739._fU12 = iParam0;
        return 0;
    }
    if (g_U26739._fU36[uVar3] > 0)
    {
        g_U26739._fU8 = iParam0;
        g_U26739._fU36[uVar3]--;
        if (iParam0 == 8)
        {
            g_U26739._fU84 = 1;
        }
        return 1;
    }
    g_U26739._fU12 = iParam0;
    return 0;
}

int sub_1506(int iParam0)
{
    if (iParam0 == 8)
    {
        if (g_U10999 == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_1584(unknown uParam0, unknown uParam1)
{
    return 1;
}

void sub_1981()
{
    if (NOT l_U79)
    {
        if (sub_2042( sub_2001() ))
        {
            SET_SCRIPTED_CONVERSION_CENTRE( l_U21 );
            l_U79 = 1;
        }
    }
    else if (NOT (sub_2042( sub_2001() )))
    {
        CLEAR_SCRIPTED_CONVERSION_CENTRE();
        l_U79 = 0;
    }
    return;
}

void sub_2001()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2042(unknown uParam0)
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

void sub_2591()
{
    switch (l_U10)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( sub_2001() )))
        {
            if ((sub_2693( sub_2001() )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2001(), 957.74120000, -291.33820000, 18.68050000, 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                sub_2830();
                l_U84 = -1788328884;
                l_U85 = -2139064254;
                l_U86 = 617421203;
                REQUEST_MODEL( l_U84 );
                REQUEST_MODEL( l_U85 );
                REQUEST_ANIMS( "MISSCABARET" );
                l_U10 = 1;
            }
        }
        break;
        case 1:
        while ((NOT (HAS_MODEL_LOADED( l_U85 ))) || (NOT (HAS_MODEL_LOADED( l_U84 ))))
        {
            WAIT( 0 );
        }
        CREATE_OBJECT( l_U86, l_U103._fU0, l_U103._fU4, l_U103._fU8, ref l_U94, 1 );
        SET_OBJECT_ROTATION( l_U94, l_U106._fU0, l_U106._fU4, l_U106._fU8 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U94, l_U71 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U86 );
        while (NOT (HAVE_ANIMS_LOADED( "MISSCABARET" )))
        {
            WAIT( 0 );
        }
        if (DOES_OBJECT_EXIST( l_U94 ))
        {
            SET_OBJECT_COORDINATES( l_U94, l_U103._fU0, l_U103._fU4, l_U103._fU8 );
        }
        BEGIN_CAM_COMMANDS( ref l_U16 );
        CREATE_CAM( 14, ref l_U91 );
        SET_CAM_POS( l_U91, 968.34000000, -278.89000000, 19.54000000 );
        SET_CAM_ROT( l_U91, -23.93000000, -0.00000000, 45.32000000 );
        SET_CAM_FOV( l_U91, 45.70000000 );
        END_CAM_COMMANDS( ref l_U16 );
        l_U11 = 2;
        break;
    }
    return;
}

int sub_2693(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
        if ((iVar3 == (GET_HASH_KEY( l_U75 ))) || ((iVar3 == (GET_HASH_KEY( l_U74 ))) || ((iVar3 == (GET_HASH_KEY( l_U73 ))) || ((iVar3 == (GET_HASH_KEY( l_U72 ))) || (iVar3 == (GET_HASH_KEY( l_U71 )))))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_2830()
{
    if (DOES_SCENARIO_EXIST_IN_AREA( 950.37070000, -267.27340000, 17.27310000, 8.00000000, 1 ))
    {
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 951.74290000, -281.71600000, 18.90250000, 5.00000000, 5 );
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 963.68720000, -281.04060000, 18.90240000, 5.00000000, 5 );
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 950.37070000, -267.27340000, 17.27310000, 8.00000000, 6 );
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 965.03540000, -271.38370000, 18.17290000, 12.00000000, 12 );
        l_U80 = 1;
    }
    return;
}

int sub_3514()
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

int sub_3609(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

void sub_3687()
{
    if ((NOT (l_U100 == 0)) AND (IS_CHAR_INJURED( l_U83 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U83, sub_2001(), 0 ))
        {
            sub_886( 5 );
        }
        else
        {
            sub_886( 4 );
        }
        l_U101 = 1;
        sub_995();
    }
    else
    {
        switch (l_U100)
        {
            case 0:
            sub_3814();
            GET_GROUP_MEMBER( sub_3982(), 0, ref l_U83 );
            l_U100 = 1;
            break;
            case 1: break;
            case 2: break;
        }
    }
    return;
}

void sub_3814()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12304 = 1;
    if (NOT (g_U26739._fU0 == 19))
    {
        g_U26739._fU24 = 1;
        g_U26739._fU28 = 0;
        if (NOT (g_U26739._fU8 == 12))
        {
            sub_3883();
        }
        return;
    }
    g_U12303 = 1;
    sub_3949();
    return;
}

void sub_3883()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_3949()
{
    g_U26737._fU4 = 0;
    return;
}

void sub_3982()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4136()
{
    CREATE_CHAR( 5, l_U84, l_U48._fU0, l_U48._fU4, l_U48._fU8, ref l_U81, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U81, 7, 1, 0 );
    SET_CHAR_HEADING( l_U81, l_U62 );
    SET_CHAR_NEVER_TARGETTED( l_U81, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U81, l_U74 );
    SET_CHAR_RELATIONSHIP( l_U81, 0, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U84 );
    return;
}

void sub_4280()
{
    CREATE_CHAR( 4, l_U85, l_U51._fU0, l_U51._fU4, l_U51._fU8, ref l_U82, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U82 );
    SET_CHAR_HEADING( l_U82, l_U63 );
    SET_CHAR_NEVER_TARGETTED( l_U82, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U82, l_U71 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U85 );
    return;
}

void sub_4690(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT l_U76)
        {
            GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U90 );
            if (l_U90 == 7)
            {
                GENERATE_RANDOM_INT_IN_RANGE( l_U18, l_U17, ref l_U20 );
                if (l_U20 > 950)
                {
                    sub_4780( uParam0 );
                }
            }
        }
        else if (NOT l_U149)
        {
            CLEAR_CHAR_TASKS( l_U82 );
            TASK_SEEK_COVER_FROM_POS( l_U82, 957.20000000, -271.42000000, 18.58000000, 0 );
            l_U149 = 1;
        }
    }
    return;
}

void sub_4780(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4791( 1, 4 );
    if (iVar3 == 1)
    {
        l_U98 = 1;
        sub_4841( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U98 = 2;
        sub_4841( uParam0 );
    }
    else if (iVar3 == 3)
    {
        l_U98 = 3;
        sub_4841( uParam0 );
    };;;
    return;
}

void sub_4791(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_4841(unknown uParam0)
{
    switch (l_U98)
    {
        case 1:
        OPEN_SEQUENCE_TASK( ref l_U88 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U36._fU0, l_U36._fU4, l_U36._fU8, 2, 10000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U65 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", "MISSCABARET", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U88 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U88 );
            CLEAR_SEQUENCE_TASK( l_U88 );
        }
        break;
        case 2:
        OPEN_SEQUENCE_TASK( ref l_U88 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U33._fU0, l_U33._fU4, l_U33._fU8, 2, 10000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U64 );
        TASK_PLAY_ANIM( 0, "WIPE_COUNTER", "MISSCABARET", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U88 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U88 );
            CLEAR_SEQUENCE_TASK( l_U88 );
        }
        break;
        case 3:
        OPEN_SEQUENCE_TASK( ref l_U88 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U39._fU0, l_U39._fU4, l_U39._fU8, 2, 10000, 0.10000000 );
        TASK_ACHIEVE_HEADING( 0, l_U66 );
        TASK_PLAY_ANIM( 0, "USE_OPTIC", "MISSCABARET", 4.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U88 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U88 );
            CLEAR_SEQUENCE_TASK( l_U88 );
        }
        break;
    }
    return;
}

void sub_5530(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_2D( uParam0, l_U48._fU0, l_U48._fU4, 1.00000000, 1.00000000, 0 ))
        {
            l_U150 = 0;
            GET_SCRIPT_TASK_STATUS( uParam0, 29, ref l_U90 );
            if (l_U90 == 7)
            {
                GENERATE_RANDOM_INT_IN_RANGE( l_U18, l_U17, ref l_U19 );
                if (l_U19 > 950)
                {
                    sub_5654( uParam0 );
                }
            }
        }
        else if (NOT l_U150)
        {
            OPEN_SEQUENCE_TASK( ref l_U151 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U48._fU0, l_U48._fU4, l_U48._fU8, 2, -2, 0.25000000 );
            TASK_ACHIEVE_HEADING( 0, l_U62 );
            CLOSE_SEQUENCE_TASK( l_U151 );
            TASK_PERFORM_SEQUENCE( uParam0, l_U151 );
            CLEAR_SEQUENCE_TASK( l_U151 );
            l_U150 = 1;
        }
    }
    return;
}

void sub_5654(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4791( 0, 3 );
    if (iVar3 == 0)
    {
        l_U99 = 0;
        sub_5689( uParam0 );
    }
    else if (iVar3 == 1)
    {
        l_U99 = 1;
        sub_5689( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U99 = 2;
        sub_5689( uParam0 );
    };;;
    return;
}

void sub_5689(unknown uParam0)
{
    switch (l_U99)
    {
        case 0:
        OPEN_SEQUENCE_TASK( ref l_U89 );
        TASK_PLAY_ANIM_UPPER_BODY( 0, "sit_idle_b", "MISSCABARET", 4.00000000, 0, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( l_U89 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U89 );
            CLEAR_SEQUENCE_TASK( l_U89 );
        }
        break;
        case 1:
        OPEN_SEQUENCE_TASK( ref l_U89 );
        TASK_PLAY_ANIM_UPPER_BODY( 0, "sit_idle_a", "MISSCABARET", 4.00000000, 0, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( l_U89 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U89 );
            CLEAR_SEQUENCE_TASK( l_U89 );
        }
        break;
        case 2:
        OPEN_SEQUENCE_TASK( ref l_U89 );
        TASK_PLAY_ANIM_UPPER_BODY( 0, "idle_stretch_a", "MISSCABARET", 4.00000000, 0, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( l_U89 );
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            TASK_PERFORM_SEQUENCE( uParam0, l_U89 );
            CLEAR_SEQUENCE_TASK( l_U89 );
        }
        break;
    }
    return;
}

int sub_6333()
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

int sub_6552()
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

int sub_6666()
{
    if ((g_U94._fU0 == 1008) || (g_U94._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_6718()
{
    if (g_U10650._fU0._fU4 == 0)
    {
        return 1;
    }
    else if (sub_6758( g_U10650 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_6758(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_6927( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_6927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_7246()
{
    sub_7255();
    sub_7400( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_7474();
    return;
}

void sub_7255()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_7400(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7474()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_7512( 1, g_U572[I] )) == 0)
        {
            sub_7763( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7941())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_7512(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7763(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_7848( g_U572 - 1 );
    return;
}

void sub_7848(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_7941()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_7512( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8108()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_8377()
{
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    if (NOT l_U78)
    {
        sub_8440();
    }
    sub_8783();
    if (DOES_VEHICLE_EXIST( l_U154 ))
    {
        if (IS_VEH_DRIVEABLE( l_U154 ))
        {
            if (IS_CAR_IN_AREA_3D( l_U154, l_U158._fU0, l_U158._fU4, l_U158._fU8, l_U155._fU0, l_U155._fU4, l_U155._fU8, 0 ))
            {
                if (IS_VEH_DRIVEABLE( l_U154 ))
                {
                    SET_CAR_COORDINATES( l_U154, l_U161._fU0, l_U161._fU4, l_U161._fU8 );
                    SET_CAR_HEADING( l_U154, l_U164 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U154 );
                }
            }
        }
        else
        {
            DELETE_CAR( ref l_U154 );
        }
    }
    CLEAR_AREA_OF_CARS( l_U145._fU0, l_U145._fU4, l_U145._fU8, 20.00000000 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    MUTE_GAMEWORLD_AUDIO( 1 );
    MUTE_POSITIONED_RADIO( 1 );
    CLEAR_AREA( l_U30._fU0, l_U30._fU4, l_U30._fU8, 2.00000000, 1 );
    if (g_U10664 == 0)
    {
        l_U152 = "show_1";
        l_U153 = "SHOW1AU";
    }
    else if (g_U10664 == 1)
    {
        l_U152 = "show_2";
        l_U153 = "SHOW2AU";
    }
    else if (g_U10664 == 2)
    {
        l_U152 = "show_3";
        l_U153 = "SHOW3AU";
    }
    else if (g_U10664 == 3)
    {
        l_U152 = "show_4";
        l_U153 = "SHOW4AU";
    }
    else if (g_U10664 == 4)
    {
        l_U152 = "show_5";
        l_U153 = "SHOW5AU";
    }
    else if (g_U10664 == 5)
    {
        l_U152 = "show_6";
        l_U153 = "SHOW6AU";
    }
    else if (g_U10664 == 6)
    {
        l_U152 = "show_7";
        l_U153 = "SHOW7AU";
    }
    else if (g_U10664 == 7)
    {
        l_U152 = "show_8";
        l_U153 = "SHOW8AU";
    };;;;;;;;
    LOAD_ADDITIONAL_TEXT( l_U153, 3 );
    ENABLE_SCENE_STREAMING( 0 );
    START_CUTSCENE_NOW( l_U152 );
    while (NOT HAS_CUTSCENE_LOADED())
    {
        WAIT( 0 );
    }
    while (NOT HAS_CUTSCENE_FINISHED())
    {
        WAIT( 0 );
        if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
        {
            for ( l_U109 = 0; l_U109 < l_U110; l_U109++ )
            {
                sub_10263( l_U109 );
            }
            if (NOT (IS_CHAR_DEAD( sub_2001() )))
            {
                TASK_LOOK_AT_COORD( sub_2001(), l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U83 )))
            {
                TASK_LOOK_AT_COORD( l_U83, l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
            }
        }
    }
    if (g_U10664 == 7)
    {
        g_U10664 = 0;
    }
    else
    {
        g_U10664++;
    }
    CLEAR_NAMED_CUTSCENE( l_U152 );
    ENABLE_SCENE_STREAMING( 1 );
    for ( l_U109 = 0; l_U109 < l_U110; l_U109++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U110[l_U109] )))
        {
            TASK_CLEAR_LOOK_AT( l_U110[l_U109] );
        }
    }
    if (l_U102)
    {
        if (WAS_CUTSCENE_SKIPPED())
        {
            sub_886( 3 );
        }
        else
        {
            sub_886( 0 );
        }
        l_U101 = 1;
        sub_995();
        if (NOT (IS_CHAR_INJURED( l_U83 )))
        {
            SET_CHAR_PROOFS( l_U83, 0, 0, 0, 0, 0 );
        }
    }
    sub_10716();
    MUTE_GAMEWORLD_AUDIO( 0 );
    MUTE_POSITIONED_RADIO( 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    l_U101 = 1;
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    l_U11 = 6;
    return;
}

void sub_8440()
{
    unknown uVar2;

    for ( l_U109 = 0; l_U109 < l_U110; l_U109++ )
    {
        ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
        GET_CLOSEST_CHAR( 959, 65268, 18.50000000, 35.00000000, 1, 0, ref uVar2 );
        if (NOT (IS_CHAR_INJURED( uVar2 )))
        {
            SET_CHAR_AS_MISSION_CHAR( uVar2 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( uVar2, 0 );
            GET_CHAR_COORDINATES( uVar2, ref l_U67, ref l_U68, ref l_U69 );
            WAIT( 0 );
            if (NOT (IS_CHAR_INJURED( uVar2 )))
            {
                if (DOES_SCENARIO_EXIST_IN_AREA( l_U67, l_U68, l_U69, 4.00000000, 1 ))
                {
                    TASK_USE_NEAREST_SCENARIO_TO_POS_WARP( uVar2, l_U67, l_U68, l_U69, 4.00000000 );
                    GET_CHAR_HEADING( uVar2, ref l_U70 );
                    SET_CHAR_IN_CUTSCENE( uVar2, 1 );
                    l_U110[l_U109] = uVar2;
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
    l_U78 = 1;
    return;
}

void sub_8783()
{
    REQUEST_MODEL( -1341473171 );
    while (NOT (HAS_MODEL_LOADED( -1341473171 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_INJURED( sub_2001() )))
    {
        CREATE_OBJECT( -1341473171, l_U54._fU0, l_U54._fU4, l_U54._fU8, ref l_U95, 1 );
        SET_OBJECT_VISIBLE( l_U95, 0 );
        SET_OBJECT_COLLISION( l_U95, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2001() )))
        {
            SET_CHAR_COORDINATES( sub_2001(), l_U54._fU0, l_U54._fU4, l_U54._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_2001(), l_U54._fU0, l_U54._fU4, l_U54._fU8 );
        }
        SET_CHAR_IN_CUTSCENE( sub_2001(), 1 );
        ATTACH_PED_TO_OBJECT( sub_2001(), l_U95, 0, 0, 0, 0, l_U60, 0, 0, 0 );
        TASK_PLAY_ANIM( sub_2001(), "sit_down_idle_01", "MISSCABARET", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_LOOK_AT_COORD( sub_2001(), l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
    }
    WAIT( 400 );
    if (NOT (IS_CHAR_INJURED( l_U83 )))
    {
        CREATE_OBJECT( -1341473171, l_U57._fU0, l_U57._fU4, l_U57._fU8, ref l_U96, 1 );
        SET_OBJECT_VISIBLE( l_U96, 0 );
        SET_OBJECT_COLLISION( l_U96, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U83 )))
        {
            SET_CHAR_COORDINATES( l_U83, l_U57._fU0, l_U57._fU4, l_U57._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U83, l_U57._fU0, l_U57._fU4, l_U57._fU8 );
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U83, 1 );
        SET_CHAR_IN_CUTSCENE( l_U83, 1 );
        ATTACH_PED_TO_OBJECT( l_U83, l_U96, 0, 0, 0, 0, l_U61, 0, 0, 0 );
        TASK_PLAY_ANIM( l_U83, "sit_down_idle_01", "MISSCABARET", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_LOOK_AT_COORD( l_U83, l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
    }
    return;
}

void sub_10263(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U110[uParam0] )))
    {
        TASK_LOOK_AT_COORD( l_U110[uParam0], l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
    }
    return;
}

void sub_10716()
{
    sub_10729( ref g_U10650 );
    sub_10807( ref g_U10650._fU0 );
    return;
}

void sub_10729(int iParam0)
{
    sub_10742( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_10742(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_10807(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_10838( iParam0->_fU4 )))
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

int sub_10838(unknown uParam0)
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

