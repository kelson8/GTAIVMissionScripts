void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U134 = 10.00000000;
    l_U135 = 15.00000000;
    l_U150 = 0;
    l_U151 = 1;
    l_U152 = 3;
    l_U154 = 3.00000000;
    l_U155 = 0;
    l_U156 = 0;
    l_U157 = 0;
    l_U158 = 0;
    l_U232 = -1;
    l_U233 = 2;
    l_U234 = 0;
    l_U238 = 15;
    l_U239 = sub_162( l_U238 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_634();
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U235 = {l_U329._fU4[0]};
    while (true)
    {
        WAIT( 0 );
        switch (l_U157)
        {
            case 0:
            if (sub_1420())
            {
                if (NOT l_U234)
                {
                    if (g_U12379)
                    {
                        sub_634();
                    }
                }
                switch (l_U155)
                {
                    case 0:
                    if (sub_2332())
                    {
                        l_U155 = 1;
                    }
                    break;
                    case 1:
                    if (sub_2907())
                    {
                        sub_3187();
                    }
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2993() )))
                    {
                        sub_3227();
                    }
                    break;
                }
            }
            else
            {
                sub_634();
            }
            break;
            case 1:
            switch (l_U158)
            {
                case 2:
                if (sub_7163())
                {
                    sub_7344();
                }
                break;
                case 3:
                sub_7968();
                sub_11382();
                sub_11590();
                sub_11827();
                sub_12581();
                sub_13335();
                sub_14415();
                sub_15169();
                sub_16578();
                sub_16713();
                break;
                case 4:
                sub_17133();
                break;
                case 5:
                sub_3187();
                break;
            }
            break;
        }
        sub_19964();
    }
    return;
}

int sub_162(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_577( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_577(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_634()
{
    int I;

    if (sub_653( l_U238, l_U233 ))
    {
        sub_743( l_U238, l_U233 );
    }
    for ( I = 0; I <= 15; I++ )
    {
        if (DOES_BLIP_EXIST( l_U194[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U194[I] );
        }
        if (DOES_CHAR_EXIST( l_U176[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U176[I] );
        }
    }
    if (DOES_CHAR_EXIST( l_U175 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U175 )))
        {
            SET_CHAR_HEALTH( l_U175, 2 );
        }
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_653(int iParam0, int iParam1)
{
    if (NOT g_U30318._fU4)
    {
        return 0;
    }
    if (NOT (g_U30318._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U30318._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_743(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_653( uParam0, uParam1 )))
    {
        sub_577( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_839();
    if (g_U819)
    {
        sub_921();
    }
    else
    {
        sub_1050();
    }
    g_U12379 = 0;
    return;
}

void sub_839()
{
    if (g_U0)
    {
        g_U30318._fU0 = 0;
    }
    else
    {
        g_U30318._fU0 = 1;
    }
    g_U30318._fU4 = 0;
    g_U30318._fU8 = 34;
    g_U30318._fU12 = 0;
    return;
}

void sub_921()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_967();
    return;
}

void sub_967()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1050()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_1096();
    return;
}

void sub_1096()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

int sub_1420()
{
    if (NOT l_U310)
    {
        sub_1440();
        l_U310 = 1;
    }
    if (l_U310)
    {
        if (l_U309)
        {
            if (IS_PLAYER_PLAYING( sub_2186() ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2186(), 0 )))
                {
                    if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_1440()
{
    if (sub_1459( l_U238, l_U233 ))
    {
        l_U309 = 1;
    }
    else
    {
        l_U309 = 0;
    }
    return;
}

void sub_1459(unknown uParam0, unknown uParam1)
{
    if (sub_1468())
    {
        return 0;
    }
    return sub_1515( uParam0, uParam1 );
}

int sub_1468()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_1515(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_1526( uParam0 );
    if (NOT g_U30318._fU0)
    {
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU4)
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 2 ))
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        if (sub_1807( g_U30257[uVar4]._fU8 ))
        {
            g_U30257[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        return 0;
    }
    if (g_U30257[uVar4]._fU28 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_1526(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_1537( uParam0 )))
    {
        sub_577( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_1537(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

int sub_1807(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1976( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1976(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_2186()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2332()
{
    if (sub_2341())
    {
        CREATE_CHAR( 5, 1798610950, l_U235._fU0, l_U235._fU4, l_U235._fU8, ref l_U175, 1 );
        if (DOES_CHAR_EXIST( l_U175 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U175 )))
            {
                SET_CHAR_COORDINATES( l_U175, 457.84150000, -511.05420000, 16.93000000 );
                SET_CHAR_HEADING( l_U175, 90.00000000 );
                ADD_BLIP_FOR_CHAR( l_U175, ref l_U211 );
                CHANGE_BLIP_SPRITE( l_U211, 64 );
                CHANGE_BLIP_DISPLAY( l_U211, 2 );
                SET_BLIP_AS_FRIENDLY( l_U211, 1 );
                sub_2626( l_U238, l_U233 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U175, 1 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U175, 0 );
                SET_CHAR_DROWNS_IN_WATER( l_U175, 0 );
                SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U175, 0 );
                SET_PED_DIES_WHEN_INJURED( l_U175, 1 );
                SET_CHAR_NEVER_TARGETTED( l_U175, 1 );
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U175, 3 );
                SET_CHAR_HEALTH( l_U175, 101 );
                SET_PED_DIES_WHEN_INJURED( l_U175, 1 );
                if (NOT l_U306)
                {
                    TASK_PLAY_ANIM( l_U175, "margot_railing", "missMARGOT2", 4.00000000, 1, 0, 0, 0, -1 );
                    l_U306 = 1;
                }
                return 1;
            }
        }
    }
    return 0;
}

int sub_2341()
{
    REQUEST_MODEL( 1798610950 );
    REQUEST_ANIMS( "missMARGOT2" );
    if ((HAVE_ANIMS_LOADED( "missMARGOT2" )) AND (HAS_MODEL_LOADED( 1798610950 )))
    {
        return 1;
    }
    return 0;
}

void sub_2626(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_1526( uParam0 );
    if (NOT (g_U30257[uVar4]._fU28 == iParam1))
    {
        return;
    }
    g_U30257[uVar4]._fU76 = 1;
    return;
}

int sub_2907()
{
    if (NOT (IS_CHAR_INJURED( l_U175 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U175, 457.84150000, -511.05420000, 16.93000000, 1.60000000, 1.60000000, 1.60000000, 0 )))
        {
            return 1;
        }
        if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U175, sub_2993() ))
        {
            if (IS_CHAR_ARMED( sub_2993(), 7 ))
            {
                if (IS_PLAYER_TARGETTING_CHAR( sub_2186(), l_U175 ))
                {
                    return 1;
                }
                if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2186(), l_U175 ))
                {
                    return 1;
                }
                if (IS_CHAR_SHOOTING( sub_2993() ))
                {
                    return 1;
                }
            }
        }
    }
    else
    {
        return 1;
    }
    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U175, sub_2993(), 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_2993()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3187()
{
    sub_634();
    return;
}

void sub_3227()
{
    int I;
    vector[2] vVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[2] uVar10;

    array(ref vVar3, 2);
    array(ref uVar10, 2);
    switch (l_U156)
    {
        case 0:
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2993(), l_U175, l_U154, l_U154, l_U154, 0 ))
        {
            if (sub_3313( 1, 1 ))
            {
                l_U156 = 1;
            }
        }
        break;
        case 1:
        CLEAR_PRINTS();
        sub_3622( 0 );
        SET_MISSION_FLAG( 1 );
        sub_3780( l_U238, l_U233 );
        if (IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_OUT( 500 );
        }
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        REMOVE_ANIMS( "missMARGOT2" );
        if (NOT (IS_CHAR_INJURED( l_U175 )))
        {
            DELETE_CHAR( ref l_U175 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1798610950 );
        sub_5920();
        g_U2792 = 1;
        sub_6045();
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U175, 0, 0, 0 );
        }
        vVar3[0] = {-321.31040000, 1607.82100000, 20.28150000};
        vVar3[1] = {-315.36610000, 1611.21700000, 20.27950000};
        for ( I = 0; I < 2; I++ )
        {
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( vVar3[I]._fU0, vVar3[I]._fU4, vVar3[I]._fU8, 2.00000000, 0, 0, ref uVar10[I] );
            if (IS_VEH_DRIVEABLE( uVar10[I] ))
            {
                SET_CAR_AS_MISSION_CAR( uVar10[I] );
                SET_CAR_IN_CUTSCENE( uVar10[I], 1 );
            }
        }
        CLEAR_AREA( l_U235._fU0, l_U235._fU4, l_U235._fU8, 100.00000000, 1 );
        START_CUTSCENE_NOW( "RP4_MAR" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "RP4_MAR" );
        SET_RELATIONSHIP( 1, 3, 23 );
        CLEAR_WANTED_LEVEL( sub_2186() );
        l_U157 = 1;
        sub_6792();
        l_U158 = 2;
        GET_GAME_TIMER( ref l_U251 );
        break;
    }
    return;
}

int sub_3313(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2993() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2993(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2993() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2993(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2993()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2993() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2993() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2186() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2186() )))
    {
        return 0;
    }
    return 1;
}

void sub_3622(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 <= 8) AND (g_U8865 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3780(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U12379)
    {
        sub_577( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_1526( uParam0 );
    if (g_U30318._fU4)
    {
        sub_577( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U30257[uVar4]._fU0 = 1;
        g_U30257[uVar4]._fU4 = 1;
        g_U30257[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        sub_577( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U30318._fU4 = 1;
    g_U30318._fU8 = uParam0;
    g_U30318._fU12 = uParam1;
    sub_4127();
    sub_4963( g_U30257[uVar4]._fU32 );
    g_U30257[uVar4]._fU32 = 0;
    sub_5086( uParam0, uParam1 );
    g_U12379 = 1;
    return;
}

void sub_4127()
{
    sub_4136();
    sub_4281( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_4355();
    return;
}

void sub_4136()
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

void sub_4281(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_4355()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_4393( 1, g_U575[I] )) == 0)
        {
            sub_4644( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_4822())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_4393(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_4644(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_4729( g_U575 - 1 );
    return;
}

void sub_4729(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_4822()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_4393( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_4963(int iParam0)
{
    g_U30318._fU16._fU4 += iParam0;
    sub_4993();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_4993()
{
    if (g_U0)
    {
        return;
    }
    if (g_U30318._fU16._fU4 < g_U30318._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_5086(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 13:
        StrCopy( ref cVar4, "ARNAUD", 16 );
        iVar8 = 2;
        break;
        case 14:
        StrCopy( ref cVar4, "DAISY", 16 );
        iVar8 = 1;
        break;
        case 15:
        StrCopy( ref cVar4, "MARGOT", 16 );
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
    sub_5620( cVar4 );
    return;
}

void sub_5620(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10966, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up (see console log)" );
    }
    g_U10966 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10966 );
    return;
}

void sub_5920()
{
    if ((g_U8867 == 4) || (g_U560 == 1))
    {
        if (g_U95._fU60 != -1)
        {
            g_U16014[g_U95._fU60]._fU212._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U95._fU376 = 0;
        g_U95._fU100 = 1;
    }
    return;
}

void sub_6045()
{
    LOAD_ADDITIONAL_TEXT( "GIRL1AU", 6 );
    LOAD_ADDITIONAL_TEXT( "MARG2", 0 );
    l_U215[3] = 1;
    l_U215[6] = 1;
    l_U215[7] = 1;
    l_U215[9] = 1;
    l_U215[11] = 1;
    l_U215[14] = 1;
    l_U215[8] = 1;
    l_U215[10] = 1;
    l_U215[12] = 1;
    l_U215[13] = 1;
    l_U215[15] = 1;
    sub_6197( "GIRL1AU" );
    l_U249 = 0;
    l_U257 = 300000;
    l_U240 = {454.64030000, -506.47180000, 17.68020000};
    l_U235 = {457.54150000, -510.82540000, 16.68020000};
    l_U246 = {95.63110000, 141.62480000, 13.71780000};
    l_U318 = {-27.50060000, 1676.80900000, 0.00000000};
    l_U307 = 270.00000000;
    l_U308 = 104.15040000;
    l_U321 = 27.41870000;
    return;
}

void sub_6197(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_6214();
    return;
}

void sub_6214()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_6792()
{
    SET_CHAR_COORDINATES( sub_2993(), l_U240._fU0, l_U240._fU4, l_U240._fU8 );
    SET_CHAR_HEADING( sub_2993(), l_U307 );
    SET_CAM_BEHIND_PED( sub_2993() );
    if (DOES_BLIP_EXIST( l_U211 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U211 );
    }
    REQUEST_MODEL( 1798610950 );
    while (NOT (HAS_MODEL_LOADED( 1798610950 )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 5, 1798610950, 459.95840000, -509.66320000, 4.81790000, ref l_U175, 1 );
    if (DOES_CHAR_EXIST( l_U175 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U175 )))
        {
            SET_CHAR_COORDINATES( l_U175, 459.95840000, -509.18320000, 4.81790000 );
            SET_CHAR_HEADING( l_U175, 255.18280000 );
            SET_CHAR_HEALTH( l_U175, 0 );
        }
    }
    return;
}

int sub_7163()
{
    REQUEST_MODEL( 1530937394 );
    REQUEST_MODEL( 809067472 );
    REQUEST_MODEL( 677687516 );
    REQUEST_MODEL( -1984134881 );
    REQUEST_MODEL( 1207402441 );
    REQUEST_MODEL( -1356924456 );
    if ((HAS_MODEL_LOADED( -1356924456 )) AND ((HAS_MODEL_LOADED( 1207402441 )) AND ((HAS_MODEL_LOADED( -1984134881 )) AND ((HAS_MODEL_LOADED( 677687516 )) AND ((HAS_MODEL_LOADED( 809067472 )) AND (HAS_MODEL_LOADED( 1530937394 )))))))
    {
        return 1;
    }
    return 0;
}

void sub_7344()
{
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U214 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U214, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U214, 2 );
    CREATE_CHAR( 26, 1530937394, 445.96980000, -539.70120000, 17.68520000, ref l_U176[1], 0 );
    SET_CHAR_HEADING( l_U176[1], 271.44640000 );
    STOP_PED_SPEAKING( l_U176[1], 1 );
    SET_COMBAT_DECISION_MAKER( l_U176[1], l_U214 );
    CREATE_CHAR( 26, 809067472, 447.10650000, -537.42890000, 17.68520000, ref l_U176[2], 0 );
    SET_CHAR_HEADING( l_U176[2], 276.85390000 );
    STOP_PED_SPEAKING( l_U176[2], 1 );
    SET_COMBAT_DECISION_MAKER( l_U176[2], l_U214 );
    CREATE_CHAR( 26, 677687516, 445.05680000, -535.43290000, 17.68520000, ref l_U176[3], 0 );
    SET_CHAR_HEADING( l_U176[3], 274.67230000 );
    STOP_PED_SPEAKING( l_U176[3], 1 );
    SET_COMBAT_DECISION_MAKER( l_U176[3], l_U214 );
    CREATE_CHAR( 26, -1984134881, 443.06620000, -476.21190000, 16.67980000, ref l_U176[4], 0 );
    SET_CHAR_HEADING( l_U176[4], 262.08560000 );
    STOP_PED_SPEAKING( l_U176[4], 1 );
    SET_COMBAT_DECISION_MAKER( l_U176[4], l_U214 );
    CREATE_CHAR( 26, 1207402441, 440.89870000, -474.12510000, 16.67980000, ref l_U176[5], 0 );
    SET_CHAR_HEADING( l_U176[5], 259.05430000 );
    STOP_PED_SPEAKING( l_U176[5], 1 );
    SET_COMBAT_DECISION_MAKER( l_U176[5], l_U214 );
    CREATE_CHAR( 26, -1356924456, 436.53030000, -476.49220000, 16.67960000, ref l_U176[6], 0 );
    SET_CHAR_HEADING( l_U176[6], 269.83310000 );
    STOP_PED_SPEAKING( l_U176[6], 1 );
    SET_COMBAT_DECISION_MAKER( l_U176[6], l_U214 );
    l_U158 = 3;
    return;
}

void sub_7968()
{
    unknown uVar2;

    switch (l_U259)
    {
        case 0:
        if ((NOT (IS_CHAR_INJURED( l_U176[1] ))) AND (DOES_CHAR_EXIST( l_U176[1] )))
        {
            SET_CHAR_HEALTH( l_U176[1], 150 );
            SET_CHAR_MAX_HEALTH( l_U176[1], 150 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[1], 455.69160000, -518.90410000, 16.68020000, 4, -2, 1.00000000 );
        }
        if ((NOT (IS_CHAR_INJURED( l_U176[2] ))) AND (DOES_CHAR_EXIST( l_U176[2] )))
        {
            SET_CHAR_HEALTH( l_U176[2], 150 );
            SET_CHAR_MAX_HEALTH( l_U176[2], 150 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[2], 453.63480000, -516.01120000, 16.68020000, 4, -2, 1.00000000 );
        }
        if ((NOT (IS_CHAR_INJURED( l_U176[3] ))) AND (DOES_CHAR_EXIST( l_U176[3] )))
        {
            SET_CHAR_HEALTH( l_U176[3], 150 );
            SET_CHAR_MAX_HEALTH( l_U176[3], 150 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[3], 451.92070000, -519.35680000, 16.68020000, 4, -2, 1.00000000 );
        }
        if ((NOT (IS_CHAR_INJURED( l_U176[4] ))) AND (DOES_CHAR_EXIST( l_U176[4] )))
        {
            SET_CHAR_HEALTH( l_U176[4], 150 );
            SET_CHAR_MAX_HEALTH( l_U176[4], 150 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[4], 454.91610000, -501.78700000, 16.68020000, 4, -2, 1.00000000 );
        }
        if ((NOT (IS_CHAR_INJURED( l_U176[5] ))) AND (DOES_CHAR_EXIST( l_U176[5] )))
        {
            SET_CHAR_HEALTH( l_U176[5], 150 );
            SET_CHAR_MAX_HEALTH( l_U176[5], 150 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[5], 452.16570000, -504.16710000, 16.68020000, 4, -2, 1.00000000 );
        }
        if ((NOT (IS_CHAR_INJURED( l_U176[6] ))) AND (DOES_CHAR_EXIST( l_U176[6] )))
        {
            SET_CHAR_HEALTH( l_U176[6], 150 );
            SET_CHAR_MAX_HEALTH( l_U176[6], 150 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[6], 452.41800000, -496.42510000, 16.67960000, 4, -2, 1.00000000 );
        }
        SETTIMERA( 0 );
        SET_WANTED_MULTIPLIER( 0.50000000 );
        l_U259++;
        break;
        case 1:
        if ((NOT IS_SCREEN_FADING_IN()) AND (IS_SCREEN_FADED_OUT()))
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_8790( l_U323 )))
            {
                if (NOT l_U281)
                {
                    if (NOT (IS_CHAR_INJURED( l_U176[3] )))
                    {
                        sub_9026( 2, l_U176[3], "ANGRY_MOB_1", 0 );
                        SET_AMBIENT_VOICE_NAME( l_U176[3], "ANGRY_MOB_1" );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U176[3] )))
                    {
                        if (sub_9241( "GIRL1_MOB1S", ref l_U323, 6, 1 ))
                        {
                            l_U281 = 1;
                            l_U259++;
                        }
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_8790( l_U323 )))
            {
                PRINT_NOW( "M2_01", 7500, 0 );
                l_U259++;
            }
        }
        break;
        case 3:
        if (DOES_CHAR_EXIST( l_U176[1] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[1] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U176[1], 27, ref l_U160 );
                if (l_U160 == 7)
                {
                    SET_CHAR_AS_ENEMY( l_U176[1], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U176[1], 23 );
                    SET_CHAR_RELATIONSHIP( l_U176[1], 5, 0 );
                    SET_SENSE_RANGE( l_U176[1], 100.00000000 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U176[2] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[2] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U176[2], 27, ref l_U161 );
                if (l_U161 == 7)
                {
                    SET_CHAR_AS_ENEMY( l_U176[2], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U176[2], 23 );
                    SET_CHAR_RELATIONSHIP( l_U176[2], 5, 0 );
                    SET_SENSE_RANGE( l_U176[2], 100.00000000 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U176[3] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[3] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U176[3], 27, ref l_U162 );
                if (l_U162 == 7)
                {
                    SET_CHAR_AS_ENEMY( l_U176[3], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U176[3], 23 );
                    SET_CHAR_RELATIONSHIP( l_U176[3], 5, 0 );
                    SET_SENSE_RANGE( l_U176[3], 100.00000000 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U176[4] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[4] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U176[4], 27, ref l_U163 );
                if (l_U163 == 7)
                {
                    SET_CHAR_AS_ENEMY( l_U176[4], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U176[4], 23 );
                    SET_CHAR_RELATIONSHIP( l_U176[4], 5, 0 );
                    SET_SENSE_RANGE( l_U176[4], 100.00000000 );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U176[5] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[5] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U176[5], 27, ref l_U164 );
                if (l_U164 == 7)
                {
                    SET_CHAR_AS_ENEMY( l_U176[5], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U176[5], 23 );
                    SET_CHAR_RELATIONSHIP( l_U176[5], 5, 0 );
                    SET_SENSE_RANGE( l_U176[5], 100.00000000 );
                    l_U259++;
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U176[6] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[6] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U176[6], 27, ref l_U165 );
                if (l_U165 == 7)
                {
                    SET_CHAR_AS_ENEMY( l_U176[6], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U176[6], 23 );
                    SET_CHAR_RELATIONSHIP( l_U176[6], 5, 0 );
                    SET_SENSE_RANGE( l_U176[6], 100.00000000 );
                }
            }
        }
        break;
        case 4:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_8790( l_U323 )))
            {
                if ((NOT l_U282) AND (l_U281))
                {
                    if (NOT (sub_8790( l_U323 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U176[4] )))
                        {
                            sub_9026( 3, l_U176[4], "ANGRY_MOB_2", 0 );
                            SET_AMBIENT_VOICE_NAME( l_U176[4], "ANGRY_MOB_2" );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U176[4] )))
                        {
                            if (sub_9241( "GIRL1_MOB2S", ref l_U323, 6, 1 ))
                            {
                                l_U259++;
                                l_U282 = 1;
                            }
                        }
                    }
                }
            }
        }
        break;
        case 5: break;
    }
    return;
}

int sub_8790(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_8902( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8902( "\n speech is not playing" );
    }
    return 0;
}

void sub_8902(unknown uParam0)
{
    return;
}

void sub_9026(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_9106( "\n PED NUMBER ", uParam0 );
    sub_9146( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_9106(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9146(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9241(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9262( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_9262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9316( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9316(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9338( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_10014( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_9338(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8902( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_8902( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_8902( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_10014(int iParam0, int iParam1)
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

void sub_11382()
{
    int I;

    for ( I = 1; I <= 15; I++ )
    {
        if (DOES_CHAR_EXIST( l_U176[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[I] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U194[I] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U176[I], ref l_U194[I] );
                    CHANGE_BLIP_DISPLAY( l_U194[I], 2 );
                    CHANGE_BLIP_SCALE( l_U194[I], 0.50000000 );
                }
            }
            else if (DOES_BLIP_EXIST( l_U194[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U194[I] );
            }
        }
    }
    return;
}

void sub_11590()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2993(), 451.66660000, -474.85060000, 17.68500000, 5.00000000, 5.00000000, 1.50000000, 0 ))
    {
        l_U265 = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2993(), 453.99440000, -535.77390000, 17.68520000, 5.00000000, 5.00000000, 1.50000000, 0 ))
    {
        l_U266 = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2993(), 436.91600000, -511.83440000, 17.84480000, 5.00000000, 5.00000000, 1.50000000, 0 ))
    {
        l_U267 = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2993(), 449.85270000, -512.40050000, 10.88570000, 5.00000000, 5.00000000, 1.50000000, 0 ))
    {
        l_U268 = 1;
    }
    return;
}

void sub_11827()
{
    if (l_U265)
    {
        switch (l_U261)
        {
            case 0:
            CREATE_CHAR( 26, -1356924456, 424.49410000, -482.51350000, 17.68520000, ref l_U176[7], 0 );
            SET_CHAR_HEADING( l_U176[7], 340.00000000 );
            STOP_PED_SPEAKING( l_U176[7], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[7], l_U214 );
            CREATE_CHAR( 26, -1356924456, 426.85790000, -480.46150000, 17.68520000, ref l_U176[8], 0 );
            SET_CHAR_HEADING( l_U176[8], 340.00000000 );
            STOP_PED_SPEAKING( l_U176[8], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[8], l_U214 );
            l_U261++;
            break;
            case 1:
            if ((NOT (IS_CHAR_INJURED( l_U176[7] ))) AND (DOES_CHAR_EXIST( l_U176[7] )))
            {
                SET_CHAR_HEALTH( l_U176[7], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[7], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[7], 442.37960000, -473.50280000, 16.67980000, 4, -2, 1.00000000 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U176[8] ))) AND (DOES_CHAR_EXIST( l_U176[8] )))
            {
                SET_CHAR_HEALTH( l_U176[8], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[8], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[8], 441.91810000, -476.12180000, 16.67970000, 4, -2, 1.00000000 );
            }
            l_U261++;
            break;
            case 2:
            if (DOES_CHAR_EXIST( l_U176[7] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[7] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[7], 27, ref l_U166 );
                    if (l_U166 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[7], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[7], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[7], 5, 0 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U176[8] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[8] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[8], 27, ref l_U167 );
                    if (l_U167 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[8], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[8], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[8], 5, 0 );
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_12581()
{
    if (l_U266)
    {
        switch (l_U262)
        {
            case 0:
            CREATE_CHAR( 26, -1356924456, 423.40230000, -530.48930000, 17.68520000, ref l_U176[9], 0 );
            SET_CHAR_HEADING( l_U176[9], 269.83310000 );
            STOP_PED_SPEAKING( l_U176[9], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[9], l_U214 );
            CREATE_CHAR( 26, -1356924456, 422.98940000, -531.94630000, 17.68520000, ref l_U176[10], 0 );
            SET_CHAR_HEADING( l_U176[10], 269.83310000 );
            STOP_PED_SPEAKING( l_U176[10], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[10], l_U214 );
            l_U262++;
            break;
            case 1:
            if ((NOT (IS_CHAR_INJURED( l_U176[9] ))) AND (DOES_CHAR_EXIST( l_U176[9] )))
            {
                SET_CHAR_HEALTH( l_U176[9], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[9], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[9], 441.98320000, -536.01850000, 16.68020000, 4, -2, 1.00000000 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U176[10] ))) AND (DOES_CHAR_EXIST( l_U176[10] )))
            {
                SET_CHAR_HEALTH( l_U176[10], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[10], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[10], 441.73030000, -538.83280000, 16.68020000, 4, -2, 1.00000000 );
            }
            l_U262++;
            break;
            case 2:
            if (DOES_CHAR_EXIST( l_U176[9] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[9] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[9], 27, ref l_U168 );
                    if (l_U168 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[9], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[9], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[9], 5, 0 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U176[10] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[10] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[10], 27, ref l_U169 );
                    if (l_U169 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[10], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[10], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[10], 5, 0 );
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_13335()
{
    if (l_U267)
    {
        switch (l_U263)
        {
            case 0:
            CREATE_CHAR( 26, -1356924456, 381.18880000, -499.87210000, 17.79610000, ref l_U176[11], 0 );
            SET_CHAR_HEADING( l_U176[11], 269.83310000 );
            STOP_PED_SPEAKING( l_U176[11], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[11], l_U214 );
            CREATE_CHAR( 26, -1356924456, 376.02690000, -501.19120000, 17.68520000, ref l_U176[12], 0 );
            SET_CHAR_HEADING( l_U176[12], 269.83310000 );
            STOP_PED_SPEAKING( l_U176[12], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[12], l_U214 );
            CREATE_CHAR( 26, -1356924456, 375.34370000, -498.71820000, 17.68520000, ref l_U176[13], 0 );
            SET_CHAR_HEADING( l_U176[13], 269.83310000 );
            STOP_PED_SPEAKING( l_U176[13], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[13], l_U214 );
            l_U263++;
            break;
            case 1:
            if ((NOT (IS_CHAR_INJURED( l_U176[11] ))) AND (DOES_CHAR_EXIST( l_U176[11] )))
            {
                SET_CHAR_HEALTH( l_U176[11], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[11], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[11], 409.80640000, -504.98530000, 16.68020000, 4, -2, 1.00000000 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U176[12] ))) AND (DOES_CHAR_EXIST( l_U176[12] )))
            {
                SET_CHAR_HEALTH( l_U176[12], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[12], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[12], 406.57910000, -507.48250000, 16.68020000, 4, -2, 1.00000000 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U176[13] ))) AND (DOES_CHAR_EXIST( l_U176[13] )))
            {
                SET_CHAR_HEALTH( l_U176[13], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[13], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[13], 405.87270000, -505.76170000, 16.68020000, 4, -2, 1.00000000 );
            }
            l_U263++;
            break;
            case 2:
            if (DOES_CHAR_EXIST( l_U176[11] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[11] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[11], 27, ref l_U170 );
                    if (l_U170 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[11], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[11], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[11], 5, 0 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U176[12] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[12] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[12], 27, ref l_U171 );
                    if (l_U171 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[12], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[12], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[12], 5, 0 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U176[13] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[13] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[13], 27, ref l_U172 );
                    if (l_U172 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[13], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[13], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[13], 5, 0 );
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_14415()
{
    if (l_U268)
    {
        switch (l_U264)
        {
            case 0:
            CREATE_CHAR( 26, -1356924456, 446.74060000, -535.15290000, 10.88570000, ref l_U176[14], 0 );
            SET_CHAR_HEADING( l_U176[14], 269.83310000 );
            STOP_PED_SPEAKING( l_U176[14], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[14], l_U214 );
            CREATE_CHAR( 26, -1356924456, 446.74350000, -538.67970000, 10.88570000, ref l_U176[15], 0 );
            SET_CHAR_HEADING( l_U176[15], 269.83310000 );
            STOP_PED_SPEAKING( l_U176[15], 1 );
            SET_COMBAT_DECISION_MAKER( l_U176[15], l_U214 );
            l_U264++;
            break;
            case 1:
            if ((NOT (IS_CHAR_INJURED( l_U176[14] ))) AND (DOES_CHAR_EXIST( l_U176[14] )))
            {
                SET_CHAR_HEALTH( l_U176[14], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[14], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[14], 452.36570000, -528.06200000, 9.88070000, 4, -2, 1.00000000 );
            }
            if ((NOT (IS_CHAR_INJURED( l_U176[15] ))) AND (DOES_CHAR_EXIST( l_U176[15] )))
            {
                SET_CHAR_HEALTH( l_U176[15], 150 );
                SET_CHAR_MAX_HEALTH( l_U176[15], 150 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U176[15], 455.41070000, -529.81760000, 9.88070000, 4, -2, 1.00000000 );
            }
            l_U264++;
            break;
            case 2:
            if (DOES_CHAR_EXIST( l_U176[14] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[14] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[14], 27, ref l_U173 );
                    if (l_U173 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[14], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[14], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[14], 5, 0 );
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U176[15] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U176[15] )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U176[15], 27, ref l_U174 );
                    if (l_U174 == 7)
                    {
                        SET_CHAR_AS_ENEMY( l_U176[15], 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U176[15], 23 );
                        SET_CHAR_RELATIONSHIP( l_U176[15], 5, 0 );
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_15169()
{
    int I;
    float fVar3;
    float fVar4;

    if ((l_U282) AND (l_U281))
    {
        fVar3 = 999.90000000;
        l_U286 = 0;
        l_U287 = 0;
        for ( I = 1; I <= 15; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U176[I] )))
            {
                if (l_U215[I])
                {
                    l_U286 = 1;
                }
                else
                {
                    l_U287 = 1;
                }
            }
        }
        if (NOT l_U286)
        {
            l_U283 = 1;
            l_U284 = 0;
            l_U285 = 1;
        }
        if (NOT l_U287)
        {
            l_U284 = 1;
        }
        if (l_U283 == 0)
        {
            for ( I = 1; I <= 15; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U176[I] )))
                {
                    if (l_U215[I] == 1)
                    {
                        if (NOT (l_U176[I] == l_U193))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2993(), l_U176[I], 20.00000000, 20.00000000, 0 ))
                            {
                                fVar4 = sub_15469( sub_2993(), l_U176[I] );
                                if (fVar4 < fVar3)
                                {
                                    l_U193 = l_U176[I];
                                    fVar3 = fVar4;
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (l_U284 == 0)
        {
            for ( I = 1; I <= 15; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U176[I] )))
                {
                    if (l_U215[I] == 0)
                    {
                        if (NOT (l_U176[I] == l_U193))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2993(), l_U176[I], 20.00000000, 20.00000000, 0 ))
                            {
                                fVar4 = sub_15469( sub_2993(), l_U176[I] );
                                if (fVar4 < fVar3)
                                {
                                    l_U193 = l_U176[I];
                                    fVar3 = fVar4;
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (l_U285 == 0)
        {
            for ( I = 1; I <= 15; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U176[I] )))
                {
                    if (l_U215[I] == 1)
                    {
                        if (NOT (l_U176[I] == l_U193))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2993(), l_U176[I], 20.00000000, 20.00000000, 0 ))
                            {
                                fVar4 = sub_15469( sub_2993(), l_U176[I] );
                                if (fVar4 < fVar3)
                                {
                                    l_U193 = l_U176[I];
                                    fVar3 = fVar4;
                                }
                            }
                        }
                    }
                }
            }
        };;;
        if (fVar3 <= 20)
        {
            if (l_U283 == 0)
            {
                if (NOT (sub_8790( l_U323 )))
                {
                    if (TIMERA() >= 10000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U193 )))
                        {
                            sub_9026( 2, l_U193, "ANGRY_MOB_1", 0 );
                            SET_AMBIENT_VOICE_NAME( l_U193, "ANGRY_MOB_1" );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U193 )))
                        {
                            if (sub_9241( "GIRL1_MOB1", ref l_U323, 6, 1 ))
                            {
                                SETTIMERA( 0 );
                                l_U193 = nil;
                                l_U283 = 1;
                            }
                        }
                    }
                }
            }
            else if (l_U284 == 0)
            {
                if (NOT (sub_8790( l_U323 )))
                {
                    if (TIMERA() >= 10000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U193 )))
                        {
                            sub_9026( 3, l_U193, "ANGRY_MOB_2", 0 );
                            SET_AMBIENT_VOICE_NAME( l_U193, "ANGRY_MOB_2" );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U193 )))
                        {
                            if (sub_9241( "GIRL1_MOB2", ref l_U323, 6, 1 ))
                            {
                                SETTIMERA( 0 );
                                l_U284 = 1;
                                l_U193 = nil;
                            }
                        }
                    }
                }
            }
            else if (l_U285 == 0)
            {
                if (NOT (sub_8790( l_U323 )))
                {
                    if (TIMERA() >= 10000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U193 )))
                        {
                            sub_9026( 4, l_U193, "ANGRY_MOB_3", 0 );
                            SET_AMBIENT_VOICE_NAME( l_U193, "ANGRY_MOB_3" );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U193 )))
                        {
                            if (sub_9241( "GIRL1_MOB3", ref l_U323, 6, 1 ))
                            {
                                SETTIMERA( 0 );
                                l_U283 = 0;
                                l_U284 = 0;
                                l_U285 = 0;
                                l_U193 = nil;
                            }
                        }
                    }
                }
            };;;
        }
    }
    return;
}

float sub_15469(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if ((NOT (IS_CHAR_INJURED( uParam1 ))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        uVar10 = {vVar7 - vVar4};
        return VMAG( uVar10 );
    }
    return 99999.90000000;
}

void sub_16578()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    GET_CHAR_COORDINATES( sub_2993(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if ((uVar2._fU8 >= 22.00000000) || (uVar2._fU8 <= 11.00000000))
    {
        if (NOT l_U280)
        {
            ALTER_WANTED_LEVEL( sub_2186(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2186() );
            TRIGGER_POLICE_REPORT( "RP_MARGOT_2_SCANNER" );
            l_U280 = 1;
        }
    }
    return;
}

void sub_16713()
{
    int I;

    for ( I = 0; I <= 15; I++ )
    {
        if (DOES_CHAR_EXIST( l_U176[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[I] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2993(), l_U176[I], 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    l_U288[I] = 1;
                }
                else
                {
                    l_U288[I] = 0;
                }
            }
            else if (l_U280)
            {
                l_U288[I] = 1;
            }
        }
        else if (l_U280)
        {
            l_U288[I] = 1;
        }
    }
    for ( I = 0; I <= 15; I++ )
    {
        if (NOT l_U288[I])
        {
            l_U305 = 1;
        }
        else
        {
            l_U305 = 0;
        }
    }
    for ( I = 0; I <= 15; I++ )
    {
        if (DOES_CHAR_EXIST( l_U176[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U176[I] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2993(), l_U176[I], 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    if (DOES_BLIP_EXIST( l_U194[I] ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U194[I] );
                    }
                }
            }
        }
    }
    if ((NOT (IS_WANTED_LEVEL_GREATER( sub_2186(), 0 ))) AND (l_U305 == 0))
    {
        sub_17133();
    }
    return;
}

void sub_17133()
{
    CLEAR_WANTED_LEVEL( sub_2186() );
    PRINTNL();
    PRINTSTRING( "************************** MISSION PASSED ******************************" );
    PRINTNL();
    sub_17255( l_U238 );
    g_U25 = 81;
    sub_634();
    return;
}

void sub_17255(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_1526( uParam0 );
    sub_17275( uParam0 );
    sub_18928( uParam0 );
    return;
}

void sub_17275(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        sub_17317();
        break;
        case 14:
        sub_18290();
        break;
        case 15:
        sub_18463();
        break;
        default: sub_577( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_18732();
    sub_18816();
    return;
}

void sub_17317()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 13;
    uVar3 = sub_1526( iVar2 );
    sub_17353( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_18001( 0 );
        break;
        case 2:
        sub_18001( 500 );
        break;
        default: sub_577( "Interactions_Arnaud_Pass: Unknown Arnaud Sequence - tell Keith" );
    }
    return;
}

void sub_17353(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_17406( iParam0, uParam1, uParam2 );
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
        sub_17538( iParam0 + 0 );
    }
    return;
}

void sub_17406(int iParam0, int iParam1, int iParam2)
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
        sub_17538( iParam0 + 0 );
    }
    return;
}

void sub_17538(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_17569( iParam0->_fU4 )))
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

int sub_17569(unknown uParam0)
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

void sub_18001(unknown uParam0)
{
    sub_18012( uParam0 );
    return;
}

void sub_18012(unknown uParam0)
{
    ADD_SCORE( sub_2186(), uParam0 );
    sub_18037( uParam0 );
    return;
}

void sub_18037(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_577( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_18290()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 14;
    uVar3 = sub_1526( iVar2 );
    sub_17353( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_18001( 500 );
        break;
        default: sub_577( "Interactions_Daisy_Pass: Unknown Daisy Sequence - tell Keith" );
    }
    return;
}

void sub_18463()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 15;
    uVar3 = sub_1526( iVar2 );
    sub_17353( ref g_U30257[uVar3]._fU8, 24, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_18001( 0 );
        break;
        case 2:
        sub_18001( 0 );
        break;
        default: sub_577( "Interactions_Margot_Pass: Unknown Margot Sequence - tell Keith" );
    }
    return;
}

void sub_18732()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_18816()
{
    sub_18825();
    StrCopy( ref g_U10966, "RIPASS", 16 );
    return;
}

void sub_18825()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_18928(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_1526( uParam0 );
    g_U30257[uVar3]._fU28 = 99;
    g_U30257[uVar3]._fU4 = 0;
    sub_4281( ref g_U30257[uVar3]._fU8 );
    g_U30257[uVar3]._fU24 = 0;
    sub_19001( uParam0 );
    sub_19670( uVar3 );
    return;
}

void sub_19001(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 3;
    switch (uParam0)
    {
        case 13:
        iVar3 = 0;
        break;
        case 14:
        iVar3 = 1;
        break;
        case 15:
        iVar3 = 2;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U43072[iVar3]._fU0)
    {
        iVar4 = g_U43072[iVar3]._fU8;
        if (iVar4 > 0)
        {
            sub_19133( 5, iVar4 );
            g_U43072[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_19133(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_19303( 0 );
    return;
}

void sub_19303(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_19548();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_19548()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_19670(unknown uParam0)
{
    g_U30257[uParam0]._fU36 = 0;
    g_U30257[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U30257[uParam0]._fU52 = 1;
    StrCopy( ref g_U30257[uParam0]._fU60, "", 16 );
    sub_19755( uParam0 );
    return;
}

void sub_19755(unknown uParam0)
{
    sub_19766( uParam0 );
    sub_19844( uParam0 );
    return;
}

void sub_19766(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U30257[uParam0]._fU56 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U30257[uParam0]._fU56 );
    }
    g_U30257[uParam0]._fU56 = nil;
    return;
}

void sub_19844(unknown uParam0)
{
    g_U30257[uParam0]._fU76 = 0;
    return;
}

void sub_19964()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            WAIT( 0 );
        }
        l_U158 = 4;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 33 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 33 ))
        {
            WAIT( 0 );
        }
        l_U158 = 5;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 2 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 2 ))
        {
            WAIT( 0 );
        }
        GET_CHAR_COORDINATES( sub_2993(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( l_U315, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        PRINTNL();
        PRINTSTRING( "The x offset is " );
        PRINTFLOAT( uVar5._fU0 );
        PRINTNL();
        PRINTSTRING( "The y offset is " );
        PRINTFLOAT( uVar5._fU4 );
        PRINTNL();
        PRINTSTRING( "The z offset is " );
        PRINTFLOAT( uVar5._fU8 );
    }
    return;
}

