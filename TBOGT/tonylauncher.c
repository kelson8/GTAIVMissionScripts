void main()
{
    boolean bVar2;
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U19 = 0;
    l_U20 = 15;
    l_U21 = 97;
    l_U22 = 103;
    l_U23 = 0;
    l_U24 = nil;
    l_U25 = -1;
    l_U26 = 0;
    l_U27 = 0;
    l_U28 = 0;
    l_U29 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (g_U15811[21])
    {
        l_U19 = 1;
        l_U20 = 1;
        g_U15811[12] = 0;
    }
    else
    {
        l_U19 = 0;
        g_U15811[13] = 0;
        if (g_U15811[22])
        {
            l_U20 = 2;
        }
        else
        {
            l_U20 = 3;
        }
    }
    l_U25 = g_U15885[0];
    l_U23 = 0;
    g_U15811[21] = 0;
    g_U15811[22] = 0;
    g_U15811[23] = 0;
    bVar2 = true;
    SETTIMERB( 0 );
    while (bVar2)
    {
        WAIT( 0 );
        sub_255();
        if (bVar2)
        {
            bVar2 = false;
            if (NOT (IS_CHAR_DEAD( sub_294() )))
            {
                if ((TIMERB() < 20000) || (LOCATE_CHAR_ANY_MEANS_3D( sub_294(), g_U10756[l_U20]._fU4._fU0, g_U10756[l_U20]._fU4._fU4, g_U10756[l_U20]._fU4._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    bVar2 = true;
                }
            }
        }
    }
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        sub_255();
        sub_473();
        bVar5 = true;
        bVar4 = sub_2957( ref bVar5 );
        if (bVar4)
        {
            bVar3 = g_U15811[14];
        }
        if (bVar5)
        {
            sub_3261();
        }
        if (g_U15811[10])
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U24 );
            l_U24 = nil;
            l_U26 = 1;
            while (g_U15811[10])
            {
                WAIT( 0 );
                sub_255();
            }
        }
        if (l_U26)
        {
            l_U26 = 0;
            bVar2 = true;
            SETTIMERB( 0 );
            while ((bVar2) AND (NOT sub_2970()))
            {
                WAIT( 0 );
                sub_255();
                bVar2 = false;
                if (NOT (IS_CHAR_DEAD( sub_294() )))
                {
                    if ((TIMERB() < 20000) || (LOCATE_CHAR_ANY_MEANS_3D( sub_294(), g_U10756[l_U20]._fU4._fU0, g_U10756[l_U20]._fU4._fU4, g_U10756[l_U20]._fU4._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                    {
                        bVar2 = true;
                    }
                }
            }
        }
    }
    if (DOES_BLIP_EXIST( l_U24 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U24 );
        l_U24 = nil;
    }
    sub_3261();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_255()
{
    if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
    {
        ;
    }
    return;
}

void sub_294()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_473()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    boolean bVar5;
    int iVar6;

    if (g_U12379)
    {
        return;
    }
    if (NOT (DOES_BLIP_EXIST( l_U24 )))
    {
        uVar2 = {g_U10756[l_U20]._fU4};
        ADD_BLIP_FOR_CONTACT( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U24 );
        SET_BLIP_AS_SHORT_RANGE( l_U24, 1 );
        CHANGE_BLIP_SPRITE( l_U24, l_U22 );
        CHANGE_BLIP_DISPLAY( l_U24, 2 );
        CHANGE_BLIP_PRIORITY( l_U24, 1 );
        CHANGE_BLIP_SCALE( l_U24, 0.85000000 );
        l_U27 = 0;
        l_U28 = 0;
        l_U29 = 0;
        if (l_U20 == 3)
        {
            sub_654( ref l_U24, -448.57680000, 364.07570000, 9.22830000, 354.79170000 );
        }
    }
    bVar5 = sub_710();
    iVar6 = 0;
    if (l_U19)
    {
        if ((g_U15811[13]) || (bVar5))
        {
            if (IS_BLIP_SHORT_RANGE( l_U24 ))
            {
                sub_805();
            }
        }
        else if (NOT (IS_BLIP_SHORT_RANGE( l_U24 )))
        {
            sub_981();
        }
    }
    else if ((l_U20 == 3) AND (g_U15811[12]))
    {
        iVar6 = 1;
    }
    if ((iVar6) || (NOT bVar5))
    {
        if (IS_BLIP_SHORT_RANGE( l_U24 ))
        {
            sub_805();
        }
    }
    else if (NOT (IS_BLIP_SHORT_RANGE( l_U24 )))
    {
        sub_981();
    };;;
    sub_1195();
    sub_1256();
    return;
}

void sub_654(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2668 = (uParam0^);
        g_U2683 = {uParam1};
        g_U2681 = uParam4;
    }
    return;
}

int sub_710()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    GET_TIME_OF_DAY( ref iVar2, ref iVar3 );
    if ((iVar2 < 19) AND (iVar2 >= 7))
    {
        return 1;
    }
    return 0;
}

void sub_805()
{
    int iVar2;

    if (g_U12379)
    {
        return;
    }
    CHANGE_BLIP_SPRITE( l_U24, l_U21 );
    SET_BLIP_AS_SHORT_RANGE( l_U24, 0 );
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U23 = iVar2 + 10000;
    CHANGE_BLIP_PRIORITY( l_U24, 3 );
    if (g_U22)
    {
        FLASH_BLIP( l_U24, 1 );
        g_U22 = 0;
    }
    else
    {
        FLASH_BLIP_ALT( l_U24, 1 );
        g_U22 = 1;
    }
    CHANGE_BLIP_SCALE( l_U24, 1.00000000 );
    l_U27 = 0;
    l_U28 = 0;
    l_U29 = 0;
    return;
}

void sub_981()
{
    CHANGE_BLIP_SPRITE( l_U24, l_U22 );
    SET_BLIP_AS_SHORT_RANGE( l_U24, 1 );
    sub_1014();
    CHANGE_BLIP_SCALE( l_U24, 0.85000000 );
    l_U27 = 0;
    l_U28 = 0;
    l_U29 = 0;
    return;
}

void sub_1014()
{
    if (NOT (DOES_BLIP_EXIST( l_U24 )))
    {
        return;
    }
    FLASH_BLIP( l_U24, 0 );
    CHANGE_BLIP_PRIORITY( l_U24, 1 );
    l_U23 = 0;
    return;
}

void sub_1195()
{
    int iVar2;

    if (l_U23 == 0)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U23))
    {
        return;
    }
    sub_1014();
    return;
}

void sub_1256()
{
    if (l_U19)
    {
        if (g_U15811[13])
        {
            if (NOT l_U28)
            {
                CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "BLIP_97" );
                l_U27 = 0;
                l_U28 = 1;
                l_U29 = 0;
            }
            return;
        }
        if (NOT sub_710())
        {
            if (sub_1341())
            {
                if (NOT l_U27)
                {
                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "TONY_BLIP" );
                    l_U27 = 1;
                    l_U28 = 0;
                    l_U29 = 0;
                }
                return;
            }
        }
        else if (sub_2314( l_U19 ))
        {
            if (NOT l_U27)
            {
                CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "TONY_BLIP" );
                l_U27 = 1;
                l_U28 = 0;
                l_U29 = 0;
            }
            return;
        }
        if (NOT l_U28)
        {
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "BLIP_97" );
            l_U27 = 0;
            l_U28 = 1;
            l_U29 = 0;
        }
        return;;
        if (NOT l_U29)
        {
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "BLIP_103" );
            l_U27 = 0;
            l_U28 = 0;
            l_U29 = 1;
        }
        return;
    }
    if ((l_U20 == 3) AND (g_U15811[12]))
    {
        if (NOT l_U28)
        {
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "BLIP_97" );
            l_U27 = 0;
            l_U28 = 1;
            l_U29 = 0;
        }
        return;
    }
    if (sub_710())
    {
        if (sub_1341())
        {
            if (NOT l_U27)
            {
                CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "TONY_BLIP" );
                l_U27 = 1;
                l_U28 = 0;
                l_U29 = 0;
            }
            return;
        }
    }
    else if (sub_2314( l_U19 ))
    {
        if (NOT l_U27)
        {
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "TONY_BLIP" );
            l_U27 = 1;
            l_U28 = 0;
            l_U29 = 0;
        }
        return;
    }
    if (NOT l_U28)
    {
        CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "BLIP_97" );
        l_U27 = 0;
        l_U28 = 1;
        l_U29 = 0;
    }
    return;;
    if (NOT l_U29)
    {
        CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U24, "BLIP_103" );
        l_U27 = 0;
        l_U28 = 0;
        l_U29 = 1;
    }
    return;
}

void sub_1341()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    boolean bVar10;

    iVar2 = 0;
    iVar3 = 30;
    iVar4 = 2;
    iVar5 = 0;
    bVar10 = false;
    if (l_U19)
    {
        uVar6._fU0 = 7;
        uVar6._fU4 = 0;
        uVar8._fU0 = 19;
        uVar8._fU4 = 0;
        bVar10 = false;
        if (g_U15811[13])
        {
            bVar10 = true;
        }
    }
    else
    {
        uVar6._fU0 = 19;
        uVar6._fU4 = 0;
        uVar8._fU0 = 7;
        uVar8._fU4 = 0;
        bVar10 = false;
        if (g_U15811[12])
        {
            bVar10 = true;
        }
    }
    if (bVar10)
    {
        uVar6._fU0 -= iVar4;
        uVar6._fU4 += iVar5;
        if (iVar5 > 0)
        {
            uVar6._fU0--;
        }
        uVar8._fU0 += iVar4;
        uVar8._fU4 += iVar5;
    }
    else
    {
        uVar6._fU0 -= iVar2;
        uVar6._fU4 += iVar3;
        if (iVar3 > 0)
        {
            uVar6._fU0--;
        }
        uVar8._fU0 += iVar2;
        uVar8._fU4 += iVar3;
    }
    return sub_1619( uVar6, uVar8 );
}

int sub_1619(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 >= 24) || (uParam0._fU0 < 0))
    {
        sub_1706( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 >= 60) || (uParam0._fU4 < 0))
    {
        sub_1706( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 >= 24) || (uParam2._fU0 < 0))
    {
        sub_1706( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 >= 60) || (uParam2._fU4 < 0))
    {
        sub_1706( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_2020( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_2020( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_2020( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_2144( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_2020( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_2020( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

void sub_1706(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

boolean sub_2020(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_2144(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

int sub_2314(boolean bParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    iVar3 = 1;
    if (bParam0)
    {
        uVar4._fU0 = 7;
        uVar4._fU4 = 0;
        uVar6._fU0 = 7 + iVar3;
        uVar6._fU4 = 0;
        if (sub_1619( uVar4, uVar6 ))
        {
            return 1;
        }
        uVar4._fU0 = 19 - iVar3;
        uVar4._fU4 = 0;
        uVar6._fU0 = 19;
        uVar6._fU4 = 0;
        if (sub_1619( uVar4, uVar6 ))
        {
            return 1;
        }
        return 0;
    }
    uVar4._fU0 = 19;
    uVar4._fU4 = 0;
    uVar6._fU0 = 19 + iVar3;
    uVar6._fU4 = 0;
    if (sub_1619( uVar4, uVar6 ))
    {
        return 1;
    }
    uVar4._fU0 = 7 - iVar3;
    uVar4._fU4 = 0;
    uVar6._fU0 = 7;
    uVar6._fU4 = 0;
    if (sub_1619( uVar4, uVar6 ))
    {
        return 1;
    }
    return 0;
}

int sub_2957(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    boolean bVar7;
    boolean bVar8;
    int iVar9;
    int iVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    (uParam0^) = 1;
    if (sub_2970())
    {
        sub_3198();
        return 1;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3461() )))
    {
        return 0;
    }
    uVar3 = {g_U10756[l_U20]._fU4};
    if (NOT g_U12379)
    {
        fVar6 = uVar3._fU8 + 2.00000000;
        LOCATE_CHAR_ON_FOOT_3D( sub_294(), uVar3._fU0, uVar3._fU4, fVar6, 1.60000000, 1.60000000, 2.00000000, 1 );
    }
    if (g_U12379)
    {
        return 0;
    }
    if ((sub_3651()) || (sub_3601()))
    {
        return 0;
    }
    if (NOT g_U22957)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3461() )))
    {
        return 0;
    }
    if ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U10953._fU0))
    {
        return 0;
    }
    bVar7 = false;
    if (IS_BIT_SET( g_U10756[l_U20]._fU0, 1 ))
    {
        bVar7 = LOCATE_CHAR_ON_FOOT_3D( sub_294(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 1.60000000, 1.60000000, 2.00000000, 0 );
    }
    if (NOT bVar7)
    {
        if (IS_BIT_SET( g_U10756[l_U20]._fU0, 2 ))
        {
            bVar7 = LOCATE_CHAR_IN_CAR_3D( sub_294(), g_U10756[l_U20]._fU4._fU0, g_U10756[l_U20]._fU4._fU4, g_U10756[l_U20]._fU4._fU8, 2.50000000, 2.50000000, 2.00000000, 0 );
        }
    }
    if (NOT bVar7)
    {
        return 0;
    }
    bVar8 = false;
    if (bVar7)
    {
        iVar9 = sub_710();
        if (NOT (l_U19 == iVar9))
        {
            if (NOT sub_1341())
            {
                if (l_U19)
                {
                    if (g_U15811[13])
                    {
                        ;
                    }
                    else
                    {
                        bVar8 = true;
                    }
                }
                else if ((l_U20 == 3) AND (g_U15811[12]))
                {
                    ;
                }
                else
                {
                    bVar8 = true;
                }
            }
            if (bVar8)
            {
                sub_4057();
                (uParam0^) = 0;
                return 0;
            }
        }
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3461() )))
    {
        return 0;
    }
    if (NOT (sub_4540( 1, 1 )))
    {
        return 0;
    }
    if (NOT sub_4835())
    {
        return 0;
    }
    sub_4891();
    sub_3261();
    iVar10 = 0;
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_294() )))
    {
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        if (IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_OUT( 500 );
        }
        iVar10 = sub_2983( 0, l_U25 );
        uVar11 = {sub_5060( iVar10 )};
        if (IS_BIT_SET( g_U10938._fU0, 7 ))
        {
            PRINT_BIG( ref uVar11, 30000, 2 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3461() )))
    {
        sub_5177();
        return 0;
    }
    SET_PLAYER_CONTROL( sub_3461(), 0 );
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_294() ))
    {
        WAIT( 1000 );
        while (IS_SCREEN_FADING_IN())
        {
            WAIT( 0 );
        }
        if (IS_SCREEN_FADED_IN())
        {
            DO_SCREEN_FADE_OUT( 500 );
        }
        iVar10 = sub_2983( 0, l_U25 );
        uVar11 = {sub_5060( iVar10 )};
        if (IS_BIT_SET( g_U10938._fU0, 7 ))
        {
            PRINT_BIG( ref uVar11, 30000, 2 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    CLEAR_WANTED_LEVEL( sub_3461() );
    CLEAR_HELP();
    if (NOT (IS_CHAR_DEAD( sub_294() )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_294() );
    }
    sub_5437();
    g_U2792 = 1;
    sub_5177();
    sub_3198();
    return 1;
}

int sub_2970()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar2 = sub_2983( 0, l_U25 );
    uVar3 = {g_U22960[uVar2]._fU36};
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( ref uVar3 )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_2983(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1706( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U28562[iParam0]._fU0;
    iVar5 = g_U28562[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U22960[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_3198()
{
    g_U15811[10] = 1;
    if (l_U19)
    {
        g_U15811[11] = 1;
    }
    else
    {
        g_U15811[11] = 0;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U24 );
    l_U24 = nil;
    sub_3261();
    SETTIMERB( 0 );
    while (g_U15811[10])
    {
        WAIT( 0 );
    }
    l_U26 = 1;
    return;
}

void sub_3261()
{
    if (sub_3270())
    {
        CLEAR_HELP();
    }
    return;
}

int sub_3270()
{
    if (l_U19)
    {
        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AT_CLUB" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DAY_TRY" )))
        {
            return 1;
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AT_LOFT" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "NIGHT_TRY" )))
    {
        return 1;
    }
    return 0;
}

void sub_3461()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3601()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_3651()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

void sub_4057()
{
    if (g_U12379)
    {
        return;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3461() )))
    {
        return;
    }
    if (sub_4120( sub_294() ))
    {
        return;
    }
    if (l_U19)
    {
        if (g_U15811[13])
        {
            PRINT_HELP_FOREVER( "DAY_TRY" );
            return;
        }
        PRINT_HELP_FOREVER( "AT_CLUB" );
        return;
    }
    if (g_U15811[12])
    {
        PRINT_HELP_FOREVER( "NIGHT_TRY" );
        return;
    }
    PRINT_HELP_FOREVER( "AT_LOFT" );
    return;
}

int sub_4120(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_4184( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_4184(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

int sub_4540(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_294() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_294(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_294() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_294(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_294()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_294() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_294() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3461() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3461() )))
    {
        return 0;
    }
    return 1;
}

int sub_4835()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

void sub_4891()
{
    return sub_4902( 1, 1 );
}

int sub_4902(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((g_U560 != 9) AND (uParam1))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

void sub_5060(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref Result, 8, g_U22960[uParam0]._fU20, 4);
    return Result;
}

void sub_5177()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_5437()
{
    g_U42871._fU0 = 37;
    g_U42871._fU8 = 11;
    g_U42871._fU12 = 0;
    if (g_U42871._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U42871._fU4 )))
    {
        g_U42871._fU4 = nil;
        return;
    }
    DELETE_CHAR( ref g_U42871._fU4 );
    g_U42871._fU4 = nil;
    return;
}

