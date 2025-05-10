void main()
{
    l_U3 = {1.00000000, 1.00000000, 1.00000000};
    l_U12 = 1.00000000;
    l_U21 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U34 = 99;
    l_U35 = 0;
    l_U36 = 0;
    l_U48 = 0;
    l_U49 = 0;
    l_U50 = {0.00000000, 0.00000000, 0.00000000};
    l_U53 = {0.00000000, 0.00000000, 0.00000000};
    l_U56 = 0;
    l_U57 = 0;
    l_U64 = 0;
    l_U187 = 99;
    l_U189 = 99;
    l_U197 = 0;
    l_U204 = 0;
    l_U207 = 0;
    l_U208 = -1;
    l_U209 = {0.00000000, 0.00000000, 0.00000000};
    l_U212 = {0.00000000, 0.00000000, 0.00000000};
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 1.00000000;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U229 = 0;
    l_U230 = {1.00000000, 0.00000000, 1.00000000};
    l_U233 = {-1.00000000, 0.00000000, -1.50000000};
    l_U236 = 0.50000000;
    l_U237 = 0.50000000;
    l_U238 = 0.50000000;
    l_U243 = 0;
    l_U248 = 0;
    l_U249 = 1;
    l_U250 = 3;
    l_U252 = 0;
    l_U257 = 10;
    l_U278 = 0;
    l_U279 = 0;
    l_U280 = 0;
    l_U281 = 0;
    l_U282 = 0;
    l_U283 = 0;
    l_U284 = 0;
    l_U285 = 0;
    l_U300 = 0;
    l_U301 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_490();
    }
    l_U273 = {l_U302._fU4[0]};
    l_U277 = l_U302._fU68[0];
    CREATE_OBJECT_NO_OFFSET( -1341473171, l_U273._fU0, l_U273._fU4, l_U273._fU8, ref l_U288, 1 );
    SET_OBJECT_HEADING( l_U288, l_U277 );
    SET_OBJECT_DYNAMIC( l_U288, 0 );
    SET_OBJECT_COLLISION( l_U288, 0 );
    FREEZE_OBJECT_POSITION( l_U288, 1 );
    SET_OBJECT_VISIBLE( l_U288, 0 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U300)
        {
            case 0:
            if (g_U9373 == 0)
            {
                GET_INTERIOR_AT_COORDS( 1188.08600000, -665.16560000, 15.53800000, ref l_U292 );
                GET_INTERIOR_AT_COORDS( -587.44020000, 66.77700000, 4.91530000, ref l_U291 );
                GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref l_U290 );
                if (NOT (l_U290 == nil))
                {
                    if ((l_U290 == l_U292) || (l_U290 == l_U291))
                    {
                        CLEAR_HELP();
                        // TEN_PIN_49 = Walk up to the desk to start bowling.
                        PRINT_HELP( "TEN_PIN_49" );
                        g_U9373 = 1;
                    }
                }
            }
            if (DOES_OBJECT_EXIST( l_U288 ))
            {
                if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                {
                    if (l_U252 == 0)
                    {
                        if (NOT IsMichelle1Running())
                        {
                            g_U65003 = 0;
                        }
                        else if (l_U279 == 0)
                        {
                            l_U279 = 1;
                        }
                        if (DOES_OBJECT_EXIST( l_U288 ))
                        {
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U288, -0.60000000, 0.00000000, 0.00000000, ref l_U261.x, ref l_U261.y, ref l_U261.z );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U288, -1.60000000, 2.60000000, 1.50000000, ref l_U264.x, ref l_U264.y, ref l_U264.z );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U288, -3.80000000, 36.40000000, -1.00000000, ref l_U267.x, ref l_U267.y, ref l_U267.z );
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U288, 21.20000000, 16.80000000, 1.00000000, ref l_U270.x, ref l_U270.y, ref l_U270.z );
                            GET_OBJECT_HEADING( l_U288, ref l_U276 );
                        }
                        SWITCH_PED_PATHS_OFF( l_U267.x, l_U267.y, l_U267.z, l_U270.x, l_U270.y, l_U270.z );

                        // Seems to possibly load the BOWL gxt text 3: 0xA9E5223D = Just take any empty available lane.
                        sub_1340( "BOWL", 3 );
                        l_U289 = -799229885;
                        l_U252 = 1;
                    }
                    if (l_U252 == 1)
                    {
                        if (sub_1511())
                        {
                            if (NOT (DOES_CHAR_EXIST( l_U286 )))
                            {
                                CREATE_CHAR( 4, l_U289, l_U261.x, l_U261.y, l_U261.z, ref l_U286, 1 );
                                SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U286, 1 );
                                SET_CHAR_HEADING( l_U286, l_U276 );
                                SET_ROOM_FOR_CHAR_BY_NAME( l_U286, "Bowl_GtaMloRoom" );
                                l_U283 = 1;
                            }
                            l_U252 = 2;
                        }
                    }
                    if (l_U252 == 2)
                    {
                        sub_1708();
                    }
                }
                else
                {
                    sub_490();
                }
                break;
            }
            sub_490();
        }
    }
    return;
}

// Switch ped paths on in unknown area, possibly somewhere in the bowling alley?
void sub_490()
{
    g_U9371 = 0;
    SWITCH_PED_PATHS_ON( l_U267.x, l_U267.y, l_U267.z, l_U270.x, l_U270.y, l_U270.z );
    TERMINATE_THIS_SCRIPT();
    return;
}

// sub_810
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

// sub_978
void IsMichelle1Running()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Michelle1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_1340(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_1376())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_1376()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

// Load and wait on the model
int sub_1511()
{
    REQUEST_MODEL( l_U289 );
    if (HAS_MODEL_LOADED( l_U289 ))
    {
        return 1;
    }
    return 0;
}

void sub_1708()
{
    boolean bVar2;

    bVar2 = true;

    sub_1720();
    sub_1793();
    sub_1920();
    sub_2160();
    sub_2474();
    sub_2693();
    sub_2912();

    switch (l_U301)
    {
        case 0:
        if (NOT g_U9371)
        {
            if (IsMichelle1Running())
            {
                if (g_U64576 == 0)
                {
                    bVar2 = false;
                }
                else if (g_U9374 == 1)
                {
                    bVar2 = false;
                }
                if (g_U9377 == 1)
                {
                    bVar2 = false;
                }
            }
            l_U285 = sub_1933( ref l_U287 );
            if (l_U285)
            {
                GET_GROUP_SIZE( sub_2000(), ref l_U259, ref l_U260 );
                if (l_U260 == 0)
                {
                    bVar2 = false;
                }
            }
            if (g_U10978)
            {
                if (NOT (sub_3365( 7 )))
                {
                    bVar2 = false;
                }
            }
            if (g_U9893._fU12)
            {
                bVar2 = false;
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )))
            {
                l_U281 = 0;
            }
            if (bVar2)
            {
                if (DOES_CHAR_EXIST( l_U286 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U286 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U295 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U286, ref l_U295 );
                            SET_BLIP_AS_FRIENDLY( l_U295, 1 );
                            CHANGE_BLIP_DISPLAY( l_U295, 1 );
                        }
                    }
                }
                if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), l_U264.x, l_U264.y, l_U264.z, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    if (l_U282 == 1)
                    {
                        l_U282 = 0;
                    }
                    if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )))
                    {
                        if (NOT l_U280)
                        {
                            if (DOES_CHAR_EXIST( l_U286 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U286 )))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U286, CurrentPlayerChar() );
                                    if (sub_4251( 2, 0 ))
                                    {
                                        if (l_U278 == 1)
                                        {
                                            if (IS_SCORE_GREATER( CurrentPlayerId(), l_U257 ))
                                            {
                                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_48" ))
                                                {
                                                    CLEAR_HELP();
                                                }
                                                l_U278 = 0;
                                            }
                                        }
                                        if (l_U278 == 0)
                                        {
                                            if (l_U258 == 0)
                                            {
                                                if (NOT IsMichelle1Running())
                                                {
                                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                    {
                                                        PRINT_NOW( "TEN_PIN_07", 7500, 4 );
                                                    }
                                                }
                                                else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                                {
                                                    PRINT_NOW( "TEN_PIN_50", 7500, 4 );
                                                }
                                                l_U258 = 1;
                                            }
                                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_46" )))
                                            {
                                                PRINT_HELP_FOREVER( "TEN_PIN_46" );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        CLEAR_THIS_PRINT( "TEN_PIN_07" );
                                        CLEAR_THIS_PRINT( "TEN_PIN_50" );
                                        l_U258 = 0;
                                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_52" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_48" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_46" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_45" )))))
                                        {
                                            CLEAR_HELP();
                                        }
                                        l_U278 = 0;
                                    }
                                    if (sub_4251( 2, 0 ))
                                    {
                                        if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                        {
                                            if (NOT IsMichelle1Running())
                                            {
                                                if (IS_SCORE_GREATER( CurrentPlayerId(), l_U257 ))
                                                {
                                                    PRINT_HELP_FOREVER( "TEN_PIN_45" );
                                                    l_U280 = 1;
                                                    l_U301 = 1;
                                                }
                                                else
                                                {
                                                    CLEAR_THIS_PRINT( "TEN_PIN_07" );
                                                    PRINT_HELP( "TEN_PIN_48" );
                                                    if (l_U278 == 0)
                                                    {
                                                        l_U278 = 1;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                l_U280 = 1;
                                                l_U301 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        CLEAR_THIS_PRINT( "TEN_PIN_07" );
                        CLEAR_THIS_PRINT( "TEN_PIN_50" );
                        l_U258 = 0;
                        if (DOES_CHAR_EXIST( l_U286 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U286 )))
                            {
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_52" )))
                                {
                                    PRINT_HELP_FOREVER( "TEN_PIN_52" );
                                }
                                if (l_U281 == 0)
                                {
                                    SAY_AMBIENT_SPEECH( l_U286, "BOWL_WANTED", 0, 0, 2 );
                                    l_U281 = 1;
                                }
                            }
                        }
                    }
                }
                else if (DOES_CHAR_EXIST( l_U286 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U286 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U286, CurrentPlayerChar(), -2, 1 );
                    }
                }
                CLEAR_THIS_PRINT( "TEN_PIN_07" );
                CLEAR_THIS_PRINT( "TEN_PIN_50" );
                l_U258 = 0;
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_52" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_48" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_46" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_45" )))))
                {
                    CLEAR_HELP();
                }
                l_U278 = 0;;
            }
            else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_52" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_48" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_46" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_45" )))))
            {
                CLEAR_HELP();
            }
        }
        break;
        case 1:
        if (NOT IsMichelle1Running())
        {
            if (sub_4251( 2, 0 ))
            {
                DISPLAY_CASH( 1 );
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_45" ))
                {
                    if (sub_5641())
                    {
                        if (DOES_CHAR_EXIST( l_U286 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U286 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U286, "BOWL_GREETING", 0, 0, 2 );
                            }
                        }
                        sub_5767();
                        RemovePlayerMoney( l_U257 );
                        l_U301 = 2;
                        PRINT_NOW( "TEN_PIN_18", 6000, 4 );
                        CLEAR_HELP();
                    }
                    if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                    {
                        if (DOES_CHAR_EXIST( l_U286 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U286 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U286, "BOWL_GREETING", 0, 0, 2 );
                            }
                        }
                        sub_5767();
                        RemovePlayerMoney( l_U257 );
                        g_U9372 = 1;
                        l_U301 = 2;
                        PRINT_NOW( "TEN_PIN_18", 6000, 4 );
                        CLEAR_HELP();
                    }
                }
            }
            else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_48" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_45" )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
            }
            l_U301 = 0;
            l_U280 = 0;;
        }
        else if (DOES_CHAR_EXIST( l_U286 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U286 )))
            {
                SAY_AMBIENT_SPEECH( l_U286, "BOWL_GREETING", 0, 0, 2 );
            }
        }
        CLEAR_HELP();
        PRINT_NOW( "TEN_PIN_18", 6000, 4 );
        g_U9372 = 1;
        l_U301 = 2;;
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U264.x, l_U264.y, l_U264.z, 1.50000000, 1.50000000, 1.50000000, 0 )))
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_48" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TEN_PIN_45" )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
            }
            l_U301 = 0;
            l_U280 = 0;
        }
        break;

        case 2:
        sub_7093();
        g_U9371 = 1;
        if (DOES_BLIP_EXIST( l_U295 ))
        {
            REMOVE_BLIP( l_U295 );
        }
        l_U301 = 3;
        break;

        case 3:
        if (NOT IsMichelle1Running())
        {
            if (g_U9371 == 0)
            {
                l_U253 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "TENPINBOWL" );
                if (l_U253 == 0)
                {
                    l_U280 = 0;
                    l_U301 = 0;
                    bVar2 = true;
                }
            }
        }
        break;
    }
    return;
}

void sub_1720()
{
    if (l_U279 == 1)
    {
        if (NOT IsMichelle1Running())
        {
            CLEAR_HELP();
            g_U9371 = 0;
            l_U301 = 3;
            l_U279 = 0;
            g_U65003 = 0;
        }
    }
    return;
}

void sub_1793()
{
    if (IsMichelle1Running())
    {
        if (l_U255 == 0)
        {
            if (g_U64576 == 1)
            {
                l_U255 = 1;
            }
        }
        if (l_U255 == 1)
        {
            if (g_U64576 == 0)
            {
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U295 ))
                {
                    REMOVE_BLIP( l_U295 );
                }
                l_U255 = 0;
            }
        }
    }
    return;
}

void sub_1920()
{
    l_U285 = sub_1933( ref l_U287 );
    if (l_U285)
    {
        GET_GROUP_SIZE( sub_2000(), ref l_U259, ref l_U260 );
        if (l_U256 == 0)
        {
            if (l_U260 > 0)
            {
                l_U256 = 1;
            }
        }
        if (l_U256 == 1)
        {
            if (l_U260 == 0)
            {
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U295 ))
                {
                    REMOVE_BLIP( l_U295 );
                }
                l_U256 = 0;
            }
        }
    }
    return;
}

int sub_1933(unknown uParam0)
{
    (uParam0^) = g_U32898._fU0;
    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    return 1;
}

void sub_2000()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2160()
{
    if (l_U283 == 1)
    {
        if (DOES_CHAR_EXIST( l_U286 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U286 )))
            {
                if (NOT IsMichelle1Running())
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U286, CurrentPlayerChar(), 0 ))
                    {
                        sub_2250();
                        sub_490();
                    }
                }
                else if (NOT g_U65003)
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U286, CurrentPlayerChar(), 0 ))
                    {
                        sub_2250();
                        g_U65003 = 1;
                        sub_490();
                    }
                }
            }
        }
    }
    return;
}

// Remove blip, clear char tasks, if chars are not injured make them flee the player char.
// Make all random peds flee the player, I'm guessing this happens if I cause mayhem.
void sub_2250()
{
    if (DOES_BLIP_EXIST( l_U295 ))
    {
        REMOVE_BLIP( l_U295 );
    }
    CLEAR_CHAR_TASKS( l_U286 );
    if (NOT (IS_CHAR_INJURED( l_U286 )))
    {
        TASK_SMART_FLEE_CHAR( l_U286, CurrentPlayerChar(), 100.00000000, -1 );
    }
    SET_ALL_RANDOM_PEDS_FLEE( CurrentPlayerId(), 1 );
    CLEAR_HELP();
    CLEAR_PRINTS();
    return;
}

// sub_2341
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2474()
{
    if (l_U283 == 1)
    {
        if (DOES_CHAR_EXIST( l_U286 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U286 )))
            {
                GET_INTERIOR_AT_COORDS( l_U261.x, l_U261.y, l_U261.z, ref l_U293 );
                GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref l_U294 );
                if (l_U294 == l_U293)
                {
                    if (NOT IsMichelle1Running())
                    {
                        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                        {
                            sub_2250();
                            sub_490();
                        }
                    }
                    else if (NOT g_U65003)
                    {
                        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                        {
                            sub_2250();
                            g_U65003 = 1;
                            sub_490();
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2693()
{
    if (l_U283 == 1)
    {
        if (DOES_CHAR_EXIST( l_U286 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U286 )))
            {
                GET_INTERIOR_AT_COORDS( l_U261.x, l_U261.y, l_U261.z, ref l_U293 );
                GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref l_U294 );
                if (l_U294 == l_U293)
                {
                    if (NOT IsMichelle1Running())
                    {
                        if (IS_CHAR_SHOOTING( CurrentPlayerChar() ))
                        {
                            sub_2250();
                            sub_490();
                        }
                    }
                    else if (NOT g_U65003)
                    {
                        if (IS_CHAR_SHOOTING( CurrentPlayerChar() ))
                        {
                            sub_2250();
                            g_U65003 = 1;
                            sub_490();
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2912()
{
    if (DOES_CHAR_EXIST( l_U286 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U286 )))
        {
            if (l_U282 == 0)
            {
                if (l_U290 == l_U291)
                {
                    if (IS_CHAR_IN_AREA_3D( CurrentPlayerChar(), -575.27670000, 64.99840000, 3.00000000, -600.65080000, 47.15970000, 7.00000000, 0 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U286, "BOWL_MONKEY", 0, 0, 2 );
                        l_U282 = 1;
                    }
                }
                if (l_U290 == l_U292)
                {
                    if (IS_CHAR_IN_AREA_3D( CurrentPlayerChar(), 1185.75700000, -677.22860000, 10.00000000, 1168.07700000, -651.59310000, 18.00000000, 0 ))
                    {
                        SAY_AMBIENT_SPEECH( l_U286, "BOWL_MONKEY", 0, 0, 2 );
                        l_U282 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_3365(int iParam0)
{
    unknown uVar3;

    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    if (sub_3405( g_U32898._fU0 ))
    {
        if (NOT (sub_3492( g_U32898._fU0, iParam0 )))
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

int sub_3405(unknown uParam0)
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

int sub_3492(int iParam0, int iParam1)
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

int sub_4251(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerId() )))))
                {
                    if (NOT sub_4347())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( CurrentPlayerChar() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_4432())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_4347()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4432()
{
    return sub_4443( 0, 0 );
}

int sub_4443(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_5641()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_5767()
{
    sub_5776();
    sub_5879( ref g_U9893._fU68 );
    sub_5928();
    return;
}

void sub_5776()
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

void sub_5879(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5928()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5966( 1, g_U569[I] )) == 0)
        {
            sub_6217( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6395())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5966(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6217(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6302( g_U569 - 1 );
    return;
}

void sub_6302(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6395()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5966( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

// Set player money, seems to negate the money
// sub_6528
int RemovePlayerMoney(int amountToDecrement)
{
    int iVar3;

    STORE_SCORE( CurrentPlayerId(), ref iVar3 );
    if (iVar3 >= amountToDecrement)
    {
        ADD_SCORE( CurrentPlayerId(), -amountToDecrement );
        return 1;
        break;
    }
    return 0;
}

void sub_7093()
{
    if (IsDwayneBackupRunning())
    {
        g_U64921 = 1;
    }
    return;
}


// sub_7102
int IsDwayneBackupRunning()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

