void main()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U11 = 0;
    l_U35 = 221246143;
    while (DOES_OBJECT_EXIST( l_U36 ))
    {
        if (NOT l_U11)
        {
            l_U33 = "NULL";
            if (sub_90( l_U36 ))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar6 );
                switch (uVar6)
                {
                    case 0:
                    l_U35 = -1500397869;
                    l_U33 = "M_Y_GJAM_LO_01_FULL_01";
                    break;
                    case 1:
                    l_U35 = -881358690;
                    l_U33 = "M_Y_GJAM_LO_02_FULL_01";
                    break;
                    case 2:
                    l_U35 = 1609755055;
                    l_U33 = "M_M_GJAM_HI_01_FULL_01";
                    break;
                    case 3:
                    l_U35 = -330497431;
                    l_U33 = "M_M_GJAM_HI_02_FULL_01";
                    break;
                }
                l_U11 = 1;
            }
            else
            {
                sub_417( -1 );
                l_U11 = 1;
            }
        }
        if (g_U2219)
        {
            sub_1014();
            sub_1101();
        }
        if (IS_PLAYER_PLAYING( sub_1451() ))
        {
            GET_OBJECT_COORDINATES( l_U36, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1590(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 50.00000000, 50.00000000, 20.00000000, 0 )))
            {
                sub_1101();
            }
        }
        if (NOT (l_U14 == 3))
        {
            if (g_U10978)
            {
                if (NOT (sub_1699( 3 )))
                {
                    sub_1101();
                }
            }
        }
        if (IS_OBJECT_IN_AREA_3D( l_U36, 931.43210000, -497.12180000, 13.96470000, 936.43210000, -493.79680000, 17.48970000, 0 ))
        {
            sub_1101();
        }
        switch (l_U14)
        {
            case 0:
            switch (l_U15)
            {
                case 0:
                l_U13 = 0;
                l_U15++;
                break;
                case 1:
                GET_ROOM_KEY_FROM_OBJECT( l_U36, ref l_U13 );
                GET_OBJECT_COORDINATES( l_U36, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                GET_INTERIOR_AT_COORDS( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U12 );
                if (NOT (l_U13 == 0))
                {
                    l_U15++;
                }
                break;
                case 2:
                if (IS_OBJECT_IN_AREA_3D( l_U36, -421.52720000, 1457.43900000, 36.69650000, -415.52720000, 1463.83900000, 40.97150000, 0 ))
                {
                    l_U19._fU28 = 0;
                }
                else
                {
                    l_U19._fU28 = 1;
                }
                sub_2585( 1 );
                break;
            }
            break;
            case 1:
            switch (l_U19._fU28)
            {
                case 0:
                sub_2585( 2 );
                break;
                case 1:
                if (HAS_MODEL_LOADED( l_U35 ))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U36, -1.70000000, -1.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    CREATE_CHAR( 4, l_U35, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U31, 1 );
                    if (NOT (COMPARE_STRING( l_U33, "NULL" )))
                    {
                        SET_AMBIENT_VOICE_NAME( l_U31, l_U33 );
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U36, 0.00000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    TASK_TURN_CHAR_TO_FACE_COORD( l_U31, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                    if (IS_PLAYER_PLAYING( sub_1451() ))
                    {
                        TASK_LOOK_AT_CHAR( l_U31, sub_1590(), -2, 0 );
                    }
                    SET_ROOM_FOR_CHAR_BY_KEY( l_U31, l_U13 );
                    sub_2585( 2 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U35 );
                }
                else
                {
                    REQUEST_MODEL( l_U35 );
                }
                break;
            }
            break;
            case 2:
            GET_OBJECT_COORDINATES( l_U36, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            switch (l_U15)
            {
                case 0:
                bVar2 = false;
                if (IS_PLAYER_PLAYING( sub_1451() ))
                {
                    GET_GROUP_SIZE( sub_3000(), ref l_U16, ref l_U17 );
                    if (l_U17 == 1)
                    {
                        GET_GROUP_MEMBER( sub_3000(), 0, ref l_U30 );
                        if (NOT (IS_CHAR_INJURED( l_U30 )))
                        {
                            if (sub_3096( l_U30 ))
                            {
                                if (LOCATE_CHAR_ON_FOOT_3D( sub_1590(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
                                {
                                    l_U9 = 1;
                                    bVar2 = true;
                                }
                            }
                        }
                    }
                }
                if (l_U10)
                {
                    if (NOT (IS_CONTROL_PRESSED( 2, 23 )))
                    {
                        l_U10 = 0;
                    }
                }
                if (NOT bVar2)
                {
                    if (NOT l_U10)
                    {
                        if (IS_PLAYER_PLAYING( sub_1451() ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U31 )))
                            {
                                if ((LOCATE_CHAR_ON_FOOT_3D( l_U31, uVar3._fU0, uVar3._fU4, uVar3._fU8, 3.00000000, 3.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_1590(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                                {
                                    l_U9 = 0;
                                    bVar2 = true;
                                }
                            }
                        }
                    }
                }
                if (IS_PLAYER_PLAYING( sub_1451() ))
                {
                    if ((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "michelle1" )) > 0)) AND ((NOT (DOES_SCRIPT_EXIST( "michelle1" ))) AND (IS_WANTED_LEVEL_GREATER( sub_1451(), 0 ))))
                    {
                        bVar2 = false;
                    }
                }
                if (NOT sub_4305())
                {
                    bVar2 = false;
                }
                if (TIMERA() < 1000)
                {
                    bVar2 = false;
                }
                if ((sub_4383( 2, 0 )) AND (bVar2))
                {
                    if (l_U9)
                    {
                        l_U32 = sub_5681( sub_4678( l_U30 ) );
                    }
                    else
                    {
                        l_U32 = "PLH_01";
                    }
                    if (sub_6007( 2, l_U32, 0 ))
                    {
                        if (NOT l_U9)
                        {
                            if (DOES_CHAR_EXIST( l_U31 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U31 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U31 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U31, sub_1590() );
                                    TASK_LOOK_AT_CHAR( l_U31, sub_1590(), 3000, 0 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_1590(), l_U31 );
                                }
                            }
                        }
                        else if (DOES_CHAR_EXIST( l_U31 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U31 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U31 );
                            }
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U31 );
                        }
                        if ((NOT l_U9) AND (NOT (IS_CHAR_INJURED( sub_1590() ))))
                        {
                            bVar2 = IS_AMBIENT_SPEECH_DISABLED( sub_1590() );
                            if (bVar2)
                            {
                                STOP_PED_SPEAKING( sub_1590(), 1 );
                            }
                            SAY_AMBIENT_SPEECH( sub_1590(), "LETS_PLAY_POOL", 1, 1, 2 );
                            if (bVar2)
                            {
                                STOP_PED_SPEAKING( sub_1590(), 1 );
                            }
                            l_U18 = 0;
                        }
                        SET_PLAYER_CONTROL( sub_1451(), 0 );
                        REQUEST_SCRIPT( "pool_game" );
                        l_U15++;
                    }
                }
                else
                {
                    sub_1181( 2, l_U32 );
                }
                break;
                case 1:
                if (HAS_SCRIPT_LOADED( "pool_game" ))
                {
                    bVar2 = false;
                    if ((NOT l_U9) AND (NOT (IS_CHAR_INJURED( l_U31 ))))
                    {
                        switch (l_U18)
                        {
                            case 0:
                            if (IS_PLAYER_PLAYING( sub_1451() ))
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1590() )))
                                {
                                    SAY_AMBIENT_SPEECH( l_U31, "GENERIC_YES", 1, 1, 2 );
                                    l_U18++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U31 )))
                            {
                                bVar2 = true;
                            }
                            break;
                        }
                    }
                    else
                    {
                        bVar2 = true;
                    }
                    if (bVar2)
                    {
                        if (l_U9)
                        {
                            l_U19._fU0[0] = l_U30;
                            l_U19._fU12[0] = nil;
                        }
                        else
                        {
                            l_U19._fU0[0] = l_U31;
                            l_U19._fU12[0] = nil;
                        }
                        l_U19._fU0[1] = sub_1590();
                        l_U19._fU12[1] = sub_1451();
                        l_U19._fU32[1] = 0;
                        l_U19._fU24 = l_U36;
                        l_U34 = START_NEW_SCRIPT_WITH_ARGS( "pool_game", ref l_U19, 11, 1024 );
                        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "pool_game" );
                        sub_2585( 3 );
                    }
                }
                break;
            }
            break;
            case 3:
            if (NOT (IS_THREAD_ACTIVE( l_U34 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U19._fU0[0] )))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U19._fU0[0], 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U19._fU0[1] )))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U19._fU0[1], 0 );
                }
                if (IS_PLAYER_PLAYING( sub_1451() ))
                {
                    SET_PLAYER_CONTROL( sub_1451(), 1 );
                }
                l_U10 = 1;
                sub_1181( 2, l_U32 );
                SETTIMERA( 0 );
                sub_2585( 2 );
            }
            break;
        }
        WAIT( 0 );
    }
    sub_1101();
    return;
}

int sub_90(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_OBJECT_IN_AREA_3D( uParam0, 1470.84700000, 55.46900000, 21.56560000, 1474.14700000, 62.29400000, 27.19060000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_417(int iParam0)
{
    int iVar3;

    if (iParam0 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 23, ref iVar3 );
    }
    else
    {
        iVar3 = iParam0;
    }
    switch (iVar3)
    {
        case 0:
        l_U35 = 286007875;
        break;
        case 1:
        l_U35 = 221246143;
        break;
        case 2:
        l_U35 = 43005364;
        break;
        case 3:
        l_U35 = 1609755055;
        break;
        case 4:
        l_U35 = -330497431;
        break;
        case 5:
        l_U35 = -1836006237;
        break;
        case 6:
        l_U35 = 869501081;
        break;
        case 7:
        l_U35 = 632613980;
        break;
        case 8:
        l_U35 = -301223260;
        break;
        case 9:
        l_U35 = 1346668127;
        break;
        case 10:
        l_U35 = 1574850459;
        break;
        case 11:
        l_U35 = -1953289472;
        break;
        case 12:
        l_U35 = 280474699;
        break;
        case 13:
        l_U35 = -19263344;
        break;
        case 14:
        l_U35 = 1844702918;
        break;
        case 15:
        l_U35 = -881358690;
        break;
        case 16:
        l_U35 = 492147228;
        break;
        case 17:
        l_U35 = -302362397;
        break;
        case 18:
        l_U35 = -1616890832;
        break;
        case 19:
        l_U35 = 64730935;
        break;
        case 20:
        l_U35 = 510389335;
        break;
        case 21:
        l_U35 = 1543404628;
        break;
        case 22:
        l_U35 = 1976502708;
        break;
    }
    return;
}

void sub_1014()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U19._fU0[I] ))
        {
            DELETE_CHAR( ref l_U19._fU0[I] );
        }
        l_U19._fU12[I] = nil;
    }
    return;
}

void sub_1101()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U35 );
    if (IS_THREAD_ACTIVE( l_U34 ))
    {
        DESTROY_THREAD( l_U34 );
    }
    if (DOES_CHAR_EXIST( l_U31 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U31 );
    }
    sub_1181( 2, l_U32 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1181(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U3) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_1402();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1451(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_1402()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_1451()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1590()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1699(int iParam0)
{
    unknown uVar3;

    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    if (sub_1739( g_U32898._fU0 ))
    {
        if (NOT (sub_1826( g_U32898._fU0, iParam0 )))
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

int sub_1739(unknown uParam0)
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

int sub_1826(int iParam0, int iParam1)
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

void sub_2585(unknown uParam0)
{
    l_U14 = uParam0;
    l_U15 = 0;
    return;
}

void sub_3000()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_3096(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((IS_CHAR_MODEL( uParam0, sub_3123( 7 ) )) || ((IS_CHAR_MODEL( uParam0, sub_3123( 8 ) )) || ((IS_CHAR_MODEL( uParam0, sub_3123( 13 ) )) || ((IS_CHAR_MODEL( uParam0, sub_3123( 3 ) )) || (IS_CHAR_MODEL( uParam0, sub_3123( 0 ) ))))))
        {
            return 1;
        }
        if ((IS_CHAR_MODEL( uParam0, sub_3123( 30 ) )) || ((IS_CHAR_MODEL( uParam0, sub_3123( 29 ) )) || ((IS_CHAR_MODEL( uParam0, sub_3123( 28 ) )) || ((IS_CHAR_MODEL( uParam0, sub_3123( 10 ) )) || (IS_CHAR_MODEL( uParam0, sub_3123( 2 ) ))))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_3123(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_3786( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_3786(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_4305()
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

int sub_4383(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_1451() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_1451() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_1451() )))))
                {
                    if (NOT sub_4479())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1590() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_4564())
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

int sub_4479()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4564()
{
    return sub_4575( 0, 0 );
}

int sub_4575(boolean bParam0, unknown uParam1)
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

int sub_4678(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        uVar3 = sub_4704( uParam0 );
        switch (uVar3)
        {
            case 0:
            return 0;
            break;
            case 13:
            return 1;
            break;
            case 3:
            return 2;
            break;
            case 8:
            return 3;
            break;
            case 7:
            return 4;
            break;
            case 2:
            return 5;
            break;
            case 10:
            return 6;
            break;
            case 28:
            return 7;
            break;
            case 29:
            return 8;
            break;
            case 30:
            return 9;
            break;
        }
    }
    return -1;
}

int sub_4704(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_MODEL( uParam0, sub_3123( 0 ) ))
        {
            return 0;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 1 ) ))
        {
            return 1;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 2 ) ))
        {
            return 2;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 3 ) ))
        {
            return 3;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 4 ) ))
        {
            return 4;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 5 ) ))
        {
            return 5;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 6 ) ))
        {
            return 6;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 7 ) ))
        {
            return 7;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 8 ) ))
        {
            return 8;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 9 ) ))
        {
            return 9;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 10 ) ))
        {
            return 10;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 11 ) ))
        {
            return 11;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 12 ) ))
        {
            return 12;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 13 ) ))
        {
            return 13;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 14 ) ))
        {
            return 14;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 15 ) ))
        {
            return 15;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 16 ) ))
        {
            return 16;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 17 ) ))
        {
            return 17;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 18 ) ))
        {
            return 18;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 19 ) ))
        {
            return 19;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 22 ) ))
        {
            return 22;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 20 ) ))
        {
            return 20;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 24 ) ))
        {
            return 24;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 25 ) ))
        {
            return 25;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 26 ) ))
        {
            return 26;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 27 ) ))
        {
            return 27;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 52 ) ))
        {
            return 52;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 53 ) ))
        {
            return 53;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 28 ) ))
        {
            return 28;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 29 ) ))
        {
            return 29;
        }
        if (IS_CHAR_MODEL( uParam0, sub_3123( 30 ) ))
        {
            return 30;
        }
    }
    return 54;
}

string sub_5681(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "PLH_01A";
        break;
        case 2:
        return "PLH_01B";
        break;
        case 1:
        return "PLH_01C";
        break;
        case 3:
        return "PLH_01D";
        break;
        case 4:
        return "PLH_01E";
        break;
        case 5:
        return "PLH_01F";
        break;
        case 6:
        return "PLH_01G";
        break;
        case 7:
        return "PLH_01H";
        break;
        case 8:
        return "PLH_01I";
        break;
        case 9:
        return "PLH_01J";
        break;
    }
    return "PLH_01";
}

int sub_6007(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_4383( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1451(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_6282();
                l_U1 = 1;
                g_U9173 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_6282()
{
    return sub_4575( 1, 1 );
}

