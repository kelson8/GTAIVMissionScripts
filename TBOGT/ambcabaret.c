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
    g_U10719 = 0;
    while (l_U165)
    {
        WAIT( 0 );
        if (g_U12379)
        {
            if ((NOT l_U102) AND (NOT (sub_1612( 12 ))))
            {
                l_U15 = 0;
                if (DOES_BLIP_EXIST( l_U87 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U87 );
                }
            }
        }
        sub_2044();
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
                    sub_2654();
                }
                break;
                case 2:
                if (IS_CHAR_IN_ANY_CAR( sub_2064() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2064(), ref l_U154 );
                }
                if (NOT (IS_CHAR_INJURED( sub_2064() )))
                {
                    if (sub_2756( sub_2064() ))
                    {
                        if ((sub_1612( 12 )) AND ((g_U10718) AND (NOT sub_3577())))
                        {
                            l_U102 = sub_3673( ref l_U97, 0 );
                        }
                        else
                        {
                            l_U102 = 0;
                            l_U77 = 1;
                        }
                        if (l_U102)
                        {
                            sub_3774();
                        }
                        if ((NOT (IS_CHAR_IN_AREA_3D( sub_2064(), 946.48000000, -284.36000000, 16.99000000, 968.44000000, -261.10000000, 23.76000000, 0 ))) AND (NOT l_U80))
                        {
                            sub_2893();
                        }
                        l_U11 = 1;
                    }
                }
                break;
                case 1:
                sub_4254();
                sub_4398();
                SWITCH_PED_PATHS_OFF( l_U30._fU0 + 1.50000000, l_U30._fU4 + 1.50000000, l_U30._fU8 + 1.50000000, l_U30._fU0 - 1.50000000, l_U30._fU4 - 1.50000000, l_U30._fU8 - 1.50000000 );
                CLEAR_AREA_OF_CHARS( l_U30._fU0, l_U30._fU4, l_U30._fU8, 1.00000000 );
                l_U11 = 3;
                break;
                case 3:
                if ((NOT (IS_CHAR_IN_AREA_3D( sub_2064(), 946.48000000, -284.36000000, 16.99000000, 968.44000000, -261.10000000, 23.76000000, 0 ))) AND (NOT l_U80))
                {
                    sub_2893();
                }
                if (l_U77)
                {
                    if ((l_U15) AND ((sub_1612( 12 )) AND ((NOT sub_3577()) AND (g_U10718))))
                    {
                        l_U102 = sub_3673( ref l_U97, 0 );
                        if (l_U102)
                        {
                            sub_3774();
                        }
                        l_U77 = 0;
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( sub_2064() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2064(), ref l_U154 );
                }
                sub_4809( l_U82 );
                sub_5649( l_U81 );
                if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U42, l_U45, 0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U82 )))
                    {
                        CLEAR_CHAR_TASKS( l_U82 );
                        if (NOT sub_6452())
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
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U87 );
                    }
                    if (l_U102)
                    {
                        l_U101 = 1;
                        sub_886( 3 );
                        sub_965();
                    }
                    l_U11 = 7;
                }
                if (((l_U102) || (sub_6836())) AND ((NOT sub_6784()) AND ((NOT g_U12381) AND ((NOT (IS_BIT_SET( g_U10938._fU0, 4 ))) AND ((l_U15) AND ((NOT sub_3577()) AND ((NOT sub_6452()) AND ((NOT sub_6670()) AND (g_U10718)))))))))
                {
                    if (NOT l_U14)
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_2064(), l_U24._fU0, l_U24._fU4, l_U24._fU8 + 4.00000000, 4.00000000, 4.00000000, 4.00000000, 0 ))
                        {
                            PRINT_HELP( "CABARET_HLP1" );
                            if (NOT (DOES_BLIP_EXIST( l_U87 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U27._fU0, l_U27._fU4, l_U27._fU8, ref l_U87 );
                                g_U10719 = 1;
                            }
                            l_U14 = 1;
                        }
                    }
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_2064(), l_U27._fU0, l_U27._fU4, l_U27._fU8 + 1.00000000, 1.00000000, 1.00000000, 1.00000000, 1 ))
                    {
                        CLEAR_HELP();
                        l_U11 = 4;
                        sub_7364();
                    }
                }
                break;
                case 4:
                switch (l_U12)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_8226(), 0 );
                    BEGIN_CAM_COMMANDS( ref l_U16 );
                    SET_CAM_ACTIVE( l_U91, 1 );
                    SET_CAM_PROPAGATE( l_U91, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    END_CAM_COMMANDS( ref l_U16 );
                    if (DOES_BLIP_EXIST( l_U87 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U87 );
                    }
                    CLEAR_CHAR_TASKS( sub_2064() );
                    TASK_GO_STRAIGHT_TO_COORD( sub_2064(), l_U30._fU0, l_U30._fU4, l_U30._fU8, 2, -1 );
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
                sub_8494();
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
                    if (NOT (IS_CHAR_INJURED( sub_2064() )))
                    {
                        DETACH_PED( sub_2064(), 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2064() );
                        TASK_CLEAR_LOOK_AT( sub_2064() );
                        SET_CHAR_COORDINATES( sub_2064(), 965.86560000, -274.37060000, 17.27180000 );
                        SET_CHAR_HEADING( sub_2064(), 121.89080000 );
                        SET_CHAR_IN_CUTSCENE( sub_2064(), 0 );
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
                    SET_CAM_BEHIND_PED( sub_2064() );
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
                    SET_PLAYER_CONTROL( sub_8226(), 1 );
                    l_U11 = 7;
                    l_U13 = 0;
                    break;
                }
                break;
                case 7:
                if (NOT l_U76)
                {
                    sub_4809( l_U82 );
                    sub_5649( l_U81 );
                }
                if (l_U102)
                {
                    if (NOT l_U101)
                    {
                        if (sub_6836())
                        {
                            l_U11 = 3;
                        }
                    }
                }
                else if (NOT (IS_WANTED_LEVEL_GREATER( sub_8226(), 0 )))
                {
                    if (sub_6836())
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
        sub_965();
    }
    if (DOES_BLIP_EXIST( l_U87 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U87 );
    }
    if (NOT l_U101)
    {
        sub_1352();
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
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        g_U28807._fU40 = uParam0;
        return;
    }
    g_U28807._fU36 = uParam0;
    return;
}

void sub_965()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12380 = 0;
    if (g_U28807._fU0[0] == 34)
    {
        if (sub_1015())
        {
            g_U12379 = 0;
        }
        sub_1172();
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU40 == 8)
        {
            g_U28807._fU40 = 3;
        }
    }
    else if (NOT (g_U28807._fU24 == 16))
    {
        if (g_U28807._fU36 == 8)
        {
            g_U28807._fU36 = 3;
        }
    }
    else
    {
        return;
    }
    g_U28807._fU52 = 1;
    return;
}

int sub_1015()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)
    {
        PRINTSTRING( "\n\n*******************\nTony1 Active so don't change the g_onMission flag\n*******************\n" );
        return 0;
    }
    return 1;
}

void sub_1172()
{
    g_U28805._fU4 = 1;
    return;
}

void sub_1352()
{
    if (NOT g_U28807._fU124)
    {
        return;
    }
    g_U28807._fU124 = 0;
    g_U28807._fU60[12]++;
    return;
}

int sub_1612(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_1664( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

int sub_1664(unknown uParam0)
{
    return 0;
}

void sub_2044()
{
    if (NOT l_U79)
    {
        if (sub_2105( sub_2064() ))
        {
            SET_SCRIPTED_CONVERSION_CENTRE( l_U21 );
            l_U79 = 1;
        }
    }
    else if (NOT (sub_2105( sub_2064() )))
    {
        CLEAR_SCRIPTED_CONVERSION_CENTRE();
        l_U79 = 0;
    }
    return;
}

void sub_2064()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2105(unknown uParam0)
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

void sub_2654()
{
    switch (l_U10)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( sub_2064() )))
        {
            if ((sub_2756( sub_2064() )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2064(), 957.74120000, -291.33820000, 18.68050000, 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                sub_2893();
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

int sub_2756(unknown uParam0)
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

void sub_2893()
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

int sub_3577()
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

int sub_3673(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_3774()
{
    if ((NOT (l_U100 == 0)) AND (IS_CHAR_INJURED( l_U83 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U83, sub_2064(), 0 ))
        {
            sub_886( 5 );
        }
        else
        {
            sub_886( 4 );
        }
        l_U101 = 1;
        sub_965();
    }
    else
    {
        switch (l_U100)
        {
            case 0:
            sub_3901();
            GET_GROUP_MEMBER( sub_4100(), 0, ref l_U83 );
            l_U100 = 1;
            break;
            case 1: break;
            case 2: break;
        }
    }
    return;
}

void sub_3901()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12380 = 1;
    g_U28807._fU44 = 34;
    if (NOT (g_U28807._fU0[0] == 34))
    {
        g_U28807._fU48 = 1;
        g_U28807._fU52 = 0;
        if (NOT (g_U28807._fU28 == 16))
        {
            sub_3991();
        }
        return;
    }
    if (sub_1015())
    {
        g_U12379 = 1;
    }
    sub_4067();
    return;
}

void sub_3991()
{
    if (NOT (g_U28807._fU56 > 0))
    {
        return;
    }
    g_U28807._fU56--;
    return;
}

void sub_4067()
{
    g_U28805._fU4 = 0;
    return;
}

void sub_4100()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4254()
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

void sub_4398()
{
    CREATE_CHAR( 4, l_U85, l_U51._fU0, l_U51._fU4, l_U51._fU8, ref l_U82, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U82 );
    SET_CHAR_HEADING( l_U82, l_U63 );
    SET_CHAR_NEVER_TARGETTED( l_U82, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U82, l_U71 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U85 );
    return;
}

void sub_4809(unknown uParam0)
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
                    sub_4899( uParam0 );
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

void sub_4899(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4910( 1, 4 );
    if (iVar3 == 1)
    {
        l_U98 = 1;
        sub_4960( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U98 = 2;
        sub_4960( uParam0 );
    }
    else if (iVar3 == 3)
    {
        l_U98 = 3;
        sub_4960( uParam0 );
    };;;
    return;
}

void sub_4910(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_4960(unknown uParam0)
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

void sub_5649(unknown uParam0)
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
                    sub_5773( uParam0 );
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

void sub_5773(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4910( 0, 3 );
    if (iVar3 == 0)
    {
        l_U99 = 0;
        sub_5808( uParam0 );
    }
    else if (iVar3 == 1)
    {
        l_U99 = 1;
        sub_5808( uParam0 );
    }
    else if (iVar3 == 2)
    {
        l_U99 = 2;
        sub_5808( uParam0 );
    };;;
    return;
}

void sub_5808(unknown uParam0)
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

int sub_6452()
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

int sub_6670()
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

int sub_6784()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_6836()
{
    if (g_U10720._fU0._fU4 == 0)
    {
        return 1;
    }
    else if (sub_6876( g_U10720 ))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_6876(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_7045( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_7045(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_7364()
{
    sub_7373();
    sub_7518( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_7592();
    return;
}

void sub_7373()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_7518(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7592()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_7630( 1, g_U575[I] )) == 0)
        {
            sub_7881( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_8059())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_7630(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7881(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_7966( g_U575 - 1 );
    return;
}

void sub_7966(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_8059()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_7630( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_8226()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_8494()
{
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    if (NOT l_U78)
    {
        sub_8557();
    }
    sub_8900();
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
    if (g_U10734 == 0)
    {
        l_U152 = "show_1";
        l_U153 = "SHOW1AU";
    }
    else if (g_U10734 == 1)
    {
        l_U152 = "show_2";
        l_U153 = "SHOW2AU";
    }
    else if (g_U10734 == 2)
    {
        l_U152 = "show_3";
        l_U153 = "SHOW3AU";
    }
    else if (g_U10734 == 3)
    {
        l_U152 = "show_4";
        l_U153 = "SHOW4AU";
    }
    else if (g_U10734 == 4)
    {
        l_U152 = "show_5";
        l_U153 = "SHOW5AU";
    }
    else if (g_U10734 == 5)
    {
        l_U152 = "show_6";
        l_U153 = "SHOW6AU";
    }
    else if (g_U10734 == 6)
    {
        l_U152 = "show_7";
        l_U153 = "SHOW7AU";
    }
    else if (g_U10734 == 7)
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
                sub_10380( l_U109 );
            }
            if (NOT (IS_CHAR_DEAD( sub_2064() )))
            {
                TASK_LOOK_AT_COORD( sub_2064(), l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U83 )))
            {
                TASK_LOOK_AT_COORD( l_U83, l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
            }
        }
    }
    if (g_U10734 == 7)
    {
        g_U10734 = 0;
    }
    else
    {
        g_U10734++;
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
        sub_965();
        if (NOT (IS_CHAR_INJURED( l_U83 )))
        {
            SET_CHAR_PROOFS( l_U83, 0, 0, 0, 0, 0 );
        }
    }
    sub_10833();
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

void sub_8557()
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

void sub_8900()
{
    REQUEST_MODEL( -1341473171 );
    while (NOT (HAS_MODEL_LOADED( -1341473171 )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_INJURED( sub_2064() )))
    {
        CREATE_OBJECT( -1341473171, l_U54._fU0, l_U54._fU4, l_U54._fU8, ref l_U95, 1 );
        SET_OBJECT_VISIBLE( l_U95, 0 );
        SET_OBJECT_COLLISION( l_U95, 0 );
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2064() )))
        {
            SET_CHAR_COORDINATES( sub_2064(), l_U54._fU0, l_U54._fU4, l_U54._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_2064(), l_U54._fU0, l_U54._fU4, l_U54._fU8 );
        }
        SET_CHAR_IN_CUTSCENE( sub_2064(), 1 );
        ATTACH_PED_TO_OBJECT( sub_2064(), l_U95, 0, 0, 0, 0, l_U60, 0, 0, 0 );
        TASK_PLAY_ANIM( sub_2064(), "sit_down_idle_01", "MISSCABARET", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_LOOK_AT_COORD( sub_2064(), l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
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

void sub_10380(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( l_U110[uParam0] )))
    {
        TASK_LOOK_AT_COORD( l_U110[uParam0], l_U145._fU0, l_U145._fU4, l_U145._fU8 + 0.80000000, 20000, 0 );
    }
    return;
}

void sub_10833()
{
    sub_10846( ref g_U10720 );
    sub_10924( ref g_U10720._fU0 );
    return;
}

void sub_10846(int iParam0)
{
    sub_10859( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_10859(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_10924(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_10955( iParam0->_fU4 )))
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

int sub_10955(unknown uParam0)
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

