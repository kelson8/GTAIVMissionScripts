void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U10 = {0.00000000, 0.00000000, 0.00000000};
    l_U16 = {1.00000000, -4.00000000, 0.00000000};
    l_U36 = 0;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U42 = 0;
    l_U44 = 0;
    l_U45 = "TOLLBOOTH_BARRIER_RAISE";
    l_U46 = "TOLLBOOTH_BARRIER_LOWER";
    l_U47 = "TOLLBOOTH_COINS_IN";
    l_U48 = -1;
    l_U49 = -1;
    l_U50 = -1;
    l_U51 = -1;
    l_U52 = 0;
    l_U53 = 0;
    l_U54 = 0;
    l_U56 = 0;
    l_U58 = 1;
    l_U13 = {l_U59._fU4[0]};
    l_U34 = l_U59._fU68[0];
    while (sub_282())
    {
        WAIT( 0 );
    }
    CREATE_OBJECT_NO_OFFSET( -1341473171, l_U13._fU0, l_U13._fU4, l_U13._fU8, ref l_U22, 1 );
    SET_OBJECT_HEADING( l_U22, l_U34 );
    SET_OBJECT_DYNAMIC( l_U22, 0 );
    SET_OBJECT_COLLISION( l_U22, 0 );
    FREEZE_OBJECT_POSITION( l_U22, 1 );
    SET_OBJECT_VISIBLE( l_U22, 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    GET_OBJECT_COORDINATES( l_U22, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
    sub_441();
    sub_513();
    while (true)
    {
        WAIT( 0 );
        sub_544();
        if (IS_PLAYER_PLAYING( sub_1257() ))
        {
            sub_713();
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1257(), 0 )))
            {
                if (NOT l_U57)
                {
                    sub_2873();
                }
            }
            else
            {
                l_U57 = 1;
            }
            if (DOES_OBJECT_EXIST( l_U22 ))
            {
                GET_OBJECT_COORDINATES( l_U22, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
                GET_OBJECT_HEADING( l_U22, ref l_U55 );
                SET_OBJECT_DYNAMIC( l_U22, 0 );
                if ((NOT (sub_3061( l_U22 ))) AND (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()))
                {
                    if (IS_VEH_DRIVEABLE( l_U25 ))
                    {
                        if (DOES_OBJECT_EXIST( l_U24 ))
                        {
                            if (NOT sub_3148())
                            {
                                sub_3215();
                            }
                            sub_713();
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( sub_722() )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_722() ))
                        {
                            if (NOT sub_1026())
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_722(), l_U13._fU0, l_U13._fU4, l_U13._fU8, 50.00000000, 50.00000000, 10.00000000, 1 ))
                                {
                                    if (g_U10935 != 9)
                                    {
                                        l_U44 = g_U10935;
                                        g_U10935 = 9;
                                    }
                                }
                                else if (g_U10935 == 9)
                                {
                                    g_U10935 = 0;
                                }
                            }
                        }
                    }
                    switch (l_U2)
                    {
                        case 0:
                        if (sub_3641())
                        {
                            sub_3872( l_U22 );
                            sub_4269( l_U22 );
                            l_U2 = 2;
                        }
                        break;
                        case 2:
                        sub_1694();
                        sub_4482();
                        if (sub_4702())
                        {
                            if (DOES_OBJECT_EXIST( l_U24 ))
                            {
                                if (HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR( l_U19._fU0, l_U19._fU4, l_U19._fU8, 3.00000000, -1295524692, sub_722() ))
                                {
                                    if (NOT (sub_796( sub_722() )))
                                    {
                                        CLEAR_CHAR_TASKS( sub_722() );
                                    }
                                }
                                else if (NOT sub_3148())
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_722() )))
                                    {
                                        if (sub_4903())
                                        {
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_722(), ref l_U25 );
                                        }
                                        else if (IS_CAR_DEAD( l_U25 ))
                                        {
                                            GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U19._fU0, l_U19._fU4, l_U19._fU8, 5.00000000, 0, 0, ref l_U25, 0 );
                                        }
                                    }
                                    if (IS_VEH_DRIVEABLE( l_U25 ))
                                    {
                                        sub_5363( "IF IS_VEH_DRIVEABLE(boothCar)\n" );
                                        if (sub_5393( l_U25, l_U33, 15.00000000 ))
                                        {
                                            if ((NOT (IS_CHAR_IN_ANY_HELI( sub_722() ))) AND (IS_CHAR_IN_CAR( sub_722(), l_U25 )))
                                            {
                                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1257(), 0 )))
                                                {
                                                    if (sub_1026())
                                                    {
                                                        sub_5641();
                                                        if (sub_5813( l_U25 ))
                                                        {
                                                            if (sub_796( sub_722() ))
                                                            {
                                                                l_U2 = 3;
                                                            }
                                                            else if (sub_5943( 5 ))
                                                            {
                                                                sub_6016( l_U25 );
                                                                sub_6075( sub_722(), l_U25 );
                                                                l_U2 = 3;
                                                            }
                                                            else if (NOT l_U53)
                                                            {
                                                                PRINT_HELP( "TOLCASH" );
                                                                SAY_AMBIENT_SPEECH( l_U27, "TOLL_PAID_NO", 1, 0, 0 );
                                                                l_U53 = 1;
                                                            };;;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        l_U54 = 1;
                                                        sub_5363( "IF NOT isPlayerAbleToDriveCar()\n" );
                                                        l_U38 = 1;
                                                        l_U2 = 3;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                GET_DRIVER_OF_CAR( l_U25, ref l_U28 );
                                                if (sub_796( l_U28 ))
                                                {
                                                    TASK_CAR_TEMP_ACTION( l_U28, l_U25, 1, 2500 );
                                                    l_U38 = 1;
                                                    l_U2 = 3;
                                                }
                                                else
                                                {
                                                    sub_6016( l_U25 );
                                                    sub_6075( l_U28, l_U25 );
                                                    l_U38 = 1;
                                                    l_U2 = 3;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            sub_5363( "IF NOT isCarHeadingAcceptable(boothCar, fArmH, 15.0)\n" );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U42 = 1;
                            }
                        }
                        break;
                        case 3:
                        if (l_U38)
                        {
                            sub_1694();
                        }
                        switch (l_U3)
                        {
                            case 0:
                            sub_5363( "armStage = openArm\n" );
                            if (TIMERA() > 1200)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U22, 0.00000000, -1.00000000, 0.00000000, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
                                SETTIMERA( 0 );
                            }
                            if (l_U38)
                            {
                                sub_5363( "IF bAmbientPedUse\n" );
                                if (IS_VEH_DRIVEABLE( l_U25 ))
                                {
                                    GET_DRIVER_OF_CAR( l_U25, ref l_U28 );
                                    if (NOT (IS_CHAR_INJURED( l_U28 )))
                                    {
                                        if (sub_796( l_U28 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U28, 48, ref l_U40 );
                                            if (l_U40 == 7)
                                            {
                                                sub_606();
                                                l_U3 = 1;
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U28, 29, ref l_U40 );
                                            if (l_U40 == 7)
                                            {
                                                sub_606();
                                                l_U3 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( sub_722() )))
                            {
                                GET_SCRIPT_TASK_STATUS( sub_722(), 80, ref l_U40 );
                                if (l_U40 == 7)
                                {
                                    sub_606();
                                    l_U3 = 1;
                                }
                            }
                            break;
                            case 1:
                            sub_5363( "armStage = armOpen\n" );
                            if (NOT l_U37)
                            {
                                sub_7592();
                                l_U37 = 1;
                            }
                            if (l_U38)
                            {
                                sub_5363( "armStage = armOpen & IF bAmbientPedUse\n" );
                                if (IS_VEH_DRIVEABLE( l_U25 ))
                                {
                                    if (DOES_OBJECT_EXIST( l_U24 ))
                                    {
                                        if (NOT (LOCATE_CAR_2D( l_U25, l_U19._fU0, l_U19._fU4, 10.00000000, 10.00000000, 0 )))
                                        {
                                            l_U3 = 2;
                                            l_U37 = 0;
                                            l_U25 = nil;
                                            l_U26 = nil;
                                            l_U54 = 0;
                                        }
                                        else
                                        {
                                            sub_7974();
                                        }
                                    }
                                }
                                else
                                {
                                    l_U3 = 2;
                                    l_U37 = 0;
                                    l_U38 = 0;
                                    l_U25 = nil;
                                    l_U26 = nil;
                                    l_U54 = 0;
                                }
                            }
                            else if (NOT (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_722(), l_U24, 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U3 = 2;
                                l_U37 = 0;
                                l_U38 = 0;
                                l_U25 = nil;
                                l_U26 = nil;
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" )))
                                {
                                    sub_1437( "TOLLHLP" );
                                }
                                else
                                {
                                    sub_1437( "TOLNTRO" );
                                }
                            }
                            break;
                            case 2:
                            sub_5363( "armStage = closeArm\n" );
                            if (g_U10935 == 9)
                            {
                                g_U10935 = 0;
                            }
                            sub_2585();
                            l_U3 = 0;
                            l_U2 = 2;
                            break;
                        }
                        break;
                    }
                }
                else if (l_U42)
                {
                    if (NOT (IS_CHAR_INJURED( l_U27 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U27, "TOLL_COME_BACK", 1, 0, 0 );
                    }
                }
                PRINTSTRING( "Toll Booth Script Killed" );
                PRINTNL();
                sub_1395();;
            }
            else if (l_U42)
            {
                if (NOT (IS_CHAR_INJURED( l_U27 )))
                {
                    SAY_AMBIENT_SPEECH( l_U27, "TOLL_COME_BACK", 1, 0, 0 );
                }
            }
            PRINTSTRING( "Toll Booth Script Killed" );
            PRINTNL();
            sub_1395();;
        }
    }
    return;
}

void sub_282()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_441()
{
    vector vVar2;

    vVar2 = {551.97590000, 763.48400000, 20.11330000};
    l_U31 = VDIST( l_U13, vVar2 );
    if (l_U31 < 5.00000000)
    {
        l_U51 = 0;
    }
    return;
}

void sub_513()
{
    return;
}

void sub_544()
{
    if (g_U10498)
    {
        sub_441();
        if (l_U51 == 0)
        {
            if (NOT l_U52)
            {
                if (DOES_OBJECT_EXIST( l_U24 ))
                {
                    sub_606();
                    l_U52 = 1;
                }
            }
        }
    }
    else if (l_U52)
    {
        sub_2585();
        l_U52 = 0;
    }
    return;
}

void sub_606()
{
    if (DOES_OBJECT_EXIST( l_U24 ))
    {
        l_U48 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( l_U48, l_U45, l_U24 );
        SET_OBJECT_COLLISION( l_U24, 0 );
        while (l_U10._fU4 <= 84.00000000)
        {
            WAIT( 0 );
            l_U10._fU4 += 3.00000000;
            sub_713();
            SET_OBJECT_ROTATION( l_U24, 0.00000000, l_U10._fU4, l_U32 );
            if (l_U38)
            {
                sub_1694();
            }
        }
        SET_OBJECT_COLLISION( l_U24, 1 );
        STOP_SOUND( l_U48 );
        RELEASE_SOUND_ID( l_U48 );
        l_U48 = -1;
    }
    return;
}

void sub_713()
{
    if (NOT (IS_CHAR_DEAD( sub_722() )))
    {
        if (DOES_OBJECT_EXIST( l_U24 ))
        {
            if (NOT (sub_796( sub_722() )))
            {
                if ((l_U42) || (HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR( l_U19._fU0, l_U19._fU4, l_U19._fU8, 3.00000000, -1295524692, sub_722() )))
                {
                    CLEAR_CHAR_TASKS( sub_722() );
                    ALTER_WANTED_LEVEL_NO_DROP( sub_1257(), 1 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_1257() );
                    if (NOT (IS_CHAR_INJURED( l_U27 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U27, "TOLL_COME_BACK", 1, 0, 0 );
                    }
                    PRINTSTRING( "Toll Booth Script Killed" );
                    PRINTNL();
                    sub_1395();
                }
            }
        }
    }
    return;
}

void sub_722()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_796(int iParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if ((IS_CAR_MODEL( uVar3, 562680400 )) || ((IS_CAR_MODEL( uVar3, -283209848 )) || ((IS_CAR_MODEL( uVar3, -1627000575 )) || ((IS_CAR_MODEL( uVar3, -1900572838 )) || ((IS_CAR_MODEL( uVar3, -350085182 )) || ((IS_CAR_MODEL( uVar3, 2046537925 )) || ((IS_CAR_MODEL( uVar3, 1911513875 )) || ((IS_CAR_MODEL( uVar3, 148777611 )) || ((IS_CAR_MODEL( uVar3, 1938952078 )) || ((IS_CAR_MODEL( uVar3, 1127131465 )) || (IS_CAR_MODEL( uVar3, 1171614426 ))))))))))))
            {
                if (iParam0 == sub_722())
                {
                    if (sub_1026())
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_1026()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_722() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_722() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_722(), ref uVar2 );
            if ((NOT (IS_CAR_ON_FIRE( uVar2 ))) AND (IS_VEH_DRIVEABLE( uVar2 )))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_722())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_1257()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1395()
{
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" )))
    {
        sub_1437( "TOLLHLP" );
    }
    else
    {
        sub_1437( "TOLNTRO" );
    }
    REMOVE_ANIMS( "AMB@TOLLBOOTH" );
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "TollBooth" )) == 1)
    {
        g_U10935 = 0;
    }
    if (l_U49 != -1)
    {
        STOP_SOUND( l_U49 );
        RELEASE_SOUND_ID( l_U49 );
    }
    if (l_U48 != -1)
    {
        STOP_SOUND( l_U48 );
        RELEASE_SOUND_ID( l_U48 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1437(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_1694()
{
    if (NOT (IS_CHAR_DEAD( sub_722() )))
    {
        if (DOES_OBJECT_EXIST( l_U23 ))
        {
            if (sub_1026())
            {
                if (LOCATE_CHAR_IN_CAR_OBJECT_3D( sub_722(), l_U23, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    if (l_U42 == 0)
                    {
                        l_U42 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U27 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U27, "TOLL_COME_BACK", 1, 0, 0 );
                        }
                    }
                }
                if (NOT (HAS_OBJECT_BEEN_DAMAGED( l_U24 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, -6.00000000, 0.00000000, 0.00000000, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
                    if (LOCATE_CHAR_IN_CAR_3D( sub_722(), l_U4._fU0, l_U4._fU4, l_U4._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U42 == 0)
                        {
                            l_U42 = 1;
                            if (NOT (IS_CHAR_INJURED( l_U27 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U27, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, -4.00000000, 0.00000000, 0.00000000, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
                    if (LOCATE_CHAR_IN_CAR_3D( sub_722(), l_U4._fU0, l_U4._fU4, l_U4._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U42 == 0)
                        {
                            l_U42 = 1;
                            if (NOT (IS_CHAR_INJURED( l_U27 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U27, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, -2.00000000, 0.00000000, 0.00000000, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
                    if (LOCATE_CHAR_IN_CAR_3D( sub_722(), l_U4._fU0, l_U4._fU4, l_U4._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U42 == 0)
                        {
                            l_U42 = 1;
                            if (NOT (IS_CHAR_INJURED( l_U27 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U27, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                }
            }
            if (IS_CAR_DEAD( l_U26 ))
            {
                GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U4._fU0, l_U4._fU4, l_U4._fU8, 5.00000000, 0, 0, ref l_U26, l_U25 );
            }
            else
            {
                GET_DRIVER_OF_CAR( l_U26, ref l_U29 );
                if (l_U29 == sub_722())
                {
                    ;
                }
                else if (NOT (IS_CHAR_INJURED( l_U29 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U29, 48, ref l_U40 );
                    if (l_U40 == 7)
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_722(), l_U26 )))
                        {
                            ;
                        }
                        else if (l_U54)
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2585()
{
    if (DOES_OBJECT_EXIST( l_U24 ))
    {
        l_U49 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( l_U49, l_U46, l_U24 );
        SET_OBJECT_COLLISION( l_U24, 0 );
        while (l_U10._fU4 >= 0.00000000)
        {
            WAIT( 0 );
            sub_713();
            SET_OBJECT_ROTATION( l_U24, 0.00000000, l_U10._fU4, l_U32 );
            l_U10._fU4 -= 3.00000000;
            if (l_U38)
            {
                sub_1694();
            }
        }
        if (l_U38)
        {
            l_U38 = 0;
        }
        SET_OBJECT_COLLISION( l_U24, 1 );
        STOP_SOUND( l_U49 );
        RELEASE_SOUND_ID( l_U49 );
        l_U49 = -1;
    }
    return;
}

void sub_2873()
{
    if (NOT (IS_CHAR_INJURED( l_U27 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U27, 80, ref l_U40 );
        if (l_U40 == 7)
        {
            TASK_PLAY_ANIM( l_U27, "Idle", "AMB@TOLLBOOTH", 4.00000000, 1, 0, 0, 0, 0 );
        }
    }
    return;
}

int sub_3061(unknown uParam0)
{
    if (NOT sub_3070())
    {
        return 1;
    }
    return 0;
}

void sub_3070()
{
    int Result;

    Result = 1;
    return Result;
}

int sub_3148()
{
    float fVar2;

    if (DOES_OBJECT_EXIST( l_U24 ))
    {
        GET_OBJECT_HEALTH( l_U24, ref fVar2 );
        if (fVar2 < l_U35)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3215()
{
    if (NOT (IS_CAR_DEAD( l_U25 )))
    {
        if (DOES_OBJECT_EXIST( l_U22 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, 3.00000000, 3.00000000, 0.00000000, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
            GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U4._fU0, l_U4._fU4, l_U4._fU8, 4.00000000, 0, 0, ref l_U26, l_U25 );
            if (NOT (IS_CAR_DEAD( l_U26 )))
            {
                GET_DRIVER_OF_CAR( l_U26, ref l_U29 );
                if (l_U29 != sub_722())
                {
                    if (NOT (IS_CHAR_INJURED( l_U29 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U29, 48, ref l_U40 );
                        if (l_U40 == 7)
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_722(), l_U26 )))
                            {
                                ;
                            }
                            else if (l_U54)
                            {
                                ;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_3641()
{
    REQUEST_ANIMS( "AMB@TOLLBOOTH" );
    REQUEST_MODEL( -1295524692 );
    REQUEST_MODEL( -1174154857 );
    REQUEST_MODEL( sub_3697() );
    if ((HAS_MODEL_LOADED( sub_3697() )) AND ((REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TOLLBOOTH" )) AND ((HAVE_ANIMS_LOADED( "AMB@TOLLBOOTH" )) AND ((HAS_MODEL_LOADED( -1174154857 )) AND (HAS_MODEL_LOADED( -1295524692 ))))))
    {
        return 1;
    }
    return 0;
}

void sub_3697()
{
    if (l_U56 == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U56 );
    }
    return l_U56;
}

void sub_3872(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar3 = -0.30000000;
    fVar4 = 0.70000000;
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 2.89900000, -1.00000000, fVar3, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
    CREATE_OBJECT( -1174154857, l_U4._fU0, l_U4._fU4, l_U4._fU8, ref l_U23, 1 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 3.09900000, -1.00000000, fVar4, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
    CREATE_OBJECT( -1295524692, l_U4._fU0, l_U4._fU4, l_U4._fU8, ref l_U24, 1 );
    l_U19 = {l_U4};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U16._fU0, l_U16._fU4, l_U16._fU8, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
    GET_OBJECT_HEADING( uParam0, ref l_U30 );
    l_U31 = l_U30 + 90.00000000;
    if (l_U31 > 360.00000000)
    {
        l_U31 -= 360.00000000;
    }
    l_U32 = l_U31;
    l_U33 = l_U32 + 180.00000000;
    if (l_U33 > 360.00000000)
    {
        l_U33 -= 360.00000000;
    }
    SET_OBJECT_HEADING( l_U24, l_U31 );
    SET_OBJECT_HEADING( l_U23, l_U31 );
    SET_OBJECT_ROTATION( l_U24, 0.00000000, l_U10._fU4, l_U31 );
    GET_OBJECT_HEALTH( l_U24, ref l_U35 );
    SET_OBJECT_DYNAMIC( l_U23, 0 );
    FREEZE_OBJECT_POSITION( l_U23, 1 );
    return;
}

void sub_4269(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.50000000, 0.25000000, 0.00000000, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
        CREATE_CHAR( 6, sub_3697(), l_U4._fU0, l_U4._fU4, l_U4._fU8, ref l_U27, 1 );
        GET_OBJECT_HEADING( uParam0, ref l_U31 );
        SET_INFORM_RESPECTED_FRIENDS( l_U27, 999, 999 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U27, 1 );
        SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U27, 1 );
        l_U31 += 180.00000000;
        if (l_U31 >= 360.00000000)
        {
            l_U31 -= 360.00000000;
        }
        SET_CHAR_HEADING( l_U27, l_U31 );
    }
    return;
}

void sub_4482()
{
    if ((l_U58) AND (g_U10497))
    {
        if (DOES_OBJECT_EXIST( l_U23 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U23, 0.00000000, 10.00000000, 0.00000000, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
            if (LOCATE_CHAR_IN_CAR_3D( sub_722(), l_U4._fU0, l_U4._fU4, l_U4._fU8, 50.00000000, 50.00000000, 3.00000000, 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_HELI( sub_722() )))
                {
                    if (sub_1026())
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1257(), 0 )))
                        {
                            if (NOT (sub_796( sub_722() )))
                            {
                                if (IS_SCORE_GREATER( sub_1257(), 4 ))
                                {
                                    l_U58 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_4702()
{
    if (g_U10499)
    {
        if (NOT (IS_CHAR_INJURED( l_U27 )))
        {
            DELETE_CHAR( ref l_U27 );
        }
        return 1;
    }
    if (NOT (IS_CHAR_INJURED( l_U27 )))
    {
        return 1;
    }
    return 0;
}

int sub_4903()
{
    unknown uVar2;
    float fVar3;

    if (DOES_OBJECT_EXIST( l_U22 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U22, l_U16._fU0, l_U16._fU4, l_U16._fU8, ref l_U4._fU0, ref l_U4._fU4, ref l_U4._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( sub_722() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_722() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_722(), ref uVar2 );
            if (sub_1026())
            {
                if ((IS_CAR_MODEL( uVar2, 1917016601 )) || ((IS_CAR_MODEL( uVar2, 1677715180 )) || ((IS_CAR_MODEL( uVar2, 850991848 )) || ((IS_CAR_MODEL( uVar2, -1099960214 )) || ((IS_CAR_MODEL( uVar2, 2053223216 )) || ((IS_CAR_MODEL( uVar2, 904750859 )) || ((IS_CAR_MODEL( uVar2, 569305213 )) || ((IS_CAR_MODEL( uVar2, 1353720154 )) || (IS_CAR_MODEL( uVar2, -2137348917 ))))))))))
                {
                    fVar3 = 8.00000000;
                }
                else
                {
                    fVar3 = 4.00000000;
                }
            }
            else
            {
                fVar3 = 6.00000000;
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_722(), l_U4._fU0, l_U4._fU4, l_U4._fU8, fVar3, fVar3, fVar3, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_5363(unknown uParam0)
{
    return;
}

int sub_5393(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEADING( uParam0, ref fVar5 );
        fVar7 = uParam1 - uParam2;
        if (fVar7 < 0.00000000)
        {
            fVar7 += 360.00000000;
        }
        fVar6 = uParam1 + uParam2;
        if (fVar6 >= 360.00000000)
        {
            fVar6 -= 360.00000000;
        }
        if (fVar6 > fVar7)
        {
            if ((fVar5 > fVar7) AND (fVar5 < fVar6))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar5 > fVar7) || (fVar5 < fVar6))
        {
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

void sub_5641()
{
    if (g_U10497)
    {
        if (NOT (sub_796( sub_722() )))
        {
            if (IS_SCORE_GREATER( sub_1257(), 4 ))
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" ))
                {
                    CLEAR_HELP();
                }
                sub_5734( "TOLLHLP", 0 );
                g_U10497 = 0;
            }
        }
    }
    return;
}

void sub_5734(unknown uParam0, unknown uParam1)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam1 );
            PRINT_HELP( uParam0 );
        }
    }
    return;
}

int sub_5813(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar4 = 7.50000000;
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (sub_796( sub_722() ))
        {
            fVar4 = 20.00000000;
        }
        if (fVar3 < fVar4)
        {
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

int sub_5943(int iParam0)
{
    int iVar3;

    STORE_SCORE( sub_1257(), ref iVar3 );
    if (iVar3 >= iParam0)
    {
        ADD_SCORE( sub_1257(), -iParam0 );
        return 1;
        break;
    }
    return 0;
}

void sub_6016(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    if (IS_THIS_MODEL_A_CAR( uVar3 ))
    {
        REMOVE_CAR_WINDOW( uParam0, 0 );
    }
    return;
}

void sub_6075(int iParam0, unknown uParam1)
{
    string sVar4;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (sub_6115( iParam0 ))
            {
                sVar4 = "Give_Money";
                if (sub_6221( uParam1 ))
                {
                    sVar4 = "toss_money_chopper";
                }
                else if (sub_6440( uParam1 ))
                {
                    sVar4 = "toss_money_dirt";
                }
                else if (sub_6508( uParam1 ))
                {
                    sVar4 = "toss_money_freeway";
                }
                else if (sub_6579( uParam1 ))
                {
                    sVar4 = "toss_money_scooter";
                }
                else if (sub_6650( uParam1 ))
                {
                    sVar4 = "toss_money_spt";
                };;;;;
                if (iParam0 == sub_722())
                {
                    TASK_PLAY_ANIM( iParam0, sVar4, "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U41 );
                    TASK_CAR_TEMP_ACTION( 0, uParam1, 24, 1000 );
                    TASK_PLAY_ANIM( 0, sVar4, "AMB@TOLLBOOTH", 4.00000000, 0, 1, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U41 );
                    TASK_PERFORM_SEQUENCE( iParam0, l_U41 );
                    CLEAR_SEQUENCE_TASK( l_U41 );
                }
            }
        }
    }
    return;
}

int sub_6115(int iParam0)
{
    if (iParam0 == sub_722())
    {
        if (NOT sub_6137())
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_6137()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_6221(unknown uParam0)
{
    if ((sub_6232( uParam0 )) == 1)
    {
        return 1;
    }
    return 0;
}

void sub_6232(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case 301427732:
        Result = 0;
        break;
        case -570033273:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

int sub_6440(unknown uParam0)
{
    if ((sub_6232( uParam0 )) == 4)
    {
        return 1;
    }
    return 0;
}

int sub_6508(unknown uParam0)
{
    if ((sub_6232( uParam0 )) == 0)
    {
        return 1;
    }
    return 0;
}

int sub_6579(unknown uParam0)
{
    if ((sub_6232( uParam0 )) == 3)
    {
        return 1;
    }
    return 0;
}

int sub_6650(unknown uParam0)
{
    if ((sub_6232( uParam0 )) == 2)
    {
        return 1;
    }
    return 0;
}

void sub_7592()
{
    if (NOT (IS_CHAR_INJURED( l_U27 )))
    {
        if (sub_7617())
        {
            TASK_PLAY_ANIM( l_U27, "Indicate_Left_A", "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
        }
        else
        {
            TASK_PLAY_ANIM( l_U27, "Indicate_Left_B", "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
        }
        SAY_AMBIENT_SPEECH( l_U27, "TOLL_PAID_YES", 1, 0, 0 );
    }
    return;
}

int sub_7617()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    return 0;
}

void sub_7974()
{
    if (IS_VEH_DRIVEABLE( l_U25 ))
    {
        GET_DRIVER_OF_CAR( l_U25, ref l_U28 );
        if (l_U28 == sub_722())
        {
            ;
        }
        else if (NOT (IS_CHAR_INJURED( l_U28 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U28, 16, ref l_U40 );
            if (l_U40 == 7)
            {
                if (l_U54)
                {
                    GET_SCRIPT_TASK_STATUS( l_U28, 49, ref l_U40 );
                    if (l_U40 == 1)
                    {
                        if (g_U2678)
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U28, 22.00000000 );
                        }
                        else
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U28, 12.00000000 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_IN_CAR( sub_722(), l_U25 )))
                {
                    TASK_CAR_DRIVE_WANDER( l_U28, l_U25, 15.00000000, 0 );
                }
            }
        }
    }
    return;
}

