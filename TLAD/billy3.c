void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    l_U0 = 0;
    l_U1 = 86.00000000;
    l_U2 = 274.00000000;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U8 = -1;
    l_U120 = 15.00000000;
    l_U121 = 35.00000000;
    l_U122 = 16.00000000;
    l_U123 = 0.00000000;
    l_U129 = 1000.00000000;
    l_U130 = 7500.00000000;
    l_U139 = 1;
    l_U140 = 30.00000000;
    l_U141 = 30.00000000;
    l_U142 = 2.00000000;
    l_U152 = 0.00000000;
    l_U153 = 0.00000000;
    l_U165 = 1;
    l_U166 = 0;
    l_U167 = -1;
    l_U168 = 1;
    l_U169 = -1;
    l_U170 = -1;
    l_U171 = 15.00000000;
    l_U198 = 0;
    l_U199 = -1949702649;
    l_U200 = 2075870698;
    l_U205 = 0.12000000;
    l_U220 = 0;
    l_U221 = 1;
    l_U222 = 3;
    l_U224 = 0;
    l_U225 = -1;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = 0;
    l_U363 = 0;
    l_U364 = -1159156463;
    l_U365 = -2107556865;
    l_U366 = 977480632;
    l_U367 = 15972646;
    l_U370 = 2006142190;
    l_U371 = -1745203402;
    l_U372 = {-1978.99800000, -373.78450000, 2.20900000};
    l_U375 = {-1255.25900000, -583.66850000, 2.34780000};
    l_U378 = {-1723.49500000, 370.90400000, 26.89600000};
    l_U3521 = 0;
    l_U3522 = 1;
    l_U3676 = 0;
    l_U3677 = 1;
    l_U3688 = 0;
    l_U3707 = -1;
    l_U3711 = 0;
    l_U3803 = 0;
    l_U3804 = 0;
    l_U3805 = 0;
    l_U3806 = 0;
    l_U3815 = 0;
    l_U3841 = 1;
    l_U3842 = 0;
    l_U3900 = 0;
    l_U3929 = 1;
    l_U3931 = 0;
    l_U3943 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_569();
        sub_578();
        sub_757();
        sub_2931();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U362)
        {
            case 0:
            sub_4301();
            l_U362 = 1;
            break;
            case 1:
            sub_5790();
            break;
            case 2:
            sub_59061();
            break;
            case 3:
            sub_68510();
            sub_86142();
            break;
            case 4:
            sub_96614();
            sub_86142();
            break;
            case 5: break;
            case 6:
            sub_98192();
            sub_86142();
            break;
            case 7:
            sub_86142();
            sub_98192();
            sub_103696();
            break;
            case 8:
            if (sub_114587())
            {
                sub_104532();
            }
            break;
            case 9:
            sub_104532();
            break;
            case 10:
            if (sub_117482())
            {
                sub_119373();
            }
            break;
            case 11:
            sub_128041();
            break;
        }
        sub_128650();
        if (NOT l_U3523)
        {
            if (sub_128773())
            {
                SET_WANTED_MULTIPLIER( 0.00000000 );
                l_U3523 = 1;
            }
        }
        else if (NOT sub_128773())
        {
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U3523 = 0;
        }
        if (l_U3513)
        {
            if (IS_CHAR_INJURED( l_U384[14]._fU0 ))
            {
                sub_35152( 1 );
            }
            if (g_U39149[1] < 2)
            {
                if (IS_CHAR_INJURED( l_U384[15]._fU0 ))
                {
                    sub_35152( 2 );
                }
                if (IS_CHAR_INJURED( l_U384[16]._fU0 ))
                {
                    sub_35152( 3 );
                }
            }
        }
        if (l_U3685)
        {
            if (sub_129128( l_U3463 ))
            {
                l_U3675 = 1;
                l_U3678 = 5;
                l_U362 = 10;
            }
        }
        if (l_U3518)
        {
            sub_129354();
        }
        if (l_U3683)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U384[1]._fU4 )))
            {
                l_U3678 = 1;
                l_U362 = 10;
            }
        }
        if (l_U3679)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U3336 )))
            {
                l_U3678 = 0;
                l_U362 = 10;
            }
        }
        if (l_U3680)
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U3463 )))
            {
                l_U3678 = 2;
                l_U362 = 10;
            }
        }
        if (l_U3682)
        {
            if (IS_CHAR_INJURED( l_U384[1]._fU0 ))
            {
                l_U3678 = 4;
                l_U362 = 10;
            }
        }
        if (l_U3681)
        {
            if (IS_CHAR_INJURED( l_U384[0]._fU0 ))
            {
                l_U3678 = 3;
                l_U362 = 10;
            }
        }
        if (l_U3684)
        {
            if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 300.00000000, 300.00000000, 300.00000000, 0 )))
                {
                    SET_CHAR_HEALTH( l_U384[0]._fU0, 50 );
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U384[1]._fU4 ))
        {
            if (IS_VEH_DRIVEABLE( l_U384[1]._fU4 ))
            {
                ;
            }
            else
            {
                sub_87435( "Not driveable" );
            }
        }
        if (l_U3686)
        {
            if (sub_132694( l_U3463 ))
            {
                sub_87435( "Failing because bike is stuck...." );
                l_U3676 = 0;
                l_U3678 = 2;
                l_U362 = 10;
            }
        }
        if (l_U3516)
        {
            sub_134185( ref l_U384 );
        }
    }
    return;
}

void sub_569()
{
    sub_578();
    return;
}

void sub_578()
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

void sub_757()
{
    sub_766();
    return;
}

void sub_766()
{
    int iVar2;

    iVar2 = 0;
    sub_780( iVar2 );
    sub_1921( iVar2 );
    return;
}

void sub_780(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U14838[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U816)
    {
        sub_824();
        sub_1032();
        g_U11095 = 1;
    }
    else if (NOT g_U12306[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1157();
            sub_1209();
            g_U11095 = 1;
        }
    }
    sub_1302();
    sub_1441();
    uVar5 = sub_1554( uParam0 );
    sub_1830( uVar5, 0 );
    return;
}

void sub_824()
{
    if (g_U10993)
    {
        return;
    }
    sub_851( g_U10992 );
    if (NOT (IS_BIT_SET( g_U10959._fU0, 7 )))
    {
        sub_972();
    }
    return;
}

void sub_851(int iParam0)
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

void sub_972()
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

void sub_1032()
{
    sub_1041();
    return;
}

void sub_1041()
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

void sub_1157()
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

void sub_1209()
{
    sub_1218();
    return;
}

void sub_1218()
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

void sub_1302()
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

void sub_1441()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1463();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_1463()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_1554(unknown uParam0)
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
    sub_1785( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_1785(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1830(int iParam0, boolean bParam1)
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

void sub_1921(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1930();
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
    if (NOT sub_2690())
    {
        return;
    }
    if (NOT g_U816)
    {
        sub_2756();
        SET_BIT( ref g_U10959._fU0, 2 );
    }
    return;
}

void sub_1930()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_1968( 5, g_U572[I] )) == 1))
        {
            if ((sub_1968( 1, g_U572[I] )) != 0)
            {
                sub_2254( I );
            }
        }
    }
    if (NOT sub_2420())
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

int sub_1968(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2254(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2339( g_U572 - 1 );
    return;
}

void sub_2339(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2420()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1968( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2690()
{
    if ((g_U10959._fU8 == 1) AND (g_U10959._fU4 == 0))
    {
        return 0;
    }
    return 1;
}

void sub_2756()
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

void sub_2931()
{
    l_U3513 = 0;
    g_U10460 = 1;
    ALLOW_EMERGENCY_SERVICES( 1 );
    sub_2961( 0 );
    SET_PED_IS_BLIND_RAGING( sub_3101(), 0 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    sub_3198( 1 );
    sub_3198( 2 );
    sub_3198( 3 );
    sub_3812();
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2961(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 <= 8) AND (g_U8944 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3101()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3198(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3221( uParam0 ) );
    return;
}

int sub_3221(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    iVar3 = sub_3232( uParam0 );
    if (iVar3 == -1)
    {
        return 1439613707;
    }
    uVar4 = g_U38937[iVar3]._fU20;
    switch (uVar4)
    {
        case 0: return 1914397972;
        case 1: return -2138439183;
        case 2: return 1215631816;
        case 3: return 1706970202;
        case 4: return 717510247;
        case 5: return 965080042;
        case 6: return 693982133;
        case 7: return 454735664;
        case 8: return 1409362172;
        case 9: return 767450539;
        case 10: return 1686719296;
        case 11: return 1917871822;
        case 12: return 422524045;
    }
    SCRIPT_ASSERT( "Return_Recurring_Lost_Model: Required arrayPos is greater than number of Recurrign Lost characters" );
    return 1914397972;
}

int sub_3232(int iParam0)
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

void sub_3812()
{
    sub_3821();
    sub_3966();
    return;
}

void sub_3821()
{
    if (l_U6)
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
    l_U4 = 0;
    l_U3 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3966()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U7 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U7, 0 );
            SET_CAM_ACTIVE( l_U7, 0 );
            DESTROY_CAM( l_U7 );
            l_U7 = nil;
            l_U8 = -1;
            l_U20 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U20 );
            }
            else
            {
                l_U20 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_4301()
{
    sub_4313( 500 );
    g_U10460 = 0;
    SET_WANTED_MULTIPLIER( 0.10000000 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    LOAD_ADDITIONAL_TEXT( "BILLY3", 0 );
    LOAD_ADDITIONAL_TEXT( "E1B3AUD", 6 );
    sub_4502( "E1B3AUD" );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    ADD_SCENARIO_BLOCKING_AREA( -2058.80100000, -460.55210000, 0.00000000, -1980.77900000, -322.33590000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( -1364.98100000, -660.67850000, 0.00000000, -1154.37800000, -543.12680000, 100.00000000 );
    SWITCH_ROADS_OFF( -1976.14100000, -348.57360000, 0.00000000, -1966.86100000, -323.03980000, 100.00000000 );
    sub_4754( 0, sub_3101(), "JOHNNY", 0 );
    sub_4900( 0 );
    if (NOT (HAS_CHAR_GOT_WEAPON( sub_3101(), 27 )))
    {
        ;
    }
    l_U3524[0]._fU8 = {-2044.48100000, -393.80480000, 3.36570000};
    l_U3524[0]._fU32 = 90.00000000;
    l_U3524[1]._fU8 = {-2007.07300000, -356.46770000, 3.34420000};
    l_U3524[1]._fU32 = 0.00000000;
    l_U3524[2]._fU8 = {-2029.10300000, -344.71740000, 3.50170000};
    l_U3524[2]._fU32 = 0.00000000;
    l_U3524[3]._fU8 = {-2044.48100000, -382.30480000, 3.36570000};
    l_U3524[3]._fU32 = 90.00000000;
    l_U3524[4]._fU8 = {-1209.47500000, -549.99910000, 1.83800000};
    l_U3524[4]._fU32 = 0.00000000;
    l_U3524[5]._fU8 = {-1245.94200000, -577.04200000, 1.83760000};
    l_U3524[5]._fU32 = 90.00000000;
    l_U3524[6]._fU8 = {-2047.30000000, -416.47340000, 3.45130000};
    l_U3524[6]._fU32 = 0.00000000;
    l_U3524[7]._fU8 = {-1203.40100000, -574.73330000, 1.83760000};
    l_U3524[7]._fU32 = 0.00000000;
    l_U3524[8]._fU8 = {-1215.29600000, -556.63320000, 1.83800000};
    l_U3524[8]._fU32 = 90.00000000;
    l_U3524[9]._fU8 = {-1275.79300000, -583.52790000, 1.83870000};
    l_U3524[9]._fU32 = 0.00000000;
    l_U3643[0] = {-1710.50400000, 365.18130000, 24.87330000};
    l_U3643[1] = {-1711.77100000, 363.71460000, 24.77640000};
    l_U3643[2] = {-1714.38600000, 365.71040000, 24.79900000};
    l_U3643[3] = {-1715.30400000, 368.09200000, 24.87620000};
    l_U3643[4] = {-1717.93700000, 366.66400000, 24.74740000};
    l_U3643[5] = {-1719.18500000, 369.90220000, 24.77640000};
    l_U3662[0] = 242.36830000;
    l_U3662[1] = 241.50910000;
    l_U3662[2] = 242.43220000;
    l_U3662[3] = 229.19900000;
    l_U3662[4] = 245.25410000;
    l_U3662[5] = 264.53450000;
    sub_5711( 5000 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    return;
}

void sub_4313(unknown uParam0)
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_OUT( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_4502(unknown uParam0)
{
    StrCopy( ref l_U22._fU0, uParam0, 16 );
    sub_4519();
    return;
}

void sub_4519()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U22._fU16[I]._fU0 = nil;
        StrCopy( ref l_U22._fU16[I]._fU4, "", 32 );
        l_U22._fU344[I] = 0;
    }
    return;
}

void sub_4754(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U22._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U22._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4834( "\n PED NUMBER ", uParam0 );
    sub_4874( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4834(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4874(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4900(boolean bParam0)
{
    g_U11108 = 1;
    if (bParam0)
    {
        sub_4924( 0, 0 );
    }
    else
    {
        sub_4924( 1, 1 );
    }
    return;
}

void sub_4924(boolean bParam0, unknown uParam1)
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

void sub_5711(float fParam0)
{
    if (fParam0 < 1000.00000000)
    {
        l_U130 = 1000.00000000;
    }
    else
    {
        l_U130 = fParam0;
    }
    return;
}

void sub_5790()
{
    int I;

    switch (l_U4235)
    {
        case 0:
        if (IS_BIT_SET( g_U10959._fU0, 7 ))
        {
            if (sub_5855())
            {
                if (g_U39149[1] > 0)
                {
                    g_U39149[1] = 0;
                }
                SET_PLAYER_CONTROL( sub_5967(), 0 );
                LOAD_ADDITIONAL_TEXT( "E1B3AUD", 6 );
                START_CUTSCENE_NOW( "BG03_AA" );
                l_U4235 = 1;
            }
        }
        else
        {
            l_U4235 = 2;
        }
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U4235 = 2;
            CLEAR_NAMED_CUTSCENE( "BG03_AA" );
        }
        break;
        case 2:
        REQUEST_MODEL( l_U364 );
        REQUEST_MODEL( l_U365 );
        REQUEST_MODEL( sub_6153() );
        REQUEST_MODEL( l_U370 );
        REQUEST_MODEL( l_U371 );
        REQUEST_MODEL( -109692574 );
        REQUEST_MODEL( 2142893183 );
        REQUEST_MODEL( -657414365 );
        REQUEST_MODEL( 203767144 );
        REQUEST_MODEL( -480360297 );
        REQUEST_CAR_RECORDING( 460 );
        REQUEST_CAR_RECORDING( 451 );
        REQUEST_CAR_RECORDING( 452 );
        REQUEST_CAR_RECORDING( 453 );
        REQUEST_CAR_RECORDING( 454 );
        REQUEST_CAR_RECORDING( 461 );
        REQUEST_CAR_RECORDING( 462 );
        sub_6337( 0 );
        sub_6337( 13 );
        sub_6688( 1 );
        sub_6688( 2 );
        sub_6688( 3 );
        while ((NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\B3_ITS_WAR" ))) || ((NOT (sub_6997( 3 ))) || ((NOT (sub_6997( 2 ))) || ((NOT (sub_6997( 1 ))) || ((NOT (sub_6955( 13 ))) || ((NOT (sub_6955( 0 ))) || ((NOT (HAS_MODEL_LOADED( -480360297 ))) || ((NOT (HAS_MODEL_LOADED( 203767144 ))) || ((NOT (HAS_MODEL_LOADED( -657414365 ))) || ((NOT (HAS_MODEL_LOADED( -109692574 ))) || ((NOT (HAS_MODEL_LOADED( 2142893183 ))) || ((NOT (HAS_MODEL_LOADED( l_U371 ))) || ((NOT (HAS_MODEL_LOADED( l_U370 ))) || ((NOT (HAS_MODEL_LOADED( sub_6153() ))) || ((NOT (HAS_MODEL_LOADED( l_U365 ))) || ((NOT (HAS_MODEL_LOADED( l_U364 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 462 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 461 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 454 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 453 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 452 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 451 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 460 )))))))))))))))))))))))))
        {
            WAIT( 0 );
        }
        SUPPRESS_CAR_MODEL( sub_6153() );
        SUPPRESS_CAR_MODEL( l_U370 );
        SUPPRESS_CAR_MODEL( l_U371 );
        SUPPRESS_CAR_MODEL( sub_7131( 0 ) );
        SUPPRESS_CAR_MODEL( sub_7131( 13 ) );
        SUPPRESS_CAR_MODEL( sub_7369() );
        sub_7398();
        CLEAR_ROOM_FOR_CHAR( sub_3101() );
        switch (g_U39149[1])
        {
            case 0:
            while (NOT (sub_7577( ref l_U3463, -1729.87700000, 342.61800000, 24.44400000, 329.59000000 )))
            {
                WAIT( 0 );
            }
            SET_CAR_ENGINE_ON( l_U3463, 1, 1 );
            l_U171 = 15.00000000;
            l_U3680 = 1;
            if (NOT (IS_CAR_DEAD( l_U3463 )))
            {
                WARP_CHAR_INTO_CAR( sub_3101(), l_U3463 );
                SET_CAR_ON_GROUND_PROPERLY( l_U3463 );
            }
            sub_9225( 3 );
            LOAD_SCENE( 63784, 331.80000000, 26 );
            CLEAR_AREA_OF_CARS( -1729.89300000, 342.60100000, 24.44420000, 500 );
            SWITCH_ROADS_OFF( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
            sub_31977( ref l_U384[0], -1970.71200000, -325.37520000, 1.96000000, 0 );
            sub_32449();
            if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
            {
                REMOVE_BLIP( l_U384[0]._fU100 );
            }
            l_U362 = 2;
            break;
            case 1:
            while (NOT (sub_7577( ref l_U3463, -1953.42400000, -325.40740000, 1.99840000, 95.65710000 )))
            {
                WAIT( 0 );
            }
            SET_CAR_ENGINE_ON( l_U3463, 1, 1 );
            l_U3680 = 1;
            if (NOT (IS_CAR_DEAD( l_U3463 )))
            {
                WARP_CHAR_INTO_CAR( sub_3101(), l_U3463 );
                SET_CAR_ON_GROUND_PROPERLY( l_U3463 );
            }
            sub_9225( 4 );
            LOAD_SCENE( -1865.92300000, -340.65300000, 2.09300000 );
            CLEAR_AREA_OF_CARS( -1865.92300000, -340.65300000, 2.09300000, 50 );
            if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
            {
                REMOVE_BLIP( l_U384[0]._fU100 );
            }
            if (HAS_CHAR_GOT_WEAPON( sub_3101(), 26 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3101(), 26, 0 );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_3101(), 27 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3101(), 27, 0 );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_3101(), 12 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3101(), 12, 0 );
            };;;
            l_U4099[0] = 1;
            l_U4099[1] = 1;
            l_U4099[14] = 1;
            l_U4099[15] = 1;
            l_U4099[16] = 1;
            l_U4192 = 1;
            l_U3517 = 1;
            l_U3509 = 1;
            l_U362 = 2;
            break;
            case 2:
            while (NOT (sub_7577( ref l_U3463, -1962.28300000, -322.72040000, 2.11440000, 269.46840000 )))
            {
                WAIT( 0 );
            }
            SET_CAR_ENGINE_ON( l_U3463, 1, 1 );
            l_U171 = 15.00000000;
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U364 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U365 );
            REQUEST_MODEL( l_U366 );
            REQUEST_MODEL( l_U367 );
            l_U3680 = 1;
            if (NOT (IS_CAR_DEAD( l_U3463 )))
            {
                WARP_CHAR_INTO_CAR( sub_3101(), l_U3463 );
                SET_CAR_ON_GROUND_PROPERLY( l_U3463 );
            }
            sub_9225( 5 );
            LOAD_SCENE( -1955.56200000, -320.45180000, 2.15670000 );
            sub_31977( ref l_U384[0], -1256.55300000, -530.93300000, 1.82670000, 0 );
            for ( I = 0; I < l_U2626; I++ )
            {
                l_U2626[I]._fU112._fU16 = 5;
            }
            if (HAS_CHAR_GOT_WEAPON( sub_3101(), 26 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3101(), 26, 0 );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_3101(), 27 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3101(), 27, 0 );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_3101(), 12 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3101(), 12, 0 );
            };;;
            l_U3821 = 1;
            SET_WANTED_MULTIPLIER( 0.10000000 );
            sub_58519( 1 );
            l_U3812 = 5;
            l_U362 = 4;
            break;
        }
        sub_58560();
        sub_58804();
        SET_CAM_BEHIND_PED( sub_3101() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        CLEAR_ROOM_FOR_CHAR( sub_3101() );
        SET_PLAYER_CONTROL( sub_5967(), 1 );
        WAIT( 500 );
        sub_58903( 500 );
        l_U3685 = 1;
        l_U3686 = 1;
        l_U3518 = 1;
        l_U4235 = 3;
        break;
    }
    if (l_U3677)
    {
        ;
    }
    return;
}

void sub_5855()
{
    return sub_5866( 1, 1 );
}

int sub_5866(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((g_U558 != 9) AND (uParam1))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_5967()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_6153()
{
    return 802082487;
}

void sub_6337(unknown uParam0)
{
    REQUEST_MODEL( sub_6348( uParam0 ) );
    return;
}

int sub_6348(unknown uParam0)
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
    sub_1785( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6688(unknown uParam0)
{
    REQUEST_MODEL( sub_3221( uParam0 ) );
    return;
}

void sub_6955(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_6348( uParam0 ) );
}

void sub_6997(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_3221( uParam0 ) );
}

int sub_7131(unknown uParam0)
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

int sub_7369()
{
    return 301427732;
}

void sub_7398()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_3101() )))
    {
        GET_CHAR_COORDINATES( sub_3101(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_7369(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_7577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_7369();
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
    sub_7717( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

void sub_7717(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_9225(int iParam0)
{
    unknown[10] uVar3;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;

    array(ref uVar3, 10);
    if ((iParam0 != 4) AND ((iParam0 != 5) AND (iParam0 != 3)))
    {
        ;
    }
    switch (iParam0)
    {
        case 3:
        while (NOT (sub_9443( ref l_U3336, -1724.34000000, 357.20960000, 24.44400000, 340.76070000 )))
        {
            WAIT( 0 );
        }
        l_U3679 = 1;
        sub_9728( 0, ref l_U384[0]._fU0, -1723.59600000, 355.24110000, 24.44400000, 0.00000000 );
        sub_4754( 1, l_U384[0]._fU0, "BILLY", 0 );
        sub_10984( 0 );
        if (g_U38772 == 0)
        {
            sub_11173( ref l_U384[0], "E1B3_BL1V1", 0 );
            g_U38772++;
        }
        else
        {
            sub_11173( ref l_U384[0], "E1B3_BL1V2", 0 );
            g_U38772 = 0;
        }
        l_U2626[0]._fU0 = l_U384[0]._fU0;
        l_U2626[0]._fU72 = {-2009.35600000, -326.85960000, 3.36560000};
        l_U2626[0]._fU84 = 15;
        l_U2626[0]._fU100 = l_U3389;
        l_U2626[0]._fU68 = 1;
        if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
        {
            ;
        }
        SET_CHAR_RELATIONSHIP_GROUP( l_U384[0]._fU0, 0 );
        SET_CHAR_RELATIONSHIP( l_U384[0]._fU0, 0, 0 );
        SET_CHAR_HEALTH( l_U384[0]._fU0, 1510 );
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U384[0]._fU0, 1 );
        sub_11537( ref l_U384[0], l_U3336, 0 );
        if (NOT (IS_CAR_DEAD( l_U3336 )))
        {
            LOCK_CAR_DOORS( l_U3336, 3 );
            WARP_CHAR_INTO_CAR( l_U384[0]._fU0, l_U3336 );
            GIVE_PED_HELMET_WITH_OPTS( l_U384[0]._fU0, 0 );
            VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U3336, 0 );
        }
        l_U3681 = 1;
        while (NOT (sub_11802( 13, -1725.15700000, 353.73800000, 24.44400000, 331.97650000, ref l_U384[1] )))
        {
            WAIT( 0 );
        }
        sub_10984( 13 );
        l_U3683 = 1;
        l_U3682 = 1;
        if (DOES_BLIP_EXIST( l_U384[1]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEALTH( l_U384[1]._fU0, 1510 );
        if (g_U38770 == 0)
        {
            sub_11173( ref l_U384[1], "E1B3_BR1V2", 0 );
            g_U38770++;
        }
        else
        {
            sub_11173( ref l_U384[1], "E1B3_BR1V3", 0 );
            g_U38770 = 0;
        }
        SET_CHAR_RELATIONSHIP_GROUP( l_U384[1]._fU0, 0 );
        SET_CHAR_RELATIONSHIP( l_U384[1]._fU0, 0, 0 );
        sub_4754( 2, l_U384[1]._fU0, "BRIAN", 0 );
        sub_13870( ref l_U384[1], 1 );
        l_U2626[1]._fU0 = l_U384[1]._fU0;
        l_U2626[1]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[1]._fU84 = 0;
        l_U2626[1]._fU100 = l_U3389;
        l_U2626[1]._fU68 = 1;
        l_U2626[1]._fU112._fU4 = 1;
        sub_14079( ref l_U384[1], l_U384[0]._fU0 );
        sub_11537( ref l_U384[1], l_U384[1]._fU4, 0 );
        sub_14775( ref l_U384[1], 1 );
        while (NOT (sub_15152( 1, -1733.64200000, 335.41730000, 24.44420000, 0.00000000, ref l_U384[14] )))
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U384[14]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEADING( l_U384[14]._fU0, 0.00000000 );
        sub_13870( ref l_U384[14], 1 );
        l_U2626[14]._fU0 = l_U384[14]._fU0;
        l_U2626[14]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[14]._fU84 = 0;
        l_U2626[14]._fU100 = l_U3389;
        l_U2626[14]._fU68 = 1;
        l_U2626[14]._fU112._fU0 = 1;
        sub_14079( ref l_U384[14], l_U384[0]._fU0 );
        sub_11537( ref l_U384[14], l_U384[14]._fU4, 0 );
        sub_14775( ref l_U384[14], 0 );
        while (NOT (sub_17421( ref l_U384[14]._fU4, -1727.86500000, 351.19800000, 24.44400000, 321.28650000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[14]._fU4 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[14]._fU0 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[14]._fU0, l_U384[14]._fU4 );
                GIVE_PED_HELMET_WITH_OPTS( l_U384[14]._fU0, 0 );
            }
        }
        while (NOT (sub_15152( 2, -1727.88700000, 346.54750000, 24.44400000, 0.00000000, ref l_U384[15] )))
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U384[15]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEADING( l_U384[15]._fU0, 0.00000000 );
        sub_13870( ref l_U384[15], 1 );
        l_U2626[15]._fU0 = l_U384[15]._fU0;
        l_U2626[15]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[15]._fU84 = 0;
        l_U2626[15]._fU100 = l_U3389;
        l_U2626[15]._fU68 = 1;
        l_U2626[15]._fU112._fU0 = 1;
        l_U2626[15]._fU112._fU8 = 1;
        sub_14079( ref l_U384[15], l_U384[1]._fU0 );
        sub_11537( ref l_U384[15], l_U384[15]._fU4, 0 );
        sub_14775( ref l_U384[15], 2 );
        while (NOT (sub_17421( ref l_U384[15]._fU4, -1727.56300000, 347.99210000, 24.44400000, 340.46540000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[15]._fU4 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[15]._fU0 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[15]._fU0, l_U384[15]._fU4 );
                GIVE_PED_HELMET_WITH_OPTS( l_U384[15]._fU0, 0 );
            }
        }
        while (NOT (sub_15152( 3, -1736.95100000, 335.83630000, 24.44420000, 0.00000000, ref l_U384[16] )))
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U384[16]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEADING( l_U384[16]._fU0, 0.00000000 );
        sub_13870( ref l_U384[16], 1 );
        l_U2626[16]._fU0 = l_U384[16]._fU0;
        l_U2626[16]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[16]._fU84 = 0;
        l_U2626[16]._fU100 = l_U3389;
        l_U2626[16]._fU68 = 1;
        l_U2626[16]._fU112._fU0 = 1;
        l_U2626[16]._fU112._fU8 = 1;
        sub_14079( ref l_U384[16], l_U384[14]._fU0 );
        sub_11537( ref l_U384[16], l_U384[16]._fU4, 0 );
        sub_14775( ref l_U384[16], 2 );
        while (NOT (sub_17421( ref l_U384[16]._fU4, -1730.02400000, 347.36270000, 24.44400000, 335.12870000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[16]._fU4 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[16]._fU0 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[16]._fU0, l_U384[16]._fU4 );
                GIVE_PED_HELMET_WITH_OPTS( l_U384[16]._fU0, 0 );
            }
        }
        l_U368 = sub_18470();
        l_U369 = sub_6153();
        if (NOT (HAS_MODEL_LOADED( l_U368 )))
        {
            REQUEST_MODEL( l_U368 );
            while (NOT (HAS_MODEL_LOADED( l_U368 )))
            {
                WAIT( 0 );
            }
        }
        GIVE_WEAPON_TO_CHAR( l_U384[0]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[1]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[14]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[15]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[16]._fU0, 26, 30000, 0 );
        l_U3513 = 1;
        break;
        case 5:
        while (NOT (sub_9443( ref l_U3336, -1951.02800000, -322.19600000, 2.12750000, 275.57580000 )))
        {
            WAIT( 0 );
        }
        l_U3679 = 1;
        sub_9728( 0, ref l_U384[0]._fU0, -1968.00300000, -326.08260000, 1.95870000, 0.00000000 );
        sub_4754( 1, l_U384[0]._fU0, "BILLY", 0 );
        sub_10984( 0 );
        if (g_U38772 == 0)
        {
            sub_11173( ref l_U384[0], "E1B3_BL1V1", 0 );
            g_U38772++;
        }
        else
        {
            sub_11173( ref l_U384[0], "E1B3_BL1V2", 0 );
            g_U38772 = 0;
        }
        l_U2626[0]._fU0 = l_U384[0]._fU0;
        l_U2626[0]._fU72 = {-2009.35600000, -326.85960000, 3.36560000};
        l_U2626[0]._fU84 = 15;
        l_U2626[0]._fU100 = l_U3389;
        l_U2626[0]._fU68 = 1;
        if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
        {
            ;
        }
        SET_CHAR_RELATIONSHIP_GROUP( l_U384[0]._fU0, 0 );
        SET_CHAR_RELATIONSHIP( l_U384[0]._fU0, 0, 0 );
        SET_CHAR_HEALTH( l_U384[0]._fU0, 1510 );
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U384[0]._fU0, 1 );
        sub_11537( ref l_U384[0], l_U3336, 0 );
        if (NOT (IS_CAR_DEAD( l_U3336 )))
        {
            LOCK_CAR_DOORS( l_U3336, 3 );
            WARP_CHAR_INTO_CAR( l_U384[0]._fU0, l_U3336 );
            GIVE_PED_HELMET_WITH_OPTS( l_U384[0]._fU0, 0 );
            VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U3336, 0 );
        }
        l_U3681 = 1;
        while (NOT (sub_11802( 13, -1955.80900000, -325.00380000, 2.50980000, 272.99180000, ref l_U384[1] )))
        {
            WAIT( 0 );
        }
        sub_10984( 13 );
        l_U3683 = 1;
        l_U3682 = 1;
        if (DOES_BLIP_EXIST( l_U384[1]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEALTH( l_U384[1]._fU0, 1510 );
        if (g_U38770 == 0)
        {
            sub_11173( ref l_U384[1], "E1B3_BR1V2", 0 );
            g_U38770++;
        }
        else
        {
            sub_11173( ref l_U384[1], "E1B3_BR1V3", 0 );
            g_U38770 = 0;
        }
        SET_CHAR_RELATIONSHIP_GROUP( l_U384[1]._fU0, 0 );
        SET_CHAR_RELATIONSHIP( l_U384[1]._fU0, 0, 0 );
        sub_4754( 2, l_U384[1]._fU0, "BRIAN", 0 );
        sub_13870( ref l_U384[1], 1 );
        l_U2626[1]._fU0 = l_U384[1]._fU0;
        l_U2626[1]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[1]._fU84 = 0;
        l_U2626[1]._fU100 = l_U3389;
        l_U2626[1]._fU68 = 1;
        l_U2626[1]._fU112._fU4 = 1;
        sub_14079( ref l_U384[1], l_U384[0]._fU0 );
        sub_11537( ref l_U384[1], l_U384[1]._fU4, 0 );
        sub_14775( ref l_U384[1], 1 );
        while (NOT (sub_15152( 1, -1974.17400000, -325.32210000, 2.05330000, 0.00000000, ref l_U384[14] )))
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U384[14]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEADING( l_U384[14]._fU0, 0.00000000 );
        sub_13870( ref l_U384[14], 1 );
        l_U2626[14]._fU0 = l_U384[14]._fU0;
        l_U2626[14]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[14]._fU84 = 0;
        l_U2626[14]._fU100 = l_U3389;
        l_U2626[14]._fU68 = 1;
        l_U2626[14]._fU112._fU0 = 1;
        sub_14079( ref l_U384[14], l_U384[0]._fU0 );
        sub_11537( ref l_U384[14], l_U384[14]._fU4, 0 );
        sub_14775( ref l_U384[14], 0 );
        while (NOT (sub_17421( ref l_U384[14]._fU4, -1955.56200000, -320.45180000, 2.15670000, 267.75340000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[14]._fU4 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[14]._fU0 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[14]._fU0, l_U384[14]._fU4 );
                GIVE_PED_HELMET_WITH_OPTS( l_U384[14]._fU0, 0 );
            }
        }
        l_U368 = sub_18470();
        l_U369 = sub_6153();
        if (NOT (HAS_MODEL_LOADED( l_U368 )))
        {
            REQUEST_MODEL( l_U368 );
            while (NOT (HAS_MODEL_LOADED( l_U368 )))
            {
                WAIT( 0 );
            }
        }
        GIVE_WEAPON_TO_CHAR( l_U384[0]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[1]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[14]._fU0, 26, 30000, 0 );
        l_U3513 = 1;
        break;
        case 4:
        while (NOT (sub_9443( ref l_U3336, -1976.49600000, -328.78530000, 2.09970000, 109.94890000 )))
        {
            WAIT( 0 );
        }
        l_U3679 = 1;
        sub_9728( 0, ref l_U384[0]._fU0, -1882.88400000, -339.25830000, 2.12830000, 0.00000000 );
        sub_4754( 1, l_U384[0]._fU0, "BILLY", 0 );
        sub_10984( 0 );
        l_U2626[0]._fU0 = l_U384[0]._fU0;
        l_U2626[0]._fU72 = {-2009.35600000, -326.85960000, 3.36560000};
        l_U2626[0]._fU84 = 15;
        l_U2626[0]._fU100 = l_U3389;
        l_U2626[0]._fU68 = 1;
        if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
        {
            ;
        }
        SET_CHAR_RELATIONSHIP_GROUP( l_U384[0]._fU0, 0 );
        SET_CHAR_RELATIONSHIP( l_U384[0]._fU0, 0, 0 );
        SET_CHAR_HEALTH( l_U384[0]._fU0, 1510 );
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U384[0]._fU0, 1 );
        sub_11537( ref l_U384[0], l_U3336, 0 );
        if (NOT (IS_CAR_DEAD( l_U3336 )))
        {
            LOCK_CAR_DOORS( l_U3336, 3 );
            WARP_CHAR_INTO_CAR( l_U384[0]._fU0, l_U3336 );
            GIVE_PED_HELMET_WITH_OPTS( l_U384[0]._fU0, 0 );
            VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( l_U3336, 0 );
        }
        l_U3681 = 1;
        while (NOT (sub_11802( 13, -1972.17700000, -329.51840000, 2.09810000, 97.47960000, ref l_U384[1] )))
        {
            WAIT( 0 );
        }
        sub_10984( 13 );
        l_U3683 = 1;
        l_U3682 = 1;
        if (DOES_BLIP_EXIST( l_U384[1]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEALTH( l_U384[1]._fU0, 1510 );
        if (g_U38770 == 0)
        {
            sub_11173( ref l_U384[1], "E1B3_BR1V2", 0 );
            g_U38770++;
        }
        else
        {
            sub_11173( ref l_U384[1], "E1B3_BR1V3", 0 );
            g_U38770 = 0;
        }
        SET_CHAR_RELATIONSHIP_GROUP( l_U384[1]._fU0, 0 );
        SET_CHAR_RELATIONSHIP( l_U384[1]._fU0, 0, 0 );
        sub_4754( 2, l_U384[1]._fU0, "BRIAN", 0 );
        sub_13870( ref l_U384[1], 1 );
        l_U2626[1]._fU0 = l_U384[1]._fU0;
        l_U2626[1]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[1]._fU84 = 0;
        l_U2626[1]._fU100 = l_U3389;
        l_U2626[1]._fU68 = 1;
        l_U2626[1]._fU112._fU4 = 1;
        sub_14079( ref l_U384[1], l_U384[0]._fU0 );
        sub_11537( ref l_U384[1], l_U384[1]._fU4, 0 );
        sub_14775( ref l_U384[1], 1 );
        while (NOT (sub_15152( 1, -1878.88400000, -344.39340000, 2.05870000, 0.00000000, ref l_U384[14] )))
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U384[14]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEADING( l_U384[14]._fU0, 0.00000000 );
        sub_13870( ref l_U384[14], 1 );
        l_U2626[14]._fU0 = l_U384[14]._fU0;
        l_U2626[14]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[14]._fU84 = 0;
        l_U2626[14]._fU100 = l_U3389;
        l_U2626[14]._fU68 = 1;
        l_U2626[14]._fU112._fU0 = 1;
        sub_14079( ref l_U384[14], l_U384[0]._fU0 );
        sub_11537( ref l_U384[14], l_U384[14]._fU4, 0 );
        sub_14775( ref l_U384[14], 0 );
        while (NOT (sub_17421( ref l_U384[14]._fU4, -1972.09700000, -327.44060000, 2.07210000, 71.48719000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[14]._fU4 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[14]._fU0 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[14]._fU0, l_U384[14]._fU4 );
                GIVE_PED_HELMET_WITH_OPTS( l_U384[14]._fU0, 0 );
            }
        }
        while (NOT (sub_15152( 2, -1871.40700000, -337.45430000, 2.15750000, 0.00000000, ref l_U384[15] )))
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U384[15]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEADING( l_U384[15]._fU0, 0.00000000 );
        sub_13870( ref l_U384[15], 1 );
        l_U2626[15]._fU0 = l_U384[15]._fU0;
        l_U2626[15]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[15]._fU84 = 0;
        l_U2626[15]._fU100 = l_U3389;
        l_U2626[15]._fU68 = 1;
        l_U2626[15]._fU112._fU0 = 1;
        l_U2626[15]._fU112._fU8 = 1;
        sub_14079( ref l_U384[15], l_U384[1]._fU0 );
        sub_11537( ref l_U384[15], l_U384[15]._fU4, 0 );
        sub_14775( ref l_U384[15], 2 );
        while (NOT (sub_17421( ref l_U384[15]._fU4, -1967.74200000, -330.12870000, 2.10060000, 94.43329000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[15]._fU4 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[15]._fU0 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[15]._fU0, l_U384[15]._fU4 );
                GIVE_PED_HELMET_WITH_OPTS( l_U384[15]._fU0, 0 );
            }
        }
        while (NOT (sub_15152( 3, -1868.77500000, -344.09170000, 2.05490000, 0.00000000, ref l_U384[16] )))
        {
            WAIT( 0 );
        }
        if (DOES_BLIP_EXIST( l_U384[16]._fU100 ))
        {
            ;
        }
        SET_CHAR_HEADING( l_U384[16]._fU0, 0.00000000 );
        sub_13870( ref l_U384[16], 1 );
        l_U2626[16]._fU0 = l_U384[16]._fU0;
        l_U2626[16]._fU72 = {0.00000000, 0.00000000, 0.00000000};
        l_U2626[16]._fU84 = 0;
        l_U2626[16]._fU100 = l_U3389;
        l_U2626[16]._fU68 = 1;
        l_U2626[16]._fU112._fU0 = 1;
        l_U2626[16]._fU112._fU8 = 1;
        sub_14079( ref l_U384[16], l_U384[14]._fU0 );
        sub_11537( ref l_U384[16], l_U384[16]._fU4, 0 );
        sub_14775( ref l_U384[16], 2 );
        while (NOT (sub_17421( ref l_U384[16]._fU4, -1967.36200000, -328.28160000, 2.07340000, 115.46820000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[16]._fU4 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[16]._fU0 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[16]._fU0, l_U384[16]._fU4 );
                GIVE_PED_HELMET_WITH_OPTS( l_U384[16]._fU0, 0 );
            }
        }
        l_U368 = sub_18470();
        l_U369 = sub_6153();
        if (NOT (HAS_MODEL_LOADED( l_U368 )))
        {
            REQUEST_MODEL( l_U368 );
            while (NOT (HAS_MODEL_LOADED( l_U368 )))
            {
                WAIT( 0 );
            }
        }
        GIVE_WEAPON_TO_CHAR( l_U384[0]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[1]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[14]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[15]._fU0, 26, 30000, 0 );
        GIVE_WEAPON_TO_CHAR( l_U384[16]._fU0, 26, 30000, 0 );
        l_U3513 = 1;
        break;
        case 6:
        sub_11921( -2009.98400000, -326.76610000, 3.36560000, 164.96790000, sub_18470(), ref l_U384[2] );
        l_U384[2]._fU4 = sub_23349( -1995.81600000, -318.61430000, 2.09560000, 109.95050000 );
        sub_14079( ref l_U384[2], sub_3101() );
        SET_CHAR_NEVER_TARGETTED( l_U384[2]._fU0, 1 );
        l_U2626[2]._fU0 = l_U384[2]._fU0;
        l_U2626[2]._fU72 = {-2009.55500000, -329.12250000, 3.36560000};
        l_U2626[2]._fU84 = 15;
        l_U2626[2]._fU100 = l_U3389;
        sub_11921( -2018.08400000, -327.25840000, 3.36560000, 156.52230000, sub_18470(), ref l_U384[3] );
        l_U384[3]._fU4 = sub_23349( -1999.92800000, -316.05670000, 2.11080000, 29.24980000 );
        sub_14079( ref l_U384[3], sub_3101() );
        SET_CHAR_NEVER_TARGETTED( l_U384[3]._fU0, 1 );
        l_U2626[3]._fU0 = l_U384[3]._fU0;
        l_U2626[3]._fU72 = {-2018.08400000, -327.25840000, 3.36560000};
        l_U2626[3]._fU84 = 1;
        l_U2626[3]._fU100 = l_U3389;
        uVar3[0] = {l_U384[2]};
        uVar3[1] = {l_U384[3]};
        sub_23783( ref uVar3, 7, 30000, 0 );
        break;
        case 7:
        sub_11921( -2038.58000000, -410.98810000, 3.27810000, 346.11550000, sub_18470(), ref l_U384[4] );
        sub_14079( ref l_U384[4], sub_3101() );
        l_U384[4]._fU4 = sub_23349( -1974.52200000, -439.79020000, 2.10150000, 352.20000000 );
        SET_CHAR_NEVER_TARGETTED( l_U384[4]._fU0, 1 );
        l_U2626[4]._fU0 = l_U384[4]._fU0;
        l_U2626[4]._fU72 = {-2038.58000000, -410.98810000, 3.27810000};
        l_U2626[4]._fU84 = 7;
        l_U2626[4]._fU100 = l_U3389;
        sub_11921( -2042.51700000, -409.08500000, 3.29210000, 348.86180000, sub_18470(), ref l_U384[5] );
        sub_14079( ref l_U384[5], sub_3101() );
        SET_CHAR_NEVER_TARGETTED( l_U384[5]._fU0, 1 );
        l_U384[5]._fU4 = sub_23349( -1970.20200000, -442.49540000, 2.06150000, 93.61750000 );
        l_U2626[5]._fU0 = l_U384[5]._fU0;
        l_U2626[5]._fU72 = {-2042.51700000, -409.08500000, 3.29210000};
        l_U2626[5]._fU84 = 9;
        l_U2626[5]._fU100 = l_U3389;
        uVar3[0] = {l_U384[4]};
        uVar3[1] = {l_U384[5]};
        uVar3[2] = {l_U384[6]};
        sub_23783( ref uVar3, 26, 30000, 0 );
        break;
        case 8:
        l_U975[0]._fU0 = sub_24363( l_U364, 24, -2023.01700000, -345.76970000, 3.44870000, 328.67320000, 12, 0 );
        l_U975[0]._fU72 = {-2022.62200000, -345.28130000, 3.53000000};
        l_U975[0]._fU84 = 2;
        l_U975[0]._fU100 = l_U3388;
        SET_CHAR_HEALTH( l_U975[0]._fU0, 220 );
        l_U975[1]._fU0 = sub_24363( l_U365, 24, -2037.16400000, -375.00890000, 3.36570000, 357.21960000, 26, 0 );
        l_U975[1]._fU72 = {-2015.32300000, -358.43220000, 3.35580000};
        l_U975[1]._fU84 = 3;
        l_U975[1]._fU100 = l_U3390;
        l_U975[2]._fU0 = sub_24363( l_U364, 24, -2010.30600000, -373.09750000, 3.32990000, 357.21960000, 26, 0 );
        l_U975[2]._fU72 = {-2011.74500000, -350.60840000, 3.40060000};
        l_U975[2]._fU84 = 4;
        l_U975[2]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[2]._fU0, 220 );
        l_U975[3]._fU0 = sub_24363( l_U365, 24, -2049.24600000, -341.36390000, 16.54360000, 270.00000000, 7, 1 );
        l_U975[3]._fU72 = {-2029.97100000, -338.15710000, 16.20580000};
        l_U975[3]._fU84 = 5;
        l_U975[3]._fU100 = l_U3391;
        l_U975[3]._fU28 = 1;
        l_U975[3]._fU32._fU0 = 1;
        l_U975[3]._fU32._fU16 = {0.00000000, 0.00000000, 5.50000000};
        break;
        case 9:
        l_U975[4]._fU0 = sub_24363( l_U364, 24, -2030.34400000, -367.09040000, 3.36570000, 328.67320000, 26, 0 );
        l_U975[4]._fU72 = {-2030.34400000, -367.09040000, 3.36570000};
        l_U975[4]._fU84 = 56;
        l_U975[4]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[4]._fU0, 220 );
        l_U975[6]._fU0 = sub_24363( l_U364, 24, -2039.46500000, -392.59410000, 3.30120000, 357.21960000, 26, 0 );
        l_U975[6]._fU72 = {-2039.46500000, -392.59410000, 3.30120000};
        l_U975[6]._fU84 = 12;
        l_U975[6]._fU100 = l_U3388;
        l_U975[8]._fU0 = sub_24363( l_U365, 24, -2042.31700000, -372.99060000, 16.98240000, 195.19840000, 7, 1 );
        l_U975[8]._fU72 = {-2039.49500000, -394.11900000, 16.22920000};
        l_U975[8]._fU84 = 6;
        l_U975[8]._fU100 = l_U3391;
        l_U975[8]._fU28 = 1;
        l_U975[8]._fU32._fU0 = 1;
        l_U975[8]._fU32._fU16 = {0.00000000, 0.00000000, 5.50000000};
        l_U975[25]._fU0 = sub_24363( l_U364, 24, -2031.31300000, -340.18530000, 3.52450000, 270.00000000, 26, 0 );
        l_U975[25]._fU72 = {-2031.31300000, -340.18530000, 3.52450000};
        l_U975[25]._fU84 = 16;
        l_U975[25]._fU100 = l_U3388;
        SET_CHAR_HEALTH( l_U975[25]._fU0, 220 );
        l_U975[36]._fU0 = sub_24363( l_U364, 24, -2039.75000000, -382.17260000, 3.30120000, 270.00000000, 26, 0 );
        l_U975[36]._fU72 = {-2039.75000000, -382.17260000, 3.30120000};
        l_U975[36]._fU84 = 56;
        l_U975[36]._fU100 = l_U3390;
        break;
        case 10:
        CREATE_CAR( l_U371, -1954.91900000, -495.01030000, 2.04570000, ref l_U3690[0], 1 );
        SET_CAR_HEADING( l_U3690[0], 84.95600000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U3690[0] );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U3690[0], 1 );
        l_U975[26]._fU0 = sub_24363( l_U365, 24, -1943.82000000, -499.91540000, 2.04570000, 270.00000000, 26, 0 );
        l_U975[26]._fU72 = {-2049.51400000, -412.19490000, 3.26790000};
        l_U975[26]._fU84 = 18;
        l_U975[26]._fU100 = l_U3390;
        WARP_CHAR_INTO_CAR( l_U975[26]._fU0, l_U3690[0] );
        l_U975[27]._fU0 = sub_24363( l_U364, 24, -1952.14700000, -502.64480000, 2.20900000, 270.00000000, 26, 0 );
        l_U975[27]._fU72 = {-2056.06500000, -424.14640000, 3.42240000};
        l_U975[27]._fU84 = 17;
        l_U975[27]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[27]._fU0, 220 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U975[27]._fU0, l_U3690[0], 0 );
        break;
        case 11:
        l_U3337[7] = sub_26223( -1995.75900000, -523.14760000, 3.57410000, 1.57020000 );
        l_U975[7]._fU0 = sub_24363( l_U365, 24, -1997.49100000, -518.89910000, 3.36260000, 270.00000000, 26, 0 );
        l_U975[7]._fU72 = {-2049.47100000, -373.58990000, 3.36530000};
        l_U975[7]._fU84 = 14;
        l_U975[7]._fU100 = l_U3390;
        l_U975[7]._fU24 = 1;
        WARP_CHAR_INTO_CAR( l_U975[7]._fU0, l_U3337[7] );
        l_U3337[23] = sub_26223( -1993.53300000, -524.87020000, 2.99100000, 358.90710000 );
        l_U975[23]._fU0 = sub_24363( l_U364, 24, -2002.35200000, -513.41890000, 3.83560000, 270.00000000, 26, 0 );
        l_U975[23]._fU72 = {-2049.38200000, -379.74100000, 3.36530000};
        l_U975[23]._fU84 = 13;
        l_U975[23]._fU100 = l_U3388;
        l_U975[23]._fU24 = 1;
        SET_CHAR_HEALTH( l_U975[23]._fU0, 220 );
        WARP_CHAR_INTO_CAR( l_U975[23]._fU0, l_U3337[23] );
        l_U3337[24] = sub_26223( -1997.46400000, -525.99190000, 3.06640000, 1.14760000 );
        l_U975[24]._fU0 = sub_24363( l_U365, 24, -2005.62700000, -520.08250000, 3.43670000, 270.00000000, 7, 0 );
        l_U975[24]._fU72 = {-2054.95400000, -369.54250000, 3.36530000};
        l_U975[24]._fU84 = 14;
        l_U975[24]._fU100 = l_U3390;
        l_U975[24]._fU24 = 1;
        WARP_CHAR_INTO_CAR( l_U975[24]._fU0, l_U3337[24] );
        break;
        case 12:
        l_U3337[34] = sub_26223( -1975.08600000, -303.64780000, 2.42160000, 180.14760000 );
        l_U975[34]._fU0 = sub_24363( l_U364, 24, -1983.91100000, -290.57840000, 1.62870000, 270.00000000, 26, 0 );
        l_U975[34]._fU72 = {-2027.53800000, -424.92970000, 3.36570000};
        l_U975[34]._fU84 = 20;
        l_U975[34]._fU100 = l_U3390;
        l_U975[34]._fU24 = 1;
        WARP_CHAR_INTO_CAR( l_U975[34]._fU0, l_U3337[34] );
        l_U3337[35] = sub_26223( -1979.12800000, -287.58950000, 1.62870000, 180.14760000 );
        l_U975[35]._fU0 = sub_24363( l_U365, 24, -1981.57900000, -288.35480000, 1.62870000, 270.00000000, 12, 0 );
        l_U975[35]._fU72 = {-2032.79900000, -426.11090000, 3.37700000};
        l_U975[35]._fU84 = 20;
        l_U975[35]._fU100 = l_U3390;
        l_U975[35]._fU24 = 1;
        WARP_CHAR_INTO_CAR( l_U975[35]._fU0, l_U3337[35] );
        SET_CHAR_HEALTH( l_U975[35]._fU0, 220 );
        break;
        case 13:
        CREATE_CAR( l_U371, -1277.92900000, -601.01140000, 1.83700000, ref l_U3690[1], 1 );
        SET_CAR_HEADING( l_U3690[1], 11.92960000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U3690[1] );
        LOCK_CAR_DOORS( l_U3690[1], 2 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U3690[1], 1 );
        sub_11921( -1279.58800000, -601.55420000, 1.83700000, 282.00000000, sub_18470(), ref l_U384[7] );
        l_U384[7]._fU4 = sub_23349( -1254.94200000, -596.71260000, 1.83820000, 357.14930000 );
        sub_14079( ref l_U384[7], sub_3101() );
        SET_CHAR_NEVER_TARGETTED( l_U384[7]._fU0, 1 );
        l_U2626[7]._fU0 = l_U384[7]._fU0;
        l_U2626[7]._fU72 = {-1279.58800000, -601.55420000, 1.83700000};
        l_U2626[7]._fU84 = 29;
        l_U2626[7]._fU100 = l_U3389;
        sub_11921( -1292.18100000, -602.19500000, 1.83700000, 282.00000000, sub_18470(), ref l_U384[8] );
        l_U384[8]._fU4 = sub_23349( -1257.38800000, -603.02570000, 1.83760000, 340.13890000 );
        sub_14079( ref l_U384[8], sub_3101() );
        l_U2626[8]._fU0 = l_U384[8]._fU0;
        SET_CHAR_NEVER_TARGETTED( l_U384[8]._fU0, 1 );
        l_U2626[8]._fU72 = {-1292.18100000, -602.19500000, 1.83700000};
        l_U2626[8]._fU84 = 24;
        l_U2626[8]._fU100 = l_U3389;
        uVar3[0] = {l_U384[7]};
        uVar3[1] = {l_U384[8]};
        sub_23783( ref uVar3, 7, 30000, 0 );
        break;
        case 14:
        l_U975[10]._fU0 = sub_24363( l_U366, 24, -1267.34600000, -588.48060000, 1.91750000, 123.32760000, 26, 0 );
        l_U975[10]._fU72 = {-1267.34600000, -588.48060000, 1.91750000};
        l_U975[10]._fU84 = 26;
        l_U975[10]._fU100 = l_U3390;
        l_U975[13]._fU0 = sub_24363( l_U366, 24, -1231.32300000, -583.96400000, 1.83760000, 93.57750000, 26, 1 );
        l_U975[13]._fU72 = {-1249.96100000, -572.80650000, 1.83800000};
        l_U975[13]._fU84 = 34;
        l_U975[13]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[13]._fU0, 220 );
        l_U975[15]._fU0 = sub_24363( l_U367, 24, -1264.83600000, -567.63090000, 9.53380000, 270.00000000, 7, 1 );
        l_U975[15]._fU72 = {-1251.51800000, -567.64560000, 9.53980000};
        l_U975[15]._fU84 = 35;
        l_U975[15]._fU100 = l_U3390;
        l_U975[15]._fU28 = 1;
        l_U975[15]._fU32._fU0 = 1;
        l_U975[15]._fU32._fU16 = {0.00000000, 0.00000000, 2.00920000};
        break;
        case 15:
        CREATE_CAR( l_U371, -1176.22700000, -576.72660000, 2.67110000, ref l_U3690[2], 1 );
        SET_CAR_HEADING( l_U3690[2], 238.36960000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U3690[2] );
        LOCK_CAR_DOORS( l_U3690[2], 2 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U3690[2], 1 );
        l_U975[9]._fU0 = sub_24363( l_U366, 24, -1190.97000000, -557.25020000, 2.24510000, 317.70150000, 7, 1 );
        l_U975[9]._fU72 = {-1190.97000000, -557.25020000, 2.24510000};
        l_U975[9]._fU84 = 56;
        l_U975[9]._fU100 = l_U3390;
        l_U975[11]._fU0 = sub_24363( l_U367, 24, -1191.59500000, -552.66530000, 2.41390000, 317.70150000, 7, 1 );
        l_U975[11]._fU72 = {-1191.59500000, -552.66530000, 2.41390000};
        l_U975[11]._fU84 = 56;
        l_U975[11]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[11]._fU0, 220 );
        l_U975[16]._fU0 = sub_24363( l_U366, 24, -1178.37100000, -577.79910000, 1.83840000, 317.70150000, 26, 0 );
        l_U975[16]._fU72 = {-1178.37100000, -577.79910000, 1.83840000};
        l_U975[16]._fU84 = 40;
        l_U975[16]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[16]._fU0, 220 );
        l_U975[17]._fU0 = sub_24363( l_U367, 24, -1206.24000000, -553.21980000, 1.83800000, 317.70150000, 7, 1 );
        l_U975[17]._fU72 = {-1205.61500000, -556.95570000, 1.83800000};
        l_U975[17]._fU84 = 56;
        l_U975[17]._fU100 = l_U3389;
        l_U975[33]._fU0 = sub_24363( l_U366, 24, -1217.31600000, -569.79590000, 8.36359900, 270.00000000, 7, 1 );
        l_U975[33]._fU72 = {-1217.31600000, -569.79590000, 8.36359900};
        l_U975[33]._fU84 = 48;
        l_U975[33]._fU100 = l_U3390;
        l_U975[33]._fU32._fU0 = 0;
        l_U975[33]._fU32._fU16 = {0.00000000, 0.00000000, 2.00920000};
        l_U975[33]._fU32._fU4 = {0.04320000, -0.73480000, -0.67690000};
        SET_CHAR_WILL_USE_COVER( l_U975[33]._fU0, 0 );
        l_U975[28]._fU0 = sub_24363( l_U367, 24, -1215.61700000, -555.84920000, 1.83800000, 317.70150000, 26, 1 );
        l_U975[28]._fU72 = {-1215.61700000, -555.84920000, 1.83800000};
        l_U975[28]._fU84 = 50;
        l_U975[28]._fU100 = l_U3389;
        l_U975[29]._fU0 = sub_24363( l_U366, 24, -1210.25700000, -549.91370000, 1.83800000, 317.70150000, 26, 1 );
        l_U975[29]._fU72 = {-1210.25700000, -549.91370000, 1.83800000};
        l_U975[29]._fU84 = 51;
        l_U975[29]._fU100 = l_U3388;
        SET_CHAR_HEALTH( l_U975[29]._fU0, 220 );
        l_U975[30]._fU0 = sub_24363( l_U367, 24, -1246.15500000, -578.19890000, 1.83760000, 317.70150000, 26, 1 );
        l_U975[30]._fU72 = {-1246.15500000, -578.19890000, 1.83760000};
        l_U975[30]._fU84 = 52;
        l_U975[30]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[30]._fU0, 220 );
        l_U975[37]._fU0 = sub_24363( l_U367, 24, -1224.70500000, -574.86720000, 1.83760000, 317.70150000, 7, 1 );
        l_U975[37]._fU72 = {-1224.70500000, -574.86720000, 1.83760000};
        l_U975[37]._fU84 = 56;
        l_U975[37]._fU100 = l_U3390;
        break;
        case 16:
        sub_11921( -1172.88800000, -562.24740000, 2.11930000, 200.00000000, sub_18470(), ref l_U384[11] );
        l_U384[11]._fU4 = sub_23349( -1224.88500000, -539.53040000, 2.82460000, 283.49400000 );
        sub_14079( ref l_U384[11], sub_3101() );
        l_U2626[11]._fU0 = l_U384[11]._fU0;
        l_U2626[11]._fU72 = {-1172.88800000, -562.24740000, 2.11930000};
        l_U2626[11]._fU84 = 38;
        l_U2626[11]._fU100 = l_U3389;
        uVar3[0] = {l_U384[9]};
        uVar3[1] = {l_U384[10]};
        uVar3[2] = {l_U384[11]};
        sub_23783( ref uVar3, 7, 30000, 0 );
        break;
        case 17:
        sub_11921( -1170.75700000, -655.61090000, 2.05980000, 0.00000000, sub_18470(), ref l_U384[12] );
        l_U384[12]._fU4 = sub_23349( -1247.80300000, -514.75790000, 1.87000000, 240.68000000 );
        sub_14079( ref l_U384[12], sub_3101() );
        SET_CHAR_NEVER_TARGETTED( l_U384[12]._fU0, 1 );
        l_U2626[12]._fU0 = l_U384[12]._fU0;
        l_U2626[12]._fU72 = {-1170.75700000, -655.61090000, 2.05980000};
        l_U2626[12]._fU84 = 43;
        l_U2626[12]._fU100 = l_U3389;
        sub_11921( -1184.86200000, -665.28700000, 2.02710000, 0.00000000, sub_18470(), ref l_U384[13] );
        l_U384[13]._fU4 = sub_23349( -1238.92000000, -513.80960000, 1.88820000, 239.19060000 );
        sub_14079( ref l_U384[13], sub_3101() );
        SET_CHAR_NEVER_TARGETTED( l_U384[13]._fU0, 1 );
        l_U2626[13]._fU0 = l_U384[13]._fU0;
        l_U2626[13]._fU72 = {-1184.86200000, -665.28700000, 2.02710000};
        l_U2626[13]._fU84 = 44;
        l_U2626[13]._fU100 = l_U3389;
        uVar3[0] = {l_U384[12]};
        uVar3[1] = {l_U384[13]};
        sub_23783( ref uVar3, 7, 30000, 0 );
        break;
        case 18:
        l_U975[18]._fU0 = sub_24363( l_U366, 24, -1200.90800000, -599.76330000, 1.83760000, 0.00000000, 7, 0 );
        l_U975[18]._fU72 = {-1209.41600000, -569.94290000, 8.36359900};
        l_U975[18]._fU84 = 48;
        l_U975[18]._fU100 = l_U3390;
        l_U975[18]._fU28 = 1;
        l_U975[18]._fU32._fU0 = 0;
        l_U975[18]._fU32._fU16 = {0.00000000, 0.00000000, 2.00920000};
        l_U975[18]._fU32._fU4 = {0.04320000, -0.73480000, -0.67690000};
        SET_CHAR_WILL_USE_COVER( l_U975[18]._fU0, 0 );
        l_U975[19]._fU0 = sub_24363( l_U367, 24, -1202.90600000, -607.47420000, 1.83760000, 0.00000000, 7, 0 );
        l_U975[19]._fU72 = {-1200.67800000, -574.87980000, 5.07770000};
        l_U975[19]._fU84 = 42;
        l_U975[19]._fU100 = l_U3390;
        l_U975[19]._fU28 = 1;
        l_U975[19]._fU32._fU0 = 2;
        l_U975[19]._fU32._fU16 = {0.00000000, 0.00000000, 2.00920000};
        l_U975[19]._fU32._fU4 = {-0.00720000, -0.81400000, -0.58090000};
        break;
        case 19:
        CREATE_CAR( l_U371, -1202.07400000, -645.73880000, 1.83760000, ref l_U3690[3], 1 );
        SET_CAR_HEADING( l_U3690[3], 327.42620000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U3690[3] );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U3690[3], 1 );
        l_U975[20]._fU0 = sub_24363( l_U366, 24, -1176.58200000, -631.33790000, 8.63309900, 180.00000000, 7, 1 );
        l_U975[20]._fU72 = {-1176.58200000, -631.33790000, 8.63309900};
        l_U975[20]._fU84 = 45;
        l_U975[20]._fU100 = l_U3388;
        l_U975[20]._fU28 = 1;
        l_U975[20]._fU32._fU0 = 2;
        l_U975[20]._fU32._fU16 = {0.00000000, 0.00000000, 2.00920000};
        l_U975[20]._fU32._fU4 = {-0.02150000, 0.76110000, -0.64820000};
        SET_CHAR_WILL_USE_COVER( l_U975[20]._fU0, 0 );
        l_U975[21]._fU0 = sub_24363( l_U367, 24, -1203.25100000, -644.97440000, 1.83760000, 238.00000000, 26, 1 );
        l_U975[21]._fU72 = {-1203.25100000, -644.97440000, 1.83761000};
        l_U975[21]._fU84 = 46;
        l_U975[21]._fU100 = l_U3390;
        SET_CHAR_HEALTH( l_U975[21]._fU0, 220 );
        break;
        case 20:
        l_U975[22]._fU0 = sub_24363( l_U366, 24, -1182.79100000, -625.55540000, 10.30860000, 90.00000000, 26, 1 );
        l_U975[22]._fU72 = {-1199.09400000, -625.68120000, 10.30900000};
        l_U975[22]._fU84 = 55;
        l_U975[22]._fU100 = l_U3388;
        l_U975[22]._fU28 = 1;
        l_U975[22]._fU32._fU0 = 1;
        l_U975[22]._fU32._fU16 = {0.00000000, 0.00000000, 2.84260000};
        break;
        case 21:
        CREATE_CAR( l_U371, -1242.04900000, -685.92010000, 2.03540000, ref l_U3690[4], 1 );
        SET_CAR_HEADING( l_U3690[4], 75.93240000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U3690[4] );
        l_U975[31]._fU0 = sub_24363( l_U367, 24, -1233.05200000, -688.66020000, 2.03540000, 238.00000000, 26, 0 );
        l_U975[31]._fU72 = {-1192.24500000, -651.59480000, 1.83760000};
        l_U975[31]._fU84 = 53;
        l_U975[31]._fU100 = l_U3388;
        SET_CHAR_HEALTH( l_U975[31]._fU0, 220 );
        WARP_CHAR_INTO_CAR( l_U975[31]._fU0, l_U3690[4] );
        l_U975[32]._fU0 = sub_24363( l_U367, 24, -1233.05200000, -688.66020000, 2.03540000, 238.00000000, 26, 0 );
        l_U975[32]._fU72 = {-1189.84400000, -652.84360000, 1.83760000};
        l_U975[32]._fU84 = 53;
        l_U975[32]._fU100 = l_U3388;
        SET_CHAR_HEALTH( l_U975[32]._fU0, 220 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U975[32]._fU0, l_U3690[4], 0 );
        break;
    }
    return;
}

void sub_9443(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_9460( uParam0, 0, uParam1, uParam4 );
}

void sub_9460(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_7131( uParam1 );
    return sub_9491( uParam0, uVar8, uParam2, uParam5, uParam1 );
}

int sub_9491(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_7717( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_9728(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_9739( uParam0 ), sub_6348( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_9846( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_9952( uParam0, (uParam1^) );
    return;
}

int sub_9739(unknown uParam0)
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

void sub_9846(unknown uParam0, unknown uParam1)
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

void sub_9952(unknown uParam0, unknown uParam1)
{
    sub_9964( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_9964(unknown uParam0, int iParam1)
{
    sub_9975( uParam0 );
    if (iParam1 == 22)
    {
        sub_10075( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_10734( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_9975(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_10075(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((g_U15728[19]) AND ((uParam0^) == sub_3101()))
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

void sub_10734(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_10075( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_10075( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_10984(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_10995( uParam0 );
    if (iVar3 == 6)
    {
        return;
    }
    g_U39058[iVar3]._fU4 = 1;
    g_U39102 = 1;
    return;
}

int sub_10995(unknown uParam0)
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

void sub_11173(int iParam0, unknown uParam1, unknown uParam2)
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

void sub_11537(int iParam0, unknown uParam1, boolean bParam2)
{
    iParam0->_fU4 = uParam1;
    if (bParam2)
    {
        sub_11563( iParam0, 2 );
    }
    return;
}

void sub_11563(int iParam0, int iParam1)
{
    if (sub_11576( iParam0, iParam1 ))
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

boolean sub_11576(int iParam0, unknown uParam1)
{
    return ((uParam1) AND (iParam0->_fU88)) > 0;
}

int sub_11802(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if ((NOT (HAS_MODEL_LOADED( sub_7131( uParam0 ) ))) || (NOT (sub_6955( uParam0 ))))
    {
        sub_6337( uParam0 );
        REQUEST_MODEL( sub_7131( uParam0 ) );
        return 0;
    }
    sub_11887( uParam1, uParam4, sub_6348( uParam0 ), sub_7131( uParam0 ), iParam5, 1 );
    sub_7717( iParam5->_fU4, sub_7131( uParam0 ), uParam0 );
    SUPPRESS_CAR_MODEL( sub_7131( uParam0 ) );
    sub_9952( uParam0, iParam5->_fU0 );
    sub_13550( uParam0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_7131( uParam0 ) );
    }
    return 1;
}

void sub_11887(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_11921( vParam0 + (vector( 0.00000000, 0.00000000, 2.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_13346( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_11921(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_12519( sub_11931( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_12647( iParam5 );
    return;
}

void sub_11931(unknown uParam0)
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
        if (((uParam0^) == (sub_6348( 16 ))) || (((uParam0^) == (sub_6348( 13 ))) || (((uParam0^) == (sub_6348( 7 ))) || (((uParam0^) == (sub_6348( 6 ))) || (((uParam0^) == (sub_6348( 1 ))) || ((uParam0^) == (sub_6348( 0 ))))))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_6348( 17 ))) || ((uParam0^) == (sub_6348( 15 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_12519(unknown uParam0)
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

void sub_12647(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_12686( iParam0 + 0 );
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
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_12856( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_12856( iVar3 ) );
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
            sub_13143( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_6348( 7 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_6348( 6 ) ))))
        {
            sub_13143( iParam0 );
        }
    }
    return;
}

void sub_12686(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_11931( ref uVar3 );
    }
    return Result;
}

int sub_12856(unknown uParam0)
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

void sub_13143(int iParam0)
{
    if (l_U139)
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

void sub_13346(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_7717( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_13550(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6348( uParam0 ) );
    return;
}

void sub_13870(int iParam0, int iParam1)
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

void sub_14079(int iParam0, int iParam1)
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
                if (sub_14175( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam1 != sub_3101()) AND (iParam0->_fU8 == sub_3101()))
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
        sub_14660( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_3101())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_14775( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_14775( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_14775( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_14775( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_14775( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_14175(unknown uParam0, unknown uParam1)
{
    return (NOT (sub_14199( uParam0, uParam1 ))) AND (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ));
}

boolean sub_14199(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_14660(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_14775(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_3101())
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

int sub_15152(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if (NOT (sub_6997( uParam0 )))
    {
        sub_6688( uParam0 );
        return 0;
    }
    sub_15205( uParam0, iParam5 + 0, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam4 );
    sub_12647( iParam5 );
    iParam5->_fU92 = uParam0;
    sub_3198( uParam0 );
    return 1;
}

void sub_15205(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    CREATE_CHAR( 9, sub_3221( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam1^), 6 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    iVar8 = sub_15266( uParam0, (uParam1^) );
    if (iVar8 == -1)
    {
        return;
    }
    g_U38937[iVar8]._fU4 = 1;
    g_U39102 = 1;
    return;
}

void sub_15266(unknown uParam0, unknown uParam1)
{
    int Result;
    unknown uVar5;

    Result = sub_3232( uParam0 );
    if (Result == -1)
    {
        return -1;
    }
    uVar5 = sub_15299( Result );
    switch (uVar5)
    {
        case 0:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_01_FULL_01" );
        break;
        case 1:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_01_GANG_01" );
        break;
        case 2:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_02_FULL_01" );
        break;
        case 3:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_02_GANG_01" );
        break;
        case 4:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_03_FULL_01" );
        break;
        case 5:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_03_GANG_01" );
        break;
        case 6:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_04_FULL_01" );
        break;
        case 7:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_04_GANG_01" );
        break;
        case 8:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_05_FULL_01" );
        break;
        case 9:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_05_GANG_01" );
        break;
        case 10:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_06_FULL_01" );
        break;
        case 11:
        SET_AMBIENT_VOICE_NAME( uParam1, "M_Y_GLOST_06_GANG_01" );
        break;
    }
    sub_9975( ref uParam1 );
    sub_16035( uParam1, Result );
    return Result;
}

void sub_15299(unknown uParam0)
{
    int Result;

    Result = g_U38937[uParam0]._fU24;
    if (NOT (Result == -1))
    {
        return Result;
    }
    Result = sub_15338();
    g_U38937[uParam0]._fU24 = Result;
    return Result;
}

void sub_15338()
{
    int Result;
    int iVar3;
    int I;

    Result = g_U39029[0];
    iVar3 = 0;
    for ( I = 1; I < 12; I++ )
    {
        g_U39029[iVar3] = g_U39029[I];
        iVar3++;
    }
    g_U39029[iVar3] = -1;
    if (Result == -1)
    {
        Result = 0;
    }
    return Result;
}

void sub_16035(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    iVar4 = g_U38937[uParam1]._fU12;
    iVar5 = FLOOR( 7.00000000 );
    if (iVar4 > iVar5)
    {
        iVar4 = iVar5;
    }
    iVar6 = iVar5 - iVar4;
    iVar7 = 200;
    if (iVar4 < iVar5)
    {
        if (iVar4 == 0)
        {
            iVar7 = 0;
        }
        else
        {
            iVar7 -= (200 / iVar5) * iVar6;
        }
    }
    iVar8 = 250 + iVar7;
    SET_CHAR_MAX_HEALTH( uParam0, iVar8 );
    SET_CHAR_HEALTH( uParam0, iVar8 );
    iVar9 = 50 + (5 * iVar4);
    if (iVar9 > 80)
    {
        iVar9 = 80;
    }
    SET_CHAR_ACCURACY( uParam0, iVar9 );
    PRINTSTRING( "................." );
    uVar10 = {sub_16243( uParam1 )};
    PRINTSTRING( GET_STRING_FROM_TEXT_FILE( ref uVar10 ) );
    PRINTSTRING( " campaigns: " );
    PRINTINT( iVar4 );
    PRINTSTRING( " ---> Health addition = " );
    PRINTINT( iVar7 );
    PRINTSTRING( " ---> Accuracy = " );
    PRINTINT( iVar9 );
    PRINTNL();
    return;
}

void sub_16243(int iParam0)
{
    char[16] Result;
    unknown uVar7;

    StrCopy( ref Result, "ERROR", 16 );
    if (iParam0 == -1)
    {
        return Result;
    }
    uVar7 = g_U38937[iParam0]._fU16;
    return sub_16295( uVar7 );
}

void sub_16295(int iParam0)
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

void sub_17421(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_6153();
    return sub_9491( uParam0, uVar7, uParam1, uParam4, 9 );
}

void sub_18470()
{
    int Result;
    int iVar3;
    int iVar4;

    iVar3 = 0;
    iVar4 = 0;
    if (HAS_MODEL_LOADED( sub_3221( 1 ) ))
    {
        iVar3++;
    }
    if (HAS_MODEL_LOADED( sub_3221( 2 ) ))
    {
        iVar3++;
    }
    if (HAS_MODEL_LOADED( sub_3221( 3 ) ))
    {
        iVar3++;
    }
    if (iVar3 >= 2)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar4 );
        switch (iVar4)
        {
            case 0:
            Result = sub_3221( 1 );
            break;
            case 1:
            Result = sub_3221( 2 );
            break;
            case 2:
            Result = sub_3221( 3 );
            break;
            default:
            SCRIPT_ASSERT( "GET_LOST_MODEL_FOR_BILLY3...Couldn't get model" );
            break;
        }
        if (NOT (HAS_MODEL_LOADED( Result )))
        {
            REQUEST_MODEL( Result );
            while (NOT (HAS_MODEL_LOADED( Result )))
            {
                WAIT( 0 );
            }
        }
    }
    else if (HAS_MODEL_LOADED( 1439613707 ))
    {
        Result = 1439613707;
    }
    else if (HAS_MODEL_LOADED( 1737188996 ))
    {
        Result = 1737188996;
    }
    else if (HAS_MODEL_LOADED( -411638179 ))
    {
        Result = -411638179;
    }
    else if (HAS_MODEL_LOADED( -2130437771 ))
    {
        Result = -2130437771;
    }
    else if (HAS_MODEL_LOADED( -1832534792 ))
    {
        Result = -1832534792;
    }
    else if (HAS_MODEL_LOADED( -1670328242 ))
    {
        Result = -1670328242;
    }
    else if (NOT (HAS_MODEL_LOADED( -2130437771 )))
    {
        REQUEST_MODEL( -2130437771 );
        while (NOT (HAS_MODEL_LOADED( -2130437771 )))
        {
            WAIT( 0 );
        }
    }
    Result = -2130437771;;;;;;;;
    if (NOT (HAS_MODEL_LOADED( Result )))
    {
        REQUEST_MODEL( Result );
        while (NOT (HAS_MODEL_LOADED( Result )))
        {
            WAIT( 0 );
        }
    }
    return Result;
}

void sub_23349(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    CREATE_CAR( l_U369, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( Result );
    return Result;
}

void sub_23783(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int I;

    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            GIVE_WEAPON_TO_CHAR( (uParam0^)[I]._fU0, uParam1, uParam2, uParam3 );
        }
    }
    return;
}

void sub_24363(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7)
{
    unknown Result;

    if (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        REQUEST_MODEL( uParam0 );
        while (NOT (HAS_MODEL_LOADED( uParam0 )))
        {
            WAIT( 0 );
        }
    }
    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U3392 );
    GIVE_WEAPON_TO_CHAR( Result, uParam6, 3000, 1 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 24 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    SET_PED_DIES_WHEN_INJURED( Result, 1 );
    if (bParam7)
    {
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( Result, 1 );
    }
    SET_PED_DONT_DO_EVASIVE_DIVES( Result, 1 );
    return Result;
}

void sub_26223(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    CREATE_CAR( l_U370, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( Result );
    CHANGE_CAR_COLOUR( Result, 132, 0 );
    SET_EXTRA_CAR_COLOURS( Result, 131, 0 );
    return Result;
}

void sub_31977(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if ((VDIST2( uParam1, iParam0->_fU16 )) > 1.00000000)
        {
            TASK_PAUSE( iParam0->_fU0, 30 );
        }
        else if (((VDIST( iParam0->_fU16, sub_32070( iParam0->_fU0, 1 ) )) < 12.00000000) AND (iParam0->_fU36 == 4))
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
        sub_11563( iParam0, 32 );
        sub_11563( iParam0, 64 );
        break;
        case 1:
        sub_11563( iParam0, 32 );
        sub_13870( iParam0, 64 );
        sub_13870( iParam0, 1 );
        break;
        case 2:
        sub_11563( iParam0, 32 );
        sub_13870( iParam0, 64 );
        sub_11563( iParam0, 1 );
        break;
        case 3:
        sub_13870( iParam0, 32 );
        sub_11563( iParam0, 64 );
        break;
    }
    return;
}

void sub_32070(unknown uParam0, boolean bParam1)
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

int sub_32449()
{
    if (NOT l_U4099[1])
    {
        if (l_U4179)
        {
            GET_GAME_TIMER( ref l_U4182 );
            if ((l_U4182 - l_U4181) > 10000)
            {
                l_U4099[1] = 1;
            }
        }
    }
    if ((l_U4099[16]) AND ((l_U4099[15]) AND ((l_U4099[14]) AND ((l_U4099[1]) AND (l_U4099[0])))))
    {
        if (NOT l_U3818)
        {
            l_U3818 = 1;
        }
        return 1;
    }
    else if (NOT l_U4179)
    {
        GET_GAME_TIMER( ref l_U4181 );
        l_U4179 = 1;
    }
    if (NOT l_U4180)
    {
        if (IS_SCREEN_FADED_IN())
        {
            sub_32666( "E1B3_PLEA", ref l_U4183, 6, 1 );
            l_U4180 = 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U3463 )))
    {
        if (IS_CHAR_IN_CAR( sub_3101(), l_U3463 ))
        {
            sub_33680( ref l_U384[0] );
        }
        else
        {
            sub_3812();
        }
    }
    if (NOT (IS_CAR_DEAD( l_U3463 )))
    {
        sub_34383( 0, l_U3336 );
        sub_34383( 1, l_U384[1]._fU4 );
        sub_34383( 14, l_U384[14]._fU4 );
        sub_34383( 15, l_U384[15]._fU4 );
        sub_34383( 16, l_U384[16]._fU4 );
    }
    return 0;
}

void sub_32666(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_32687( uParam0, ref l_U22._fU0, uParam1, uParam2, uParam3 );
}

void sub_32687(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_32741( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_32741(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_32763( iParam1 )))
    {
        return 0;
    }
    l_U22._fU384 = 0;
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
    sub_33451( ref g_U8947, ref l_U22 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_32763(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_32840( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_32840( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_32840( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_32840(unknown uParam0)
{
    return;
}

void sub_33451(int iParam0, int iParam1)
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

void sub_33680(int iParam0)
{
    sub_33693( iParam0 + 0 );
    return;
}

void sub_33693(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U6)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U4))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U5 + 500))
        {
            l_U4 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_33853()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3101() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U6)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U5 );
            l_U4 = 1;
            l_U3 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U4) AND (NOT l_U3))
        {
            if (l_U6)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U3 = 1;
        }
    }
    else if (l_U3)
    {
        if (l_U6)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U3 = 0;
    };;;
    return;
}

int sub_33853()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_34383(int iParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( l_U384[iParam0]._fU0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (IS_CHAR_IN_CAR( l_U384[iParam0]._fU0, uParam1 ))
            {
                if (NOT l_U4137[iParam0])
                {
                    if ((l_U4137[0]) || (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
                    {
                        if (iParam0 == 0)
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U384[iParam0]._fU0, uParam1, -1716.77000000, 370.31000000, 25.48000000, 4.00000000, 0, -570033273, 2, 4.00000000, 100 );
                            l_U4137[iParam0] = 1;
                            GET_GAME_TIMER( ref l_U4176 );
                            GET_GAME_TIMER( ref l_U4178 );
                        }
                        else
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 700, 1300, ref l_U4175 );
                            GET_GAME_TIMER( ref l_U4177 );
                            if ((l_U4177 - l_U4176) > l_U4175)
                            {
                                if (iParam0 == 14)
                                {
                                    if (l_U4137[1])
                                    {
                                        TASK_CAR_DRIVE_TO_COORD( l_U384[iParam0]._fU0, uParam1, -1716.77000000, 370.31000000, 25.48000000, 4.00000000, 0, -570033273, 2, 4.00000000, 100 );
                                        GET_GAME_TIMER( ref l_U4176 );
                                        l_U4137[iParam0] = 1;
                                        l_U4156[iParam0] = 0;
                                    }
                                }
                                else if (l_U4137[iParam0 - 1])
                                {
                                    TASK_CAR_DRIVE_TO_COORD( l_U384[iParam0]._fU0, uParam1, -1716.77000000, 370.31000000, 25.48000000, 4.00000000, 0, -570033273, 2, 4.00000000, 100 );
                                    GET_GAME_TIMER( ref l_U4176 );
                                    l_U4137[iParam0] = 1;
                                    l_U4156[iParam0] = 0;
                                }
                            }
                        }
                    }
                    else if (NOT l_U4118[iParam0])
                    {
                        SET_BLIP_THROTTLE_RANDOMLY( uParam1, 1 );
                        l_U4118[iParam0] = 1;
                    }
                }
                else if (NOT l_U4099[iParam0])
                {
                    if ((sub_34978( l_U4178, 30000 )) || (LOCATE_CHAR_ANY_MEANS_2D( l_U384[iParam0]._fU0, -1716.77000000, 370.31000000, 4.00000000, 4.00000000, 0 )))
                    {
                        l_U4099[iParam0] = 1;
                    }
                }
                else if (iParam0 == 0)
                {
                    sub_35072( ref l_U384[0], 7.00000000 );
                }
                sub_35105( ref l_U384[iParam0], 0 );;;
            }
            else if (NOT l_U4156[iParam0])
            {
                TASK_ENTER_CAR_AS_DRIVER( l_U384[iParam0]._fU0, uParam1, -1 );
                l_U4156[iParam0] = 1;
                l_U4137[iParam0] = 0;
            }
        }
    }
    else
    {
        l_U4099[iParam0] = 1;
    }
    return;
}

int sub_34978(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam0 > 0)
    {
        GET_GAME_TIMER( ref iVar4 );
        if ((iVar4 - iParam0) > iParam1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_35072(int iParam0, unknown uParam1)
{
    iParam0->_fU28 = uParam1;
    return;
}

void sub_35105(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_35152( iParam0->_fU92 );
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
        if ((sub_35371( iParam0 )) == 2)
        {
            return;
        }
        sub_38970( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_40881( iParam0 );
        }
        if (sub_11576( iParam0, 1 ))
        {
            sub_45703( iParam0 + 0, 0 );
        }
        else
        {
            sub_45703( iParam0 + 0, 1 );
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
        iVar5 = sub_45994( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_11576( iParam0, 32 ))
            {
                sub_14660( iParam0, 3 );
            }
            else if (sub_11576( iParam0, 64 ))
            {
                if (sub_11576( iParam0, 1 ))
                {
                    sub_14660( iParam0, 5 );
                }
                else
                {
                    sub_14660( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_47045( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47302( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48470( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48584( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48705( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_49005( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_49361( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47045( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47302( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48470( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48584( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10958 != 0) || (g_U10956 != 0))
        {
            if ((sub_38577( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_49620( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_49777( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_38577( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47045( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47302( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48470( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48584( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_46091( iParam0 )) > 30.00000000)
        {
            sub_56928( iParam0 );
        }
        else if ((sub_49620( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38415( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_57013( iParam0 );
    }
    return;
}

void sub_35152(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_3232( uParam0 );
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

int sub_35371(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3101() )) || (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_3101(), ref iVar4 );
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
        if (NOT (((sub_35514( iVar3 )) == sub_7369()) AND ((sub_12686( iParam0 + 0 )) == 3)))
        {
            if (((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3101() ))) AND (sub_35614( sub_3101() ))) || (((sub_35572( iParam0->_fU0 )) == (sub_6348( 0 ))) || ((sub_12686( iParam0 + 0 )) != 1)))
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
        if ((sub_12686( iParam0 + 0 )) == 3)
        {
            sub_35733( iParam0->_fU0, "", sub_3101(), 26 );
        }
        else
        {
            sub_35733( sub_3101(), "", iParam0->_fU0, 37 );
        }
        return sub_38415( iParam0, 1, 1 );
    }
    return 0;
}

void sub_35514(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_35572(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_35614(unknown uParam0)
{
    return (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (IS_CHAR_IN_ANY_CAR( uParam0 ));
}

void sub_35733(int iParam0, unknown uParam1, int iParam2, int iParam3)
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
        uVar7 = sub_36223( sub_35893( iParam0 ) );
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
        l_U163 = iParam0;
        l_U164 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_36567( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_3101())
            {
                iVar8 = sub_12686( ref iParam0 );
                if ((iParam2 != sub_3101()) AND (iVar8 == 1))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_3101(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_3101(), iParam2, sub_36567( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_3101(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_3101(), iParam0, sub_36567( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((IS_CHAR_MODEL( iParam0, sub_6348( 0 ) )) AND (iParam3 == 38))
            {
                if (l_U168)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_36831( iParam3 ), 1, 1, 2 );
            }
            l_U162 = iParam3;
        }
        GET_GAME_TIMER( ref l_U161 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U166, 2 );
            case 36: SET_BIT( ref l_U166, 1 );
            case 24:
            SET_BIT( ref l_U166, 0 );
            break;
            case 38:
            SET_BIT( ref l_U166, 6 );
            break;
        }
    }
    return Result;
}

void sub_35893(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_35946( uVar3 );
        }
    }
    return Result;
}

void sub_35946(unknown uParam0)
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

void sub_36223(unknown uParam0)
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

void sub_36567(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_36831(unknown uParam0)
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

int sub_38415(int iParam0, unknown uParam1, boolean bParam2)
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
    else if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))) AND (sub_35614( iParam0->_fU0 )))
    {
        return 2;
    }
    else if ((sub_11576( iParam0, 1 )) || (uParam1))
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
                return sub_38577( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_32070( sub_3101(), 1 )};
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

int sub_38577(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_38588( iParam0 );
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

void sub_38588(int iParam0)
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

void sub_38970(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_39001( (iParam0^) )))
        {
            if ((NOT l_U151) AND ((NOT l_U150) AND (sub_39036( (iParam0^) ))))
            {
                if ((NOT sub_39088()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( sub_3101() )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), iParam0->_fU0, l_U140, l_U140, l_U140, 0 ))
                        {
                            if (sub_39187())
                            {
                                if (iParam0->_fU0 == l_U149)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_32666( (iParam0 + 44) + 12, ref l_U143, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_32666( (iParam0 + 44) + 28, ref l_U143, 7, 1 );
                                    }
                                    sub_39313( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_3101() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3101(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_3101(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U126 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_3101(), ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U155._fU0, l_U155._fU4, l_U155._fU8, l_U158._fU0, l_U158._fU4, l_U158._fU8, ref l_U154 );
                                    if (iParam0->_fU0 == l_U149)
                                    {
                                        l_U153 += 1.00000000 * TIMESTEP();
                                        l_U152 = l_U154;
                                    }
                                    else if ((IS_CHAR_INJURED( l_U149 )) || (l_U154 <= l_U152))
                                    {
                                        l_U149 = iParam0->_fU0;
                                        l_U152 = l_U154;
                                        l_U153 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_39741())
                            {
                                sub_39769();
                            }
                            else if (sub_39826())
                            {
                                sub_39790();
                            }
                            GET_CHAR_COORDINATES( sub_3101(), ref l_U155._fU0, ref l_U155._fU4, ref l_U155._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U155._fU0, l_U155._fU4, l_U155._fU8, l_U158._fU0, l_U158._fU4, l_U158._fU8, ref l_U154 );
                            if (iParam0->_fU0 == l_U149)
                            {
                                l_U153 += 1.00000000 * TIMESTEP();
                                l_U152 = l_U154;
                            }
                            else if ((IS_CHAR_INJURED( l_U149 )) || (l_U154 <= l_U152))
                            {
                                l_U149 = iParam0->_fU0;
                                l_U152 = l_U154;
                                l_U153 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_40090())
                        {
                            sub_40298( (iParam0^) );
                        }
                    }
                    else if (NOT sub_40090())
                    {
                        sub_40298( (iParam0^) );
                    }
                }
                else if (NOT sub_40090())
                {
                    sub_40298( (iParam0^) );
                }
            }
            else if (NOT sub_40090())
            {
                sub_40298( (iParam0^) );
            }
        }
        else if (NOT sub_40090())
        {
            if ((NOT (sub_40108( l_U143 ))) || ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3101() ))) || ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 ))) || ((NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) || ((NOT (IS_CHAR_ON_ANY_BIKE( sub_3101() ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), iParam0->_fU0, l_U141, l_U141, l_U141, 0 ))))))))
            {
                sub_40599( iParam0 );
            }
        }
    }
    else if (sub_39001( (iParam0^) ))
    {
        sub_40613( ref l_U143, 0 );
        sub_40599( iParam0 );
    }
    return;
}

void sub_39001(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_39036(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_39088()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_39187()
{
    if (NOT l_U127)
    {
        if (l_U126)
        {
            return 1;
        }
    }
    return 0;
}

void sub_39313(int iParam0)
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
    l_U149 = nil;
    l_U153 = 0.00000000;
    l_U150 = 1;
    return;
}

void sub_39741()
{
    return l_U125;
}

void sub_39769()
{
    l_U125 = 1;
    l_U126 = 0;
    sub_39790();
    return;
}

void sub_39790()
{
    l_U127 = 0;
    return;
}

void sub_39826()
{
    return l_U127;
}

void sub_40090()
{
    int Result;

    Result = 0;
    if (sub_40108( l_U133 ))
    {
        Result = 1;
    }
    return Result;
}

int sub_40108(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_32840( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_32840( "\n speech is not playing" );
    }
    return 0;
}

void sub_40298(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U149)
    {
        l_U149 = nil;
        l_U153 = 0.00000000;
        sub_40339();
    }
    return;
}

void sub_40339()
{
    if (l_U124 == 1)
    {
        l_U128 = 0.00000000;
        l_U127 = 1;
        l_U126 = 0;
    }
    return;
}

void sub_40599(int iParam0)
{
    sub_40613( ref l_U143, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_3101() )))
    {
        TASK_CLEAR_LOOK_AT( sub_3101() );
    }
    l_U150 = 0;
    return;
}

void sub_40613(int iParam0, unknown uParam1)
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

void sub_40881(int iParam0)
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
    if ((iParam0->_fU36 == 0) || (NOT l_U165))
    {
        return;
    }
    if ((sub_39088()) AND (sub_39001( (iParam0^) )))
    {
        if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
        {
            if ((IS_CHAR_ON_ANY_BIKE( sub_3101() )) AND ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))))
            {
                GET_CHAR_COORDINATES( sub_3101(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U164 != sub_3101()) || (l_U163 != iParam0->_fU0))
                    {
                        sub_35733( iParam0->_fU0, sub_41155( uVar8._fU0 < 0.00000000, sub_35946( iParam0->_fU4 ) ), sub_3101(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_3101() ))
                {
                    l_U163 = sub_3101();
                    l_U164 = iParam0->_fU0;
                }
            }
        }
    }
    if (((iVar4 - l_U161) < 33) || ((sub_39001( (iParam0^) )) || (sub_39088())))
    {
        return;
    }
    if (l_U161 <= 0)
    {
        l_U161 = iVar4;
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
            if (sub_41808( uVar12 ))
            {
                fVar21 = sub_41851( iParam0 );
                if ((iParam0->_fU0 != l_U163) AND (((fVar21 < 15) || ((fVar21 < 19) AND (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND (NOT (sub_39001( (iParam0^) )))))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((((sub_36567( 0, 10 )) == 0) || (iParam0->_fU36 != 1)) AND (l_U0))
                    {
                        l_U0 = 0;
                        iVar15 = 17;
                        iVar11 = sub_3101();
                    }
                    else if ((NOT (IS_BIT_SET( l_U166, 6 ))) AND (((sub_12686( iParam0 + 0 )) == 1) AND ((iParam0->_fU36 == 2) AND (sub_42041( iParam0 )))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_42155( bVar16 );
                        iVar11 = sub_3101();
                    }
                    else if ((sub_42243( 8 )) AND (((ABSF( uVar22 )) < 20.00000000) AND (IS_CAR_IN_AIR_PROPER( uVar12 ))))
                    {
                        uVar13 = sub_42497( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((sub_42243( 12 )) AND (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_3101() )))
                    {
                        uVar13 = sub_42155( bVar16 );
                        iVar11 = sub_3101();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if ((sub_42243( 13 )) AND ((IS_PED_RAGDOLL( iParam0->_fU0 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 ))))
                    {
                        uVar13 = sub_42155( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if ((sub_42243( 20 )) AND ((IS_BIT_SET( l_U166, 7 )) AND ((NOT (IS_PLAYER_PRESSING_HORN( sub_5967() ))) AND ((sub_12686( iParam0 + 0 )) == 1))))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_42497( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_3101();
                        CLEAR_BIT( ref l_U166, 7 );
                    }
                    else if (((sub_12686( iParam0 + 0 )) == 1) AND ((sub_42243( 24 )) AND ((NOT (IS_BIT_SET( l_U166, 0 ))) AND (IS_WANTED_LEVEL_GREATER( sub_5967(), 0 )))))
                    {
                        iVar15 = 24;
                        iVar11 = sub_3101();
                    }
                    else if (((sub_12686( iParam0 + 0 )) == 1) AND ((sub_42243( 30 )) AND ((IS_BIT_SET( l_U166, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_5967(), 0 ))))))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_32070( sub_3101(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U166, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3101() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_3101() ))
                                    {
                                        if (sub_42243( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_3101();
                                            if ((sub_36567( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_42497( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_42155( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U166, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_3101() ))
                                    {
                                        CLEAR_BIT( ref l_U166, 3 );
                                        CLEAR_BIT( ref l_U166, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_3101() ))
                            {
                                if (((sub_12686( iParam0 + 0 )) == 1) AND ((NOT (IS_BIT_SET( l_U166, 4 ))) AND (sub_42243( 33 ))))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_35946( uVar23 );
                                        if (((iVar24 == 0) || (iVar24 == 1)) AND (NOT (IS_CAR_A_MISSION_CAR( uVar23 ))))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U166, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U166, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3101() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_12686( iParam0 + 0 )) == 1) AND ((NOT (IS_BIT_SET( l_U166, 4 ))) AND (sub_42243( 31 ))))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U166, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U166, 3 );
                            }
                            else if ((NOT (IS_PED_RAGDOLL( sub_3101() ))) AND (IS_CHAR_ON_FOOT( sub_3101() )))
                            {
                                CLEAR_BIT( ref l_U166, 3 );
                                CLEAR_BIT( ref l_U166, 4 );
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
                                if ((iVar11 == l_U164) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if ((NOT (IS_WANTED_LEVEL_GREATER( sub_5967(), 0 ))) AND (sub_42243( 0 )))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_36567( 0, 10 )) == 0;
                                    }
                                }
                                else if ((NOT (IS_BIT_SET( l_U166, 1 ))) AND ((IS_WANTED_LEVEL_GREATER( sub_5967(), 0 )) AND (sub_42243( 36 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((sub_42243( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_5967(), 2 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((iVar15 == 39) AND (sub_42243( 2 )))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((iVar11 == l_U164) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 996267216 )) || (IS_CHAR_MODEL( iVar11, 552542187 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_36567( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U166, 2 ))) AND (IS_WANTED_LEVEL_GREATER( sub_5967(), 0 )))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_44386( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((iVar11 == l_U164) || (IS_CHAR_INJURED( iVar11 )))
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
                                    uVar25 = sub_12686( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if (((sub_12686( iParam0 + 0 )) == 1) AND (sub_42243( 28 )))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_12686( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_42243( 4 )) AND (sub_42243( 3 )))
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
                                        else if ((sub_12686( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_42243( 30 ))
                                            {
                                                uVar13 = sub_44987( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_42243( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_3101(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if ((fVar26 < 5) AND ((sub_12686( iParam0 + 0 )) == 1))
                            {
                                if ((IS_WANTED_LEVEL_GREATER( sub_5967(), 0 )) AND (sub_42243( 23 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_42243( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((fVar26 > 30) AND (NOT (IS_BIT_SET( l_U166, 5 ))))
                            {
                                if (((sub_12686( iParam0 + 0 )) == 1) AND (sub_42243( 30 )))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_42243( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_36567( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((NOT (IS_STRING_NULL( uVar13 ))) || (iVar15 != 39))
                    {
                        if (sub_35733( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if ((IS_BIT_SET( l_U166, 6 )) AND ((iVar4 - l_U161) > 10000))
    {
        CLEAR_BIT( ref l_U166, 6 );
    }
    if ((NOT (IS_BIT_SET( l_U166, 7 ))) AND (IS_PLAYER_PRESSING_HORN( sub_5967() )))
    {
        SET_BIT( ref l_U166, 7 );
    }
    if ((l_U163 != nil) AND ((iVar4 - l_U161) > 28000))
    {
        if ((sub_12686( iParam0 + 0 )) == 1)
        {
            sub_35733( iParam0->_fU0, "", sub_3101(), 30 );
        }
        else
        {
            sub_35733( iParam0->_fU0, "", sub_3101(), 20 );
        }
        l_U163 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_5967(), 0 )))
        {
            CLEAR_BIT( ref l_U166, 0 );
            CLEAR_BIT( ref l_U166, 2 );
            CLEAR_BIT( ref l_U166, 1 );
        }
        CLEAR_BIT( ref l_U166, 7 );
    }
    return;
}

void sub_41155(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 0) || (iParam1 == 1))
    {
        if (bParam0)
        {
            switch (sub_36567( 0, 3 ))
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
            switch (sub_36567( 0, 3 ))
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

void sub_41808(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_41851(int iParam0)
{
    return sub_41871( iParam0->_fU0, sub_3101(), 1 );
}

void sub_41871(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_32070( uParam0, uParam2 ), sub_32070( uParam1, uParam2 ) );
}

void sub_42041(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_3101(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_42155(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_42243(int iParam0)
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
    return (iVar4 - l_U161) > iVar3;
}

void sub_42497(boolean bParam0)
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

void sub_44386(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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

void sub_44987(boolean bParam0)
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

void sub_45703(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_12686( uParam0 )) == 1)
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

int sub_45994(int iParam0)
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
    else if ((sub_38588( iParam0 )) != iParam0->_fU4)
    {
        if (sub_41808( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_46091( iParam0 )) < l_U171)
    {
        return 1;
    };;;
    if (sub_41808( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if (((iParam0->_fU96 != 14) AND (iParam0->_fU96 != 4)) || (iVar3 == 7))
    {
        if (sub_11576( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_11576( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_11576( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U170, l_U169 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U170, l_U169 );
        }
    }
    else if (sub_11576( iParam0, 64 ))
    {
        fVar4 = (sub_46091( iParam0 )) / 3.00000000;
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
    if (sub_46619( iParam0->_fU4 ))
    {
        uVar6 = {sub_46769( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_46091(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_41871( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_32070( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_46619(unknown uParam0)
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

void sub_46769(unknown uParam0, boolean bParam1)
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

int sub_47045(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_11576( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_38588( iParam0 );
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
                if ((((sub_12686( iParam0 + 0 )) == 1) AND (iVar4 == sub_3101())) || ((sub_12686( ref iVar4 )) == (sub_12686( iParam0 + 0 ))))
                {
                    sub_14079( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_47302(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_47340( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_35614( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_38588( iParam0 )) == iParam0->_fU4)
        {
            if (sub_41808( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_41808( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if (((NOT (IS_CHAR_INJURED( iVar3 ))) AND (iVar3 == iParam0->_fU8)) || (iVar3 == sub_3101()))
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
            if ((sub_12686( iParam0 + 0 )) == (sub_12686( ref iVar3 )))
            {
                return 0;
            }
        }
        if (((sub_41871( iParam0->_fU0, sub_3101(), 1 )) < 90.00000000) || ((IS_CAR_ON_SCREEN( iParam0->_fU4 )) || ((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CHAR_IN_CAR( sub_3101(), iParam0->_fU4 )))))
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
        sub_48024( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_41808( iParam0->_fU4 ))
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

void sub_47340(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_47370( ref uVar5, uParam2 );
}

int sub_47370(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_47395( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_47395( (uParam0^)[I], ref uVar5[1], uParam1 ))
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

int sub_47395(unknown uParam0, unknown uParam1, boolean bParam2)
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

int sub_48024(int iParam0)
{
    if (sub_48038( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_48038(unknown uParam0)
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
                if ((iVar3 != sub_48124()) AND ((iVar5 < 2) || (iVar4 < 1)))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar3 != sub_48124()) AND (iVar5 < 1))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_48124()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_48470(int iParam0)
{
    unknown uVar3;

    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (sub_11576( iParam0, 2 ))))
    {
        return 0;
    }
    uVar3 = sub_44386( sub_32070( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_48584(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (sub_11576( iParam0, 2 ))))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_32070( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_48705(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_46091( iParam0 );
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

int sub_49005(int iParam0)
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
    if ((sub_46091( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if (((sub_41871( iParam0->_fU0, sub_3101(), 1 )) > 90.00000000) AND ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_46091( iParam0 )) > 90.00000000)))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((VDIST( sub_32070( sub_3101(), 1 ), uVar4 )) < 30.00000000) || ((IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 )) || (CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 ))))
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

int sub_49361(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_38588( iParam0 )) != iParam0->_fU4)
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

int sub_49620(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_3101(), 45.00000000 ))) AND (iVar3 == 7))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_3101(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_3101() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_49777(int iParam0)
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
        if (sub_14175( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3101() ))) AND (NOT (IS_CHAR_IN_CAR( sub_3101(), iVar4 ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_47340( sub_3101(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_12686( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_3101(), ref uVar7 );
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
                return sub_38415( iParam0, 1, 0 );
            }
        }
    }
    if (((sub_46091( iParam0 )) < 30.00000000) AND (sub_11576( iParam0, 1 )))
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
    GET_CAR_CHAR_IS_USING( sub_3101(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_3101())
    {
        if ((IS_CHAR_ON_FOOT( sub_3101() )) AND (IS_CHAR_ON_FOOT( iParam0->_fU0 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_3101(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((((sub_41871( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8) || ((DOES_VEHICLE_EXIST( iVar4 )) || ((IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 )) || (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 ))))) AND (NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((iParam0->_fU4 == iVar4) || (sub_14199( iParam0->_fU8, iParam0->_fU4 )))
            {
                if ((sub_50463( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_47045( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_48470( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_51530( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_51941( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_48705( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_49620( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if (((sub_12686( iParam0 + 0 )) == 1) AND (sub_14199( sub_3101(), iParam0->_fU4 )))
            {
                if ((sub_47045( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_48470( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_51530( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_51941( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_48705( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_49620( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_52767( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_52916( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47302( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47045( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_48470( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_51941( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_50463( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_51530( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_48705( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_49620( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_52767( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47302( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_47045( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_50463( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48470( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48584( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_51530( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_51941( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48705( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_49620( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_12686( iParam0 + 0 )) == 1) AND ((iParam0->_fU8 != sub_3101()) AND (sub_47340( sub_3101(), iParam0->_fU0, 1 ))))
    {
        sub_14079( iParam0, sub_3101() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_38577( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47302( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47045( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_51941( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_50802( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_48705( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_48470( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_48584( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_51530( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )) || (NOT (sub_11576( iParam0, 1 ))))
        {
            if ((sub_38577( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47302( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_47045( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_51941( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_52767( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_50802( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48705( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_49620( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))) AND (sub_11576( iParam0, 1 )))
    {
        if ((sub_52767( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_50802( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_48705( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_38415( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_38577( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_52767( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_38577( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_47302( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_47045( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_50463( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_48470( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_51941( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_51530( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_50802( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_48705( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_49620( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_50463(int iParam0)
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
            iVar4 = sub_50592( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_46769( uVar3, 1 )};
    uVar8 = {sub_32070( iParam0->_fU0, 1 )};
    uVar11 = {sub_32070( sub_3101(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_46091( iParam0 )) > 30.00000000)
        {
            sub_48024( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_46091( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_50802( iParam0 );
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

int sub_50592(unknown uParam0)
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

int sub_50802(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_48038( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_47340( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_41871( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
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

int sub_51530(int iParam0)
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

    if (NOT (sub_11576( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_35514( iParam0->_fU4 );
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
    else if (((sub_41851( iParam0 )) > 30.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_13346( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_41808( uVar11 ))
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

int sub_51941(int iParam0)
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
                sub_14079( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_32070( sub_3101(), 1 )};
        uVar7 = {sub_32070( iParam0->_fU0, 1 )};
        uVar10 = {sub_46769( iParam0->_fU4, 1 )};
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
            else if (((sub_12686( ref iVar3 )) == (sub_12686( iParam0 + 0 ))) || (iVar3 == sub_3101()))
            {
                iVar14 = sub_50592( iParam0->_fU4 );
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
                if (sub_41808( iParam0->_fU4 ))
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

int sub_52767(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if (((sub_46091( iParam0 )) < 30.00000000) AND ((IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 )) || ((IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 )) || (IS_PED_IN_COMBAT( iParam0->_fU0 )))))
    {
        return 2;
    }
    return 0;
}

int sub_52916(int iParam0)
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
    else if ((sub_38588( iParam0 )) != iParam0->_fU4)
    {
        if (sub_41808( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_41808( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_41808( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) AND (CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_48024( iParam0 );
    iVar8 = 2;
    if (sub_11576( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_46091( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_3101() )) AND (iParam0->_fU8 == sub_3101()))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_5967(), ref uVar10 );
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
            uVar12 = {sub_32070( sub_3101(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_53434( iParam0, uVar12 );
            }
            else
            {
                return sub_38577( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar6 < 9.00000000) AND (fVar4 < 2.50000000))
        {
            return sub_38577( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_38577( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_3101())
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
                else if (sub_53846())
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
        else if (((sub_41851( iParam0 )) >= l_U121) AND ((sub_11576( iParam0, 4 )) || (sub_46619( iParam0->_fU4 ))))
        {
            bVar9 = sub_54116( iParam0, l_U121, l_U122, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_11576( iParam0, 128 ))
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
            if (sub_11576( iParam0, 128 ))
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
            return sub_38577( iParam0 );
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
            if (sub_11576( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_55560( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_53434(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_13870( iParam0, 64 );
    Result = sub_45994( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

boolean sub_53846()
{
    return (IS_CONTROL_PRESSED( 0, 45 )) || ((IS_CONTROL_PRESSED( 0, 44 )) || (IS_CONTROL_PRESSED( 0, 41 )));
}

int sub_54116(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
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
                    if (((VDIST2( uVar15, vVar6 )) > 9.00000000) AND (((VDIST( uVar15, sub_32070( sub_3101(), 1 ) )) > fParam2) AND (NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 )))))
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

int sub_55560(unknown uParam0, float fParam1, float fParam2)
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

void sub_56928(unknown uParam0)
{
    sub_14660( uParam0, 2 );
    return;
}

void sub_57013(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_11576( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_47340( sub_3101(), iParam0->_fU0, 1 )))
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
                if (NOT (IS_CHAR_IN_CAR( sub_3101(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_13870( iParam0, 256 );
        }
    }
    else if (sub_11576( iParam0, 256 ))
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
                sub_11563( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_58519(unknown uParam0)
{
    l_U151 = uParam0;
    return;
}

void sub_58560()
{
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3388 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3388, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3388, 71 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3389 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3388, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3389, 39 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3390 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3390, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3390, 69 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U3390, 0 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U3391 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U3391, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U3391, 79 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U3392 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U3393 );
    SET_GROUP_FORMATION( sub_48124(), 0 );
    SET_GROUP_FORMATION_SPACING( sub_48124(), 8.00000000 );
    return;
}

void sub_58804()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_58903(unknown uParam0)
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    if ((NOT IS_SCREEN_FADING_IN()) AND (NOT IS_SCREEN_FADED_IN()))
    {
        DO_SCREEN_FADE_IN( uParam0 );
        WAIT( 0 );
    }
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_59061()
{
    unknown[5] uVar2;
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
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;

    array(ref uVar2, 5);
    if (NOT l_U3635)
    {
        l_U3636 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U3636, "B3_ITS_WAR_DISTANT_GUNFIRE", 63505, 65194, 18 );
        l_U3635 = 1;
    }
    if (sub_32449())
    {
        l_U3516 = 1;
        l_U4094 = 1;
        if (NOT l_U4195)
        {
            l_U4195 = 1;
        }
        if (NOT l_U4191)
        {
            SWITCH_ROADS_BACK_TO_ORIGINAL( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
            l_U4191 = 1;
        }
        if (NOT l_U4192)
        {
            if (sub_59273( ref l_U384[0], 8.00000000, 3 ))
            {
                ;
            }
        }
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            ;
        }
        if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
        {
            sub_35105( ref l_U384[0], 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
            {
                if (LOCATE_CHAR_IN_CAR_3D( l_U384[0]._fU0, -1923.85100000, -321.08760000, 2.64090000, 50.00000000, 26.00000000, 3.00000000, 0 ))
                {
                    l_U384[0]._fU28 = sub_63947( ref l_U384[0], 15.00000000, 22.00000000, 1, 0 );
                }
                else
                {
                    l_U384[0]._fU28 = sub_63947( ref l_U384[0], 15.00000000, 28.00000000, 1, 0 );
                }
            }
            if (IS_CHAR_IN_CAR( sub_3101(), l_U3463 ))
            {
                sub_33680( ref l_U384[0] );
            }
            else
            {
                sub_3812();
            }
        }
        if (l_U2626[1]._fU68)
        {
            if (NOT (IS_CHAR_INJURED( l_U384[1]._fU0 )))
            {
                sub_35105( ref l_U384[1], 0 );
            }
        }
        if (l_U2626[14]._fU68)
        {
            if (NOT (IS_CHAR_INJURED( l_U384[14]._fU0 )))
            {
                sub_35105( ref l_U384[14], 0 );
            }
        }
        if (l_U2626[15]._fU68)
        {
            if (NOT (IS_CHAR_INJURED( l_U384[15]._fU0 )))
            {
                sub_35105( ref l_U384[15], 0 );
            }
        }
        if (l_U2626[16]._fU68)
        {
            if (NOT (IS_CHAR_INJURED( l_U384[16]._fU0 )))
            {
                sub_35105( ref l_U384[16], 0 );
            }
        }
        if ((l_U2626[16]._fU68) AND ((l_U2626[15]._fU68) AND ((l_U2626[14]._fU68) AND (l_U2626[1]._fU68))))
        {
            uVar2[0] = {l_U384[0]};
            uVar2[1] = {l_U384[1]};
            uVar2[2] = {l_U384[14]};
            uVar2[3] = {l_U384[15]};
            uVar2[4] = {l_U384[16]};
            sub_64751( ref uVar2 );
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), l_U372._fU0, l_U372._fU4, l_U372._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
    {
        g_U39149[1] = 1;
        SET_PED_IS_BLIND_RAGING( sub_3101(), 1 );
        STOP_SOUND( l_U3636 );
        sub_63653();
        l_U3635 = 0;
        l_U3514 = 1;
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if ((LOCATE_CAR_3D( l_U3463, l_U372._fU0, l_U372._fU4, l_U372._fU8, 120.00000000, 120.00000000, 120.00000000, 0 )) || (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
            {
                l_U3509 = 1;
                l_U3510 = 1;
                if (DOES_BLIP_EXIST( l_U3464 ))
                {
                    REMOVE_BLIP( l_U3464 );
                }
            }
            else if (NOT (LOCATE_CAR_3D( l_U3463, l_U372._fU0, l_U372._fU4, l_U372._fU8, 90.00000000, 90.00000000, 90.00000000, 0 )))
            {
                ;
            }
            l_U3510 = 0;
            l_U3509 = 0;;
        }
        if (DOES_BLIP_EXIST( l_U381 ))
        {
            REMOVE_BLIP( l_U381 );
        }
        if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
        {
            REMOVE_BLIP( l_U384[0]._fU100 );
        }
        GET_GAME_TIMER( ref l_U3890 );
        if (l_U3509)
        {
            if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U384[0]._fU0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 30.00000000, 30.00000000, 30.00000000, 0 ))
                    {
                        sub_32666( "E1B3_ARRV", ref l_U3395, 6, 1 );
                        l_U3821 = 1;
                        l_U3823 = 1;
                    }
                }
            }
        }
        l_U362 = 3;
    }
    else if (NOT (IS_CAR_DEAD( l_U3463 )))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U3464 )))
            {
                if (NOT l_U4189)
                {
                    PRINT_NOW( "B3_ONBK", 7500, 1 );
                    l_U4189 = 1;
                }
                REMOVE_BLIP( l_U384[0]._fU100 );
                ADD_BLIP_FOR_CAR( l_U3463, ref l_U3464 );
                CHANGE_BLIP_COLOUR( l_U3464, 3 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U3464 ))
        {
            REMOVE_BLIP( l_U3464 );
        }
        CLEAR_THIS_PRINT( "B3_ONBK" );
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U384[0]._fU100 )))
            {
                ADD_BLIP_FOR_CHAR( l_U384[0]._fU0, ref l_U384[0]._fU100 );
                CHANGE_BLIP_COLOUR( l_U384[0]._fU100, 3 );
            }
            else if (l_U4180)
            {
                if (NOT (sub_40108( l_U4183 )))
                {
                    if (NOT l_U4190)
                    {
                        PRINT_NOW( "B3_FBIL1", 7500, 1 );
                        l_U4190 = 1;
                    }
                    else if (NOT l_U4193)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U4194)
                            {
                                GET_GAME_TIMER( ref l_U4196 );
                                l_U4194 = 1;
                            }
                            else if (sub_34978( l_U4196, 1000 ))
                            {
                                g_U15728[12] = 1;
                                PRINT_HELP( "B3_HSTA" );
                                l_U4193 = 1;
                            }
                        }
                    }
                    else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B3_HSTA" )))
                    {
                        ;
                    }
                    else if (IS_BUTTON_JUST_PRESSED( 0, 9 ))
                    {
                        CLEAR_HELP();
                    };;;;
                }
            }
        }
        sub_67911();;
    }
    if ((NOT (sub_68261( ref l_U384[0] ))) AND (sub_68169( ref l_U384[0], 1082130432 )))
    {
        sub_68312( ref l_U384[0], 0 );
        l_U3511 = 1;
    }
    if (NOT l_U3872)
    {
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            if (LOCATE_CHAR_IN_CAR_3D( l_U384[0]._fU0, -1970.71200000, -325.37520000, 1.96000000, l_U171, l_U171, l_U171, 0 ))
            {
                sub_35072( ref l_U384[0], 12.00000000 );
                SET_DRIVE_TASK_CRUISE_SPEED( l_U384[0]._fU0, 12.00000000 );
                l_U3872 = 1;
            }
        }
    }
    return;
}

int sub_59273(int iParam0, unknown uParam1, unknown uParam2)
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

    if ((NOT l_U126) AND (l_U125))
    {
        if ((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
        {
            switch (uParam2)
            {
                case 0:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, -2.50000000, -uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U194 );
                break;
                case 1:
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iParam0->_fU0, 2.50000000, -uParam1, 0.00000000, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U194 );
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
                GET_CHAR_HEADING( iParam0->_fU0, ref l_U194 );
                break;
            }
            fVar7 = 0.00000000;
            fVar7 += 1.00000000 * TIMESTEP();
            fVar7 *= 1000.00000000;
            l_U128 += fVar7;
            l_U195 += fVar7;
            l_U196 += fVar7;
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar42 );
            if (NOT (DOES_OBJECT_EXIST( l_U208 )))
            {
                if ((NOT (HAS_MODEL_LOADED( l_U200 ))) || (NOT (HAS_MODEL_LOADED( l_U199 ))))
                {
                    REQUEST_MODEL( l_U199 );
                    REQUEST_MODEL( l_U200 );
                    return 0;
                }
                l_U172[0] = {uVar43};
                l_U188[0] = l_U194;
                if (DOES_VEHICLE_EXIST( uVar42 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar42, 0.00000000, -uParam1, 0.00000000, ref l_U172[0]._fU0, ref l_U172[0]._fU4, ref l_U172[0]._fU8 );
                    CREATE_OBJECT( l_U199, l_U172[0]._fU0, l_U172[0]._fU4, l_U172[0]._fU8, ref l_U208, 1 );
                    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U208, 1 );
                    SET_OBJECT_COLLISION( l_U208, 0 );
                    SET_OBJECT_HEADING( l_U208, fVar7 );
                    SET_OBJECT_ALPHA( l_U208, 0 );
                    CREATE_OBJECT( l_U200, l_U172[0]._fU0, l_U172[0]._fU4, l_U172[0]._fU8, ref l_U209, 1 );
                    FREEZE_OBJECT_POSITION_AND_DONT_LOAD_COLLISION( l_U209, 1 );
                    SET_OBJECT_COLLISION( l_U209, 0 );
                    SET_OBJECT_HEADING( l_U209, fVar7 );
                    SET_OBJECT_VISIBLE( l_U209, 0 );
                }
                if (g_U1)
                {
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U199 );
                }
                for ( I = 1; I <= (l_U172 - 1); I++ )
                {
                    l_U172[I] = {l_U172[0]};
                    l_U188[I] = l_U188[0];
                }
                l_U201 = {l_U172[l_U172 - 1]};
                l_U204 = l_U188[l_U172 - 1];
                GET_GROUND_Z_FOR_3D_COORD( l_U201._fU0, l_U201._fU4, l_U201._fU8 + 1.50000000, ref fVar8 );
                fVar7 = l_U201._fU8 - fVar8;
                if ((fVar7 > -1.50000000) || (fVar7 < 1.50000000))
                {
                    l_U201._fU8 -= 1.00000000 - l_U205;
                }
                l_U201._fU8 += l_U205;
                l_U128 = 0.00000000;
                l_U197 = 0.00000000;
                l_U195 = 0.00000000;
                l_U196 = 99999.90000000;
                l_U132 = 0;
            }
            else if (NOT (IS_CAR_DEAD( uVar42 )))
            {
                fVar7 = 1.00000000;
                fVar7 *= 1000.00000000;
                fVar41 = fVar7 / (TO_FLOAT( l_U172 ));
                fVar40 = l_U195 / fVar41;
                if (fVar40 > 1.00000000)
                {
                    for ( I = 0; I < l_U172; I++ )
                    {
                        iVar6 = l_U172 - (I + 1);
                        if (iVar6 > 0)
                        {
                            l_U172[iVar6] = {l_U172[iVar6 - 1]};
                            l_U188[iVar6] = l_U188[iVar6 - 1];
                        }
                        else
                        {
                            l_U172[iVar6] = {uVar43};
                            l_U188[iVar6] = l_U194;
                        }
                    }
                    l_U195 -= fVar41;
                    fVar40 += -1.00000000;
                }
                vVar20 = {(l_U172[l_U172 - 2]) - (l_U172[l_U172 - 1])};
                vVar35 = {(l_U172[l_U172 - 1]) + (vVar20 * fVar40)};
                if (NOT (IS_CHAR_INJURED( sub_3101() )))
                {
                    if (IS_CHAR_ON_ANY_BIKE( sub_3101() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar46 );
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
                vVar20 = {vVar35 - l_U201};
                vVar20 = {vVar20 * 0.50000000};
                l_U201 = {l_U201 + vVar20};
                GET_GROUND_Z_FOR_3D_COORD( l_U201._fU0, l_U201._fU4, l_U201._fU8 + 1.50000000, ref fVar8 );
                l_U207 += 150.00000000 * TIMESTEP();
                fVar8 += 0.03000000 * (SIN( l_U207 ));
                fVar7 = fVar8 - l_U201._fU8;
                if ((fVar7 < -0.50000000) || (fVar7 > 0.50000000))
                {
                    fVar8 = l_U201._fU8 - (1.00000000 - l_U205);
                }
                l_U201._fU8 = fVar8 + l_U205;
                fVar7 = (l_U188[l_U188 - 2]) - (l_U188[l_U188 - 1]);
                if (fVar7 > 180.00000000)
                {
                    fVar7 += -360.00000000;
                }
                if (fVar7 < -180.00000000)
                {
                    fVar7 += 360.00000000;
                }
                uVar23._fU8 = (l_U188[l_U172 - 1]) + (fVar7 * fVar40);
                SET_OBJECT_COORDINATES( l_U208, l_U201._fU0, l_U201._fU4, l_U201._fU8 );
                SET_OBJECT_HEADING( l_U208, uVar23._fU8 );
                SET_OBJECT_COORDINATES( l_U209, l_U201._fU0, l_U201._fU4, l_U201._fU8 + 0.01000000 );
                SET_OBJECT_HEADING( l_U209, uVar23._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, -1.70000000, 1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar13 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, 1.70000000, 1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar14 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, -1.70000000, -1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
                GET_GROUND_Z_FOR_3D_COORD( vVar17.x, vVar17.y, vVar17.z, ref uVar15 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U208, -1.70000000, -1.70000000, 1.50000000, ref vVar17.x, ref vVar17.y, ref vVar17.z );
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
                SET_OBJECT_ROTATION( l_U208, uVar23._fU0, uVar23._fU4, uVar23._fU8 );
                SET_OBJECT_ROTATION( l_U209, uVar23._fU0, uVar23._fU4, uVar23._fU8 );
                if (l_U124 == 0)
                {
                    if (sub_61836())
                    {
                        l_U128 = 0.00000000;
                    }
                    bVar39 = false;
                    if (NOT l_U131)
                    {
                        if (l_U128 > l_U129)
                        {
                            l_U131 = 1;
                            bVar39 = true;
                        }
                    }
                    else if (l_U128 > l_U130)
                    {
                        bVar39 = true;
                    }
                    if (IS_MESSAGE_BEING_DISPLAYED())
                    {
                        bVar39 = false;
                    }
                    if (sub_61969())
                    {
                        bVar39 = false;
                    }
                    SET_OBJECT_VISIBLE( l_U208, 0 );
                    SET_OBJECT_VISIBLE( l_U209, 0 );
                    if (bVar39)
                    {
                        l_U197 = 0.00000000;
                        l_U128 = 0.00000000;
                        l_U124 = 1;
                        if (l_U196 > 2000.00000000)
                        {
                            l_U132 = 1;
                            l_U196 = 0.00000000;
                        }
                    }
                }
                if (l_U124 == 1)
                {
                    if (sub_61969())
                    {
                        PRINTSTRING( "Marker told to fade out 1 \n" );
                        sub_40339();
                        l_U124 = 3;
                    }
                    else if (l_U128 > 400.00000000)
                    {
                        SET_OBJECT_VISIBLE( l_U208, 1 );
                        SET_OBJECT_ALPHA( l_U208, 255 );
                    }
                    fVar7 = 0.00000000;
                    fVar7 += 1.00000000 * TIMESTEP();
                    fVar7 *= 1000.00000000;
                    if (bVar38)
                    {
                        if (DOES_OBJECT_EXIST( l_U209 ))
                        {
                            SET_OBJECT_VISIBLE( l_U209, 1 );
                        }
                        l_U197 += fVar7;
                    }
                    else if (DOES_OBJECT_EXIST( l_U209 ))
                    {
                        SET_OBJECT_VISIBLE( l_U209, 0 );
                    }
                    l_U197 = 0.00000000;;
                    if (l_U197 > 1000.00000000)
                    {
                        l_U128 = 99999.00000000;
                        l_U132 = 2;
                        if (IS_PLAYER_PLAYING( sub_5967() ))
                        {
                            GET_PLAYER_MAX_HEALTH( sub_5967(), ref iVar47 );
                            GET_CHAR_HEALTH( sub_3101(), ref I );
                            if (I < iVar47)
                            {
                                fVar7 = TO_FLOAT( I );
                                fVar7 += 15.00000000;
                                I = ROUND( fVar7 );
                                if (I > iVar47)
                                {
                                    I = iVar47;
                                }
                                SET_CHAR_HEALTH( sub_3101(), I );
                            }
                            else
                            {
                                GET_PLAYER_MAX_ARMOUR( sub_5967(), ref iVar47 );
                                GET_CHAR_ARMOUR( sub_3101(), ref I );
                                I = iVar47 - I;
                                if (I > 15)
                                {
                                    I = 15;
                                }
                                ADD_ARMOUR_TO_CHAR( sub_3101(), I );
                            }
                            l_U128 = 0.00000000;
                            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3101() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar42 );
                                GET_CAR_HEALTH( uVar42, ref I );
                                I += 150;
                                SET_CAR_HEALTH( uVar42, I );
                            }
                        }
                        l_U206 = 255;
                        l_U128 = 0.00000000;
                        PRINTSTRING( "Marker told to fade out 2 \n" );
                        l_U124 = 3;
                    }
                }
                if (l_U124 == 3)
                {
                    if (l_U128 > 400.00000000)
                    {
                        l_U206 = 0;
                        if (NOT l_U127)
                        {
                            l_U126 = 1;
                            l_U128 = 0.00000000;
                        }
                        else
                        {
                            l_U128 = 999999.80000000;
                        }
                        l_U124 = 0;
                    }
                }
                sub_63112();
                return ((VDIST( l_U201, sub_32070( sub_3101(), 1 ) )) < 5.00000000) AND (IS_CHAR_IN_ANY_CAR( sub_3101() ));
            }
            else
            {
                sub_63653();
            }
        }
        else
        {
            sub_63653();
        }
    }
    else
    {
        sub_63653();
    }
    sub_63112();
    return 0;
}

void sub_61836()
{
    return sub_40108( l_U143 );
}

int sub_61969()
{
    if (l_U127)
    {
        PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 1 \n" );
        return 1;
    }
    if (IS_PLAYER_PLAYING( sub_5967() ))
    {
        if (NOT (IS_CHAR_ON_ANY_BIKE( sub_3101() )))
        {
            PRINTSTRING( "SHOULD_CONVERSATION_MARKER_BE_HIDDEN = TRUE - 2 \n" );
            return 1;
        }
        if (IS_WANTED_LEVEL_GREATER( sub_5967(), 0 ))
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

void sub_63112()
{
    switch (l_U132)
    {
        case 0: break;
        case 1:
        if (NOT (sub_40108( l_U133 )))
        {
            sub_4754( 8, 0, "LAZLOW", 0 );
            if (sub_63236( "E1MF3_BLIPB", "E1MF3AU", 0, 1, ref l_U133, 2, 1 ))
            {
                l_U132 = 3;
            }
            else
            {
                PRINTSTRING( "Biker Marker - trying to play EM1F3_BLIPB - line 0 \n" );
            }
        }
        else
        {
            l_U132 = 0;
        }
        break;
        case 2:
        if (NOT (sub_40108( l_U133 )))
        {
            sub_4754( 8, 0, "LAZLOW", 0 );
            if (sub_63236( "E1MF3_BLIPB", "E1MF3AU", 1, 1, ref l_U133, 2, 1 ))
            {
                l_U132 = 3;
            }
            else
            {
                PRINTSTRING( "Biker Marker - trying to play E1MF3_BLIPB - line 1 \n" );
            }
        }
        else
        {
            l_U132 = 0;
        }
        break;
        case 3:
        if (NOT (sub_40108( l_U133 )))
        {
            l_U132 = 0;
        }
        break;
    }
    return;
}

void sub_63236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_32741( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_63653()
{
    REMOVE_BLIP( l_U210 );
    if (DOES_OBJECT_EXIST( l_U208 ))
    {
        DELETE_OBJECT( ref l_U208 );
    }
    if (DOES_OBJECT_EXIST( l_U209 ))
    {
        DELETE_OBJECT( ref l_U209 );
    }
    l_U125 = 0;
    return;
}

void sub_63947(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3, boolean bParam4)
{
    float fVar7;
    float fVar8;
    float Result;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_VEH_DRIVEABLE( sub_38588( iParam0 ) ))
        {
            fVar7 = sub_41871( iParam0->_fU0, sub_3101(), 1 );
            if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
            {
                if (fVar7 > 200.00000000)
                {
                    if (bParam3)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                    }
                    l_U0 = 1;
                }
                else if (fVar7 < 6.00000000)
                {
                    l_U0 = 0;
                }
                if (fVar7 > 75.00000000)
                {
                    fVar7 = 75.00000000;
                    l_U0 = 1;
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
                    l_U0 = 1;
                }
            }
            else
            {
                SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, 0 );
                l_U0 = 1;
                return 0.00000000;
            }
        }
    }
    return iParam0->_fU28;
}

void sub_64751(unknown uParam0)
{
    int I;
    int iVar4;
    int J;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[10] uVar10;
    unknown uVar21;
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    int[10] iVar41;
    int iVar52;
    unknown uVar53;
    unknown uVar54;
    int iVar55;
    float fVar56;
    float fVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;

    if (l_U123 >= 1.20000000)
    {
        array(ref uVar10, 10);
        array(ref iVar41, 10);
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (((uParam0^)[I]._fU36 == 1) AND (NOT ((uParam0^)[I]._fU8 == nil)))
            {
                if ((NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))) AND (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU8 ))))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU8 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU8, ref uVar6 );
                    }
                    else
                    {
                        uVar6 = nil;
                    }
                    if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( (uParam0^)[I]._fU8, (uParam0^)[I]._fU0, 30, 30, 30, 0 )) AND ((IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 )) AND (IS_VEH_DRIVEABLE( uVar6 ))))
                    {
                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                        GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar6, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref uVar10[I]._fU0, ref uVar10[I]._fU4, ref uVar10[I]._fU8 );
                        if (uVar10[I]._fU4 < 0)
                        {
                            iVar41[I] = 1;
                        }
                    }
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if (iVar41[I])
            {
                if (((uVar10[I]._fU0 < 0) AND ((uParam0^)[I]._fU40 == 1)) || ((uVar10[I]._fU0 > 0) AND ((uParam0^)[I]._fU40 == 0)))
                {
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if (((((uParam0^)[iVar4]._fU40 == 0) AND ((uParam0^)[I]._fU40 == 1)) || (((uParam0^)[iVar4]._fU40 == 1) AND ((uParam0^)[I]._fU40 == 0))) AND ((iVar41[iVar4]) AND (((uParam0^)[I]._fU8 == (uParam0^)[iVar4]._fU8) AND (NOT (I == iVar4)))))
                        {
                            if (((uVar10[I]._fU0 < uVar10[iVar4]._fU0) AND ((uParam0^)[I]._fU40 == 1)) || ((uVar10[I]._fU0 > uVar10[iVar4]._fU0) AND ((uParam0^)[I]._fU40 == 0)))
                            {
                                uVar53 = (uParam0^)[I]._fU40;
                                (uParam0^)[I]._fU40 = (uParam0^)[iVar4]._fU40;
                                (uParam0^)[iVar4]._fU40 = uVar53;
                                for ( J = 0; J < (uParam0^); J++ )
                                {
                                    if ((NOT (J == iVar4)) AND (NOT (J == I)))
                                    {
                                        if ((uParam0^)[J]._fU8 == (uParam0^)[I]._fU0)
                                        {
                                            sub_14079( ref (uParam0^)[J], (uParam0^)[iVar4]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                        else if ((uParam0^)[J]._fU8 == (uParam0^)[iVar4]._fU0)
                                        {
                                            sub_14079( ref (uParam0^)[J], (uParam0^)[I]._fU0 );
                                            iVar41[J] = 0;
                                        }
                                    }
                                }
                                iVar41[I] = 0;
                                iVar41[iVar4] = 0;
                            }
                        }
                    }
                }
            }
        }
        for ( I = 0; I < iVar41; I++ )
        {
            iVar41[I] = 1;
            if (I < (uParam0^))
            {
                if ((uParam0^)[I]._fU36 != 1)
                {
                    iVar41[I] = 0;
                }
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar41[I] = 0;
                }
                else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 )))
                {
                    iVar41[I] = 0;
                }
            }
        }
        for ( I = 0; I < (uParam0^); I++ )
        {
            if ((uParam0^)[I]._fU8 == nil)
            {
                if (NOT ((uParam0^)[I]._fU12 == nil))
                {
                    (uParam0^)[I]._fU8 = (uParam0^)[I]._fU12;
                }
            }
            if ((NOT ((uParam0^)[I]._fU8 == sub_3101())) AND ((NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))) AND ((iVar41[I]) AND (NOT ((uParam0^)[I]._fU8 == nil)))))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[I]._fU0 ))
                {
                    iVar55 = -1;
                    for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                    {
                        if ((iVar41[iVar4]) AND ((uParam0^)[iVar4]._fU0 == (uParam0^)[I]._fU8))
                        {
                            iVar55 = iVar4;
                        }
                    }
                    if (NOT (iVar55 == -1))
                    {
                        if (NOT ((uParam0^)[iVar55]._fU0 == nil))
                        {
                            if (NOT ((uParam0^)[iVar55]._fU8 == nil))
                            {
                                if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU8 )))
                                {
                                    if (NOT (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        GET_CHAR_COORDINATES( (uParam0^)[I]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU0, ref uVar58._fU0, ref uVar58._fU4, ref uVar58._fU8 );
                                        GET_CHAR_COORDINATES( (uParam0^)[iVar55]._fU8, ref uVar61._fU0, ref uVar61._fU4, ref uVar61._fU8 );
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar7._fU0, uVar7._fU4, uVar7._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar56 );
                                    if (fVar56 < 0)
                                    {
                                        fVar56 *= -1;
                                    }
                                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar58._fU0, uVar58._fU4, uVar58._fU8, uVar61._fU0, uVar61._fU4, uVar61._fU8, ref fVar57 );
                                    if (fVar57 < 0)
                                    {
                                        fVar57 *= -1;
                                    }
                                    iVar52 = 0;
                                    if (IS_CHAR_INJURED( (uParam0^)[iVar55]._fU0 ))
                                    {
                                        iVar52 = 1;
                                    }
                                    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( (uParam0^)[iVar55]._fU0 )))
                                    {
                                        iVar52 = 1;
                                    }
                                    if ((fVar56 < fVar57) || (iVar52))
                                    {
                                        iVar41[I] = 0;
                                        iVar41[iVar55] = 0;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if ((iVar41[iVar4]) AND (((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU8) AND ((NOT (iVar4 == iVar55)) AND ((NOT (I == iVar4)) AND (NOT ((uParam0^)[iVar4]._fU8 == nil))))))
                                            {
                                                sub_14079( ref (uParam0^)[iVar4], (uParam0^)[I]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                        uVar53 = (uParam0^)[I]._fU40;
                                        uVar54 = (uParam0^)[iVar55]._fU40;
                                        sub_14079( ref (uParam0^)[I], (uParam0^)[iVar55]._fU8 );
                                        sub_14079( ref (uParam0^)[iVar55], (uParam0^)[I]._fU0 );
                                        (uParam0^)[I]._fU40 = uVar54;
                                        (uParam0^)[iVar55]._fU40 = uVar53;
                                        for ( iVar4 = 0; iVar4 < (uParam0^); iVar4++ )
                                        {
                                            if ((iVar41[iVar4]) AND ((NOT (iVar4 == iVar55)) AND ((uParam0^)[iVar4]._fU8 == (uParam0^)[I]._fU0)))
                                            {
                                                sub_14079( ref (uParam0^)[iVar4], (uParam0^)[iVar55]._fU0 );
                                                iVar41[iVar4] = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        l_U123 = 0;
    }
    else
    {
        l_U123 += 1.00000000 * TIMESTEP();
    }
    return;
}

void sub_67911()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        if (NOT (sub_40108( l_U3876 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
            {
                if (NOT (IS_CAR_DEAD( l_U384[0]._fU4 )))
                {
                    if (IS_CHAR_IN_CAR( l_U384[0]._fU0, l_U384[0]._fU4 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U384[0]._fU4, 0, 11, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (LOCATE_CHAR_IN_CAR_3D( sub_3101(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 10, 10, 10, 0 ))
                        {
                            if (l_U4094)
                            {
                                sub_32666( "E1B3_JFRONT", ref l_U3876, 7, 1 );
                                l_U4094 = 0;
                            }
                        }
                        else
                        {
                            l_U4094 = 1;
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_68169(int iParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, uParam1, uParam1, uParam1, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

boolean sub_68261(int iParam0)
{
    return (5 == iParam0->_fU36) || (4 == iParam0->_fU36);
}

void sub_68312(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        sub_14660( uParam0, 5 );
    }
    else
    {
        sub_14660( uParam0, 4 );
    }
    return;
}

void sub_68510()
{
    unknown[15] uVar2;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;
    unknown uVar396;
    unknown uVar397;
    unknown uVar398;
    unknown uVar399;
    unknown uVar400;
    unknown uVar401;
    unknown uVar402;
    unknown uVar403;
    unknown uVar404;
    unknown uVar405;
    unknown uVar406;
    unknown uVar407;
    unknown uVar408;
    unknown uVar409;
    unknown uVar410;
    unknown uVar411;
    unknown uVar412;
    unknown uVar413;
    unknown uVar414;
    unknown uVar415;
    unknown uVar416;
    unknown uVar417;
    unknown uVar418;
    unknown uVar419;
    unknown uVar420;
    unknown uVar421;
    unknown uVar422;
    unknown uVar423;
    unknown uVar424;
    unknown uVar425;
    unknown uVar426;
    unknown uVar427;
    unknown uVar428;
    unknown uVar429;
    unknown uVar430;
    unknown uVar431;
    unknown uVar432;
    unknown uVar433;
    unknown uVar434;
    unknown uVar435;
    unknown uVar436;
    unknown uVar437;
    unknown uVar438;
    unknown uVar439;
    unknown uVar440;
    unknown uVar441;
    unknown uVar442;
    unknown uVar443;
    unknown uVar444;
    unknown uVar445;
    unknown uVar446;
    unknown uVar447;
    unknown uVar448;
    unknown uVar449;
    unknown uVar450;
    unknown uVar451;
    unknown uVar452;
    unknown uVar453;
    unknown uVar454;
    unknown uVar455;
    unknown uVar456;
    unknown uVar457;
    unknown uVar458;
    unknown uVar459;
    unknown uVar460;
    unknown uVar461;
    unknown uVar462;
    unknown uVar463;
    unknown uVar464;
    unknown uVar465;
    unknown uVar466;
    unknown uVar467;
    unknown uVar468;
    unknown uVar469;
    unknown uVar470;
    unknown uVar471;
    unknown uVar472;
    unknown uVar473;
    unknown uVar474;
    unknown uVar475;
    unknown uVar476;
    unknown uVar477;
    unknown uVar478;
    unknown uVar479;
    unknown uVar480;
    unknown uVar481;
    unknown uVar482;
    unknown uVar483;
    unknown uVar484;
    unknown uVar485;
    unknown uVar486;
    unknown uVar487;
    unknown uVar488;
    unknown uVar489;
    unknown uVar490;
    unknown uVar491;
    unknown uVar492;
    unknown uVar493;
    unknown uVar494;
    unknown uVar495;
    unknown uVar496;
    unknown uVar497;
    int I;
    float fVar499;
    unknown uVar500;

    PRINTSTRING( "\n [rw][script] MANAGE_FIRST_FIGHT \n" );
    array(ref uVar2, 15);
    if (NOT l_U3509)
    {
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (IS_CHAR_IN_CAR( sub_3101(), l_U3463 ))
            {
                if (DOES_BLIP_EXIST( l_U3464 ))
                {
                    REMOVE_BLIP( l_U3464 );
                    if (NOT (DOES_BLIP_EXIST( l_U384[0]._fU100 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U384[0]._fU0, ref l_U384[0]._fU100 );
                            CHANGE_BLIP_COLOUR( l_U384[0]._fU100, 3 );
                        }
                    }
                }
                if (LOCATE_CHAR_IN_CAR_3D( sub_3101(), l_U372._fU0, l_U372._fU4, l_U372._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
                {
                    l_U3509 = 1;
                    l_U3510 = 1;
                    l_U3823 = 1;
                    if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
                    {
                        REMOVE_BLIP( l_U384[0]._fU100 );
                    }
                    sub_68859();
                    if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 100.00000000, 100.00000000, 100.00000000, 0 ))
                        {
                            l_U3821 = 1;
                        }
                    }
                }
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
    {
        if (NOT l_U3896)
        {
            if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 50.00000000, 50.00000000, 50.00000000, 0 ))) || (l_U3821))
            {
                if (NOT (sub_40108( l_U3395 )))
                {
                    GET_GAME_TIMER( ref l_U3891 );
                    if ((l_U3891 - l_U3890) > 1500)
                    {
                        PRINT_NOW( "B3_KANGELS", 7500, 1 );
                        l_U3896 = 1;
                    }
                }
            }
        }
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3101() )))
    {
        l_U3685 = 0;
    }
    if ((IS_EPISODIC_DISC_BUILD()) AND (l_U3896))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
        {
            SETTIMERC( 0 );
        }
        if (TIMERC() > 12000)
        {
            CLEAR_HELP();
        }
        else if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B3_DUCK" ))) AND ((TIMERC() < 12000) AND (TIMERC() > 8000)))
        {
            CLEAR_HELP();
            PRINT_HELP( "B3_DUCK" );
        }
        else if ((TIMERC() < 8000) AND (TIMERC() > 4000))
        {
            if (IS_USING_CONTROLLER())
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B3_SPRINT" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP( "B3_SPRINT" );
                }
            }
            else if (NOT IS_USING_CONTROLLER())
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B3_SPRINT_PC" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP( "B3_SPRINT_PC" );
                }
            }
        }
        else if ((TIMERC() < 4000) AND (TIMERC() > 0))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "B3_COVER" )))
            {
                CLEAR_HELP();
                PRINT_HELP( "B3_COVER" );
            }
        };;;;
    }
    if (sub_69645())
    {
        l_U3524[1]._fU36 = 1;
    }
    switch (l_U363)
    {
        case 0:
        ADD_COVER_POINT( -2009.80300000, -329.55400000, 3.36560000, 1, 85.44870000, 0, 0, ref l_U3465[0] );
        ADD_COVER_POINT( -2018.12700000, -327.64940000, 3.36560000, 1, 172.36980000, 3, 0, ref l_U3465[1] );
        ADD_COVER_POINT( -2017.47700000, -330.00020000, 3.36560000, 1, 92.77260000, 0, 0, ref l_U3465[2] );
        ADD_COVER_POINT( -2011.69300000, -345.29540000, 3.37960000, 1, 168.73090000, 0, 0, ref l_U3465[3] );
        ADD_COVER_POINT( -2013.61900000, -344.67600000, 3.39180000, 2, 171.40030000, 0, 0, ref l_U3465[4] );
        ADD_COVER_POINT( -2020.34400000, -342.60700000, 3.38270000, 2, 166.89730000, 0, 0, ref l_U3465[5] );
        ADD_COVER_POINT( -2025.47400000, -341.50230000, 3.44320000, 1, 178.23480000, 0, 0, ref l_U3465[6] );
        ADD_COVER_POINT( -2024.47800000, -345.02240000, 3.59620000, 2, 348.45030000, 0, 0, ref l_U3465[7] );
        ADD_COVER_POINT( -2029.40900000, -355.35330000, 3.36570000, 0, 181.88100000, 0, 0, ref l_U3465[8] );
        ADD_COVER_POINT( -2015.16400000, -355.46500000, 3.36570000, 1, 180.58740000, 0, 0, ref l_U3465[9] );
        ADD_COVER_POINT( -2012.24300000, -366.98610000, 3.34000000, 0, 105.53200000, 0, 0, ref l_U3465[10] );
        ADD_COVER_POINT( -2011.79800000, -368.64570000, 3.33760000, 1, 105.53200000, 0, 0, ref l_U3465[11] );
        ADD_COVER_POINT( -2026.36000000, -373.12710000, 3.36570000, 1, 22.82490000, 0, 0, ref l_U3465[12] );
        ADD_COVER_POINT( -2027.10600000, -372.48150000, 3.36570000, 0, 288.90830000, 0, 0, ref l_U3465[13] );
        ADD_COVER_POINT( -2010.07600000, -326.71300000, 3.36560000, 2, 176.57130000, 2, 0, ref l_U3465[14] );
        ADD_COVER_POINT( -2015.35400000, -358.68600000, 3.35580000, 0, 1.87810000, 3, 0, ref l_U3465[15] );
        ADD_COVER_POINT( -2011.43100000, -350.19770000, 3.44530000, 0, 355.60240000, 0, 1, ref l_U3465[16] );
        ADD_COVER_POINT( -2049.81800000, -393.16300000, 3.30120000, 3, 178.97420000, 3, 0, ref l_U3465[17] );
        ADD_COVER_POINT( -2030.29600000, -357.82320000, 3.36570000, 0, 282.49850000, 3, 0, ref l_U3465[21] );
        ADD_COVER_POINT( -2027.01000000, -369.93940000, 3.36570000, 0, 192.51340000, 3, 0, ref l_U3465[22] );
        CREATE_OBJECT_NO_OFFSET( -109692574, -2029.75800000, -337.26280000, 3.36560000, ref l_U3291[0], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -2022.65500000, -390.99770000, 3.36570000, ref l_U3291[3], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -2059.23200000, -417.43220000, 3.36760000, ref l_U3291[4], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -2057.96800000, -417.21500000, 3.43690000, ref l_U3291[5], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -2048.54900000, -387.79120000, 3.36530000, ref l_U3291[6], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -2040.24200000, -369.63190000, 3.30120000, ref l_U3291[7], 1 );
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -2023.35300000, -379.31730000, 3.46579000, 90.00000000, 0.00000000, 0.00000000, ref l_U3498[0] );
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -2049.91300000, -407.46050000, 3.46579000, 90.00000000, 0.00000000, 0.00000000, ref l_U3498[1] );
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1265.22800000, -574.58830000, 1.93800000, 90.00000000, 0.00000000, 0.00000000, ref l_U3498[2] );
        CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -1207.06900000, -583.78010000, 1.93800000, 90.00000000, 0.00000000, 0.00000000, ref l_U3498[3] );
        CREATE_OBJECT_NO_OFFSET( -480360297, -2004.49400000, -332.46110000, 3.58000000, ref l_U3323, 1 );
        SET_OBJECT_ROTATION( l_U3323, 0.00000000, 3.50000000, 66.50000000 );
        CREATE_OBJECT_NO_OFFSET( 2142893183, -2030.05000000, -364.78080000, 4.16600000, ref l_U3307[0], 1 );
        SET_OBJECT_HEADING( l_U3307[0], 31.30000000 );
        CREATE_OBJECT_NO_OFFSET( 2142893183, -2035.91700000, -380.98720000, 4.16600000, ref l_U3307[1], 1 );
        SET_OBJECT_HEADING( l_U3307[1], 256.90000000 );
        sub_9225( 6 );
        sub_9225( 7 );
        sub_9225( 8 );
        sub_9225( 9 );
        sub_68859();
        l_U3524[0]._fU0 = 1;
        l_U3524[1]._fU0 = 1;
        l_U3524[2]._fU0 = 1;
        l_U3524[3]._fU0 = 1;
        l_U3524[6]._fU0 = 1;
        l_U363 = 1;
        l_U3882 = 1;
        l_U3899 = 1;
        break;
        case 1:
        l_U2626[2]._fU4 = 1;
        l_U2626[3]._fU4 = 1;
        l_U2626[4]._fU4 = 1;
        l_U2626[5]._fU4 = 1;
        l_U975[0]._fU4 = 1;
        l_U975[1]._fU4 = 1;
        l_U975[2]._fU4 = 1;
        l_U975[3]._fU4 = 1;
        l_U975[4]._fU4 = 1;
        l_U975[5]._fU4 = 1;
        l_U975[6]._fU4 = 1;
        l_U975[8]._fU4 = 1;
        l_U975[25]._fU4 = 1;
        l_U975[36]._fU4 = 1;
        sub_71823( ref l_U975[2], ref l_U975[1], 1 );
        sub_71823( ref l_U975[0], ref l_U975[25], 1 );
        if (NOT l_U975[5]._fU96)
        {
            if (l_U975[4]._fU96)
            {
                sub_71906( ref l_U975[5] );
                l_U975[5]._fU84 = 10;
                l_U975[5]._fU72 = {-2021.57200000, -390.21090000, 3.36570000};
                l_U975[5]._fU24 = 1;
                l_U975[5]._fU96 = 1;
                l_U975[5]._fU4 = 1;
            }
        }
        if (NOT l_U2626[2]._fU104)
        {
            uVar2[0] = {l_U975[0]};
            uVar2[1] = {l_U975[2]};
            uVar2[2] = {l_U975[3]};
            uVar2[3] = {l_U975[1]};
            if (sub_69788( ref uVar2, 4, 4, 0, 1 ))
            {
                sub_71906( ref l_U2626[2] );
                l_U2626[2]._fU72 = {-2024.26700000, -264.24170000, 2.14930000};
                l_U2626[2]._fU104 = 1;
                l_U2626[2]._fU4 = 1;
                sub_71906( ref l_U2626[3] );
                l_U2626[3]._fU72 = {-2028.43900000, -258.55910000, 2.05450000};
                l_U2626[3]._fU104 = 1;
                l_U2626[3]._fU4 = 1;
                l_U3884 = 1;
            }
        }
        if (NOT l_U2626[4]._fU104)
        {
            uVar2[0] = {l_U975[4]};
            uVar2[1] = {l_U975[5]};
            uVar2[2] = {l_U975[6]};
            uVar2[3] = {l_U975[7]};
            uVar2[4] = {l_U975[8]};
            if (sub_69788( ref uVar2, 5, 5, 0, 1 ))
            {
                sub_71906( ref l_U2626[4] );
                l_U2626[4]._fU72 = {-2024.26700000, -264.24170000, 2.14930000};
                l_U2626[4]._fU104 = 1;
                l_U2626[4]._fU4 = 1;
                sub_71906( ref l_U2626[5] );
                l_U2626[5]._fU72 = {-2028.43900000, -258.55910000, 2.05450000};
                l_U2626[5]._fU104 = 1;
                l_U2626[5]._fU4 = 1;
                l_U3884 = 1;
            }
        }
        if (NOT l_U3803)
        {
            uVar2[0] = {l_U975[5]};
            uVar2[1] = {l_U975[6]};
            uVar2[2] = {l_U975[7]};
            uVar2[3] = {l_U975[23]};
            uVar2[4] = {l_U975[24]};
            if (((sub_69788( ref uVar2, 5, 3, 0, 0 )) AND (sub_69788( ref uVar2, 2, 2, 0, 1 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -2034.59300000, -405.86530000, 4.35910000, 23.00000000, 32.00000000, 7.00000000, 0 )))
            {
                if (NOT l_U3898)
                {
                    if (l_U3804)
                    {
                        if (NOT l_U975[7]._fU4)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U975[7]._fU0 )))
                            {
                                if (NOT (IS_CAR_DEAD( l_U3337[7] )))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3337[7] ))
                                    {
                                        fVar499 = FIND_TIME_POSITION_IN_RECORDING( l_U3337[7] );
                                        if (fVar499 > 5500)
                                        {
                                            l_U3898 = 1;
                                        }
                                    }
                                    else
                                    {
                                        l_U3898 = 1;
                                    }
                                }
                                else
                                {
                                    l_U3898 = 1;
                                }
                            }
                        }
                        else
                        {
                            l_U3898 = 1;
                        }
                    }
                }
                else
                {
                    sub_9225( 10 );
                    START_PLAYBACK_RECORDED_CAR( l_U3690[0], 460 );
                    sub_68859();
                    l_U3825 = 1;
                    l_U3803 = 1;
                }
            }
        }
        else if (NOT l_U975[26]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U3690[0] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3690[0] )))
                {
                    l_U975[26]._fU4 = 1;
                    l_U975[27]._fU4 = 1;
                }
            }
        }
        if (NOT l_U3805)
        {
            uVar2[0] = {l_U975[5]};
            uVar2[1] = {l_U975[6]};
            uVar2[2] = {l_U975[7]};
            uVar2[3] = {l_U975[23]};
            uVar2[4] = {l_U975[24]};
            if (((sub_69788( ref uVar2, 5, 3, 0, 0 )) AND ((l_U3804) AND (sub_69788( ref uVar2, 2, 2, 0, 1 )))) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -2022.82100000, -362.47560000, 4.37070000, 22.00000000, 1.00000000, 20.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -2034.59300000, -405.86530000, 4.35910000, 23.00000000, 32.00000000, 7.00000000, 0 ))))
            {
                sub_9225( 12 );
                sub_68859();
                START_PLAYBACK_RECORDED_CAR( l_U3337[34], 461 );
                START_PLAYBACK_RECORDED_CAR( l_U3337[35], 462 );
                l_U3805 = 1;
            }
        }
        else if (NOT l_U975[34]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U3337[34] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3337[34] )))
                {
                    l_U975[34]._fU4 = 1;
                }
                else if (IS_CHAR_INJURED( l_U975[34]._fU0 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[34] );
                }
            }
        }
        if (NOT l_U975[35]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U3337[35] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3337[35] )))
                {
                    l_U975[35]._fU4 = 1;
                }
                else if (IS_CHAR_INJURED( l_U975[35]._fU0 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[35] );
                }
            }
        }
        if (NOT l_U3804)
        {
            uVar2[0] = {l_U975[0]};
            uVar2[1] = {l_U975[1]};
            uVar2[2] = {l_U975[2]};
            uVar2[3] = {l_U975[4]};
            uVar2[4] = {l_U975[25]};
            if ((sub_69788( ref uVar2, 5, 5, 0, 1 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -2038.87300000, -363.83000000, 4.37070000, 35.00000000, 4.00000000, 4.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -2034.59300000, -405.86530000, 4.35910000, 23.00000000, 32.00000000, 7.00000000, 0 ))))
            {
                sub_9225( 11 );
                START_PLAYBACK_RECORDED_CAR( l_U3337[7], 451 );
                START_PLAYBACK_RECORDED_CAR( l_U3337[23], 452 );
                START_PLAYBACK_RECORDED_CAR( l_U3337[24], 453 );
                sub_68859();
                l_U3804 = 1;
            }
        }
        else if (NOT l_U975[7]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U3337[7] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3337[7] )))
                {
                    l_U975[7]._fU4 = 1;
                }
                else if (IS_CHAR_INJURED( l_U975[7]._fU0 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[7] );
                }
                else if (NOT (IS_CHAR_IN_CAR( l_U975[7]._fU0, l_U3337[7] )))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[7] );
                };;;
            }
        }
        if (NOT l_U975[23]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U3337[23] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3337[23] )))
                {
                    l_U975[23]._fU4 = 1;
                }
                else if (IS_CHAR_INJURED( l_U975[23]._fU0 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[23] );
                }
                else if (NOT (IS_CHAR_IN_CAR( l_U975[23]._fU0, l_U3337[23] )))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[23] );
                };;;
            }
        }
        if (NOT l_U975[24]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U3337[24] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3337[24] )))
                {
                    l_U975[24]._fU4 = 1;
                }
                else if (IS_CHAR_INJURED( l_U975[24]._fU0 ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[24] );
                }
                else if (NOT (IS_CHAR_IN_CAR( l_U975[24]._fU0, l_U3337[24] )))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U3337[24] );
                };;;
            }
        }
        uVar2[0] = {l_U975[0]};
        uVar2[1] = {l_U975[1]};
        uVar2[2] = {l_U975[2]};
        uVar2[3] = {l_U975[3]};
        uVar2[4] = {l_U975[4]};
        uVar2[5] = {l_U975[5]};
        uVar2[6] = {l_U975[6]};
        uVar2[7] = {l_U975[7]};
        uVar2[8] = {l_U975[8]};
        uVar2[9] = {l_U975[23]};
        uVar2[10] = {l_U975[24]};
        uVar2[11] = {l_U975[25]};
        uVar2[12] = {l_U975[26]};
        uVar2[13] = {l_U975[27]};
        if (sub_75044( 0 ))
        {
            l_U3882 = 0;
            SET_PED_IS_BLIND_RAGING( sub_3101(), 0 );
            GET_GAME_TIMER( ref l_U3861 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U364 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U365 );
            REQUEST_MODEL( l_U366 );
            REQUEST_MODEL( l_U367 );
            g_U39149[1] = 2;
            l_U362 = 4;
        }
        break;
    }
    for ( I = 0; I < l_U384; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U384[I]._fU0 )))
        {
            if (l_U2626[I]._fU68)
            {
                sub_35105( ref l_U384[I], 0 );
            }
        }
    }
    if (l_U3899)
    {
        uVar2[0] = {l_U2626[2]};
        uVar2[1] = {l_U2626[3]};
        uVar2[2] = {l_U2626[4]};
        uVar2[3] = {l_U2626[5]};
        sub_76735( ref uVar2, 4, -2107556865 );
    }
    sub_77605();
    sub_82848();
    sub_83764();
    if (l_U3510)
    {
        sub_85221();
    }
    sub_85358();
    return;
}

void sub_68859()
{
    int I;

    if (l_U3510)
    {
        for ( I = 0; I < l_U975; I++ )
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U975[I]._fU0 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U3221[I] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U975[I]._fU0, ref l_U3221[I] );
                }
            }
        }
    }
    return;
}

void sub_69645()
{
    unknown[15] uVar2;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;
    unknown uVar396;
    unknown uVar397;
    unknown uVar398;
    unknown uVar399;
    unknown uVar400;
    unknown uVar401;
    unknown uVar402;
    unknown uVar403;
    unknown uVar404;
    unknown uVar405;
    unknown uVar406;
    unknown uVar407;
    unknown uVar408;
    unknown uVar409;
    unknown uVar410;
    unknown uVar411;
    unknown uVar412;
    unknown uVar413;
    unknown uVar414;
    unknown uVar415;
    unknown uVar416;
    unknown uVar417;
    unknown uVar418;
    unknown uVar419;
    unknown uVar420;
    unknown uVar421;
    unknown uVar422;
    unknown uVar423;
    unknown uVar424;
    unknown uVar425;
    unknown uVar426;
    unknown uVar427;
    unknown uVar428;
    unknown uVar429;
    unknown uVar430;
    unknown uVar431;
    unknown uVar432;
    unknown uVar433;
    unknown uVar434;
    unknown uVar435;
    unknown uVar436;
    unknown uVar437;
    unknown uVar438;
    unknown uVar439;
    unknown uVar440;
    unknown uVar441;
    unknown uVar442;
    unknown uVar443;
    unknown uVar444;
    unknown uVar445;
    unknown uVar446;
    unknown uVar447;
    unknown uVar448;
    unknown uVar449;
    unknown uVar450;
    unknown uVar451;
    unknown uVar452;
    unknown uVar453;
    unknown uVar454;
    unknown uVar455;
    unknown uVar456;
    unknown uVar457;
    unknown uVar458;
    unknown uVar459;
    unknown uVar460;
    unknown uVar461;
    unknown uVar462;
    unknown uVar463;
    unknown uVar464;
    unknown uVar465;
    unknown uVar466;
    unknown uVar467;
    unknown uVar468;
    unknown uVar469;
    unknown uVar470;
    unknown uVar471;
    unknown uVar472;
    unknown uVar473;
    unknown uVar474;
    unknown uVar475;
    unknown uVar476;
    unknown uVar477;
    unknown uVar478;
    unknown uVar479;
    unknown uVar480;
    unknown uVar481;
    unknown uVar482;
    unknown uVar483;
    unknown uVar484;
    unknown uVar485;
    unknown uVar486;
    unknown uVar487;
    unknown uVar488;
    unknown uVar489;
    unknown uVar490;
    unknown uVar491;
    unknown uVar492;
    unknown uVar493;
    unknown uVar494;
    unknown uVar495;
    unknown uVar496;
    unknown uVar497;

    array(ref uVar2, 15);
    uVar2[0] = {l_U975[0]};
    uVar2[1] = {l_U975[2]};
    uVar2[2] = {l_U975[25]};
    if (NOT l_U3687)
    {
        if ((sub_69788( ref uVar2, 3, 3, 0, 1 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -2016.05700000, -352.89390000, 4.37070000, 28.00000000, 23.00000000, 4.00000000, 0 )))
        {
            if (sub_69988( -2006.84700000, -356.13950000, 3.86387300, 1.50000000 ))
            {
                l_U3687 = 1;
            }
        }
    }
    return l_U3687;
}

int sub_69788(unknown uParam0, int iParam1, int iParam2, boolean bParam3, boolean bParam4)
{
    int I;
    int iVar8;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((NOT bParam4) || ((uParam0^)[I]._fU4))
        {
            if ((IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 )) || (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
            {
                iVar8++;
            }
            else if (bParam3)
            {
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar8++;
                }
            }
        }
    }
    if (iVar8 >= iParam2)
    {
        return 1;
    }
    return 0;
}

int sub_69988(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_71823(int iParam0, int iParam1, boolean bParam2)
{
    unknown[2] uVar5;
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
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;

    array(ref uVar5, 2);
    if (NOT iParam1->_fU96)
    {
        if ((ref iParam0->_fU72->_fU0) != (ref iParam1->_fU72->_fU0))
        {
            uVar5[0] = {(iParam0^)};
            if (sub_69788( ref uVar5, 1, 1, 1, 1 ))
            {
                sub_71906( iParam1 );
                iParam1->_fU84 = iParam0->_fU84;
                iParam1->_fU72 = {iParam0->_fU72};
                if (bParam2)
                {
                    iParam1->_fU24 = 1;
                }
                iParam1->_fU96 = 1;
                iParam1->_fU4 = 1;
            }
        }
    }
    return;
}

void sub_71906(int iParam0)
{
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU88 = 0;
    iParam0->_fU20 = 0;
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
        REMOVE_CHAR_DEFENSIVE_AREA( iParam0->_fU0 );
    }
    return;
}

int sub_75044(int iParam0)
{
    unknown[25] uVar3;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;
    unknown uVar396;
    unknown uVar397;
    unknown uVar398;
    unknown uVar399;
    unknown uVar400;
    unknown uVar401;
    unknown uVar402;
    unknown uVar403;
    unknown uVar404;
    unknown uVar405;
    unknown uVar406;
    unknown uVar407;
    unknown uVar408;
    unknown uVar409;
    unknown uVar410;
    unknown uVar411;
    unknown uVar412;
    unknown uVar413;
    unknown uVar414;
    unknown uVar415;
    unknown uVar416;
    unknown uVar417;
    unknown uVar418;
    unknown uVar419;
    unknown uVar420;
    unknown uVar421;
    unknown uVar422;
    unknown uVar423;
    unknown uVar424;
    unknown uVar425;
    unknown uVar426;
    unknown uVar427;
    unknown uVar428;
    unknown uVar429;
    unknown uVar430;
    unknown uVar431;
    unknown uVar432;
    unknown uVar433;
    unknown uVar434;
    unknown uVar435;
    unknown uVar436;
    unknown uVar437;
    unknown uVar438;
    unknown uVar439;
    unknown uVar440;
    unknown uVar441;
    unknown uVar442;
    unknown uVar443;
    unknown uVar444;
    unknown uVar445;
    unknown uVar446;
    unknown uVar447;
    unknown uVar448;
    unknown uVar449;
    unknown uVar450;
    unknown uVar451;
    unknown uVar452;
    unknown uVar453;
    unknown uVar454;
    unknown uVar455;
    unknown uVar456;
    unknown uVar457;
    unknown uVar458;
    unknown uVar459;
    unknown uVar460;
    unknown uVar461;
    unknown uVar462;
    unknown uVar463;
    unknown uVar464;
    unknown uVar465;
    unknown uVar466;
    unknown uVar467;
    unknown uVar468;
    unknown uVar469;
    unknown uVar470;
    unknown uVar471;
    unknown uVar472;
    unknown uVar473;
    unknown uVar474;
    unknown uVar475;
    unknown uVar476;
    unknown uVar477;
    unknown uVar478;
    unknown uVar479;
    unknown uVar480;
    unknown uVar481;
    unknown uVar482;
    unknown uVar483;
    unknown uVar484;
    unknown uVar485;
    unknown uVar486;
    unknown uVar487;
    unknown uVar488;
    unknown uVar489;
    unknown uVar490;
    unknown uVar491;
    unknown uVar492;
    unknown uVar493;
    unknown uVar494;
    unknown uVar495;
    unknown uVar496;
    unknown uVar497;
    unknown uVar498;
    unknown uVar499;
    unknown uVar500;
    unknown uVar501;
    unknown uVar502;
    unknown uVar503;
    unknown uVar504;
    unknown uVar505;
    unknown uVar506;
    unknown uVar507;
    unknown uVar508;
    unknown uVar509;
    unknown uVar510;
    unknown uVar511;
    unknown uVar512;
    unknown uVar513;
    unknown uVar514;
    unknown uVar515;
    unknown uVar516;
    unknown uVar517;
    unknown uVar518;
    unknown uVar519;
    unknown uVar520;
    unknown uVar521;
    unknown uVar522;
    unknown uVar523;
    unknown uVar524;
    unknown uVar525;
    unknown uVar526;
    unknown uVar527;
    unknown uVar528;
    unknown uVar529;
    unknown uVar530;
    unknown uVar531;
    unknown uVar532;
    unknown uVar533;
    unknown uVar534;
    unknown uVar535;
    unknown uVar536;
    unknown uVar537;
    unknown uVar538;
    unknown uVar539;
    unknown uVar540;
    unknown uVar541;
    unknown uVar542;
    unknown uVar543;
    unknown uVar544;
    unknown uVar545;
    unknown uVar546;
    unknown uVar547;
    unknown uVar548;
    unknown uVar549;
    unknown uVar550;
    unknown uVar551;
    unknown uVar552;
    unknown uVar553;
    unknown uVar554;
    unknown uVar555;
    unknown uVar556;
    unknown uVar557;
    unknown uVar558;
    unknown uVar559;
    unknown uVar560;
    unknown uVar561;
    unknown uVar562;
    unknown uVar563;
    unknown uVar564;
    unknown uVar565;
    unknown uVar566;
    unknown uVar567;
    unknown uVar568;
    unknown uVar569;
    unknown uVar570;
    unknown uVar571;
    unknown uVar572;
    unknown uVar573;
    unknown uVar574;
    unknown uVar575;
    unknown uVar576;
    unknown uVar577;
    unknown uVar578;
    unknown uVar579;
    unknown uVar580;
    unknown uVar581;
    unknown uVar582;
    unknown uVar583;
    unknown uVar584;
    unknown uVar585;
    unknown uVar586;
    unknown uVar587;
    unknown uVar588;
    unknown uVar589;
    unknown uVar590;
    unknown uVar591;
    unknown uVar592;
    unknown uVar593;
    unknown uVar594;
    unknown uVar595;
    unknown uVar596;
    unknown uVar597;
    unknown uVar598;
    unknown uVar599;
    unknown uVar600;
    unknown uVar601;
    unknown uVar602;
    unknown uVar603;
    unknown uVar604;
    unknown uVar605;
    unknown uVar606;
    unknown uVar607;
    unknown uVar608;
    unknown uVar609;
    unknown uVar610;
    unknown uVar611;
    unknown uVar612;
    unknown uVar613;
    unknown uVar614;
    unknown uVar615;
    unknown uVar616;
    unknown uVar617;
    unknown uVar618;
    unknown uVar619;
    unknown uVar620;
    unknown uVar621;
    unknown uVar622;
    unknown uVar623;
    unknown uVar624;
    unknown uVar625;
    unknown uVar626;
    unknown uVar627;
    unknown uVar628;
    unknown uVar629;
    unknown uVar630;
    unknown uVar631;
    unknown uVar632;
    unknown uVar633;
    unknown uVar634;
    unknown uVar635;
    unknown uVar636;
    unknown uVar637;
    unknown uVar638;
    unknown uVar639;
    unknown uVar640;
    unknown uVar641;
    unknown uVar642;
    unknown uVar643;
    unknown uVar644;
    unknown uVar645;
    unknown uVar646;
    unknown uVar647;
    unknown uVar648;
    unknown uVar649;
    unknown uVar650;
    unknown uVar651;
    unknown uVar652;
    unknown uVar653;
    unknown uVar654;
    unknown uVar655;
    unknown uVar656;
    unknown uVar657;
    unknown uVar658;
    unknown uVar659;
    unknown uVar660;
    unknown uVar661;
    unknown uVar662;
    unknown uVar663;
    unknown uVar664;
    unknown uVar665;
    unknown uVar666;
    unknown uVar667;
    unknown uVar668;
    unknown uVar669;
    unknown uVar670;
    unknown uVar671;
    unknown uVar672;
    unknown uVar673;
    unknown uVar674;
    unknown uVar675;
    unknown uVar676;
    unknown uVar677;
    unknown uVar678;
    unknown uVar679;
    unknown uVar680;
    unknown uVar681;
    unknown uVar682;
    unknown uVar683;
    unknown uVar684;
    unknown uVar685;
    unknown uVar686;
    unknown uVar687;
    unknown uVar688;
    unknown uVar689;
    unknown uVar690;
    unknown uVar691;
    unknown uVar692;
    unknown uVar693;
    unknown uVar694;
    unknown uVar695;
    unknown uVar696;
    unknown uVar697;
    unknown uVar698;
    unknown uVar699;
    unknown uVar700;
    unknown uVar701;
    unknown uVar702;
    unknown uVar703;
    unknown uVar704;
    unknown uVar705;
    unknown uVar706;
    unknown uVar707;
    unknown uVar708;
    unknown uVar709;
    unknown uVar710;
    unknown uVar711;
    unknown uVar712;
    unknown uVar713;
    unknown uVar714;
    unknown uVar715;
    unknown uVar716;
    unknown uVar717;
    unknown uVar718;
    unknown uVar719;
    unknown uVar720;
    unknown uVar721;
    unknown uVar722;
    unknown uVar723;
    unknown uVar724;
    unknown uVar725;
    unknown uVar726;
    unknown uVar727;
    unknown uVar728;
    unknown uVar729;
    unknown uVar730;
    unknown uVar731;
    unknown uVar732;
    unknown uVar733;
    unknown uVar734;
    unknown uVar735;
    unknown uVar736;
    unknown uVar737;
    unknown uVar738;
    unknown uVar739;
    unknown uVar740;
    unknown uVar741;
    unknown uVar742;
    unknown uVar743;
    unknown uVar744;
    unknown uVar745;
    unknown uVar746;
    unknown uVar747;
    unknown uVar748;
    unknown uVar749;
    unknown uVar750;
    unknown uVar751;
    unknown uVar752;
    unknown uVar753;
    unknown uVar754;
    unknown uVar755;
    unknown uVar756;
    unknown uVar757;
    unknown uVar758;
    unknown uVar759;
    unknown uVar760;
    unknown uVar761;
    unknown uVar762;
    unknown uVar763;
    unknown uVar764;
    unknown uVar765;
    unknown uVar766;
    unknown uVar767;
    unknown uVar768;
    unknown uVar769;
    unknown uVar770;
    unknown uVar771;
    unknown uVar772;
    unknown uVar773;
    unknown uVar774;
    unknown uVar775;
    unknown uVar776;
    unknown uVar777;
    unknown uVar778;
    unknown uVar779;
    unknown uVar780;
    unknown uVar781;
    unknown uVar782;
    unknown uVar783;
    unknown uVar784;
    unknown uVar785;
    unknown uVar786;
    unknown uVar787;
    unknown uVar788;
    unknown uVar789;
    unknown uVar790;
    unknown uVar791;
    unknown uVar792;
    unknown uVar793;
    unknown uVar794;
    unknown uVar795;
    unknown uVar796;
    unknown uVar797;
    unknown uVar798;
    unknown uVar799;
    unknown uVar800;
    unknown uVar801;
    unknown uVar802;
    unknown uVar803;
    unknown uVar804;
    unknown uVar805;
    unknown uVar806;
    unknown uVar807;
    unknown uVar808;
    unknown uVar809;
    unknown uVar810;
    unknown uVar811;
    unknown uVar812;
    unknown uVar813;
    unknown uVar814;
    unknown uVar815;
    unknown uVar816;
    unknown uVar817;
    unknown uVar818;
    unknown uVar819;
    unknown uVar820;
    unknown uVar821;
    unknown uVar822;
    unknown uVar823;
    unknown uVar824;
    unknown uVar825;
    unknown uVar826;
    unknown uVar827;
    unknown uVar828;

    array(ref uVar3, 25);
    if (iParam0 == 0)
    {
        uVar3[0] = {l_U975[0]};
        uVar3[1] = {l_U975[1]};
        uVar3[2] = {l_U975[2]};
        uVar3[3] = {l_U975[3]};
        uVar3[4] = {l_U975[4]};
        uVar3[5] = {l_U975[5]};
        uVar3[6] = {l_U975[6]};
        uVar3[7] = {l_U975[25]};
        uVar3[8] = {l_U975[8]};
        uVar3[9] = {l_U975[36]};
        uVar3[10] = {l_U975[23]};
        uVar3[11] = {l_U975[24]};
        uVar3[12] = {l_U975[7]};
        uVar3[13] = {l_U975[26]};
        uVar3[14] = {l_U975[27]};
        uVar3[15] = {l_U975[34]};
        uVar3[16] = {l_U975[35]};
        if (sub_69788( ref uVar3, 17, 17, 0, 1 ))
        {
            return 1;
        }
        else if (sub_69788( ref uVar3, 10, 10, 0, 1 ))
        {
            if (l_U3803)
            {
                if (IS_CHAR_DEAD( l_U975[26]._fU0 ))
                {
                    if (IS_CHAR_DEAD( l_U975[27]._fU0 ))
                    {
                        if (l_U3804)
                        {
                            if (IS_CHAR_DEAD( l_U975[7]._fU0 ))
                            {
                                if (IS_CHAR_DEAD( l_U975[23]._fU0 ))
                                {
                                    if (IS_CHAR_DEAD( l_U975[24]._fU0 ))
                                    {
                                        if (l_U3805)
                                        {
                                            if (IS_CHAR_DEAD( l_U975[34]._fU0 ))
                                            {
                                                if (IS_CHAR_DEAD( l_U975[35]._fU0 ))
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
            }
        }
    }
    else if (iParam0 == 2)
    {
        uVar3[0] = {l_U975[9]};
        uVar3[1] = {l_U975[10]};
        uVar3[2] = {l_U975[11]};
        uVar3[3] = {l_U975[12]};
        uVar3[4] = {l_U975[13]};
        uVar3[5] = {l_U975[14]};
        uVar3[6] = {l_U975[15]};
        uVar3[7] = {l_U975[16]};
        uVar3[8] = {l_U975[17]};
        uVar3[9] = {l_U975[18]};
        uVar3[10] = {l_U975[19]};
        uVar3[11] = {l_U975[20]};
        uVar3[12] = {l_U975[21]};
        uVar3[13] = {l_U975[22]};
        uVar3[14] = {l_U975[28]};
        uVar3[15] = {l_U975[29]};
        uVar3[16] = {l_U975[30]};
        uVar3[17] = {l_U975[33]};
        uVar3[18] = {l_U975[37]};
        uVar3[19] = {l_U975[31]};
        uVar3[20] = {l_U975[32]};
        if (sub_69788( ref uVar3, 21, 21, 0, 1 ))
        {
            return 1;
        }
        else if (l_U3806)
        {
            if (sub_69788( ref uVar3, 19, 19, 0, 1 ))
            {
                if (IS_CHAR_DEAD( l_U975[31]._fU0 ))
                {
                    if (IS_CHAR_DEAD( l_U975[32]._fU0 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    else if (iParam0 == 1)
    {
        if (l_U3804)
        {
            if ((IS_CHAR_INJURED( l_U975[24]._fU0 )) AND ((IS_CHAR_INJURED( l_U975[23]._fU0 )) AND (IS_CHAR_INJURED( l_U975[7]._fU0 ))))
            {
                return 1;
            }
        }
    };;;
    return 0;
}

void sub_76735(unknown uParam0, int iParam1, int iParam2)
{
    int iVar5;
    int I;

    if (NOT l_U3884)
    {
        if (l_U3882)
        {
            if (NOT l_U3885)
            {
                GET_GAME_TIMER( ref l_U3888 );
                l_U3885 = 1;
            }
            else if (sub_34978( l_U3888, 5000 ))
            {
                for ( I = 0; I < l_U975; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U975[I]._fU0 )))
                    {
                        if (l_U975[I]._fU4)
                        {
                            GET_CHAR_MODEL( l_U975[I]._fU0, ref iVar5 );
                            if (iVar5 == iParam2)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U975[I]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 ))
                                {
                                    if (NOT sub_39088())
                                    {
                                        SAY_AMBIENT_SPEECH( l_U975[I]._fU0, "ANGELS_OF_DEATH_TAUNT_LOST", 1, 1, 2 );
                                        l_U3885 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
                l_U3882 = 0;
                l_U3883 = 1;
            }
        }
        else if (l_U3883)
        {
            if (NOT l_U3886)
            {
                GET_GAME_TIMER( ref l_U3889 );
                l_U3886 = 1;
            }
            else if (sub_34978( l_U3889, 5000 ))
            {
                for ( I = 0; I <= iParam1; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
                    {
                        if ((uParam0^)[I]._fU4)
                        {
                            if (NOT (uParam0^)[I]._fU104)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), (uParam0^)[I]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 ))
                                {
                                    if (NOT sub_39088())
                                    {
                                        if (NOT l_U3887)
                                        {
                                            SAY_AMBIENT_SPEECH( (uParam0^)[I]._fU0, "LOST_TAUNT_ANGELS_OF_DEATH", 1, 1, 2 );
                                            l_U3887 = 1;
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( (uParam0^)[I]._fU0, "NEED_SOME_HELP", 1, 1, 2 );
                                            l_U3887 = 0;
                                        }
                                        l_U3886 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
                l_U3883 = 0;
                l_U3882 = 1;
            }
        }
    }
    else
    {
        for ( I = 0; I <= iParam1; I++ )
        {
            if (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
            {
                if ((uParam0^)[I]._fU4)
                {
                    if ((uParam0^)[I]._fU104)
                    {
                        if (NOT sub_39088())
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), (uParam0^)[I]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 ))
                            {
                                if (NOT sub_39088())
                                {
                                    SAY_AMBIENT_SPEECH( (uParam0^)[I]._fU0, "NICE_SHOOTING_JOHNNY", 1, 1, 2 );
                                    l_U3884 = 0;
                                }
                            }
                            else
                            {
                                l_U3884 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_77605()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 17; I++ )
    {
        if (NOT l_U2626[I]._fU68)
        {
            if (l_U2626[I]._fU4)
            {
                if (NOT (IS_CHAR_INJURED( l_U2626[I]._fU0 )))
                {
                    if (NOT l_U2626[I]._fU108)
                    {
                        if (NOT l_U2626[I]._fU8)
                        {
                            SET_CHAR_DECISION_MAKER( l_U2626[I]._fU0, l_U3392 );
                            if (NOT l_U2626[I]._fU104)
                            {
                                if (NOT l_U2626[I]._fU24)
                                {
                                    if (I == 0)
                                    {
                                        ;
                                    }
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U2626[I]._fU72._fU0, l_U2626[I]._fU72._fU4, l_U2626[I]._fU72._fU8, 3, -1, 0.50000000 );
                                    if (l_U2626[I]._fU20)
                                    {
                                        TASK_DUCK( 0, -2 );
                                    }
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                }
                                else
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U2626[I]._fU72._fU0, l_U2626[I]._fU72._fU4, l_U2626[I]._fU72._fU8, 3, 0.50000000, 0.50000000, sub_3101(), 1 );
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                }
                            }
                            else if (l_U3521 != I)
                            {
                                if (NOT (IS_CAR_DEAD( l_U384[I]._fU4 )))
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U384[I]._fU4, -2 );
                                    TASK_CAR_DRIVE_TO_COORD( 0, l_U384[I]._fU4, l_U2626[I]._fU72._fU0, l_U2626[I]._fU72._fU4, l_U2626[I]._fU72._fU8, 15.00000000, 0, 0, 2, 4, -1 );
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U2626[I]._fU0 )))
                            {
                                if (NOT l_U2626[I]._fU104)
                                {
                                    TASK_PERFORM_SEQUENCE( l_U2626[I]._fU0, uVar3 );
                                }
                                else if (NOT (IS_CAR_DEAD( l_U384[I]._fU4 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U2626[I]._fU0, uVar3 );
                                }
                            }
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            l_U2626[I]._fU8 = 1;
                        }
                        else if ((l_U2626[I]._fU12) || (NOT l_U2626[I]._fU16))
                        {
                            if (NOT l_U2626[I]._fU20)
                            {
                                if (sub_78388( l_U2626[I]._fU0, 1, 0 ))
                                {
                                    if (NOT l_U2626[I]._fU104)
                                    {
                                        SET_CHAR_DECISION_MAKER( l_U2626[I]._fU0, l_U3393 );
                                        SET_CHAR_RELATIONSHIP( l_U2626[I]._fU0, 5, 24 );
                                        SET_CHAR_RELATIONSHIP( l_U2626[I]._fU0, 1, 0 );
                                        sub_78616( I, "Setting combat..." );
                                        SET_COMBAT_DECISION_MAKER( l_U2626[I]._fU0, l_U2626[I]._fU100 );
                                        sub_78693( ref l_U2626[I], l_U2626[I]._fU84 );
                                        if (l_U2626[I]._fU88)
                                        {
                                            OPEN_SEQUENCE_TASK( ref uVar3 );
                                            if (NOT (IS_CHAR_DEAD( l_U2626[I]._fU92 )))
                                            {
                                                TASK_COMBAT( 0, l_U2626[I]._fU92 );
                                            }
                                            CLOSE_SEQUENCE_TASK( uVar3 );
                                        }
                                        else
                                        {
                                            OPEN_SEQUENCE_TASK( ref uVar3 );
                                            TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( 0, 35.00000000 );
                                            CLOSE_SEQUENCE_TASK( uVar3 );
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U2626[I]._fU0 )))
                                        {
                                            TASK_PERFORM_SEQUENCE( l_U2626[I]._fU0, uVar3 );
                                        }
                                        CLEAR_SEQUENCE_TASK( uVar3 );
                                    }
                                    else
                                    {
                                        sub_82596( ref l_U384[I], 1 );
                                    }
                                    l_U2626[I]._fU16 = 1;
                                    l_U2626[I]._fU12 = 0;
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

int sub_78388(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_78616(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_78693(int iParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2012.34400000, -327.06690000, 7.03730000, -2008.88000000, -329.06690000, 2.03730000, 4.50000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2019.28900000, -328.76050000, 5.87060000, -2015.35600000, -329.48950000, 2.37060000, 4.50000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2026.97500000, -342.59310000, 6.52160000, -2011.59500000, -347.00330000, 3.02160000, 4.50000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2017.51700000, -356.83090000, 7.35800000, -2013.01700000, -356.75240000, 2.85800000, 5.50000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2012.16300000, -347.34860000, 5.52940000, -2012.16300000, -351.84860000, 3.02940000, 3.00000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2028.82600000, -337.93160000, 18.17580000, -2029.82600000, -337.93160000, 14.67580000, 6.50000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2037.48400000, -408.15480000, 5.77800000, -2039.24200000, -412.29700000, 2.77800000, 6.00000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2050.28200000, -407.43700000, 5.77950000, -2048.49000000, -412.10490000, 2.77950000, 6.50000000 );
        break;
        case 9:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2031.01100000, -405.61510000, 5.87070000, -2035.42900000, -404.75810000, 2.87070000, 6.00000000 );
        break;
        case 10:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2019.76600000, -378.87620000, 5.87070000, -2019.76600000, -392.87620000, 2.87070000, 11.00000000 );
        break;
        case 11:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2024.13000000, -409.85060000, 6.87070000, -2014.13600000, -409.49730000, 2.87070000, 4.50000000 );
        break;
        case 12:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2038.77600000, -390.26470000, 6.87070000, -2038.77600000, -396.26470000, 2.87070000, 6.00000000 );
        break;
        case 13:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2049.50800000, -390.34580000, 6.80620000, -2049.50800000, -396.34580000, 2.80620000, 6.00000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2044.58500000, -395.66420000, 19.77390000, -2044.39700000, -391.66860000, 14.27390000, 12.00000000 );
        break;
        case 14:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2045.03200000, -360.24930000, 6.37070000, -2045.03200000, -383.74930000, 2.37070000, 12.50000000 );
        break;
        case 15:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2032.37000000, -330.81260000, 5.87060000, -2007.87000000, -330.81260000, 2.87060000, 11.50000000 );
        break;
        case 16:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2031.31300000, -336.68530000, 6.02950000, -2031.31300000, -343.68530000, 3.02950000, 1.50000000 );
        break;
        case 17:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2053.37600000, -417.73440000, 5.89870100, -2054.98000000, -423.51620000, 2.39870000, 7.00000000 );
        break;
        case 18:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2051.21400000, -406.96410000, 5.77290000, -2049.05100000, -413.62150000, 2.77290000, 8.00000000 );
        break;
        case 19:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2027.70700000, -371.99820000, 10.96490000, -2011.73300000, -367.86690000, 2.46490000, 4.00000000 );
        break;
        case 20:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2060.35700000, -411.74260000, 6.27610000, -2012.85700000, -411.74260000, 2.27610000, 29.00000000 );
        break;
        case 22:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2006.34000000, -331.61420000, 5.75210000, -2002.65800000, -333.17710000, 2.75210000, 3.50000000 );
        break;
        case 21:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2024.51400000, -386.35600000, 5.95640000, -2023.60000000, -379.41590000, 2.95640000, 4.00000000 );
        break;
        case 23:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -2037.51800000, -393.06810000, 5.87070000, -2035.48600000, -390.21870000, 2.87070000, 5.00000000 );
        break;
        case 24:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1283.89400000, -598.17970000, 6.34200000, -1293.90300000, -602.74140000, 1.34200000, 5.00000000 );
        break;
        case 25:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1284.37400000, -582.76350000, 6.34410000, -1273.38000000, -582.37960000, 1.34410000, 6.50000000 );
        break;
        case 26:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1264.80600000, -589.83610000, 6.57530000, -1264.88400000, -586.83710000, 1.57530000, 9.50000000 );
        break;
        case 27:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1264.68300000, -604.61370000, 6.47850000, -1264.76100000, -601.61480000, 1.47850000, 10.50000000 );
        break;
        case 28:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1266.52800000, -597.02000000, 13.03680000, -1266.60600000, -594.02100000, 8.03680100, 1.50000000 );
        break;
        case 29:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1276.19200000, -600.70750000, 5.34200000, -1280.07400000, -601.67520000, 1.34200000, 7.00000000 );
        break;
        case 30:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1266.21800000, -563.78230000, 5.35300000, -1266.21800000, -589.78230000, 1.35300000, 20.50000000 );
        break;
        case 32:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1199.64400000, -584.67300000, 4.34260000, -1199.64400000, -618.67300000, 1.34260000, 14.50000000 );
        break;
        case 31:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1163.03100000, -621.15360000, 4.34260000, -1205.03100000, -621.15360000, 1.34260000, 4.00000000 );
        break;
        case 33:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1241.29800000, -555.07010000, 3.82060000, -1240.63000000, -553.18490000, 1.32060000, 5.00000000 );
        break;
        case 34:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1251.88400000, -570.04020000, 5.34300000, -1248.13900000, -573.35330000, 1.34300000, 5.50000000 );
        break;
        case 35:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1259.15800000, -567.58920000, 11.54090000, -1245.65800000, -567.58920000, 9.04090000, 1.50000000 );
        break;
        case 36:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1205.08300000, -556.04520000, 4.34300000, -1209.30000000, -553.35870000, 1.34300000, 13.50000000 );
        break;
        case 37:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1195.01500000, -554.71290000, 4.78350000, -1188.51600000, -554.82640000, 1.78350000, 13.50000000 );
        break;
        case 38:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1171.14200000, -565.29840000, 4.66050000, -1171.14200000, -558.79840000, 1.66050000, 16.50000000 );
        break;
        case 39:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1188.14300000, -562.88340000, 4.80720000, -1188.14300000, -559.08340000, 1.80720000, 7.50000000 );
        break;
        case 40:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1174.87400000, -574.65030000, 4.34340000, -1178.22200000, -580.22190000, 1.34340000, 10.00000000 );
        break;
        case 41:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1202.46000000, -566.69520000, 10.46780000, -1209.46000000, -566.69520000, 6.46780000, 2.00000000 );
        break;
        case 42:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1200.67800000, -570.87980000, 9.58269900, -1200.67800000, -577.87980000, 1.58270000, 2.00000000 );
        break;
        case 43:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1170.93200000, -653.82040000, 4.56480000, -1170.93200000, -657.82040000, 1.06480000, 3.00000000 );
        break;
        case 44:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1185.12700000, -661.76680000, 4.95380000, -1185.12700000, -665.76680000, 1.45380000, 3.00000000 );
        break;
        case 45:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1177.51600000, -631.28970000, 11.13810000, -1175.51600000, -631.28970000, 7.63810000, 1.50000000 );
        break;
        case 46:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1199.76300000, -647.86480000, 4.84260000, -1205.42600000, -643.75030000, 1.34260000, 8.00000000 );
        break;
        case 47:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1204.35600000, -633.12770000, 15.25300000, -1206.05600000, -633.12770000, 10.75300000, 8.00000000 );
        break;
        case 49:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1222.91900000, -551.81260000, 6.44420000, -1222.91900000, -565.81260000, 1.44420000, 11.50000000 );
        break;
        case 48:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1218.83900000, -570.02110000, 11.36860000, -1208.83900000, -570.02110000, 8.36860000, 2.00000000 );
        break;
        case 50:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1215.39900000, -558.54370000, 3.84300000, -1215.39900000, -554.04370000, 1.34300000, 4.50000000 );
        break;
        case 51:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1207.75700000, -549.91370000, 3.84300000, -1211.25700000, -549.91370000, 1.84300000, 4.50000000 );
        break;
        case 52:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1246.15500000, -575.69890000, 4.51240000, -1246.15500000, -578.69890000, 1.51240000, 5.00000000 );
        break;
        case 54:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1262.13700000, -601.30000000, 12.46820000, -1254.57300000, -598.69540000, 7.96820000, 2.00000000 );
        break;
        case 53:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1193.52500000, -647.95690000, 4.91730000, -1186.27800000, -652.39800000, 1.41730000, 5.00000000 );
        break;
        case 55:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1203.09400000, -625.68120000, 12.81400000, -1195.09400000, -625.68120000, 9.31400000, 2.00000000 );
        break;
        case 56:
        SET_CHAR_SPHERE_DEFENSIVE_AREA( iParam0->_fU0, iParam0->_fU72, 2 );
        break;
        case 57:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( iParam0->_fU0, -1199.69100000, -625.69420000, 12.31400000, -1192.19100000, -625.69420000, 9.31400000, 2.00000000 );
        break;
    }
    return;
}

void sub_82596(int iParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((uParam1) AND (DOES_VEHICLE_EXIST( iParam0->_fU4 )))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
    }
    if (DOES_CHAR_EXIST( iParam0->_fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            SET_CHAR_KEEP_TASK( iParam0->_fU0, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( iParam0 + 0 );
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_82848()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 49; I++ )
    {
        if (l_U975[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( l_U975[I]._fU0 )))
            {
                if (NOT l_U975[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U975[I]._fU0, l_U3392 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U975[I]._fU0, 1 );
                    SET_CHAR_RELATIONSHIP( l_U975[I]._fU0, 5, 0 );
                    if (NOT l_U975[I]._fU24)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U975[I]._fU72._fU0, l_U975[I]._fU72._fU4, l_U975[I]._fU72._fU8, 3, -1, 0.50000000 );
                        if (l_U975[I]._fU20)
                        {
                            TASK_DUCK( 0, -2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U975[I]._fU72._fU0, l_U975[I]._fU72._fU4, l_U975[I]._fU72._fU8, 3, 0.50000000, 0.50000000, sub_3101(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U975[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U975[I]._fU0, uVar3 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U975[I]._fU8 = 1;
                }
                else if ((l_U975[I]._fU12) || (NOT l_U975[I]._fU16))
                {
                    if (NOT l_U975[I]._fU20)
                    {
                        if (sub_78388( l_U975[I]._fU0, 1, 0 ))
                        {
                            SET_CHAR_DECISION_MAKER( l_U975[I]._fU0, l_U3393 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U975[I]._fU0, 0 );
                            SET_COMBAT_DECISION_MAKER( l_U975[I]._fU0, l_U975[I]._fU100 );
                            sub_78693( ref l_U975[I], l_U975[I]._fU84 );
                            SET_CHAR_RELATIONSHIP( l_U975[I]._fU0, 5, 23 );
                            SET_CHAR_RELATIONSHIP( l_U975[I]._fU0, 5, 0 );
                            if (l_U975[I]._fU88)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                if (NOT (IS_CHAR_DEAD( l_U975[I]._fU92 )))
                                {
                                    TASK_COMBAT( 0, l_U975[I]._fU92 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar3 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                TASK_COMBAT( 0, sub_3101() );
                                CLOSE_SEQUENCE_TASK( uVar3 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U975[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U975[I]._fU0, uVar3 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar3 );
                            l_U975[I]._fU16 = 1;
                            l_U975[I]._fU12 = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_83764()
{
    int I;
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

    for ( I = 0; I <= 49; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U975[I]._fU0 )))
        {
            if (l_U975[I]._fU28)
            {
                GET_CHAR_COORDINATES( l_U975[I]._fU0, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                if (uVar10._fU8 >= (l_U975[I]._fU32._fU16._fU8 + 1.00000000))
                {
                    GET_CHAR_HEALTH( l_U975[I]._fU0, ref iVar3 );
                    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U975[I]._fU0, sub_3101(), 1 )) AND (iVar3 < 200))
                    {
                        switch (l_U975[I]._fU32._fU0)
                        {
                            case 0:
                            sub_84056( l_U975[I]._fU0, l_U975[I]._fU32._fU4, l_U975[I]._fU32._fU16._fU8 );
                            l_U975[I]._fU28 = 0;
                            break;
                            case 1:
                            l_U975[I]._fU32._fU4 = {sub_84176( sub_3101(), l_U975[I]._fU0, 1 )};
                            l_U975[I]._fU32._fU4 = {l_U975[I]._fU32._fU4 * -1.00000000};
                            l_U975[I]._fU32._fU28 = 1;
                            CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U975[I]._fU0 );
                            STOP_PED_SPEAKING( l_U975[I]._fU0, 1 );
                            l_U975[I]._fU32._fU32 = GET_SOUND_ID();
                            PLAY_SOUND_FROM_PED( l_U975[I]._fU32._fU32, "B3_ITS_WAR_SCREAM", l_U975[I]._fU0 );
                            sub_84695( l_U975[I]._fU0, l_U975[I]._fU32._fU4, l_U975[I]._fU32._fU16._fU8 );
                            l_U975[I]._fU28 = 0;
                            break;
                            case 2:
                            sub_84871( l_U975[I]._fU0, l_U975[I]._fU32._fU4, l_U975[I]._fU32._fU16._fU8 );
                            l_U975[I]._fU28 = 0;
                            break;
                        }
                    }
                }
            }
        }
        if (l_U975[I]._fU32._fU28)
        {
            if (DOES_CHAR_EXIST( l_U975[I]._fU0 ))
            {
                if (IS_CHAR_DEAD( l_U975[I]._fU0 ))
                {
                    STOP_SOUND( l_U975[I]._fU32._fU32 );
                    N_1363505769( l_U975[I]._fU0, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                    if (uVar10._fU8 < (l_U975[I]._fU32._fU16._fU8 + 2.00000000))
                    {
                        PLAY_SOUND_FROM_POSITION( -1, "B3_ITS_WAR_BODY_SPLAT", uVar10 );
                        l_U975[I]._fU32._fU28 = 0;
                    }
                }
            }
        }
    }
    return;
}

void sub_84056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, 5000, 5, uParam1, uParam4, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_84176(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    vector vVar8;
    vector vVar11;
    vector vVar14;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
    }
    else
    {
        SCRIPT_ASSERT( "First ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar11.x, ref vVar11.y, ref vVar11.z );
    }
    else
    {
        SCRIPT_ASSERT( "Second ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    vVar14 = {vVar11 - vVar8};
    if (bParam2)
    {
        Result = {vVar14 / (VMAG( vVar14 ))};
    }
    else
    {
        Result = {vVar14};
    }
    return Result;
}

void sub_84695(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref uVar7 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, 5000, 4, uParam1, uParam4, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_84871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, 5000, 6, uParam1, uParam4, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_85221()
{
    int I;

    for ( I = 0; I < l_U975; I++ )
    {
        if (DOES_BLIP_EXIST( l_U3221[I] ))
        {
            if (IS_CHAR_FATALLY_INJURED( l_U975[I]._fU0 ))
            {
                REMOVE_BLIP( l_U3221[I] );
            }
        }
        else if (NOT (IS_CHAR_FATALLY_INJURED( l_U975[I]._fU0 )))
        {
            ;
        }
    }
    return;
}

void sub_85358()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int I;
    float fVar6;

    for ( I = 0; I < l_U3524; I++ )
    {
        switch (l_U3524[I]._fU40)
        {
            case 0:
            if (l_U3524[I]._fU0)
            {
                CREATE_OBJECT_NO_OFFSET( -657414365, l_U3524[I]._fU8._fU0, l_U3524[I]._fU8._fU4, l_U3524[I]._fU8._fU8, ref l_U3524[I]._fU4, 1 );
                SET_OBJECT_HEADING( l_U3524[I]._fU4, l_U3524[I]._fU32 );
                FREEZE_OBJECT_POSITION( l_U3524[I]._fU4, 1 );
                SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U3524[I]._fU4, 1 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U3524[I]._fU4, 0.00000000, 0.00000000, 0.50000000, ref l_U3524[I]._fU20._fU0, ref l_U3524[I]._fU20._fU4, ref l_U3524[I]._fU20._fU8 );
                l_U3524[I]._fU40 = 1;
            }
            break;
            case 1:
            if (DOES_OBJECT_EXIST( l_U3524[I]._fU4 ))
            {
                GET_OBJECT_HEALTH( l_U3524[I]._fU4, ref fVar6 );
                if ((l_U3524[I]._fU36) || (fVar6 < 900.00000000))
                {
                    l_U3524[I]._fU40 = 2;
                }
            }
            break;
            case 2:
            if (DOES_OBJECT_EXIST( l_U3524[I]._fU4 ))
            {
                DELETE_OBJECT( ref l_U3524[I]._fU4 );
            }
            ADD_EXPLOSION( l_U3524[I]._fU20._fU0, l_U3524[I]._fU20._fU4, l_U3524[I]._fU20._fU8, 0, 1.00000000, 1, 0, 1.00000000 );
            CREATE_OBJECT_NO_OFFSET( 203767144, l_U3524[I]._fU8._fU0, l_U3524[I]._fU8._fU4, l_U3524[I]._fU8._fU8, ref l_U3524[I]._fU4, 1 );
            SET_OBJECT_HEADING( l_U3524[I]._fU4, l_U3524[I]._fU32 );
            FREEZE_OBJECT_POSITION( l_U3524[I]._fU4, 1 );
            l_U3796 = 1;
            l_U3524[I]._fU40 = 3;
            break;
        }
    }
    if (l_U3796)
    {
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((NOT (sub_40108( l_U3797 ))) AND ((NOT (sub_40108( l_U3431 ))) AND ((NOT (sub_40108( l_U3425 ))) AND ((NOT (sub_40108( l_U3413 ))) AND (NOT (sub_40108( l_U3395 ))))))))
        {
            sub_32666( "E1B3_BLOW", ref l_U3797, 6, 1 );
            l_U3796 = 0;
        }
        else
        {
            l_U3796 = 0;
        }
    }
    return;
}

void sub_86142()
{
    unknown[15] uVar2;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;
    unknown uVar396;
    unknown uVar397;
    unknown uVar398;
    unknown uVar399;
    unknown uVar400;
    unknown uVar401;
    unknown uVar402;
    unknown uVar403;
    unknown uVar404;
    unknown uVar405;
    unknown uVar406;
    unknown uVar407;
    unknown uVar408;
    unknown uVar409;
    unknown uVar410;
    unknown uVar411;
    unknown uVar412;
    unknown uVar413;
    unknown uVar414;
    unknown uVar415;
    unknown uVar416;
    unknown uVar417;
    unknown uVar418;
    unknown uVar419;
    unknown uVar420;
    unknown uVar421;
    unknown uVar422;
    unknown uVar423;
    unknown uVar424;
    unknown uVar425;
    unknown uVar426;
    unknown uVar427;
    unknown uVar428;
    unknown uVar429;
    unknown uVar430;
    unknown uVar431;
    unknown uVar432;
    unknown uVar433;
    unknown uVar434;
    unknown uVar435;
    unknown uVar436;
    unknown uVar437;
    unknown uVar438;
    unknown uVar439;
    unknown uVar440;
    unknown uVar441;
    unknown uVar442;
    unknown uVar443;
    unknown uVar444;
    unknown uVar445;
    unknown uVar446;
    unknown uVar447;
    unknown uVar448;
    unknown uVar449;
    unknown uVar450;
    unknown uVar451;
    unknown uVar452;
    unknown uVar453;
    unknown uVar454;
    unknown uVar455;
    unknown uVar456;
    unknown uVar457;
    unknown uVar458;
    unknown uVar459;
    unknown uVar460;
    unknown uVar461;
    unknown uVar462;
    unknown uVar463;
    unknown uVar464;
    unknown uVar465;
    unknown uVar466;
    unknown uVar467;
    unknown uVar468;
    unknown uVar469;
    unknown uVar470;
    unknown uVar471;
    unknown uVar472;
    unknown uVar473;
    unknown uVar474;
    unknown uVar475;
    unknown uVar476;
    unknown uVar477;
    unknown uVar478;
    unknown uVar479;
    unknown uVar480;
    unknown uVar481;
    unknown uVar482;
    unknown uVar483;
    unknown uVar484;
    unknown uVar485;
    unknown uVar486;
    unknown uVar487;
    unknown uVar488;
    unknown uVar489;
    unknown uVar490;
    unknown uVar491;
    unknown uVar492;
    unknown uVar493;
    unknown uVar494;
    unknown uVar495;
    unknown uVar496;
    unknown uVar497;
    unknown[2] uVar498;
    unknown uVar501;
    unknown uVar502;
    unknown uVar503;
    unknown uVar504;
    int iVar505;
    unknown uVar506;
    unknown uVar507;
    boolean bVar508;
    int[3] iVar509;

    array(ref uVar2, 15);
    array(ref uVar498, 2);
    sub_78616( l_U3812, "b3_billy_prog..." );
    switch (l_U3812)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            if ((l_U3517) || ((l_U3511) || (sub_68169( ref l_U384[0], 1082130432 ))))
            {
                if (l_U3516)
                {
                    l_U3516 = 0;
                }
                if (NOT ((sub_75044( 0 )) AND (l_U363 > 0)))
                {
                    sub_86409( 0 );
                    l_U3829 = 1;
                    l_U3841 = 1;
                    if (l_U3514)
                    {
                        l_U3684 = 1;
                    }
                    if (NOT (IS_CAR_DEAD( l_U3336 )))
                    {
                        GET_CAR_COORDINATES( l_U3336, ref l_U3867._fU0, ref l_U3867._fU4, ref l_U3867._fU8 );
                        GET_CAR_HEADING( l_U3336, ref l_U3870 );
                    }
                    sub_87154( 0, ref l_U384 );
                    sub_58519( 1 );
                    if ((l_U3509) AND (NOT l_U3821))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_32666( "E1B3_ARRV", ref l_U3395, 6, 1 );
                            l_U3821 = 1;
                            l_U3823 = 1;
                        }
                    }
                    sub_3812();
                    l_U2626[0]._fU68 = 0;
                    l_U2626[0]._fU4 = 1;
                    l_U2626[0]._fU72 = {-2009.35600000, -326.85960000, 3.36560000};
                    l_U2626[0]._fU84 = 15;
                    l_U2626[0]._fU100 = l_U3389;
                    l_U3815 = 1;
                    l_U3812 = 1;
                }
                else
                {
                    l_U3812 = 4;
                }
            }
            else
            {
                sub_87435( "Not at dest...." );
                if (NOT l_U3814)
                {
                    l_U3814 = 1;
                }
                sub_35105( ref l_U384[0], 0 );
                sub_63947( ref l_U384[0], 15.00000000, 22.00000000, 1, 0 );
                if (l_U3818)
                {
                    sub_87435( "Checking for cam..." );
                    if (NOT (IS_CAR_DEAD( l_U3463 )))
                    {
                        if (IS_CHAR_IN_CAR( sub_3101(), l_U3463 ))
                        {
                            sub_33680( ref l_U384[0] );
                        }
                        else
                        {
                            sub_3812();
                        }
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT l_U3684)
        {
            if (l_U3514)
            {
                l_U3684 = 1;
            }
        }
        if ((NOT l_U3823) || (NOT l_U3821))
        {
            l_U3823 = 1;
            l_U3821 = 1;
        }
        uVar2[0] = {l_U975[0]};
        uVar2[1] = {l_U975[1]};
        uVar2[2] = {l_U975[2]};
        uVar2[3] = {l_U975[3]};
        uVar2[4] = {l_U975[25]};
        uVar2[5] = {l_U975[4]};
        if (sub_69788( ref uVar2, 5, 5, 0, 1 ))
        {
            sub_71906( ref l_U2626[0] );
            l_U2626[0]._fU72 = {-2012.12800000, -370.55400000, 3.33890000};
            l_U2626[0]._fU84 = 19;
            l_U2626[0]._fU4 = 1;
            l_U3812 = 3;
        }
        break;
        case 2:
        uVar2[0] = {l_U975[0]};
        uVar2[1] = {l_U975[1]};
        uVar2[2] = {l_U975[2]};
        uVar2[3] = {l_U975[3]};
        uVar2[4] = {l_U975[25]};
        uVar2[5] = {l_U975[4]};
        if (sub_69788( ref uVar2, 6, 6, 0, 1 ))
        {
            sub_71906( ref l_U2626[0] );
            l_U2626[0]._fU72 = {-2012.02700000, -367.53970000, 3.33890000};
            l_U2626[0]._fU84 = 19;
            l_U2626[0]._fU4 = 1;
            l_U3825 = 1;
            l_U3812 = 3;
        }
        break;
        case 3:
        if (sub_75044( 0 ))
        {
            sub_86409( 1 );
            l_U3829 = 0;
            l_U3826 = 1;
            l_U3841 = 0;
            sub_2961( 1 );
            l_U3823 = 0;
            l_U3684 = 0;
            sub_71906( ref l_U2626[0] );
            l_U3815 = 0;
            GET_GAME_TIMER( ref l_U3858 );
            l_U3816 = 1;
            l_U3817 = 1;
            if (NOT (IS_CAR_DEAD( l_U3336 )))
            {
                if (NOT (LOCATE_CAR_3D( l_U3336, l_U3867._fU0, l_U3867._fU4, l_U3867._fU8, 1.50000000, 1.50000000, 3.00000000, 0 )))
                {
                    SET_CAR_COORDINATES( l_U3336, l_U3867._fU0, l_U3867._fU4, l_U3867._fU8 );
                    SET_CAR_HEADING( l_U3336, l_U3870 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U3336 );
                }
                SET_CAR_ON_GROUND_PROPERLY( l_U3336 );
                if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U3335 );
                    TASK_ENTER_CAR_AS_DRIVER( 0, l_U3336, 100000 );
                    TASK_LOOK_AT_CHAR( 0, sub_3101(), -2, 0 );
                    CLOSE_SEQUENCE_TASK( l_U3335 );
                    TASK_PERFORM_SEQUENCE( l_U384[0]._fU0, l_U3335 );
                    CLEAR_SEQUENCE_TASK( l_U3335 );
                }
            }
            else
            {
                SCRIPT_ASSERT( "Billy's bike is dead!" );
            }
            l_U3812 = 4;
        }
        else if (l_U2626[0]._fU84 != 23)
        {
            uVar2[0] = {l_U975[7]};
            uVar2[1] = {l_U975[24]};
            uVar2[2] = {l_U975[36]};
            uVar2[3] = {l_U975[6]};
            uVar2[4] = {l_U975[23]};
            if (sub_69788( ref uVar2, 5, 5, 0, 1 ))
            {
                sub_71906( ref l_U2626[0] );
                l_U2626[0]._fU72 = {-2035.77600000, -390.62570000, 3.36570000};
                l_U2626[0]._fU84 = 23;
                l_U2626[0]._fU4 = 1;
                l_U3825 = 1;
            }
        }
        break;
        case 4:
        if (NOT l_U3827)
        {
            GET_GAME_TIMER( ref l_U3862 );
            if (sub_34978( l_U3861, 2000 ))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_32666( "E1B3_DEAD", ref l_U3401, 6, 1 );
                    l_U3827 = 1;
                }
            }
        }
        else if (NOT l_U3854)
        {
            if (NOT (sub_40108( l_U3401 )))
            {
                STOP_PED_SPEAKING( sub_3101(), 0 );
                SAY_AMBIENT_SPEECH( sub_3101(), "JOHNNY_CURSE_BILLY_UNDER_BREATH", 1, 0, 1 );
                STOP_PED_SPEAKING( sub_3101(), 1 );
                GET_GAME_TIMER( ref l_U3866 );
                l_U3854 = 1;
            }
        }
        if (NOT (IS_CAR_DEAD( l_U3336 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
            {
                if (IS_CHAR_IN_CAR( l_U384[0]._fU0, l_U3336 ))
                {
                    if (NOT l_U3828)
                    {
                        SET_CAR_ON_GROUND_PROPERLY( l_U3336 );
                        l_U3828 = 1;
                    }
                    l_U3826 = 0;
                    if (NOT (IS_CAR_DEAD( l_U3463 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 30.00000000, 30.00000000, 12.00000000, 0 ))
                        {
                            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U370 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( -480360297 );
                            CLEAR_THIS_PRINT( "B3_MBIL1" );
                            FREEZE_CAR_POSITION( l_U3336, 0 );
                            sub_31977( ref l_U384[0], -1256.55300000, -530.93300000, 1.82670000, 0 );
                            APPLY_FORCE_TO_CAR( l_U384[0]._fU4, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                            GET_GAME_TIMER( ref l_U3865 );
                            l_U3516 = 1;
                            l_U3840 = 1;
                            sub_32666( "E1B3_COME", ref l_U3437, 6, 1 );
                            if (NOT l_U3827)
                            {
                                l_U3827 = 1;
                            }
                            l_U3830 = 1;
                            l_U3855 = 1;
                            l_U3854 = 0;
                            l_U3817 = 0;
                            l_U3812 = 5;
                        }
                    }
                }
            }
        }
        break;
        case 5:
        if ((NOT l_U3873) AND ((NOT (sub_68169( ref l_U384[0], 1082130432 ))) AND (NOT (sub_68261( ref l_U384[0] )))))
        {
            sub_87435( "Not reached" );
            if (NOT l_U3873)
            {
                if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U384[0]._fU0, -1966.97600000, -319.77870000, 3.15300000, 15.00000000, 9.00000000, 2.00000000, 0 ))
                    {
                        if (sub_34978( l_U3865, 60000 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U384[0]._fU4 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U384[0]._fU0, l_U384[0]._fU4 )))
                                {
                                    WARP_CHAR_INTO_CAR( l_U384[0]._fU0, l_U384[0]._fU4 );
                                }
                                SET_CHAR_COORDINATES( l_U384[0]._fU0, -1256.69500000, -518.06910000, 2.74630000 );
                                SET_CHAR_HEADING( l_U384[0]._fU0, 184.78410000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U384[0]._fU4 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U384[1]._fU0 )))
                            {
                                if (NOT (IS_CAR_DEAD( l_U384[1]._fU4 )))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( l_U384[1]._fU0, l_U384[1]._fU4 )))
                                    {
                                        WARP_CHAR_INTO_CAR( l_U384[1]._fU0, l_U384[1]._fU4 );
                                    }
                                    SET_CHAR_COORDINATES( l_U384[1]._fU0, -1248.28600000, -520.30910000, 2.86050000 );
                                    SET_CHAR_HEADING( l_U384[1]._fU0, 184.78410000 );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U384[1]._fU4 );
                                }
                            }
                            l_U3873 = 1;
                        }
                    }
                }
            }
            if (NOT l_U3874)
            {
                if (l_U3855)
                {
                    if (NOT (IS_CHAR_DEAD( l_U2626[4]._fU0 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U2626[4]._fU0 ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U2626[4]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                            {
                                bVar508 = true;
                            }
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U2626[5]._fU0 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U2626[5]._fU0 ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U2626[5]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                            {
                                bVar508 = true;
                            }
                        }
                    }
                    if (bVar508)
                    {
                        TASK_LOOK_AT_CHAR( sub_3101(), l_U2626[5]._fU0, -2, 128 );
                        sub_32666( "E1B3_SEEYA", ref l_U3876, 6, 1 );
                        l_U3874 = 1;
                    }
                }
            }
            else if (NOT l_U3875)
            {
                if (NOT (sub_40108( l_U3876 )))
                {
                    TASK_CLEAR_LOOK_AT( sub_3101() );
                    l_U3875 = 1;
                }
            }
            if (NOT l_U3822)
            {
                if (NOT (sub_40108( l_U3437 )))
                {
                    if (NOT (sub_40108( l_U3876 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
                            {
                                PRINT_NOW( "B3_FBIL1", 7500, 1 );
                                l_U3822 = 1;
                            }
                        }
                    }
                }
            }
            else if (NOT l_U3819)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_32666( "E1B3_NEXT", ref l_U3407, 6, 1 );
                    if (g_U38773 == 0)
                    {
                        sub_11173( ref l_U384[0], "E1B3_BL2V1", 0 );
                        g_U38773++;
                    }
                    else
                    {
                        sub_11173( ref l_U384[0], "E1B3_BL2V2", 0 );
                        g_U38773 = 0;
                    }
                    if (g_U38771 == 0)
                    {
                        sub_11173( ref l_U384[1], "E1B3_BR2V1", 0 );
                        g_U38771++;
                    }
                    else
                    {
                        sub_11173( ref l_U384[1], "E1B3_BR2V2", 0 );
                        g_U38771 = 0;
                    }
                    l_U3819 = 1;
                }
            }
            else if (NOT (sub_40108( l_U3407 )))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_58519( 0 );
                }
            };;;
            if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
            {
                sub_35105( ref l_U384[0], 0 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_90701( ref l_U384[0] ), -1970.71200000, -325.37520000, 1.96000000, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    sub_35072( ref l_U384[0], 7.00000000 );
                }
                else
                {
                    sub_63947( ref l_U384[0], 15.00000000, 28.00000000, 1, 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U3463 )))
                {
                    if (IS_CHAR_IN_CAR( sub_3101(), l_U3463 ))
                    {
                        sub_33680( ref l_U384[0] );
                    }
                    else
                    {
                        sub_3812();
                    }
                }
            }
        }
        else
        {
            sub_3812();
            sub_87154( 0, ref l_U384 );
            sub_58519( 1 );
            l_U3516 = 0;
            l_U3842 = 1;
            l_U3829 = 1;
            l_U2626[0]._fU4 = 1;
            l_U2626[0]._fU72 = {-1240.91400000, -553.39230000, 1.82820000};
            l_U2626[0]._fU84 = 33;
            l_U2626[0]._fU100 = l_U3389;
            l_U2626[0]._fU68 = 0;
            l_U3815 = 1;
            l_U3812 = 6;
        }
        break;
        case 6:
        if (l_U3515)
        {
            l_U3684 = 1;
        }
        uVar2[0] = {l_U975[13]};
        uVar2[1] = {l_U975[14]};
        uVar2[2] = {l_U975[15]};
        uVar2[3] = {l_U975[30]};
        if (sub_69788( ref uVar2, 4, 4, 0, 1 ))
        {
            sub_71906( ref l_U2626[0] );
            l_U2626[0]._fU72 = {-1228.51000000, -558.01810000, 2.00090000};
            l_U2626[0]._fU84 = 49;
            l_U2626[0]._fU4 = 1;
            l_U3812 = 7;
        }
        if (l_U3509)
        {
            if (NOT l_U3820)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_32666( "E1B3_ARRF", ref l_U3413, 6, 1 );
                    l_U3820 = 1;
                    l_U3823 = 1;
                }
            }
        }
        break;
        case 7:
        uVar2[0] = {l_U975[17]};
        uVar2[1] = {l_U975[18]};
        uVar2[2] = {l_U975[19]};
        uVar2[3] = {l_U975[28]};
        uVar2[4] = {l_U975[29]};
        uVar2[5] = {l_U975[33]};
        if (sub_69788( ref uVar2, 6, 6, 0, 1 ))
        {
            uVar2[0] = {l_U975[10]};
            if (NOT (sub_69788( ref uVar2, 1, 1, 0, 1 )))
            {
                sub_71906( ref l_U2626[0] );
                l_U2626[0]._fU72 = {-1250.18800000, -575.90060000, 1.83800000};
                l_U2626[0]._fU84 = 30;
                l_U2626[0]._fU4 = 1;
                l_U3812 = 8;
            }
            else
            {
                l_U3812 = 8;
            }
        }
        break;
        case 8:
        uVar2[0] = {l_U975[10]};
        if (sub_69788( ref uVar2, 1, 1, 0, 1 ))
        {
            sub_71906( ref l_U2626[0] );
            l_U2626[0]._fU72 = {-1200.41300000, -584.64970000, 1.83760000};
            l_U2626[0]._fU84 = 32;
            l_U2626[0]._fU4 = 1;
            l_U3812 = 9;
        }
        break;
        case 9:
        uVar2[0] = {l_U975[16]};
        if (sub_69788( ref uVar2, 1, 1, 0, 1 ))
        {
            sub_71906( ref l_U2626[0] );
            l_U2626[0]._fU72 = {-1196.93500000, -614.65480000, 1.83760000};
            l_U2626[0]._fU84 = 31;
            l_U2626[0]._fU4 = 1;
            l_U3812 = 10;
        }
        break;
        case 11:
        uVar2[0] = {l_U975[17]};
        uVar2[1] = {l_U975[18]};
        uVar2[2] = {l_U975[19]};
        uVar2[3] = {l_U975[28]};
        uVar2[4] = {l_U975[29]};
        uVar2[5] = {l_U975[33]};
        if (sub_69788( ref uVar2, 6, 6, 0, 1 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2626[0]._fU0 )))
            {
                REMOVE_CHAR_FROM_GROUP( l_U2626[0]._fU0 );
                sub_71906( ref l_U2626[0] );
                SET_GROUP_MEMBER( sub_48124(), l_U384[0]._fU0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2626[0]._fU0, 0 );
                l_U3815 = 0;
                l_U3812 = 10;
            }
        }
        break;
        case 10:
        if (sub_75044( 2 ))
        {
            l_U3684 = 0;
            l_U3842 = 0;
            sub_86409( 1 );
            l_U3829 = 0;
            if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
            {
                SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U384[0]._fU0, 1 );
            }
            l_U3823 = 0;
            l_U3815 = 0;
            GET_GAME_TIMER( ref l_U3863 );
            sub_92223();
            l_U3813 = 1;
            REQUEST_MODEL( -2093454526 );
            REQUEST_ANIMS( "MISSBILLY_3" );
            l_U3812 = 13;
        }
        break;
        case 13:
        if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
        {
            if (NOT l_U3832)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U384[0]._fU0, -1252.02000000, -531.40500000, 1.94370000, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    SET_CURRENT_CHAR_WEAPON( l_U384[0]._fU0, 0, 1 );
                    l_U3832 = 1;
                }
                else if (NOT l_U3852)
                {
                    if (l_U3853)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_32666( "E1B3_DEAD", ref l_U3443, 6, 1 );
                            l_U3852 = 1;
                        }
                    }
                }
                else if (NOT l_U3854)
                {
                    if (NOT (sub_40108( l_U3443 )))
                    {
                        STOP_PED_SPEAKING( sub_3101(), 0 );
                        SAY_AMBIENT_SPEECH( sub_3101(), "JOHNNY_CURSE_BILLY_UNDER_BREATH", 1, 0, 1 );
                        STOP_PED_SPEAKING( sub_3101(), 1 );
                        l_U3854 = 1;
                    }
                };;;
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( l_U384[0]._fU0, -1252.02000000, -531.40500000, 1.94370000, 5.00000000, 5.00000000, 5.00000000, 0 ))
            {
                if (l_U3833)
                {
                    l_U3833 = 0;
                }
                if (NOT l_U3839)
                {
                    if (HAS_MODEL_LOADED( -2093454526 ))
                    {
                        CREATE_OBJECT( -2093454526, -1231.21700000, -542.70890000, 2.93580000, ref l_U3714, 1 );
                        ATTACH_OBJECT_TO_PED( l_U3714, l_U384[0]._fU0, 1232, 0.09500000, 0.01500000, 0.08000000, 3.10000000, 354.90000000, 101.10000000, 0 );
                        l_U3839 = 1;
                    }
                }
                if (NOT l_U3831)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U384[0]._fU0, sub_3101(), 50.00000000, 50.00000000, 25.00000000, 0 ))
                    {
                        sub_32666( "E1B3_AFTER", ref l_U3419, 6, 1 );
                        l_U3831 = 1;
                    }
                }
                else if (NOT (sub_40108( l_U3419 )))
                {
                    if (l_U3839)
                    {
                        if (HAVE_ANIMS_LOADED( "MISSBILLY_3" ))
                        {
                            if (sub_78388( l_U384[0]._fU0, 1, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar506 );
                                TASK_PLAY_ANIM( 0, "Drink_idle_A", "MISSBILLY_3", 8.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( 0, "Drink_idle_B", "MISSBILLY_3", 8.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( 0, "Drink_idle_C", "MISSBILLY_3", 8.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM( 0, "Drink_idle_D", "MISSBILLY_3", 8.00000000, 0, 0, 0, 0, 0 );
                                SET_SEQUENCE_TO_REPEAT( uVar506, 1 );
                                CLOSE_SEQUENCE_TASK( uVar506 );
                                if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U384[0]._fU0, uVar506 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar506 );
                            }
                        }
                    }
                }
            }
            else if (NOT l_U3833)
            {
                sub_92223();
                l_U3833 = 1;
            };;;
        }
        break;
        case 14: break;
    }
    if (l_U3815)
    {
        sub_77605();
    }
    array(ref iVar509, 3);
    if (l_U3826)
    {
        if (NOT l_U3517)
        {
            if (NOT (IS_CAR_DEAD( l_U384[0]._fU4 )))
            {
                GET_CAR_COORDINATES( l_U384[0]._fU4, ref uVar498[0]._fU0, ref uVar498[0]._fU4, ref uVar498[0]._fU8 );
            }
            if (NOT iVar509[0])
            {
                if (sub_93680( l_U384[0]._fU4, 279.21190000 ))
                {
                    sub_87435( "Flipped bike 0" );
                }
            }
            if (NOT iVar509[1])
            {
                if (sub_93680( l_U384[1]._fU4, 268.21190000 ))
                {
                    iVar509[1] = 1;
                }
            }
            if (NOT iVar509[2])
            {
                if (sub_93680( l_U384[14]._fU4, 271.21190000 ))
                {
                    iVar509[2] = 1;
                }
            }
        }
        if (NOT l_U3871)
        {
            if (NOT (IS_CAR_DEAD( l_U384[14]._fU4 )))
            {
                GET_CAR_COORDINATES( l_U384[14]._fU4, ref uVar498[0]._fU0, ref uVar498[0]._fU4, ref uVar498[0]._fU8 );
                if (NOT (IS_CAR_DEAD( l_U384[1]._fU4 )))
                {
                    GET_CAR_COORDINATES( l_U384[1]._fU4, ref uVar498[1]._fU0, ref uVar498[1]._fU4, ref uVar498[1]._fU8 );
                    if (NOT (IS_CAR_ON_SCREEN( l_U384[1]._fU4 )))
                    {
                        if (NOT (IS_CAR_ON_SCREEN( l_U384[14]._fU4 )))
                        {
                            if (NOT l_U3517)
                            {
                                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar498[0]._fU0, uVar498[0]._fU4, uVar498[0]._fU8, 1.50000000, 1.50000000, 1.50000000 )))
                                {
                                    SET_CAR_COORDINATES( l_U384[1]._fU4, uVar498[0]._fU0, uVar498[0]._fU4, uVar498[0]._fU8 );
                                }
                                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar498[1]._fU0, uVar498[1]._fU4, uVar498[1]._fU8, 1.50000000, 1.50000000, 1.50000000 )))
                                {
                                    SET_CAR_COORDINATES( l_U384[14]._fU4, uVar498[1]._fU0, uVar498[1]._fU4, uVar498[1]._fU8 );
                                }
                                SET_CAR_ON_GROUND_PROPERLY( l_U384[14]._fU4 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U384[1]._fU4 );
                                l_U3871 = 1;
                            }
                            else
                            {
                                l_U3871 = 1;
                            }
                            if (NOT (IS_CAR_DEAD( l_U3463 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
                                {
                                    sub_87435( "Moving player's bike...." );
                                    SET_CAR_ON_GROUND_PROPERLY( l_U3463 );
                                }
                            }
                        }
                    }
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U384[15]._fU4 ))
        {
            if (NOT (IS_CAR_DEAD( l_U384[15]._fU4 )))
            {
                if (NOT (IS_CAR_ON_SCREEN( l_U384[15]._fU4 )))
                {
                    DELETE_CAR( ref l_U384[15]._fU4 );
                }
            }
        }
        if (DOES_VEHICLE_EXIST( l_U384[16]._fU4 ))
        {
            if (NOT (IS_CAR_DEAD( l_U384[16]._fU4 )))
            {
                if (NOT (IS_CAR_ON_SCREEN( l_U384[16]._fU4 )))
                {
                    DELETE_CAR( ref l_U384[16]._fU4 );
                }
            }
        }
    }
    if (l_U3823)
    {
        if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U384[1]._fU0 )))
            {
                if ((NOT (sub_40108( l_U3443 ))) AND ((NOT (sub_40108( l_U3797 ))) AND ((NOT (sub_40108( l_U3431 ))) AND ((NOT (sub_40108( l_U3425 ))) AND ((NOT (sub_40108( l_U3413 ))) AND (NOT (sub_40108( l_U3395 ))))))))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (l_U3821)
                        {
                            if (NOT l_U3825)
                            {
                                if (NOT l_U3824)
                                {
                                    GET_GAME_TIMER( ref l_U3860 );
                                    l_U3824 = 1;
                                }
                                else if (sub_34978( l_U3860, 5000 ))
                                {
                                    switch (l_U3856)
                                    {
                                        case 0:
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 ))
                                        {
                                            sub_32666( "E1B3_FIGHT1", ref l_U3425, 6, 1 );
                                            l_U3824 = 0;
                                        }
                                        break;
                                        case 1:
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[1]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 ))
                                        {
                                            sub_32666( "E1B3_FIGHT2", ref l_U3425, 6, 1 );
                                            l_U3824 = 0;
                                        }
                                        break;
                                        case 2:
                                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U384[0]._fU0, l_U384[1]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )))
                                        {
                                            sub_32666( "E1B3_FIGHT2", ref l_U3425, 6, 1 );
                                            l_U3824 = 0;
                                        }
                                        break;
                                        case 3:
                                        if ((NOT l_U3843[2]) AND (l_U3842))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[1]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 ))
                                            {
                                                sub_32666( "E1B3_CHAT2", ref l_U3425, 6, 1 );
                                                l_U3824 = 0;
                                                l_U3843[2] = 1;
                                            }
                                        }
                                        break;
                                        case 4:
                                        if ((NOT l_U3843[3]) AND (l_U3841))
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U384[0]._fU0, l_U384[1]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )))
                                            {
                                                sub_32666( "E1B3_CHAT3", ref l_U3425, 6, 1 );
                                                l_U3824 = 0;
                                                l_U3843[3] = 1;
                                            }
                                        }
                                        break;
                                        case 5:
                                        if ((NOT l_U3843[5]) AND (l_U3841))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[1]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 ))
                                            {
                                                sub_32666( "E1B3_CHAT5", ref l_U3425, 6, 1 );
                                                l_U3824 = 0;
                                                l_U3843[5] = 1;
                                            }
                                        }
                                        break;
                                        case 6:
                                        if ((NOT l_U3843[4]) AND (l_U3842))
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U384[0]._fU0, l_U384[1]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )))
                                            {
                                                sub_32666( "E1B3_CHAT4", ref l_U3425, 6, 1 );
                                                l_U3824 = 0;
                                                l_U3843[4] = 1;
                                            }
                                        }
                                        break;
                                        case 7:
                                        if ((NOT l_U3843[1]) AND (l_U3841))
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U384[0]._fU0, l_U384[1]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 35.00000000, 35.00000000, 35.00000000, 0 )))
                                            {
                                                sub_32666( "E1B3_CHAT", ref l_U3425, 6, 1 );
                                                l_U3824 = 0;
                                                l_U3843[1] = 1;
                                            }
                                        }
                                        break;
                                        case 8:
                                        if (l_U3841)
                                        {
                                            sub_32666( "E1B3_GRP1", ref l_U3443, 6, 1 );
                                            l_U3824 = 0;
                                        }
                                        else if (l_U3842)
                                        {
                                            sub_32666( "E1B3_GRP2", ref l_U3443, 6, 1 );
                                            l_U3824 = 0;
                                        }
                                        break;
                                    }
                                    l_U3856++;
                                    if (l_U3856 > 8)
                                    {
                                        l_U3856 = 0;
                                    }
                                }
                            }
                            else
                            {
                                switch (l_U3857)
                                {
                                    case 0:
                                    sub_32666( "E1B3_MORE", ref l_U3431, 6, 1 );
                                    break;
                                    case 1:
                                    sub_32666( "E1B3_MORE2", ref l_U3431, 6, 1 );
                                    break;
                                }
                                l_U3857++;
                                if (l_U3857 > 1)
                                {
                                    l_U3857 = 0;
                                }
                                l_U3825 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U3817)
    {
        if (l_U3816)
        {
            GET_GAME_TIMER( ref l_U3859 );
            if ((l_U3859 - l_U3858) > 60000)
            {
                if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U3336 )))
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U384[0]._fU0, l_U3336 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3336 )))
                            {
                                GET_DRIVER_OF_CAR( l_U3336, ref iVar505 );
                                if (iVar505 != nil)
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( iVar505, -1252.05700000, -520.50020000, 1.86840000 );
                                }
                                WARP_CHAR_INTO_CAR( l_U384[0]._fU0, l_U3336 );
                                l_U3817 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U3830)
    {
        if ((NOT l_U3836[1]) || (NOT l_U3836[0]))
        {
            if (NOT l_U3836[0])
            {
                if (sub_96402( -1958.68700000, -324.60590000, 3.04420000, 1 ))
                {
                    l_U3836[0] = 1;
                }
            }
            if (NOT l_U3836[1])
            {
                if (sub_96402( -1951.93600000, -320.82220000, 3.15910000, 1 ))
                {
                    l_U3836[1] = 1;
                }
            }
        }
        else
        {
            l_U3830 = 0;
        }
    }
    if (l_U3829)
    {
        sub_86409( 0 );
    }
    return;
}

void sub_86409(boolean bParam0)
{
    int I;

    for ( I = 0; I < l_U2626; I++ )
    {
        if (NOT (DOES_BLIP_EXIST( l_U3272[I] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U2626[I]._fU0 )))
            {
                if (NOT l_U2626[I]._fU104)
                {
                    if (NOT bParam0)
                    {
                        if (I > 0)
                        {
                            ADD_BLIP_FOR_CHAR( l_U2626[I]._fU0, ref l_U3272[I] );
                            if (DOES_BLIP_EXIST( l_U3272[I] ))
                            {
                                CHANGE_BLIP_COLOUR( l_U3272[I], 3 );
                                CHANGE_BLIP_SCALE( l_U3272[I], 0.50000000 );
                                CHANGE_BLIP_DISPLAY( l_U3272[I], 5 );
                                if (I > 0)
                                {
                                    CHANGE_BLIP_PRIORITY( l_U3272[I], 0 );
                                }
                            }
                        }
                    }
                }
            }
        }
        else if ((bParam0) || (((NOT l_U2626[I]._fU108) AND (l_U2626[I]._fU104)) || (IS_CHAR_INJURED( l_U2626[I]._fU0 ))))
        {
            if ((I != 14) AND (I > 1))
            {
                REMOVE_BLIP( l_U3272[I] );
                REMOVE_BLIP( l_U384[I]._fU100 );
            }
            else if (IS_CHAR_INJURED( l_U2626[14]._fU0 ))
            {
                REMOVE_BLIP( l_U3272[14] );
                REMOVE_BLIP( l_U384[14]._fU100 );
            }
        }
    }
    if (NOT (DOES_BLIP_EXIST( l_U3272[0] )))
    {
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U384[0]._fU100 )))
            {
                ADD_BLIP_FOR_CHAR( l_U384[0]._fU0, ref l_U384[0]._fU100 );
                CHANGE_BLIP_COLOUR( l_U384[0]._fU100, 3 );
                CHANGE_BLIP_SCALE( l_U384[0]._fU100, 0.50000000 );
                CHANGE_BLIP_DISPLAY( l_U384[0]._fU100, 5 );
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
    {
        REMOVE_BLIP( l_U384[0]._fU100 );
    }
    return;
}

void sub_87154(unknown uParam0, unknown uParam1)
{
    int I;

    sub_40613( ref l_U143, uParam0 );
    for ( I = 0; I < (uParam1^); I++ )
    {
        sub_40599( ref (uParam1^)[I] );
    }
    return;
}

void sub_87435(unknown uParam0)
{
    return;
}

void sub_90701(int iParam0)
{
    return iParam0->_fU0;
}

void sub_92223()
{
    unknown uVar2;

    if (NOT (IS_CAR_DEAD( l_U3336 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U384[0]._fU0, l_U3336 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1252.02000000, -531.40500000, 1.94370000, 3, -1, 1.50000000 );
                TASK_ACHIEVE_HEADING( 0, 356.65810000 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                CLEAR_CHAR_TASKS( l_U384[0]._fU0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U384[0]._fU0, 1 );
                SET_CHAR_DECISION_MAKER( l_U384[0]._fU0, l_U3392 );
                TASK_PERFORM_SEQUENCE( l_U384[0]._fU0, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
        }
        else
        {
            SCRIPT_ASSERT( "Billy dead" );
        }
    }
    else
    {
        SCRIPT_ASSERT( "Billy bike dead" );
    }
    return;
}

int sub_93680(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( uParam0 )))
        {
            SET_CAR_HEADING( uParam0, uParam1 );
            SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            return 1;
        }
    }
    return 0;
}

int sub_96402(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            return 1;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        return 1;
    }
    return 0;
}

void sub_96614()
{
    unknown uVar2;

    sub_78616( l_U4095, "get_to_second_prog..." );
    if (NOT l_U3449)
    {
        if (DOES_BLIP_EXIST( l_U3464 ))
        {
            GET_GAME_TIMER( ref l_U3862 );
            if (l_U3854)
            {
                if (sub_34978( l_U3866, 1500 ))
                {
                    if (NOT (sub_40108( l_U3401 )))
                    {
                        PRINT_NOW( "B3_ONBK", 7500, 1 );
                        l_U3449 = 1;
                    }
                }
            }
        }
    }
    switch (l_U4095)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (NOT (sub_96842( ref l_U3463 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U3464 )))
                {
                    ADD_BLIP_FOR_CAR( l_U3463, ref l_U3464 );
                    CHANGE_BLIP_COLOUR( l_U3464, 3 );
                    l_U3510 = 0;
                }
                if (l_U3840)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), l_U375._fU0, l_U375._fU4, l_U375._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
                    {
                        if (NOT l_U3685)
                        {
                            l_U3685 = 1;
                            l_U3510 = 0;
                            l_U3509 = 0;
                        }
                        l_U4095 = 4;
                    }
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), l_U372._fU0, l_U372._fU4, l_U372._fU8, 75.00000000, 75.00000000, 75.00000000, 0 )))
                    {
                        l_U3685 = 1;
                    }
                }
            }
            else if (NOT l_U3685)
            {
                l_U3685 = 1;
                l_U3510 = 0;
            }
            l_U3509 = 0;
            RESET_STUCK_TIMER( l_U3463, 3 );
            RESET_STUCK_TIMER( l_U3463, 2 );
            RESET_STUCK_TIMER( l_U3463, 1 );
            CLEAR_THIS_PRINT( "B3_ONBK" );
            if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
            {
                if ((NOT l_U3830) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 30.00000000, 30.00000000, 12.00000000, 0 ))))
                {
                    PRINT_NOW( "B3_MBIL1", 7500, 1 );
                }
            }
            if (NOT l_U3635)
            {
                l_U3636 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U3636, "B3_ITS_WAR_DISTANT_GUNFIRE", 64283, 64955, 13 );
                l_U3635 = 1;
            }
            l_U4095 = 4;;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            ;
        }
        break;
        case 2: break;
        case 3: break;
        case 4:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), l_U375._fU0, l_U375._fU4, l_U375._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
        {
            l_U3515 = 1;
            SET_PED_IS_BLIND_RAGING( sub_3101(), 1 );
            sub_63653();
            STOP_SOUND( l_U3636 );
            if (DOES_BLIP_EXIST( l_U382 ))
            {
                REMOVE_BLIP( l_U382 );
            }
            if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
            {
                REMOVE_BLIP( l_U384[0]._fU100 );
            }
            if (NOT (IS_CAR_DEAD( l_U3463 )))
            {
                if ((LOCATE_CAR_3D( l_U3463, l_U372._fU0, l_U372._fU4, l_U372._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )) || (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
                {
                    if (DOES_BLIP_EXIST( l_U3464 ))
                    {
                        REMOVE_BLIP( l_U3464 );
                    }
                    l_U3509 = 1;
                    l_U3510 = 1;
                }
                else
                {
                    l_U3510 = 0;
                    l_U3509 = 0;
                }
            }
            GET_GAME_TIMER( ref l_U3892 );
            l_U362 = 6;
        }
        else if (sub_59273( ref l_U384[0], 6.00000000, 3 ))
        {
            ;
        }
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U3464 )))
                {
                    if (NOT l_U4096)
                    {
                        PRINT_NOW( "B3_ONBK", 7500, 1 );
                        l_U4096 = 1;
                    }
                    REMOVE_BLIP( l_U384[0]._fU100 );
                    ADD_BLIP_FOR_CAR( l_U3463, ref l_U3464 );
                    CHANGE_BLIP_COLOUR( l_U3464, 3 );
                }
            }
            else if (NOT l_U4098)
            {
                if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
                {
                    REMOVE_BLIP( l_U384[0]._fU100 );
                    l_U4098 = 1;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U384[0]._fU100 )))
            {
                CLEAR_THIS_PRINT( "B3_ONBK" );
                if (DOES_BLIP_EXIST( l_U3464 ))
                {
                    REMOVE_BLIP( l_U3464 );
                }
                if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U384[0]._fU0, ref l_U384[0]._fU100 );
                    CHANGE_BLIP_COLOUR( l_U384[0]._fU100, 3 );
                }
            }
            sub_67911();;
        }
        break;
    }
    sub_77605();
    sub_83764();
    sub_85358();
    return;
}

int sub_96842(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( l_U3463 ))
    {
        if (IS_CHAR_IN_CAR( sub_3101(), l_U3463 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_98192()
{
    int I;
    unknown[15] uVar3;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    unknown uVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;
    unknown uVar396;
    unknown uVar397;
    unknown uVar398;
    unknown uVar399;
    unknown uVar400;
    unknown uVar401;
    unknown uVar402;
    unknown uVar403;
    unknown uVar404;
    unknown uVar405;
    unknown uVar406;
    unknown uVar407;
    unknown uVar408;
    unknown uVar409;
    unknown uVar410;
    unknown uVar411;
    unknown uVar412;
    unknown uVar413;
    unknown uVar414;
    unknown uVar415;
    unknown uVar416;
    unknown uVar417;
    unknown uVar418;
    unknown uVar419;
    unknown uVar420;
    unknown uVar421;
    unknown uVar422;
    unknown uVar423;
    unknown uVar424;
    unknown uVar425;
    unknown uVar426;
    unknown uVar427;
    unknown uVar428;
    unknown uVar429;
    unknown uVar430;
    unknown uVar431;
    unknown uVar432;
    unknown uVar433;
    unknown uVar434;
    unknown uVar435;
    unknown uVar436;
    unknown uVar437;
    unknown uVar438;
    unknown uVar439;
    unknown uVar440;
    unknown uVar441;
    unknown uVar442;
    unknown uVar443;
    unknown uVar444;
    unknown uVar445;
    unknown uVar446;
    unknown uVar447;
    unknown uVar448;
    unknown uVar449;
    unknown uVar450;
    unknown uVar451;
    unknown uVar452;
    unknown uVar453;
    unknown uVar454;
    unknown uVar455;
    unknown uVar456;
    unknown uVar457;
    unknown uVar458;
    unknown uVar459;
    unknown uVar460;
    unknown uVar461;
    unknown uVar462;
    unknown uVar463;
    unknown uVar464;
    unknown uVar465;
    unknown uVar466;
    unknown uVar467;
    unknown uVar468;
    unknown uVar469;
    unknown uVar470;
    unknown uVar471;
    unknown uVar472;
    unknown uVar473;
    unknown uVar474;
    unknown uVar475;
    unknown uVar476;
    unknown uVar477;
    unknown uVar478;
    unknown uVar479;
    unknown uVar480;
    unknown uVar481;
    unknown uVar482;
    unknown uVar483;
    unknown uVar484;
    unknown uVar485;
    unknown uVar486;
    unknown uVar487;
    unknown uVar488;
    unknown uVar489;
    unknown uVar490;
    unknown uVar491;
    unknown uVar492;
    unknown uVar493;
    unknown uVar494;
    unknown uVar495;
    unknown uVar496;
    unknown uVar497;
    unknown uVar498;
    unknown uVar499;

    array(ref uVar3, 15);
    if (NOT l_U3509)
    {
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (IS_CHAR_IN_CAR( sub_3101(), l_U3463 ))
            {
                if (DOES_BLIP_EXIST( l_U3464 ))
                {
                    REMOVE_BLIP( l_U3464 );
                    if (NOT (DOES_BLIP_EXIST( l_U384[0]._fU100 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U384[0]._fU0, ref l_U384[0]._fU100 );
                            CHANGE_BLIP_COLOUR( l_U384[0]._fU100, 3 );
                        }
                    }
                }
                if (LOCATE_CHAR_IN_CAR_3D( sub_3101(), l_U375._fU0, l_U375._fU4, l_U375._fU8, 75.00000000, 75.00000000, 75.00000000, 0 ))
                {
                    l_U3509 = 1;
                    l_U3510 = 1;
                    l_U3823 = 1;
                    if (DOES_BLIP_EXIST( l_U384[0]._fU100 ))
                    {
                        REMOVE_BLIP( l_U384[0]._fU100 );
                    }
                    sub_68859();
                    if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3101(), l_U384[0]._fU0, 100.00000000, 100.00000000, 100.00000000, 0 ))
                        {
                            l_U3821 = 1;
                        }
                    }
                }
            }
        }
    }
    else if (NOT l_U3897)
    {
        if (l_U3819)
        {
            if (NOT (sub_40108( l_U3413 )))
            {
                GET_GAME_TIMER( ref l_U3893 );
                if ((l_U3893 - l_U3892) > 2000)
                {
                    PRINT_NOW( "B3_KANGELS", 7500, 1 );
                    l_U3897 = 1;
                }
            }
        }
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3101() )))
    {
        l_U3685 = 0;
    }
    switch (l_U3900)
    {
        case 0:
        ADD_COVER_POINT( -1291.71500000, -602.63750000, 1.83700000, 0, 296.07580000, 3, 0, ref l_U3465[18] );
        ADD_COVER_POINT( -1292.24900000, -601.49210000, 1.83700000, 1, 292.74570000, 3, 0, ref l_U3465[19] );
        ADD_COVER_POINT( -1185.12700000, -663.76680000, 2.42950000, 3, 0.00000000, 3, 0, ref l_U3465[20] );
        CREATE_OBJECT_NO_OFFSET( -109692574, -1193.06300000, -646.55770000, 1.83760000, ref l_U3291[9], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -1253.95300000, -566.53310000, 1.83800000, ref l_U3291[10], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -1265.30300000, -588.16940000, 1.88000000, ref l_U3291[11], 1 );
        CREATE_OBJECT_NO_OFFSET( -109692574, -1208.43900000, -559.98890000, 1.83800000, ref l_U3291[12], 1 );
        SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U3291[9], 1 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1277.50900000, -582.38600000, 1.89180000, 90.00000000, 0.00000000, 0.00000000, ref l_U3498[5] );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1191.44800000, -556.82740000, 2.25130000, 90.00000000, 0.00000000, 0.00000000, ref l_U3498[6] );
        CREATE_OBJECT_NO_OFFSET( 2142893183, -1237.65400000, -577.07090000, 2.59800000, ref l_U3307[2], 1 );
        SET_OBJECT_HEADING( l_U3307[2], 341.00000000 );
        CREATE_OBJECT_NO_OFFSET( 2142893183, -1225.73400000, -576.19960000, 2.59800000, ref l_U3307[3], 1 );
        SET_OBJECT_HEADING( l_U3307[3], 197.20000000 );
        CREATE_OBJECT_NO_OFFSET( 2142893183, -1197.57500000, -616.37240000, 2.59800000, ref l_U3307[4], 1 );
        SET_OBJECT_HEADING( l_U3307[4], 251.40000000 );
        CREATE_OBJECT_NO_OFFSET( 2142893183, -1183.11100000, -625.76930000, 2.59800000, ref l_U3307[5], 1 );
        SET_OBJECT_HEADING( l_U3307[5], 180.00000000 );
        REQUEST_MODEL( l_U371 );
        while (NOT (HAS_MODEL_LOADED( l_U371 )))
        {
            WAIT( 0 );
        }
        sub_9225( 13 );
        sub_9225( 14 );
        sub_9225( 15 );
        sub_9225( 16 );
        sub_9225( 17 );
        sub_9225( 19 );
        sub_9225( 20 );
        sub_68859();
        l_U3524[4]._fU0 = 1;
        l_U3524[5]._fU0 = 1;
        l_U3524[7]._fU0 = 1;
        l_U3524[8]._fU0 = 1;
        l_U3524[9]._fU0 = 1;
        l_U3882 = 1;
        l_U3899 = 1;
        l_U3900 = 1;
        break;
        case 1:
        l_U2626[7]._fU4 = 1;
        l_U2626[8]._fU4 = 1;
        l_U2626[9]._fU4 = 1;
        l_U2626[10]._fU4 = 1;
        l_U2626[11]._fU4 = 1;
        if (NOT l_U3903[12])
        {
            l_U2626[12]._fU4 = 1;
        }
        if (NOT l_U3903[13])
        {
            l_U2626[13]._fU4 = 1;
        }
        l_U975[9]._fU4 = 1;
        l_U975[10]._fU4 = 1;
        l_U975[11]._fU4 = 1;
        l_U975[12]._fU4 = 1;
        l_U975[13]._fU4 = 1;
        l_U975[16]._fU4 = 1;
        l_U975[17]._fU4 = 1;
        l_U975[20]._fU4 = 1;
        l_U975[21]._fU4 = 1;
        l_U975[28]._fU4 = 1;
        l_U975[29]._fU4 = 1;
        l_U975[30]._fU4 = 1;
        l_U975[33]._fU4 = 1;
        l_U975[37]._fU4 = 1;
        if (NOT l_U975[14]._fU4)
        {
            if (sub_99847())
            {
                if (sub_69988( -1252.35800000, -587.97060000, 2.86670000, 2.00000000 ))
                {
                    l_U975[14]._fU4 = 1;
                    l_U975[15]._fU4 = 1;
                }
            }
        }
        if (NOT l_U975[22]._fU4)
        {
            uVar3[0] = {l_U975[20]};
            if ((sub_69788( ref uVar3, 1, 1, 1, 1 )) || ((sub_69988( -1198.92800000, -650.53860000, 1.83760000, 2.00000000 )) AND (sub_100086())))
            {
                l_U975[22]._fU4 = 1;
            }
        }
        if (NOT l_U2626[7]._fU104)
        {
            uVar3[0] = {l_U975[10]};
            if (sub_69788( ref uVar3, 1, 1, 0, 1 ))
            {
                sub_71906( ref l_U2626[7] );
                l_U2626[7]._fU72 = {-1209.60200000, -527.39460000, 1.86370000};
                l_U2626[7]._fU104 = 1;
                l_U2626[7]._fU4 = 1;
                sub_71906( ref l_U2626[8] );
                l_U2626[8]._fU72 = {-1200.68400000, -524.89170000, 1.93290000};
                l_U2626[8]._fU104 = 1;
                l_U2626[8]._fU4 = 1;
                l_U3884 = 1;
            }
        }
        if (NOT l_U975[19]._fU4)
        {
            uVar3[0] = {l_U975[33]};
            if ((sub_69788( ref uVar3, 1, 1, 0, 1 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1232.44200000, -574.17660000, 2.84300000, 6.00000000, 17.00000000, 6.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1232.11900000, -625.50880000, 12.25300000, 4.00000000, 71.00000000, 12.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1206.31400000, -619.24610000, 12.25300000, 22.00000000, 73.00000000, 12.00000000, 0 )))))
            {
                sub_9225( 18 );
                sub_68859();
                l_U975[18]._fU4 = 1;
                l_U975[19]._fU4 = 1;
            }
        }
        if (NOT l_U3806)
        {
            uVar3[0] = {l_U975[20]};
            uVar3[1] = {l_U975[21]};
            uVar3[2] = {l_U975[22]};
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1158.16200000, -601.72370000, 3.00610000, 5.00000000, 5.00000000, 5.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1206.23300000, -637.28360000, 12.25300000, 34.00000000, 39.00000000, 12.00000000, 0 )) || (sub_69788( ref uVar3, 3, 3, 0, 1 ))))
            {
                sub_9225( 21 );
                sub_68859();
                START_PLAYBACK_RECORDED_CAR( l_U3690[4], 454 );
                l_U3806 = 1;
            }
        }
        else if (NOT l_U975[31]._fU4)
        {
            if (NOT (IS_CAR_DEAD( l_U3690[4] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U3690[4] )))
                {
                    l_U975[31]._fU4 = 1;
                    l_U975[32]._fU4 = 1;
                }
            }
        }
        if (NOT l_U2626[9]._fU104)
        {
            uVar3[0] = {l_U975[16]};
            uVar3[1] = {l_U975[17]};
            uVar3[2] = {l_U975[18]};
            uVar3[3] = {l_U975[19]};
            if (sub_69788( ref uVar3, 4, 4, 0, 1 ))
            {
                sub_71906( ref l_U2626[9] );
                l_U2626[9]._fU72 = {-1118.13200000, -527.62050000, 1.85380000};
                l_U2626[9]._fU104 = 1;
                l_U2626[9]._fU4 = 1;
                sub_71906( ref l_U2626[10] );
                l_U2626[10]._fU72 = {-1106.26500000, -524.98400000, 1.93410000};
                l_U2626[10]._fU104 = 1;
                l_U2626[10]._fU4 = 1;
                sub_71906( ref l_U2626[11] );
                l_U2626[11]._fU72 = {-1085.14400000, -524.41100000, 1.92300000};
                l_U2626[11]._fU104 = 1;
                l_U2626[11]._fU4 = 1;
                l_U3884 = 1;
            }
        }
        if (NOT l_U2626[12]._fU104)
        {
            if (NOT l_U3903[12])
            {
                uVar3[0] = {l_U975[20]};
                uVar3[1] = {l_U975[21]};
                uVar3[2] = {l_U975[22]};
                uVar3[3] = {l_U975[31]};
                uVar3[4] = {l_U975[32]};
                if (((l_U3806) AND (sub_69788( ref uVar3, 5, 5, 0, 0 ))) AND (sub_69788( ref uVar3, 3, 3, 0, 1 )))
                {
                    sub_71906( ref l_U2626[12] );
                    if (NOT (IS_CHAR_INJURED( l_U2626[12]._fU0 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U384[12]._fU4 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2626[12]._fU0, 1 );
                            OPEN_SEQUENCE_TASK( ref uVar499 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1185.52800000, -633.63710000, 1.83840000, 3, -2, 0.50000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1248.89300000, -550.81160000, 1.80570000, 3, -2, 0.50000000 );
                            CLOSE_SEQUENCE_TASK( uVar499 );
                            TASK_PERFORM_SEQUENCE( l_U2626[12]._fU0, uVar499 );
                            CLEAR_SEQUENCE_TASK( uVar499 );
                        }
                    }
                    l_U3903[12] = 1;
                    sub_71906( ref l_U2626[13] );
                    if (NOT (IS_CHAR_INJURED( l_U2626[13]._fU0 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U384[13]._fU4 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar499 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1185.52800000, -633.63710000, 1.83840000, 3, -2, 0.50000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1248.89300000, -550.81160000, 1.80570000, 3, -2, 0.50000000 );
                            CLOSE_SEQUENCE_TASK( uVar499 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2626[13]._fU0, 1 );
                            TASK_PERFORM_SEQUENCE( l_U2626[13]._fU0, uVar499 );
                            CLEAR_SEQUENCE_TASK( uVar499 );
                        }
                    }
                    l_U3903[13] = 1;
                }
            }
            else if ((sub_78388( l_U2626[13]._fU0, 1, 0 )) AND (sub_78388( l_U2626[12]._fU0, 1, 0 )))
            {
                l_U2626[12]._fU104 = 1;
                l_U975[12]._fU4 = 1;
                l_U2626[13]._fU104 = 1;
                l_U975[13]._fU4 = 1;
            }
        }
        uVar3[0] = {l_U975[9]};
        uVar3[1] = {l_U975[10]};
        uVar3[2] = {l_U975[11]};
        uVar3[3] = {l_U975[12]};
        uVar3[4] = {l_U975[13]};
        uVar3[5] = {l_U975[14]};
        uVar3[6] = {l_U975[15]};
        uVar3[7] = {l_U975[16]};
        uVar3[8] = {l_U975[17]};
        uVar3[9] = {l_U975[18]};
        uVar3[10] = {l_U975[19]};
        uVar3[11] = {l_U975[20]};
        uVar3[12] = {l_U975[21]};
        uVar3[13] = {l_U975[22]};
        if (sub_75044( 2 ))
        {
            l_U3882 = 0;
            l_U3899 = 0;
            for ( I = 0; I < l_U2626; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U2626[I]._fU0 )))
                {
                    if (l_U2626[I]._fU108)
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U2626[I]._fU0 );
                        sub_14079( ref l_U384[I], l_U384[0]._fU0 );
                        l_U2626[I]._fU108 = 0;
                        l_U2626[I]._fU112._fU0 = 1;
                        l_U2626[I]._fU112._fU16 = 6;
                        l_U2626[I]._fU68 = 1;
                    }
                }
            }
            SET_PED_IS_BLIND_RAGING( sub_3101(), 0 );
            l_U3835 = 1;
            GET_GAME_TIMER( ref l_U3864 );
            l_U362 = 7;
            l_U3900 = 2;
            GET_GAME_TIMER( ref l_U3894 );
        }
        if (l_U3521 < l_U3522)
        {
            for ( I = 0; I < l_U384; I++ )
            {
                if (l_U3521 < l_U3522)
                {
                    if (l_U2626[I]._fU104)
                    {
                        if ((I != 13) AND (I != 12))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U2626[I]._fU0 )))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U2626[I]._fU0 );
                                SET_CHAR_HEALTH( l_U2626[I]._fU0, 200 );
                                SET_GROUP_SEPARATION_RANGE( sub_48124(), 200.00000000 );
                                SET_GROUP_MEMBER( sub_48124(), l_U2626[I]._fU0 );
                                SET_CHAR_DECISION_MAKER( l_U2626[I]._fU0, l_U3393 );
                                l_U2626[I]._fU108 = 1;
                                l_U3521++;
                                l_U3519 = 1;
                                if (IS_GROUP_MEMBER( l_U2626[I]._fU0, sub_48124() ))
                                {
                                    sub_87435( "Group member!" );
                                }
                                else
                                {
                                    sub_87435( "Not a group member" );
                                }
                            }
                        }
                    }
                }
            }
        }
        if (l_U3519)
        {
            if (NOT l_U3520)
            {
                for ( I = 0; I < l_U2626; I++ )
                {
                    if (l_U2626[I]._fU108)
                    {
                        if (IS_VEH_DRIVEABLE( l_U384[I]._fU4 ))
                        {
                            if (NOT (IS_CAR_ON_SCREEN( l_U384[I]._fU4 )))
                            {
                                if (NOT (sub_69988( -1255.46300000, -513.95750000, 1.88530000, 2.00000000 )))
                                {
                                    SET_CAR_COORDINATES( l_U384[I]._fU4, -1255.46300000, -513.95750000, 1.88530000 );
                                    SET_CAR_HEADING( l_U384[I]._fU4, 118.14210000 );
                                    l_U3520 = 1;
                                }
                            }
                        }
                        else if (NOT (sub_69988( -1255.46300000, -513.95750000, 1.88530000, 2.00000000 )))
                        {
                            l_U384[I]._fU4 = sub_23349( -1255.46300000, -513.95750000, 1.88530000, 118.14210000 );
                            l_U3520 = 1;
                        }
                    }
                }
            }
        }
        break;
        case 2: break;
    }
    if (NOT (IS_CHAR_DEAD( l_U2626[7]._fU0 )))
    {
        if (IS_GROUP_MEMBER( l_U2626[7]._fU0, sub_48124() ))
        {
            l_U3902 = 1;
        }
        else
        {
            l_U3902 = 0;
        }
    }
    for ( I = 0; I < l_U384; I++ )
    {
        if (l_U2626[I]._fU68)
        {
            if (NOT (IS_CHAR_INJURED( l_U384[I]._fU0 )))
            {
                sub_35105( ref l_U384[I], 0 );
            }
        }
    }
    if (l_U3899)
    {
        uVar3[0] = {l_U2626[7]};
        uVar3[1] = {l_U2626[8]};
        uVar3[2] = {l_U2626[11]};
        uVar3[3] = {l_U2626[12]};
        uVar3[4] = {l_U2626[13]};
        sub_76735( ref uVar3, 5, 15972646 );
    }
    sub_77605();
    sub_82848();
    sub_83764();
    if (l_U3510)
    {
        sub_85221();
    }
    sub_85358();
    return;
}

void sub_99847()
{
    if (NOT l_U3688)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1252.72900000, -546.61320000, 2.94980000, 22.00000000, 2.00000000, 30.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1253.71500000, -544.83230000, 2.93050000, 9.00000000, 32.00000000, 100.00000000, 0 )))
        {
            l_U3688 = 1;
        }
    }
    return l_U3688;
}

void sub_100086()
{
    if (NOT l_U3689)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1158.16500000, -602.49820000, 3.00610000, 3.00000000, 3.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1198.08900000, -591.84470000, 2.84260000, 11.00000000, 3.00000000, 20.00000000, 0 )))
        {
            l_U3689 = 1;
        }
    }
    return l_U3689;
}

void sub_103696()
{
    if (NOT l_U3853)
    {
        if (DOES_BLIP_EXIST( l_U3464 ))
        {
            if (l_U3835)
            {
                if (sub_34978( l_U3864, 2000 ))
                {
                    if (NOT (sub_40108( l_U3419 )))
                    {
                        PRINT_NOW( "B3_ONBK", 4000, 1 );
                        l_U3853 = 1;
                    }
                }
            }
        }
    }
    sub_78616( l_U4092, "back_to_club_prog..." );
    switch (l_U4092)
    {
        case 0:
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U3464 )))
                {
                    ADD_BLIP_FOR_CAR( l_U3463, ref l_U3464 );
                    CHANGE_BLIP_COLOUR( l_U3464, 3 );
                }
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3101(), l_U3463, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    l_U4092 = 3;
                    l_U362 = 8;
                }
            }
            else
            {
                l_U4092 = 3;
                l_U362 = 8;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            if (NOT (IS_CAR_DEAD( l_U3336 )))
            {
                if ((l_U4093) || ((l_U3813) || (LOCATE_CHAR_ANY_MEANS_3D( l_U384[0]._fU0, -1252.02000000, -531.40500000, 1.94370000, 15.00000000, 15.00000000, 15.00000000, 0 ))))
                {
                    if (DOES_BLIP_EXIST( l_U3464 ))
                    {
                        REMOVE_BLIP( l_U3464 );
                        ADD_BLIP_FOR_CHAR( l_U384[0]._fU0, ref l_U384[0]._fU100 );
                    }
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U384[0]._fU0, sub_3101(), 40.00000000, 40.00000000, 40.00000000, 0 ))
                    {
                        l_U4092 = 3;
                        l_U362 = 8;
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U3464 )))
                {
                    REMOVE_BLIP( l_U383 );
                    ADD_BLIP_FOR_CAR( l_U3463, ref l_U3464 );
                    CHANGE_BLIP_COLOUR( l_U3464, 3 );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U383 )))
            {
                if (DOES_BLIP_EXIST( l_U3464 ))
                {
                    CLEAR_THIS_PRINT( "B3_ONBK" );
                    REMOVE_BLIP( l_U3464 );
                    ADD_BLIP_FOR_COORD( l_U378._fU0, l_U378._fU4, l_U378._fU8, ref l_U383 );
                    SET_ROUTE( l_U383, 1 );
                }
            }
            else if (LOCATE_CHAR_IN_CAR_3D( sub_3101(), l_U378._fU0, l_U378._fU4, l_U378._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                sub_104532();
                l_U4092 = 3;
            };;;
        }
        break;
    }
    if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
    {
        ;
    }
    if (NOT (IS_CHAR_INJURED( l_U384[1]._fU0 )))
    {
        sub_35105( ref l_U384[1], 0 );
    }
    sub_77605();
    sub_85358();
    return;
}

void sub_104532()
{
    g_U24 = 82;
    sub_104547();
    sub_104556();
    sub_106464();
    CLEAR_WANTED_LEVEL( sub_5967() );
    DONT_SUPPRESS_CAR_MODEL( sub_6153() );
    DONT_SUPPRESS_CAR_MODEL( l_U370 );
    DONT_SUPPRESS_CAR_MODEL( l_U371 );
    DONT_SUPPRESS_CAR_MODEL( sub_7131( 0 ) );
    DONT_SUPPRESS_CAR_MODEL( sub_7131( 13 ) );
    DONT_SUPPRESS_CAR_MODEL( sub_7369() );
    UNLOCK_MISSION_NEWS_STORY( 72 );
    sub_113319( 17 );
    sub_2931();
    return;
}

void sub_104547()
{
    sub_104556();
    return;
}

void sub_104556()
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
        sub_104622();
        sub_104707();
        sub_105025();
    }
    bVar3 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U39058[I]._fU4)
        {
            g_U39058[I]._fU4 = 0;
            g_U39058[I]._fU12++;
            g_U39058[I]._fU20 = -2;
            if (sub_106263( g_U39058[I]._fU16 ))
            {
                g_U39104 = 1;
            }
            if (sub_106353( g_U39058[I]._fU16 ))
            {
                g_U39105 = 1;
            }
            bVar3 = true;
        }
    }
    return;
}

void sub_104622()
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

void sub_104707()
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

void sub_105025()
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
            sub_105190( iVar11 );
            sub_105612( iVar11 );
            bVar9 = true;
        }
        if (NOT bVar9)
        {
            iVar12++;
        }
    }
    return;
}

void sub_105190(unknown uParam0)
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
    sub_105274( iVar3, uVar4, uVar5 );
    return;
}

void sub_105274(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_105612(unknown uParam0)
{
    unknown uVar3;

    g_U38937[uParam0]._fU0 = 1;
    g_U38937[uParam0]._fU4 = 0;
    g_U38937[uParam0]._fU12 = 1;
    g_U38937[uParam0]._fU16 = sub_105663();
    uVar3 = g_U38937[uParam0]._fU24;
    g_U38937[uParam0]._fU24 = -1;
    sub_105852( uVar3 );
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

void sub_105663()
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

void sub_105852(int iParam0)
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

int sub_106263(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_16295( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Terry" ))
    {
        return 1;
    }
    return 0;
}

int sub_106353(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    uVar3 = {sub_16295( uParam0 )};
    uVar7 = GET_STRING_FROM_TEXT_FILE( ref uVar3 );
    if (COMPARE_STRING( uVar7, "Clay" ))
    {
        return 1;
    }
    return 0;
}

void sub_106464()
{
    sub_106473();
    return;
}

void sub_106473()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_106491();
    sub_106550( iVar2, iVar3, iVar4 );
    return;
}

void sub_106491()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_106550(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_106582( iVar5, uParam0, uParam1, uParam2, "Contact_1" );
    return;
}

void sub_106582(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_106678( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_106678( ref cVar9 );
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
            sub_106678( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_106678( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_106678( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_106678( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_107255( uParam0, iVar7 );;;
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
    if (NOT (sub_107703( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_5967() );
    sub_1930();
    bVar28 = true;
    uVar29 = sub_107255( uParam0, iVar7 );
    uVar30 = sub_1554( uParam0 );
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
                sub_112157( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_112591();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_112676( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_112755( uParam0 );
                sub_112794( 0 );
                sub_1830( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_112983();
        }
    }
    if (bParam2)
    {
        sub_112591();
        sub_113082();
        sub_112794( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_112591();
        sub_113134();
        sub_112794( 0 );
        sub_1830( uVar30, 0 );
    }
    sub_1441();
    return;
}

void sub_106678(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_107255(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1785( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_107703(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_107799( uParam1 );
        break;
        case 1:
        bVar8 = sub_108494( uParam1 );
        break;
        case 2:
        bVar8 = sub_109227( uParam1 );
        break;
        case 3:
        bVar8 = sub_109464( uParam1 );
        break;
        case 4:
        bVar8 = sub_109630( uParam1 );
        break;
        case 5:
        bVar8 = sub_109829( uParam1 );
        break;
        case 6:
        bVar8 = sub_110024( uParam1 );
        break;
        case 7:
        bVar8 = sub_110229( uParam1 );
        break;
        case 8:
        bVar8 = sub_110434( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_108842( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_107255( uParam0, uParam1 );
    if (bParam3)
    {
        sub_110720( uVar9, uParam0 );
    }
    return 1;
}

int sub_107799(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_107896( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_107896( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_107896( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_107896( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_107896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_107896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_108401( "Contact 1", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Contact 1", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_107896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_107907( uParam1 );
    sub_108081( uParam0, 0, uParam2 );
    sub_108081( uParam0, 1, uParam3 );
    sub_108081( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_106491();
    return;
}

void sub_107907(unknown uParam0)
{
    ADD_SCORE( sub_5967(), uParam0 );
    sub_107932( uParam0 );
    return;
}

void sub_107932(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1785( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_108081(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_108401(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_108494(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_107896( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_107896( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_107896( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_107896( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_107896( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_107896( iVar3, 0, sub_108720(), sub_108986(), 0, 0 );
        break;
        default:
        sub_108401( "Contact 2", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Contact 2", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_108720()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_108842( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_108842(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_108986()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_108842( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_109227(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_107896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_107896( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_107896( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_107896( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_108401( "Contact 3", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Contact 3", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109464(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_107896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_107896( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_108401( "Friend 4", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Friend 4", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109630(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_107896( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_107896( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_107896( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_108401( "Contact 5", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Contact 5", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_109829(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_107896( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_107896( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_107896( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_108401( "Contact 6", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Contact 6", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_110024(unknown uParam0)
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
        sub_107896( iVar3, 0, sub_108720(), sub_108986(), 0, 0 );
        break;
        default:
        sub_108401( "Friend 7", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Friend 7", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_110229(unknown uParam0)
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
        sub_107896( iVar3, 0, sub_108720(), sub_108986(), 0, 0 );
        break;
        default:
        sub_108401( "Friend 8", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Friend 8", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_110434(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_107896( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_108401( "Contact 9", 1 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_108401( "Contact 9", 0 );
        sub_107896( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_110720(int iParam0, int iParam1)
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
    if (sub_110781( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_111499( iParam1 );
    }
    return;
}

int sub_110781(int iParam0, int iParam1)
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
            sub_110921( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_110921(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_111091( 0 );
    return;
}

void sub_111091(boolean bParam0)
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
        sub_111336();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_111336()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_111499(int iParam0)
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
        sub_111730( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_111730( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_111730( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_111730( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_111730( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_111730( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_111730(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_112157(unknown uParam0, unknown uParam1)
{
    sub_112176( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_112176(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_112591()
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

int sub_112676(int iParam0, int iParam1)
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

void sub_112755(unknown uParam0)
{
    sub_1302();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_112794(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_112845( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_112845(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_112983()
{
    sub_112992();
    return;
}

void sub_112992()
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

void sub_113082()
{
    sub_112992();
    return;
}

void sub_113134()
{
    sub_112992();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_113319(int iParam0)
{
    if (iParam0 >= g_U1455)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_113406( iParam0 ))
    {
        sub_114456( iParam0 );
    }
    return;
}

int sub_113406(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1455[uParam0], 21 )) || (IS_BIT_SET( g_U1455[uParam0], 20 )))
    {
        return 0;
    }
    sub_113463( ref uVar3, 1, 0, 0 );
    sub_114075( uVar3, ref g_U1455[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1455[uParam0], 22, 31, g_U1455[0] );
    g_U1455[0]++;
    SET_BIT( ref g_U1455[uParam0], 20 );
    sub_32840( "\n ----------------------------------------------------------------" );
    sub_4834( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_32840( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_113463(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_113516( iParam0, uParam1, uParam2 );
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
        sub_113648( iParam0 + 0 );
    }
    return;
}

void sub_113516(int iParam0, int iParam1, int iParam2)
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
        sub_113648( iParam0 + 0 );
    }
    return;
}

void sub_113648(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_113679( iParam0->_fU4 )))
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

int sub_113679(unknown uParam0)
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

void sub_114075(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_114456(unknown uParam0)
{
    return;
}

int sub_114587()
{
    int I;
    float fVar3;

    fVar3 = 2500.00000000;
    switch (l_U3711)
    {
        case 0:
        l_U3679 = 0;
        l_U3680 = 0;
        l_U3683 = 0;
        l_U3686 = 0;
        l_U3681 = 0;
        l_U3682 = 0;
        l_U3513 = 0;
        l_U3518 = 0;
        if (DOES_BLIP_EXIST( l_U3464 ))
        {
            REMOVE_BLIP( l_U3464 );
        }
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_5967(), 0 );
        CLEAR_WANTED_LEVEL( sub_5967() );
        CLEAR_PRINTS();
        if (DOES_OBJECT_EXIST( l_U3714 ))
        {
            DETACH_OBJECT( l_U3714, 1 );
            DELETE_OBJECT( ref l_U3714 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -2093454526 );
        }
        for ( I = 0; I < l_U384; I++ )
        {
            sub_114878( ref l_U384[I], 1 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6348( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6348( 13 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_7131( 0 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_7131( 13 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_7369() );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6153() );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3221( 1 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3221( 2 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3221( 3 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U364 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U365 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U366 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U367 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U370 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U371 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -109692574 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -657414365 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 203767144 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -480360297 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2142893183 );
        sub_115376();
        while (NOT (sub_15152( 1, -1242.27200000, -533.56870000, 1.87710000, 0.00000000, ref l_U3717[0] )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_17421( ref l_U3717[0]._fU4, -1247.85400000, -535.35130000, 1.80560000, 127.25890000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U3717[0]._fU0 )))
        {
            WARP_CHAR_INTO_CAR( l_U3717[0]._fU0, l_U3717[0]._fU4 );
            SET_CAR_IN_CUTSCENE( l_U3717[0]._fU4, 1 );
            SET_CHAR_IN_CUTSCENE( l_U3717[0]._fU0, 1 );
            SET_CAR_ENGINE_ON( l_U3717[0]._fU4, 0, 0 );
        }
        WAIT( 1000 );
        while (NOT (sub_15152( 2, -1240.70200000, -537.45660000, 1.91870000, 0.00000000, ref l_U3717[1] )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_17421( ref l_U3717[1]._fU4, -1250.37300000, -531.84300000, 1.91140000, 162.68520000 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U3717[1]._fU0 )))
        {
            WARP_CHAR_INTO_CAR( l_U3717[1]._fU0, l_U3717[1]._fU4 );
            SET_CAR_IN_CUTSCENE( l_U3717[1]._fU4, 1 );
            SET_CHAR_IN_CUTSCENE( l_U3717[1]._fU0, 1 );
            SET_CAR_ENGINE_ON( l_U3717[1]._fU4, 0, 0 );
        }
        LOAD_ADDITIONAL_TEXT( "E1B3AUD", 6 );
        START_CUTSCENE_NOW( "BG03_ZA" );
        l_U3711 = 1;
        break;
        case 1:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "BG03_ZA" );
            l_U3711 = 2;
        }
        break;
        case 2:
        sub_114878( ref l_U3717[0], 1 );
        sub_114878( ref l_U3717[1], 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3221( 1 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_3221( 2 ) );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6153() );
        REQUEST_CAR_RECORDING( 471 );
        REQUEST_CAR_RECORDING( 472 );
        REQUEST_CAR_RECORDING( 473 );
        REQUEST_CAR_RECORDING( 474 );
        REQUEST_CAR_RECORDING( 475 );
        REQUEST_MODEL( -408052231 );
        while ((NOT (HAS_MODEL_LOADED( -408052231 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 475 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 474 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 473 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 472 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 471 ))))))))
        {
            WAIT( 0 );
        }
        CLEAR_AREA( -1227.33300000, -524.18460000, 1.94680000, 50, 0 );
        while (NOT (sub_11802( 0, -1227.33300000, -524.18460000, 1.94680000, 270.60000000, ref l_U384[0] )))
        {
            WAIT( 0 );
        }
        while (NOT (sub_11802( 13, -1231.52800000, -527.34800000, 1.86510000, 269.93850000, ref l_U384[1] )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U3463 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
            {
                WARP_CHAR_INTO_CAR( sub_3101(), l_U3463 );
            }
            SET_CAR_COORDINATES( l_U3463, -1251.67200000, -544.44000000, 1.96680000 );
            SET_CAR_HEADING( l_U3463, 5.71600000 );
        }
        sub_11887( -1232.10200000, -522.08180000, 2.40230000, 271.96190000, sub_18470(), -408052231, ref l_U384[2], 1 );
        sub_11887( -1238.00300000, -527.32460000, 2.35910000, 269.54460000, sub_18470(), -408052231, ref l_U384[3], 1 );
        sub_11887( -1238.20400000, -522.08690000, 2.40260000, 272.49530000, sub_18470(), -408052231, ref l_U384[4], 1 );
        if (NOT (IS_CAR_DEAD( l_U384[0]._fU4 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U384[0]._fU4, 471 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U384[0]._fU4, fVar3 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[1]._fU4 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U384[1]._fU4, 472 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U384[1]._fU4, fVar3 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[2]._fU4 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U384[2]._fU4, 473 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U384[2]._fU4, fVar3 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[3]._fU4 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U384[3]._fU4, 474 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U384[3]._fU4, fVar3 );
        }
        if (NOT (IS_CAR_DEAD( l_U384[4]._fU4 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U384[4]._fU4, 475 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U384[4]._fU4, fVar3 );
        }
        SET_GAME_CAM_HEADING( 315.00000000 );
        SET_PLAYER_CONTROL( sub_5967(), 1 );
        DO_SCREEN_FADE_IN( 500 );
        l_U3711 = 3;
        break;
        case 3:
        if (NOT l_U3716)
        {
            if (IS_SCREEN_FADED_IN())
            {
                l_U3716 = 1;
                STOP_PED_SPEAKING( sub_3101(), 0 );
                SAY_AMBIENT_SPEECH( sub_3101(), "JOHNNY_CURSE_BILLY_UNDER_BREATH", 1, 0, 1 );
                STOP_PED_SPEAKING( sub_3101(), 1 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U384[0]._fU0, -1216.69700000, -476.61190000, 2.94920000, 11.00000000, 1.00000000, 2.00000000, 0 ))
            {
                for ( I = 0; I < l_U384; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U384[I]._fU0 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U384[I]._fU4 )))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U384[I]._fU4 ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U384[I]._fU4 );
                                sub_114878( ref l_U384[I], 1 );
                            }
                        }
                    }
                }
                l_U3711 = 4;
            }
            else if (NOT l_U3715)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1236.24900000, -528.59820000, 2.80580000, 1.00000000, 22.00000000, 2.00000000, 0 ))
                {
                    for ( I = 0; I < l_U384; I++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U384[I]._fU4 )))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U384[I]._fU4 ))
                            {
                                SET_PLAYBACK_SPEED( l_U384[I]._fU4, 2.00000000 );
                            }
                        }
                    }
                    l_U3715 = 1;
                }
            }
        }
        break;
        case 4:
        return 1;
        break;
    }
    return 0;
}

void sub_114878(int iParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((iParam0->_fU0 != sub_3101()) AND (DOES_CHAR_EXIST( iParam0->_fU0 )))
    {
        DELETE_CHAR( iParam0 + 0 );
    }
    if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
    {
        if (bParam1)
        {
            iVar4 = nil;
            if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref iVar4 );
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

void sub_115376()
{
    int I;
    unknown uVar3;

    for ( I = 0; I < 5; I++ )
    {
        uVar3 = sub_36223( I );
        if (HAVE_ANIMS_LOADED( uVar3 ))
        {
            REMOVE_ANIMS( uVar3 );
        }
    }
    return;
}

int sub_117482()
{
    int iVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int[0] iVar7;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;

    iVar2 = 0;
    array(ref iVar7, 5);
    iVar7[0] = {l_U384[0]};
    iVar7[1] = {l_U384[1]};
    iVar7[2] = {l_U384[14]};
    iVar7[3] = {l_U384[15]};
    iVar7[4] = {l_U384[16]};
    for ( I = 0; I < iVar7; I++ )
    {
        if (NOT (IS_CHAR_DEAD( iVar7[I]._fU0 )))
        {
            SET_CHAR_PROOFS( iVar7[I]._fU0, 1, 1, 1, 1, 1 );
        }
    }
    switch (l_U3919)
    {
        case 0:
        sub_117682();
        CLEAR_PRINTS();
        sub_2961( 0 );
        sub_87154( 1, ref l_U384 );
        l_U3685 = 0;
        l_U3518 = 0;
        l_U3681 = 0;
        l_U3682 = 0;
        l_U3680 = 0;
        l_U3679 = 0;
        l_U3683 = 0;
        l_U3513 = 0;
        l_U3829 = 0;
        l_U3684 = 0;
        l_U3686 = 0;
        SWITCH_ROADS_OFF( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
        switch (l_U3678)
        {
            case 0:
            l_U3928 = "B3_FDBB";
            l_U3927 = "E1B3_BIKEB";
            l_U3926 = "E1B3_DROP2";
            sub_3812();
            break;
            case 1:
            l_U3927 = "E1B3_BIKEBR";
            l_U3926 = "E1B3_DROP3";
            l_U3928 = "B3_FDBRB";
            break;
            case 2:
            l_U3927 = "E1B3_BIKEJ";
            l_U3926 = "E1B3_DROP4";
            l_U3928 = "B3_FDJB";
            break;
            case 3:
            if (DOES_CHAR_EXIST( l_U384[0]._fU0 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                {
                    GET_CHAR_COORDINATES( l_U384[0]._fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                }
                else
                {
                    N_1363505769( l_U384[0]._fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), uVar4._fU0, uVar4._fU4, uVar4._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    l_U3929 = 0;
                }
            }
            l_U3927 = "E1B3_BDIES";
            l_U3926 = "E1B3_DROPBR";
            l_U3928 = "B3_FBLD";
            break;
            case 4:
            if (DOES_CHAR_EXIST( l_U384[1]._fU0 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U384[1]._fU0 )))
                {
                    GET_CHAR_COORDINATES( l_U384[1]._fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                }
                else
                {
                    N_1363505769( l_U384[1]._fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), uVar4._fU0, uVar4._fU4, uVar4._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    l_U3929 = 0;
                }
            }
            l_U3927 = "E1B3_BRDIES";
            l_U3926 = "E1B3_DROP1";
            l_U3928 = "B3_FBRD";
            break;
            case 5:
            l_U3927 = "E1B3_DUMP";
            l_U3926 = "E1B3_DROP5";
            l_U3928 = "B3_FABB";
            break;
        }
        if (l_U3929)
        {
            sub_32666( l_U3927, ref l_U3920, 6, 1 );
        }
        GET_GAME_TIMER( ref l_U3930 );
        l_U3919 = 1;
        break;
        case 1:
        if ((sub_34978( l_U3930, 10000 )) || (NOT (sub_40108( l_U3920 ))))
        {
            PRINT_NOW( l_U3928, 7000, 1 );
            l_U3919 = 2;
        }
        break;
        case 2:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            for ( I = 0; I < iVar7; I++ )
            {
                if (NOT (IS_CHAR_INJURED( iVar7[I]._fU0 )))
                {
                    iVar2++;
                }
            }
            if (iVar2 > 0)
            {
                l_U3919 = 3;
            }
            else
            {
                sub_119017();
            }
        }
        break;
        case 3:
        return 1;
        break;
    }
    return 0;
}

void sub_117682()
{
    int I;

    if (DOES_BLIP_EXIST( l_U381 ))
    {
        REMOVE_BLIP( l_U381 );
    }
    if (DOES_BLIP_EXIST( l_U382 ))
    {
        REMOVE_BLIP( l_U382 );
    }
    for ( I = 0; I < l_U975; I++ )
    {
        if (DOES_BLIP_EXIST( l_U3221[I] ))
        {
            REMOVE_BLIP( l_U3221[I] );
        }
    }
    for ( I = 0; I < l_U3272; I++ )
    {
        if (DOES_BLIP_EXIST( l_U3272[I] ))
        {
            REMOVE_BLIP( l_U3272[I] );
        }
    }
    for ( I = 0; I < l_U2626; I++ )
    {
        if (DOES_BLIP_EXIST( l_U384[I]._fU100 ))
        {
            REMOVE_BLIP( l_U384[I]._fU100 );
        }
    }
    if (DOES_BLIP_EXIST( l_U3464 ))
    {
        REMOVE_BLIP( l_U3464 );
    }
    return;
}

void sub_119017()
{
    sub_569();
    switch (l_U3678)
    {
        case 0: break;
        case 1: break;
        case 2: break;
        case 3: break;
        case 4: break;
        case 5: break;
        case 6:
        PRINT_NOW( "B3_FGEN", 7000, 1 );
        SCRIPT_ASSERT( "Place holder fail text called. Was F key pressed?" );
        break;
    }
    sub_578();
    sub_119219();
    sub_2931();
    return;
}

void sub_119219()
{
    sub_119228();
    return;
}

void sub_119228()
{
    int iVar2;

    iVar2 = 0;
    sub_119242( iVar2 );
    sub_1921( iVar2 );
    return;
}

void sub_119242(unknown uParam0)
{
    if (g_U12306[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_5967(), 150 );
    CLEAR_HELP();
    sub_780( uParam0 );
    return;
}

void sub_119373()
{
    unknown uVar2;
    int I;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    int iVar9;

    iVar4 = 0;
    if (NOT l_U3934)
    {
        if (NOT sub_119396())
        {
            l_U3934 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U3935) AND (l_U3931 > 0)))
    {
        if (sub_119396())
        {
            CLEAR_PRINTS();
            DISABLE_PAUSE_MENU( 1 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            DISABLE_PAUSE_MENU( 0 );
            sub_2961( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U3935 = 1;
            l_U3931 = 2;
        }
    }
    switch (l_U3931)
    {
        case 0:
        if (IS_PLAYER_CONTROL_ON( sub_5967() ))
        {
            if (sub_119691( 1, 0 ))
            {
                if (sub_5855())
                {
                    SET_PLAYER_CONTROL( sub_5967(), 0 );
                    if (IS_SCREEN_FADING_IN())
                    {
                        while (IS_SCREEN_FADING_IN())
                        {
                            WAIT( 0 );
                        }
                    }
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL( sub_5967(), 0 );
                    CLEAR_WANTED_LEVEL( sub_5967() );
                    CLEAR_PRINTS();
                    CLEAR_HELP();
                    sub_2961( 0 );
                    sub_87154( 0, ref l_U384 );
                    sub_115376();
                    sub_120279();
                    l_U3958[0] = {l_U384[0]};
                    l_U3958[1] = {l_U384[1]};
                    l_U3958[2] = {l_U384[14]};
                    l_U3958[3] = {l_U384[15]};
                    l_U3958[4] = {l_U384[16]};
                    l_U3637[0] = 0;
                    l_U3637[1] = 700;
                    l_U3637[2] = 400;
                    l_U3637[3] = 1300;
                    l_U3637[4] = 1000;
                    CLEAR_AREA( l_U3643[0]._fU0, l_U3643[0]._fU4, l_U3643[0]._fU8, 300, 1 );
                    EXTINGUISH_FIRE_AT_POINT( l_U3643[0]._fU0, l_U3643[0]._fU4, l_U3643[0]._fU8, 300 );
                    if ((NOT l_U3675) AND (IS_VEH_DRIVEABLE( l_U3463 )))
                    {
                        sub_87435( "Player's bike alive..." );
                        if (NOT (IS_CHAR_INJURED( sub_3101() )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3463 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_3101(), l_U3463 );
                            }
                            SET_CAR_COORDINATES( l_U3463, l_U3643[l_U3943]._fU0, l_U3643[l_U3943]._fU4, l_U3643[l_U3943]._fU8 );
                            SET_CAR_HEADING( l_U3463, l_U3662[l_U3943] );
                            SET_CAR_ON_GROUND_PROPERLY( l_U3463 );
                            APPLY_FORCE_TO_CAR( l_U3463, 1, 0, 0, -0.20000000, 0, 0, 0, 0, 1, 1, 0 );
                            l_U3943++;
                        }
                    }
                    else
                    {
                        l_U3936 = 1;
                        sub_87435( "Player's bike not alive..." );
                    }
                    for ( I = 0; I < l_U3958; I++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U3958[I]._fU4 ))
                        {
                            iVar4++;
                            SET_CAR_PROOFS( l_U3958[I]._fU4, 1, 1, 1, 1, 1 );
                        }
                    }
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3101() )))
                    {
                        SET_CHAR_COORDINATES( sub_3101(), 63818, 361, 26 );
                    }
                    iVar7 = -1;
                    for ( I = 0; I < l_U3958; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U3958[I]._fU0 )))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U3958[I]._fU0 );
                            sub_78616( I, "This ped not killed...." );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U3958[I]._fU0 );
                            if (IS_VEH_DRIVEABLE( l_U3958[0]._fU4 ))
                            {
                                sub_78616( I, "Billy's bike driveable before rep bikewhen i is..." );
                                GET_CAR_COORDINATES( l_U3958[0]._fU4, ref l_U3955._fU0, ref l_U3955._fU4, ref l_U3955._fU8 );
                                sub_123211( l_U3955, "Bill bike loc..." );
                            }
                            else
                            {
                                sub_78616( I, "Billy's bike not driveable before rep bike when i is..." );
                            }
                            if ((l_U3958[I]._fU4 == l_U3463) || (NOT (IS_VEH_DRIVEABLE( l_U3958[I]._fU4 ))))
                            {
                                if (I > 1)
                                {
                                    sub_78616( I, "Creating replacement bike for...." );
                                    sub_123438( I, I, l_U3643[l_U3943]._fU0, l_U3643[l_U3943]._fU4, l_U3643[l_U3943]._fU8 );
                                    l_U3958[I]._fU4 = l_U384[I]._fU4;
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U3958[0]._fU4 ))
                            {
                                sub_78616( I, "Billy's bike driveable when i is..." );
                                GET_CAR_COORDINATES( l_U3958[0]._fU4, ref l_U3955._fU0, ref l_U3955._fU4, ref l_U3955._fU8 );
                                sub_123211( l_U3955, "Bill bike loc..." );
                            }
                            else
                            {
                                sub_78616( I, "Billy's bike not driveable when i is..." );
                            }
                            if (IS_VEH_DRIVEABLE( l_U3958[I]._fU4 ))
                            {
                                sub_78616( I, "Using bike...." );
                                if (I == 0)
                                {
                                    GET_CAR_COORDINATES( l_U3958[I]._fU4, ref l_U3955._fU0, ref l_U3955._fU4, ref l_U3955._fU8 );
                                    sub_123211( l_U3955, "Bill bike loc..." );
                                }
                                if (NOT (IS_CHAR_IN_CAR( l_U3958[I]._fU0, l_U3958[I]._fU4 )))
                                {
                                    GET_DRIVER_OF_CAR( l_U3958[I]._fU4, ref iVar6 );
                                    if (iVar6 == nil)
                                    {
                                        WARP_CHAR_INTO_CAR( l_U3958[I]._fU0, l_U3958[I]._fU4 );
                                    }
                                }
                                sub_78616( I, "Putting bike...." );
                                sub_123211( l_U3643[l_U3943], "At pos...." );
                                SET_CAR_COORDINATES( l_U3958[I]._fU4, l_U3643[l_U3943]._fU0, l_U3643[l_U3943]._fU4, l_U3643[l_U3943]._fU8 );
                                SET_CAR_HEADING( l_U3958[I]._fU4, l_U3662[l_U3943] );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U3958[I]._fU0, 1 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U3958[I]._fU4 );
                                APPLY_FORCE_TO_CAR( l_U3958[I]._fU4, 1, 0, 0, -0.20000000, 0, 0, 0, 0, 1, 1, 0 );
                                if (NOT (IS_CHAR_DEAD( sub_3101() )))
                                {
                                    TASK_LOOK_AT_CHAR( l_U3958[I]._fU0, sub_3101(), -2, 0 );
                                }
                                if (l_U3943 == 1)
                                {
                                    iVar7 = I;
                                }
                                l_U3943++;
                            }
                            else
                            {
                                sub_78616( I, "This bike not driveable..." );
                                if (DOES_VEHICLE_EXIST( l_U3958[I]._fU4 ))
                                {
                                    ;
                                }
                            }
                        }
                        else if (DOES_CHAR_EXIST( l_U3958[I]._fU0 ))
                        {
                            DELETE_CHAR( ref l_U3958[I]._fU0 );
                        }
                        if (DOES_VEHICLE_EXIST( l_U3958[I]._fU4 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U3958[I]._fU4 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( sub_3101(), l_U3958[I]._fU4 )))
                                {
                                    DELETE_CAR( ref l_U3958[I]._fU4 );
                                }
                            }
                            else
                            {
                                DELETE_CAR( ref l_U3958[I]._fU4 );
                            }
                        }
                    }
                    for ( I = 0; I < l_U3958; I++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U3958[I]._fU4 )))
                        {
                            ;
                        }
                        else
                        {
                            sub_78616( I, "Repeat before load scene bike dead....." );
                        }
                    }
                    LOAD_SCENE( l_U3643[0]._fU0, l_U3643[0]._fU4, l_U3643[0]._fU8 );
                    for ( I = 0; I < l_U3958; I++ )
                    {
                        if (NOT (IS_CAR_DEAD( l_U3958[I]._fU4 )))
                        {
                            SET_CAR_ON_GROUND_PROPERLY( l_U3958[I]._fU4 );
                        }
                        else
                        {
                            sub_78616( I, "Repeat after load scene bike dead....." );
                        }
                    }
                    sub_87435( "Done bike on ground" );
                    iVar9 = -1;
                    if (NOT (IS_CHAR_DEAD( sub_3101() )))
                    {
                        if ((l_U3675) || (NOT (IS_VEH_DRIVEABLE( l_U3463 ))))
                        {
                            sub_87435( "Player's bike not driveable...." );
                            for ( I = 0; I < l_U3958; I++ )
                            {
                                if (NOT bVar8)
                                {
                                    if (IS_VEH_DRIVEABLE( l_U3958[I]._fU4 ))
                                    {
                                        sub_78616( I, "Warping player onto bike..." );
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U3958[I]._fU4, 0 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_3101(), l_U3958[I]._fU4, 0 );
                                            bVar8 = true;
                                            iVar9 = I;
                                        }
                                        else
                                        {
                                            sub_87435( "Car passenger seat not free...." );
                                        }
                                    }
                                }
                            }
                        }
                        if (iVar7 >= 0)
                        {
                            if (NOT (IS_CHAR_DEAD( l_U3958[iVar7]._fU0 )))
                            {
                                TASK_LOOK_AT_CHAR( sub_3101(), l_U3958[iVar7]._fU0, -2, 0 );
                            }
                        }
                    }
                    bVar8 = false;
                    if (NOT (IS_CHAR_DEAD( l_U3958[0]._fU0 )))
                    {
                        if (NOT (IS_VEH_DRIVEABLE( l_U3958[0]._fU4 )))
                        {
                            sub_87435( "Billy's bike not driveable" );
                            for ( I = 0; I < l_U3958; I++ )
                            {
                                if (NOT bVar8)
                                {
                                    if ((NOT l_U3675) AND (IS_VEH_DRIVEABLE( l_U3463 )))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U3463, 0 ))
                                        {
                                            sub_87435( "Warping Billy onto players bike..." );
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U3958[0]._fU0, l_U3463, 0 );
                                            bVar8 = true;
                                        }
                                    }
                                    if (NOT bVar8)
                                    {
                                        if ((I != iVar9) AND (IS_VEH_DRIVEABLE( l_U3958[I]._fU4 )))
                                        {
                                            sub_78616( I, "Warping Billy onto bike..." );
                                            if (IS_CAR_PASSENGER_SEAT_FREE( l_U3463, 0 ))
                                            {
                                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U3958[0]._fU0, l_U3463, 0 );
                                                bVar8 = true;
                                            }
                                            else
                                            {
                                                sub_87435( "Couldn't warp billy as passenger seat not free" );
                                            }
                                        }
                                    }
                                }
                            }
                            if (NOT bVar8)
                            {
                                sub_87435( "Couldn't find bike for billy!" );
                            }
                        }
                        if (iVar7 < 0)
                        {
                            SCRIPT_ASSERT( "biker_to_look_at is <0. Please tell DaveW" );
                        }
                        TASK_LOOK_AT_CHAR( sub_3101(), l_U3958[iVar7]._fU0, -2, 0 );
                    }
                    bVar8 = false;
                    if (NOT (IS_CHAR_DEAD( l_U3958[1]._fU0 )))
                    {
                        if (NOT (IS_VEH_DRIVEABLE( l_U3958[1]._fU4 )))
                        {
                            sub_87435( "Need a bike for brian...." );
                            for ( I = 0; I < l_U3958; I++ )
                            {
                                if (NOT bVar8)
                                {
                                    if ((NOT l_U3675) AND (IS_VEH_DRIVEABLE( l_U3463 )))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U3463, 0 ))
                                        {
                                            sub_87435( "Warping Brian onto players bike..." );
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U3958[1]._fU0, l_U3463, 0 );
                                            bVar8 = true;
                                        }
                                    }
                                    if (NOT bVar8)
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U3958[I]._fU4 ))
                                        {
                                            if (IS_CAR_PASSENGER_SEAT_FREE( l_U3958[I]._fU4, 0 ))
                                            {
                                                sub_78616( I, "Warping brian onto bike...." );
                                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U3958[1]._fU0, l_U3958[I]._fU4, 0 );
                                                bVar8 = true;
                                            }
                                        }
                                    }
                                }
                            }
                            if (NOT bVar8)
                            {
                                sub_87435( "Couldn't fin bike for Brian" );
                            }
                        }
                        if (iVar7 < 0)
                        {
                            SCRIPT_ASSERT( "biker_to_look_at is <0. Please tell DaveW" );
                        }
                        else
                        {
                            TASK_LOOK_AT_CHAR( sub_3101(), l_U3958[iVar7]._fU0, -2, 0 );
                        }
                    }
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                    SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                    WAIT( 1800 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    BEGIN_CAM_COMMANDS( ref l_U3450 );
                    if (NOT (DOES_CAM_EXIST( l_U3462 )))
                    {
                        CREATE_CAM( 14, ref l_U3462 );
                    }
                    SET_CAM_POS( l_U3462, -1707.29000000, 365.63740000, 24.97754000 );
                    SET_CAM_ROT( l_U3462, 9.72490900, 0.00000000, 99.04640000 );
                    SET_CAM_FOV( l_U3462, 38.40000000 );
                    SET_CAM_ACTIVE( l_U3462, 1 );
                    SET_CAM_PROPAGATE( l_U3462, 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    END_CAM_COMMANDS( ref l_U3450 );
                    l_U3676 = 0;
                    for ( I = 0; I < l_U3958; I++ )
                    {
                        if (DOES_VEHICLE_EXIST( l_U3958[I]._fU4 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U3958[I]._fU4 )))
                            {
                                if (NOT (IS_VEH_DRIVEABLE( l_U3958[I]._fU4 )))
                                {
                                    GET_DRIVER_OF_CAR( l_U3958[I]._fU4, ref iVar6 );
                                    if (iVar6 == nil)
                                    {
                                        GET_NUMBER_OF_PASSENGERS( l_U3958[I]._fU4, ref iVar5 );
                                        if (iVar5 == 0)
                                        {
                                            DELETE_CAR( ref l_U3958[I]._fU4 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                DELETE_CAR( ref l_U3958[I]._fU4 );
                            }
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U3463 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U3463 )))
                        {
                            if (NOT (IS_VEH_DRIVEABLE( l_U3463 )))
                            {
                                GET_DRIVER_OF_CAR( l_U3463, ref iVar6 );
                                if (iVar6 == nil)
                                {
                                    GET_NUMBER_OF_PASSENGERS( l_U3463, ref iVar5 );
                                    if (iVar5 == 0)
                                    {
                                        DELETE_CAR( ref l_U3463 );
                                    }
                                }
                            }
                        }
                        else
                        {
                            DELETE_CAR( ref l_U3463 );
                        }
                    }
                    CLEAR_AREA( l_U3643[0]._fU0, l_U3643[0]._fU4, l_U3643[0]._fU8, 300, 1 );
                    DO_SCREEN_FADE_IN( 500 );
                    l_U3931 = 1;
                }
            }
        }
        break;
        case 1:
        if (l_U3932)
        {
            for ( I = 0; I < l_U3958; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U3958[I]._fU0 )))
                {
                    if (NOT l_U3669[I])
                    {
                        if (TIMERA() >= l_U3637[I])
                        {
                            CLEAR_SEQUENCE_TASK( uVar2 );
                            OPEN_SEQUENCE_TASK( ref uVar2 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -1714.24000000, 355.88000000, 25.65000000, 2, -2, 4.00000000 );
                            CLOSE_SEQUENCE_TASK( uVar2 );
                            TASK_PERFORM_SEQUENCE( l_U3958[I]._fU0, uVar2 );
                            TASK_CLEAR_LOOK_AT( l_U3958[I]._fU0 );
                            l_U3669[I] = 1;
                        }
                    }
                }
            }
            if (l_U3936)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
                {
                    if (TIMERA() > 500)
                    {
                        TASK_LEAVE_ANY_CAR( sub_3101() );
                        l_U3936 = 0;
                    }
                }
            }
            if (TIMERA() > 3000)
            {
                DO_SCREEN_FADE_OUT( 500 );
                l_U3931 = 2;
            }
        }
        else if (NOT l_U3933)
        {
            if (IS_SCREEN_FADED_IN())
            {
                sub_127361( 1 );
                sub_32666( l_U3926, ref l_U3937, 6, 1 );
                l_U3933 = 1;
            }
        }
        else if (NOT (sub_40108( l_U3937 )))
        {
            SETTIMERA( 0 );
            l_U3932 = 1;
        };;;
        break;
        case 2:
        if ((l_U3935) || (TIMERA() > 3000))
        {
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( sub_3101() )))
            {
                if ((l_U3675) || (NOT (IS_VEH_DRIVEABLE( l_U3463 ))))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3101(), -1713.92000000, 360.03000000, 25.45000000 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_3101(), -1713.92000000, 360.03000000, 25.45000000 );
                    }
                    SET_CHAR_HEADING( sub_3101(), -117.44000000 );
                }
            }
            if (l_U3935)
            {
                INCREMENT_INT_STAT( 372, 1 );
            }
            else
            {
                INCREMENT_INT_STAT( 373, 1 );
            }
            sub_127665();
            if (NOT (IS_CHAR_DEAD( sub_3101() )))
            {
                TASK_CLEAR_LOOK_AT( sub_3101() );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            BEGIN_CAM_COMMANDS( ref l_U3450 );
            SET_CAM_ACTIVE( l_U3462, 0 );
            SET_CAM_PROPAGATE( l_U3462, 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U3450 );
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_58804();
            WAIT( 1000 );
            if (NOT (IS_CAR_DEAD( l_U3463 )))
            {
                SET_CAR_PROOFS( l_U3463, 0, 0, 0, 0, 0 );
            }
            sub_127361( 0 );
            SWITCH_ROADS_BACK_TO_ORIGINAL( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( sub_5967(), 1 );
            SWITCH_ROADS_OFF( -1743.54000000, 342.30960000, 0.00000000, -1671.31100000, 393.63660000, 100.00000000 );
            DO_SCREEN_FADE_IN( 500 );
            sub_119017();
        }
        break;
    }
    return;
}

int sub_119396()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_119691(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar6 );
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
    if (sub_119815( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_119815(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3101()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3101() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5967() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5967() )))
    {
        return 0;
    }
    return 1;
}

void sub_120279()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_3101() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar2 );
        SET_CAR_COORDINATES( uVar2, -1714.49500000, 379.86370000, 24.44400000 );
    }
    switch (l_U3678)
    {
        case 5:
        case 2:
        sub_120405( 1, 0 );
        sub_120405( 2, 1 );
        sub_121321( 1 );
        break;
        case 1:
        sub_120405( 0, 0 );
        sub_120405( 1, 1 );
        sub_121321( 1 );
        sub_121321( 2 );
        break;
        case 0:
        sub_120405( 0, 0 );
        sub_120405( 2, 1 );
        sub_121321( 1 );
        break;
        case 4:
        sub_120405( 0, 0 );
        sub_120405( 1, 1 );
        sub_121321( 1 );
        break;
        case 3:
        sub_120405( 0, 0 );
        sub_120405( 2, 1 );
        sub_121321( 2 );
        break;
    }
    return;
}

void sub_120405(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (NOT (IS_VEH_DRIVEABLE( l_U3463 )))
        {
            if (DOES_VEHICLE_EXIST( l_U3463 ))
            {
                DELETE_CAR( ref l_U3463 );
            }
            sub_87435( "Recreating Johnny's bike...." );
            while (NOT (sub_7577( ref l_U3463, l_U3643[uParam1]._fU0, l_U3643[uParam1]._fU4, l_U3643[uParam1]._fU8, l_U3662[uParam1] )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            sub_87435( "DW_POSITION_CONTACT_BIKE_FOR_FAIL_CUT... Johnny's bike ok" );
            SET_CAR_HEALTH( l_U3463, 1000 );
            SET_CAR_PROOFS( l_U3463, 1, 1, 1, 1, 1 );
        }
        break;
        case 1:
        if (NOT (IS_VEH_DRIVEABLE( l_U384[0]._fU4 )))
        {
            if (DOES_VEHICLE_EXIST( l_U384[0]._fU4 ))
            {
                DELETE_CAR( ref l_U384[0]._fU4 );
            }
            sub_87435( "Recreating Billy's bike...." );
            while (NOT (sub_9443( ref l_U384[0]._fU4, l_U3643[uParam1]._fU0, l_U3643[uParam1]._fU4, l_U3643[uParam1]._fU8, l_U3662[uParam1] )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            sub_87435( "DW_POSITION_CONTACT_BIKE_FOR_FAIL_CUT... Billy's bike ok" );
            SET_CAR_HEALTH( l_U384[0]._fU4, 1000 );
            SET_CAR_PROOFS( l_U384[0]._fU4, 1, 1, 1, 1, 1 );
        }
        break;
        case 2:
        if (NOT (IS_VEH_DRIVEABLE( l_U384[1]._fU4 )))
        {
            if (DOES_VEHICLE_EXIST( l_U384[1]._fU4 ))
            {
                DELETE_CAR( ref l_U384[1]._fU4 );
            }
            sub_87435( "Recreating Brian's bike...." );
            while (NOT (sub_121140( ref l_U384[1]._fU4, l_U3643[uParam1]._fU0, l_U3643[uParam1]._fU4, l_U3643[uParam1]._fU8, l_U3662[uParam1] )))
            {
                WAIT( 0 );
            }
        }
        else
        {
            sub_87435( "DW_POSITION_CONTACT_BIKE_FOR_FAIL_CUT... BRIAN's bike ok" );
            SET_CAR_HEALTH( l_U384[1]._fU4, 1000 );
            SET_CAR_PROOFS( l_U384[1]._fU4, 1, 1, 1, 1, 1 );
        }
        break;
    }
    return;
}

void sub_121140(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_9460( uParam0, 13, uParam1, uParam4 );
}

void sub_121321(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        if (IS_CHAR_INJURED( l_U384[0]._fU0 ))
        {
            sub_87435( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Recreating Billy" );
            if (DOES_CHAR_EXIST( l_U384[0]._fU0 ))
            {
                DELETE_CHAR( ref l_U384[0]._fU0 );
            }
            sub_9728( 0, ref l_U384[0]._fU0, -1730.88000000, 340.28110000, 24.44420000, 172.00000000 );
            sub_4754( 1, l_U384[0]._fU0, "BILLY", 0 );
            if (NOT (IS_CAR_DEAD( l_U384[0]._fU4 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[0]._fU0, l_U384[0]._fU4 );
            }
            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U3463, 0 ))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U384[0]._fU0, l_U3463, 0 );
            }
            else
            {
                SCRIPT_ASSERT( "DW_POSITION_CONTACT_FOR_FAIL_CUT... COuldn't find seat(DW_BILLY)" );
            }
        }
        else
        {
            sub_87435( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Billy ok" );
        }
        break;
        case 2:
        if (IS_CHAR_INJURED( l_U384[1]._fU0 ))
        {
            sub_87435( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Recreating Brian" );
            if (DOES_CHAR_EXIST( l_U384[1]._fU0 ))
            {
                DELETE_CHAR( ref l_U384[1]._fU0 );
            }
            sub_9728( 13, ref l_U384[1]._fU0, -1730.88000000, 340.28110000, 24.44420000, 172.00000000 );
            sub_4754( 2, l_U384[1]._fU0, "BRIAN", 0 );
            if (NOT (IS_CAR_DEAD( l_U384[1]._fU4 )))
            {
                WARP_CHAR_INTO_CAR( l_U384[1]._fU0, l_U384[1]._fU4 );
            }
            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U3463, 0 ))
            {
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U384[1]._fU0, l_U3463, 0 );
            }
            else
            {
                SCRIPT_ASSERT( "DW_POSITION_CONTACT_FOR_FAIL_CUT... COuldn't find seat (DW_BRIAN)" );
            }
        }
        else
        {
            sub_87435( "DW_POSITION_CONTACT_FOR_FAIL_CUT... Brian ok" );
        }
        break;
    }
    return;
}

void sub_123211(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_123438(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_VEHICLE_EXIST( l_U384[uParam1]._fU4 ))
    {
        if (l_U384[uParam1]._fU4 != l_U3463)
        {
            DELETE_CAR( ref l_U384[uParam1]._fU4 );
        }
    }
    switch (uParam0)
    {
        case 1:
        REQUEST_MODEL( -570033273 );
        while (NOT (HAS_MODEL_LOADED( -570033273 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -570033273, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref l_U384[uParam1]._fU4, 1 );
        sub_7717( l_U384[uParam1]._fU4, -570033273, 9 );
        break;
        default:
        REQUEST_MODEL( -408052231 );
        while (NOT (HAS_MODEL_LOADED( -408052231 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( -408052231, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref l_U384[uParam1]._fU4, 1 );
        sub_7717( l_U384[uParam1]._fU4, -408052231, 9 );
        break;
    }
    if (IS_VEH_DRIVEABLE( l_U384[uParam1]._fU4 ))
    {
        SET_CAR_AS_MISSION_CAR( l_U384[uParam1]._fU4 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U384[uParam1]._fU4, 1 );
        SET_CAR_ON_GROUND_PROPERLY( l_U384[uParam1]._fU4 );
    }
    return;
}

void sub_127361(unknown uParam0)
{
    return;
}

void sub_127665()
{
    int I;

    for ( I = 0; I < l_U384; I++ )
    {
        sub_114878( ref l_U384[I], 1 );
    }
    return;
}

void sub_128041()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    char[16] cVar6;

    StrCopy( ref cVar6, "Test", 16 );
    sub_128086( l_U4225, "Test... ", 1045220557, 1045220557 );
    if (l_U4225 > 10.00000000)
    {
        l_U4225 = 0.00000000;
    }
    l_U4225 += 1.15461400;
    switch (l_U4217)
    {
        case 0:
        if (NOT (HAS_MODEL_LOADED( -657414365 )))
        {
            REQUEST_MODEL( -657414365 );
            while (NOT (HAS_MODEL_LOADED( -657414365 )))
            {
                WAIT( 0 );
            }
        }
        if (NOT (HAS_MODEL_LOADED( 203767144 )))
        {
            REQUEST_MODEL( 203767144 );
            while (NOT (HAS_MODEL_LOADED( 203767144 )))
            {
                WAIT( 0 );
            }
        }
        REQUEST_ANIMS( "MISSBILLY_2" );
        while (NOT (HAVE_ANIMS_LOADED( "MISSBILLY_2" )))
        {
            WAIT( 0 );
            sub_87435( "Trying to load anims...." );
        }
        GIVE_WEAPON_TO_CHAR( sub_3101(), 26, 200, 0 );
        l_U4217++;
        break;
        case 1:
        sub_83764();
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 8 ))
        {
            PRINT_HELP( "B3_HSTA" );
        }
        if (IS_KEYBOARD_KEY_PRESSED( 3 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 3 ))
            {
                WAIT( 0 );
            }
            SET_CHAR_HEALTH( sub_3101(), 0 );
            l_U4217 = 0;
        }
        if (GET_AMMO_IN_CLIP( sub_3101(), 26, ref iVar4 ))
        {
            GET_AMMO_IN_CHAR_WEAPON( sub_3101(), 26, ref uVar5 );
            if (iVar4 == 0)
            {
                SET_AMMO_IN_CLIP( sub_3101(), 26, 2 );
                SET_CHAR_AMMO( sub_3101(), 26, uVar5 );
            }
        }
        break;
        case 2: break;
        case 3:
        if (IS_KEYBOARD_KEY_PRESSED( 8 ))
        {
            l_U4217 = 0;
        }
        break;
    }
    return;
}

void sub_128086(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_128650()
{
    int I;

    for ( I = 0; I < l_U384; I++ )
    {
        if (DOES_BLIP_EXIST( l_U384[I]._fU100 ))
        {
            if (IS_CHAR_INJURED( l_U384[I]._fU0 ))
            {
                REMOVE_BLIP( l_U384[I]._fU100 );
            }
        }
    }
    return;
}

int sub_128773()
{
    if ((sub_128854()) || (sub_128782()))
    {
        return 1;
    }
    return 0;
}

int sub_128782()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -2025.25200000, -386.20420000, 4.37070000, 46.00000000, 74.00000000, 3.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_128854()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3101(), -1253.57800000, -614.07710000, 2.86880000, 100.00000000, 74.00000000, 13.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_129128(unknown uParam0)
{
    int iVar3;

    if (g_U9549 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3101(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3101(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_3101(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U223) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U223 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U223 );
            }
        }
    }
    return 0;
}

void sub_129354()
{
    unknown uVar2;
    unknown[5] uVar3;
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
    unknown uVar22;
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
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown[15] uVar134;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    unknown uVar154;
    unknown uVar155;
    unknown uVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    unknown uVar163;
    unknown uVar164;
    unknown uVar165;
    unknown uVar166;
    unknown uVar167;
    unknown uVar168;
    unknown uVar169;
    unknown uVar170;
    unknown uVar171;
    unknown uVar172;
    unknown uVar173;
    unknown uVar174;
    unknown uVar175;
    unknown uVar176;
    unknown uVar177;
    unknown uVar178;
    unknown uVar179;
    unknown uVar180;
    unknown uVar181;
    unknown uVar182;
    unknown uVar183;
    unknown uVar184;
    unknown uVar185;
    unknown uVar186;
    unknown uVar187;
    unknown uVar188;
    unknown uVar189;
    unknown uVar190;
    unknown uVar191;
    unknown uVar192;
    unknown uVar193;
    unknown uVar194;
    unknown uVar195;
    unknown uVar196;
    unknown uVar197;
    unknown uVar198;
    unknown uVar199;
    unknown uVar200;
    unknown uVar201;
    unknown uVar202;
    unknown uVar203;
    unknown uVar204;
    unknown uVar205;
    unknown uVar206;
    unknown uVar207;
    unknown uVar208;
    unknown uVar209;
    unknown uVar210;
    unknown uVar211;
    unknown uVar212;
    unknown uVar213;
    unknown uVar214;
    unknown uVar215;
    unknown uVar216;
    unknown uVar217;
    unknown uVar218;
    unknown uVar219;
    unknown uVar220;
    unknown uVar221;
    unknown uVar222;
    unknown uVar223;
    unknown uVar224;
    unknown uVar225;
    unknown uVar226;
    unknown uVar227;
    unknown uVar228;
    unknown uVar229;
    unknown uVar230;
    unknown uVar231;
    unknown uVar232;
    unknown uVar233;
    unknown uVar234;
    unknown uVar235;
    unknown uVar236;
    unknown uVar237;
    unknown uVar238;
    unknown uVar239;
    unknown uVar240;
    unknown uVar241;
    unknown uVar242;
    unknown uVar243;
    unknown uVar244;
    unknown uVar245;
    unknown uVar246;
    unknown uVar247;
    unknown uVar248;
    unknown uVar249;
    unknown uVar250;
    unknown uVar251;
    unknown uVar252;
    unknown uVar253;
    unknown uVar254;
    unknown uVar255;
    unknown uVar256;
    unknown uVar257;
    unknown uVar258;
    unknown uVar259;
    unknown uVar260;
    unknown uVar261;
    unknown uVar262;
    unknown uVar263;
    unknown uVar264;
    unknown uVar265;
    unknown uVar266;
    unknown uVar267;
    unknown uVar268;
    unknown uVar269;
    unknown uVar270;
    unknown uVar271;
    unknown uVar272;
    unknown uVar273;
    unknown uVar274;
    unknown uVar275;
    unknown uVar276;
    unknown uVar277;
    unknown uVar278;
    unknown uVar279;
    unknown uVar280;
    unknown uVar281;
    unknown uVar282;
    unknown uVar283;
    unknown uVar284;
    unknown uVar285;
    unknown uVar286;
    unknown uVar287;
    unknown uVar288;
    unknown uVar289;
    unknown uVar290;
    unknown uVar291;
    unknown uVar292;
    unknown uVar293;
    unknown uVar294;
    unknown uVar295;
    unknown uVar296;
    unknown uVar297;
    unknown uVar298;
    unknown uVar299;
    unknown uVar300;
    unknown uVar301;
    unknown uVar302;
    unknown uVar303;
    unknown uVar304;
    unknown uVar305;
    unknown uVar306;
    unknown uVar307;
    unknown uVar308;
    unknown uVar309;
    unknown uVar310;
    unknown uVar311;
    unknown uVar312;
    unknown uVar313;
    unknown uVar314;
    unknown uVar315;
    unknown uVar316;
    unknown uVar317;
    unknown uVar318;
    unknown uVar319;
    unknown uVar320;
    unknown uVar321;
    unknown uVar322;
    unknown uVar323;
    unknown uVar324;
    unknown uVar325;
    unknown uVar326;
    unknown uVar327;
    unknown uVar328;
    unknown uVar329;
    unknown uVar330;
    unknown uVar331;
    unknown uVar332;
    unknown uVar333;
    unknown uVar334;
    unknown uVar335;
    unknown uVar336;
    unknown uVar337;
    unknown uVar338;
    unknown uVar339;
    unknown uVar340;
    unknown uVar341;
    unknown uVar342;
    unknown uVar343;
    unknown uVar344;
    unknown uVar345;
    unknown uVar346;
    unknown uVar347;
    unknown uVar348;
    unknown uVar349;
    unknown uVar350;
    unknown uVar351;
    unknown uVar352;
    unknown uVar353;
    unknown uVar354;
    unknown uVar355;
    unknown uVar356;
    unknown uVar357;
    unknown uVar358;
    unknown uVar359;
    unknown uVar360;
    unknown uVar361;
    unknown uVar362;
    unknown uVar363;
    unknown uVar364;
    unknown uVar365;
    unknown uVar366;
    unknown uVar367;
    unknown uVar368;
    unknown uVar369;
    unknown uVar370;
    unknown uVar371;
    unknown uVar372;
    unknown uVar373;
    unknown uVar374;
    unknown uVar375;
    unknown uVar376;
    unknown uVar377;
    unknown uVar378;
    unknown uVar379;
    unknown uVar380;
    unknown uVar381;
    unknown uVar382;
    unknown uVar383;
    unknown uVar384;
    unknown uVar385;
    unknown uVar386;
    unknown uVar387;
    unknown uVar388;
    unknown uVar389;
    unknown uVar390;
    unknown uVar391;
    unknown uVar392;
    unknown uVar393;
    unknown uVar394;
    unknown uVar395;
    unknown uVar396;
    unknown uVar397;
    unknown uVar398;
    unknown uVar399;
    unknown uVar400;
    unknown uVar401;
    unknown uVar402;
    unknown uVar403;
    unknown uVar404;
    unknown uVar405;
    unknown uVar406;
    unknown uVar407;
    unknown uVar408;
    unknown uVar409;
    unknown uVar410;
    unknown uVar411;
    unknown uVar412;
    unknown uVar413;
    unknown uVar414;
    unknown uVar415;
    unknown uVar416;
    unknown uVar417;
    unknown uVar418;
    unknown uVar419;
    unknown uVar420;
    unknown uVar421;
    unknown uVar422;
    unknown uVar423;
    unknown uVar424;
    unknown uVar425;
    unknown uVar426;
    unknown uVar427;
    unknown uVar428;
    unknown uVar429;
    unknown uVar430;
    unknown uVar431;
    unknown uVar432;
    unknown uVar433;
    unknown uVar434;
    unknown uVar435;
    unknown uVar436;
    unknown uVar437;
    unknown uVar438;
    unknown uVar439;
    unknown uVar440;
    unknown uVar441;
    unknown uVar442;
    unknown uVar443;
    unknown uVar444;
    unknown uVar445;
    unknown uVar446;
    unknown uVar447;
    unknown uVar448;
    unknown uVar449;
    unknown uVar450;
    unknown uVar451;
    unknown uVar452;
    unknown uVar453;
    unknown uVar454;
    unknown uVar455;
    unknown uVar456;
    unknown uVar457;
    unknown uVar458;
    unknown uVar459;
    unknown uVar460;
    unknown uVar461;
    unknown uVar462;
    unknown uVar463;
    unknown uVar464;
    unknown uVar465;
    unknown uVar466;
    unknown uVar467;
    unknown uVar468;
    unknown uVar469;
    unknown uVar470;
    unknown uVar471;
    unknown uVar472;
    unknown uVar473;
    unknown uVar474;
    unknown uVar475;
    unknown uVar476;
    unknown uVar477;
    unknown uVar478;
    unknown uVar479;
    unknown uVar480;
    unknown uVar481;
    unknown uVar482;
    unknown uVar483;
    unknown uVar484;
    unknown uVar485;
    unknown uVar486;
    unknown uVar487;
    unknown uVar488;
    unknown uVar489;
    unknown uVar490;
    unknown uVar491;
    unknown uVar492;
    unknown uVar493;
    unknown uVar494;
    unknown uVar495;
    unknown uVar496;
    unknown uVar497;
    unknown uVar498;
    unknown uVar499;
    unknown uVar500;
    unknown uVar501;
    unknown uVar502;
    unknown uVar503;
    unknown uVar504;
    unknown uVar505;
    unknown uVar506;
    unknown uVar507;
    unknown uVar508;
    unknown uVar509;
    unknown uVar510;
    unknown uVar511;
    unknown uVar512;
    unknown uVar513;
    unknown uVar514;
    unknown uVar515;
    unknown uVar516;
    unknown uVar517;
    unknown uVar518;
    unknown uVar519;
    unknown uVar520;
    unknown uVar521;
    unknown uVar522;
    unknown uVar523;
    unknown uVar524;
    unknown uVar525;
    unknown uVar526;
    unknown uVar527;
    unknown uVar528;
    unknown uVar529;
    unknown uVar530;
    unknown uVar531;
    unknown uVar532;
    unknown uVar533;
    unknown uVar534;
    unknown uVar535;
    unknown uVar536;
    unknown uVar537;
    unknown uVar538;
    unknown uVar539;
    unknown uVar540;
    unknown uVar541;
    unknown uVar542;
    unknown uVar543;
    unknown uVar544;
    unknown uVar545;
    unknown uVar546;
    unknown uVar547;
    unknown uVar548;
    unknown uVar549;
    unknown uVar550;
    unknown uVar551;
    unknown uVar552;
    unknown uVar553;
    unknown uVar554;
    unknown uVar555;
    unknown uVar556;
    unknown uVar557;
    unknown uVar558;
    unknown uVar559;
    unknown uVar560;
    unknown uVar561;
    unknown uVar562;
    unknown uVar563;
    unknown uVar564;
    unknown uVar565;
    unknown uVar566;
    unknown uVar567;
    unknown uVar568;
    unknown uVar569;
    unknown uVar570;
    unknown uVar571;
    unknown uVar572;
    unknown uVar573;
    unknown uVar574;
    unknown uVar575;
    unknown uVar576;
    unknown uVar577;
    unknown uVar578;
    unknown uVar579;
    unknown uVar580;
    unknown uVar581;
    unknown uVar582;
    unknown uVar583;
    unknown uVar584;
    unknown uVar585;
    unknown uVar586;
    unknown uVar587;
    unknown uVar588;
    unknown uVar589;
    unknown uVar590;
    unknown uVar591;
    unknown uVar592;
    unknown uVar593;
    unknown uVar594;
    unknown uVar595;
    unknown uVar596;
    unknown uVar597;
    unknown uVar598;
    unknown uVar599;
    unknown uVar600;
    unknown uVar601;
    unknown uVar602;
    unknown uVar603;
    unknown uVar604;
    unknown uVar605;
    unknown uVar606;
    unknown uVar607;
    unknown uVar608;
    unknown uVar609;
    unknown uVar610;
    unknown uVar611;
    unknown uVar612;
    unknown uVar613;
    unknown uVar614;
    unknown uVar615;
    unknown uVar616;
    unknown uVar617;
    unknown uVar618;
    unknown uVar619;
    unknown uVar620;
    unknown uVar621;
    unknown uVar622;
    unknown uVar623;
    unknown uVar624;
    unknown uVar625;
    unknown uVar626;
    unknown uVar627;
    unknown uVar628;
    unknown uVar629;
    int I;
    int iVar631;
    int iVar632;

    array(ref uVar3, 5);
    array(ref uVar134, 15);
    for ( I = 0; I < l_U2626; I++ )
    {
        switch (l_U2626[I]._fU112._fU16)
        {
            case 0:
            if (NOT (IS_CHAR_DEAD( l_U384[I]._fU0 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U384[0]._fU0 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_3D( l_U384[I]._fU0, -1978.65900000, -318.78280000, 3.14400000, 11.00000000, 12.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U384[I]._fU0, -1968.34300000, -320.28470000, 2.64340000, 4.00000000, 11.00000000, 2.00000000, 0 )))
                        {
                            l_U2626[I]._fU68 = 0;
                            if (I > 0)
                            {
                                if (NOT l_U2626[I]._fU104)
                                {
                                    sub_129750( ref l_U384[I]._fU0 );
                                    OPEN_SEQUENCE_TASK( ref uVar2 );
                                    TASK_LEAVE_ANY_CAR( 0 );
                                    CLOSE_SEQUENCE_TASK( uVar2 );
                                    if (l_U3517)
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 1, 7, ref iVar632 );
                                        WAIT( iVar632 * 100 );
                                    }
                                    if (NOT (IS_CHAR_INJURED( l_U384[I]._fU0 )))
                                    {
                                        TASK_PERFORM_SEQUENCE( l_U384[I]._fU0, uVar2 );
                                    }
                                    CLEAR_SEQUENCE_TASK( uVar2 );
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U384[I]._fU0 )))
                            {
                                if (l_U2626[I]._fU112._fU0)
                                {
                                    if (NOT (DOES_GROUP_EXIST( l_U3394 )))
                                    {
                                        sub_87435( "Creating group...." );
                                        if (NOT (IS_CHAR_INJURED( l_U384[0]._fU0 )))
                                        {
                                            REMOVE_CHAR_FROM_GROUP( l_U384[0]._fU0 );
                                        }
                                        CREATE_GROUP( 0, ref l_U3394, 1 );
                                        SET_GROUP_LEADER( l_U3394, l_U384[0]._fU0 );
                                        SET_GROUP_SEPARATION_RANGE( l_U3394, 100.00000000 );
                                    }
                                    if (NOT (IS_GROUP_MEMBER( l_U384[I]._fU0, l_U3394 )))
                                    {
                                        sub_78616( I, "setting bike member..." );
                                        REMOVE_CHAR_FROM_GROUP( l_U384[I]._fU0 );
                                        SET_GROUP_MEMBER( l_U3394, l_U384[I]._fU0 );
                                    }
                                    else
                                    {
                                        sub_78616( I, "Already a member...." );
                                    }
                                    if (l_U2626[I]._fU112._fU8)
                                    {
                                        GET_GAME_TIMER( ref l_U2626[I]._fU112._fU12 );
                                        l_U2626[I]._fU112._fU16 = 8;
                                    }
                                    else
                                    {
                                        l_U2626[I]._fU112._fU16 = 3;
                                    }
                                }
                                else if (l_U2626[I]._fU112._fU4)
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U384[I]._fU0 );
                                    l_U2626[I]._fU72 = {-2003.57100000, -330.90810000, 3.02230000};
                                    l_U2626[I]._fU84 = 22;
                                    l_U2626[I]._fU100 = l_U3389;
                                    l_U2626[I]._fU4 = 1;
                                    l_U2626[I]._fU112._fU16 = 1;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U384[I]._fU0 )))
            {
                uVar134[0] = {l_U975[0]};
                uVar134[1] = {l_U975[1]};
                uVar134[2] = {l_U975[2]};
                uVar134[3] = {l_U975[3]};
                uVar134[4] = {l_U975[25]};
                uVar134[5] = {l_U975[4]};
                if (sub_69788( ref uVar134, 5, 5, 0, 1 ))
                {
                    sub_71906( ref l_U2626[I] );
                    l_U2626[I]._fU72 = {-2012.02700000, -367.53970000, 3.33890000};
                    l_U2626[I]._fU84 = 19;
                    l_U2626[I]._fU4 = 1;
                    l_U2626[I]._fU112._fU16 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U384[I]._fU0 )))
            {
                uVar134[0] = {l_U975[5]};
                if (sub_69788( ref uVar134, 1, 1, 0, 1 ))
                {
                    sub_71906( ref l_U2626[I] );
                    l_U2626[I]._fU72 = {-2021.55100000, -380.17450000, 3.36570000};
                    l_U2626[I]._fU84 = 21;
                    l_U2626[I]._fU4 = 1;
                    l_U2626[I]._fU112._fU16 = 3;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_DEAD( l_U384[I]._fU0 )))
            {
                if (sub_75044( 0 ))
                {
                    l_U2626[I]._fU4 = 0;
                    REMOVE_CHAR_FROM_GROUP( l_U384[I]._fU0 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U384[I]._fU0, 1 );
                    l_U2626[I]._fU68 = 1;
                    l_U3811 = 1;
                    l_U2626[I]._fU112._fU16 = 5;
                }
            }
            break;
            case 5:
            if ((l_U2626[I]._fU112._fU4) || (l_U2626[I]._fU112._fU0))
            {
                if (NOT (IS_CHAR_INJURED( l_U384[I]._fU0 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U384[0]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U384[I]._fU0, -1248.88700000, -530.41940000, 2.86450000, 19.00000000, 24.00000000, 3.00000000, 0 ))
                            {
                                l_U3811 = 0;
                                l_U2626[I]._fU68 = 0;
                                sub_129750( ref l_U384[I]._fU0 );
                                OPEN_SEQUENCE_TASK( ref uVar2 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                CLOSE_SEQUENCE_TASK( uVar2 );
                                TASK_PERFORM_SEQUENCE( l_U384[I]._fU0, uVar2 );
                                if (NOT (DOES_GROUP_EXIST( l_U3394 )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U384[0]._fU0 );
                                    CREATE_GROUP( 0, ref l_U3394, 1 );
                                    SET_GROUP_LEADER( l_U3394, l_U384[0]._fU0 );
                                    SET_GROUP_SEPARATION_RANGE( l_U3394, 100.00000000 );
                                }
                                if (NOT (IS_GROUP_MEMBER( l_U384[I]._fU0, l_U3394 )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U384[I]._fU0 );
                                    SET_GROUP_MEMBER( l_U3394, l_U384[I]._fU0 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar2 );
                                l_U2626[I]._fU112._fU16 = 6;
                            }
                            else
                            {
                                sub_35105( ref l_U384[I], 0 );
                            }
                        }
                        else
                        {
                            sub_35105( ref l_U384[I], 0 );
                        }
                    }
                }
            }
            break;
            case 9: break;
            case 6:
            if (I > 0)
            {
                if (NOT (IS_CHAR_DEAD( l_U384[I]._fU0 )))
                {
                    if (NOT l_U2626[I]._fU68)
                    {
                        if (sub_75044( 2 ))
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U384[I]._fU0 );
                            l_U2626[I]._fU68 = 1;
                        }
                    }
                    else if (NOT (IS_CHAR_DEAD( l_U384[I]._fU0 )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U384[0]._fU0 )))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U384[I]._fU0, l_U384[0]._fU0, 4.00000000, 4.00000000, 4.00000000, 0 )))
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 3, 7, ref iVar632 );
                                WAIT( iVar632 * 100 );
                                l_U2626[I]._fU112._fU16 = 7;
                            }
                        }
                    }
                }
            }
            break;
            case 7:
            if (I > 0)
            {
                sub_35105( ref l_U384[I], 0 );
            }
            break;
            case 8:
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U384[I]._fU0 )))
            {
                GET_GAME_TIMER( ref iVar631 );
                if ((iVar631 - l_U2626[I]._fU112._fU12) > 20000)
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U384[I]._fU0 )))
                    {
                        STOP_PED_SPEAKING( l_U384[I]._fU0, 1 );
                        SET_CHAR_HEALTH( l_U384[I]._fU0, 5 );
                    }
                }
            }
            else
            {
                l_U2626[I]._fU112._fU16 = 10;
            }
            break;
        }
    }
    if (l_U3811)
    {
        if ((l_U2626[14]._fU68) AND (l_U2626[1]._fU68))
        {
            uVar3[0] = {l_U384[0]};
            uVar3[1] = {l_U384[1]};
            uVar3[2] = {l_U384[14]};
        }
    }
    return;
}

void sub_129750(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( (uParam0^), 0 );
    }
    return;
}

int sub_132694(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3101() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_CHAR_IN_CAR( sub_3101(), uParam0 ))
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
            if (sub_132838( uParam0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_132838(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3101() )))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3101(), uParam0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3101(), uParam0, 5, 5, 5, 0 ))
                {
                    if (((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 3 ))) || ((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 15 ))))
                    {
                        if (IS_BUTTON_JUST_PRESSED( 0, 15 ))
                        {
                            l_U355++;
                        }
                        GET_GAME_TIMER( ref l_U356 );
                    }
                    else if (NOT sub_133009())
                    {
                        if (sub_133087( uParam0 ))
                        {
                            if (l_U355 > 2)
                            {
                                if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_3101() )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( sub_3101() )))
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

int sub_133009()
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

int sub_133087(unknown uParam0)
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
    if (NOT (IS_CHAR_INJURED( sub_3101() )))
    {
        GET_CHAR_COORDINATES( sub_3101(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    }
    GET_HEADING_FROM_VECTOR_2D( uVar3._fU0 - uVar6._fU0, uVar3._fU4 - uVar6._fU4, ref uVar9 );
    if (sub_133205( sub_3101(), uVar9, 90 ))
    {
        return 1;
    }
    return 0;
}

int sub_133205(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_134185(unknown uParam0)
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
                iVar3[sub_35946( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_3101() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3101(), ref uVar10 );
        iVar3[sub_35946( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_36223( I );
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

