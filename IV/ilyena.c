void main()
{
    l_U98 = 0;
    l_U99 = 1;
    l_U100 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U138 = {1225.62900000, 151.35350000, 31.42740000};
    l_U141 = 0;
    l_U147 = 0;
    l_U155 = 1;
    l_U156 = 0;
    l_U157 = 0;
    l_U159 = 1000;
    l_U160 = 1;
    l_U182 = 44;
    l_U183 = 124.52620000;
    l_U184 = 0;
    l_U185 = 0;
    l_U186 = 0;
    l_U187 = 0;
    l_U206 = 1;
    l_U208 = 0;
    l_U209 = 0;
    if (sub_259( l_U182, l_U155 ))
    {
        if (IS_PLAYER_PLAYING( sub_960() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_960(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1034();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U109)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_2162())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1034();
                            }
                            if (NOT sub_2346())
                            {
                                sub_1034();
                            }
                            switch (l_U104)
                            {
                                case 0:
                                sub_2431();
                                break;
                                case 1:
                                sub_3003();
                                break;
                            }
                        }
                        else
                        {
                            sub_1034();
                        }
                        sub_7667();
                    }
                    if (l_U109)
                    {
                        switch (l_U105)
                        {
                            case 0:
                            sub_7783();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2171() )))
                {
                    if (sub_3182() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1034();;
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_259(unknown uParam0, unknown uParam1)
{
    if (sub_268())
    {
        return 0;
    }
    return sub_315( uParam0, uParam1 );
}

int sub_268()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_315(unknown uParam0, int iParam1)
{
    unknown uVar4;

    if (NOT g_U34175._fU0)
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    uVar4 = sub_359( uParam0 );
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU4)
    {
        return 0;
    }
    if (g_U9893._fU4)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        if (sub_636( g_U34048[uVar4]._fU8 ))
        {
            g_U34048[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        return 0;
    }
    return g_U34048[uVar4]._fU28 == iParam1;
}

int sub_359(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_370( uParam0 )))
    {
        sub_479( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_370(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_479(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_636(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_805( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_805(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_960()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1034()
{
    if ((l_U112) AND (l_U111))
    {
        if (sub_1059())
        {
            sub_1106( 0 );
        }
    }
    if (sub_1328( l_U182, l_U155 ))
    {
        sub_1424( l_U182, l_U155 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_960() ))
        {
            SET_PLAYER_CONTROL( sub_960(), 1 );
        }
        sub_1894();
    }
    if (DOES_CHAR_EXIST( l_U119 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            FREEZE_CHAR_POSITION( l_U119, 0 );
            CLEAR_CHAR_TASKS( l_U119 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U119 );
        }
    }
    CLEAR_NAMED_CUTSCENE( "rpily1" );
    REMOVE_BLIP( l_U124 );
    REMOVE_BLIP( l_U123 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    l_U119 = nil;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1059()
{
    if (g_U9241._fU148[0] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_1106(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((iParam0 == 2) || (I == iParam0))
        {
            sub_1144( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_1144(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_1196( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_1196(unknown uParam0)
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

int sub_1328(int iParam0, int iParam1)
{
    if (NOT g_U34175._fU4)
    {
        return 0;
    }
    if (NOT (g_U34175._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U34175._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_1424(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1328( uParam0, uParam1 )))
    {
        sub_479( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1520();
    if (g_U813)
    {
        sub_1612();
    }
    else
    {
        sub_1730();
    }
    g_U10978 = 0;
    return;
}

void sub_1520()
{
    if (g_U0)
    {
        g_U34175._fU0 = 0;
    }
    else
    {
        g_U34175._fU0 = 1;
    }
    g_U34175._fU4 = 0;
    g_U34175._fU8 = 54;
    g_U34175._fU12 = 0;
    return;
}

void sub_1612()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1658();
    return;
}

void sub_1658()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1730()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1776();
    return;
}

void sub_1776()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1894()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

int sub_2162()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2171(), ref l_U122 );
        if (NOT (l_U122 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U122 ))
            {
                GET_CAR_SPEED( l_U122, ref l_U143 );
                if (l_U143 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2171()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2346()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_2431()
{
    switch (l_U103)
    {
        case 0:
        l_U126 = {969.90000000, -680.85000000, 15.44000000};
        l_U154 = -835225126;
        REQUEST_MODEL( l_U154 );
        while (NOT (HAS_MODEL_LOADED( l_U154 )))
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "MISSPASS" );
        REQUEST_ANIMS( "missilyena" );
        while ((NOT (HAVE_ANIMS_LOADED( "missilyena" ))) || (NOT (HAVE_ANIMS_LOADED( "MISSPASS" ))))
        {
            WAIT( 0 );
        }
        l_U103 = 1;
        break;
        case 1:
        if (NOT l_U110)
        {
            CLEAR_AREA( l_U126._fU0, l_U126._fU4, l_U126._fU8, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U154, l_U126._fU0, l_U126._fU4, l_U126._fU8, ref l_U119, 1 );
            SET_CHAR_HEADING( l_U119, l_U183 );
            SET_CHAR_NEVER_TARGETTED( l_U119, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U119, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U119, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U119, 1 );
            l_U110 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U123 )))
        {
            ADD_BLIP_FOR_CHAR( l_U119, ref l_U123 );
            CHANGE_BLIP_SPRITE( l_U123, 64 );
            SET_BLIP_AS_FRIENDLY( l_U123, 1 );
            CHANGE_BLIP_SCALE( l_U123, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U123, 2 );
        }
        if (l_U110)
        {
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                TASK_PLAY_ANIM( l_U119, "female_ilde", "missilyena", 8.00000000, 1, 0, 0, 0, -2 );
            }
            l_U104 = 1;
        }
        break;
    }
    return;
}

void sub_3003()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2171(), ref l_U122 );
        if (NOT (l_U122 == l_U121))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U121 );
            l_U121 = l_U122;
        }
    }
    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2171(), 0 )) || (IS_CHAR_INJURED( l_U119 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U119, 0 );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
        }
        sub_1034();
    }
    if ((IS_CHAR_ON_FOOT( sub_2171() )) AND (sub_3182() < 25))
    {
        sub_3416( ref l_U119, ref l_U188, ref l_U126, ref l_U183, ref l_U187, 1.10000000, "female_ilde", "missILYENA" );
    }
    switch (l_U106)
    {
        case 0:
        if ((IS_WANTED_LEVEL_GREATER( sub_960(), 0 )) || ((IS_CHAR_ON_FIRE( l_U119 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2171(), 0 )) || (IS_CHAR_INJURED( l_U119 )))))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_960(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2171() )))
                {
                    if (sub_3182() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
            }
            sub_1034();
        }
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            if ((IS_CHAR_ON_FOOT( sub_2171() )) AND (sub_3182() < 18))
            {
                if ((NOT l_U186) AND (NOT IS_HINT_RUNNING()))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 6000 );
                    l_U186 = 1;
                }
                l_U106 = 1;
            }
        }
        break;
        case 1:
        if ((IS_WANTED_LEVEL_GREATER( sub_960(), 0 )) || ((IS_CHAR_ON_FIRE( l_U119 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2171(), 0 )) || (IS_CHAR_INJURED( l_U119 )))))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_960(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2171() )))
                {
                    if (sub_3182() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
            }
            sub_1034();
        }
        if ((NOT l_U185) AND (sub_3182() < 10))
        {
            if (NOT (IS_CHAR_DEAD( l_U119 )))
            {
                TASK_PLAY_ANIM_UPPER_BODY( l_U119, "partial_wave_a", "MISSPASS", 8.00000000, 0, 0, 0, 0, -1 );
            }
            TASK_LOOK_AT_CHAR( l_U119, sub_2171(), -2, 0 );
            l_U185 = 1;
        }
        if (sub_3182() < 3.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2171() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U119 )))
                {
                    if (sub_4397( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2171(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U119 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_960(), 0 )))
                                {
                                    if (sub_2346())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_960(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U106 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3182() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
            }
            l_U185 = 0;
            l_U106 = 0;
        }
        break;
        case 2:
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_960() );
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PIIAUD", 6 );
        if (NOT l_U114)
        {
            if (DOES_VEHICLE_EXIST( l_U121 ))
            {
                if (IS_VEH_DRIVEABLE( l_U121 ))
                {
                    SET_CAR_AS_MISSION_CAR( l_U121 );
                    SET_CAR_COORDINATES( l_U121, 958.91040000, -650.89130000, 13.13990000 );
                    SET_CAR_HEADING( l_U121, 3.20670000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U121 );
                    SET_CAR_FORWARD_SPEED( l_U121, 0.00001000 );
                    SET_CAR_IN_CUTSCENE( l_U121, 1 );
                    l_U114 = 1;
                }
            }
            else
            {
                REQUEST_MODEL( -909201658 );
                while (NOT (HAS_MODEL_LOADED( -909201658 )))
                {
                    WAIT( 0 );
                }
                CREATE_CAR( -909201658, 958.91040000, -650.89130000, 13.13990000, ref l_U121, 1 );
                SET_CAR_HEADING( l_U121, 3.20670000 );
                SET_CAR_COORDINATES( l_U121, 958.91040000, -650.89130000, 13.13990000 );
                SET_CAR_FORWARD_SPEED( l_U121, 0.00001000 );
                SET_CAR_IN_CUTSCENE( l_U121, 1 );
                l_U114 = 1;
                MARK_MODEL_AS_NO_LONGER_NEEDED( -909201658 );
            }
        }
        CLEAR_NAMED_CUTSCENE( "rpily1" );
        START_CUTSCENE_NOW( "rpily1" );
        sub_5344( l_U182, l_U155 );
        l_U109 = 1;
        break;
    }
    return;
}

void sub_3182()
{
    if (NOT (IS_CHAR_DEAD( l_U119 )))
    {
        GET_CHAR_COORDINATES( sub_2171(), ref l_U129._fU0, ref l_U129._fU4, ref l_U129._fU8 );
        GET_CHAR_COORDINATES( l_U119, ref l_U132._fU0, ref l_U132._fU4, ref l_U132._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U129._fU0, l_U129._fU4, l_U129._fU8, l_U132._fU0, l_U132._fU4, l_U132._fU8, ref l_U141 );
        return l_U141;
    }
    return l_U141;
}

void sub_3416(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8 );
                OPEN_SEQUENCE_TASK( uParam1 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_ACHIEVE_HEADING( 0, (uParam3^) );
                CLOSE_SEQUENCE_TASK( (uParam1^) );
                TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
                CLEAR_SEQUENCE_TASK( (uParam1^) );
                (uParam4^) = 1;
            }
        }
        else
        {
            PRINTSTRING( "fail 0" );
            PRINTNL();
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar10 );
            if (iVar10 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                (uParam4^) = 0;
            }
        }
    }
    return;
}

int sub_4397(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2171(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 > 1.01100000) || (fVar6 < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2171(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2171()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2171() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_960() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_960() )))
    {
        return 0;
    }
    return 1;
}

void sub_5344(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_479( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_359( uParam0 );
    if (g_U34175._fU4)
    {
        sub_479( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U34048[uVar4]._fU0 = 1;
        g_U34048[uVar4]._fU4 = 1;
        g_U34048[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        sub_479( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5707();
    sub_6478( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_6622( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5707()
{
    sub_5716();
    sub_5819( ref g_U9893._fU68 );
    sub_5868();
    return;
}

void sub_5716()
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

void sub_5819(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5868()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5906( 1, g_U569[I] )) == 0)
        {
            sub_6157( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6335())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5906(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6157(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6242( g_U569 - 1 );
    return;
}

void sub_6242(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6335()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5906( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6478(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_6512();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_6512()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_6622(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 38:
        StrCopy( ref cVar4, "BADMAN", 16 );
        iVar8 = 1;
        break;
        case 39:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 3;
        break;
        case 40:
        StrCopy( ref cVar4, "CHERISE", 16 );
        iVar8 = 1;
        break;
        case 41:
        StrCopy( ref cVar4, "EDDIE", 16 );
        iVar8 = 2;
        break;
        case 42:
        StrCopy( ref cVar4, "GRACIE", 16 );
        iVar8 = 1;
        break;
        case 43:
        StrCopy( ref cVar4, "HOSSAN", 16 );
        iVar8 = 1;
        break;
        case 44:
        StrCopy( ref cVar4, "ILYENA", 16 );
        iVar8 = 1;
        break;
        case 45:
        StrCopy( ref cVar4, "IVAN", 16 );
        iVar8 = 1;
        break;
        case 46:
        StrCopy( ref cVar4, "JEFF", 16 );
        iVar8 = 3;
        break;
        case 47:
        StrCopy( ref cVar4, "MARNIE", 16 );
        iVar8 = 2;
        break;
        case 48:
        StrCopy( ref cVar4, "CLARENCE", 16 );
        iVar8 = 1;
        break;
        case 49:
        StrCopy( ref cVar4, "MEL", 16 );
        iVar8 = 1;
        break;
        case 50:
        StrCopy( ref cVar4, "PATHOS", 16 );
        iVar8 = 2;
        break;
        case 51:
        StrCopy( ref cVar4, "SARA", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_7468( cVar4 );
    return;
}

void sub_7468(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

int sub_7667()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_2162()) || (sub_3182() > 30))
        {
            HINT_CAM( l_U126._fU0, l_U126._fU4, l_U126._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_7783()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2171(), ref l_U122 );
        if (NOT (l_U122 == l_U121))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U121 );
            l_U121 = l_U122;
            SET_CAR_AS_MISSION_CAR( l_U121 );
        }
    }
    switch (l_U107)
    {
        case 0:
        CLEAR_HELP();
        REMOVE_BLIP( l_U123 );
        DELETE_CHAR( ref l_U119 );
        GET_CHAR_COORDINATES( sub_2171(), ref l_U129._fU0, ref l_U129._fU4, ref l_U129._fU8 );
        GET_CHAR_HEADING( sub_2171(), ref l_U142 );
        SWITCH_PED_PATHS_OFF( l_U126._fU0 - 5.00000000, l_U126._fU4 - 5.00000000, l_U126._fU8 - 5.00000000, l_U126._fU0 + 5.00000000, l_U126._fU4 + 5.00000000, l_U126._fU8 + 5.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        CLEAR_AREA( l_U126._fU0, l_U126._fU4, l_U126._fU8, 100.00000000, 1 );
        LOAD_COMBAT_DECISION_MAKER( 7, ref l_U162 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rpily1" );
        REQUEST_MODEL( -200234085 );
        while (NOT (HAS_MODEL_LOADED( -200234085 )))
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "plead" );
        while (NOT (HAVE_ANIMS_LOADED( "plead" )))
        {
            WAIT( 0 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -284229525 );
        SET_CHAR_COORDINATES( sub_2171(), 962.46960000, -679.42140000, 15.40560000 );
        SET_CHAR_HEADING( sub_2171(), 26.42840000 );
        SET_CAM_BEHIND_PED( sub_2171() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        LOAD_ADDITIONAL_TEXT( "WI_ILYE", 0 );
        sub_8488( "PIIAUD" );
        sub_8607( 0, sub_2171(), "NIKO", 0 );
        LOAD_SCENE( l_U126._fU0, l_U126._fU4, l_U126._fU8 );
        if (IS_VEH_DRIVEABLE( l_U121 ))
        {
            SET_CAR_COORDINATES( l_U121, 958.91040000, -650.89130000, 13.13990000 );
            SET_CAR_FORWARD_SPEED( l_U121, 0.00001000 );
        }
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        l_U107 = 2;
        break;
        case 2:
        if (NOT (DOES_BLIP_EXIST( l_U125 )))
        {
            ADD_BLIP_FOR_COORD( 1221.78800000, 100.22850000, 37.65600000, ref l_U125 );
            SET_BLIP_AS_FRIENDLY( l_U125, 0 );
            SET_ROUTE( l_U125, 1 );
        }
        CLEAR_NAMED_CUTSCENE( "rpily1" );
        CLEAR_HELP();
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U126._fU0 - 5.00000000, l_U126._fU4 - 5.00000000, l_U126._fU8 - 5.00000000, l_U126._fU0 + 5.00000000, l_U126._fU4 + 5.00000000, l_U126._fU8 + 5.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_960(), 1, 1, 1 );
        CLEAR_PRINTS();
        PRINT( "ILY1_PMT1", 7500, 1 );
        l_U108 = 0;
        l_U107 = 3;
        break;
        case 3:
        if (LOCATE_CHAR_ANY_MEANS_2D( sub_2171(), 1221.78800000, 100.22850000, 70.00000000, 70.00000000, 0 ))
        {
            if (NOT l_U115)
            {
                CREATE_CHAR( 26, -200234085, 1221.78800000, 100.22850000, 36.65600000, ref l_U120, 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U120, 0 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U120, 20.00000000 );
                SET_CHAR_MAX_TIME_UNDERWATER( l_U120, 10.00000000 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U120, 23 );
                sub_8607( 1, l_U120, "BOYFRIEND", 0 );
                if (NOT (IS_CHAR_DEAD( l_U120 )))
                {
                    SET_CHAR_HEALTH( l_U120, 200 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 1 );
                    SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U120, 1 );
                    SET_CHAR_HEADING( l_U120, 175.91680000 );
                }
                SET_CHAR_AS_ENEMY( l_U120, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -200234085 );
                l_U115 = 1;
                SET_WANTED_MULTIPLIER( 0.20000000 );
                if (NOT (IS_CHAR_INJURED( l_U120 )))
                {
                    TASK_PLAY_ANIM( l_U120, "stand_smoke", "missilyena", 8.00000000, 1, 0, 0, 0, -1 );
                }
                l_U107 = 4;
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            GET_CHAR_COORDINATES( l_U120, ref l_U135._fU0, ref l_U135._fU4, ref l_U135._fU8 );
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U120, sub_2171(), 0 ))
            {
                PRINT_NOW( "ILY1_PMT81", 7500, 1 );
                if (DOES_BLIP_EXIST( l_U125 ))
                {
                    REMOVE_BLIP( l_U125 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 0 );
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U120, 0 );
                l_U107 = 16;
            }
            if (LOCATE_CHAR_ANY_MEANS_2D( sub_2171(), l_U135._fU0, l_U135._fU4, 20.00000000, 20.00000000, 0 ))
            {
                if (DOES_BLIP_EXIST( l_U125 ))
                {
                    REMOVE_BLIP( l_U125 );
                    ADD_BLIP_FOR_CHAR( l_U120, ref l_U125 );
                    SETTIMERA( 0 );
                    l_U157 = 0;
                    l_U107 = 5;
                }
            }
        }
        else
        {
            PRINT_NOW( "ILY1_PMT71", 7500, 1 );
            sub_9808();
        }
        break;
        case 5:
        if (IS_CHAR_DEAD( l_U120 ))
        {
            PRINT_NOW( "ILY1_PMT71", 7500, 1 );
            sub_9808();
        }
        else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U120, sub_2171(), 0 ))
        {
            PRINT_NOW( "ILY1_PMT81", 7500, 1 );
            if (DOES_BLIP_EXIST( l_U125 ))
            {
                REMOVE_BLIP( l_U125 );
            }
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 0 );
            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U120, 0 );
            l_U107 = 16;
        }
        if ((NOT sub_268()) AND ((sub_4397( 1, 1 )) AND ((sub_10467( ref l_U120 )) < 4.50000000)))
        {
            if (IS_CHAR_ON_FOOT( sub_2171() ))
            {
                if (NOT (IS_CHAR_INJURED( sub_2171() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U120 )))
                    {
                        SET_CHAR_INVINCIBLE( l_U120, 0 );
                        CLEAR_CHAR_TASKS( l_U120 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U120, 1 );
                        CLEAR_CHAR_TASKS( sub_2171() );
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U120, sub_2171() );
                        SET_WANTED_MULTIPLIER( 0.10000000 );
                    }
                }
                SET_CHAR_INVINCIBLE( l_U120, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 0 );
                l_U107 = 6;
            }
        }
        if (l_U209)
        {
            PRINTSTRING( "badguy = invincible" );
            PRINTNL();
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                GET_CHAR_COORDINATES( l_U120, ref l_U201._fU0, ref l_U201._fU4, ref l_U201._fU8 );
                if ((IS_BULLET_IN_AREA( l_U201._fU0, l_U201._fU4, l_U201._fU8, 2.00000000, 1 )) || (((sub_10467( ref l_U120 )) < 5.00000000) AND (sub_10894())))
                {
                    SET_CHAR_INVINCIBLE( l_U120, 0 );
                    l_U209 = 0;
                }
            }
        }
        else
        {
            PRINTSTRING( "badguy is NOT invincible" );
            PRINTNL();
            if ((NOT sub_10894()) AND ((sub_10467( ref l_U120 )) > 5.00000000))
            {
                if (NOT (IS_CHAR_INJURED( l_U120 )))
                {
                    SET_CHAR_INVINCIBLE( l_U120, 1 );
                    l_U209 = 1;
                }
            }
        }
        break;
        case 6:
        switch (l_U157)
        {
            case 0:
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                sub_11265( "ILY_BOYF", ref l_U170, 6, 1 );
                l_U157++;
            }
            break;
            case 1:
            if (IS_CHAR_DEAD( l_U120 ))
            {
                sub_12265( ref l_U170, 0 );
                g_U64744 = 1;
                REMOVE_BLIP( l_U125 );
                l_U107 = 15;
            }
            else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U120, sub_2171(), 0 ))
            {
                if (NOT (IS_CHAR_INJURED( sub_2171() )))
                {
                    GET_CURRENT_CHAR_WEAPON( sub_2171(), ref l_U207 );
                }
                if ((l_U207 == 56) || (l_U207 == 0))
                {
                    if (NOT (IS_CHAR_DEAD( l_U120 )))
                    {
                        sub_12265( ref l_U170, 0 );
                        l_U107 = 8;
                    }
                }
                else if (NOT (IS_CHAR_DEAD( l_U120 )))
                {
                    CLEAR_CHAR_TASKS( l_U120 );
                    TASK_SMART_FLEE_CHAR( l_U120, sub_2171(), 6000, -1 );
                    l_U157++;
                }
            }
            else if (sub_12614( l_U170 ))
            {
                if ((sub_10467( ref l_U120 )) > 20.00000000)
                {
                    sub_12805( ref l_U170 );
                }
            }
            else if (sub_13246( l_U170 ))
            {
                if ((sub_10467( ref l_U120 )) < 20.00000000)
                {
                    sub_13309( "ILY_BOYF", ref l_U170, 6, 1 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                if ((sub_10467( ref l_U120 )) > 75.00000000)
                {
                    CLEAR_CHAR_TASKS( l_U120 );
                    TASK_SMART_FLEE_CHAR( l_U120, sub_2171(), 6000, -1 );
                    l_U107 = 14;
                }
                else if ((sub_13509( l_U170 )) == 5)
                {
                    CLEAR_CHAR_TASKS( l_U120 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U120, l_U138._fU0, l_U138._fU4, l_U138._fU8, 4, -2, 5.00000000 );
                    l_U157++;
                }
                else
                {
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U120, sub_2171() );
                }
            };;;
            break;
            case 2:
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                SET_ALL_RANDOM_PEDS_FLEE( sub_960(), 1 );
                if (NOT (IS_CHAR_INJURED( l_U120 )))
                {
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U120, 1 );
                }
                sub_12265( ref l_U170, 1 );
                PRINT_NOW( "ILY1_PMT6", 7500, 1 );
                l_U107 = 7;
            }
            break;
        }
        break;
        case 7:
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U120, sub_2171(), 0 ))
            {
                if (NOT (IS_CHAR_INJURED( sub_2171() )))
                {
                    GET_CURRENT_CHAR_WEAPON( sub_2171(), ref l_U207 );
                    if ((l_U207 == 56) || (l_U207 == 0))
                    {
                        l_U107 = 8;
                    }
                }
            }
            switch (l_U102)
            {
                case 0:
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U120, l_U138._fU0, l_U138._fU4, l_U138._fU8 + 5.00000000, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( l_U120 );
                    TASK_SMART_FLEE_CHAR( l_U120, sub_2171(), 6000, -1 );
                    l_U102 = 1;
                }
                break;
                case 1: break;
            }
            if ((NOT (IS_CHAR_ON_SCREEN( l_U120 ))) AND ((sub_10467( ref l_U120 )) > 100))
            {
                l_U107 = 14;
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            SET_PED_DIES_WHEN_INJURED( l_U120, 1 );
        }
        sub_12265( ref l_U164, 0 );
        CLEAR_PRINTS();
        g_U64744 = 1;
        REMOVE_BLIP( l_U125 );
        l_U107 = 15;;
        break;
        case 8:
        l_U147 = 0;
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            if (NOT l_U113)
            {
                CLEAR_CHAR_TASKS( l_U120 );
                SET_RELATIONSHIP( 5, 23, 0 );
                SET_CHAR_RELATIONSHIP( l_U120, 5, 0 );
                l_U113 = 1;
            }
            if ((NOT (IS_CHAR_ON_SCREEN( l_U120 ))) AND ((sub_10467( ref l_U120 )) > 100))
            {
                l_U107 = 14;
            }
            else if ((sub_10467( ref l_U120 )) < 20.00000000)
            {
                if (l_U206)
                {
                    sub_11265( "ILY_FIGHT", ref l_U164, 6, 1 );
                    SETTIMERA( 0 );
                    l_U206 = 0;
                }
                else if (TIMERA() > 4500)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( l_U160, l_U159, ref l_U161 );
                    if (l_U161 > 985)
                    {
                        l_U206 = 1;
                    }
                }
            }
        }
        else if (IS_CHAR_DEAD( l_U120 ))
        {
            sub_12265( ref l_U164, 0 );
            CLEAR_PRINTS();
            g_U64744 = 1;
            REMOVE_BLIP( l_U125 );
            l_U107 = 15;
        }
        else
        {
            GET_CHAR_HEALTH( l_U120, ref l_U158 );
            l_U107 = 9;
        }
        break;
        case 9:
        if (l_U158 > 40)
        {
            if (NOT (IS_CHAR_DEAD( l_U120 )))
            {
                if (NOT (IS_CHAR_SWIMMING( l_U120 )))
                {
                    SET_PLAYER_CONTROL( sub_960(), 0 );
                    SET_CHAR_HEALTH( l_U120, 101 );
                    if (NOT (IS_CHAR_DEAD( sub_2171() )))
                    {
                        CLEAR_CHAR_TASKS( sub_2171() );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U120 )))
                    {
                        REMOVE_BLIP( l_U125 );
                        l_U117 = 0;
                        DO_SCREEN_FADE_OUT( 250 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        if (NOT (IS_CHAR_DEAD( l_U120 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U120 );
                            SET_CHAR_HEALTH( l_U120, 101 );
                            SET_CHAR_INVINCIBLE( l_U120, 1 );
                        }
                        sub_12265( ref l_U164, 0 );
                        CLEAR_PRINTS();
                        l_U107 = 10;
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            SET_CHAR_HEALTH( l_U120, 5 );
        }
        sub_12265( ref l_U164, 0 );
        CLEAR_PRINTS();
        g_U64744 = 1;
        REMOVE_BLIP( l_U125 );
        l_U107 = 15;;
        break;
        case 10:
        sub_12265( ref l_U164, 0 );
        sub_12265( ref l_U170, 0 );
        CLEAR_PRINTS();
        if (DOES_VEHICLE_EXIST( l_U121 ))
        {
            if (IS_VEH_DRIVEABLE( l_U121 ))
            {
                SET_CAR_COORDINATES( l_U121, 1233.80700000, 93.53800000, 37.01670000 );
                SET_CAR_HEADING( l_U121, 90.71740000 );
            }
        }
        SET_WIDESCREEN_BORDERS( 1 );
        if (NOT l_U208)
        {
            if (NOT (IS_CHAR_DEAD( l_U120 )))
            {
                SET_CHAR_HEALTH( l_U120, 101 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U120 );
                GET_CHAR_COORDINATES( l_U120, ref l_U201._fU0, ref l_U201._fU4, ref l_U201._fU8 );
                GET_CLOSEST_CAR_NODE( l_U201._fU0, l_U201._fU4, l_U201._fU8, ref l_U148._fU0, ref l_U148._fU4, ref l_U148._fU8 );
                PRINTVECTOR( l_U148 );
                PRINTNL();
                DISABLE_CAR_GENERATORS( 1, 0 );
                GET_GROUND_Z_FOR_3D_COORD( l_U148._fU0, l_U148._fU4, l_U148._fU8, ref l_U204 );
                SET_CHAR_COORDINATES( l_U120, l_U148._fU0, l_U148._fU4, l_U148._fU8 );
                CLEAR_AREA( l_U148._fU0, l_U148._fU4, l_U148._fU8, 20.00000000, 1 );
                CLEAR_AREA_OF_CARS( l_U148._fU0, l_U148._fU4, l_U148._fU8, 40.00000000 );
                if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_2171(), l_U148._fU0 + 2, l_U148._fU4 + 2, l_U148._fU8 );
                }
                SWITCH_ROADS_OFF( l_U148._fU0 - 20.00000000, l_U148._fU4 - 20.00000000, l_U148._fU8 - 25.00000000, l_U148._fU0 + 20.00000000, l_U148._fU4 + 20.00000000, l_U148._fU8 + 45.00000000 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U120, 0.00000000, 2.00000000, 0.45000000, ref l_U198._fU0, ref l_U198._fU4, ref l_U198._fU8 );
                TASK_TURN_CHAR_TO_FACE_COORD( l_U120, l_U198._fU0, l_U198._fU4, l_U198._fU8 );
                SET_CHAR_READY_TO_BE_EXECUTED( l_U120, 1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U120, "plead", "plead", 1.00000000, 1, 0, 0, 0, -2 );
            }
            l_U208 = 1;
        }
        else if (NOT (IS_CHAR_DEAD( sub_2171() )))
        {
            GET_GROUND_Z_FOR_3D_COORD( l_U198._fU0, l_U198._fU4, l_U198._fU8, ref l_U205 );
            SET_CHAR_COORDINATES( sub_2171(), l_U198._fU0, l_U198._fU4, l_U205 );
            if ((NOT (IS_CHAR_INJURED( sub_2171() ))) AND (NOT (IS_CHAR_INJURED( l_U120 ))))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2171(), l_U120 );
            }
        }
        l_U107 = 11;;
        break;
        case 11:
        if (NOT l_U116)
        {
            if (NOT (IS_CHAR_DEAD( l_U120 )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U120, 0.50000000, 2.50000000, 1.20000000, ref l_U144._fU0, ref l_U144._fU4, ref l_U144._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U120, 0.00000000, 0.50000000, 0.00000000, ref l_U195._fU0, ref l_U195._fU4, ref l_U195._fU8 );
                SET_CHAR_AS_ENEMY( l_U120, 0 );
                CLEAR_CHAR_TASKS( l_U120 );
                SET_CHAR_RELATIONSHIP( l_U120, 0, 0 );
                BEGIN_CAM_COMMANDS( ref l_U191 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                CREATE_CAM( 14, ref l_U189 );
                SET_CAM_POS( l_U189, l_U144._fU0, l_U144._fU4, l_U144._fU8 );
                SET_CAM_FOV( l_U189, 60.50000000 );
                POINT_CAM_AT_COORD( l_U189, l_U148._fU0, l_U148._fU4, l_U148._fU8 + 0.50000000 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U120, 1.00000000, -0.60000000, -0.60000000, ref l_U192._fU0, ref l_U192._fU4, ref l_U192._fU8 );
                CREATE_CAM( 14, ref l_U190 );
                SET_CAM_POS( l_U190, l_U192._fU0, l_U192._fU4, l_U192._fU8 );
                SET_CAM_FOV( l_U190, 49.60000000 );
                POINT_CAM_AT_COORD( l_U190, l_U195._fU0, l_U195._fU4, l_U195._fU8 );
                SET_CAM_PROPAGATE( l_U190, 1 );
                SET_CAM_ACTIVE( l_U190, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (DOES_VEHICLE_EXIST( l_U121 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U121 ))
                    {
                        SET_CAR_COORDINATES( l_U121, 1233.80700000, 93.53800000, 37.01670000 );
                        SET_CAR_HEADING( l_U121, 90.71740000 );
                    }
                }
                l_U116 = 1;
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U120, "plead", "plead" ))
            {
                WAIT( 250 );
                DO_SCREEN_FADE_IN( 250 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                l_U156 = 0;
                l_U107 = 12;
            }
        }
        break;
        case 12:
        if (l_U117 == 0)
        {
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U117 = 1;
        }
        if ((TIMERB() > 20000) || ((sub_16374()) AND (TIMERA() >= 2000)))
        {
            if (NOT (IS_CHAR_INJURED( sub_2171() )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2171() );
            }
            if (DOES_CHAR_EXIST( l_U120 ))
            {
                DELETE_CHAR( ref l_U120 );
            }
            if (NOT l_U147)
            {
                SET_GAME_CAM_HEADING( 0.00000000 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U191 );
                l_U147 = 1;
            }
            SET_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_960(), 1 );
            l_U107 = 13;
        }
        switch (l_U156)
        {
            case 0:
            sub_11265( "ILY_HURT", ref l_U176, 6, 1 );
            WAIT( 250 );
            if (NOT (IS_CHAR_INJURED( sub_2171() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U120 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2171(), l_U120, -2, 0 );
                }
            }
            l_U156++;
            break;
            case 1:
            if (NOT (sub_12614( l_U176 )))
            {
                if (NOT l_U118)
                {
                    SET_CAM_PROPAGATE( l_U189, 1 );
                    SET_CAM_ACTIVE( l_U189, 1 );
                    SET_CAM_PROPAGATE( l_U190, 0 );
                    SET_CAM_ACTIVE( l_U190, 0 );
                    sub_11265( "ILY_SHOUT", ref l_U170, 6, 1 );
                    l_U118 = 1;
                }
                else if (sub_16891( ref l_U170 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U120 )))
                    {
                        CLEAR_CHAR_TASKS( l_U120 );
                        SET_CHAR_INVINCIBLE( l_U120, 1 );
                        TASK_FLEE_CHAR_ANY_MEANS( l_U120, sub_2171(), 6000.00000000, -1, 0, 0, 0, 50 );
                    }
                    l_U156++;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U120 )))
                {
                    DELETE_CHAR( ref l_U120 );
                    l_U156++;
                }
            }
            break;
            case 3:
            if (NOT l_U147)
            {
                SET_GAME_CAM_HEADING( 0.00000000 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U191 );
                if (NOT (IS_CHAR_INJURED( sub_2171() )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U120 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2171(), l_U120, 0, 0 );
                        CLEAR_CHAR_TASKS( sub_2171() );
                    }
                }
                l_U147 = 1;
            }
            CLEAR_SEQUENCE_TASK( l_U163 );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_960(), 1 );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            l_U107 = 13;
            break;
        }
        break;
        case 13:
        DISABLE_CAR_GENERATORS( 0, 0 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U148._fU0 - 20.00000000, l_U148._fU4 - 20.00000000, l_U204 - 25.00000000, l_U148._fU0 + 20.00000000, l_U148._fU4 + 20.00000000, l_U204 + 45.00000000 );
        g_U64744 = 0;
        l_U107 = 15;
        break;
        case 14:
        if (sub_12614( l_U170 ))
        {
            sub_12265( ref l_U170, 0 );
        }
        if (DOES_CHAR_EXIST( l_U120 ))
        {
            PRINT_NOW( "ILY1_PMT21", 7500, 1 );
            DELETE_CHAR( ref l_U120 );
        }
        g_U64744 = 0;
        g_U64745 = 1;
        sub_17479();
        break;
        case 15:
        sub_17479();
        break;
        case 16:
        sub_9808();
        break;
    }
    return;
}

void sub_8488(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_8505();
    return;
}

void sub_8505()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_8607(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_8687( "\n PED NUMBER ", uParam0 );
    sub_8727( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_8687(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8727(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9808()
{
    if (NOT l_U184)
    {
        SET_ALL_RANDOM_PEDS_FLEE( sub_960(), 0 );
        g_U64751++;
        if (g_U64751 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_960(), 150 );
            SAY_AMBIENT_SPEECH( sub_2171(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        }
        else
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_960(), 150 );
        }
        l_U184 = 1;
    }
    if (DOES_CHAR_EXIST( l_U120 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U120 )))
            {
                if (IS_CHAR_INJURED( l_U120 ))
                {
                    g_U64744 = 1;
                    REQUEST_SCRIPT( "Ilyena_calls" );
                    while (NOT (HAS_SCRIPT_LOADED( "Ilyena_Calls" )))
                    {
                        WAIT( 0 );
                    }
                    START_NEW_SCRIPT( "Ilyena_Calls", 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "Ilyena_Calls" );
                    sub_1034();
                }
                else
                {
                    REMOVE_CHAR_ELEGANTLY( ref l_U120 );
                    sub_1034();
                }
            }
        }
        else
        {
            g_U64744 = 1;
            REQUEST_SCRIPT( "Ilyena_calls" );
            while (NOT (HAS_SCRIPT_LOADED( "Ilyena_Calls" )))
            {
                WAIT( 0 );
            }
            START_NEW_SCRIPT( "Ilyena_Calls", 1024 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "Ilyena_Calls" );
            sub_1034();
        }
    }
    return;
}

void sub_10467(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_2171(), ref l_U129._fU0, ref l_U129._fU4, ref l_U129._fU8 );
        GET_CHAR_COORDINATES( (uParam0^), ref l_U151._fU0, ref l_U151._fU4, ref l_U151._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( l_U129._fU0, l_U129._fU4, l_U151._fU0, l_U151._fU4, ref l_U141 );
        return l_U141;
    }
    return l_U141;
}

int sub_10894()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2171() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2171(), ref l_U122 );
        if (NOT (l_U122 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U122 ))
            {
                GET_CAR_SPEED( l_U122, ref l_U143 );
                if (l_U143 > 10)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_11265(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11286( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_11286(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_11340( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_11340(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11362( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_12050( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_11362(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_11439( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_11439( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_11439( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_11439(unknown uParam0)
{
    return;
}

void sub_12050(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

void sub_12265(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

int sub_12614(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_11439( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_11439( "\n speech is not playing" );
    }
    return 0;
}

int sub_12805(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_11439( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_11439( "\n CONVERSATION PAUSED AT LINE " );
            sub_12961( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_11439( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_11439( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_11439( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_12961(unknown uParam0)
{
    return;
}

void sub_13246(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_13309(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13330( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_13330(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_11340( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_13509(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_12614( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_16374()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_16891(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            return 0;
        }
    }
    return 1;
}

void sub_17479()
{
    CLEAR_WANTED_LEVEL( sub_960() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_960(), 0 );
    sub_17528( l_U182 );
    REQUEST_SCRIPT( "Ilyena_calls" );
    while (NOT (HAS_SCRIPT_LOADED( "Ilyena_Calls" )))
    {
        WAIT( 0 );
    }
    START_NEW_SCRIPT( "Ilyena_Calls", 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "Ilyena_Calls" );
    sub_1034();
    return;
}

void sub_17528(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_359( uParam0 );
    sub_17548( uParam0 );
    sub_21522( uParam0 );
    return;
}

void sub_17548(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_17678();
        break;
        case 39:
        sub_18640();
        break;
        case 40:
        sub_18899();
        break;
        case 48:
        sub_19082();
        break;
        case 41:
        sub_19267();
        break;
        case 42:
        sub_19463();
        break;
        case 43:
        sub_19644();
        break;
        case 44:
        sub_19827();
        break;
        case 45:
        sub_20008();
        break;
        case 46:
        sub_20187();
        break;
        case 47:
        sub_20498();
        break;
        case 49:
        sub_20698();
        break;
        case 50:
        sub_20875();
        break;
        case 51:
        sub_21073();
        break;
        default: sub_479( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_21348();
    sub_21421();
    return;
}

void sub_17678()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 500 );
        break;
        default: sub_479( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_17718(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_17771( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_17903( iParam0 + 0 );
    }
    return;
}

void sub_17771(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_17903( iParam0 + 0 );
    }
    return;
}

void sub_17903(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_17934( iParam0->_fU4 )))
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

int sub_17934(unknown uParam0)
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

void sub_18364(unknown uParam0)
{
    sub_18375( uParam0 );
    return;
}

void sub_18375(unknown uParam0)
{
    ADD_SCORE( sub_960(), uParam0 );
    sub_18400( uParam0 );
    return;
}

void sub_18400(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_479( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_18640()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_359( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 100 );
        sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_18364( 200 );
        sub_17718( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_18364( 500 );
        break;
        default: sub_479( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_18899()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        default: sub_479( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_19082()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        default: sub_479( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_19267()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        case 2:
        sub_18364( 0 );
        break;
        default: sub_479( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_19463()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        default: sub_479( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_19644()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 500 );
        break;
        default: sub_479( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_19827()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        default: sub_479( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_20008()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 1000 );
        break;
        default: sub_479( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_20187()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_359( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 1000 );
        sub_20274( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_18364( 5000 );
        sub_17718( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_479( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_20274(int iParam0)
{
    sub_20287( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_20287(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_20498()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        case 2:
        sub_18364( 0 );
        break;
        default: sub_479( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_20698()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 500 );
        break;
        default: sub_479( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_20875()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        case 2:
        sub_18364( 0 );
        break;
        default: sub_479( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_21073()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_359( iVar2 );
    sub_17718( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_18364( 0 );
        break;
        case 2:
        sub_18364( 1000 );
        break;
        default: sub_479( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_21348()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

void sub_21421()
{
    sub_21430();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_21430()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_21522(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_359( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_5819( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_21603( uParam0 );
    return;
}

void sub_21603(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 10;
    switch (uParam0)
    {
        case 38:
        iVar3 = 0;
        break;
        case 39:
        iVar3 = 1;
        break;
        case 41:
        iVar3 = 2;
        break;
        case 42:
        iVar3 = 3;
        break;
        case 43:
        iVar3 = 4;
        break;
        case 44:
        iVar3 = 5;
        break;
        case 47:
        iVar3 = 6;
        break;
        case 49:
        iVar3 = 7;
        break;
        case 50:
        iVar3 = 8;
        break;
        case 51:
        iVar3 = 9;
        break;
        case 40:
        case 45:
        case 48:
        case 46: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U64848[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64848[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_21882( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_21882(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_22064( 0 );
    return;
}

void sub_22064(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_22319();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_22319()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

