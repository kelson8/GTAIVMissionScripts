void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 0;
    l_U362 = {0.00000000, 0.00000000, 0.00000000};
    l_U480 = {1.00000000, 1.00000000, 1.00000000};
    l_U483 = {0.00000000, 1.00000000, 0.00000000};
    l_U486 = {0.00000000, -1.00000000, 0.00000000};
    l_U499 = 0;
    l_U500 = 0;
    l_U511 = 100.00000000;
    l_U512 = 10.50000000;
    l_U513 = 0.50000000;
    l_U514 = 2.85000000;
    l_U519 = 0;
    l_U669 = {-1730.44100000, 361.50650000, 24.99720000};
    l_U672 = 330.78070000;
    l_U688 = {0.00000000, -0.75000000, -0.45000000};
    l_U697 = 0;
    l_U698 = 0;
    l_U703 = 0;
    l_U704 = 0;
    l_U705 = 0;
    l_U706 = 0;
    l_U707 = 0;
    l_U882 = -1758379524;
    l_U1071 = 0;
    l_U1072 = 0;
    l_U1073 = 1;
    l_U1074 = 0;
    l_U1075 = 0;
    l_U1076 = 0;
    l_U1077 = 0;
    l_U1078 = 0;
    l_U1079 = 0;
    l_U1080 = 0;
    l_U1081 = 0;
    l_U1082 = 0;
    l_U1083 = 0;
    l_U1084 = 0;
    l_U1085 = 0;
    l_U1086 = 0;
    l_U1087 = 0;
    l_U1088 = 0;
    l_U1089 = {914.23260000, 1556.08400000, 18.26000000};
    l_U1092 = {65035, 1748, 8.52000000};
    l_U1095 = {-1717.49000000, 366.85000000, 26.87000000};
    l_U1098 = {-1717.49000000, 366.85000000, 26.87000000};
    l_U1151 = 0;
    l_U1152 = 0;
    l_U1153 = 1250;
    l_U1154 = 1250;
    l_U1156 = 0;
    l_U1157 = 0;
    l_U1158 = 0;
    l_U1159 = 0;
    l_U1160 = 0;
    l_U1161 = 0;
    l_U1185 = 5.00000000;
    l_U1187 = 7.00000000;
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 500 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_911();
        sub_3085();
        sub_3268();
    }
    sub_5152();
    while (true)
    {
        WAIT( 0 );
        if (l_U703 != 9)
        {
            sub_6953();
            sub_8940();
        }
        if (IS_VEH_DRIVEABLE( l_U875 ))
        {
            GET_CAR_HEALTH( l_U875, ref l_U1153 );
        }
        switch (l_U703)
        {
            case 0:
            sub_11067();
            break;
            case 1:
            sub_21265();
            break;
            case 2:
            sub_62826();
            break;
            case 3:
            sub_64273();
            break;
            case 4:
            sub_65628();
            break;
            case 5:
            sub_69042();
            break;
            case 6:
            sub_72552();
            break;
            case 7:
            sub_77761();
            break;
            case 8:
            sub_93236();
            break;
            case 9:
            sub_93790();
            break;
        }
        l_U1154 = l_U1153;
    }
    return;
}

void sub_911()
{
    sub_920();
    return;
}

void sub_920()
{
    int iVar2;

    iVar2 = 0;
    sub_934( iVar2 );
    sub_2075( iVar2 );
    return;
}

void sub_934(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_978();
        sub_1186();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1311();
            sub_1363();
            g_U11095 = 1;
        }
    }
    sub_1456();
    sub_1595();
    uVar5 = sub_1708( uParam0 );
    sub_1984( uVar5, 0 );
    return;
}

void sub_978()
{
    if (g_U10993)
    {
        return;
    }
    sub_1005( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_1126();
    }
    return;
}

void sub_1005(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3--;
    g_U20913[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1126()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1186()
{
    sub_1195();
    return;
}

void sub_1195()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1311()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1363()
{
    sub_1372();
    return;
}

void sub_1372()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1456()
{
    int J;
    int I;

    J = 0;
    for ( J = 0; J < 11; J++ )
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (g_U12306[J]._fU144[I]._fU36)
            {
                g_U12306[J]._fU28 = 1;
            }
            g_U12306[J]._fU144[I]._fU36 = 0;
        }
    }
    return;
}

void sub_1595()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1617();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1617()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1708(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1939( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1939(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1984(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_2075(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2084();
    if (g_U0)
    {
        return;
    }
    if (g_U94._fU40 == 0)
    {
        return;
    }
    if (NOT g_U12303)
    {
        return;
    }
    iVar3 = g_U14838[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U12306[iParam0]._fU12)
    {
        return;
    }
    if (g_U10959._fU4 == -1)
    {
        return;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return;
    }
    if (NOT sub_2844())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2910();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_2084()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_2122( 5, g_U572[I] )) == 1))
        {
            if ((sub_2122( 1, g_U572[I] )) != 0)
            {
                sub_2408( I );
            }
        }
    }
    if (NOT sub_2574())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    if (g_U94._fU0 == 1015)
    {
        g_U94._fU92 = 1;
    }
    return;
}

int sub_2122(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2408(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2493( g_U572 - 1 );
    return;
}

void sub_2493(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2574()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2122( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2844()
{
    if ((g_U10959._fU8 == 1) AND (g_U10959._fU4 == 0))
    {
        return 0;
    }
    return 1;
}

void sub_2910()
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

void sub_3085()
{
    sub_3094();
    return;
}

void sub_3094()
{
    int I;

    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            g_U38937[I]._fU0 = 1;
            g_U38937[I]._fU4 = 0;
        }
    }
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU0 = 1;
            g_U39058[I]._fU4 = 0;
        }
    }
    g_U39102 = 0;
    return;
}

void sub_3268()
{
    sub_3277();
    sub_3616( ref l_U939, 0 );
    sub_3616( ref l_U933, 0 );
    sub_3755( 0, ref l_U708 );
    l_U180 = 1;
    sub_3959();
    STOP_PED_SPEAKING( sub_3854(), 0 );
    SET_PED_IS_BLIND_RAGING( sub_3854(), 0 );
    sub_4258();
    CLEAR_PRINTS();
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    CLEAR_PED_NON_CREATION_AREA();
    SWITCH_PED_PATHS_ON( 64993, 1673, -10, 65177, 1862, 50 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 63748, 309, -10, 63877, 413, 100 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1743.27000000, 340.29000000, 20, -1674.02000000, 398.20000000, 30 );
    SWITCH_PED_PATHS_ON( 63781, 330, 20, 63871, 405, 30 );
    SWITCH_RANDOM_TRAINS( 1 );
    g_U11004 = 1;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_MAX_WANTED_LEVEL( 6 );
    STOP_SOUND( l_U1150 );
    RELEASE_SOUND_ID( l_U1150 );
    MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    g_U15728[14] = 1;
    RELEASE_WEATHER();
    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U708[l_U1148]._fU0 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U881 )))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U881 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U882 );
    DONT_SUPPRESS_CAR_MODEL( l_U882 );
    sub_4729( 0 );
    sub_4729( 1 );
    sub_4729( 13 );
    sub_4729( 6 );
    sub_4729( 7 );
    sub_4729( 16 );
    g_U10460 = 1;
    if (g_U0)
    {
        SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3277()
{
    sub_3286();
    sub_3431();
    return;
}

void sub_3286()
{
    if (l_U18)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U16 = 0;
    l_U15 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3431()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U19 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U19, 0 );
            SET_CAM_ACTIVE( l_U19, 0 );
            DESTROY_CAM( l_U19 );
            l_U19 = nil;
            l_U20 = -1;
            l_U32 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U32 );
            }
            else
            {
                l_U32 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_3616(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_3755(unknown uParam0, unknown uParam1)
{
    int I;

    sub_3616( ref l_U155, uParam0 );
    for ( I = 0; I < (uParam1^); I++ )
    {
        sub_3795( ref (uParam1^)[I] );
    }
    return;
}

void sub_3795(int iParam0)
{
    sub_3616( ref l_U155, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_3854() )))
    {
        TASK_CLEAR_LOOK_AT( sub_3854() );
    }
    l_U162 = 0;
    return;
}

void sub_3854()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3959()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 5; I++ )
    {
        uVar3 = sub_3982( I );
        if (HAVE_ANIMS_LOADED( uVar3 ))
        {
            REMOVE_ANIMS( uVar3 );
        }
    }
    return;
}

void sub_3982(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_4258()
{
    REMOVE_BLIP( l_U222 );
    if (DOES_OBJECT_EXIST( l_U220 ))
    {
        DELETE_OBJECT( ref l_U220 );
    }
    if (DOES_OBJECT_EXIST( l_U221 ))
    {
        DELETE_OBJECT( ref l_U221 );
    }
    l_U137 = 0;
    return;
}

void sub_4729(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_4752( uParam0 ) );
    return;
}

int sub_4752(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_1939( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5152()
{
    SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 1 );
    if (NOT g_U0)
    {
        OVERRIDE_NEXT_RESTART( -1276.97000000, 1200.65000000, 22.07000000, 0.00000000 );
    }
    if (g_U0)
    {
        g_U39149[0] = 0;
    }
    if (IS_PLAYER_PLAYING( sub_5225() ))
    {
        CLEAR_WANTED_LEVEL( sub_5225() );
    }
    SET_PLAYER_CONTROL( sub_5225(), 0 );
    SET_CHAR_HEALTH( sub_3854(), 200 );
    if ((g_U39149[0] < 1) AND (NOT (IS_CHAR_DEAD( sub_3854() ))))
    {
        REMOVE_ALL_CHAR_WEAPONS( sub_3854() );
        ADD_ARMOUR_TO_CHAR( sub_3854(), 65336 );
    }
    SET_CHAR_COORDINATES( sub_3854(), 64267, 1188, 23 );
    WAIT( 0 );
    SET_PLAYER_CONTROL( sub_5225(), 1 );
    sub_5410( 0 );
    g_U15728[14] = 0;
    l_U180 = 0;
    LOAD_ADDITIONAL_TEXT( "BILLY1", 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U924 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U925 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U926 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U927 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U928 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U929 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U927, 35 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U928, 25 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U929, 20 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U926, 30 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U926, 0 );
    ADD_SCENARIO_BLOCKING_AREA( 64993, 1673, -10, 65177, 1862, 50 );
    ADD_SCENARIO_BLOCKING_AREA( 64222, 1170, -10, 64323, 1242, 50 );
    ADD_SCENARIO_BLOCKING_AREA( 63792, 309, -10, 63858, 354, 50 );
    SET_PED_NON_CREATION_AREA( 64993, 1673, -10, 65177, 1862, 50 );
    SWITCH_PED_PATHS_OFF( 64993, 1673, -10, 65177, 1862, 50 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 65051, 1746, -10, 65072, 1790, 100, 0 );
    SET_RELATIONSHIP( 5, 23, 0 );
    SET_GROUP_FORMATION( sub_5876(), 0 );
    SET_GROUP_FORMATION_SPACING( sub_5876(), 3.00000000 );
    sub_5952( "E1B1AUD" );
    sub_6081( 0, sub_3854(), "JOHNNY", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\CHOPPER_REV_01" )))
    {
        WAIT( 0 );
    }
    l_U1150 = GET_SOUND_ID();
    PLAY_SOUND_FROM_POSITION( l_U1150, "B1_GET_BILLYS_BIKE_BACK_GARAGE", 934, 1556, 18 );
    l_U1104[0] = {-481.56090000, 1774.75600000, 8.61653500};
    l_U1104[1] = {-482.51700000, 1770.66600000, 8.62929600};
    l_U1104[2] = {-479.19540000, 1772.00300000, 8.64084300};
    l_U1104[3] = {-484.83780000, 1772.66500000, 8.65998400};
    l_U1104[4] = {-471.84790000, 1748.16400000, 8.62830600};
    l_U1104[5] = {-490.49120000, 1774.75800000, 9.03044200};
    l_U1104[6] = {-473.54790000, 1760.40400000, 8.62830600};
    l_U1104[7] = {-475.03120000, 1758.28800000, 8.62830600};
    l_U1162[0] = 166.84200000;
    l_U1162[1] = -28.37400000;
    l_U1162[2] = 91.14400000;
    l_U1162[3] = -96.39500000;
    l_U1162[4] = 107.18700000;
    l_U1162[5] = 177.33800000;
    l_U1162[6] = 144.65000000;
    l_U1162[7] = -34.04000000;
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    g_U10460 = 0;
    SWITCH_RANDOM_TRAINS( 0 );
    DELETE_ALL_TRAINS();
    FORCE_WEATHER( 3 );
    if (NOT g_U39209)
    {
        sub_6720( 100 );
        g_U39209 = 1;
    }
    STOP_PED_SPEAKING( sub_3854(), 1 );
    switch (g_U39149[0])
    {
        case 0:
        l_U703 = 0;
        break;
        case 1:
        l_U703 = 2;
        l_U1059 = 1;
        l_U1046 = 1;
        break;
        case 2:
        l_U703 = 4;
        l_U1059 = 1;
        l_U1046 = 1;
        break;
        case 3:
        l_U703 = 5;
        l_U1059 = 1;
        l_U1046 = 1;
        l_U1041 = 1;
        l_U1042 = 1;
        l_U1049 = 1;
        break;
    }
    return;
}

void sub_5225()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5410(boolean bParam0)
{
    g_U11108 = 1;
    if (bParam0)
    {
        sub_5434( 0, 0 );
    }
    else
    {
        sub_5434( 1, 1 );
    }
    return;
}

void sub_5434(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11093) AND (NOT g_U11094))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_5876()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5952(unknown uParam0)
{
    StrCopy( ref l_U34._fU0, uParam0, 16 );
    sub_5971();
    return;
}

void sub_5971()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U34._fU16[I]._fU0 = nil;
        StrCopy( ref l_U34._fU16[I]._fU4, "", 32 );
        l_U34._fU344[I] = 0;
    }
    return;
}

void sub_6081(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U34._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U34._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6165( "\n PED NUMBER ", uParam0 );
    sub_6205( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6165(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6205(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6720(unknown uParam0)
{
    ADD_SCORE( sub_5225(), uParam0 );
    return;
}

void sub_6953()
{
    if ((NOT ((g_U39149[0] == 3) AND (l_U703 == 5))) AND ((NOT (l_U703 == 8)) AND ((NOT (l_U703 == 4)) AND ((NOT (l_U703 == 2)) AND (NOT (l_U703 == 0))))))
    {
        for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
        {
            if (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 ))
            {
                switch (l_U1148)
                {
                    case 0:
                    l_U707 = 1;
                    break;
                    case 1:
                    l_U707 = 2;
                    break;
                    case 2:
                    l_U707 = 3;
                    break;
                    case 3:
                    l_U707 = 4;
                    break;
                    case 4:
                    l_U707 = 5;
                    break;
                    case 5:
                    l_U707 = 6;
                    break;
                }
                sub_7198();
            }
        }
    }
    return;
}

void sub_7198()
{
    sub_7207();
    sub_3616( ref l_U939, 1 );
    sub_3616( ref l_U933, 1 );
    sub_3755( 1, ref l_U708 );
    switch (l_U707)
    {
        case 1:
        PRINT_NOW( "B1_BILLYDEAD", 7500, 1 );
        sub_3277();
        break;
        case 2:
        PRINT_NOW( "B1_JIMDEAD", 7500, 1 );
        break;
        case 3:
        PRINT_NOW( "B1_BRIANDEAD", 7500, 1 );
        break;
        case 4:
        PRINT_NOW( "B1_JASONDEAD", 7500, 1 );
        break;
        case 5:
        PRINT_NOW( "B1_TERRYDEAD", 7500, 1 );
        break;
        case 6:
        PRINT_NOW( "B1_CLAYDEAD", 7500, 1 );
        break;
        case 7:
        PRINT_NOW( "B1_PBIKEDEST", 7500, 1 );
        break;
        case 8:
        PRINT_NOW( "B1_BBIKEDEST", 7500, 1 );
        break;
        case 9:
        PRINT_NOW( "B1_LBIKEDEST", 7500, 1 );
        break;
        case 10:
        PRINT_NOW( "B1_PBIKEABAN", 7500, 1 );
        break;
        case 0:
        PRINTSTRING( "\n\n\n         -----> NO FAIL REASON <-----\n\n\n\n" );
        break;
    }
    sub_3085();
    WAIT( 7000 );
    if (NOT g_U0)
    {
        while (NOT (sub_7978( 1, 0 )))
        {
            WAIT( 0 );
        }
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_OUT_UNHACKED( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( sub_3854() )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3854() );
        }
        sub_8373();
    }
    sub_8789();
    sub_3268();
    return;
}

void sub_7207()
{
    if (DOES_BLIP_EXIST( l_U898 ))
    {
        REMOVE_BLIP( l_U898 );
    }
    if (DOES_BLIP_EXIST( l_U899 ))
    {
        REMOVE_BLIP( l_U899 );
    }
    if (DOES_BLIP_EXIST( l_U900 ))
    {
        REMOVE_BLIP( l_U900 );
    }
    if (DOES_BLIP_EXIST( l_U902 ))
    {
        REMOVE_BLIP( l_U902 );
    }
    if (DOES_BLIP_EXIST( l_U901 ))
    {
        REMOVE_BLIP( l_U901 );
    }
    for ( l_U1148 = 0; l_U1148 < l_U903; l_U1148++ )
    {
        if (DOES_BLIP_EXIST( l_U903[l_U1148] ))
        {
            REMOVE_BLIP( l_U903[l_U1148] );
        }
    }
    return;
}

int sub_7978(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3854()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3854() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5225() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5225() )))
    {
        return 0;
    }
    return 1;
}

void sub_8373()
{
    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
    {
        sub_8416( ref l_U708[l_U1148], 1 );
    }
    sub_4729( 0 );
    sub_4729( 1 );
    sub_4729( 13 );
    sub_4729( 6 );
    sub_4729( 7 );
    sub_4729( 16 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -408052231 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -570033273 );
    REMOVE_ANIMS( "MISSBILLY_1" );
    REMOVE_ANIMS( "MISSBIKE_GESTCHOP" );
    return;
}

void sub_8416(int iParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((iParam0->_fU0 != sub_3854()) AND (DOES_CHAR_EXIST( iParam0->_fU0 )))
    {
        DELETE_CHAR( iParam0 + 0 );
    }
    if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
    {
        if (bParam1)
        {
            iVar4 = nil;
            if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref iVar4 );
            }
            if (iVar4 == iParam0->_fU4)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
            }
            else
            {
                DELETE_CAR( iParam0 + 4 );
            }
        }
        else
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
        }
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_8789()
{
    sub_8798();
    return;
}

void sub_8798()
{
    int iVar2;

    iVar2 = 0;
    sub_8812( iVar2 );
    sub_2075( iVar2 );
    return;
}

void sub_8812(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5225(), 150 );
    CLEAR_HELP();
    sub_934( uParam0 );
    return;
}

void sub_8940()
{
    if ((NOT ((g_U39149[0] == 3) AND (l_U703 == 5))) AND ((NOT (l_U703 == 8)) AND ((NOT (l_U703 == 4)) AND ((NOT (l_U703 == 2)) AND (NOT (l_U703 == 0))))))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U875 )))
        {
            l_U707 = 7;
            sub_7198();
        }
        if (NOT (IS_CAR_DEAD( l_U875 )))
        {
            if (sub_9063( l_U875 ))
            {
                l_U707 = 7;
                sub_7198();
            }
            if (sub_10497( l_U875 ))
            {
                l_U707 = 10;
                sub_7198();
            }
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U708[1]._fU4 )))
        {
            l_U707 = 9;
            sub_7198();
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U708[2]._fU4 )))
        {
            l_U707 = 9;
            sub_7198();
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U708[3]._fU4 )))
        {
            l_U707 = 9;
            sub_7198();
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U708[4]._fU4 )))
        {
            l_U707 = 9;
            sub_7198();
        }
        if (NOT (IS_VEH_DRIVEABLE( l_U708[5]._fU4 )))
        {
            l_U707 = 9;
            sub_7198();
        }
        if (l_U703 >= 5)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U876 )))
            {
                l_U707 = 8;
                sub_7198();
            }
        }
    }
    return;
}

int sub_9063(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3854() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( sub_3854(), uParam0 ))
            {
                if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
                {
                    return 1;
                }
                if ((NOT (CHECK_STUCK_TIMER( uParam0, 1, 0 ))) AND (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
                {
                    return 1;
                }
                if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
                {
                    return 1;
                }
            }
            if (sub_9207( uParam0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_9207(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3854() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3854(), uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3854(), uParam0, 5, 5, 5, 0 ))
                {
                    if (((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 3 ))) || ((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 15 ))))
                    {
                        if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
                        {
                            l_U355++;
                        }
                        GET_GAME_TIMER( ref l_U356 );
                    }
                    else if (NOT sub_9378())
                    {
                        if (sub_9456( uParam0 ))
                        {
                            if (l_U355 > 2)
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3854() )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( sub_3854() )))
                                    {
                                        GET_GAME_TIMER( ref l_U357 );
                                        l_U358 = l_U357 - l_U356;
                                        if (l_U358 > 1000)
                                        {
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check has returned true" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            PRINTSTRING( "Brenda's Stuck Check is setting your vehicle on fire" );
                                            PRINTNL();
                                            PRINTSTRING( "*******************************" );
                                            PRINTNL();
                                            SET_PETROL_TANK_HEALTH( uParam0, 65436 );
                                            return 1;
                                        }
                                    }
                                    else
                                    {
                                        GET_GAME_TIMER( ref l_U356 );
                                        l_U355 = 0;
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref l_U356 );
                                    l_U355 = 0;
                                }
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U356 );
                            l_U355 = 0;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U356 );
                        l_U355 = 0;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U356 );
                    l_U355 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U356 );
                l_U355 = 0;
            }
        }
    }
    return 0;
}

int sub_9378()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 < 65516) || (iVar2 > 20))
    {
        return 1;
    }
    if ((iVar3 < 65516) || (iVar3 > 20))
    {
        return 1;
    }
    return 0;
}

int sub_9456(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    if (NOT (IS_CHAR_INJURED( sub_3854() )))
    {
        GET_CHAR_COORDINATES( sub_3854(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0 - uVar6._fU0, uVar3._fU4 - uVar6._fU4, ref uVar9 );
    if (sub_9574( sub_3854(), uVar9, 90 ))
    {
        return 1;
    }
    return 0;
}

int sub_9574(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEADING( uParam0, ref fVar5 );
        fVar6 = uParam1 - uParam2;
        fVar7 = (uParam1 + uParam2) - 1;
        fVar9 = fVar7 - 360;
        fVar8 = fVar6 + 360;
        if ((fVar6 >= 0) AND (fVar7 <= 360))
        {
            if ((fVar5 < fVar7) AND (fVar5 > fVar6))
            {
                l_U354 = 1;
            }
            else
            {
                l_U354 = 0;
            }
        }
        else if (fVar7 > 360)
        {
            if (((fVar5 > fVar6) AND (fVar5 <= 360)) || ((fVar5 >= 0) AND (fVar5 < fVar9)))
            {
                l_U354 = 1;
            }
            else
            {
                l_U354 = 0;
            }
        }
        else if (fVar6 < 0)
        {
            if (((fVar5 < fVar7) AND (fVar5 >= 0)) || ((fVar5 <= 360) AND (fVar5 > fVar8)))
            {
                l_U354 = 1;
            }
            else
            {
                l_U354 = 0;
            }
        };;;
        if (l_U354)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int sub_10497(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3854() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3854(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3854(), uParam0, 200.00000000, 200.00000000, 200.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3854(), uParam0, 150.00000000, 150.00000000, 150.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref l_U360 );
                    l_U361 = l_U360 - l_U359;
                    if (l_U361 > 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U359 );
                }
            }
        }
    }
    return 0;
}

void sub_11067()
{
    FREEZE_RADIO_STATION( "LIBERTY_ROCK" );
    FORCE_RADIO_TRACK( "LIBERTY_ROCK", "EP1_RADIO_LIBERTY_ROCK_MUSIC", 2, 23 );
    FORCE_INITIAL_PLAYER_STATION( "LIBERTY_ROCK" );
    sub_11175();
    CLEAR_AREA( -1276.97000000, 1200.65000000, 22.07000000, 200, 1 );
    EXTINGUISH_FIRE_AT_POINT( -1276.97000000, 1200.65000000, 22.07000000, 300.00000000 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    LOAD_SCENE( -1276.97000000, 1200.65000000, 22.07000000 );
    ADD_BLIP_FOR_COORD( l_U1098._fU0, l_U1098._fU4, l_U1098._fU8, ref l_U898 );
    SET_ROUTE( l_U898, 1 );
    l_U1084 = 0;
    SET_GAME_CAM_HEADING( 0 );
    WAIT( 3000 );
    CLEAR_AREA( -1276.97000000, 1200.65000000, 22.07000000, 200, 1 );
    EXTINGUISH_FIRE_AT_POINT( -1276.97000000, 1200.65000000, 22.07000000, 300.00000000 );
    UNFREEZE_RADIO_STATION( "LIBERTY_ROCK" );
    SET_PLAYER_CONTROL( sub_5225(), 1 );
    SETTIMERA( 0 );
    SET_GAME_CAM_HEADING( 0 );
    if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
    {
        DO_SCREEN_FADE_IN( 500 );
    }
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    l_U703 = 1;
    return;
}

void sub_11175()
{
    if (l_U703 == 0)
    {
        CLEAR_AREA( -1273.61000000, 1197.89000000, 21.77000000, 200.00000000, 1 );
        EXTINGUISH_FIRE_AT_POINT( -1273.61000000, 1197.89000000, 21.77000000, 200.00000000 );
    }
    REQUEST_MODEL( sub_4752( 0 ) );
    REQUEST_MODEL( sub_4752( 1 ) );
    REQUEST_MODEL( sub_4752( 13 ) );
    REQUEST_MODEL( sub_4752( 16 ) );
    REQUEST_MODEL( sub_4752( 6 ) );
    REQUEST_MODEL( sub_4752( 7 ) );
    REQUEST_MODEL( -408052231 );
    REQUEST_MODEL( -570033273 );
    REQUEST_MODEL( sub_11355() );
    REQUEST_ANIMS( "MISSBIKE_GESTCHOP" );
    REQUEST_ANIMS( "MISSBILLY_1" );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAVE_ANIMS_LOADED( "MISSBILLY_1" ))) || ((NOT (HAVE_ANIMS_LOADED( "MISSBIKE_GESTCHOP" ))) || ((NOT (HAS_MODEL_LOADED( sub_11355() ))) || ((NOT (HAS_MODEL_LOADED( -570033273 ))) || ((NOT (HAS_MODEL_LOADED( -408052231 ))) || ((NOT (HAS_MODEL_LOADED( sub_4752( 7 ) ))) || ((NOT (HAS_MODEL_LOADED( sub_4752( 6 ) ))) || ((NOT (HAS_MODEL_LOADED( sub_4752( 16 ) ))) || ((NOT (HAS_MODEL_LOADED( sub_4752( 13 ) ))) || ((NOT (HAS_MODEL_LOADED( sub_4752( 1 ) ))) || (NOT (HAS_MODEL_LOADED( sub_4752( 0 ) )))))))))))))
    {
        REQUEST_MODEL( sub_4752( 0 ) );
        REQUEST_MODEL( sub_4752( 1 ) );
        REQUEST_MODEL( sub_4752( 13 ) );
        REQUEST_MODEL( sub_4752( 16 ) );
        REQUEST_MODEL( sub_4752( 6 ) );
        REQUEST_MODEL( sub_4752( 7 ) );
        REQUEST_MODEL( -408052231 );
        REQUEST_MODEL( -570033273 );
        REQUEST_MODEL( sub_11355() );
        REQUEST_ANIMS( "MISSBIKE_GESTCHOP" );
        REQUEST_ANIMS( "MISSBILLY_1" );
        WAIT( 0 );
    }
    if (NOT l_U1065)
    {
        GIVE_WEAPON_TO_CHAR( sub_3854(), 26, 100, 1 );
        SET_CHAR_AMMO( sub_3854(), 26, 100 );
        while (NOT (sub_11870( ref l_U875, -1273.61000000, 1197.89000000, 21.77000000, 65499 )))
        {
            WAIT( 0 );
        }
        WARP_CHAR_INTO_CAR( sub_3854(), l_U875 );
        GIVE_PED_HELMET_WITH_OPTS( sub_3854(), 0 );
        SET_CAR_ENGINE_ON( l_U875, 1, 1 );
        SET_CAR_HEALTH( l_U875, 1250 );
        SET_ENGINE_HEALTH( l_U875, 1250 );
        SET_PETROL_TANK_HEALTH( l_U875, 1250 );
        if (g_U39211 == 0)
        {
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 1 );
            g_U39211 = 1;
        }
        sub_13561( 0 );
        sub_13561( 1 );
        sub_13561( 13 );
        sub_13561( 16 );
        sub_13561( 6 );
        sub_13561( 7 );
        l_U1065 = 1;
    }
    while (NOT (sub_13774( 0, 64268, 1193, 23, 0.00000000, ref l_U708[0] )))
    {
        WAIT( 0 );
    }
    if (IS_VEH_DRIVEABLE( l_U875 ))
    {
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U708[0]._fU0, l_U875, 0 );
    }
    SET_GROUP_MEMBER( sub_5876(), l_U708[0]._fU0 );
    sub_6081( 1, l_U708[0]._fU0, "BILLY", 0 );
    SET_GROUP_FORMATION( sub_5876(), 0 );
    SET_GROUP_FORMATION_SPACING( sub_5876(), 3.00000000 );
    STOP_PED_SPEAKING( l_U708[0]._fU0, 1 );
    if (l_U703 == 0)
    {
        SET_CHAR_COMPONENT_VARIATION( l_U708[0]._fU0, 2, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U708[0]._fU0, 5, 1, 0 );
    }
    switch (l_U703)
    {
        case 0:
        while (NOT (sub_16591( 1, -1273.72500000, 1203.12600000, 20.71190000, 302.60530000, ref l_U708[1] )))
        {
            WAIT( 0 );
        }
        sub_6081( 2, l_U708[1]._fU0, "JIM", 0 );
        while (NOT (sub_16591( 13, -1268.87200000, 1199.00700000, 20.75460000, 348.88280000, ref l_U708[2] )))
        {
            WAIT( 0 );
        }
        sub_6081( 5, l_U708[2]._fU0, "BRIAN", 0 );
        while (NOT (sub_16591( 16, -1278.19000000, 1196.43000000, 22.07000000, -54.64000000, ref l_U708[3] )))
        {
            WAIT( 0 );
        }
        sub_6081( 6, l_U708[3]._fU0, "JASON", 0 );
        while (NOT (sub_16591( 6, -1273.75000000, 1192.45000000, 22.00000000, 65518, ref l_U708[4] )))
        {
            WAIT( 0 );
        }
        sub_6081( 4, l_U708[4]._fU0, "TERRY", 0 );
        while (NOT (sub_16591( 7, -1277.53700000, 1192.99500000, 20.84080000, 315.36360000, ref l_U708[5] )))
        {
            WAIT( 0 );
        }
        sub_6081( 7, l_U708[5]._fU0, "CLAY", 0 );
        break;
        case 2:
        while (NOT (sub_16591( 1, -1725.71700000, 356.05500000, 24.94740000, -38.60000000, ref l_U708[1] )))
        {
            WAIT( 0 );
        }
        sub_6081( 2, l_U708[1]._fU0, "JIM", 0 );
        while (NOT (sub_16591( 13, -1725.93000000, 352.22340000, 24.94600000, 326.78470000, ref l_U708[2] )))
        {
            WAIT( 0 );
        }
        sub_6081( 5, l_U708[2]._fU0, "BRIAN", 0 );
        while (NOT (sub_16591( 16, -1729.49200000, 349.42340000, 24.94600000, -26.45350000, ref l_U708[3] )))
        {
            WAIT( 0 );
        }
        sub_6081( 6, l_U708[3]._fU0, "JASON", 0 );
        while (NOT (sub_16591( 6, -1728.39000000, 346.03270000, 24.94600000, -35.91740000, ref l_U708[4] )))
        {
            WAIT( 0 );
        }
        sub_6081( 4, l_U708[4]._fU0, "TERRY", 0 );
        while (NOT (sub_16591( 7, -1731.59900000, 343.66350000, 24.94600000, -30.52110000, ref l_U708[5] )))
        {
            WAIT( 0 );
        }
        sub_6081( 7, l_U708[5]._fU0, "CLAY", 0 );
        break;
        case 4:
        while (NOT (sub_16591( 1, 925.62000000, 1563.90000000, 18, 126, ref l_U708[1] )))
        {
            WAIT( 0 );
        }
        sub_6081( 2, l_U708[1]._fU0, "JIM", 0 );
        while (NOT (sub_16591( 13, 921.84000000, 1568.47000000, 18, 144, ref l_U708[2] )))
        {
            WAIT( 0 );
        }
        sub_6081( 5, l_U708[2]._fU0, "BRIAN", 0 );
        while (NOT (sub_16591( 16, 929.45860000, 1566.36500000, 15.69230000, 69, ref l_U708[3] )))
        {
            WAIT( 0 );
        }
        sub_6081( 6, l_U708[3]._fU0, "JASON", 0 );
        while (NOT (sub_16591( 6, 926.38620000, 1569.85800000, 15.56360000, 113, ref l_U708[4] )))
        {
            WAIT( 0 );
        }
        sub_6081( 4, l_U708[4]._fU0, "TERRY", 0 );
        while (NOT (sub_16591( 7, 929.83210000, 1570.63400000, 15.60150000, 121, ref l_U708[5] )))
        {
            WAIT( 0 );
        }
        sub_6081( 7, l_U708[5]._fU0, "CLAY", 0 );
        break;
        case 5:
        while (NOT (sub_16591( 1, 65043, 1704, 8.50000000, 65518, ref l_U708[1] )))
        {
            WAIT( 0 );
        }
        sub_6081( 2, l_U708[1]._fU0, "JIM", 0 );
        while (NOT (sub_16591( 13, 65073, 1721, 8.50000000, 144, ref l_U708[2] )))
        {
            WAIT( 0 );
        }
        sub_6081( 5, l_U708[2]._fU0, "BRIAN", 0 );
        while (NOT (sub_16591( 16, 65032, 1695, 8.50000000, 65496, ref l_U708[3] )))
        {
            WAIT( 0 );
        }
        sub_6081( 6, l_U708[3]._fU0, "JASON", 0 );
        while (NOT (sub_16591( 6, 65023, 1688, 8.50000000, 65486, ref l_U708[4] )))
        {
            WAIT( 0 );
        }
        sub_6081( 4, l_U708[4]._fU0, "TERRY", 0 );
        while (NOT (sub_16591( 7, 65067, 1718, 8.50000000, 121, ref l_U708[5] )))
        {
            WAIT( 0 );
        }
        sub_6081( 7, l_U708[5]._fU0, "CLAY", 0 );
        break;
    }
    if ((l_U703 == 5) || (l_U703 == 0))
    {
        sub_18697();
    }
    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
        {
            if (NOT (l_U1148 == 0))
            {
                if (NOT (IS_CAR_DEAD( l_U708[l_U1148]._fU4 )))
                {
                    SET_BLIP_THROTTLE_RANDOMLY( l_U708[l_U1148]._fU4, 1 );
                    sub_20019( ref l_U708[l_U1148], l_U708[l_U1148]._fU4, 1 );
                    SET_CAR_AS_MISSION_CAR( l_U708[l_U1148]._fU4 );
                    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U708[l_U1148]._fU4, 1 );
                    LOCK_CAR_DOORS( l_U708[l_U1148]._fU4, 3 );
                    SET_CAR_ENGINE_ON( l_U708[l_U1148]._fU4, 1, 1 );
                    FORCE_CAR_LIGHTS( l_U708[l_U1148]._fU4, 2 );
                    SET_CAR_HEALTH( l_U708[l_U1148]._fU4, 2000 );
                    SET_ENGINE_HEALTH( l_U708[l_U1148]._fU4, 2000 );
                    SET_PETROL_TANK_HEALTH( l_U708[l_U1148]._fU4, 2000 );
                    switch (l_U1148)
                    {
                        case 1:
                        sub_12010( l_U708[l_U1148]._fU4, -570033273, 1 );
                        break;
                        case 2:
                        sub_12010( l_U708[l_U1148]._fU4, -408052231, 13 );
                        break;
                        case 3:
                        sub_12010( l_U708[l_U1148]._fU4, -408052231, 16 );
                        break;
                        case 4:
                        sub_12010( l_U708[l_U1148]._fU4, -408052231, 6 );
                        break;
                        case 5:
                        sub_12010( l_U708[l_U1148]._fU4, -408052231, 7 );
                        break;
                    }
                }
            }
            if ((l_U1148 == 4) || (l_U1148 == 1))
            {
                GIVE_WEAPON_TO_CHAR( l_U708[l_U1148]._fU0, 26, 30000, 0 );
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( l_U708[l_U1148]._fU0, 7, 30000, 0 );
            }
            GIVE_PED_HELMET_WITH_OPTS( l_U708[l_U1148]._fU0, 0 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U708[l_U1148]._fU0, 1 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U708[l_U1148]._fU0, 0 );
            SET_CHAR_DROWNS_IN_WATER( l_U708[l_U1148]._fU0, 0 );
            SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U708[l_U1148]._fU0, 0 );
            SET_PED_DIES_WHEN_INJURED( l_U708[l_U1148]._fU0, 1 );
            SET_CHAR_DECISION_MAKER( l_U708[l_U1148]._fU0, l_U925 );
            SET_COMBAT_DECISION_MAKER( l_U708[l_U1148]._fU0, l_U926 );
            SET_CHAR_MAX_HEALTH( l_U708[l_U1148]._fU0, 700 );
            SET_CHAR_HEALTH( l_U708[l_U1148]._fU0, 700 );
            SET_CHAR_KEEP_TASK( l_U708[l_U1148]._fU0, 1 );
        }
    }
    if (l_U703 == 0)
    {
        ;
    }
    return;
}

int sub_11355()
{
    return 301427732;
}

int sub_11870(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_11355();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_12010( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_12010(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_13561(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_13572( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 1;
    g_U39102 = 1;
    return;
}

int sub_13572(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 6: return 2;
        case 7: return 3;
        case 13: return 4;
        case 16: return 5;
    }
    return 6;
}

int sub_13774(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if (NOT (sub_13785( uParam0 )))
    {
        sub_13824( uParam0 );
        return 0;
    }
    sub_13873( uParam1, uParam4, sub_4752( uParam0 ), iParam5 );
    sub_15298( uParam0, iParam5->_fU0 );
    sub_4729( uParam0 );
    return 1;
}

void sub_13785(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_4752( uParam0 ) );
}

void sub_13824(unknown uParam0)
{
    REQUEST_MODEL( sub_4752( uParam0 ) );
    return;
}

void sub_13873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_14471( sub_13883( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_14599( iParam5 );
    return;
}

void sub_13883(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((uParam0^) == (sub_4752( 16 ))) || (((uParam0^) == (sub_4752( 13 ))) || (((uParam0^) == (sub_4752( 7 ))) || (((uParam0^) == (sub_4752( 6 ))) || (((uParam0^) == (sub_4752( 1 ))) || ((uParam0^) == (sub_4752( 0 ))))))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_4752( 17 ))) || ((uParam0^) == (sub_4752( 15 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_14471(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_14599(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_14638( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_14808( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_14808( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_15095( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_4752( 7 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_4752( 6 ) ))))
        {
            sub_15095( iParam0 );
        }
    }
    return;
}

void sub_14638(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_13883( ref uVar3 );
    }
    return Result;
}

int sub_14808(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_15095(int iParam0)
{
    if (l_U151)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_15298(unknown uParam0, unknown uParam1)
{
    sub_15310( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_15310(unknown uParam0, int iParam1)
{
    sub_15321( uParam0 );
    if (iParam1 == 22)
    {
        sub_15421( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_16080( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_15321(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_15421(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((g_U15728[19]) AND ((uParam0^) == sub_3854()))
        {
            if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_16080(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_15421( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_15421( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_16591(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if ((NOT (HAS_MODEL_LOADED( sub_16610( uParam0 ) ))) || (NOT (sub_13785( uParam0 ))))
    {
        sub_13824( uParam0 );
        REQUEST_MODEL( sub_16610( uParam0 ) );
        return 0;
    }
    sub_16889( uParam1, uParam4, sub_4752( uParam0 ), sub_16610( uParam0 ), iParam5, 1 );
    sub_12010( iParam5->_fU4, sub_16610( uParam0 ), uParam0 );
    SUPPRESS_CAR_MODEL( sub_16610( uParam0 ) );
    sub_15298( uParam0, iParam5->_fU0 );
    sub_4729( uParam0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_16610( uParam0 ) );
    }
    return 1;
}

int sub_16610(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

void sub_16889(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_13873( vParam0 + (vector( 0.00000000, 0.00000000, 2.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_16935( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_16935(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_12010( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_18697()
{
    sub_18718( ref l_U708[1], sub_3854() );
    sub_19414( ref l_U708[1], 0 );
    sub_18718( ref l_U708[2], sub_3854() );
    sub_19414( ref l_U708[2], 1 );
    sub_18718( ref l_U708[3], l_U708[1]._fU0 );
    sub_19414( ref l_U708[3], 2 );
    sub_18718( ref l_U708[4], l_U708[2]._fU0 );
    sub_19414( ref l_U708[4], 2 );
    sub_18718( ref l_U708[5], l_U708[4]._fU0 );
    sub_19414( ref l_U708[5], 2 );
    return;
}

void sub_18718(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_18814( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam1 != sub_3854()) AND (iParam0->_fU8 == sub_3854()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[1]) || (g_U11197 == g_U11081[0]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[1]) || (g_U11198 == g_U11081[0]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if (((iParam0->_fU36 != 1) || (iParam0->_fU8 != iParam1)) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_19299( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_3854())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_19414( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_19414( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_19414( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_19414( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_19414( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_18814(unknown uParam0, unknown uParam1)
{
    return (NOT (sub_18838( uParam0, uParam1 ))) AND (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ));
}

boolean sub_18838(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_19299(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_19414(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_3854())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_20019(int iParam0, unknown uParam1, boolean bParam2)
{
    iParam0->_fU4 = uParam1;
    if (bParam2)
    {
        sub_20045( iParam0, 2 );
    }
    return;
}

void sub_20045(int iParam0, int iParam1)
{
    if (sub_20058( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam1) XOR (iParam0->_fU88);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

boolean sub_20058(int iParam0, unknown uParam1)
{
    return ((uParam1) AND (iParam0->_fU88)) > 0;
}

void sub_21265()
{
    sub_21278( ref l_U708 );
    sub_24134();
    if ((IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U875 )) AND (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))
    {
        if (NOT l_U1059)
        {
            if (IS_EPISODIC_DISC_BUILD())
            {
                if (l_U1047)
                {
                    if (TIMERA() > 25500)
                    {
                        PRINT_HELP( "B1_SCHELP" );
                        l_U1059 = 1;
                    }
                    else if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ENTERC" ))) AND ((TIMERA() < 25500) AND (TIMERA() > 21500)))
                    {
                        PRINT_HELP( "ENTERC" );
                    }
                    else if ((TIMERA() < 21500) AND (TIMERA() > 17500))
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CRADIO" )))
                        {
                            CLEAR_HELP();
                            PRINT_HELP( "CRADIO" );
                        }
                    }
                    else if ((TIMERA() < 17500) AND (TIMERA() > 13500))
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HBRAKE" )))
                        {
                            CLEAR_HELP();
                            PRINT_HELP( "HBRAKE" );
                        }
                    }
                    else if ((TIMERA() < 13500) AND (TIMERA() > 9500))
                    {
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ACCEL" )))
                        {
                            CLEAR_HELP();
                            PRINT_HELP( "ACCEL" );
                        }
                    };;;;;
                }
            }
            else if ((TIMERA() >= 9500) AND (l_U1047))
            {
                PRINT_HELP( "B1_SCHELP" );
                l_U1059 = 1;
            }
        }
        if (sub_52751())
        {
            if (NOT l_U1034)
            {
                if (IS_SCREEN_FADED_IN())
                {
                    sub_28478( "E1B1_GO", ref l_U939, 7, 1 );
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "WHATEVER", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                    l_U1034 = 1;
                }
            }
            else if (NOT l_U1047)
            {
                PRINT_NOW( "B1_GOCLUBHOUSE", 7500, 1 );
                l_U1047 = 1;
                SETTIMERA( 0 );
            }
            else if (NOT l_U1035)
            {
                switch (g_U39214)
                {
                    case 0:
                    sub_28478( "E1B1_B1V1", ref l_U933, 7, 1 );
                    break;
                    case 1:
                    sub_28478( "E1B1_B1V2", ref l_U933, 7, 1 );
                    break;
                }
                l_U1156 = g_U39214;
                if (g_U39214 < 2)
                {
                    g_U39214++;
                }
                l_U1035 = 1;
            }
            else if ((l_U1076 == 0) AND (sub_53185( l_U933 )))
            {
                switch (l_U1156)
                {
                    case 0:
                    if (l_U1077 == 1)
                    {
                        sub_53283( "E1B1_B1V1", l_U1159, 0, ref l_U933, 7, 1 );
                        l_U1077 = 0;
                    }
                    else
                    {
                        sub_53419( "E1B1_B1V1", ref l_U933, 7, 1 );
                    }
                    break;
                    case 1:
                    if (l_U1077 == 1)
                    {
                        sub_53283( "E1B1_B1V2", l_U1159, 0, ref l_U933, 7, 1 );
                        l_U1077 = 0;
                    }
                    else
                    {
                        sub_53419( "E1B1_B1V2", ref l_U933, 7, 1 );
                    }
                    break;
                }
            };;;;
        }
    }
    sub_53619();
    sub_58619();
    sub_58857();
    sub_60735();
    sub_61798();
    sub_61948();
    if ((l_U1080 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), l_U1098._fU0, l_U1098._fU4, l_U1098._fU8, 40, 40, 40, 0 )))
    {
        sub_28478( "BG01_BACK", ref l_U939, 7, 1 );
        l_U1080 = 1;
    }
    if ((NOT l_U948) AND (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() )))
    {
        if ((sub_62625( 1, 1 )) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), l_U1098._fU0, l_U1098._fU4, l_U1098._fU8, 2.50000000, 2.50000000, 2.50000000, 1 )))
        {
            if (DOES_BLIP_EXIST( l_U898 ))
            {
                REMOVE_BLIP( l_U898 );
            }
            l_U703 = 2;
        }
    }
    return;
}

void sub_21278(unknown uParam0)
{
    int I;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    float fVar11;
    int iVar12;
    unknown uVar13;
    int iVar14;

    bVar4 = true;
    bVar5 = false;
    bVar6 = false;
    if (l_U20 < 0)
    {
        bVar4 = false;
    }
    GET_GAME_TIMER( ref iVar7 );
    iVar8 = -1;
    iVar9 = -1;
    fVar10 = 0.00000000;
    if (l_U20 >= 0)
    {
        if (g_U39213)
        {
            if (((uParam0^) > 1) AND (NOT g_U39212))
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "BKR_CAM_HLP1" );
                    g_U39212 = 1;
                }
            }
        }
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar13, ref uVar13, ref iVar12, ref uVar13 );
        if (iVar12 == 0)
        {
            GET_MOUSE_INPUT( ref iVar12, ref uVar13 );
        }
        if (l_U21)
        {
            if ((iVar12 > 65456) AND (iVar12 < 80))
            {
                l_U21 = 0;
            }
        }
        else if (iVar12 >= 80)
        {
            iVar9 = sub_21505( uParam0 );
        }
        else if (iVar12 <= 65456)
        {
            iVar9 = sub_22097( uParam0 );
        };;;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
    {
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (sub_21539( uParam0, I ))
            {
                if (iVar9 < 0)
                {
                    fVar11 = sub_22315( (uParam0^)[I]._fU0, sub_3854(), 1 );
                    if (fVar11 > fVar10)
                    {
                        fVar10 = fVar11;
                        iVar8 = I;
                    }
                }
                if (l_U20 == I)
                {
                    bVar5 = true;
                }
            }
        }
    }
    if (bVar5)
    {
        if (iVar9 < 0)
        {
            bVar4 = false;
            sub_22435( ref (uParam0^)[l_U20] );
        }
        else
        {
            iVar8 = iVar9;
            if (DOES_CAM_EXIST( l_U19 ))
            {
                bVar6 = true;
            }
        }
    }
    else if (iVar8 >= 0)
    {
        if (DOES_CAM_EXIST( l_U19 ))
        {
            bVar6 = true;
        }
    }
    if (l_U20 >= 0)
    {
        if ((NOT bVar6) AND ((IS_VEH_DRIVEABLE( (uParam0^)[l_U20]._fU4 )) AND ((l_U32 + 2500) > iVar7)))
        {
            bVar4 = false;
        }
    }
    else if ((l_U32 + 2500) > iVar7)
    {
        bVar4 = true;
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar14 );
    if ((NOT bVar4) AND ((iVar8 >= 0) AND ((NOT (iVar14 == 4)) AND ((NOT sub_23614()) AND ((IS_CHAR_ON_ANY_BIKE( sub_3854() )) AND ((NOT (IS_CONTROL_PRESSED( 0, 39 ))) AND ((NOT (IS_CONTROL_PRESSED( 0, 38 ))) AND (IS_CONTROL_PRESSED( 0, 51 )))))))))
    {
        sub_23677( uParam0, iVar8 );
    }
    else
    {
        sub_3431();
        if (bVar6)
        {
            sub_23677( uParam0, iVar8 );
        }
    }
    return;
}

void sub_21505(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U20; I <= ((uParam0^) - 1); I++ )
    {
        if ((Result < 0) AND ((I != l_U20) AND (sub_21539( uParam0, I ))))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = 0; I <= l_U20; I++ )
        {
            if ((Result < 0) AND ((I != l_U20) AND (sub_21539( uParam0, I ))))
            {
                Result = I;
            }
        }
    }
    return Result;
}

int sub_21539(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    unknown uVar11;

    if ((NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_3854() ))) AND ((IS_VEH_DRIVEABLE( (uParam0^)[iParam1]._fU4 )) AND (NOT (IS_CHAR_INJURED( (uParam0^)[iParam1]._fU0 )))))
    {
        if ((IS_CHAR_ON_ANY_BIKE( (uParam0^)[iParam1]._fU0 )) AND ((IS_CHAR_IN_CAR( (uParam0^)[iParam1]._fU0, (uParam0^)[iParam1]._fU4 )) AND (NOT (IS_CHAR_IN_CAR( sub_3854(), (uParam0^)[iParam1]._fU4 )))))
        {
            uVar4 = {sub_21681( (uParam0^)[iParam1]._fU0, 1 )};
            uVar7 = {sub_21681( sub_3854(), 1 )};
            fVar10 = VDIST( uVar4, uVar7 );
            if (fVar10 < 4.50000000)
            {
                return 0;
            }
            if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( (uParam0^)[iParam1]._fU0, sub_3854() ))
            {
                return 1;
            }
            if ((DOES_CAM_EXIST( l_U19 )) AND (iParam1 == l_U20))
            {
                if (IS_CAM_ACTIVE( l_U19 ))
                {
                    if ((fVar10 > 29.00000000) AND (fVar10 < 38.00000000))
                    {
                        GET_GAME_VIEWPORT_ID( ref uVar11 );
                        if (CAM_IS_SPHERE_VISIBLE( uVar11, uVar7._fU0, uVar7._fU4, uVar7._fU8, 0.20000000 ))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_21681(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_22097(unknown uParam0)
{
    int I;
    int Result;

    Result = -1;
    for ( I = l_U20; I >= 0; I += -1 )
    {
        if ((Result < 0) AND ((I != l_U20) AND (sub_21539( uParam0, I ))))
        {
            Result = I;
        }
    }
    if (Result == -1)
    {
        for ( I = (uParam0^) - 1; I >= l_U20; I += -1 )
        {
            if ((Result < 0) AND ((I != l_U20) AND (sub_21539( uParam0, I ))))
            {
                Result = I;
            }
        }
    }
    return Result;
}

void sub_22315(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_21681( uParam0, uParam2 ), sub_21681( uParam1, uParam2 ) );
}

void sub_22435(int iParam0)
{
    vector vVar3;
    vector vVar6;
    float fVar9;
    int iVar10;
    float fVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    vector vVar16;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    vector vVar24;

    vVar3 = {sub_21681( sub_3854(), 1 )};
    vVar6 = {sub_21681( iParam0->_fU0, 1 )};
    fVar9 = VDIST( vVar3, vVar6 );
    GET_GAME_TIMER( ref iVar10 );
    if ((ABSF( fVar9 - l_U22 )) < 3.00000000)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 500, ref l_U25 );
        l_U25 += iVar10;
    }
    if (iVar10 > (l_U25 + 1000))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar12 );
            GET_CAR_SPEED_VECTOR( uVar12, ref uVar13, 0 );
            vVar16 = {vVar3 - vVar6};
            vVar16 = {vVar16 / (VMAG( vVar16 ))};
            fVar11 = ((vVar16.x * uVar13._fU0) + (vVar16.y * uVar13._fU4)) + (vVar16.z * uVar13._fU8);
        }
        l_U22 = fVar9 + ((5.00000000 * fVar11) * TIMESTEP());
    }
    if ((ABSF( l_U23 - l_U22 )) < 2.00000000)
    {
        l_U24 *= 0.70000000;
    }
    else if (l_U22 > l_U23)
    {
        l_U24 += 0.20000000;
    }
    else if (l_U22 < l_U23)
    {
        l_U24 -= 0.20000000;
    };;;
    if (l_U24 > 1.00000000)
    {
        l_U24 = 1.00000000;
    }
    else if (l_U24 < -1.00000000)
    {
        l_U24 = -1.00000000;
    }
    l_U23 += l_U24;
    GET_CHAR_SPEED( iParam0->_fU0, ref fVar19 );
    fVar19 -= 15.00000000;
    if (fVar19 < 0.00000000)
    {
        fVar19 = 0.00000000;
    }
    SET_CAM_FOV( l_U19, sub_22913( l_U23 - fVar19 ) );
    SET_CAM_MOTION_BLUR( l_U19, fVar19 / 185.00000000 );
    vVar20 = {vVar3 - vVar6};
    vVar20 = {vVar20 * (l_U23 / (VMAG( vVar20 )))};
    vVar20 = {vVar20 + vVar6};
    SET_CAM_DOF_FOCUSPOINT( l_U19, vVar20.x, vVar20.y, vVar20.z, 1.50000000 );
    GET_CHAR_SPEED( sub_3854(), ref uVar23 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( -1.00000000, 1.00000000, ref vVar24.x );
    GENERATE_RANDOM_FLOAT_IN_RANGE( (-10.00000000 * uVar23) / fVar9, 0.00000000, ref vVar24.y );
    GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref vVar24.z );
    vVar24 = {vVar24 * (0.00400000 * fVar9)};
    if (fVar9 < 20.00000000)
    {
        vVar24.z += 0.60000000 + ((0.75000000 * fVar9) / 20.00000000);
    }
    else
    {
        vVar24.z += 1.35000000;
    }
    l_U29 = {l_U29 + (((vVar24 - l_U26) * 0.50000000) / fVar9)};
    if ((VMAG2( l_U29 )) > 1.00000000)
    {
        l_U29 = {l_U29 / (VMAG( l_U29 ))};
    }
    else
    {
        l_U29 = {l_U29 * (0.98000000 - (0.10000000 / fVar9))};
    }
    l_U26 = {l_U26 + l_U29};
    SET_CAM_POINT_OFFSET( l_U19, l_U26._fU0, l_U26._fU4, l_U26._fU8 );
    return;
}

void sub_22913(float fParam0)
{
    if (fParam0 < 4.55000000)
    {
        fParam0 = 4.55000000;
    }
    else if (fParam0 > 90.00000000)
    {
        fParam0 = 90.00000000;
    }
    return ATAN2( 6.50000000, fParam0 );
}

int sub_23614()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_23677(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    GET_KEY_FOR_CHAR_IN_ROOM( (uParam0^)[uParam1]._fU0, ref iVar4 );
    if (NOT (DOES_CAM_EXIST( l_U19 )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_3854(), ref iVar6 );
        if (iVar4 != iVar6)
        {
            return;
        }
        BEGIN_CAM_COMMANDS( ref iVar5 );
        if (iVar5 != 1)
        {
            ;
        }
        else
        {
            CREATE_CAM( 14, ref l_U19 );
            ATTACH_CAM_TO_VEHICLE( l_U19, (uParam0^)[uParam1]._fU4 );
            SET_CAM_ATTACH_OFFSET( l_U19, 0.00000000, 0.45000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U19, 1 );
            POINT_CAM_AT_PED( l_U19, sub_3854() );
            SET_CAM_ACTIVE( l_U19, 1 );
            SET_CAM_PROPAGATE( l_U19, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U33 = 0;
            l_U21 = 1;
            l_U20 = uParam1;
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 0 );
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            l_U22 = sub_22315( (uParam0^)[l_U20]._fU0, sub_3854(), 1 );
            l_U23 = l_U22;
            l_U24 = 0.00000000;
            l_U26 = {0, 0, 1.35000000};
            if (l_U22 < 20.00000000)
            {
                l_U26._fU8 = 0.60000000 + ((0.75000000 * l_U22) / 20.00000000);
            }
            l_U29 = {0, 0, 0};
            GET_GAME_TIMER( ref l_U25 );
            sub_22435( ref (uParam0^)[l_U20] );
            GET_GAME_TIMER( ref l_U32 );
        }
        END_CAM_COMMANDS( ref iVar5 );
    }
    else if (NOT l_U33)
    {
        GET_GAME_VIEWPORT_ID( ref uVar7 );
        SET_ROOM_FOR_VIEWPORT_BY_KEY( uVar7, iVar4 );
        l_U33 = 1;
    }
    return;
}

void sub_24134()
{
    if ((NOT (IS_CAR_DEAD( l_U875 ))) AND (NOT l_U946))
    {
        if ((NOT (IS_CHAR_STOPPED( sub_3854() ))) || (NOT (IS_CAR_STOPPED( l_U875 ))))
        {
            l_U946 = 1;
        }
    }
    else if ((NOT (IS_CAR_DEAD( l_U875 ))) AND (NOT (l_U703 == 1)))
    {
        if (IS_CHAR_IN_CAR( sub_3854(), l_U875 ))
        {
            if (l_U1023)
            {
                sub_18697();
                l_U1023 = 0;
            }
            for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
            {
                if (NOT (l_U1148 == 0))
                {
                    sub_24328( ref l_U708[l_U1148], 0 );
                    if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
                    {
                        if (IS_CHAR_IN_AREA_2D( l_U708[l_U1148]._fU0, -266.86000000, 1694.83000000, -230.26000000, 1722.67000000, 0 ))
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U708[l_U1148]._fU0, 10 );
                        }
                    }
                }
            }
            if ((NOT (l_U703 == 3)) || (l_U1018))
            {
                sub_47581( ref l_U708, -2, 0 );
            }
        }
        else if ((NOT (IS_CAR_DEAD( l_U875 ))) AND (NOT l_U1023))
        {
            GET_CAR_COORDINATES( l_U875, ref l_U1194, ref l_U1195, ref l_U1196 );
            for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
            {
                if (l_U1148 != 0)
                {
                    sub_50502( ref l_U708[l_U1148], l_U1194, l_U1195, l_U1196, 0 );
                    l_U1023 = 1;
                }
            }
        }
        else
        {
            for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
            {
                if (l_U1148 != 0)
                {
                    sub_24328( ref l_U708[l_U1148], 0 );
                }
            }
        }
    }
    else
    {
        l_U1152 = 0;
        for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
        {
            if (NOT (l_U1148 == 0))
            {
                if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
                {
                    if (NOT l_U992[l_U1148])
                    {
                        if ((IS_CHAR_IN_ANY_CAR( l_U708[l_U1148]._fU0 )) AND (IS_CHAR_IN_ANGLED_AREA_2D( l_U708[l_U1148]._fU0, -1763.32000000, 385.27000000, -1751.43000000, 405.89000000, 65425, 0 )))
                        {
                            GET_CAR_CHAR_IS_USING( l_U708[l_U1148]._fU0, ref l_U880 );
                            if (IS_VEH_DRIVEABLE( l_U880 ))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U708[l_U1148]._fU0, 1 );
                                CLEAR_SEQUENCE_TASK( l_U930 );
                                OPEN_SEQUENCE_TASK( ref l_U930 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1715.63000000, 371.28000000, 25.91000000, 9.00000000, 0, 0, 2, 7.00000000, -1 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1720.96000000, 361.82000000, 25.91000000, 6.00000000, 0, 0, 3, 3.00000000, 30 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1737.09000000, 334.57000000, 25.91000000, 5.00000000, 0, 0, 3, 2.00000000, 30 );
                                switch (l_U1148)
                                {
                                    case 1:
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1743.24000000, 330.67000000, 25.91000000, 4.00000000, 0, 0, 2, 3.00000000, -1 );
                                    break;
                                    case 2:
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1750.24000000, 331.37000000, 25.91000000, 4.00000000, 0, 0, 2, 3.00000000, -1 );
                                    break;
                                    case 3:
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1753.46000000, 336.61000000, 25.91000000, 4.00000000, 0, 0, 2, 3.00000000, -1 );
                                    break;
                                    case 4:
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1750.24000000, 340.68000000, 25.91000000, 4.00000000, 0, 0, 2, 3.00000000, -1 );
                                    break;
                                    case 5:
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U880, -1744.81000000, 338.06000000, 25.91000000, 4.00000000, 0, 0, 2, 3.00000000, -1 );
                                    break;
                                }
                                TASK_LEAVE_ANY_CAR( 0 );
                                CLOSE_SEQUENCE_TASK( l_U930 );
                                TASK_PERFORM_SEQUENCE( l_U708[l_U1148]._fU0, l_U930 );
                            }
                            l_U992[l_U1148] = 1;
                        }
                        else if (IS_CHAR_IN_CAR( sub_3854(), l_U875 ))
                        {
                            if (l_U1023)
                            {
                                sub_18697();
                                l_U1023 = 0;
                            }
                            sub_24328( ref l_U708[l_U1148], 0 );
                            l_U1152++;
                        }
                        else if (NOT l_U1023)
                        {
                            GET_CAR_COORDINATES( l_U875, ref l_U1194, ref l_U1195, ref l_U1196 );
                            for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
                            {
                                if (l_U1148 != 0)
                                {
                                    sub_50502( ref l_U708[l_U1148], l_U1194, l_U1195, l_U1196, 0 );
                                    l_U1023 = 1;
                                }
                            }
                        }
                        else
                        {
                            for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
                            {
                                if (l_U1148 != 0)
                                {
                                    sub_24328( ref l_U708[l_U1148], 0 );
                                }
                            }
                        };;;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U708[l_U1148]._fU0, 29, ref l_U932 );
                        if ((NOT (IS_CHAR_IN_ANY_CAR( l_U708[l_U1148]._fU0 ))) AND (l_U932 == 7))
                        {
                            sub_52086( l_U708[l_U1148]._fU0, ref l_U1178[l_U1148] );
                        }
                    }
                }
            }
        }
        if (l_U1152 == 5)
        {
            sub_47581( ref l_U708, -2, 0 );
        }
    }
    return;
}

void sub_24328(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_24375( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_24770( iParam0 )) == 2)
        {
            return;
        }
        sub_28168( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_30823( iParam0 );
        }
        if (sub_20058( iParam0, 1 ))
        {
            sub_35608( iParam0 + 0, 0 );
        }
        else
        {
            sub_35608( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))) AND (IS_CAR_UPSIDEDOWN( uVar4 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_35899( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_20058( iParam0, 32 ))
            {
                sub_19299( iParam0, 3 );
            }
            else if (sub_20058( iParam0, 64 ))
            {
                if (sub_20058( iParam0, 1 ))
                {
                    sub_19299( iParam0, 5 );
                }
                else
                {
                    sub_19299( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_36950( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_37207( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38339( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38453( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38574( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38874( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_39230( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36950( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_37207( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38339( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38453( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10958 != 0) || (g_U10956 != 0))
        {
            if ((sub_27775( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_39489( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_39646( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_27775( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36950( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_37207( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38339( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38453( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_35996( iParam0 )) > 30.00000000)
        {
            sub_46866( iParam0 );
        }
        else if ((sub_39489( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_27613( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_46951( iParam0 );
    }
    return;
}

void sub_24375(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_24386( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

int sub_24386(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU4) || (g_U38937[Result]._fU0))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

int sub_24770(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3854() )) || (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_3854(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_24913( iVar3 )) == sub_11355()) AND ((sub_14638( iParam0 + 0 )) == 3)))
        {
            if (((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3854() ))) AND (sub_25013( sub_3854() ))) || (((sub_24971( iParam0->_fU0 )) == (sub_4752( 0 ))) || ((sub_14638( iParam0 + 0 )) != 1)))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_14638( iParam0 + 0 )) == 3)
        {
            sub_25132( iParam0->_fU0, "", sub_3854(), 26 );
        }
        else
        {
            sub_25132( sub_3854(), "", iParam0->_fU0, 37 );
        }
        return sub_27613( iParam0, 1, 1 );
    }
    return 0;
}

void sub_24913(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_24971(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_25013(unknown uParam0)
{
    return (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (IS_CHAR_IN_ANY_CAR( uParam0 ));
}

void sub_25132(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_SITTING_IN_ANY_CAR( iParam0 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_3982( sub_25292( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U175 = iParam0;
        l_U176 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_25765( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_3854())
            {
                iVar8 = sub_14638( ref iParam0 );
                if ((iParam2 != sub_3854()) AND (iVar8 == 1))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_3854(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_3854(), iParam2, sub_25765( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_3854(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_3854(), iParam0, sub_25765( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((IS_CHAR_MODEL( iParam0, sub_4752( 0 ) )) AND (iParam3 == 38))
            {
                if (l_U180)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_26029( iParam3 ), 1, 1, 2 );
            }
            l_U174 = iParam3;
        }
        GET_GAME_TIMER( ref l_U173 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U178, 2 );
            case 36: SET_BIT( ref l_U178, 1 );
            case 24:
            SET_BIT( ref l_U178, 0 );
            break;
            case 38:
            SET_BIT( ref l_U178, 6 );
            break;
        }
    }
    return Result;
}

void sub_25292(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_25345( uVar3 );
        }
    }
    return Result;
}

void sub_25345(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
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

void sub_25765(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_26029(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

int sub_27613(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))) AND (sub_25013( iParam0->_fU0 )))
    {
        return 2;
    }
    else if ((sub_20058( iParam0, 1 )) || (uParam1))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_27775( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_21681( sub_3854(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

int sub_27775(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_27786( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iParam0->_fU96 != 5) || (iVar4 == 7))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_27786(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_28168(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_28199( (iParam0^) )))
        {
            if ((NOT l_U163) AND ((NOT l_U162) AND (sub_28234( (iParam0^) ))))
            {
                if ((NOT sub_28286()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( sub_3854() )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), iParam0->_fU0, l_U152, l_U152, l_U152, 0 ))
                        {
                            if (sub_28385())
                            {
                                if (iParam0->_fU0 == l_U161)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_28478( (iParam0 + 44) + 12, ref l_U155, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_28478( (iParam0 + 44) + 28, ref l_U155, 7, 1 );
                                    }
                                    sub_29472( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_3854() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3854(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_3854(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U138 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_3854(), ref l_U167._fU0, ref l_U167._fU4, ref l_U167._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U170._fU0, ref l_U170._fU4, ref l_U170._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U167._fU0, l_U167._fU4, l_U167._fU8, l_U170._fU0, l_U170._fU4, l_U170._fU8, ref l_U166 );
                                    if (iParam0->_fU0 == l_U161)
                                    {
                                        l_U165 += 1.00000000 * TIMESTEP();
                                        l_U164 = l_U166;
                                    }
                                    else if ((IS_CHAR_INJURED( l_U161 )) || (l_U166 <= l_U164))
                                    {
                                        l_U161 = iParam0->_fU0;
                                        l_U164 = l_U166;
                                        l_U165 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_29900())
                            {
                                sub_29928();
                            }
                            else if (sub_29985())
                            {
                                sub_29949();
                            }
                            GET_CHAR_COORDINATES( sub_3854(), ref l_U167._fU0, ref l_U167._fU4, ref l_U167._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U170._fU0, ref l_U170._fU4, ref l_U170._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U167._fU0, l_U167._fU4, l_U167._fU8, l_U170._fU0, l_U170._fU4, l_U170._fU8, ref l_U166 );
                            if (iParam0->_fU0 == l_U161)
                            {
                                l_U165 += 1.00000000 * TIMESTEP();
                                l_U164 = l_U166;
                            }
                            else if ((IS_CHAR_INJURED( l_U161 )) || (l_U166 <= l_U164))
                            {
                                l_U161 = iParam0->_fU0;
                                l_U164 = l_U166;
                                l_U165 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_30249())
                        {
                            sub_30457( (iParam0^) );
                        }
                    }
                    else if (NOT sub_30249())
                    {
                        sub_30457( (iParam0^) );
                    }
                }
                else if (NOT sub_30249())
                {
                    sub_30457( (iParam0^) );
                }
            }
            else if (NOT sub_30249())
            {
                sub_30457( (iParam0^) );
            }
        }
        else if (NOT sub_30249())
        {
            if ((NOT (sub_30267( l_U155 ))) || ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3854() ))) || ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 ))) || ((NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) || ((NOT (IS_CHAR_ON_ANY_BIKE( sub_3854() ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), iParam0->_fU0, l_U153, l_U153, l_U153, 0 ))))))))
            {
                sub_3795( iParam0 );
            }
        }
    }
    else if (sub_28199( (iParam0^) ))
    {
        sub_3616( ref l_U155, 0 );
        sub_3795( iParam0 );
    }
    return;
}

void sub_28199(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_28234(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_28286()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_28385()
{
    if (NOT l_U139)
    {
        if (l_U138)
        {
            return 1;
        }
    }
    return 0;
}

void sub_28478(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_28501( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

void sub_28501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_28555( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_28555(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_28577( iParam1 )))
    {
        return 0;
    }
    l_U34._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_29269( ref g_U8947, ref l_U34 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_28577(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_28654( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_28654( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_28654( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_28654(unknown uParam0)
{
    return;
}

void sub_29269(int iParam0, int iParam1)
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

void sub_29472(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U161 = nil;
    l_U165 = 0.00000000;
    l_U162 = 1;
    return;
}

void sub_29900()
{
    return l_U137;
}

void sub_29928()
{
    l_U137 = 1;
    l_U138 = 0;
    sub_29949();
    return;
}

void sub_29949()
{
    l_U139 = 0;
    return;
}

void sub_29985()
{
    return l_U139;
}

void sub_30249()
{
    int Result;

    Result = 0;
    if (sub_30267( l_U145 ))
    {
        Result = 1;
    }
    return Result;
}

int sub_30267(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_28654( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_28654( "\n speech is not playing" );
    }
    return 0;
}

void sub_30457(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U161)
    {
        l_U161 = nil;
        l_U165 = 0.00000000;
        sub_30498();
    }
    return;
}

void sub_30498()
{
    if (l_U136 == 1)
    {
        l_U140 = 0.00000000;
        l_U139 = 1;
        l_U138 = 0;
    }
    return;
}

void sub_30823(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((iParam0->_fU36 == 0) || (NOT l_U177))
    {
        return;
    }
    if ((sub_28286()) AND (sub_28199( (iParam0^) )))
    {
        if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
        {
            if ((IS_CHAR_ON_ANY_BIKE( sub_3854() )) AND ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))))
            {
                GET_CHAR_COORDINATES( sub_3854(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U176 != sub_3854()) || (l_U175 != iParam0->_fU0))
                    {
                        sub_25132( iParam0->_fU0, sub_31097( uVar8._fU0 < 0.00000000, sub_25345( iParam0->_fU4 ) ), sub_3854(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_3854() ))
                {
                    l_U175 = sub_3854();
                    l_U176 = iParam0->_fU0;
                }
            }
        }
    }
    if (((iVar4 - l_U173) < 33) || ((sub_28199( (iParam0^) )) || (sub_28286())))
    {
        return;
    }
    if (l_U173 <= 0)
    {
        l_U173 = iVar4;
        return;
    }
    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_31750( uVar12 ))
            {
                fVar21 = sub_31793( iParam0 );
                if ((iParam0->_fU0 != l_U175) AND (((fVar21 < 15) || ((fVar21 < 19) AND (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND (NOT (sub_28199( (iParam0^) )))))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((((sub_25765( 0, 10 )) == 0) || (iParam0->_fU36 != 1)) AND (l_U14))
                    {
                        l_U14 = 0;
                        iVar15 = 17;
                        iVar11 = sub_3854();
                    }
                    else if ((NOT (IS_BIT_SET( l_U178, 6 ))) AND (((sub_14638( iParam0 + 0 )) == 1) AND ((iParam0->_fU36 == 2) AND (sub_31946( iParam0 )))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_32060( bVar16 );
                        iVar11 = sub_3854();
                    }
                    else if ((sub_32148( 8 )) AND (((ABSF( uVar22 )) < 20.00000000) AND (IS_CAR_IN_AIR_PROPER( uVar12 ))))
                    {
                        uVar13 = sub_32402( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((sub_32148( 12 )) AND (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_3854() )))
                    {
                        uVar13 = sub_32060( bVar16 );
                        iVar11 = sub_3854();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if ((sub_32148( 13 )) AND ((IS_PED_RAGDOLL( iParam0->_fU0 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 ))))
                    {
                        uVar13 = sub_32060( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if ((sub_32148( 20 )) AND ((IS_BIT_SET( l_U178, 7 )) AND ((NOT (IS_PLAYER_PRESSING_HORN( sub_5225() ))) AND ((sub_14638( iParam0 + 0 )) == 1))))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_32402( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_3854();
                        CLEAR_BIT( ref l_U178, 7 );
                    }
                    else if (((sub_14638( iParam0 + 0 )) == 1) AND ((sub_32148( 24 )) AND ((NOT (IS_BIT_SET( l_U178, 0 ))) AND (IS_WANTED_LEVEL_GREATER( sub_5225(), 0 )))))
                    {
                        iVar15 = 24;
                        iVar11 = sub_3854();
                    }
                    else if (((sub_14638( iParam0 + 0 )) == 1) AND ((sub_32148( 30 )) AND ((IS_BIT_SET( l_U178, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_5225(), 0 ))))))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_21681( sub_3854(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U178, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3854() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_3854() ))
                                    {
                                        if (sub_32148( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_3854();
                                            if ((sub_25765( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_32402( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_32060( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U178, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_3854() ))
                                    {
                                        CLEAR_BIT( ref l_U178, 3 );
                                        CLEAR_BIT( ref l_U178, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_3854() ))
                            {
                                if (((sub_14638( iParam0 + 0 )) == 1) AND ((NOT (IS_BIT_SET( l_U178, 4 ))) AND (sub_32148( 33 ))))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_25345( uVar23 );
                                        if (((iVar24 == 0) || (iVar24 == 1)) AND (NOT (IS_CAR_A_MISSION_CAR( uVar23 ))))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U178, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U178, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3854() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_14638( iParam0 + 0 )) == 1) AND ((NOT (IS_BIT_SET( l_U178, 4 ))) AND (sub_32148( 31 ))))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U178, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U178, 3 );
                            }
                            else if ((NOT (IS_PED_RAGDOLL( sub_3854() ))) AND (IS_CHAR_ON_FOOT( sub_3854() )))
                            {
                                CLEAR_BIT( ref l_U178, 3 );
                                CLEAR_BIT( ref l_U178, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((iVar11 == l_U176) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if ((NOT (IS_WANTED_LEVEL_GREATER( sub_5225(), 0 ))) AND (sub_32148( 0 )))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_25765( 0, 10 )) == 0;
                                    }
                                }
                                else if ((NOT (IS_BIT_SET( l_U178, 1 ))) AND ((IS_WANTED_LEVEL_GREATER( sub_5225(), 0 )) AND (sub_32148( 36 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((sub_32148( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_5225(), 2 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((iVar15 == 39) AND (sub_32148( 2 )))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((iVar11 == l_U176) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 996267216 )) || (IS_CHAR_MODEL( iVar11, 552542187 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_25765( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U178, 2 ))) AND (IS_WANTED_LEVEL_GREATER( sub_5225(), 0 )))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_34291( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((iVar11 == l_U176) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_14638( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if (((sub_14638( iParam0 + 0 )) == 1) AND (sub_32148( 28 )))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_14638( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_32148( 4 )) AND (sub_32148( 3 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_14638( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_32148( 30 ))
                                            {
                                                uVar13 = sub_34892( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_32148( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_3854(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if ((fVar26 < 5) AND ((sub_14638( iParam0 + 0 )) == 1))
                            {
                                if ((IS_WANTED_LEVEL_GREATER( sub_5225(), 0 )) AND (sub_32148( 23 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_32148( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((fVar26 > 30) AND (NOT (IS_BIT_SET( l_U178, 5 ))))
                            {
                                if (((sub_14638( iParam0 + 0 )) == 1) AND (sub_32148( 30 )))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_32148( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_25765( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((NOT (IS_STRING_NULL( uVar13 ))) || (iVar15 != 39))
                    {
                        if (sub_25132( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if ((IS_BIT_SET( l_U178, 6 )) AND ((iVar4 - l_U173) > 10000))
    {
        CLEAR_BIT( ref l_U178, 6 );
    }
    if ((NOT (IS_BIT_SET( l_U178, 7 ))) AND (IS_PLAYER_PRESSING_HORN( sub_5225() )))
    {
        SET_BIT( ref l_U178, 7 );
    }
    if ((l_U175 != nil) AND ((iVar4 - l_U173) > 28000))
    {
        if ((sub_14638( iParam0 + 0 )) == 1)
        {
            sub_25132( iParam0->_fU0, "", sub_3854(), 30 );
        }
        else
        {
            sub_25132( iParam0->_fU0, "", sub_3854(), 20 );
        }
        l_U175 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_5225(), 0 )))
        {
            CLEAR_BIT( ref l_U178, 0 );
            CLEAR_BIT( ref l_U178, 2 );
            CLEAR_BIT( ref l_U178, 1 );
        }
        CLEAR_BIT( ref l_U178, 7 );
    }
    return;
}

void sub_31097(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 0) || (iParam1 == 1))
    {
        if (bParam0)
        {
            switch (sub_25765( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_25765( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_31750(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_31793(int iParam0)
{
    return sub_22315( iParam0->_fU0, sub_3854(), 1 );
}

void sub_31946(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_3854(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_32060(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_32148(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U173) > iVar3;
}

void sub_32402(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_34291(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_34892(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_35608(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_14638( uParam0 )) == 1)
        {
            if ((NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))) || (IS_SCREEN_FADED_OUT()))
            {
                if ((uParam1) || (IS_CHAR_ON_ANY_BIKE( (uParam0^) )))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_35899(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_27786( iParam0 )) != iParam0->_fU4)
    {
        if (sub_31750( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_35996( iParam0 )) < l_U183)
    {
        return 1;
    };;;
    if (sub_31750( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if (((iParam0->_fU96 != 14) AND (iParam0->_fU96 != 4)) || (iVar3 == 7))
    {
        if (sub_20058( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_20058( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_20058( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U182, l_U181 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U182, l_U181 );
        }
    }
    else if (sub_20058( iParam0, 64 ))
    {
        fVar4 = (sub_35996( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_36524( iParam0->_fU4 ))
    {
        uVar6 = {sub_36674( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_35996(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_22315( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_21681( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_36524(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

void sub_36674(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

int sub_36950(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_20058( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_27786( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if ((((sub_14638( iParam0 + 0 )) == 1) AND (iVar4 == sub_3854())) || ((sub_14638( ref iVar4 )) == (sub_14638( iParam0 + 0 ))))
                {
                    sub_18718( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_37207(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_37245( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_25013( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_27786( iParam0 )) == iParam0->_fU4)
        {
            if (sub_31750( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_31750( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if (((NOT (IS_CHAR_INJURED( iVar3 ))) AND (iVar3 == iParam0->_fU8)) || (iVar3 == sub_3854()))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_14638( iParam0 + 0 )) == (sub_14638( ref iVar3 )))
            {
                return 0;
            }
        }
        if (((sub_22315( iParam0->_fU0, sub_3854(), 1 )) < 90.00000000) || ((IS_CAR_ON_SCREEN( iParam0->_fU4 )) || ((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CHAR_IN_CAR( sub_3854(), iParam0->_fU4 )))))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_37929( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_31750( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_37245(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_37275( ref uVar5, uParam2 );
}

int sub_37275(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_37300( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_37300( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_37300(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_37929(int iParam0)
{
    if (sub_37943( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_37943(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if ((iVar3 != sub_5876()) AND ((iVar5 < 2) || (iVar4 < 1)))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar3 != sub_5876()) AND (iVar5 < 1))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

int sub_38339(int iParam0)
{
    unknown uVar3;

    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (sub_20058( iParam0, 2 ))))
    {
        return 0;
    }
    uVar3 = sub_34291( sub_21681( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_38453(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (sub_20058( iParam0, 2 ))))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_21681( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_38574(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_35996( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_38874(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_35996( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if (((sub_22315( iParam0->_fU0, sub_3854(), 1 )) > 90.00000000) AND ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_35996( iParam0 )) > 90.00000000)))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((VDIST( sub_21681( sub_3854(), 1 ), uVar4 )) < 30.00000000) || ((IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 )) || (CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 ))))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_39230(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_27786( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_39489(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_3854(), 45.00000000 ))) AND (iVar3 == 7))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3854(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_3854() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_39646(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_18814( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3854() ))) AND (NOT (IS_CHAR_IN_CAR( sub_3854(), iVar4 ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_37245( sub_3854(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_14638( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_3854(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_27613( iParam0, 1, 0 );
            }
        }
    }
    if (((sub_35996( iParam0 )) < 30.00000000) AND (sub_20058( iParam0, 1 )))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((NOT bVar5) AND (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_3854(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_3854())
    {
        if ((IS_CHAR_ON_FOOT( sub_3854() )) AND (IS_CHAR_ON_FOOT( iParam0->_fU0 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_3854(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((((sub_22315( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8) || ((DOES_VEHICLE_EXIST( iVar4 )) || ((IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 )) || (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 ))))) AND (NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((iParam0->_fU4 == iVar4) || (sub_18838( iParam0->_fU8, iParam0->_fU4 )))
            {
                if ((sub_40332( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_36950( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_38339( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_41399( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_41810( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_38574( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_39489( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if (((sub_14638( iParam0 + 0 )) == 1) AND (sub_18838( sub_3854(), iParam0->_fU4 )))
            {
                if ((sub_36950( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_38339( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_41399( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_41810( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_38574( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_39489( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_42636( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_42785( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37207( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36950( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_38339( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_41810( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_40332( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_41399( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_38574( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_39489( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_42636( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_37207( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36950( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_40332( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38339( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38453( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_41399( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_41810( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38574( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_39489( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_14638( iParam0 + 0 )) == 1) AND ((iParam0->_fU8 != sub_3854()) AND (sub_37245( sub_3854(), iParam0->_fU0, 1 ))))
    {
        sub_18718( iParam0, sub_3854() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_27775( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37207( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36950( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_41810( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_40671( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_38574( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_38339( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_38453( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_41399( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )) || (NOT (sub_20058( iParam0, 1 ))))
        {
            if ((sub_27775( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37207( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36950( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_41810( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_42636( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_40671( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38574( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_39489( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))) AND (sub_20058( iParam0, 1 )))
    {
        if ((sub_42636( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_40671( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38574( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_27613( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_27775( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_42636( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_27775( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_37207( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_36950( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_40332( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_38339( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_41810( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_41399( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_40671( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_38574( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_39489( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_40332(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_40461( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_36674( uVar3, 1 )};
    uVar8 = {sub_21681( iParam0->_fU0, 1 )};
    uVar11 = {sub_21681( sub_3854(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_35996( iParam0 )) > 30.00000000)
        {
            sub_37929( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_35996( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_40671( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if (((VDIST( uVar11, uVar8 )) < 30.00000000) || (((VDIST( uVar11, uVar5 )) < 30.00000000) || ((IS_CAR_ON_SCREEN( uVar3 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_40461(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_40671(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_37943( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_37245( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_22315( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_41399(int iParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT (sub_20058( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_24913( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if (((sub_31793( iParam0 )) > 30.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_16935( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_31750( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

int sub_41810(int iParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((IS_CHAR_INJURED( iVar3 )) || (iVar3 == iParam0->_fU0))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_18718( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_21681( sub_3854(), 1 )};
        uVar7 = {sub_21681( iParam0->_fU0, 1 )};
        uVar10 = {sub_36674( iParam0->_fU4, 1 )};
        if (((VDIST( uVar4, uVar7 )) < 30.00000000) || (((VDIST( uVar4, uVar10 )) < 30.00000000) || ((IS_CAR_ON_SCREEN( iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if (((sub_14638( ref iVar3 )) == (sub_14638( iParam0 + 0 ))) || (iVar3 == sub_3854()))
            {
                iVar14 = sub_40461( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_31750( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_42636(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if (((sub_35996( iParam0 )) < 30.00000000) AND ((IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 )) || ((IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 )) || (IS_PED_IN_COMBAT( iParam0->_fU0 )))))
    {
        return 2;
    }
    return 0;
}

int sub_42785(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_27786( iParam0 )) != iParam0->_fU4)
    {
        if (sub_31750( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_31750( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_31750( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) AND (CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_37929( iParam0 );
    iVar8 = 2;
    if (sub_20058( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_35996( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_3854() )) AND (iParam0->_fU8 == sub_3854()))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_5225(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_CAR( uVar11 )) || (IS_THIS_MODEL_A_BIKE( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_21681( sub_3854(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_43303( iParam0, uVar12 );
            }
            else
            {
                return sub_27775( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar6 < 9.00000000) AND (fVar4 < 2.50000000))
        {
            return sub_27775( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_27775( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_3854())
                {
                    if ((fVar6 < 3.00000000) || (((iParam0->_fU40 == 3) AND (fVar6 < 5.00000000)) || ((iParam0->_fU40 == 2) AND (fVar6 < 6.00000000))))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_43784())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)) AND (IS_THIS_MODEL_A_CAR( uVar11 )))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((iParam0->_fU40 == 2) AND (fVar6 < 4.00000000))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_31793( iParam0 )) >= l_U133) AND ((sub_20058( iParam0, 4 )) || (sub_36524( iParam0->_fU4 ))))
        {
            bVar9 = sub_44054( iParam0, l_U133, l_U134, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_20058( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((NOT (iParam0->_fU12 == nil)) AND (iParam0->_fU8 != iParam0->_fU12)) || (((iParam0->_fU96 != 11) AND ((iParam0->_fU96 != 12) AND ((iParam0->_fU96 != 10) AND (iParam0->_fU96 != 7)))) || (((iParam0->_fU40 != 3) AND (iParam0->_fU96 == 7)) || (((iParam0->_fU40 != 1) AND (iParam0->_fU96 == 11)) || (((iParam0->_fU40 != 2) AND (iParam0->_fU96 == 12)) || (((iParam0->_fU40 != 0) AND (iParam0->_fU96 == 10)) || (iVar3 == 7)))))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_20058( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_27775( iParam0 );
        }
        else if (((NOT (iParam0->_fU12 == nil)) AND (iParam0->_fU8 != iParam0->_fU12)) || (((iParam0->_fU96 != 11) AND ((iParam0->_fU96 != 12) AND ((iParam0->_fU96 != 10) AND (iParam0->_fU96 != 7)))) || (((iParam0->_fU40 != 3) AND (iParam0->_fU96 == 7)) || (((iParam0->_fU40 != 1) AND (iParam0->_fU96 == 11)) || (((iParam0->_fU40 != 2) AND (iParam0->_fU96 == 12)) || (((iParam0->_fU40 != 0) AND (iParam0->_fU96 == 10)) || (iVar3 == 7)))))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_20058( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_45498( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_43303(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_43345( iParam0, 64 );
    Result = sub_35899( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

void sub_43345(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam1) || (iParam0->_fU88);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

boolean sub_43784()
{
    return (IS_CONTROL_PRESSED( 0, 45 )) || ((IS_CONTROL_PRESSED( 0, 44 )) || (IS_CONTROL_PRESSED( 0, 41 )));
}

int sub_44054(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((VDIST2( uVar15, vVar6 )) > 9.00000000) AND (((VDIST( uVar15, sub_21681( sub_3854(), 1 ) )) > fParam2) AND (NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 )))))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 > 315.00000000) || (fVar20 < 45.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_45498(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_46866(unknown uParam0)
{
    sub_19299( uParam0, 2 );
    return;
}

void sub_46951(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_20058( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_37245( sub_3854(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3854(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_43345( iParam0, 256 );
        }
    }
    else if (sub_20058( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_20045( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_47581(unknown uParam0, int iParam1, boolean bParam2)
{
    int I;
    int[10] iVar6;
    boolean bVar17;
    int iVar18;
    int iVar19;
    unknown uVar20;
    unknown[2] uVar21;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown[2] uVar28;
    int[2] iVar31;
    int J;
    float fVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    float[2] fVar39;
    unknown[2] uVar42;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    int iVar49;
    int iVar50;
    float fVar51;
    unknown[2] uVar52;

    if (l_U135 < 1.20000000)
    {
        l_U135 += 1.00000000 * TIMESTEP();
        return;
    }
    else
    {
        l_U135 = 0.00000000;
    }
    if (iParam1 == -2)
    {
        bParam2 = false;
    }
    array(ref iVar6, 10);
    iVar18 = 0;
    array(ref uVar21, 2);
    array(ref uVar28, 2);
    array(ref iVar31, 2);
    array(ref fVar39, 2);
    array(ref uVar42, 2);
    switch (iParam1)
    {
        case -1:
        return;
        break;
        case -2:
        iVar19 = sub_3854();
        break;
        default:
        iVar19 = (uParam0^)[iParam1]._fU0;
        iVar6[iParam1] = 1;
        iVar18++;
        break;
    }
    if (IS_CHAR_INJURED( iVar19 ))
    {
        return;
    }
    if (IS_CHAR_IN_ANY_CAR( iVar19 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iVar19, ref uVar20 );
        if (NOT (IS_VEH_DRIVEABLE( uVar20 )))
        {
            return;
        }
    }
    else
    {
        return;
    }
    GET_DRIVER_OF_CAR( uVar20, ref iVar50 );
    if (iVar19 != iVar50)
    {
        return;
    }
    GET_CHAR_SPEED( iVar19, ref fVar51 );
    if (fVar51 < 3.00000000)
    {
        return;
    }
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar20, -2.50000000, 0.00000000, 0.00000000, ref uVar21[0]._fU0, ref uVar21[0]._fU4, ref uVar21[0]._fU8 );
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar20, 2.50000000, 0.00000000, 0.00000000, ref uVar21[1]._fU0, ref uVar21[1]._fU4, ref uVar21[1]._fU8 );
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT iVar6[I])
        {
            if (((uParam0^)[I]._fU36 != 1) || (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
            {
                iVar6[I] = 1;
                iVar18++;
            }
            else if ((sub_27786( ref (uParam0^)[I] )) != (uParam0^)[I]._fU4)
            {
                iVar6[I] = 1;
                iVar18++;
            }
        }
    }
    array(ref uVar52, 2);
    for ( I = 0; I < 2; I++ )
    {
        iVar31[I] = -1;
        uVar52[I] = sub_48180( uParam0, ref uVar21[I], ref iVar6, (NOT bParam2) || (bVar17) );
        if (uVar52[I] >= 0)
        {
            fVar39[I] = VDIST( sub_21681( (uParam0^)[uVar52[I]]._fU0, 1 ), uVar21[I] );
        }
        else if (uVar52[I] == -2)
        {
            fVar39[I] = VDIST( sub_21681( sub_3854(), 1 ), uVar21[I] );
        }
    }
    if (uVar52[0] == uVar52[1])
    {
        if (fVar39[0] < fVar39[1])
        {
            J = 0;
        }
        else
        {
            J = 1;
        }
        if (uVar52[J] >= 0)
        {
            iVar31[J] = uVar52[J];
            iVar6[uVar52[J]] = 1;
            iVar18++;
        }
        else if ((bParam2) AND (uVar52[J] == -2))
        {
            iVar31[J] = -2;
            bVar17 = true;
        }
        J = (J + 1) mod 2;
        uVar52[J] = sub_48180( uParam0, ref uVar21[J], ref iVar6, (NOT bParam2) || (bVar17) );
        if (uVar52[J] >= 0)
        {
            fVar39[J] = VDIST( sub_21681( (uParam0^)[uVar52[J]]._fU0, 1 ), uVar21[J] );
            iVar31[J] = uVar52[J];
            iVar6[uVar52[J]] = 1;
            iVar18++;
        }
        else if (uVar52[J] == -2)
        {
            fVar39[J] = VDIST( sub_21681( sub_3854(), 1 ), uVar21[J] );
            iVar31[J] = -2;
            bVar17 = true;
        }
    }
    else
    {
        for ( J = 0; J < 2; J++ )
        {
            if (uVar52[J] >= 0)
            {
                iVar31[J] = uVar52[J];
                iVar6[uVar52[J]] = 1;
                iVar18++;
            }
            else if ((bParam2) AND (uVar52[J] == -2))
            {
                iVar31[J] = -2;
                bVar17 = true;
            }
        }
    }
    if (iVar31[0] >= 0)
    {
        sub_18718( ref (uParam0^)[iVar31[0]], iVar19 );
        (uParam0^)[iVar31[0]]._fU40 = 0;
    }
    if (iVar31[1] >= 0)
    {
        sub_18718( ref (uParam0^)[iVar31[1]], iVar19 );
        (uParam0^)[iVar31[1]]._fU40 = 1;
    }
    while (iVar18 < (uParam0^))
    {
        for ( J = 0; J < 2; J++ )
        {
            if (((iVar31[J] == -2) AND (bParam2)) || (iVar31[J] >= 0))
            {
                fVar39[J] = 99999.00000000;
                iVar49 = -1;
                for ( I = 0; I < (uParam0^); I++ )
                {
                    if (NOT iVar6[I])
                    {
                        uVar36 = {sub_21681( (uParam0^)[I]._fU0, 1 )};
                        if ((iVar31[J] == -2) AND (bParam2))
                        {
                            uVar21[J] = {sub_21681( sub_3854(), 1 )};
                        }
                        else
                        {
                            uVar21[J] = {sub_21681( (uParam0^)[iVar31[J]]._fU0, 1 )};
                        }
                        fVar35 = VDIST( uVar36, uVar21[J] );
                        if (fVar35 < fVar39[J])
                        {
                            fVar39[J] = fVar35;
                            uVar42[J] = {uVar36};
                            iVar49 = I;
                        }
                    }
                }
                if ((NOT bVar17) AND (bParam2))
                {
                    uVar36 = {sub_21681( sub_3854(), 1 )};
                    uVar21[J] = {sub_21681( (uParam0^)[iVar31[J]]._fU0, 1 )};
                    fVar35 = (VDIST( uVar36, uVar21[J] )) - 5.00000000;
                    if (fVar35 < fVar39[J])
                    {
                        fVar39[J] = fVar35;
                        uVar42[J] = {uVar36};
                        iVar49 = -2;
                    }
                }
                if (iVar49 >= 0)
                {
                    uVar28[J] = iVar31[J];
                    iVar31[J] = iVar49;
                    iVar6[iVar49] = 1;
                    iVar18++;
                }
                else if ((iVar49 == -2) AND (bParam2))
                {
                    uVar28[J] = iVar31[J];
                    iVar31[J] = iVar49;
                    bVar17 = true;
                }
                else
                {
                    uVar28[J] = iVar31[J];
                    iVar31[J] = -1;
                }
            }
        }
        if ((((iVar31[1] == -2) || (iVar31[1] >= 0)) AND (((iVar31[0] == -2) || (iVar31[0] >= 0)) AND (bParam2))) || ((iVar31[1] >= 0) AND (iVar31[0] >= 0)))
        {
            if (sub_49967( uVar21[0]._fU0, uVar21[0]._fU4, uVar42[0]._fU0, uVar42[0]._fU4, uVar21[1]._fU0, uVar21[1]._fU4, uVar42[1]._fU0, uVar42[1]._fU4 ))
            {
                J = iVar31[0];
                iVar31[0] = iVar31[1];
                iVar31[1] = J;
            }
        }
        for ( J = 0; J < 2; J++ )
        {
            if (iVar31[J] >= 0)
            {
                if (uVar28[J] >= 0)
                {
                    sub_18718( ref (uParam0^)[iVar31[J]], (uParam0^)[uVar28[J]]._fU0 );
                    (uParam0^)[iVar31[J]]._fU40 = 2;
                }
                else if ((uVar28[J] == -2) AND (bParam2))
                {
                    sub_18718( ref (uParam0^)[iVar31[J]], sub_3854() );
                    (uParam0^)[iVar31[J]]._fU40 = 2;
                }
            }
        }
    }
    return;
}

void sub_48180(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int I;
    float fVar7;
    int Result;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;

    fVar7 = 99999.00000000;
    Result = -1;
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (uParam2^)[I])
        {
            uVar9 = {sub_21681( (uParam0^)[I]._fU0, 1 )};
            fVar12 = VDIST( uVar9, (uParam1^) );
            if (fVar12 < fVar7)
            {
                fVar7 = fVar12;
                Result = I;
            }
        }
    }
    if (NOT bParam3)
    {
        uVar9 = {sub_21681( sub_3854(), 1 )};
        fVar12 = (VDIST( uVar9, (uParam1^) )) - 5.00000000;
        if (fVar12 < fVar7)
        {
            fVar7 = fVar12;
            Result = -2;
        }
    }
    return Result;
}

int sub_49967(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar10 = uParam1 - uParam5;
    fVar11 = uParam0 - uParam4;
    fVar12 = ((uParam2 - uParam0) * (uParam7 - uParam5)) - ((uParam3 - uParam1) * (uParam6 - uParam4));
    if (fVar12 != 0.00000000)
    {
        fVar13 = ((fVar10 * (uParam6 - uParam4)) - (fVar11 * (uParam7 - uParam5))) / fVar12;
        fVar14 = ((fVar10 * (uParam2 - uParam0)) - (fVar11 * (uParam3 - uParam1))) / fVar12;
        if ((fVar14 <= 1.00000000) AND ((fVar14 >= 0.00000000) AND ((fVar13 <= 1.00000000) AND (fVar13 >= 0.00000000))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_50502(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if ((VDIST2( uParam1, iParam0->_fU16 )) > 1.00000000)
        {
            TASK_PAUSE( iParam0->_fU0, 30 );
        }
        else if (((VDIST( iParam0->_fU16, sub_21681( iParam0->_fU0, 1 ) )) < 12.00000000) AND (iParam0->_fU36 == 4))
        {
            return;
        }
        else if (iParam0->_fU36 != 2)
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar7 );
            if (iVar7 != 7)
            {
                TASK_PAUSE( iParam0->_fU0, 30 );
            }
        };;;
    }
    if (iParam0->_fU28 < 0.01000000)
    {
        iParam0->_fU28 = 28.00000000;
    }
    iParam0->_fU36 = 2;
    iParam0->_fU16 = {uParam1};
    switch (uParam4)
    {
        case 0:
        sub_20045( iParam0, 32 );
        sub_20045( iParam0, 64 );
        break;
        case 1:
        sub_20045( iParam0, 32 );
        sub_43345( iParam0, 64 );
        sub_43345( iParam0, 1 );
        break;
        case 2:
        sub_20045( iParam0, 32 );
        sub_43345( iParam0, 64 );
        sub_20045( iParam0, 1 );
        break;
        case 3:
        sub_43345( iParam0, 32 );
        sub_20045( iParam0, 64 );
        break;
    }
    return;
}

void sub_52086(unknown uParam0, unknown uParam1)
{
    if ((NOT (IS_CHAR_INJURED( sub_3854() ))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        if ((uParam1^) >= 2.00000000)
        {
            if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( uParam0, sub_3854() ))
            {
                TASK_LOOK_AT_CHAR( uParam0, sub_3854(), -2, 0 );
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( uParam0, sub_3854() );
            }
            (uParam1^) = 0.00000000;
        }
        else
        {
            (uParam1^) += 1.00000000 * TIMESTEP();
        }
    }
    return;
}

int sub_52751()
{
    if ((NOT l_U1052) AND ((NOT l_U948) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((NOT sub_52785()) AND ((NOT (sub_30267( l_U933 ))) AND (NOT (sub_30267( l_U939 ))))))))
    {
        return 1;
    }
    return 0;
}

void sub_52785()
{
    return sub_30267( l_U155 );
}

void sub_53185(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_53283(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_53310( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_53310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_28555( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_53419(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_53442( uParam0, ref l_U34._fU0, uParam1, uParam2, uParam3 );
}

int sub_53442(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_28555( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_53619()
{
    int iVar2;

    if ((IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U875 )) AND (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))
    {
        if (sub_30267( l_U933 ))
        {
            if (l_U1042)
            {
                if (g_U39216 == 1)
                {
                    if ((sub_53719( l_U933 )) == 7)
                    {
                        if (NOT l_U1024[0])
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "GIVE_ME_A_BREAK", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                            l_U1024[0] = 1;
                        }
                    }
                }
                else if ((sub_53719( l_U933 )) == 10)
                {
                    if (NOT l_U1024[1])
                    {
                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "PISS_OFF", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        l_U1024[1] = 1;
                    }
                }
                else if ((sub_53719( l_U933 )) == 17)
                {
                    if (NOT l_U1024[2])
                    {
                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "GOD_DAMN", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        l_U1024[2] = 1;
                    }
                };;;
                if (((sub_53719( l_U933 )) != 17) AND (((sub_53719( l_U933 )) != 10) AND (((sub_53719( l_U933 )) != 7) AND (IS_SCRIPTED_SPEECH_PLAYING( l_U708[0]._fU0 )))))
                {
                    if (l_U1087 == 0)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
                        if (iVar2 <= 10)
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_LEFT_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 45) AND (iVar2 > 10))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_LEFT_B", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 55) AND (iVar2 > 45))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_RIGHT_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 90) AND (iVar2 > 55))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_RIGHT_B", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_CENTRE_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        };;;;
                        l_U1087 = 1;
                    }
                }
                else if (l_U1087 == 1)
                {
                    l_U1087 = 0;
                }
            }
            else if (l_U1039)
            {
                if (g_U39215 == 1)
                {
                    if ((sub_53719( l_U933 )) == 18)
                    {
                        if (NOT l_U1024[3])
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "WHATEVER", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                            l_U1024[3] = 1;
                        }
                    }
                    else if ((sub_53719( l_U933 )) == 25)
                    {
                        if (NOT l_U1024[4])
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "GOD_DAMN", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                            l_U1024[4] = 1;
                        }
                    }
                    else if ((sub_53719( l_U933 )) == 28)
                    {
                        if (NOT l_U1024[5])
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "PISS_OFF", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                            l_U1024[5] = 1;
                        }
                    };;;
                }
                else if ((sub_53719( l_U933 )) == 21)
                {
                    if (NOT l_U1024[6])
                    {
                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "GIVE_ME_A_BREAK", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        l_U1024[6] = 1;
                    }
                }
                if (((sub_53719( l_U933 )) != 21) AND (((sub_53719( l_U933 )) != 28) AND (((sub_53719( l_U933 )) != 25) AND (((sub_53719( l_U933 )) != 18) AND (IS_SCRIPTED_SPEECH_PLAYING( l_U708[0]._fU0 ))))))
                {
                    if (l_U1087 == 0)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
                        if (iVar2 <= 10)
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_LEFT_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 45) AND (iVar2 > 10))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_LEFT_B", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 55) AND (iVar2 > 45))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_RIGHT_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 90) AND (iVar2 > 55))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_RIGHT_B", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_CENTRE_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        };;;;
                        l_U1087 = 1;
                    }
                }
                else if (l_U1087 == 1)
                {
                    l_U1087 = 0;
                }
            }
            else if (l_U1035)
            {
                if (g_U39214 == 1)
                {
                    if ((sub_53719( l_U933 )) == 9)
                    {
                        if (NOT l_U1024[7])
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "GOD_DAMN", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                            l_U1024[7] = 1;
                        }
                    }
                }
                else if ((sub_53719( l_U933 )) == 5)
                {
                    if (NOT l_U1024[8])
                    {
                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "WHATEVER", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        l_U1024[8] = 1;
                    }
                }
                if (((sub_53719( l_U933 )) != 9) AND (((sub_53719( l_U933 )) != 5) AND (IS_SCRIPTED_SPEECH_PLAYING( l_U708[0]._fU0 ))))
                {
                    if (l_U1087 == 0)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar2 );
                        if (iVar2 <= 10)
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_LEFT_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 45) AND (iVar2 > 10))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_LEFT_B", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 55) AND (iVar2 > 45))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_RIGHT_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else if ((iVar2 <= 90) AND (iVar2 > 55))
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_RIGHT_B", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_CENTRE_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        };;;;
                        l_U1087 = 1;
                    }
                }
                else if (l_U1087 == 1)
                {
                    l_U1087 = 0;
                }
            };;;
        }
        if ((NOT (sub_53185( l_U933 ))) AND (sub_52751()))
        {
            if (IS_CAR_STOPPED( l_U875 ))
            {
                if (l_U1189 >= 6.00000000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U708[1]._fU0 )))
                    {
                        if (l_U1084 == 0)
                        {
                            sub_28478( "E1B1_JSTOP", ref l_U939, 7, 1 );
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U1149 );
                            switch (l_U1149)
                            {
                                case 0:
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "GIVE_ME_A_BREAK", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                break;
                                case 1:
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "GOD_DAMN", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                break;
                                case 2:
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "PISS_OFF", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                break;
                                case 3:
                                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "WHATEVER", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                break;
                            }
                            l_U1084 = 1;
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref l_U1149 );
                            if (l_U1149 > 50)
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U708[1]._fU0 )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U708[1]._fU0, "GET_A_MOVE_ON", 1, 1, 2 );
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U1149 );
                                    switch (l_U1149)
                                    {
                                        case 0:
                                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "GIVE_ME_A_BREAK", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                        case 1:
                                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "GOD_DAMN", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                        case 2:
                                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "PISS_OFF", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                        case 3:
                                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "WHATEVER", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 )))
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U708[0]._fU0 )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U708[0]._fU0, "GET_A_MOVE_ON", 1, 1, 2 );
                                }
                            }
                        }
                    }
                    l_U1189 = 0.00000000;
                }
                else
                {
                    l_U1189 += 1.00000000 * TIMESTEP();
                }
            }
            else
            {
                l_U1189 = 0.00000000;
            }
        }
        else
        {
            l_U1189 = 0.00000000;
        }
        if ((NOT (sub_30267( l_U939 ))) AND ((sub_30267( l_U933 )) || (NOT IS_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U1046)
            {
                for ( l_U1148 = 0; l_U1148 < 6; l_U1148++ )
                {
                    if (l_U1148 > 0)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), l_U708[l_U1148]._fU0, 32, 32, 32, 0 ))
                        {
                            l_U1073 = 0;
                        }
                    }
                }
                if (l_U1073)
                {
                    if (l_U1075 == 0)
                    {
                        if (sub_30267( l_U933 ))
                        {
                            sub_57319( ref l_U933 );
                        }
                        l_U1076 = 1;
                        l_U1075 = 1;
                    }
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U708[0]._fU0, -497.92620000, 1747.81500000, 7.52390000, 50, 50, 50, 0 ))) AND ((NOT (sub_30267( l_U933 ))) AND (l_U1075 == 1)))
                    {
                        sub_28478( "E1B1_AHEAD", ref l_U939, 7, 1 );
                        TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "GOD_DAMN", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                        l_U1076 = 0;
                        l_U1046 = 1;
                    }
                }
            }
            if ((NOT (sub_30267( l_U933 ))) AND ((l_U1074 == 0) AND (l_U1153 < l_U1154)))
            {
                if (sub_30267( l_U933 ))
                {
                    l_U1159 = sub_53719( l_U933 );
                    sub_57948( ref l_U933 );
                    l_U1077 = 1;
                }
                l_U1076 = 1;
                l_U1074 = 1;
            }
            if ((NOT (sub_30267( l_U933 ))) AND (l_U1074 == 1))
            {
                sub_28478( "E1B1_KNOCK", ref l_U939, 7, 1 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U1149 );
                switch (l_U1149)
                {
                    case 0:
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "Shunt_Gest_01", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                    break;
                    case 1:
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "Shunt_Gest_02", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                    break;
                }
                l_U1076 = 0;
                l_U1074 = 0;
            }
        }
    }
    return;
}

void sub_53719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_30267( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

int sub_57319(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_28654( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_28654( "\n CONVERSATION PAUSED AT LINE " );
            sub_57459( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_28654( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_28654( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_28654( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_57459(unknown uParam0)
{
    return;
}

int sub_57948(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_28654( "\n already paused" );
    }
    else if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_28654( "\n CONVERSATION PAUSED AT LINE " );
            sub_57459( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_28654( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_28654( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_28654( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_58619()
{
    if (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 ))
    {
        if (NOT (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U875 )))
        {
            if (NOT l_U1019)
            {
                if (IS_PED_RAGDOLL( l_U708[0]._fU0 ))
                {
                    if (sub_30267( l_U933 ))
                    {
                        if (NOT (sub_53185( l_U933 )))
                        {
                            l_U1159 = sub_53719( l_U933 );
                            sub_57948( ref l_U933 );
                            l_U1077 = 1;
                        }
                    }
                    sub_28478( "E1B1_BOFF", ref l_U939, 7, 1 );
                }
                l_U1019 = 1;
            }
        }
        else if (l_U1019)
        {
            l_U1019 = 0;
        }
    }
    else if (NOT l_U1019)
    {
        l_U1019 = 1;
    }
    return;
}

void sub_58857()
{
    if (NOT l_U1052)
    {
        if (IS_VEH_DRIVEABLE( l_U875 ))
        {
            if (NOT l_U948)
            {
                if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))
                {
                    if (sub_30267( l_U933 ))
                    {
                        if (NOT (sub_53185( l_U933 )))
                        {
                            l_U1159 = sub_53719( l_U933 );
                            sub_57948( ref l_U933 );
                            l_U1077 = 1;
                        }
                    }
                    if (NOT sub_58993())
                    {
                        if (DOES_BLIP_EXIST( l_U898 ))
                        {
                            REMOVE_BLIP( l_U898 );
                        }
                        if (DOES_BLIP_EXIST( l_U899 ))
                        {
                            REMOVE_BLIP( l_U899 );
                        }
                        if (DOES_BLIP_EXIST( l_U900 ))
                        {
                            REMOVE_BLIP( l_U900 );
                        }
                        if (DOES_BLIP_EXIST( l_U901 ))
                        {
                            REMOVE_BLIP( l_U901 );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U902 )))
                        {
                            ADD_BLIP_FOR_CAR( l_U875, ref l_U902 );
                            SET_BLIP_AS_FRIENDLY( l_U902, 1 );
                        }
                        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))) AND (NOT l_U950)))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), l_U708[0]._fU0, 20, 20, 20, 0 ))
                            {
                                if (IS_PED_RAGDOLL( sub_3854() ))
                                {
                                    if (l_U703 == 7)
                                    {
                                        if (DOES_GROUP_EXIST( l_U919 ))
                                        {
                                            if (IS_GROUP_MEMBER( l_U708[0]._fU0, l_U919 ))
                                            {
                                                sub_28478( "E1B1_FALL2", ref l_U939, 7, 1 );
                                            }
                                        }
                                    }
                                    else if (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() ))
                                    {
                                        sub_28478( "E1B1_FALL", ref l_U939, 7, 1 );
                                    }
                                }
                                else if (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U875 ))
                                {
                                    sub_28478( "E1B1_OFF", ref l_U939, 7, 1 );
                                }
                            }
                        }
                        l_U948 = 1;
                    }
                }
                else if (l_U703 == 7)
                {
                    if (NOT l_U954)
                    {
                        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((NOT sub_52785()) AND ((NOT (sub_30267( l_U933 ))) AND ((NOT (sub_30267( l_U939 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), l_U708[0]._fU0, 200, 200, 200, 0 )))))))
                        {
                            PRINT_NOW( "B1_RIDECLOSE", 7500, 1 );
                            l_U954 = 1;
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), l_U708[0]._fU0, 40, 40, 40, 0 ))
                    {
                        l_U954 = 0;
                    }
                }
            }
            else if (sub_59808( l_U875 ))
            {
                l_U707 = 10;
                sub_7198();
            }
            if (NOT l_U949)
            {
                if (NOT (sub_30267( l_U939 )))
                {
                    if (NOT l_U951)
                    {
                        PRINT_NOW( "B1_GETONBIKE", 7500, 1 );
                        l_U951 = 1;
                    }
                    else
                    {
                        CLEAR_THIS_PRINT( "B1_GETONBIKE" );
                    }
                    l_U949 = 1;
                }
            }
            if (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 ))
            {
                if ((l_U703 == 7) || (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() )))
                {
                    sub_60172();
                }
                if (DOES_BLIP_EXIST( l_U902 ))
                {
                    REMOVE_BLIP( l_U902 );
                }
                l_U949 = 0;
                l_U948 = 0;
            }
        }
    }
    return;
}

int sub_58993()
{
    switch (l_U703)
    {
        case 1:
        if (LOCATE_CAR_3D( l_U875, l_U1098._fU0, l_U1098._fU4, l_U1098._fU8, 10, 10, 10, 0 ))
        {
            return 1;
        }
        break;
        case 3:
        if (LOCATE_CAR_3D( l_U875, l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, 10, 10, 10, 0 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_59808(unknown uParam0)
{
    int iVar3;

    if (g_U9549 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3854(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3854(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3854(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U9) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U9 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U9 );
            }
        }
    }
    return 0;
}

void sub_60172()
{
    switch (l_U703)
    {
        case 1:
        CLEAR_PRINTS();
        ADD_BLIP_FOR_COORD( l_U1098._fU0, l_U1098._fU4, l_U1098._fU8, ref l_U898 );
        SET_ROUTE( l_U898, 1 );
        if (NOT l_U1047)
        {
            l_U1047 = 1;
        }
        break;
        case 3:
        l_U952 = 1;
        CLEAR_PRINTS();
        if (NOT (DOES_BLIP_EXIST( l_U899 )))
        {
            ADD_BLIP_FOR_COORD( l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, ref l_U899 );
            SET_ROUTE( l_U899, 1 );
        }
        if (NOT l_U1048)
        {
            l_U1048 = 1;
        }
        if (NOT l_U1038)
        {
            l_U1038 = 1;
        }
        if (NOT l_U1037)
        {
            l_U1037 = 1;
        }
        break;
        case 5:
        CLEAR_PRINTS();
        ADD_BLIP_FOR_COORD( l_U1092._fU0, l_U1092._fU4, l_U1092._fU8, ref l_U900 );
        SET_ROUTE( l_U900, 1 );
        if (NOT l_U1049)
        {
            l_U1049 = 1;
        }
        break;
        case 7:
        if ((NOT l_U1054) AND ((IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )) AND ((NOT l_U1051) AND ((NOT l_U1053) AND (sub_30267( l_U939 ))))))
        {
            l_U1053 = 1;
        }
        else
        {
            CLEAR_THIS_PRINT( "B1_GETONBIKE" );
            CLEAR_THIS_PRINT( "B1_ONBIKEFOL" );
            l_U1051 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U901 )))
        {
            ADD_BLIP_FOR_CHAR( l_U708[0]._fU0, ref l_U901 );
            SET_BLIP_AS_FRIENDLY( l_U901, 1 );
        }
        break;
    }
    return;
}

void sub_60735()
{
    sub_60744();
    if ((sub_58993()) || (NOT l_U948))
    {
        if (NOT l_U1052)
        {
            if (NOT (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() )))
            {
                if (DOES_BLIP_EXIST( l_U898 ))
                {
                    REMOVE_BLIP( l_U898 );
                }
                if (DOES_BLIP_EXIST( l_U899 ))
                {
                    REMOVE_BLIP( l_U899 );
                }
                if (DOES_BLIP_EXIST( l_U900 ))
                {
                    REMOVE_BLIP( l_U900 );
                }
                if (DOES_BLIP_EXIST( l_U902 ))
                {
                    REMOVE_BLIP( l_U902 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U901 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U708[0]._fU0, ref l_U901 );
                    SET_BLIP_AS_FRIENDLY( l_U901, 1 );
                }
                PRINT_NOW( "B1_GETBILLY", 7500, 1 );
                l_U1052 = 1;
            }
        }
        else if (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 ))
        {
            if (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U875 ))
            {
                if (DOES_BLIP_EXIST( l_U901 ))
                {
                    REMOVE_BLIP( l_U901 );
                }
                l_U952 = 0;
                sub_60172();
                l_U948 = 0;
                l_U949 = 0;
                l_U1052 = 0;
            }
        }
        else if (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() ))
        {
            l_U951 = 0;
            l_U949 = 0;
            l_U1052 = 0;
            l_U952 = 0;
            if (DOES_BLIP_EXIST( l_U901 ))
            {
                REMOVE_BLIP( l_U901 );
            }
            if (NOT sub_58993())
            {
                if (NOT (DOES_BLIP_EXIST( l_U902 )))
                {
                    ADD_BLIP_FOR_CAR( l_U875, ref l_U902 );
                    SET_BLIP_AS_FRIENDLY( l_U902, 1 );
                }
                l_U948 = 1;
            }
            else
            {
                l_U948 = 0;
                sub_60172();
            }
        };;;
    }
    return;
}

void sub_60744()
{
    if (NOT (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() )))
    {
        if (NOT l_U1020)
        {
            if (IS_CHAR_IN_WATER( l_U708[0]._fU0 ))
            {
                SET_CHAR_DROWNS_IN_WATER( l_U708[0]._fU0, 1 );
                SET_CHAR_HEALTH( l_U708[0]._fU0, 110 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U708[0]._fU0, 5.00000000 );
                l_U1020 = 1;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), l_U708[0]._fU0, 12.00000000, 12.00000000, 12.00000000, 0 ))
        {
            if ((IS_CHAR_IN_CAR( sub_3854(), l_U875 )) || (NOT (IS_CHAR_IN_ANY_CAR( sub_3854() ))))
            {
                GET_CAR_CHAR_IS_USING( sub_3854(), ref l_U880 );
                if ((l_U880 == l_U875) || (l_U880 == nil))
                {
                    CLEAR_CHAR_TASKS( l_U708[0]._fU0 );
                    SET_GROUP_MEMBER( sub_5876(), l_U708[0]._fU0 );
                    SET_GROUP_FORMATION( sub_5876(), 0 );
                    SET_GROUP_FORMATION_SPACING( sub_5876(), 3.00000000 );
                }
            }
        }
    }
    else if ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_3854() )) || (IS_CHAR_IN_ANY_CAR( sub_3854() )))
    {
        GET_CAR_CHAR_IS_USING( sub_3854(), ref l_U880 );
        if (l_U880 != l_U875)
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U708[0]._fU0, l_U875, 25, 25, 25, 0 ))
            {
                GET_CAR_COORDINATES( l_U875, ref l_U1194, ref l_U1195, ref l_U1196 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U708[0]._fU0, l_U1194, l_U1195, l_U1196, 3, -2, 4.00000000 );
            }
            REMOVE_CHAR_FROM_GROUP( l_U708[0]._fU0 );
        }
    }
    return;
}

void sub_61798()
{
    if (NOT (IS_CHAR_INJURED( l_U865 )))
    {
        if (l_U703 != 6)
        {
            if (IS_VEH_DRIVEABLE( l_U708[3]._fU4 ))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U865, l_U708[3]._fU4 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U865, 11, ref l_U932 );
                    if (l_U932 != 1)
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U865, l_U708[3]._fU4, -2, 0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_61948()
{
    int iVar2;
    int iVar3;
    int iVar4;

    if ((l_U1067[2] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), 63808, 354, 24.40000000, 7, 7, 7, 0 )))
    {
        GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( 63808, 354, 24.40000000, 6, 3, 4, ref iVar2 );
        if ((NOT (IS_CHAR_INJURED( sub_3854() ))) AND ((NOT (IS_CHAR_INJURED( iVar2 ))) AND (iVar2 != nil)))
        {
            TASK_LOOK_AT_CHAR( iVar2, sub_3854(), 6000, 0 );
            SAY_AMBIENT_SPEECH( iVar2, "GENERIC_HI", 1, 0, 0 );
            l_U1067[2] = 1;
        }
    }
    if ((l_U1067[1] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), 63814, 357, 24.40000000, 7, 7, 7, 0 )))
    {
        GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( 63814, 357, 24.40000000, 6, 3, 4, ref iVar3 );
        if ((NOT (IS_CHAR_INJURED( sub_3854() ))) AND ((NOT (IS_CHAR_INJURED( iVar3 ))) AND (iVar3 != nil)))
        {
            TASK_LOOK_AT_CHAR( iVar3, sub_3854(), 7000, 0 );
            SAY_AMBIENT_SPEECH( iVar3, "GENERIC_HI", 1, 0, 0 );
            l_U1067[1] = 1;
        }
    }
    if ((l_U1067[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), 63820, 360, 24.40000000, 7, 7, 7, 0 )))
    {
        GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( 63820, 360, 24.40000000, 6, 3, 4, ref iVar4 );
        if ((NOT (IS_CHAR_INJURED( sub_3854() ))) AND ((NOT (IS_CHAR_INJURED( iVar4 ))) AND (iVar4 != nil)))
        {
            TASK_LOOK_AT_CHAR( iVar4, sub_3854(), 5000, 0 );
            SAY_AMBIENT_SPEECH( iVar4, "GENERIC_HI", 1, 0, 0 );
            l_U1067[0] = 1;
        }
    }
    return;
}

int sub_62625(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar6 );
            if (NOT (IS_CAR_DEAD( uVar6 )))
            {
                GET_CAR_MODEL( uVar6, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    GET_CAR_UPRIGHT_VALUE( uVar6, ref fVar5 );
                    if (fVar5 < 0.80000000)
                    {
                        return 0;
                    }
                    else
                    {
                        bParam1 = false;
                    }
                }
            }
        }
    }
    if (sub_7978( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

void sub_62826()
{
    switch (l_U704)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_5225(), 0 );
        sub_3616( ref l_U933, 0 );
        sub_3616( ref l_U939, 0 );
        if (g_U39149[0] < 1)
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 )))
        {
            SET_CHAR_COMPONENT_VARIATION( l_U708[0]._fU0, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( l_U708[0]._fU0, 5, 0, 0 );
        }
        sub_3277();
        CLEAR_PRINTS();
        CLEAR_AREA( l_U1095._fU0, l_U1095._fU4, l_U1095._fU8, 50, 1 );
        EXTINGUISH_FIRE_AT_POINT( l_U1095._fU0, l_U1095._fU4, l_U1095._fU8, 50 );
        CLEAR_WANTED_LEVEL( sub_5225() );
        sub_8373();
        l_U1084 = 0;
        if (DOES_CHAR_EXIST( l_U865 ))
        {
            DELETE_CHAR( ref l_U865 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -812754888 );
        if (NOT (IS_CHAR_INJURED( sub_3854() )))
        {
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                if (IS_CHAR_IN_CAR( sub_3854(), l_U875 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3854(), -1714.04300000, 356.23010000, 24.44400000 );
                }
            }
        }
        if (g_U39149[0] < 1)
        {
            l_U704 = 1;
        }
        else
        {
            l_U704 = 2;
        }
        break;
        case 1:
        LOAD_ADDITIONAL_TEXT( "E1B1AUD", 6 );
        START_CUTSCENE_NOW( "INTROp3" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "INTROp3" );
        l_U704 = 2;
        break;
        case 2:
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 0 );
            }
        }
        sub_11175();
        if (NOT (IS_CHAR_INJURED( sub_3854() )))
        {
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3854(), l_U875 )))
                {
                    WARP_CHAR_INTO_CAR( sub_3854(), l_U875 );
                    GIVE_PED_HELMET_WITH_OPTS( sub_3854(), 0 );
                }
            }
            CLEAR_AREA( -1722.04000000, 360.21570000, 24.94680000, 50, 1 );
            EXTINGUISH_FIRE_AT_POINT( -1722.04000000, 360.21570000, 24.94680000, 50 );
            SET_CHAR_COORDINATES( sub_3854(), -1722.04000000, 360.21570000, 24.94680000 );
            SET_CHAR_HEADING( sub_3854(), 327.12970000 );
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U875 );
            }
        }
        REQUEST_MODEL( -1165777728 );
        while (NOT (HAS_MODEL_LOADED( -1165777728 )))
        {
            WAIT( 0 );
        }
        CREATE_OBJECT( -1165777728, 877.55000000, 1528.01000000, 16.00000000, ref l_U886[0], 1 );
        CREATE_OBJECT( -1165777728, 879.15990000, 1526.75000000, 16.00000000, ref l_U886[1], 1 );
        CREATE_OBJECT( -1165777728, 878.78000000, 1525.59000000, 16.00000000, ref l_U886[2], 1 );
        CREATE_OBJECT( -1165777728, 879.25000000, 1528.65000000, 16.00000000, ref l_U886[3], 1 );
        CREATE_OBJECT( -1165777728, 877.45000000, 1526.73000000, 16.00000000, ref l_U886[4], 1 );
        for ( l_U1148 = 0; l_U1148 < l_U886; l_U1148++ )
        {
            SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U886[l_U1148], 1 );
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (g_U39149[0] == 1)
        {
            LOAD_SCENE( -1722.04000000, 360.21570000, 24.94680000 );
        }
        sub_18697();
        CLEAR_AREA( l_U1098._fU0, l_U1098._fU4, l_U1098._fU8, 200, 1 );
        SWITCH_ROADS_OFF( 63748, 309, -10, 63877, 413, 100 );
        sub_19414( ref l_U708[2], 2 );
        l_U952 = 0;
        l_U951 = 0;
        l_U946 = 0;
        l_U1023 = 0;
        ADD_BLIP_FOR_COORD( l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, ref l_U899 );
        SET_ROUTE( l_U899, 1 );
        SET_GAME_CAM_HEADING( 0 );
        WAIT( 1000 );
        CLEAR_PRINTS();
        SET_PLAYER_CONTROL( sub_5225(), 1 );
        SETTIMERB( 0 );
        g_U39149[0] = 1;
        SET_GAME_CAM_HEADING( 0 );
        if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        l_U703 = 3;
        break;
    }
    return;
}

void sub_64273()
{
    sub_21278( ref l_U708 );
    sub_24134();
    if (NOT l_U1018)
    {
        if (NOT (IS_CHAR_IN_AREA_2D( l_U708[2]._fU0, -1732.16000000, 348.06000000, -1708.35000000, 368.58000000, 0 )))
        {
            sub_19414( ref l_U708[2], 1 );
            SWITCH_ROADS_BACK_TO_ORIGINAL( 63748, 309, -10, 63877, 413, 100 );
            l_U1018 = 1;
        }
    }
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((sub_52751()) AND ((IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U875 )) AND (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))))
    {
        if (NOT l_U1081)
        {
            if ((NOT (sub_30267( l_U939 ))) AND (IS_SCREEN_FADED_IN()))
            {
                sub_28478( "E1B1_OUT", ref l_U939, 7, 1 );
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_RIGHT_B", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                l_U1081 = 1;
            }
        }
        else if ((l_U1081) AND (NOT l_U1037))
        {
            if ((NOT (sub_30267( l_U939 ))) AND (IS_SCREEN_FADED_IN()))
            {
                sub_28478( "E1B1_RIDE", ref l_U939, 7, 1 );
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "P_GEST_CENTRE_A", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
                l_U1037 = 1;
            }
        }
        else if (NOT l_U1038)
        {
            sub_28478( "E1B1_GUANT", ref l_U939, 7, 1 );
            if (NOT (IS_CHAR_INJURED( l_U708[1]._fU0 )))
            {
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[1]._fU0, "PISS_OFF", "MISSBILLY_1", 4.00000000, 0, 0, 0, 0, -1 );
            }
            l_U1038 = 1;
        }
        else if (NOT l_U1048)
        {
            PRINT_NOW( "B1_GOGARAGE", 7500, 1 );
            l_U1048 = 1;
        }
        else if (NOT l_U1039)
        {
            switch (g_U39215)
            {
                case 0:
                sub_28478( "E1B1_B2V1", ref l_U933, 7, 1 );
                break;
                case 1:
                sub_28478( "E1B1_BNT1V2", ref l_U933, 7, 1 );
                break;
            }
            l_U1157 = g_U39215;
            if (g_U39215 < 2)
            {
                g_U39215++;
            }
            l_U1039 = 1;
        }
        else if (sub_53185( l_U933 ))
        {
            switch (l_U1157)
            {
                case 0:
                sub_53419( "E1B1_B2V1", ref l_U933, 7, 1 );
                break;
                case 1:
                sub_53419( "E1B1_BNT1V2", ref l_U933, 7, 1 );
                break;
            }
        }
        else if (NOT l_U1040)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, 25, 25, 6, 0 ))
            {
                sub_3616( ref l_U933, 0 );
                sub_28478( "E1B1_ARR", ref l_U939, 7, 1 );
                l_U1040 = 1;
            }
        };;;;;;;
    }
    if ((l_U1079 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, 150, 150, 100, 0 )))
    {
        REQUEST_MODEL( l_U882 );
        if (HAS_MODEL_LOADED( l_U882 ))
        {
            CREATE_CAR( l_U882, 937.71800000, 1547.97600000, 17.74700000, ref l_U881, 1 );
            SET_CAR_HEADING( l_U881, 313.67040000 );
            SET_CAR_IN_CUTSCENE( l_U881, 1 );
            SUPPRESS_CAR_MODEL( l_U882 );
            l_U1079 = 1;
        }
    }
    sub_53619();
    sub_58619();
    sub_58857();
    sub_60735();
    if ((NOT l_U948) AND (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() )))
    {
        if ((sub_62625( 1, 1 )) AND ((LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), 928.75000000, 1563.16000000, 18.26000000, 2.50000000, 2.50000000, 2.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))))
        {
            if (DOES_BLIP_EXIST( l_U899 ))
            {
                REMOVE_BLIP( l_U899 );
            }
            l_U703 = 4;
        }
    }
    return;
}

void sub_65628()
{
    switch (l_U705)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_5225(), 0 );
        sub_3616( ref l_U933, 0 );
        sub_3616( ref l_U939, 0 );
        if (g_U39149[0] < 2)
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        sub_3277();
        CLEAR_PRINTS();
        CLEAR_AREA( l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, 50, 1 );
        EXTINGUISH_FIRE_AT_POINT( l_U1089._fU0, l_U1089._fU4, l_U1089._fU8, 50 );
        CLEAR_WANTED_LEVEL( sub_5225() );
        sub_8373();
        l_U1084 = 0;
        if (NOT (IS_CHAR_INJURED( sub_3854() )))
        {
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                if (IS_CHAR_IN_CAR( sub_3854(), l_U875 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3854(), 936.65670000, 1570.91200000, 15.74610000 );
                }
            }
        }
        if (g_U39149[0] < 2)
        {
            l_U705 = 1;
        }
        else
        {
            l_U705 = 2;
        }
        break;
        case 1:
        LOAD_ADDITIONAL_TEXT( "E1B1AUD", 6 );
        START_CUTSCENE_NOW( "bg01_ca" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "bg01_ca" );
        l_U705 = 2;
        break;
        case 2:
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 0 );
            }
        }
        sub_11175();
        if (NOT (IS_CHAR_INJURED( sub_3854() )))
        {
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_3854(), l_U875 )))
                {
                    WARP_CHAR_INTO_CAR( sub_3854(), l_U875 );
                    GIVE_PED_HELMET_WITH_OPTS( sub_3854(), 0 );
                }
            }
            CLEAR_AREA( 920.47000000, 1561.55000000, 18, 50, 1 );
            EXTINGUISH_FIRE_AT_POINT( 920.47000000, 1561.55000000, 18, 50 );
            SET_CHAR_COORDINATES( sub_3854(), 920.47000000, 1561.55000000, 18 );
            SET_CHAR_HEADING( sub_3854(), 128 );
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U875 );
            }
        }
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_18697();
        SWITCH_ROADS_BACK_TO_ORIGINAL( 63748, 309, -10, 63877, 413, 100 );
        sub_66403();
        sub_68350();
        STOP_SOUND( l_U1150 );
        if (g_U39149[0] == 2)
        {
            LOAD_SCENE( 920.47000000, 1561.55000000, 18 );
        }
        l_U952 = 0;
        l_U951 = 0;
        l_U946 = 0;
        l_U1023 = 0;
        ADD_BLIP_FOR_COORD( l_U1092._fU0, l_U1092._fU4, l_U1092._fU8, ref l_U900 );
        SET_ROUTE( l_U900, 1 );
        CLEAR_PRINTS();
        SET_PLAYER_CONTROL( sub_5225(), 1 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 1200 );
        g_U39149[0] = 2;
        SET_GAME_CAM_HEADING( 0 );
        if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        if (NOT (IS_CAR_DEAD( l_U881 )))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U881 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U882 );
        DONT_SUPPRESS_CAR_MODEL( l_U882 );
        l_U703 = 5;
        break;
    }
    return;
}

void sub_66403()
{
    REQUEST_MODEL( -2107556865 );
    REQUEST_MODEL( 226415164 );
    REQUEST_MODEL( -1745203402 );
    REQUEST_MODEL( -109692574 );
    LOAD_ALL_OBJECTS_NOW();
    while ((NOT (HAS_MODEL_LOADED( -109692574 ))) || ((NOT (HAS_MODEL_LOADED( -1745203402 ))) || ((NOT (HAS_MODEL_LOADED( 226415164 ))) || (NOT (HAS_MODEL_LOADED( -2107556865 ))))))
    {
        WAIT( 0 );
    }
    for ( l_U1148 = 0; l_U1148 < l_U866; l_U1148++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U1149 );
        switch (l_U1149)
        {
            case 0:
            CREATE_CHAR( 26, -2107556865, l_U1104[l_U1148]._fU0, l_U1104[l_U1148]._fU4, l_U1104[l_U1148]._fU8, ref l_U866[l_U1148], 1 );
            break;
            case 1:
            CREATE_CHAR( 26, 226415164, l_U1104[l_U1148]._fU0, l_U1104[l_U1148]._fU4, l_U1104[l_U1148]._fU8, ref l_U866[l_U1148], 1 );
            break;
        }
        SET_CHAR_HEADING( l_U866[l_U1148], l_U1162[l_U1148] );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U866[l_U1148] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U866[l_U1148], 23 );
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U866[l_U1148], 0 );
        SET_CHAR_KEEP_TASK( l_U866[l_U1148], 1 );
        SET_CHAR_DECISION_MAKER( l_U866[l_U1148], l_U924 );
        if ((l_U1148 == 6) || ((l_U1148 == 4) || ((l_U1148 == 3) || (l_U1148 == 1))))
        {
            SET_COMBAT_DECISION_MAKER( l_U866[l_U1148], l_U929 );
            GIVE_WEAPON_TO_CHAR( l_U866[l_U1148], 26, 30000, 0 );
        }
        else
        {
            SET_COMBAT_DECISION_MAKER( l_U866[l_U1148], l_U927 );
            GIVE_WEAPON_TO_CHAR( l_U866[l_U1148], 7, 30000, 0 );
        }
        if ((l_U1148 == 7) || ((l_U1148 == 5) || ((l_U1148 == 3) || (l_U1148 == 1))))
        {
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U866[l_U1148], 1 );
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U866[l_U1148], 1 );
    }
    sub_6081( 3, l_U866[0], "ANGEL", 0 );
    TASK_CHAT_WITH_CHAR( l_U866[1], l_U866[2], 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U866[2], l_U866[1], 0, 1 );
    TASK_CHAT_WITH_CHAR( l_U866[3], l_U866[4], 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U866[4], l_U866[3], 0, 1 );
    TASK_CHAT_WITH_CHAR( l_U866[6], l_U866[7], 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U866[7], l_U866[6], 0, 1 );
    CREATE_CAR( -1745203402, -477.43000000, 1763.20000000, 8.35000100, ref l_U877[0], 1 );
    SET_CAR_HEADING( l_U877[0], 8 );
    CREATE_CAR( -1745203402, -480.86000000, 1756.95000000, 8.35000100, ref l_U877[1], 1 );
    SET_CAR_HEADING( l_U877[1], 40 );
    for ( l_U1148 = 0; l_U1148 < l_U877; l_U1148++ )
    {
        SET_CAR_ON_GROUND_PROPERLY( l_U877[l_U1148] );
        CHANGE_CAR_COLOUR( l_U877[l_U1148], 0, 0 );
        SET_EXTRA_CAR_COLOURS( l_U877[l_U1148], 0, 0 );
        LOCK_CAR_DOORS( l_U877[l_U1148], 2 );
    }
    CREATE_OBJECT( -109692574, -484.46000000, 1774.65000000, 7.65000000, ref l_U883[0], 1 );
    CREATE_OBJECT( -109692574, -510.36000000, 1769.62000000, 7.60000000, ref l_U883[1], 1 );
    if ((NOT (DOES_OBJECT_EXIST( l_U886[4] ))) AND ((NOT (DOES_OBJECT_EXIST( l_U886[3] ))) AND ((NOT (DOES_OBJECT_EXIST( l_U886[2] ))) AND ((NOT (DOES_OBJECT_EXIST( l_U886[1] ))) AND (NOT (DOES_OBJECT_EXIST( l_U886[0] )))))))
    {
        REQUEST_MODEL( -1165777728 );
        while (NOT (HAS_MODEL_LOADED( -1165777728 )))
        {
            WAIT( 0 );
        }
        CREATE_OBJECT( -1165777728, 877.55000000, 1528.01000000, 16.00000000, ref l_U886[0], 1 );
        CREATE_OBJECT( -1165777728, 879.15990000, 1526.75000000, 16.00000000, ref l_U886[1], 1 );
        CREATE_OBJECT( -1165777728, 878.78000000, 1525.59000000, 16.00000000, ref l_U886[2], 1 );
        CREATE_OBJECT( -1165777728, 879.25000000, 1528.65000000, 16.00000000, ref l_U886[3], 1 );
        CREATE_OBJECT( -1165777728, 877.45000000, 1526.73000000, 16.00000000, ref l_U886[4], 1 );
        for ( l_U1148 = 0; l_U1148 < l_U886; l_U1148++ )
        {
            SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U886[l_U1148], 1 );
        }
    }
    REQUEST_MODEL( 2142893183 );
    while (NOT (HAS_MODEL_LOADED( 2142893183 )))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT( 2142893183, -490.57040000, 1751.96400000, 7.60010000, ref l_U892[0], 1 );
    SET_OBJECT_HEADING( l_U892[0], 50.13610000 );
    CREATE_OBJECT( 2142893183, -472.95860000, 1743.28700000, 7.67810000, ref l_U892[1], 1 );
    SET_OBJECT_HEADING( l_U892[1], 300.70670000 );
    CREATE_OBJECT( 2142893183, -488.06840000, 1744.03000000, 7.60010000, ref l_U892[2], 1 );
    SET_OBJECT_HEADING( l_U892[2], 273.75720000 );
    CREATE_OBJECT( 2142893183, -503.91810000, 1743.22000000, 7.51680000, ref l_U892[3], 1 );
    SET_OBJECT_HEADING( l_U892[3], 359.73810000 );
    CREATE_OBJECT( 2142893183, 65056, 1728.50000000, 7.60010000, ref l_U892[4], 1 );
    SET_OBJECT_HEADING( l_U892[4], 300 );
    for ( l_U1148 = 0; l_U1148 < l_U892; l_U1148++ )
    {
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U892[l_U1148], 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2142893183 );
    return;
}

void sub_68350()
{
    while (NOT (sub_68383( ref l_U876, -475.24000000, 1751.47000000, 8.60000100, 178 )))
    {
        WAIT( 0 );
    }
    sub_12010( l_U876, -359167535, 0 );
    LOCK_CAR_DOORS( l_U876, 3 );
    SET_CAR_HEALTH( l_U876, 2000 );
    SET_ENGINE_HEALTH( l_U876, 2000 );
    SET_PETROL_TANK_HEALTH( l_U876, 2000 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U876, 1 );
    FREEZE_CAR_POSITION( l_U876, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U876, 0 );
    return;
}

void sub_68383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_68400( uParam0, 0, uParam1, uParam4 );
}

void sub_68400(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_16610( uParam1 );
    return sub_68431( uParam0, uVar8, uParam2, uParam5, uParam1 );
}

int sub_68431(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_12010( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_69042()
{
    if (g_U39149[0] == 3)
    {
        if (NOT l_U1066)
        {
            CLEAR_AREA( 65051, 1708, 9, 150, 1 );
            CLEAR_AREA_OF_CARS( 65051, 1708, 9, 150 );
            EXTINGUISH_FIRE_AT_POINT( 65051, 1708, 9, 150 );
            sub_11175();
            sub_66403();
            sub_68350();
            SET_CHAR_HEADING( sub_3854(), 0 );
            SET_CHAR_COORDINATES( sub_3854(), 65051, 1708, 8.06000000 );
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U875 );
            }
            LOAD_SCENE( 65051, 1708, 9 );
            if ((NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))) AND ((IS_VEH_DRIVEABLE( l_U875 )) AND (IS_VEH_DRIVEABLE( l_U876 ))))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[0]._fU0, 65047, 1755, 9, 15 );
                l_U1066 = 1;
            }
            WAIT( 3000 );
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U875 );
            }
            SET_GAME_CAM_HEADING( 0 );
            if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
            {
                DO_SCREEN_FADE_IN( 500 );
            }
        }
    }
    sub_21278( ref l_U708 );
    sub_24134();
    if ((NOT l_U955) AND ((sub_52751()) AND ((IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U875 )) AND (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))))
    {
        if (NOT l_U1041)
        {
            if (IS_SCREEN_FADED_IN())
            {
                sub_28478( "E1B1_MOVE", ref l_U939, 7, 1 );
                l_U1041 = 1;
            }
        }
        else if (NOT l_U1049)
        {
            PRINT_NOW( "B1_GOANGELS", 7500, 1 );
            l_U1049 = 1;
        }
        else if (NOT l_U1042)
        {
            switch (g_U39216)
            {
                case 0:
                sub_28478( "E1B1_HANG", ref l_U933, 7, 1 );
                break;
                case 1:
                sub_28478( "E1B1_B3V2", ref l_U933, 7, 1 );
                break;
            }
            l_U1158 = g_U39216;
            if (g_U39216 < 2)
            {
                g_U39216++;
            }
            l_U1042 = 1;
        }
        else if (sub_53185( l_U933 ))
        {
            switch (l_U1158)
            {
                case 0:
                sub_53419( "E1B1_HANG", ref l_U933, 7, 1 );
                break;
                case 1:
                sub_53419( "E1B1_B3V2", ref l_U933, 7, 1 );
                break;
            }
        };;;;
    }
    sub_53619();
    sub_58619();
    sub_58857();
    sub_60735();
    sub_69862();
    if (NOT l_U955)
    {
        sub_70010();
        if (NOT (IS_CHAR_INJURED( l_U866[4] )))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U866[4], "MISSBILLY_1", "GBGE_SMOKE" )))
            {
                TASK_PLAY_ANIM( l_U866[4], "GBGE_SMOKE", "MISSBILLY_1", 4.00000000, 1, 0, 0, 0, -1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U866[5] )))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U866[5], "MISSBILLY_1", "GBGE_SMOKE" )))
            {
                TASK_PLAY_ANIM( l_U866[5], "GBGE_SMOKE", "MISSBILLY_1", 4.00000000, 1, 0, 0, 0, -1 );
            }
        }
    }
    if ((l_U955 == 1) || (((NOT l_U948) AND ((IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() )) AND (LOCATE_CHAR_ANY_MEANS_2D( sub_3854(), -486.68630000, 1718.17200000, 9, 12, 0 )))) || ((NOT l_U948) AND ((IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() )) AND (IS_CHAR_IN_AREA_2D( sub_3854(), -492.70000000, 1703.51000000, -481.33000000, 1723.15000000, 0 ))))))
    {
        sub_70423();
        if (DOES_BLIP_EXIST( l_U900 ))
        {
            REMOVE_BLIP( l_U900 );
        }
        if (DOES_BLIP_EXIST( l_U902 ))
        {
            REMOVE_BLIP( l_U902 );
        }
        if (DOES_BLIP_EXIST( l_U901 ))
        {
            REMOVE_BLIP( l_U901 );
        }
        sub_72206();
        for ( l_U1148 = 0; l_U1148 < l_U886; l_U1148++ )
        {
            if (DOES_OBJECT_EXIST( l_U886[l_U1148] ))
            {
                DELETE_OBJECT( ref l_U886[l_U1148] );
            }
        }
        sub_3616( ref l_U933, 0 );
        sub_3616( ref l_U939, 0 );
        if (IS_SCREEN_FADED_IN())
        {
            sub_28478( "E1B1_THERE", ref l_U939, 7, 1 );
        }
        if (IS_VEH_DRIVEABLE( l_U875 ))
        {
            SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U875, 1 );
        }
        l_U948 = 0;
        l_U949 = 0;
        l_U1052 = 0;
        sub_3277();
        SETTIMERA( 0 );
        g_U39149[0] = 3;
        l_U1066 = 1;
        l_U703 = 6;
    }
    return;
}

void sub_69862()
{
    if (l_U947)
    {
        if (NOT (IS_CHAR_IN_AREA_2D( sub_3854(), 64993, 1673, 65084, 1820, 0 )))
        {
            SET_WANTED_MULTIPLIER( 0.30000000 );
            l_U947 = 0;
        }
    }
    else if (IS_CHAR_IN_AREA_2D( sub_3854(), 64993, 1673, 65084, 1820, 0 ))
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        l_U947 = 1;
    }
    return;
}

void sub_70010()
{
    if ((IS_CHAR_IN_ANGLED_AREA_2D( sub_3854(), -461.76000000, 1781.38000000, -466.35000000, 1789.66000000, 4.00000000, 0 )) || ((IS_CHAR_IN_ANGLED_AREA_2D( sub_3854(), -465.11000000, 1737.87000000, -465.68000000, 1742.15000000, 4.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3854(), -522.95000000, 1776.54000000, 9.10999900, 1.00000000, 1.00000000, 1.00000000, 0 )) || (IS_CHAR_IN_ANGLED_AREA_2D( sub_3854(), -505.63000000, 1706.23000000, -463.34000000, 1737.07000000, 50, 0 )))))
    {
        l_U1082 = 1;
    }
    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
    {
        if (l_U957[l_U1148] == 1)
        {
            l_U1082 = 1;
        }
    }
    if (IS_ANY_CHAR_SHOOTING_IN_AREA( 64997, 1706, 3, -452.81000000, 1740.76000000, 30, 0 ))
    {
        l_U1082 = 1;
    }
    for ( l_U1148 = 0; l_U1148 < l_U866; l_U1148++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U866[l_U1148] )))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U866[l_U1148], sub_3854(), 0 ))
            {
                l_U1082 = 1;
            }
        }
        else
        {
            l_U1082 = 1;
        }
    }
    if (l_U1082)
    {
        sub_70423();
        sub_70757();
        for ( l_U1148 = 0; l_U1148 < l_U866; l_U1148++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U866[l_U1148] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U866[l_U1148], 0 );
                switch (l_U1148)
                {
                    case 0:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65055, 1777, 9, 6.00000000 );
                    break;
                    case 1:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65050, 1759, 9, 7.00000000 );
                    break;
                    case 2:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65059, 1763, 9, 7.00000000 * 3 );
                    break;
                    case 3:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65055, 1758, 9, 4.00000000 * 3 );
                    break;
                    case 4:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65057, 1749, 9, 5.00000000 * 3 );
                    break;
                    case 5:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65023, 1750, 9, 7.00000000 );
                    break;
                    case 6:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65059, 1756, 9, 4.00000000 * 3 );
                    break;
                    case 7:
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866[l_U1148], 65027, 1770, 9, 6.00000000 );
                    break;
                }
                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( l_U866[l_U1148], 100.00000000 );
            }
        }
        for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
            {
                SET_CHAR_DECISION_MAKER( l_U708[l_U1148]._fU0, l_U924 );
                SET_CHAR_RELATIONSHIP( l_U708[l_U1148]._fU0, 5, 23 );
                REGISTER_HATED_TARGETS_AROUND_PED( l_U708[l_U1148]._fU0, 200 );
            }
        }
        sub_71614( ref l_U708, 1 );
        if (NOT l_U956)
        {
            sub_70423();
        }
        SET_PED_IS_BLIND_RAGING( sub_3854(), 1 );
        l_U955 = 1;
    }
    return;
}

void sub_70423()
{
    if (l_U1078 == 0)
    {
        if (IS_CHAR_SITTING_IN_CAR( l_U708[0]._fU0, l_U875 ))
        {
            GET_CAR_SPEED( l_U875, ref l_U1198 );
            if (l_U1198 < 4.00000000)
            {
                SET_CHAR_DECISION_MAKER( l_U708[0]._fU0, l_U924 );
                SET_CHAR_RELATIONSHIP( l_U708[0]._fU0, 5, 23 );
                REGISTER_HATED_TARGETS_AROUND_PED( l_U708[0]._fU0, 200 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U708[0]._fU0, 0 );
                SET_CHAR_PROOFS( l_U708[0]._fU0, 0, 1, 1, 1, 0 );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[0]._fU0, 65047, 1755, 9, 15 );
                CLEAR_SEQUENCE_TASK( l_U930 );
                OPEN_SEQUENCE_TASK( ref l_U930 );
                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U875 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 65047, 1755, 9, 3, -2, 30 );
                l_U1078 = 1;
                CLOSE_SEQUENCE_TASK( l_U930 );
                TASK_PERFORM_SEQUENCE( l_U708[0]._fU0, l_U930 );
                l_U1082 = 1;
            }
        }
        else
        {
            l_U1078 = 1;
        }
    }
    return;
}

void sub_70757()
{
    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U912[l_U1148] )))
            {
                ADD_BLIP_FOR_CHAR( l_U708[l_U1148]._fU0, ref l_U912[l_U1148] );
                SET_BLIP_AS_FRIENDLY( l_U912[l_U1148], 1 );
                CHANGE_BLIP_SCALE( l_U912[l_U1148], 0.50000000 );
                CHANGE_BLIP_DISPLAY( l_U912[l_U1148], 5 );
            }
        }
    }
    return;
}

void sub_71614(unknown uParam0, boolean bParam1)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (bParam1)
        {
            sub_43345( ref (uParam0^)[I], 1 );
        }
        else
        {
            sub_20045( ref (uParam0^)[I], 1 );
        }
    }
    return;
}

void sub_72206()
{
    for ( l_U1148 = 0; l_U1148 < l_U866; l_U1148++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U866[l_U1148] )))
        {
            ADD_BLIP_FOR_CHAR( l_U866[l_U1148], ref l_U903[l_U1148] );
        }
    }
    return;
}

void sub_72552()
{
    int iVar2;

    sub_69862();
    if ((l_U1085 == 0) AND ((IS_SCREEN_FADED_IN()) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_30267( l_U939 ))))))
    {
        PRINTSTRING( "\n\n        -------->    PLAY E1B1_GETIN     <------- \n\n\n" );
        sub_28478( "E1B1_GETIN", ref l_U939, 7, 1 );
        l_U1085 = 1;
    }
    sub_70423();
    if (NOT l_U1021)
    {
        GET_GAME_VIEWPORT_ID( ref l_U945 );
        GET_CAR_COORDINATES( l_U876, ref l_U1194, ref l_U1195, ref l_U1196 );
        if (NOT (CAM_IS_SPHERE_VISIBLE( l_U945, l_U1194, l_U1195, l_U1196, 5.00000000 )))
        {
            APPLY_FORCE_TO_CAR( l_U876, 1, -1.00000000, 0, -1.00000000, 0, 0, 0, 0, 1, 1, 1 );
            l_U1021 = 1;
        }
    }
    iVar2 = 0;
    for ( l_U1148 = 0; l_U1148 < l_U866; l_U1148++ )
    {
        if (IS_CHAR_INJURED( l_U866[l_U1148] ))
        {
            if ((l_U1148 == 4) || (l_U1148 == 2))
            {
                if (NOT (IS_CHAR_DEAD( l_U866[l_U1148] )))
                {
                    DAMAGE_CHAR( l_U866[l_U1148], 100, 0 );
                }
            }
            if (DOES_BLIP_EXIST( l_U903[l_U1148] ))
            {
                REMOVE_BLIP( l_U903[l_U1148] );
            }
        }
        else
        {
            iVar2++;
        }
    }
    if (iVar2 > 0)
    {
        if (NOT l_U955)
        {
            if (l_U1022)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
                {
                    sub_71614( ref l_U708, 0 );
                    l_U1022 = 0;
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( sub_3854() )))
            {
                sub_71614( ref l_U708, 1 );
                l_U1022 = 1;
            }
            if (NOT l_U956)
            {
                sub_70423();
            }
            sub_70010();
        }
        if (NOT l_U956)
        {
            if ((NOT (IS_GROUP_MEMBER( l_U708[0]._fU0, sub_5876() ))) || ((NOT (IS_CHAR_IN_AREA_2D( sub_3854(), 64993, 1673, 65084, 1820, 0 ))) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3854() ))))
            {
                REMOVE_CHAR_FROM_GROUP( l_U708[0]._fU0 );
                if (IS_CHAR_SITTING_IN_ANY_CAR( l_U708[0]._fU0 ))
                {
                    TASK_LEAVE_ANY_CAR( l_U708[0]._fU0 );
                }
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[0]._fU0, 65047, 1755, 9, 15 );
                SET_CHAR_RELATIONSHIP( l_U708[0]._fU0, 5, 23 );
                REGISTER_HATED_TARGETS_AROUND_PED( l_U708[0]._fU0, 200 );
                SET_PED_IS_BLIND_RAGING( sub_3854(), 1 );
                l_U956 = 1;
            }
            for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U708[l_U1148]._fU0, l_U924 );
                    SET_CHAR_RELATIONSHIP( l_U708[l_U1148]._fU0, 5, 23 );
                    REGISTER_HATED_TARGETS_AROUND_PED( l_U708[l_U1148]._fU0, 200 );
                }
            }
        }
        if (NOT l_U1017)
        {
            if (NOT l_U1050)
            {
                if ((TIMERA() >= 2500) || ((NOT (sub_30267( l_U939 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
                {
                    if (HAS_CHAR_GOT_WEAPON( sub_3854(), 26 ))
                    {
                        SET_CURRENT_CHAR_WEAPON( sub_3854(), 26, 1 );
                    }
                    TASK_SWAP_WEAPON( sub_3854(), 1 );
                    PRINT_NOW( "B1_KILLANGELS", 7500, 1 );
                    l_U1050 = 1;
                }
            }
            else if (((l_U956) || (l_U955)) AND (NOT l_U1043))
            {
                if ((IS_SCREEN_FADED_IN()) AND ((NOT (sub_30267( l_U939 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
                {
                    sub_28478( "E1B1_ATTK", ref l_U939, 7, 1 );
                    SETTIMERC( 0 );
                    l_U1043 = 1;
                }
            }
        }
        if (IS_EPISODIC_DISC_BUILD())
        {
            if ((TIMERC() < 13000) AND (TIMERC() > 12000))
            {
                CLEAR_HELP();
            }
            else if ((TIMERC() < 12000) AND (TIMERC() > 8000))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "FREEAIM" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP( "FREEAIM" );
                }
            }
            else if ((TIMERC() < 8000) AND (TIMERC() > 4000))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "SWITCH" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP( "SWITCH" );
                }
            }
            else if ((TIMERC() < 4000) AND (TIMERC() > 0))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LOCKON" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP( "LOCKON" );
                }
            };;;;
        }
        if ((l_U955) AND ((NOT l_U1017) AND (l_U1043)))
        {
            if (sub_52751())
            {
                if (l_U1186 >= l_U1187)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U1149 );
                    switch (l_U1149)
                    {
                        case 0:
                        if (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U708[0]._fU0, sub_3854(), 35, 35, 35, 0 ))
                            {
                                sub_28478( "E1B1_BFIGHT", ref l_U939, 6, 1 );
                                l_U1186 = 0.00000000;
                                GENERATE_RANDOM_FLOAT_IN_RANGE( 7.00000000, 10.00000000, ref l_U1187 );
                            }
                        }
                        break;
                        case 1:
                        if (NOT (IS_CHAR_INJURED( l_U708[1]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U708[1]._fU0, sub_3854(), 35, 35, 35, 0 ))
                            {
                                sub_28478( "E1B1_JFIGHT", ref l_U939, 6, 1 );
                                l_U1186 = 0.00000000;
                                GENERATE_RANDOM_FLOAT_IN_RANGE( 7.00000000, 10.00000000, ref l_U1187 );
                            }
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_INJURED( l_U866[0] )))
                        {
                            if (sub_74402())
                            {
                                sub_28478( "E1B1_AFIGHT", ref l_U939, 6, 1 );
                                l_U1186 = 0.00000000;
                                GENERATE_RANDOM_FLOAT_IN_RANGE( 7.00000000, 10.00000000, ref l_U1187 );
                            }
                        }
                        break;
                    }
                }
                else
                {
                    l_U1186 += 1.00000000 * TIMESTEP();
                }
                if (NOT l_U1044)
                {
                    if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U876, sub_3854() ))
                    {
                        sub_28478( "E1B1_SHOOTB", ref l_U939, 7, 1 );
                        l_U1044 = 1;
                    }
                }
            }
        }
        for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
        {
            if (NOT l_U957[l_U1148])
            {
                if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
                {
                    if (l_U1148 == 0)
                    {
                        sub_70423();
                    }
                    else if (NOT (l_U1148 == 0))
                    {
                        if ((l_U956) || (l_U955))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U708[l_U1148]._fU0, 29, ref l_U932 );
                            if ((l_U932 == 7) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U708[l_U1148]._fU0 ))))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U708[l_U1148]._fU0, 0 );
                                REMOVE_CHAR_FROM_GROUP( l_U708[l_U1148]._fU0 );
                                REMOVE_CHAR_DEFENSIVE_AREA( l_U708[l_U1148]._fU0 );
                                if (l_U1148 == 1)
                                {
                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[l_U1148]._fU0, 65048, 1742, 7.60000000, 20 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U708[l_U1148]._fU0, 65048, 1742, 7.60000000, 3, -2, 3 );
                                }
                                else if (l_U1148 == 2)
                                {
                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[l_U1148]._fU0, 65043, 1749, 7.60000000, 20 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U708[l_U1148]._fU0, 65043, 1749, 7.60000000, 3, -2, 3 );
                                }
                                else if (l_U1148 == 3)
                                {
                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[l_U1148]._fU0, 65046, 1748, 7.60000000, 20 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U708[l_U1148]._fU0, 65046, 1748, 7.60000000, 3, -2, 3 );
                                }
                                else if (l_U1148 == 4)
                                {
                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[l_U1148]._fU0, 65054, 1748, 7.60000000, 20 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U708[l_U1148]._fU0, 65054, 1748, 7.60000000, 3, -2, 3 );
                                }
                                else if (l_U1148 == 5)
                                {
                                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[l_U1148]._fU0, 65064, 1742, 7.75000000, 20 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U708[l_U1148]._fU0, 65064, 1742, 7.75000000, 3, -2, 3 );
                                };;;;;
                                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U708[l_U1148]._fU0, 0 );
                                SET_CHAR_PROOFS( l_U708[l_U1148]._fU0, 0, 1, 1, 1, 0 );
                                l_U957[l_U1148] = 1;
                            }
                            else if (NOT l_U971[l_U1148])
                            {
                                if (IS_VEH_DRIVEABLE( l_U708[l_U1148]._fU4 ))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U708[l_U1148]._fU0, 1 );
                                    CLEAR_SEQUENCE_TASK( l_U930 );
                                    OPEN_SEQUENCE_TASK( ref l_U930 );
                                    TASK_LEAVE_ANY_CAR( 0 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -486.78000000, 1718.06000000, 9, 3, 20000, 12.00000000 );
                                    if (l_U708[l_U1148]._fU40 == 1)
                                    {
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -491.84000000, 1740.25000000, 9, 3, 20000, 12.00000000 );
                                    }
                                    else if (l_U708[l_U1148]._fU40 == 0)
                                    {
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -504.82000000, 1742.66000000, 9, 3, 20000, 12.00000000 );
                                    }
                                    else if (l_U1151 == 0)
                                    {
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -501.04000000, 1739.59000000, 9, 3, 20000, 12.00000000 );
                                        l_U1151++;
                                    }
                                    else if (l_U1151 == 1)
                                    {
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -493.93000000, 1737.09000000, 9, 3, 20000, 12.00000000 );
                                        l_U1151++;
                                    }
                                    else
                                    {
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -503.01000000, 1733.67000000, 9, 3, 20000, 12.00000000 );
                                    };;;;
                                    CLOSE_SEQUENCE_TASK( l_U930 );
                                    TASK_PERFORM_SEQUENCE( l_U708[l_U1148]._fU0, l_U930 );
                                    l_U971[l_U1148] = 1;
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U708[l_U1148]._fU0, 29, ref l_U932 );
                                if (l_U932 == 7)
                                {
                                    if (NOT l_U985[l_U1148])
                                    {
                                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U708[l_U1148]._fU0, 0 );
                                        TASK_LEAVE_ANY_CAR( l_U708[l_U1148]._fU0 );
                                        l_U985[l_U1148] = 1;
                                    }
                                    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
                                        {
                                            SET_CHAR_DECISION_MAKER( l_U708[l_U1148]._fU0, l_U924 );
                                            SET_CHAR_RELATIONSHIP( l_U708[l_U1148]._fU0, 5, 23 );
                                            REGISTER_HATED_TARGETS_AROUND_PED( l_U708[l_U1148]._fU0, 200 );
                                        }
                                    }
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_ON_FIRE( l_U708[l_U1148]._fU0 )))
                        {
                            sub_24328( ref l_U708[l_U1148], 0 );
                        }
                    }
                    else if ((l_U956) || ((LOCATE_CHAR_ANY_MEANS_2D( l_U708[l_U1148]._fU0, -486.68630000, 1718.17200000, 9, 12, 0 )) || (IS_CHAR_IN_AREA_2D( l_U708[l_U1148]._fU0, 65031, 1706, 65075, 1798, 0 ))))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U708[l_U1148]._fU0 );
                        if (NOT (IS_CAR_DEAD( l_U875 )))
                        {
                            GET_CAR_SPEED( l_U875, ref l_U1198 );
                            if ((l_U1198 < 4.00000000) AND (IS_CHAR_SITTING_IN_CAR( l_U708[0]._fU0, l_U875 )))
                            {
                                l_U697 = 1;
                            }
                            else if ((NOT (IS_CHAR_SITTING_IN_CAR( l_U708[0]._fU0, l_U875 ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U708[0]._fU0 )))
                            {
                                l_U697 = 1;
                            }
                        }
                    }
                    if ((l_U697) || ((l_U956) || ((LOCATE_CHAR_ANY_MEANS_2D( l_U708[l_U1148]._fU0, -486.68630000, 1718.17200000, 9, 12, 0 )) || (IS_CHAR_IN_AREA_2D( l_U708[l_U1148]._fU0, 65031, 1706, 65075, 1798, 0 )))))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U708[l_U1148]._fU0 );
                        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U708[l_U1148]._fU0, 65047, 1755, 9, 15 );
                        GET_CAR_SPEED( l_U875, ref l_U1198 );
                        CLEAR_SEQUENCE_TASK( l_U930 );
                        OPEN_SEQUENCE_TASK( ref l_U930 );
                        if (IS_CHAR_SITTING_IN_CAR( l_U708[l_U1148]._fU0, l_U875 ))
                        {
                            if (l_U1198 < 4.00000000)
                            {
                                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U875 );
                            }
                        }
                        else if (IS_CHAR_SITTING_IN_ANY_CAR( l_U708[0]._fU0 ))
                        {
                            TASK_LEAVE_ANY_CAR( 0 );
                        }
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 65047, 1755, 9, 3, -2, 30 );
                        CLOSE_SEQUENCE_TASK( l_U930 );
                        TASK_PERFORM_SEQUENCE( l_U708[l_U1148]._fU0, l_U930 );
                        SET_CHAR_DECISION_MAKER( l_U708[l_U1148]._fU0, l_U924 );
                        SET_CHAR_RELATIONSHIP( l_U708[l_U1148]._fU0, 5, 23 );
                        REGISTER_HATED_TARGETS_AROUND_PED( l_U708[l_U1148]._fU0, 200 );
                        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U708[l_U1148]._fU0, 0 );
                        SET_CHAR_PROOFS( l_U708[l_U1148]._fU0, 0, 1, 1, 1, 0 );
                        l_U957[l_U1148] = 1;
                    };;;
                }
            }
        }
    }
    else if (NOT l_U1017)
    {
        sub_3616( ref l_U939, 0 );
        sub_28478( "E1B1_DEAD", ref l_U939, 7, 1 );
        SETTIMERB( 0 );
        l_U1017 = 1;
    }
    else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))
    {
        l_U948 = 0;
        l_U949 = 0;
        l_U951 = 0;
        if (NOT (DOES_BLIP_EXIST( l_U902 )))
        {
            ADD_BLIP_FOR_CAR( l_U875, ref l_U902 );
            SET_BLIP_AS_FRIENDLY( l_U902, 1 );
        }
    }
    else
    {
        l_U948 = 1;
        l_U949 = 1;
        l_U951 = 1;
        if (DOES_BLIP_EXIST( l_U902 ))
        {
            REMOVE_BLIP( l_U902 );
        }
    }
    if (TIMERB() >= 1500)
    {
        REMOVE_CHAR_FROM_GROUP( l_U708[0]._fU0 );
        CREATE_GROUP( 0, ref l_U919, 1 );
        SET_GROUP_LEADER( l_U919, l_U708[0]._fU0 );
        sub_20019( ref l_U708[0], l_U876, 1 );
        sub_50502( ref l_U708[0], l_U1095, 0 );
        for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
        {
            if (IS_VEH_DRIVEABLE( l_U708[l_U1148]._fU4 ))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U708[l_U1148]._fU0, 1 );
                if (l_U1148 == 0)
                {
                    TASK_ENTER_CAR_AS_DRIVER( l_U708[l_U1148]._fU0, l_U708[l_U1148]._fU4, -2 );
                    SET_CHAR_DROWNS_IN_WATER( l_U708[l_U1148]._fU0, 1 );
                    SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U708[l_U1148]._fU0, 1 );
                }
                else if (l_U708[l_U1148]._fU4 != l_U876)
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U708[l_U1148]._fU0, l_U708[l_U1148]._fU4 )))
                    {
                        TASK_ENTER_CAR_AS_DRIVER( l_U708[l_U1148]._fU0, l_U708[l_U1148]._fU4, 20000 );
                    }
                }
            }
            else
            {
                CLEAR_CHAR_TASKS( l_U708[l_U1148]._fU0 );
            }
        }
        g_U11004 = 0;
        CLEAR_WANTED_LEVEL( sub_5225() );
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_MAX_WANTED_LEVEL( 0 );
        sub_77602();
        sub_71614( ref l_U708, 0 );
        GET_GAME_TIMER( ref l_U9 );
        g_U15728[14] = 1;
        SET_PED_IS_BLIND_RAGING( sub_3854(), 0 );
        l_U703 = 7;
    };;;
    return;
}

int sub_74402()
{
    for ( l_U1148 = 0; l_U1148 <= 7; l_U1148++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U866[l_U1148] )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U866[l_U1148], sub_3854(), 40, 40, 40, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_77602()
{
    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
    {
        if (DOES_BLIP_EXIST( l_U912[l_U1148] ))
        {
            REMOVE_BLIP( l_U912[l_U1148] );
        }
    }
    return;
}

void sub_77761()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    int iVar8;
    unknown uVar9;
    int iVar10;

    if ((l_U1062) AND (NOT l_U1014))
    {
        if (IS_CHAR_IN_CAR( sub_3854(), l_U875 ))
        {
            l_U1014 = 1;
            l_U1185 = 100.00000000;
        }
    }
    l_U1013 = 1;
    for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U708[l_U1148]._fU0 )))
        {
            if (l_U1148 == 0)
            {
                sub_77903( ref l_U708[l_U1148] );
            }
            if (l_U964[l_U1148])
            {
                if (l_U1148 == 0)
                {
                    if (NOT l_U1016)
                    {
                        sub_78587( ref l_U708 );
                        sub_24328( ref l_U708[l_U1148], 0 );
                        if ((IS_CHAR_IN_CAR( sub_3854(), l_U875 )) AND ((sub_22315( l_U708[l_U1148]._fU0, sub_3854(), 1 )) < 50))
                        {
                            sub_78935();
                        }
                        else
                        {
                            l_U1190 = 0.00000000;
                        }
                    }
                    if (NOT l_U1015)
                    {
                        if (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U876 ))
                        {
                            if (l_U1013)
                            {
                                if ((IS_CHAR_IN_AREA_2D( l_U708[0]._fU0, -1661.51000000, 363.30000000, -1575.81000000, 504.08000000, 0 )) || ((IS_CHAR_IN_AREA_2D( l_U708[0]._fU0, -1286.12000000, 565.27000000, -1178.50000000, 766.54000000, 0 )) || (IS_CHAR_IN_AREA_2D( l_U708[0]._fU0, -877.09000000, 1149.88000000, -668.51000000, 1178.28000000, 0 ))))
                                {
                                    sub_79506( ref l_U708[l_U1148], 12, 30, 1, 0 );
                                }
                                else
                                {
                                    sub_79506( ref l_U708[l_U1148], 7, 22, 1, 0 );
                                }
                            }
                            else
                            {
                                SET_DRIVE_TASK_CRUISE_SPEED( l_U708[l_U1148]._fU0, 0 );
                            }
                        }
                    }
                }
                else if (NOT (IS_CHAR_IN_ANGLED_AREA_2D( l_U708[0]._fU0, -528.63000000, 1688.23000000, -463.34000000, 1737.07000000, 50, 0 )))
                {
                    sub_78587( ref l_U708 );
                    sub_24328( ref l_U708[l_U1148], 0 );
                }
            }
            else if (IS_CHAR_IN_ANY_CAR( l_U708[l_U1148]._fU0 ))
            {
                if (NOT l_U999[l_U1148])
                {
                    if ((NOT (l_U1148 == 0)) || (IS_CHAR_IN_CAR( l_U708[l_U1148]._fU0, l_U876 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U708[l_U1148]._fU0, 0 );
                        l_U999[l_U1148] = 1;
                    }
                }
                if ((l_U1148 == 0) || (l_U1062))
                {
                    if (l_U978[l_U1148])
                    {
                        if (((NOT (IS_CHAR_IN_ANGLED_AREA_2D( l_U708[l_U1148]._fU0, -528.63000000, 1688.23000000, -463.34000000, 1737.07000000, 50, 0 ))) AND (l_U1148 == 0)) || (LOCATE_CHAR_IN_CAR_3D( l_U708[l_U1148]._fU0, -485.77000000, 1716.31000000, 9, 6, 6, 6, 0 )))
                        {
                            if (l_U1148 == 0)
                            {
                                if (l_U1013)
                                {
                                    l_U964[l_U1148] = 1;
                                }
                            }
                            else if (l_U964[0])
                            {
                                l_U964[l_U1148] = 1;
                            }
                        }
                    }
                    else if ((NOT (IS_CHAR_PLAYING_ANIM( l_U708[l_U1148]._fU0, "MISSBILLY_1", "get_on_bike" ))) AND (IS_CHAR_IN_ANGLED_AREA_2D( l_U708[l_U1148]._fU0, -528.63000000, 1688.23000000, -463.34000000, 1737.07000000, 50, 0 )))
                    {
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 12, 26, ref uVar2 );
                        if ((l_U1148 == 0) || ((LOCATE_CAR_3D( l_U876, -485.77000000, 1716.31000000, 9, uVar2, uVar2, uVar2, 0 )) AND (l_U1013)))
                        {
                            if (IS_VEH_DRIVEABLE( l_U708[l_U1148]._fU4 ))
                            {
                                CLEAR_SEQUENCE_TASK( l_U930 );
                                OPEN_SEQUENCE_TASK( ref l_U930 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U708[l_U1148]._fU4, -494.37000000, 1729.94000000, 9, 5.00000000, 0, 0, 2, 6.00000000, 100 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U708[l_U1148]._fU4, -485.77000000, 1716.31000000, 9, 6.00000000, 0, 0, 2, 6.00000000, 100 );
                                CLOSE_SEQUENCE_TASK( l_U930 );
                                TASK_PERFORM_SEQUENCE( l_U708[l_U1148]._fU0, l_U930 );
                                l_U978[l_U1148] = 1;
                                l_U964[l_U1148] = 0;
                            }
                        }
                    }
                    else
                    {
                        l_U978[l_U1148] = 1;
                        l_U964[l_U1148] = 1;
                    }
                }
            }
            else if (l_U978[l_U1148])
            {
                l_U978[l_U1148] = 0;
            }
            if (IS_VEH_DRIVEABLE( l_U708[l_U1148]._fU4 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U708[l_U1148]._fU0, 12, ref l_U932 );
                if (l_U932 != 1)
                {
                    TASK_ENTER_CAR_AS_DRIVER( l_U708[l_U1148]._fU0, l_U708[l_U1148]._fU4, 30000 );
                }
            }
            else if (NOT l_U1006[l_U1148])
            {
                if ((IS_CHAR_IN_ANGLED_AREA_2D( l_U708[0]._fU0, -528.63000000, 1688.23000000, -463.34000000, 1737.07000000, 50, 0 )) || ((l_U1148 != 0) AND (l_U708[l_U1148]._fU4 == l_U876)))
                {
                    if ((NOT (IS_CHAR_IN_ANGLED_AREA_2D( l_U708[0]._fU0, -528.63000000, 1688.23000000, -463.34000000, 1737.07000000, 50, 0 ))) AND (l_U1062))
                    {
                        sub_78587( ref l_U708 );
                        sub_24328( ref l_U708[l_U1148], 0 );
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( l_U708[l_U1148]._fU0 );
                        l_U1006[l_U1148] = 1;
                    }
                }
                else
                {
                    sub_78587( ref l_U708 );
                    sub_24328( ref l_U708[l_U1148], 0 );
                }
            };;;
            if (l_U1148 != 0)
            {
                if (l_U964[0])
                {
                    if (l_U1193 >= 15.00000000)
                    {
                        l_U978[l_U1148] = 1;
                        l_U964[l_U1148] = 1;
                    }
                }
            }
        }
    }
    if (l_U1193 < 15.00000000)
    {
        if (l_U964[0])
        {
            l_U1193 += 1.00000000 * TIMESTEP();
        }
    }
    if ((l_U964[5]) AND ((l_U964[4]) AND ((l_U964[3]) AND ((l_U964[2]) AND ((l_U964[1]) AND (l_U964[0]))))))
    {
        sub_47581( ref l_U708, 0, 0 );
    }
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U1051) AND (NOT l_U1045)))
    {
        if (sub_52751())
        {
            if (IS_CHAR_IN_CAR( sub_3854(), l_U875 ))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U876, 0, 11, 0, ref l_U1194, ref l_U1195, ref l_U1196 );
                GET_GAME_TIMER( ref l_U1160 );
                if (((l_U1160 - l_U1161) > 15000) AND ((NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U708[0]._fU0, -497.92620000, 1747.81500000, 7.52390000, 50, 50, 50, 0 ))) AND (LOCATE_CHAR_IN_CAR_3D( sub_3854(), l_U1194, l_U1195, l_U1196, 10, 10, 10, 0 ))))
                {
                    GET_GAME_TIMER( ref l_U1161 );
                    sub_28478( "E1B1_JFRONT", ref l_U939, 7, 1 );
                }
            }
        }
    }
    if (l_U1062)
    {
        sub_58857();
    }
    else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))
    {
        l_U948 = 0;
        l_U949 = 0;
        l_U951 = 0;
        if (NOT (DOES_BLIP_EXIST( l_U902 )))
        {
            ADD_BLIP_FOR_CAR( l_U875, ref l_U902 );
            SET_BLIP_AS_FRIENDLY( l_U902, 1 );
        }
    }
    else
    {
        l_U948 = 1;
        l_U949 = 1;
        l_U951 = 1;
        if (DOES_BLIP_EXIST( l_U902 ))
        {
            REMOVE_BLIP( l_U902 );
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U876 ))) AND ((NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))) AND (NOT l_U1062)))
    {
        if (NOT l_U1061)
        {
            if ((NOT (IS_PED_RAGDOLL( l_U708[0]._fU0 ))) AND ((l_U1192 >= 20.00000000) || (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U708[0]._fU0, l_U876, 3.00000000, 3.00000000, 3.00000000, 0 ))))
            {
                SET_PLAYER_CONTROL( sub_5225(), 0 );
                sub_77602();
                SET_WIDESCREEN_BORDERS( 1 );
                CLEAR_HELP();
                CLEAR_PRINTS();
                if (l_U1192 >= 20.00000000)
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U876 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U708[0]._fU0, l_U876 );
                        GIVE_PED_HELMET_WITH_OPTS( l_U708[0]._fU0, 0 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U876 );
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3854(), l_U876, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    if (IS_CHAR_IN_ANGLED_AREA_2D( l_U708[0]._fU0, -528.63000000, 1688.23000000, -463.34000000, 1737.07000000, 50, 0 ))
                    {
                        SET_CHAR_COORDINATES( sub_3854(), -486.51000000, 1749.41000000, 7.61000000 );
                        SET_CHAR_HEADING( sub_3854(), 65395 );
                    }
                    else
                    {
                        GET_CHAR_COORDINATES( sub_3854(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        GET_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1194, ref l_U1195, ref l_U1196 );
                        SET_CHAR_COORDINATES( sub_3854(), l_U1194, l_U1195, l_U1196 );
                        if (l_U1192 >= 20.00000000)
                        {
                            if (GET_NTH_CLOSEST_CAR_NODE( uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, ref l_U1194, ref l_U1195, ref l_U1196 ))
                            {
                                SET_CAR_COORDINATES( l_U876, l_U1194, l_U1195, l_U1196 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U876 );
                            }
                        }
                    }
                    if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
                    {
                        GET_CAR_CHAR_IS_USING( sub_3854(), ref uVar6 );
                        if (NOT (IS_CAR_DEAD( uVar6 )))
                        {
                            SET_CAR_ON_GROUND_PROPERLY( uVar6 );
                        }
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3854() );
                    }
                }
                GET_CAR_COORDINATES( l_U876, ref l_U1194, ref l_U1195, ref l_U1196 );
                CLEAR_AREA( l_U1194, l_U1195, l_U1196, 100, 1 );
                EXTINGUISH_FIRE_AT_POINT( l_U1194, l_U1195, l_U1196, 300 );
                for ( l_U1148 = 0; l_U1148 < l_U877; l_U1148++ )
                {
                    if (DOES_VEHICLE_EXIST( l_U877[l_U1148] ))
                    {
                        GET_CAR_COORDINATES( l_U876, ref l_U1194, ref l_U1195, ref l_U1196 );
                        if (IS_CAR_DEAD( l_U877[l_U1148] ))
                        {
                            if (LOCATE_DEAD_CAR_3D( l_U877[l_U1148], l_U1194, l_U1195, l_U1196, 2, 2, 2, 0 ))
                            {
                                bVar7 = true;
                            }
                        }
                        else if (LOCATE_CAR_3D( l_U877[l_U1148], l_U1194, l_U1195, l_U1196, 2, 2, 2, 0 ))
                        {
                            bVar7 = true;
                        }
                        if (bVar7)
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_3854(), l_U877[l_U1148] )))
                            {
                                DELETE_CAR( ref l_U877[l_U1148] );
                            }
                        }
                    }
                }
                for ( l_U1148 = 0; l_U1148 < l_U892; l_U1148++ )
                {
                    if (DOES_OBJECT_EXIST( l_U892[l_U1148] ))
                    {
                        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U892[l_U1148] );
                    }
                }
                l_U1129[1] = {-492.84000000, 1739.25000000, 9};
                l_U1129[2] = {-503.82000000, 1743.66000000, 9};
                l_U1129[3] = {-502.04000000, 1737.59000000, 9};
                l_U1129[4] = {-492.93000000, 1738.09000000, 9};
                l_U1171[1] = 14.61140000;
                l_U1171[2] = -16.78470000;
                l_U1171[3] = 30.45350000;
                l_U1171[4] = -28.91740000;
                if (IS_CHAR_IN_ANGLED_AREA_2D( l_U708[0]._fU0, -528.63000000, 1688.23000000, -463.34000000, 1737.07000000, 50, 0 ))
                {
                    l_U978[0] = 0;
                    l_U964[0] = 0;
                }
                for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
                {
                    if (NOT (l_U1148 == 0))
                    {
                        iVar8 = 0;
                        if (NOT (IS_VEH_DRIVEABLE( l_U708[l_U1148]._fU4 )))
                        {
                            sub_83103( l_U1148, 65039, 1743, 100 );
                            iVar8 = 1;
                        }
                        if (IS_VEH_DRIVEABLE( l_U708[l_U1148]._fU4 ))
                        {
                            if ((NOT (LOCATE_CAR_2D( l_U708[l_U1148]._fU4, 65039, 1743, 80, 80, 0 ))) || (iVar8))
                            {
                                SET_CAR_COORDINATES( l_U708[l_U1148]._fU4, l_U1129[l_U1148]._fU0, l_U1129[l_U1148]._fU4, l_U1129[l_U1148]._fU8 );
                                SET_CAR_HEADING( l_U708[l_U1148]._fU4, l_U1171[l_U1148] );
                                SET_CAR_ON_GROUND_PROPERLY( l_U708[l_U1148]._fU4 );
                                sub_20019( ref l_U708[l_U1148], l_U708[l_U1148]._fU4, 1 );
                                if (NOT (IS_CHAR_IN_CAR( l_U708[l_U1148]._fU0, l_U708[l_U1148]._fU4 )))
                                {
                                    WARP_CHAR_INTO_CAR( l_U708[l_U1148]._fU0, l_U708[l_U1148]._fU4 );
                                    GIVE_PED_HELMET_WITH_OPTS( l_U708[l_U1148]._fU0, 0 );
                                }
                            }
                        }
                    }
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U708[0]._fU0 );
                WARP_CHAR_INTO_CAR( l_U708[0]._fU0, l_U876 );
                TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U708[0]._fU0, "get_on_bike", "MISSBILLY_1", 8, 0, 0, 0, 0, 0 );
                CLEAR_AREA_OF_COPS( -481.10000000, 1709.25000000, 7.30980000, 1000 );
                if ((LOCATE_CAR_3D( l_U875, -476.41740000, 1715.91400000, 7.47930000, 2, 2, 2, 0 )) || ((LOCATE_CAR_3D( l_U875, -481.80390000, 1711.72500000, 7.45209900, 2, 2, 2, 0 )) || ((LOCATE_CAR_3D( l_U875, -472.82860000, 1720.92100000, 7.53530000, 2, 2, 2, 0 )) || ((LOCATE_CAR_3D( l_U875, -477.83520000, 1721.38000000, 7.47890000, 2, 2, 2, 0 )) || (LOCATE_CAR_3D( l_U875, -482.89990000, 1719.55300000, 7.39570000, 2, 2, 2, 0 ))))))
                {
                    SET_CAR_HEADING( l_U875, 121.74370000 );
                    SET_CAR_COORDINATES( l_U875, -481.10000000, 1709.25000000, 7.30980000 );
                }
                if ((NOT (IS_CHAR_DEAD( l_U708[1]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U708[1]._fU4 ))))
                {
                    SET_CAR_HEADING( l_U708[1]._fU4, 138.35090000 );
                    SET_CAR_COORDINATES( l_U708[1]._fU4, -482.89990000, 1719.55300000, 7.39570000 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U708[1]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U708[1]._fU0, -490.41430000, 1728.57600000, 7.52800000 );
                        SET_CHAR_HEADING( l_U708[1]._fU0, 225.46810000 );
                    }
                    else
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U708[1]._fU0, -490.41430000, 1728.57600000, 7.52800000 );
                        SET_CHAR_HEADING( l_U708[1]._fU0, 225.46810000 );
                    }
                }
                if ((NOT (IS_CHAR_DEAD( l_U708[2]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U708[2]._fU4 ))))
                {
                    SET_CAR_HEADING( l_U708[2]._fU4, 130.26720000 );
                    SET_CAR_COORDINATES( l_U708[2]._fU4, -477.83520000, 1721.38000000, 7.47890000 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U708[2]._fU0 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U708[2]._fU0, l_U708[2]._fU4 );
                    }
                }
                if ((NOT (IS_CHAR_DEAD( l_U708[3]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U708[3]._fU4 ))))
                {
                    SET_CAR_HEADING( l_U708[3]._fU4, 98.70189000 );
                    SET_CAR_COORDINATES( l_U708[3]._fU4, -472.82860000, 1720.92100000, 7.53530000 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U708[3]._fU0 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U708[3]._fU0, l_U708[3]._fU4 );
                    }
                }
                if ((NOT (IS_CHAR_DEAD( l_U708[4]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U708[4]._fU4 ))))
                {
                    SET_CAR_HEADING( l_U708[4]._fU4, 110.53320000 );
                    SET_CAR_COORDINATES( l_U708[4]._fU4, -481.80390000, 1711.72500000, 7.45209900 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U708[4]._fU0 )))
                    {
                        SET_CHAR_COORDINATES( l_U708[4]._fU0, -494.00630000, 1727.61900000, 7.52510000 );
                        SET_CHAR_HEADING( l_U708[4]._fU0, 225.46810000 );
                    }
                    else
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U708[4]._fU0, -494.00630000, 1727.61900000, 7.52510000 );
                        SET_CHAR_HEADING( l_U708[4]._fU0, 225.46810000 );
                    }
                }
                if ((NOT (IS_CHAR_DEAD( l_U708[5]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U708[5]._fU4 ))))
                {
                    SET_CAR_HEADING( l_U708[5]._fU4, 150.00750000 );
                    SET_CAR_COORDINATES( l_U708[5]._fU4, -476.41740000, 1715.91400000, 7.47930000 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U708[5]._fU0 )))
                    {
                        WARP_CHAR_INTO_CAR( l_U708[5]._fU0, l_U708[5]._fU4 );
                    }
                }
                if ((NOT (IS_CAR_DEAD( l_U876 ))) AND (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))))
                {
                    BEGIN_CAM_COMMANDS( ref l_U1155 );
                    CREATE_CAM( 14, ref l_U921 );
                    CREATE_CAM( 14, ref l_U922 );
                    CREATE_CAM( 3, ref l_U923 );
                    SET_CAM_POS( l_U921, -474.76690000, 1752.52500000, 7.98375700 );
                    SET_CAM_ROT( l_U921, 9.16332600, 0.00000000, 131.05100000 );
                    SET_CAM_FOV( l_U921, 45.00000000 );
                    SET_CAM_POS( l_U922, -474.40340000, 1752.50400000, 8.76598100 );
                    SET_CAM_ROT( l_U922, -5.96274400, -0.00000000, 141.13490000 );
                    SET_CAM_FOV( l_U922, 45.00000000 );
                    FREEZE_CAR_POSITION( l_U876, 0 );
                    SET_CAM_ACTIVE( l_U921, 1 );
                    SET_CAM_PROPAGATE( l_U921, 1 );
                    SET_CAM_ACTIVE( l_U922, 1 );
                    SET_CAM_PROPAGATE( l_U922, 1 );
                    SET_CAM_ACTIVE( l_U923, 1 );
                    SET_CAM_PROPAGATE( l_U923, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U923, l_U921, l_U922, 3800, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    END_CAM_COMMANDS( ref l_U1155 );
                }
                if ((l_U1088 == 0) AND (NOT (sub_30267( l_U939 ))))
                {
                    sub_28478( "E1B1_BACK", ref l_U939, 7, 1 );
                    l_U1088 = 1;
                }
                WAIT( 0 );
                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3854() )))
                {
                    TASK_TURN_CHAR_TO_FACE_COORD( sub_3854(), -488.04130000, 1719.85300000, 7.55390000 );
                }
                while (l_U698 == 0)
                {
                    if (NOT (IS_CHAR_DEAD( l_U708[0]._fU0 )))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( l_U708[0]._fU0, "MISSBILLY_1", "get_on_bike" )))
                        {
                            l_U698 = 1;
                        }
                    }
                    WAIT( 0 );
                }
                l_U1061 = 1;
            }
            else
            {
                l_U1192 += 1.00000000 * TIMESTEP();
            }
        }
        else if (NOT l_U1063)
        {
            UNPOINT_CAM( l_U922 );
            l_U1063 = 1;
        }
        if (NOT l_U1064)
        {
            if (NOT (IS_CAR_DEAD( l_U876 )))
            {
                if ((NOT (IS_CHAR_PLAYING_ANIM( l_U708[0]._fU0, "MISSBILLY_1", "get_on_bike" ))) AND (IS_CHAR_SITTING_IN_CAR( l_U708[0]._fU0, l_U876 )))
                {
                    PLAY_SOUND_FROM_PED( -1, "B1_GET_BILLYS_BIKE_BACK_REVVING", l_U708[0]._fU0 );
                    l_U1064 = 1;
                }
            }
        }
        if ((NOT (IS_CHAR_PLAYING_ANIM( l_U708[0]._fU0, "MISSBILLY_1", "get_on_bike" ))) AND (l_U1188 >= 2.00000000))
        {
            BEGIN_CAM_COMMANDS( ref l_U1155 );
            SET_CAM_ACTIVE( l_U921, 0 );
            SET_CAM_PROPAGATE( l_U921, 0 );
            SET_CAM_ACTIVE( l_U922, 0 );
            SET_CAM_PROPAGATE( l_U922, 0 );
            SET_CAM_ACTIVE( l_U923, 0 );
            SET_CAM_PROPAGATE( l_U923, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U1155 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_5225(), 1 );
            sub_3616( ref l_U939, 0 );
            sub_71614( ref l_U708, 0 );
            for ( l_U1148 = 0; l_U1148 < l_U708; l_U1148++ )
            {
                if (NOT (l_U1148 == 0))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U708[l_U1148]._fU0 );
                    CLEAR_CHAR_TASKS( l_U708[l_U1148]._fU0 );
                }
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U708[l_U1148]._fU0, 1 );
                SET_CHAR_PROOFS( l_U708[l_U1148]._fU0, 0, 0, 0, 1, 0 );
                l_U1006[l_U1148] = 0;
            }
            sub_86384();
            sub_86576();
            sub_87000( 1 );
            SETTIMERB( 0 );
            INCREMENT_INT_STAT( 373, 1 );
            AWARD_ACHIEVEMENT( 51 );
            l_U1062 = 1;
        }
        else if (IS_CHAR_SITTING_IN_CAR( l_U708[0]._fU0, l_U876 ))
        {
            l_U1188 += 1.00000000 * TIMESTEP();
        };;;
    }
    if ((l_U698 == 1) AND (l_U1062 == 1))
    {
        if ((l_U1088 == 0) AND (NOT (sub_30267( l_U939 ))))
        {
            sub_28478( "E1B1_BACK", ref l_U939, 7, 1 );
            l_U1088 = 1;
        }
    }
    if ((NOT (IS_CAR_DEAD( l_U875 ))) AND (NOT l_U1054))
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))
        {
            l_U1054 = 1;
        }
    }
    if ((l_U698 == 1) AND ((l_U1062 == 1) AND (l_U1083 == 0)))
    {
        if ((NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U876 ))))
        {
            if ((IS_CHAR_SITTING_IN_CAR( l_U708[0]._fU0, l_U876 )) AND ((NOT (IS_CAR_DEAD( l_U875 ))) AND ((NOT (sub_30267( l_U939 ))) AND ((NOT (sub_30267( l_U933 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))))
            {
                SET_WANTED_MULTIPLIER( 0.30000000 );
                if (IS_CHAR_IN_CAR( sub_3854(), l_U875 ))
                {
                    PRINT_NOW( "B1_GOCLUBHOUSEb", 7500, 1 );
                    l_U948 = 1;
                    l_U949 = 1;
                    l_U951 = 0;
                }
                else
                {
                    PRINT_NOW( "B1_ONBIKEFOL", 7500, 1 );
                    l_U951 = 1;
                }
                WAIT( 0 );
                l_U1083 = 1;
            }
        }
    }
    if ((l_U1086 == 0) AND (l_U1083 == 1))
    {
        if ((NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))) AND (NOT (IS_CAR_DEAD( l_U876 ))))
        {
            if ((IS_CHAR_SITTING_IN_CAR( l_U708[0]._fU0, l_U876 )) AND ((NOT (sub_30267( l_U939 ))) AND ((NOT (sub_30267( l_U933 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), l_U708[0]._fU0, 30, 30, 30, 0 ))
                {
                    PRINTSTRING( "\n\n     ----->     PLAY  E1B1_BACKC     <-----\n\n\n" );
                    sub_28478( "E1B1_BACKC", ref l_U939, 7, 1 );
                    l_U1086 = 1;
                }
            }
        }
    }
    if (l_U1071 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U708[0]._fU0, -497.92620000, 1747.81500000, 7.52390000, 75, 75, 75, 0 )))
            {
                l_U1071 = 1;
            }
            else if (NOT (IS_CAR_DEAD( l_U876 )))
            {
                if ((l_U964[0] == 1) AND (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U876 )))
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( l_U708[0]._fU0, 10.00000000 );
                }
            }
        }
    }
    if (NOT l_U1015)
    {
        if (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U708[0]._fU0, l_U1095._fU0, l_U1095._fU4, l_U1095._fU8, 44, 44, 44, 0 ))
            {
                if (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U876 ))
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( l_U708[0]._fU0, 8.00000000 );
                    l_U1015 = 1;
                }
            }
        }
    }
    if (NOT l_U1016)
    {
        if (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U708[0]._fU0, l_U1095._fU0, l_U1095._fU4, l_U1095._fU8, 12, 12, 12, 0 ))
            {
                if (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U876 ))
                {
                    TASK_CAR_MISSION( l_U708[0]._fU0, l_U708[0]._fU4, 0, 5, 0.00000000, 2, -1, -1 );
                    l_U1016 = 1;
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U875 )))
    {
        if ((NOT (IS_CHAR_IN_AREA_2D( sub_3854(), 65031, 1706, 65075, 1798, 0 ))) AND (IS_CHAR_SITTING_IN_CAR( sub_3854(), l_U875 )))
        {
            if (NOT l_U1056)
            {
                if (NOT l_U1060)
                {
                    if (l_U1051)
                    {
                        SETTIMERA( 0 );
                        l_U1060 = 1;
                    }
                }
                else if (TIMERA() >= 8000)
                {
                    PRINT_HELP( "B1_BANHELP1" );
                    l_U1056 = 1;
                    SETTIMERA( 0 );
                }
            }
            else if ((l_U1072 == 0) AND (TIMERA() >= 9500))
            {
                sub_87000( 0 );
                l_U1072 = 1;
            }
            if (NOT l_U1057)
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "B1_BANHELP2" );
                    l_U1057 = 1;
                }
            }
            else if (NOT l_U1058)
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    SETTIMERA( 0 );
                    l_U1058 = 1;
                }
            }
            else if ((TIMERA() >= 18000) AND (NOT l_U1055))
            {
                GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar10 );
                if ((iVar10 != 5) AND ((NOT sub_52785()) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
                {
                    PRINT_HELP( "B1_CAMHELP" );
                    l_U1055 = 1;
                }
            };;;;
        }
        if ((NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))) AND (l_U1016))
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3854(), l_U708[0]._fU0, 10, 10, 10, 0 )) AND (IS_CHAR_STOPPED( l_U708[0]._fU0 )))
            {
                if (sub_62625( 1, 1 ))
                {
                    if (DOES_BLIP_EXIST( l_U901 ))
                    {
                        REMOVE_BLIP( l_U901 );
                    }
                    l_U703 = 8;
                }
            }
        }
    }
    if ((NOT (IS_CHAR_INJURED( l_U708[0]._fU0 ))) AND (l_U1062))
    {
        if (NOT (IS_CHAR_INJURED( l_U708[0]._fU0 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U708[0]._fU0, l_U1095._fU0, l_U1095._fU4, l_U1095._fU8, 50, 50, 50, 0 )))
            {
                sub_88882( ref l_U708[0], 11.00000000, 3 );
            }
            else
            {
                sub_4258();
            }
        }
    }
    return;
}

void sub_77903(int iParam0)
{
    sub_77916( iParam0 + 0 );
    return;
}

void sub_77916(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U18)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U16))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U17 + 500))
        {
            l_U16 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_23614()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3854() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U17 );
            l_U16 = 1;
            l_U15 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U16) AND (NOT l_U15))
        {
            if (l_U18)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U15 = 1;
        }
    }
    else if (l_U15)
    {
        if (l_U18)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U15 = 0;
    };;;
    return;
}

void sub_78587(unknown uParam0)
{
    int[5] iVar3;
    int I;
    unknown uVar10;
    unknown uVar11;

    array(ref iVar3, 5);
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( (uParam0^)[I]._fU0 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU0, ref uVar10 );
                iVar3[sub_25345( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_3854() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar10 );
        iVar3[sub_25345( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_3982( I );
        if (iVar3[I])
        {
            if (NOT (HAVE_ANIMS_LOADED( uVar11 )))
            {
                REQUEST_ANIMS( uVar11 );
            }
        }
        else if (HAVE_ANIMS_LOADED( uVar11 ))
        {
            REMOVE_ANIMS( uVar11 );
        }
    }
    return;
}

void sub_78935()
{
    if (IS_CHAR_IN_CAR( l_U708[0]._fU0, l_U876 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U708[0]._fU0, l_U1101._fU0, l_U1101._fU4, l_U1101._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))
        {
            if (l_U1190 >= 15.00000000)
            {
                GET_CLOSEST_CAR_NODE( l_U1101._fU0, l_U1101._fU4, l_U1101._fU8, ref l_U1194, ref l_U1195, ref l_U1196 );
                SET_CHAR_COORDINATES( l_U708[0]._fU0, l_U1194, l_U1195, l_U1196 );
                SET_CAR_ON_GROUND_PROPERLY( l_U876 );
                l_U1190 = 0.00000000;
            }
            else
            {
                l_U1190 += 1.00000000 * TIMESTEP();
            }
        }
        else
        {
            l_U1190 = 0.00000000;
        }
        if (l_U1191 >= 1.00000000)
        {
            GET_CHAR_COORDINATES( l_U708[0]._fU0, ref l_U1101._fU0, ref l_U1101._fU4, ref l_U1101._fU8 );
            l_U1191 = 0.00000000;
        }
        else
        {
            l_U1191 += 1.00000000 * TIMESTEP();
        }
    }
    else
    {
        l_U1190 = 0.00000000;
    }
    return;
}

void sub_79506(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3, boolean bParam4)
{
    float fVar7;
    float fVar8;
    float Result;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_VEH_DRIVEABLE( sub_27786( iParam0 ) ))
        {
            fVar7 = sub_22315( iParam0->_fU0, sub_3854(), 1 );
            if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
            {
                if (fVar7 > 200.00000000)
                {
                    if (bParam3)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                    }
                    l_U14 = 1;
                }
                else if (fVar7 < 6.00000000)
                {
                    l_U14 = 0;
                }
                if (fVar7 > 75.00000000)
                {
                    fVar7 = 75.00000000;
                    l_U14 = 1;
                }
                fVar7 /= 100.00000000;
                fVar7 += -1.00000000;
                fVar7 *= -1.00000000;
                fVar8 = (fVar7 * (uParam2 - uParam1)) + uParam1;
                Result = (fVar7 * (uParam2 - uParam1)) + uParam1;
                if (NOT bParam4)
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, Result );
                }
                return Result;;
            }
            else if (fVar7 < 200)
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, uParam1 );
                return uParam1;
                if (fVar7 > 40.00000000)
                {
                    l_U14 = 1;
                }
            }
            else
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                l_U14 = 1;
                return 0.00000000;
            }
        }
    }
    return iParam0->_fU28;
}

void sub_83103(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( l_U708[uParam0]._fU4 ))
    {
        DELETE_CAR( ref l_U708[uParam0]._fU4 );
    }
    switch (uParam0)
    {
        case 1:
        REQUEST_MODEL( -570033273 );
        while (NOT (HAS_MODEL_LOADED( -570033273 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -570033273, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref l_U708[uParam0]._fU4, 1 );
        sub_12010( l_U708[uParam0]._fU4, -570033273, 1 );
        break;
        default:
        REQUEST_MODEL( -408052231 );
        while (NOT (HAS_MODEL_LOADED( -408052231 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -408052231, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref l_U708[uParam0]._fU4, 1 );
        switch (uParam0)
        {
            case 2:
            sub_12010( l_U708[uParam0]._fU4, -408052231, 13 );
            break;
            case 3:
            sub_12010( l_U708[uParam0]._fU4, -408052231, 16 );
            break;
            case 4:
            sub_12010( l_U708[uParam0]._fU4, -408052231, 6 );
            break;
            case 5:
            sub_12010( l_U708[uParam0]._fU4, -408052231, 7 );
            break;
        }
        break;
    }
    if (IS_VEH_DRIVEABLE( l_U708[uParam0]._fU4 ))
    {
        SET_CAR_AS_MISSION_CAR( l_U708[uParam0]._fU4 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U708[uParam0]._fU4, 1 );
        LOCK_CAR_DOORS( l_U708[uParam0]._fU4, 3 );
    }
    return;
}

void sub_86384()
{
    sub_18718( ref l_U708[1], l_U708[0]._fU0 );
    sub_19414( ref l_U708[1], 0 );
    sub_18718( ref l_U708[2], l_U708[0]._fU0 );
    sub_19414( ref l_U708[2], 1 );
    sub_18718( ref l_U708[3], l_U708[1]._fU0 );
    sub_19414( ref l_U708[3], 2 );
    sub_18718( ref l_U708[4], l_U708[2]._fU0 );
    sub_19414( ref l_U708[4], 2 );
    sub_18718( ref l_U708[5], l_U708[4]._fU0 );
    sub_19414( ref l_U708[5], 2 );
    return;
}

void sub_86576()
{
    if (g_U39217 == 0)
    {
        sub_86620( ref l_U708[0], "E1B1_BK1V1", 0 );
        sub_86620( ref l_U708[1], "E1B1_J1V1", 0 );
        sub_86620( ref l_U708[3], "E1B1_JA1V1", 0 );
        sub_86620( ref l_U708[4], "E1B1_T1V1", 0 );
        sub_86620( ref l_U708[5], "E1B1_C1V1", 0 );
    }
    else if (g_U39217 >= 1)
    {
        sub_86620( ref l_U708[0], "E1B1_BK1V2", 0 );
        sub_86620( ref l_U708[1], "E1B1_J1V1", 0 );
        sub_86620( ref l_U708[3], "E1B1_JA1V1", 0 );
        sub_86620( ref l_U708[4], "E1B1_T1V1", 0 );
        sub_86620( ref l_U708[5], "E1B1_C1V1", 0 );
    }
    if (g_U39217 < 2)
    {
        g_U39217++;
    }
    return;
}

void sub_86620(int iParam0, unknown uParam1, unknown uParam2)
{
    ref iParam0->_fU44->_fU0 = 1;
    ref iParam0->_fU44->_fU8 = 0;
    StrCopy( ref ref iParam0->_fU44->_fU12, uParam1, 16 );
    if (NOT (IS_STRING_NULL( uParam2 )))
    {
        StrCopy( ref ref iParam0->_fU44->_fU28, uParam2, 16 );
    }
    else
    {
        StrCopy( ref ref iParam0->_fU44->_fU28, "", 16 );
    }
    return;
}

void sub_87000(unknown uParam0)
{
    l_U163 = uParam0;
    return;
}

int sub_88882(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    vector vVar17;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    vector vVar35;
    boolean bVar38;
    boolean bVar39;
    float fVar40;
    float fVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    int iVar47;

    if ((NOT l_U138) AND (l_U137))
    {
        if ((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
        {
            switch (uParam2)
            {
                case 0:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, -2.50000000, -uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U206 );
                break;
                case 1:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, 2.50000000, -uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U206 );
                break;
                default:
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    GET_CAR_SPEED( iParam0->_fU4, ref fVar7 );
                    if (fVar7 < 5.00000000)
                    {
                        fVar7 /= 5.00000000;
                        fVar7 += -1.00000000;
                    }
                    else
                    {
                        fVar7 = 0.00000000;
                    }
                }
                else
                {
                    fVar7 = -1.00000000;
                }
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, 0.00000000, fVar7 * uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U206 );
                break;
            }
            fVar7 = 0.00000000;
            fVar7 += 1.00000000 * TIMESTEP();
            fVar7 *= 1000.00000000;
            l_U140 += fVar7;
            l_U207 += fVar7;
            l_U208 += fVar7;
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar42 );
            if (NOT (DOES_OBJECT_EXIST( l_U220 )))
            {
                if ((NOT (HAS_MODEL_LOADED( l_U212 ))) || (NOT (HAS_MODEL_LOADED( l_U211 ))))
                {
                    REQUEST_MODEL( l_U211 );
                    REQUEST_MODEL( l_U212 );
                    return 0;
                }
                l_U184[0] = {uVar43};
                l_U200[0] = l_U206;
                if (DOES_VEHICLE_EXIST( uVar42 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar42, 0.00000000, -uParam1, 0.00000000, ref l_U184[0]._fU0, ref l_U184[0]._fU4, ref l_U184[0]._fU8 );
                    CREATE_OBJECT( l_U211, l_U184[0]._fU0, l_U184[0]._fU4, l_U184[0]._fU8, ref l_U220, 1 );
                    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U220, 1 );
                    SET_OBJECT_COLLISION( l_U220, 0 );
                    SET_OBJECT_HEADING( l_U220, fVar7 );
                    SET_OBJECT_ALPHA( l_U220, 0 );
                    CREATE_OBJECT( l_U212, l_U184[0]._fU0, l_U184[0]._fU4, l_U184[0]._fU8, ref l_U221, 1 );
                    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U221, 1 );
                    SET_OBJECT_COLLISION( l_U221, 0 );
                    SET_OBJECT_HEADING( l_U221, fVar7 );
                    SET_OBJECT_VISIBLE( l_U221, 0 );
                }
                if (g_U1)
                {
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U211 );
                }
                for ( I = 1; I <= (l_U184 - 1); I++ )
                {
                    l_U184[I] = {l_U184[0]};
                    l_U200[I] = l_U200[0];
                }
                l_U213 = {l_U184[l_U184 - 1]};
                l_U216 = l_U200[l_U184 - 1];
                GET_GROUND_Z_FOR_3D_COORD( l_U213._fU0, l_U213._fU4, l_U213._fU8 + 1.50000000, ref fVar8 );
                fVar7 = l_U213._fU8 - fVar8;
                if ((fVar7 > -1.50000000) || (fVar7 < 1.50000000))
                {
                    l_U213._fU8 -= 1.00000000 - l_U217;
                }
                l_U213._fU8 += l_U217;
                l_U140 = 0.00000000;
                l_U209 = 0.00000000;
                l_U207 = 0.00000000;
                l_U208 = 99999.90000000;
                l_U144 = 0;
            }
            else if (NOT (IS_CAR_DEAD( uVar42 )))
            {
                fVar7 = 1.00000000;
                fVar7 *= 1000.00000000;
                fVar41 = fVar7 / (TO_FLOAT( l_U184 ));
                fVar40 = l_U207 / fVar41;
                if (fVar40 > 1.00000000)
                {
                    for ( I = 0; I < l_U184; I++ )
                    {
                        iVar6 = l_U184 - (I + 1);
                        if (iVar6 > 0)
                        {
                            l_U184[iVar6] = {l_U184[iVar6 - 1]};
                            l_U200[iVar6] = l_U200[iVar6 - 1];
                        }
                        else
                        {
                            l_U184[iVar6] = {uVar43};
                            l_U200[iVar6] = l_U206;
                        }
                    }
                    l_U207 -= fVar41;
                    fVar40 += -1.00000000;
                }
                vVar20 = {(l_U184[l_U184 - 2]) - (l_U184[l_U184 - 1])};
                vVar35 = {(l_U184[l_U184 - 1]) + (vVar20 * fVar40)};
                if (NOT (IS_CHAR_INJURED( sub_3854() )))
                {
                    if (IS_CHAR_ON_ANY_BIKE( sub_3854() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar46 );
                        if (IS_VEH_DRIVEABLE( uVar46 ))
                        {
                            GET_CAR_COORDINATES( uVar46, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                            vVar20 = {vVar17 - vVar35};
                            if ((VMAG( vVar20 )) < 3.00000000)
                            {
                                bVar38 = true;
                            }
                        }
                    }
                }
                vVar20 = {vVar35 - l_U213};
                vVar20 = {vVar20 * 0.50000000};
                l_U213 = {l_U213 + vVar20};
                GET_GROUND_Z_FOR_3D_COORD( l_U213._fU0, l_U213._fU4, l_U213._fU8 + 1.50000000, ref fVar8 );
                l_U219 += 150.00000000 * TIMESTEP();
                fVar8 += 0.03000000 * (SIN( l_U219 ));
                fVar7 = fVar8 - l_U213._fU8;
                if ((fVar7 < -0.50000000) || (fVar7 > 0.50000000))
                {
                    fVar8 = l_U213._fU8 - (1.00000000 - l_U217);
                }
                l_U213._fU8 = fVar8 + l_U217;
                fVar7 = (l_U200[l_U200 - 2]) - (l_U200[l_U200 - 1]);
                if (fVar7 > 180.00000000)
                {
                    fVar7 += -360.00000000;
                }
                if (fVar7 < -180.00000000)
                {
                    fVar7 += 360.00000000;
                }
                uVar23._fU8 = (l_U200[l_U184 - 1]) + (fVar7 * fVar40);
                SET_OBJECT_COORDINATES( l_U220, l_U213._fU0, l_U213._fU4, l_U213._fU8 );
                SET_OBJECT_HEADING( l_U220, uVar23._fU8 );
                SET_OBJECT_COORDINATES( l_U221, l_U213._fU0, l_U213._fU4, l_U213._fU8 + 0.01000000 );
                SET_OBJECT_HEADING( l_U221, uVar23._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U220, -1.70000000, 1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar13 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U220, 1.70000000, 1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar14 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U220, -1.70000000, -1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar15 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U220, -1.70000000, -1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar16 );
                fVar9 = (uVar13 + uVar14) / 2.00000000;
                fVar10 = (uVar15 + uVar16) / 2.00000000;
                fVar11 = (uVar14 + uVar16) / 2.00000000;
                fVar12 = (uVar13 + uVar15) / 2.00000000;
                uVar23._fU0 = ATAN( (fVar9 - fVar10) / (2.00000000 * 1.70000000) );
                uVar23._fU4 = (ATAN( (fVar11 - fVar12) / (2.00000000 * 1.70000000) )) * -1.00000000;
                if (uVar23._fU0 > 15.00000000)
                {
                    uVar23._fU0 = 0.00000000;
                }
                if (uVar23._fU0 < -15.00000000)
                {
                    uVar23._fU0 = 0.00000000;
                }
                if (uVar23._fU4 > 5.00000000)
                {
                    uVar23._fU4 = 0.00000000;
                }
                if (uVar23._fU4 < -5.00000000)
                {
                    uVar23._fU4 = 0.00000000;
                }
                SET_OBJECT_ROTATION( l_U220, uVar23._fU0, uVar23._fU4, uVar23._fU8 );
                SET_OBJECT_ROTATION( l_U221, uVar23._fU0, uVar23._fU4, uVar23._fU8 );
                if (l_U136 == 0)
                {
                    if (sub_52785())
                    {
                        l_U140 = 0.00000000;
                    }
                    bVar39 = false;
                    if (NOT l_U143)
                    {
                        if (l_U140 > l_U141)
                        {
                            l_U143 = 1;
                            bVar39 = true;
                        }
                    }
                    else if (l_U140 > l_U142)
                    {
                        bVar39 = true;
                    }
                    if (IS_MESSAGE_BEING_DISPLAYED())
                    {
                        bVar39 = false;
                    }
                    if (sub_91555())
                    {
                        bVar39 = false;
                    }
                    SET_OBJECT_VISIBLE( l_U220, 0 );
                    SET_OBJECT_VISIBLE( l_U221, 0 );
                    if (bVar39)
                    {
                        l_U209 = 0.00000000;
                        l_U140 = 0.00000000;
                        l_U136 = 1;
                        if (l_U208 > 2000.00000000)
                        {
                            l_U144 = 1;
                            l_U208 = 0.00000000;
                        }
                    }
                }
                if (l_U136 == 1)
                {
                    if (sub_91555())
                    {
                        PRINTSTRING( "Marker told to fade out 1 \n" );
                        sub_30498();
                        l_U136 = 3;
                    }
                    else if (l_U140 > 400.00000000)
                    {
                        SET_OBJECT_VISIBLE( l_U220, 1 );
                        SET_OBJECT_ALPHA( l_U220, 255 );
                    }
                    fVar7 = 0.00000000;
                    fVar7 += 1.00000000 * TIMESTEP();
                    fVar7 *= 1000.00000000;
                    if (bVar38)
                    {
                        if (DOES_OBJECT_EXIST( l_U221 ))
                        {
                            SET_OBJECT_VISIBLE( l_U221, 1 );
                        }
                        l_U209 += fVar7;
                    }
                    else if (DOES_OBJECT_EXIST( l_U221 ))
                    {
                        SET_OBJECT_VISIBLE( l_U221, 0 );
                    }
                    l_U209 = 0.00000000;;
                    if (l_U209 > 1000.00000000)
                    {
                        l_U140 = 99999.00000000;
                        l_U144 = 2;
                        if (IS_PLAYER_PLAYING( sub_5225() ))
                        {
                            GET_PLAYER_MAX_HEALTH( sub_5225(), ref iVar47 );
                            GET_CHAR_HEALTH( sub_3854(), ref I );
                            if (I < iVar47)
                            {
                                fVar7 = TO_FLOAT( I );
                                fVar7 += 15.00000000;
                                I = ROUND( fVar7 );
                                if (I > iVar47)
                                {
                                    I = iVar47;
                                }
                                SET_CHAR_HEALTH( sub_3854(), I );
                            }
                            else
                            {
                                GET_PLAYER_MAX_ARMOUR( sub_5225(), ref iVar47 );
                                GET_CHAR_ARMOUR( sub_3854(), ref I );
                                I = iVar47 - I;
                                if (I > 15)
                                {
                                    I = 15;
                                }
                                ADD_ARMOUR_TO_CHAR( sub_3854(), I );
                            }
                            l_U140 = 0.00000000;
                            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3854() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3854(), ref uVar42 );
                                GET_CAR_HEALTH( uVar42, ref I );
                                I += 150;
                                SET_CAR_HEALTH( uVar42, I );
                            }
                        }
                        l_U218 = 255;
                        l_U140 = 0.00000000;
                        PRINTSTRING( "Marker told to fade out 2 \n" );
                        l_U136 = 3;
                    }
                }
                if (l_U136 == 3)
                {
                    if (l_U140 > 400.00000000)
                    {
                        l_U218 = 0;
                        if (NOT l_U139)
                        {
                            l_U138 = 1;
                            l_U140 = 0.00000000;
                        }
                        else
                        {
                            l_U140 = 999999.80000000;
                        }
                        l_U136 = 0;
                    }
                }
                sub_92698();
                return ((VDIST( l_U213, sub_21681( sub_3854(), 1 ) )) < 5.00000000) AND (IS_CHAR_IN_ANY_CAR( sub_3854() ));
            }
            else
            {
                sub_4258();
            }
        }
        else
        {
            sub_4258();
        }
    }
    else
    {
        sub_4258();
    }
    sub_92698();
    return 0;
}

int sub_91555()
{
    if (l_U139)
    {
        PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 1 \n" );
        return 1;
    }
    if (IS_PLAYER_PLAYING( sub_5225() ))
    {
        if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3854() )))
        {
            PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 2 \n" );
            return 1;
        }
        if (IS_WANTED_LEVEL_GREATER( sub_5225(), 0 ))
        {
            PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 3 \n" );
            return 1;
        }
    }
    else
    {
        PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 4 \n" );
        return 1;
    }
    return 0;
}

void sub_92698()
{
    switch (l_U144)
    {
        case 0: break;
        case 1:
        if (NOT (sub_30267( l_U145 )))
        {
            sub_6081( 8, 0, "LAZLOW", 0 );
            if (sub_53310( "E1MF3_BLIPB", "E1MF3AU", 0, 1, ref l_U145, 2, 1 ))
            {
                l_U144 = 3;
            }
            else
            {
                PRINTSTRING( "Biker Marker - trying to play EM1F3_BLIPB - line 0 \n" );
            }
        }
        else
        {
            l_U144 = 0;
        }
        break;
        case 2:
        if (NOT (sub_30267( l_U145 )))
        {
            sub_6081( 8, 0, "LAZLOW", 0 );
            if (sub_53310( "E1MF3_BLIPB", "E1MF3AU", 1, 1, ref l_U145, 2, 1 ))
            {
                l_U144 = 3;
            }
            else
            {
                PRINTSTRING( "Biker Marker - trying to play E1MF3_BLIPB - line 1 \n" );
            }
        }
        else
        {
            l_U144 = 0;
        }
        break;
        case 3:
        if (NOT (sub_30267( l_U145 )))
        {
            l_U144 = 0;
        }
        break;
    }
    return;
}

void sub_93236()
{
    switch (l_U706)
    {
        case 0:
        sub_3616( ref l_U939, 0 );
        sub_3755( 0, ref l_U708 );
        SET_PLAYER_CONTROL( sub_5225(), 0 );
        if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U877[0] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U877[0] );
        }
        if (DOES_VEHICLE_EXIST( l_U877[1] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U877[1] );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1745203402 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2107556865 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 226415164 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1165777728 );
        sub_3959();
        sub_8373();
        sub_4258();
        sub_3277();
        l_U706 = 1;
        break;
        case 1:
        CLEAR_AREA_OF_CARS( -1704.34000000, 357.78000000, 25, 150 );
        CLEAR_AREA_OF_CHARS( -1704.34000000, 357.78000000, 25, 150 );
        CLEAR_AREA_OF_COPS( -1704.34000000, 357.78000000, 25, 150 );
        SWITCH_ROADS_OFF( -1743.27000000, 340.29000000, 20, -1674.02000000, 398.20000000, 30 );
        SWITCH_PED_PATHS_OFF( 63781, 330, 20, 63871, 405, 30 );
        LOAD_ADDITIONAL_TEXT( "E1B1AUD", 6 );
        START_CUTSCENE_NOW( "bg01_cb" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "bg01_cb" );
        l_U706 = 2;
        break;
        case 2:
        l_U703 = 9;
        break;
    }
    return;
}

void sub_93790()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if ((IS_SCREEN_FADED_IN()) AND (sub_93799()))
    {
        l_U519 = 23;
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    switch (l_U519)
    {
        case 0:
        l_U521[0] = 443141696;
        l_U521[1] = 1015062504;
        l_U521[2] = -259610509;
        l_U521[3] = 1350491501;
        l_U521[4] = -97968031;
        l_U521[5] = 1941123364;
        l_U521[6] = -1658159368;
        l_U521[7] = 1343754678;
        l_U521[8] = -2139514995;
        l_U521[9] = 61597377;
        l_U521[10] = -2049396802;
        l_U521[11] = -1758615024;
        l_U521[12] = 1469285540;
        l_U521[13] = -1057900728;
        l_U521[14] = 502027354;
        l_U521[15] = 1650663205;
        l_U521[16] = 11021525;
        l_U521[17] = -2393703;
        l_U540[0] = {-0.36250000, -2.16270000, -0.19670000};
        l_U595[0] = {-1.57000000, 0.00000000, 1.14100000};
        l_U540[1] = {-0.46200000, -1.50280000, 0.12700000};
        l_U595[1] = {-1.39200000, 0.00000000, 1.17400000};
        l_U540[3] = {0.55650000, -1.87220000, 0.06800000};
        l_U595[3] = {-1.43100000, 0.00000000, -1.47180000};
        l_U540[4] = {-0.51200000, -2.17670000, -0.18900000};
        l_U595[4] = {-1.57000000, 0.00000000, 0.34500000};
        l_U540[5] = {-0.07680000, -0.54650000, 0.79200000};
        l_U595[5] = {0.00000000, 0.02450000, 0.00000000};
        l_U540[6] = {-0.15930000, -2.34210000, -0.18900000};
        l_U595[6] = {1.57000000, 0.00000000, 1.57000000};
        l_U540[7] = {-0.35030000, -1.50800000, -0.16140000};
        l_U595[7] = {0.00000000, 0.00000000, 0.51630000};
        l_U540[9] = {0.00000000, -0.58960010, 0.39300000};
        l_U595[9] = {0.00000000, 0.00000000, 0.00000000};
        l_U540[8] = {0.06200000, -1.02300000, 0.26340000};
        l_U595[8] = {-1.09570000, -0.04870000, 0.17100000};
        l_U540[10] = {-0.56080000, -1.93870000, -0.07540000};
        l_U595[10] = {0.00000000, 0.00000000, 0.48730000};
        l_U540[11] = {-0.52960000, -1.31150000, 0.13030000};
        l_U595[11] = {-0.18930000, 0.00000000, 1.14800000};
        l_U540[12] = {0.48390000, -1.72650000, 0.16830000};
        l_U595[12] = {-1.41200000, -0.01660000, -1.43270000};
        l_U540[13] = {-0.00300000, -1.33400000, 0.10330000};
        l_U595[13] = {-0.56020000, 0.00000000, 0.00000000};
        l_U540[14] = {-0.20370000, -1.60900000, -0.06940000};
        l_U595[14] = {-0.84600000, 0.00000000, 0.00000000};
        l_U540[15] = {0.28580000, -2.16650000, -0.15670000};
        l_U595[15] = {-1.57500000, 0.00000000, 0.00000000};
        l_U540[16] = {0.07180000, -2.11820000, -0.18480000};
        l_U595[16] = {-1.57000000, -1.40000000, 1.57000000};
        l_U540[17] = {0.17350000, -1.86920000, -0.20860000};
        l_U595[17] = {0.89420000, 0.07720000, -2.72200000};
        l_U540[2] = {-0.21220000, -0.52550000, 0.61730000};
        l_U595[2] = {0.00000000, 0.00000000, 0.00000000};
        g_U10462 = 1;
        FLUSH_SCENARIO_BLOCKING_AREAS();
        if (NOT (IS_CAR_DEAD( l_U875 )))
        {
            SET_CAR_ENGINE_ON( l_U875, 0, 1 );
        }
        sub_3616( ref l_U939, 0 );
        sub_3755( 0, ref l_U708 );
        SET_PLAYER_CONTROL( sub_5225(), 0 );
        sub_8373();
        sub_4258();
        sub_3277();
        REQUEST_MODEL( -2034268874 );
        REQUEST_ANIMS( "MISSSTRIPCLUB" );
        REQUEST_ANIMS( "AMB@BAR" );
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( -1716.98300000, 346.48850000, 25.34170000, 4.00000000, 3 );
        while ((NOT (HAVE_ANIMS_LOADED( "AMB@BAR" ))) || ((NOT (HAS_MODEL_LOADED( -2034268874 ))) || (NOT (HAVE_ANIMS_LOADED( "AMB@BAR" )))))
        {
            WAIT( 0 );
        }
        sub_3616( ref l_U939, 0 );
        sub_3616( ref l_U933, 0 );
        sub_3755( 0, ref l_U708 );
        sub_95606();
        g_U10460 = 1;
        l_U519 = 1;
        break;
        case 1:
        SET_CAM_POS( l_U502, -1719.82000000, 368.80010000, 24.97207000 );
        SET_CAM_ROT( l_U502, 12.57605000, 0.00000000, -155.62550000 );
        SET_CAM_FOV( l_U502, 42.00000000 );
        SET_CAM_POS( l_U504, -1717.55000000, 368.80010000, 24.97207000 );
        SET_CAM_ROT( l_U504, 12.20262000, -0.00000000, -172.13910000 );
        SET_CAM_FOV( l_U504, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 9000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U505, 0, 0, 1, 1 );
        CLEAR_HELP();
        sub_95957( 1 );
        sub_96060( ref l_U505, 1 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        PRINT_HELP( "ACT_01" );
        SETTIMERA( 0 );
        l_U519 = 2;
        break;
        case 2:
        CLEAR_AREA_OF_CARS( -1719.82000000, 368.80010000, 24.97207000, 120.00000000 );
        if (TIMERA() > 7500)
        {
            if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_HELP();
            l_U519 = 3;
        }
        break;
        case 3:
        l_U684 = sub_96305();
        if (l_U684 == 0)
        {
            l_U684 = 188410296;
        }
        REQUEST_MODEL( l_U684 );
        LOAD_ALL_OBJECTS_NOW();
        while (NOT (HAS_MODEL_LOADED( l_U684 )))
        {
            WAIT( 0 );
        }
        LOAD_SCENE( -1720.60000000, 351.63770000, 26.25248000 );
        l_U681 = sub_3854();
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U681 )))
        {
            SET_CHAR_COORDINATES( l_U681, -1715.19300000, 348.38630000, 25.34170000 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( l_U681, -1715.19300000, 348.38630000, 25.34170000 );
        }
        SET_ROOM_FOR_CHAR_BY_NAME( l_U681, "E1_Lost_grndbar" );
        SET_CHAR_VISIBLE( l_U681, 0 );
        CREATE_CHAR( 4, l_U684, -1713.34700000, 346.52830000, 25.34170000, ref l_U683, 1 );
        SET_CHAR_HEADING( l_U683, 255.00000000 );
        TASK_PLAY_ANIM( l_U683, "wipe_counter", "AMB@BAR", 1.00000000, 1, 0, 0, 0, -1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U683 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U683, "E1_Lost_grndbar" );
        SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U683, 1 );
        SET_CHAR_RELATIONSHIP( l_U683, 1, 0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U684 );
        SET_CAM_POS( l_U502, -1720.64900000, 351.62550000, 26.28959000 );
        SET_CAM_ROT( l_U502, 5.05200300, 0.00000000, 158.62020000 );
        SET_CAM_FOV( l_U502, 22.80006000 );
        SET_CAM_POS( l_U504, -1722.75800000, 351.61750000, 26.30006000 );
        SET_CAM_ROT( l_U504, 4.92814500, 0.00000000, 179.61920000 );
        SET_CAM_FOV( l_U504, 22.80006000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 8500, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U505, 0, 0, 1, 1 );
        SETTIMERA( 0 );
        REQUEST_INTERIOR_MODELS( 1362811823, "E1_Lost_grndbar" );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U687 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U687, "E1_Lost_grndbar" );
        WAIT( 1000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 8500, 0 );
        DO_SCREEN_FADE_IN( 500 );
        l_U519 = 4;
        break;
        case 4:
        if ((l_U692 == 0) AND (TIMERA() > 5500))
        {
            l_U692 = 1;
        }
        if ((l_U691 == 0) AND (TIMERA() > 8500))
        {
            SET_CAM_POS( l_U502, -1721.95800000, 353.25730000, 29.11952000 );
            SET_CAM_ROT( l_U502, -21.10899000, -0.00000000, -155.13270000 );
            SET_CAM_FOV( l_U502, 53.99998000 );
            SET_CAM_POS( l_U504, -1721.95800000, 353.25730000, 29.11952000 );
            SET_CAM_ROT( l_U504, -21.10899000, -0.00000000, -155.13270000 );
            SET_CAM_FOV( l_U504, 50.99998000 );
            SET_CAM_POS( l_U502, -1724.41100000, 344.71080000, 26.70392000 );
            SET_CAM_ROT( l_U502, 0.68425100, 0.00000000, -55.48714000 );
            SET_CAM_FOV( l_U502, 28.50004000 );
            SET_CAM_POS( l_U504, -1724.65200000, 345.31080000, 26.70392000 );
            SET_CAM_ROT( l_U504, 0.45506800, -0.00000000, -74.96771000 );
            SET_CAM_FOV( l_U504, 28.50004000 );
            SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 8000, 0 );
            l_U691 = 1;
        }
        if (TIMERA() > 15000)
        {
            l_U519 = 5;
        }
        break;
        case 5:
        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        REMOVE_ANIMS( "AMB@BAR" );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U683 );
        SET_CHAR_COORDINATES( sub_3854(), -1717.75400000, 347.02550000, 31.73180000 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_3854(), "E1_Lost_1stfloor" );
        SET_CAM_POS( l_U502, -1715.07000000, 347.13420000, 31.94800000 );
        SET_CAM_ROT( l_U502, 2.48061600, -0.00000000, -32.66552000 );
        SET_CAM_FOV( l_U502, 24.90005000 );
        SET_CAM_POS( l_U504, -1715.19300000, 347.31290000, 31.94800000 );
        SET_CAM_ROT( l_U504, 0.87332310, 0.00000000, -36.23764000 );
        SET_CAM_FOV( l_U504, 24.90005000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 11000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U505, 0, 0, 1, 1 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U687 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U687, "E1_Lost_1stfloor" );
        REQUEST_INTERIOR_MODELS( 1362811823, "E1_Lost_1stfloor" );
        SETTIMERA( 0 );
        DO_SCREEN_FADE_IN_UNHACKED( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        PRINT_HELP( "ACT_03" );
        l_U519 = 6;
        break;
        case 6:
        if (TIMERA() > 10100)
        {
            SET_CHAR_COORDINATES( sub_3854(), -1725.38000000, 333.38000000, 30.71000000 );
            l_U519 = 7;
        }
        break;
        case 7:
        SET_CAM_POS( l_U502, -1725.27200000, 333.86000000, 31.57631000 );
        SET_CAM_ROT( l_U502, -16.23103000, -4.38136700, -2.71430800 );
        SET_CAM_FOV( l_U502, 37.50002000 );
        SET_CAM_POS( l_U504, -1725.79300000, 333.34010000, 32.39149000 );
        SET_CAM_ROT( l_U504, -34.52591000, -3.76145400, -16.72079000 );
        SET_CAM_FOV( l_U504, 37.50002000 );
        SET_CAM_POS( l_U502, -1723.19000000, 336.07390000, 31.15925000 );
        SET_CAM_ROT( l_U502, 0.16592000, 0.00000000, 122.23140000 );
        SET_CAM_FOV( l_U502, 36.30002000 );
        SET_CAM_POS( l_U504, -1723.00700000, 335.64140000, 31.15965000 );
        SET_CAM_ROT( l_U504, 0.16592000, -0.00000000, 106.53240000 );
        SET_CAM_FOV( l_U504, 36.30002000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 10000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U505, 0, 0, 1, 1 );
        SETTIMERA( 0 );
        PRINT_HELP( "ACT_04" );
        l_U519 = 8;
        break;
        case 8:
        if (TIMERA() > 10000)
        {
            l_U519 = 9;
        }
        break;
        case 9:
        SET_CHAR_COORDINATES( sub_3854(), -1723.24400000, 333.65830000, 25.34170000 );
        SET_CHAR_VISIBLE( sub_3854(), 0 );
        SET_CAM_POS( l_U502, -1721.62900000, 332.34350000, 32.09904000 );
        SET_CAM_ROT( l_U502, 16.60547000, 0.00000000, -65.00983000 );
        SET_CAM_FOV( l_U502, 45.00000000 );
        SET_CAM_POS( l_U504, -1721.68200000, 333.23870000, 32.27601000 );
        SET_CAM_ROT( l_U504, 15.00118000, 0.00000000, -83.22990000 );
        SET_CAM_FOV( l_U504, 45.00000000 );
        SET_CAM_POS( l_U502, -1721.63600000, 332.45670000, 32.12140000 );
        SET_CAM_ROT( l_U502, 12.62124000, -0.00000000, -75.10413000 );
        SET_CAM_FOV( l_U502, 28.50004000 );
        SET_CAM_POS( l_U504, -1721.47600000, 333.13660000, 32.12140000 );
        SET_CAM_ROT( l_U504, 18.46541000, 0.00000000, -82.20882000 );
        SET_CAM_FOV( l_U504, 45.90000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 11500, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U505, 0, 0, 1, 1 );
        SETTIMERA( 0 );
        PRINT_HELP( "ACT_05" );
        l_U519 = 10;
        break;
        case 10:
        if (TIMERA() > 10500)
        {
            l_U519 = 11;
        }
        break;
        case 11:
        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        REQUEST_CAR_RECORDING( 1760 );
        REQUEST_MODEL( 301427732 );
        LOAD_ALL_OBJECTS_NOW();
        while ((NOT (HAS_MODEL_LOADED( 301427732 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1760 ))))
        {
            WAIT( 0 );
        }
        SET_CAM_POS( l_U502, -1721.74000000, 335.82250000, 25.64099000 );
        SET_CAM_ROT( l_U502, 5.13968500, 0.00000000, -130.79070000 );
        SET_CAM_FOV( l_U502, 45.90000000 );
        SET_CAM_POS( l_U504, -1721.66400000, 335.75650000, 27.07744000 );
        SET_CAM_ROT( l_U504, -30.84207000, -0.00000000, -132.50960000 );
        SET_CAM_FOV( l_U504, 52.79998000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 11000, 0 );
        SETTIMERA( 0 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U687 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U687, "E1_Lost_grndsave" );
        REQUEST_INTERIOR_MODELS( 1362811823, "E1_Lost_grndsave" );
        DO_SCREEN_FADE_IN_UNHACKED( 500 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        PRINT_HELP( "ACT_06" );
        l_U519 = 12;
        break;
        case 12:
        if (TIMERA() > 9000)
        {
            l_U519 = 13;
        }
        break;
        case 13:
        SET_CAM_POS( l_U502, -1709.08600000, 349.80110000, 26.80217000 );
        SET_CAM_ROT( l_U502, 4.03428000, 0.00000000, -113.02150000 );
        SET_CAM_FOV( l_U502, 45.00000000 );
        SET_CAM_POS( l_U504, -1709.50300000, 347.95000000, 26.80217000 );
        SET_CAM_ROT( l_U504, 5.98473500, 0.00000000, -82.10960000 );
        SET_CAM_FOV( l_U504, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 20000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U505, 0, 0, 1, 1 );
        SETTIMERA( 0 );
        PRINT_HELP( "ACT_06B" );
        SET_CHAR_COORDINATES( sub_3854(), -1704.64700000, 345.71290000, 25.92250000 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_3854(), "E1_Lost_grnddrink" );
        REQUEST_INTERIOR_MODELS( 1362811823, "E1_Lost_grnddrink" );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U687 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U687, "E1_Lost_grnddrink" );
        g_U10463 = 1;
        l_U519 = 14;
        break;
        case 14:
        if ((l_U696 == 0) AND ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND ((IS_SCREEN_FADED_IN()) AND (TIMERA() > 1000))))
        {
            PRINT_HELP( "ACT_06E" );
            l_U696 = 1;
        }
        if (TIMERA() > 11000)
        {
            g_U10463 = 0;
            l_U519 = 15;
        }
        break;
        case 15:
        DO_SCREEN_FADE_OUT_UNHACKED( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( 729783779 );
        REQUEST_MODEL( -967822724 );
        sub_13824( 6 );
        REQUEST_ANIMS( "PLAYIDLES_STD" );
        for ( l_U520 = 0; l_U520 <= 17; l_U520++ )
        {
            REQUEST_MODEL( l_U521[l_U520] );
        }
        REQUEST_MODEL( -570033273 );
        REQUEST_MODEL( -408052231 );
        sub_13824( 7 );
        REQUEST_MODEL( -1119029635 );
        REQUEST_MODEL( 1973316962 );
        LOAD_ALL_OBJECTS_NOW();
        while ((NOT sub_100255()) || ((NOT (HAVE_ANIMS_LOADED( "PLAYIDLES_STD" ))) || ((NOT (sub_13785( 6 ))) || ((NOT (HAS_MODEL_LOADED( -967822724 ))) || (NOT (HAS_MODEL_LOADED( 729783779 )))))))
        {
            WAIT( 0 );
        }
        CREATE_CAR( 729783779, l_U669._fU0, l_U669._fU4, l_U669._fU8, ref l_U673, 1 );
        SET_CAR_HEADING( l_U673, l_U672 );
        SET_CAR_ON_GROUND_PROPERLY( l_U673 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U673, 9, 1 );
        CHANGE_CAR_COLOUR( l_U673, 0, 0 );
        SET_EXTRA_CAR_COLOURS( l_U673, 0, 0 );
        CONTROL_CAR_DOOR( l_U673, 2, 0, 1.00000000 );
        CONTROL_CAR_DOOR( l_U673, 3, 0, 1.00000000 );
        CREATE_OBJECT( -967822724, l_U669._fU0, l_U669._fU4, l_U669._fU8, ref l_U685, 1 );
        ATTACH_OBJECT_TO_CAR( l_U685, l_U673, 0, 0.00000000, 0.00000000, 0.19500000, 0.00000000, 0.00000000, 0.00000000 );
        for ( l_U520 = 0; l_U520 <= 17; l_U520++ )
        {
            CREATE_OBJECT( l_U521[l_U520], l_U669._fU0, l_U669._fU4, l_U669._fU8, ref l_U650[l_U520], 1 );
            ATTACH_OBJECT_TO_OBJECT( l_U650[l_U520], l_U685, 0, l_U540[l_U520], l_U595[l_U520] );
        }
        LOAD_ALL_OBJECTS_NOW();
        while ((NOT (sub_13785( 7 ))) || ((NOT (HAS_MODEL_LOADED( -408052231 ))) || (NOT (HAS_MODEL_LOADED( -570033273 )))))
        {
            WAIT( 0 );
        }
        sub_100927( 7, ref l_U679, -1739.15900000, 333.04720000, 24.44420000, 50.26670000 );
        CREATE_CAR( -408052231, -1740.25100000, 331.32040000, 24.93440000, ref l_U674, 1 );
        SET_CAR_HEADING( l_U674, 11.63840000 );
        CREATE_CAR( -570033273, -1741.31500000, 329.65340000, 24.93450000, ref l_U675, 1 );
        SET_CAR_HEADING( l_U675, 24.93430000 );
        CREATE_CAR( -408052231, -1741.92200000, 328.23010000, 24.93470000, ref l_U676, 1 );
        SET_CAR_HEADING( l_U676, 30.61090000 );
        SET_CHAR_COORDINATES( sub_3854(), -1694.43000000, 343.99380000, 24.40730000 );
        SET_CHAR_HEADING( sub_3854(), 74.12450000 );
        CLEAR_ROOM_FOR_CHAR( sub_3854() );
        l_U702 = sub_96305();
        if (l_U702 == 0)
        {
            l_U702 = 188410296;
        }
        REQUEST_MODEL( l_U702 );
        REQUEST_CAR_RECORDING( 1761 );
        LOAD_ALL_OBJECTS_NOW();
        while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1761 ))) || (NOT (HAS_MODEL_LOADED( l_U702 ))))
        {
            WAIT( 0 );
        }
        CLEAR_AREA_OF_CARS( -1696.40700000, 354.70180000, 24.81690000, 80.00000000 );
        if (NOT (IS_CAR_DEAD( l_U875 )))
        {
            SET_CAR_COORDINATES( l_U875, -1696.40700000, 354.70180000, 24.81690000 );
            SET_CAR_HEADING( l_U875, 58.16850000 );
            SET_CAR_ENGINE_ON( l_U875, 1, 1 );
            WARP_CHAR_INTO_CAR( sub_3854(), l_U875 );
            SET_CHAR_VISIBLE( sub_3854(), 1 );
            SET_BLIP_THROTTLE_RANDOMLY( l_U875, 1 );
        }
        SET_CAM_POS( l_U502, -1696.81800000, 362.82100000, 24.85228000 );
        SET_CAM_ROT( l_U502, 3.49507600, -0.00000000, 170.10950000 );
        SET_CAM_FOV( l_U502, 27.80004000 );
        SET_CAM_POS( l_U504, -1696.42300000, 362.44620000, 24.89072000 );
        SET_CAM_ROT( l_U504, 2.77847100, -0.00000000, 172.18910000 );
        SET_CAM_FOV( l_U504, 33.90004000 );
        GET_GAME_VIEWPORT_ID( ref l_U687 );
        CLEAR_ROOM_FOR_VIEWPORT( l_U687 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 4000, 0 );
        SETTIMERA( 0 );
        if (NOT (IS_CAR_DEAD( l_U875 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U875, 1761 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U875, 200.00000000 );
            SET_PLAYBACK_SPEED( l_U875, 1.10000000 );
        }
        DO_SCREEN_FADE_IN( 500 );
        PRINT_HELP( "ACT_06C" );
        l_U519 = 16;
        break;
        case 16:
        if ((l_U701 == 0) AND ((l_U686 == 0) AND ((TIMERA() < 5000) AND (TIMERA() > 1000))))
        {
            l_U686 = START_PTFX_ON_VEH( "E1_burnout_smoke", l_U875, l_U688, l_U362, 1065353216 );
            l_U701 = 1;
        }
        if ((l_U700 == 0) AND (l_U686 > 0))
        {
            UPDATE_PTFX_OFFSETS( l_U686, l_U688, l_U362 );
        }
        if ((l_U700 == 0) AND ((l_U701 == 1) AND ((l_U686 > 0) AND (TIMERA() > 6000))))
        {
            STOP_PTFX( l_U686 );
            l_U700 = 1;
        }
        if ((l_U695 == 0) AND (TIMERA() > 10000))
        {
            PRINT_HELP( "ACT_06D" );
            SET_CAM_POS( l_U502, -1696.42300000, 362.44620000, 24.89072000 );
            SET_CAM_ROT( l_U502, 2.77847100, -0.00000000, 172.18910000 );
            SET_CAM_FOV( l_U502, 33.90004000 );
            SET_CAM_POS( l_U504, -1696.42300000, 362.44080000, 25.92986000 );
            SET_CAM_ROT( l_U504, -8.33691000, -0.00000000, 175.97060000 );
            SET_CAM_FOV( l_U504, 27.90004000 );
            SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 6000, 0 );
            l_U695 = 1;
        }
        if (TIMERA() > 15500)
        {
            if (NOT (IS_CAR_DEAD( l_U875 )))
            {
                SET_BLIP_THROTTLE_RANDOMLY( l_U875, 0 );
            }
            if ((l_U700 == 0) AND (l_U686 > 0))
            {
                STOP_PTFX( l_U686 );
                l_U700 = 1;
            }
            l_U519 = 17;
        }
        break;
        case 17:
        CREATE_CAR( -408052231, -1737.59200000, 425.06000000, 24.86530000, ref l_U677, 1 );
        CREATE_CHAR_INSIDE_CAR( l_U677, 26, l_U702, ref l_U682 );
        START_PLAYBACK_RECORDED_CAR( l_U677, 1760 );
        SET_PLAYBACK_SPEED( l_U677, 0.90000000 );
        SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U677, 2000.00000000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U702 );
        SET_CAM_POS( l_U502, -1694.75000000, 353.49730000, 26.16653000 );
        SET_CAM_ROT( l_U502, -11.04749000, -0.00000000, 70.96906000 );
        SET_CAM_FOV( l_U502, 50.00000000 );
        SET_CAM_POS( l_U504, -1694.75000000, 353.49730000, 26.16653000 );
        SET_CAM_ROT( l_U504, -11.04749000, -0.00000000, 70.96906000 );
        SET_CAM_FOV( l_U504, 54.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 10000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U505, 0, 0, 1, 1 );
        SETTIMERA( 0 );
        PRINT_HELP( "ACT_07" );
        l_U519 = 18;
        break;
        case 18:
        CLEAR_AREA_OF_CARS( -1694.75000000, 353.49730000, 26.16653000, 100.00000000 );
        if (NOT (IS_CAR_DEAD( l_U677 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U677 ))
            {
                if ((l_U694 == 0) AND ((FIND_TIME_POSITION_IN_RECORDING( l_U677 )) > 8720))
                {
                    if (NOT (IS_CHAR_INJURED( l_U682 )))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar2 );
                        TASK_LEAVE_ANY_CAR( 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1716.00000000, 352.80000000, 25.69000000, 2, 15000, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( uVar2 );
                        TASK_PERFORM_SEQUENCE( l_U682, uVar2 );
                        CLEAR_SEQUENCE_TASK( uVar2 );
                    }
                    l_U694 = 1;
                }
            }
        }
        if (TIMERA() > 10000)
        {
            l_U519 = 19;
        }
        break;
        case 19:
        sub_100927( 6, ref l_U680, -1732.65000000, 359.23020000, 24.44420000, 206.02300000 );
        SET_CAM_POS( l_U502, -1745.92300000, 330.23540000, 24.85663000 );
        SET_CAM_ROT( l_U502, 5.71697600, 0.00000000, -85.77580000 );
        SET_CAM_FOV( l_U502, 41.10001000 );
        SET_CAM_POS( l_U504, -1746.90400000, 331.90810000, 24.73864000 );
        SET_CAM_ROT( l_U504, 10.07146000, 0.00000000, -105.26760000 );
        SET_CAM_FOV( l_U504, 41.10001000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 10000, 0 );
        if (NOT (IS_CHAR_INJURED( l_U679 )))
        {
            TASK_USE_MOBILE_PHONE( l_U679, 1 );
        }
        PRINT_HELP( "ACT_08" );
        SETTIMERA( 0 );
        l_U519 = 20;
        break;
        case 20:
        if ((l_U693 == 0) AND (TIMERA() > 5000))
        {
            if ((NOT (IS_CAR_DEAD( l_U674 ))) AND (NOT (IS_CHAR_INJURED( l_U679 ))))
            {
                OPEN_SEQUENCE_TASK( ref uVar3 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U674, 5000 );
                TASK_CAR_DRIVE_WANDER( 0, l_U674, 5, 5 );
                CLOSE_SEQUENCE_TASK( uVar3 );
                TASK_PERFORM_SEQUENCE( l_U679, uVar3 );
                CLEAR_SEQUENCE_TASK( uVar3 );
            }
            l_U693 = 1;
        }
        if (TIMERA() > 9000)
        {
            l_U519 = 21;
        }
        break;
        case 21:
        SETTIMERA( 0 );
        SET_CAM_POS( l_U502, -1731.03300000, 355.99060000, 25.14783000 );
        SET_CAM_ROT( l_U502, 2.54594000, -0.00000000, 11.05996000 );
        SET_CAM_FOV( l_U502, 45.00000000 );
        SET_CAM_POS( l_U504, -1733.05500000, 358.09520000, 26.28424000 );
        SET_CAM_ROT( l_U504, -17.92718000, 0.00000000, -39.60189000 );
        SET_CAM_FOV( l_U504, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U505, l_U502, l_U504, 10000, 0 );
        if (NOT (IS_CHAR_INJURED( l_U680 )))
        {
            TASK_PLAY_ANIM( l_U680, "lookabout", "PLAYIDLES_STD", 8.00000000, 1, 0, 0, 0, -1 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 301427732 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -570033273 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -408052231 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 584879743 );
        DELETE_CAR( ref l_U677 );
        DELETE_CHAR( ref l_U682 );
        DELETE_CAR( ref l_U674 );
        DELETE_CAR( ref l_U675 );
        DELETE_CAR( ref l_U676 );
        SETTIMERA( 0 );
        PRINT_HELP( "ACT_09" );
        l_U519 = 22;
        break;
        case 22:
        if (TIMERA() > 12000)
        {
            l_U519 = 23;
        }
        break;
        case 23:
        if ((l_U700 == 0) AND (l_U686 > 0))
        {
            STOP_PTFX( l_U686 );
            l_U700 = 1;
        }
        if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
        }
        if (NOT (IS_CAR_DEAD( l_U875 )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
            {
                WARP_CHAR_FROM_CAR_TO_CAR( sub_3854(), l_U875, -1 );
            }
            else
            {
                WARP_CHAR_INTO_CAR( sub_3854(), l_U875 );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -967822724 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 729783779 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 301427732 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -570033273 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 584879743 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1119029635 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1973316962 );
        DELETE_CAR( ref l_U674 );
        DELETE_CAR( ref l_U675 );
        DELETE_CAR( ref l_U676 );
        DELETE_OBJECT( ref l_U685 );
        DELETE_CAR( ref l_U673 );
        DELETE_CAR( ref l_U677 );
        DELETE_CHAR( ref l_U682 );
        SET_CHAR_VISIBLE( sub_3854(), 1 );
        sub_95957( 0 );
        sub_96060( ref l_U505, 0 );
        g_U10462 = 0;
        if (NOT (IS_CHAR_DEAD( sub_3854() )))
        {
            CLEAR_AREA( -1704.34000000, 357.78000000, 25, 100, 1 );
            if (IS_VEH_DRIVEABLE( l_U875 ))
            {
                SET_CAR_COORDINATES( l_U875, -1704.34000000, 357.78000000, 24.28650000 );
                SET_CAR_HEADING( l_U875, 112 );
                SET_CAR_ON_GROUND_PROPERLY( l_U875 );
            }
            if (IS_CHAR_IN_ANY_CAR( sub_3854() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3854(), -1703.80400000, 356.50570000, 24.28650000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3854(), -1703.80400000, 356.50570000, 24.28650000 );
            }
            SET_CHAR_HEADING( sub_3854(), 82.40161000 );
        }
        CLEAR_PRINTS();
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (NOT (IS_CAR_DEAD( l_U875 )))
        {
            DELETE_CAR( ref l_U875 );
        }
        while (NOT (sub_11870( ref l_U875, -1704.34000000, 357.78000000, 24.28650000, 112 )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_68383( ref l_U876, -1706.13300000, 358.59240000, 24.28650000, 116.54490000 )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_104608( ref uVar4, -1707.87800000, 359.28870000, 24.28650000, 115.37460000 )))
        {
            WAIT( 0 );
        }
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U876 );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar4 );
        WAIT( 1200 );
        SET_PLAYER_CONTROL( sub_5225(), 1 );
        SET_GAME_CAM_HEADING( 0 );
        if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
        {
            DO_SCREEN_FADE_IN( 500 );
        }
        sub_104740();
        break;
    }
    return;
}

int sub_93799()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_95606()
{
    if (NOT (DOES_CAM_EXIST( l_U502 )))
    {
        CREATE_CAM( 14, ref l_U502 );
    }
    if (NOT (DOES_CAM_EXIST( l_U504 )))
    {
        CREATE_CAM( 14, ref l_U504 );
    }
    if (NOT (DOES_CAM_EXIST( l_U505 )))
    {
        CREATE_CAM( 3, ref l_U505 );
    }
    if (NOT (DOES_CAM_EXIST( l_U507 )))
    {
        CREATE_CAM( 14, ref l_U507 );
    }
    return;
}

void sub_95957(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U501 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( l_U510, NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U501 );
    }
    return;
}

void sub_96060(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

int sub_96305()
{
    if (HAS_MODEL_LOADED( 188410296 ))
    {
        return 188410296;
    }
    else if (HAS_MODEL_LOADED( 1414790133 ))
    {
        return 1414790133;
    }
    else if (HAS_MODEL_LOADED( 1439613707 ))
    {
        return 1439613707;
    }
    else if (HAS_MODEL_LOADED( -411638179 ))
    {
        return -411638179;
    }
    else if (HAS_MODEL_LOADED( 1737188996 ))
    {
        return 1737188996;
    }
    else if (HAS_MODEL_LOADED( -411638179 ))
    {
        return -411638179;
    }
    else if (HAS_MODEL_LOADED( 630267504 ))
    {
        return 630267504;
    }
    else if (HAS_MODEL_LOADED( 1719115836 ))
    {
        return 1719115836;
    };;;;;;;;
    return 0;
}

int sub_100255()
{
    for ( l_U520 = 0; l_U520 <= 17; l_U520++ )
    {
        if (NOT (HAS_MODEL_LOADED( l_U521[l_U520] )))
        {
            return 0;
        }
    }
    return 1;
}

void sub_100927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_100938( uParam0 ), sub_4752( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_101045( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_15298( uParam0, (uParam1^) );
    return;
}

int sub_100938(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_101045(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_104608(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_68400( uParam0, 13, uParam1, uParam4 );
}

void sub_104740()
{
    sub_104749();
    if (NOT g_U0)
    {
        CANCEL_OVERRIDE_RESTART();
    }
    g_U24 = 82;
    CLEAR_WANTED_LEVEL( sub_5225() );
    SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
    UNLOCK_MISSION_NEWS_STORY( 71 );
    sub_111560( 13 );
    sub_112722();
    sub_3268();
    return;
}

void sub_104749()
{
    sub_104758();
    return;
}

void sub_104758()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_104776();
    sub_104835( iVar2, iVar3, iVar4 );
    return;
}

void sub_104776()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_104835(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_104867( iVar5, uParam0, uParam1, uParam2, "Contact_1" );
    return;
}

void sub_104867(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int I;
    int iVar27;
    boolean bVar28;
    unknown uVar29;
    unknown uVar30;
    int iVar31;
    boolean bVar32;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U14838[uParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_104963( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_104963( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U14838[uParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_104963( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_104963( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_104963( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_104963( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_105540( uParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U12306[uParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U14838[uParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            g_U12306[uParam0]._fU144[I]._fU8++;
            if ((g_U12306[uParam0]._fU144[I]._fU8 >= g_U12306[uParam0]._fU144[I]._fU4) AND (NOT g_U12306[uParam0]._fU144[I]._fU12))
            {
                iVar27 = 0;
                GET_GAME_TIMER( ref iVar27 );
                g_U12306[uParam0]._fU144[I]._fU16 = iVar27 + 90000;
            }
        }
    }
    if (NOT (sub_105988( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_5225() );
    sub_2084();
    bVar28 = true;
    uVar29 = sub_105540( uParam0, iVar7 );
    uVar30 = sub_1708( uParam0 );
    if (bParam1)
    {
        iVar31 = g_U14838[uParam0]._fU0._fU56;
        if ((iVar31 == 6) || (iVar31 == 5))
        {
            bVar28 = false;
        }
        if (NOT g_U0)
        {
            bVar32 = true;
            if (IS_BIT_SET( g_U20913[uVar29]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U10982 );
                sub_110442( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_110876();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_110961( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_111040( uParam0 );
                sub_111079( 0 );
                sub_1984( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_111268();
        }
    }
    if (bParam2)
    {
        sub_110876();
        sub_111367();
        sub_111079( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_110876();
        sub_111419();
        sub_111079( 0 );
        sub_1984( uVar30, 0 );
    }
    sub_1595();
    return;
}

void sub_104963(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_105540(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1939( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_105988(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_106084( uParam1 );
        break;
        case 1:
        bVar8 = sub_106779( uParam1 );
        break;
        case 2:
        bVar8 = sub_107512( uParam1 );
        break;
        case 3:
        bVar8 = sub_107749( uParam1 );
        break;
        case 4:
        bVar8 = sub_107915( uParam1 );
        break;
        case 5:
        bVar8 = sub_108114( uParam1 );
        break;
        case 6:
        bVar8 = sub_108309( uParam1 );
        break;
        case 7:
        bVar8 = sub_108514( uParam1 );
        break;
        case 8:
        bVar8 = sub_108719( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_107127( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_105540( uParam0, uParam1 );
    if (bParam3)
    {
        sub_109005( uVar9, uParam0 );
    }
    return 1;
}

int sub_106084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_106181( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_106181( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_106181( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_106181( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_106181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_106181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_106686( "Contact 1", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Contact 1", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_106181(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_106192( uParam1 );
    sub_106366( uParam0, 0, uParam2 );
    sub_106366( uParam0, 1, uParam3 );
    sub_106366( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_104776();
    return;
}

void sub_106192(unknown uParam0)
{
    ADD_SCORE( sub_5225(), uParam0 );
    sub_106217( uParam0 );
    return;
}

void sub_106217(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1939( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_106366(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_106686(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_106779(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_106181( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_106181( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_106181( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_106181( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_106181( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_106181( iVar3, 0, sub_107005(), sub_107271(), 0, 0 );
        break;
        default:
        sub_106686( "Contact 2", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Contact 2", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107005()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_107127( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_107127(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_107271()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_107127( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_107512(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_106181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_106181( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_106181( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_106181( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_106686( "Contact 3", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Contact 3", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107749(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_106181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_106181( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_106686( "Friend 4", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Friend 4", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_107915(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_106181( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_106181( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_106181( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_106686( "Contact 5", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Contact 5", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108114(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_106181( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_106181( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_106181( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_106686( "Contact 6", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Contact 6", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108309(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_106181( iVar3, 0, sub_107005(), sub_107271(), 0, 0 );
        break;
        default:
        sub_106686( "Friend 7", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Friend 7", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108514(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_106181( iVar3, 0, sub_107005(), sub_107271(), 0, 0 );
        break;
        default:
        sub_106686( "Friend 8", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Friend 8", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108719(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_106181( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_106686( "Contact 9", 1 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_106686( "Contact 9", 0 );
        sub_106181( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_109005(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    if (sub_109066( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_109784( iParam1 );
    }
    return;
}

int sub_109066(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U14838[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U20913[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U20913[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_109206( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_109206(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_109376( 0 );
    return;
}

void sub_109376(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_109621();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_109621()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_109784(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U14815[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U14815[iParam0]._fU4 == g_U14815[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U14815[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U14815[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_110015( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_110015( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_110015( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_110015( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_110015( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_110015( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_110015(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_110442(unknown uParam0, unknown uParam1)
{
    sub_110461( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_110461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_110876()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

int sub_110961(int iParam0, int iParam1)
{
    if (iParam0 == 2)
    {
        if (iParam1 == 3)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        if (iParam1 == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_111040(unknown uParam0)
{
    sub_1456();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_111079(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_111130( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_111130(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_111268()
{
    sub_111277();
    return;
}

void sub_111277()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_111367()
{
    sub_111277();
    return;
}

void sub_111419()
{
    sub_111277();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_111560(int iParam0)
{
    if (iParam0 >= g_U1455)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_111647( iParam0 ))
    {
        sub_112697( iParam0 );
    }
    return;
}

int sub_111647(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1455[uParam0], 21 )) || (IS_BIT_SET( g_U1455[uParam0], 20 )))
    {
        return 0;
    }
    sub_111704( ref uVar3, 1, 0, 0 );
    sub_112316( uVar3, ref g_U1455[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1455[uParam0], 22, 31, g_U1455[0] );
    g_U1455[0]++;
    SET_BIT( ref g_U1455[uParam0], 20 );
    sub_28654( "\n ----------------------------------------------------------------" );
    sub_6165( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_28654( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_111704(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_111757( iParam0, uParam1, uParam2 );
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
        sub_111889( iParam0 + 0 );
    }
    return;
}

void sub_111757(int iParam0, int iParam1, int iParam2)
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
        sub_111889( iParam0 + 0 );
    }
    return;
}

void sub_111889(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_111920( iParam0->_fU4 )))
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

int sub_111920(unknown uParam0)
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

void sub_112316(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_112697(unknown uParam0)
{
    return;
}

void sub_112722()
{
    sub_112731();
    return;
}

void sub_112731()
{
    int I;
    boolean bVar3;

    I = 0;
    bVar3 = false;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        sub_112797();
        sub_112882();
        sub_113200();
    }
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU4 = 0;
            g_U39058[I]._fU12++;
            g_U39058[I]._fU20 = -2;
            if (sub_114438( g_U39058[I]._fU16 ))
            {
                g_U39104 = 1;
            }
            if (sub_115122( g_U39058[I]._fU16 ))
            {
                g_U39105 = 1;
            }
            bVar3 = true;
        }
    }
    return;
}

void sub_112797()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U39042[I]._fU0 = -1;
        g_U39042[I]._fU4 = 0;
        g_U39042[I]._fU8 = 0;
    }
    return;
}

void sub_112882()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U38937[I]._fU4)
        {
            if (g_U38937[I]._fU0)
            {
                g_U38937[I]._fU12++;
            }
            if (iVar3 >= 5)
            {
                SCRIPT_ASSERT( "Prepare_Recurring_Lost_Stats_For_Display: Trying to store too many sets of display stats" );
                return;
            }
            g_U39042[iVar3]._fU0 = g_U38937[I]._fU16;
            g_U39042[iVar3]._fU4 = g_U38937[I]._fU0;
            g_U39042[iVar3]._fU8 = g_U38937[I]._fU12;
            iVar3++;
            g_U38937[I]._fU4 = 0;
        }
    }
    return;
}

void sub_113200()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar9 = false;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    while (iVar12 < 13)
    {
        bVar9 = false;
        if (NOT g_U38937[iVar12]._fU0)
        {
            uVar2 = {g_U38937[iVar12]};
            iVar10 = iVar12 + 1;
            iVar11 = iVar12;
            while (iVar10 < 13)
            {
                g_U38937[iVar11] = {g_U38937[iVar10]};
                iVar11++;
                iVar10++;
            }
            g_U38937[iVar11] = {uVar2};
            sub_113365( iVar11 );
            sub_113787( iVar11 );
            bVar9 = true;
        }
        if (NOT bVar9)
        {
            iVar12++;
        }
    }
    return;
}

void sub_113365(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    iVar3 = g_U38937[uParam0]._fU20;
    if (g_U38937[uParam0]._fU8)
    {
        iVar3 += 13;
    }
    uVar4 = g_U38937[uParam0]._fU16;
    uVar5 = g_U38937[uParam0]._fU12;
    sub_113449( iVar3, uVar4, uVar5 );
    return;
}

void sub_113449(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (g_U9592[uParam1]._fU12 == 0)
    {
        PRINTNL();
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTSTRING( "Memorial - Keith returned number = " );
        PRINTINT( uParam1 );
        PRINTNL();
        PRINTSTRING( "-------------------------------------------------------------" );
        PRINTNL();
        PRINTNL();
        g_U9592[uParam1]._fU4 = uParam0;
        g_U9592[uParam1]._fU0 = uParam1;
        g_U9592[uParam1]._fU8 = uParam2;
        g_U9592[uParam1]._fU12 = 1;
        return;
    }
    return;
}

void sub_113787(unknown uParam0)
{
    unknown uVar3;

    g_U38937[uParam0]._fU0 = 1;
    g_U38937[uParam0]._fU4 = 0;
    g_U38937[uParam0]._fU12 = 1;
    g_U38937[uParam0]._fU16 = sub_113838();
    uVar3 = g_U38937[uParam0]._fU24;
    g_U38937[uParam0]._fU24 = -1;
    sub_114027( uVar3 );
    if (g_U38937[uParam0]._fU8)
    {
        g_U38937[uParam0]._fU8 = 0;
    }
    else
    {
        g_U38937[uParam0]._fU8 = 1;
    }
    return;
}

void sub_113838()
{
    int Result;
    boolean bVar3;
    int I;

    Result = -1;
    bVar3 = true;
    while (bVar3)
    {
        bVar3 = false;
        if (g_U38936 >= 24)
        {
            g_U38936 = 0;
        }
        Result = g_U38936;
        I = 0;
        for ( I = 0; I < 13; I++ )
        {
            if (NOT bVar3)
            {
                if (g_U38937[I]._fU16 == Result)
                {
                    bVar3 = true;
                }
            }
        }
        g_U38936++;
    }
    return Result;
}

void sub_114027(int iParam0)
{
    int I;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Reuse_VoiceID: VoiceID being re-used is UNKNOWN" );
        return;
    }
    I = 0;
    for ( I = 0; I < 12; I++ )
    {
        if (g_U39029[I] == -1)
        {
            g_U39029[I] = iParam0;
            return;
        }
    }
    SCRIPT_ASSERT( "Reuse_VoiceID: Failed to find an unused slot for the VoiceID" );
    return;
}

int sub_114438(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_114449( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Terry" ))
    {
        return 1;
    }
    return 0;
}

void sub_114449(int iParam0)
{
    int iVar3;
    char[16] Result;
    int iVar8;

    iVar3 = 30;
    StrCopy( ref Result, "RECLOST_", 16 );
    if ((iParam0 >= iVar3) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: NameID out of range" );
        return Result;
    }
    iVar8 = iParam0;
    if (iVar8 >= 40)
    {
        SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: more than 40 Lost Member names?" );
        return Result;
    }
    if (iVar8 >= 30)
    {
        ConcatString(ref Result, "3", 16);
        iVar8 -= 30;
    }
    if (iVar8 >= 20)
    {
        ConcatString(ref Result, "2", 16);
        iVar8 -= 20;
    }
    if (iVar8 >= 10)
    {
        ConcatString(ref Result, "1", 16);
        iVar8 -= 10;
    }
    switch (iVar8)
    {
        case 0:
        ConcatString(ref Result, "0", 16);
        break;
        case 1:
        ConcatString(ref Result, "1", 16);
        break;
        case 2:
        ConcatString(ref Result, "2", 16);
        break;
        case 3:
        ConcatString(ref Result, "3", 16);
        break;
        case 4:
        ConcatString(ref Result, "4", 16);
        break;
        case 5:
        ConcatString(ref Result, "5", 16);
        break;
        case 6:
        ConcatString(ref Result, "6", 16);
        break;
        case 7:
        ConcatString(ref Result, "7", 16);
        break;
        case 8:
        ConcatString(ref Result, "8", 16);
        break;
        case 9:
        ConcatString(ref Result, "9", 16);
        break;
        default: SCRIPT_ASSERT( "Return_Recurring_Lost_Name_From_NameID: array position not in range 0 - 9" );
    }
    return Result;
}

int sub_115122(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_114449( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Clay" ))
    {
        return 1;
    }
    return 0;
}

