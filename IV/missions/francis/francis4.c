void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U200 = 0;
    l_U217 = -1;
    l_U221 = 0;
    l_U222 = 1;
    l_U223 = 1;
    l_U231 = 150.00000000;
    l_U321 = 0;
    l_U322 = 150.00000000;
    l_U372 = 0;
    l_U595 = 0;
    l_U596 = 0;
    l_U597 = 0;
    l_U598 = 0;
    l_U599 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U602 = 0;
    l_U603 = 0;
    l_U604 = 0;
    l_U605 = 0;
    l_U606 = 0;
    l_U607 = 0;
    l_U608 = 0;
    l_U664 = 0;
    l_U665 = 0;
    l_U666 = 0;
    l_U669 = 0;
    l_U670 = 0;
    l_U672 = 0;
    l_U674 = 0;
    l_U675 = 0;
    l_U676 = 0;
    l_U681 = 0;
    l_U688 = 0;
    l_U689 = 0;
    l_U690 = 0;
    l_U695 = 0;
    l_U697 = -1;
    l_U700 = 0;
    l_U701 = 0;
    l_U707 = 1000.00000000;
    l_U714 = 0;
    l_U716 = 0;
    l_U834 = 0;
    l_U835 = 0;
    l_U836 = 0;
    l_U837 = 0;
    l_U838 = 0;
    l_U839 = 0;
    l_U840 = 0;
    l_U841 = 0;
    l_U842 = 0;
    l_U843 = 0;
    l_U844 = 0;
    l_U845 = 0;
    l_U846 = 0;
    l_U847 = 0;
    l_U848 = 0;
    l_U849 = 0;
    l_U850 = 0;
    l_U851 = 0;
    l_U852 = 0;
    l_U853 = 0;
    l_U854 = 0;
    l_U856 = 0;
    l_U857 = 0;
    l_U859 = 0;
    l_U860 = 0;
    l_U862 = 0;
    l_U863 = 0;
    l_U866 = 0;
    l_U867 = 0;
    l_U868 = 0;
    l_U870 = 0;
    l_U871 = 0;
    l_U873 = 0;
    l_U874 = 0;
    l_U875 = 0;
    l_U876 = 0;
    l_U878 = 0;
    l_U879 = 0;
    l_U880 = 0;
    l_U881 = 0;
    l_U882 = 0;
    l_U883 = 0;
    l_U884 = 0;
    l_U885 = 0;
    l_U886 = 0;
    l_U888 = 0;
    l_U890 = 0;
    l_U892 = 0;
    l_U893 = 0;
    l_U894 = 0;
    l_U895 = 0;
    l_U896 = 0;
    l_U897 = 0;
    l_U898 = 0;
    l_U899 = 0;
    l_U900 = 0;
    l_U901 = 0;
    l_U902 = 0;
    l_U903 = 0;
    l_U904 = 0;
    l_U905 = 0;
    l_U906 = 0;
    l_U907 = 0;
    l_U908 = 0;
    l_U909 = 0;
    l_U910 = 0;
    l_U911 = 0;
    l_U912 = 0;
    l_U913 = 0;
    l_U914 = 0;
    l_U915 = 0;
    l_U916 = 0;
    l_U917 = 0;
    l_U918 = 0;
    l_U919 = 0;
    l_U920 = 0;
    l_U921 = 0;
    l_U922 = 0;
    l_U923 = 0;
    l_U924 = 0;
    l_U925 = 0;
    l_U926 = 0;
    l_U927 = 0;
    l_U928 = 0;
    l_U929 = 0;
    l_U930 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_937();
        sub_3047();
    }
    SET_MISSION_FLAG( 1 );
    while (true)
    {
        WAIT( 0 );
        sub_5470();
        if (l_U894)
        {
            if (NOT (IS_CHAR_INJURED( l_U609 )))
            {
                if ((NOT (IS_CHAR_ON_SCREEN( l_U609 ))) AND ((sub_5702( ref l_U609 )) > 200))
                {
                    CLEAR_PRINTS();
                    PRINT( "FAIL_01", 7500, 1 );
                    sub_5913();
                }
            }
        }
        sub_6799( ref l_U612 );
        switch (l_U595)
        {
            case 0:
            sub_7013();
            break;
            case 1:
            sub_9477();
            break;
            case 2:
            sub_19256();
            break;
            case 3:
            sub_25185();
            break;
            case 6:
            if (sub_19375( ref l_U692, 2500 ))
            {
                SET_CHAR_PROOFS( l_U609, 1, 1, 1, 1, 1 );
                SET_CHAR_HEALTH( l_U609, 200 );
                SET_CHAR_MAX_HEALTH( l_U609, 200 );
                l_U595 = 5;
            }
            break;
            case 5:
            sub_33812();
            break;
            case 7:
            sub_35572();
            sub_37009( ref l_U609 );
            break;
            case 4:
            sub_37663();
            break;
        }
        if ((NOT l_U901) AND (IS_KEYBOARD_KEY_PRESSED( 21 )))
        {
            CREATE_CHAR( 26, 26615298, l_U764._fU0, l_U764._fU4, l_U764._fU8, ref l_U609, 1 );
            SET_CHAR_HEADING( l_U609, l_U718 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U609, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U609, 1 );
            l_U901 = 1;
            l_U595 = 5;
        }
        if (l_U916)
        {
            OPEN_SEQUENCE_TASK( ref l_U619 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -138.29670000, 1378.42100000, 31.79690000, 2, -2, 0.40000000 );
            TASK_CHAR_SLIDE_TO_COORD( 0, l_U726, 1378.42100000, 31.79690000, l_U725, 1061158912 );
            TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "Spooked_2nd_Half", "missfrancis4", 8.00000000, 0, 1, 1, 1, 0, 1, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U619 );
            TASK_PERFORM_SEQUENCE( l_U609, l_U619 );
            CLEAR_SEQUENCE_TASK( l_U619 );
            l_U916 = 0;
        }
        if (l_U917)
        {
            if (NOT l_U918)
            {
                CREATE_CHAR( 26, 26615298, -136.14890000, 1378.78200000, 31.80130000, ref l_U609, 1 );
                l_U918 = 1;
            }
            SET_CHAR_COORDINATES( l_U609, -136.14890000, 1378.78200000, 31.80130000 );
            SET_CHAR_HEADING( l_U609, 119.38800000 );
            l_U917 = 0;
        }
        if (l_U919)
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U609, -136.92710000, 1379.37500000, 31.80130000, 3, -1, 0.10000000 );
            l_U919 = 0;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            sub_37837();
        }
    }
    return;
}

void sub_937()
{
    sub_946();
    return;
}

void sub_946()
{
    int iVar2;

    iVar2 = 11;
    sub_960( iVar2 );
    sub_2136( iVar2 );
    return;
}

void sub_960(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_1004();
        sub_1165();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1273();
            sub_1312();
        }
    }
    sub_1388();
    sub_1489();
    uVar5 = sub_1602( uParam0 );
    sub_2043( uVar5, 0 );
    return;
}

void sub_1004()
{
    sub_1018( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1118();
    }
    return;
}

void sub_1018(int iParam0)
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
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_1118()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1165()
{
    sub_1174();
    return;
}

void sub_1174()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1273()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1312()
{
    sub_1321();
    return;
}

void sub_1321()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1388()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_1489()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1511();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1511()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1602(unknown uParam0)
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
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_2001( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_2001(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2043(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_2136(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2145();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2920();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2145()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2183( 5, g_U569[I] )) == 1))
        {
            if ((sub_2183( 1, g_U569[I] )) != 0)
            {
                sub_2469( I );
            }
        }
    }
    if (NOT sub_2635())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_2183(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2469(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2554( g_U569 - 1 );
    return;
}

void sub_2554(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2635()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2183( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2920()
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

void sub_3047()
{
    if (IS_PLAYER_PLAYING( sub_3056() ))
    {
        SET_PLAYER_CONTROL( sub_3056(), 1 );
    }
    SET_SNIPER_ZOOM_FACTOR( 1.00000000 );
    sub_3125( 11 );
    sub_3169();
    sub_3321( 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3461(), 1 );
    g_U9366 = 0;
    g_U9368 = 1;
    sub_3522();
    sub_3561( 19, 0 );
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "TV_fakeStatic" );
    CLEAR_HELP();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3056()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3125(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_3169()
{
    if (l_U105)
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
    l_U103 = 0;
    l_U102 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3321(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3461()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3522()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3561(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_3585();
    return;
}

void sub_3585()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_3613( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_3658( 13, iVar3 )))
        {
            sub_3759( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_3943( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_3613( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_3658( 11, iVar3 )))
        {
            sub_3759( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_3943( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_4137( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_3658( g_U10324[I]._fU12, iVar3 )))
        {
            sub_3759( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_4445( I );
        }
        else
        {
            sub_3943( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_4674();
    return;
}

int sub_3613(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_3658(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3759(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((iParam4 == 1) || ((iParam4 == 4) || ((iParam4 == 3) || (iParam4 == 2))))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U0 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_3943(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_4137(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_4179( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_3613( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_4179(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_4445(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_4674()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_3613( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_4719( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_3613( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_4719( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_4137( I )))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_4137( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_4719( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_4719( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_3461() )))
        {
            GET_CHAR_COORDINATES( sub_3461(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_5210( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_4719( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_4719(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_5210(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

int sub_5470()
{
    if (NOT l_U914)
    {
        if (DOES_CHAR_EXIST( l_U609 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U609 )))
            {
                return 1;
            }
            else
            {
                sub_3321( 0 );
                REMOVE_BLIP( l_U623 );
                GET_GAME_TIMER( ref l_U692 );
                l_U914 = 1;
                CLEAR_HELP();
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3461(), -173.32630000, 1381.92100000, 42.60620000, 11.50000000, 27.20000000, 25.22300000, 0 ))
                {
                    CLEAR_PRINTS();
                    PRINT_NOW( "PROMPT_2", 7500, 0 );
                }
                l_U595 = 4;
            }
        }
    }
    return 0;
}

void sub_5702(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_3461(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CHAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return Result;
}

void sub_5913()
{
    if (DOES_CHAR_EXIST( l_U609 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U609 )))
        {
            DELETE_CHAR( ref l_U609 );
        }
    }
    if (NOT l_U911)
    {
        sub_6003( 11, "FM4_CALLFF", "FM4AUD", 0 );
    }
    g_U65011++;
    if (g_U65011 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3056(), 150 );
        SAY_AMBIENT_SPEECH( sub_3461(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_6669();
    sub_3047();
    return;
}

void sub_6003(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_6047( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_6047(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_6669()
{
    sub_6678();
    return;
}

void sub_6678()
{
    int iVar2;

    iVar2 = 11;
    sub_6692( iVar2 );
    sub_2136( iVar2 );
    return;
}

void sub_6692(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3056(), 150 );
    CLEAR_HELP();
    sub_960( uParam0 );
    return;
}

void sub_6799(unknown uParam0)
{
    int iVar3;

    if (sub_6809( ref iVar3 ))
    {
        if ((uParam0^) != iVar3)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( uParam0 );
            (uParam0^) = iVar3;
            SET_CAR_AS_MISSION_CAR( (uParam0^) );
        }
    }
    return;
}

int sub_6809(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3461() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3461(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_7013()
{
    if (g_U9893._fU24)
    {
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U614 );
        if (DOES_VEHICLE_EXIST( l_U614 ))
        {
            if (IS_VEH_DRIVEABLE( l_U614 ))
            {
                if (LOCATE_CAR_3D( l_U614, -152.77020000, -899.70390000, 2.99680000, 5.90000000, 5.90000000, 5.90000000, 0 ))
                {
                    SET_CAR_AS_MISSION_CAR( l_U614 );
                    CLEAR_AREA( -150.16330000, -795.99150000, 4.20110000, 4.00000000, 1 );
                    SET_CAR_HEADING( l_U614, 358.99640000 );
                    SET_CAR_COORDINATES( l_U614, -157.02740000, -884.27800000, 4.12160000 );
                }
            }
        }
        LOAD_ADDITIONAL_TEXT( "FM4AUD", 6 );
        GET_GAME_TIMER( ref l_U692 );
        START_CUTSCENE_NOW( "FM_4" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "FM_4" );
    }
    sub_7377();
    return;
}

void sub_7377()
{
    if (g_U9368)
    {
        g_U9368 = 0;
    }
    CLEAR_WANTED_LEVEL( sub_3056() );
    l_U819 = {-138.15000000, 1379.50000000, 31.82000000};
    l_U828 = {-138.25730000, 1379.50000000, 31.82000000};
    l_U764 = {-138.00000000, 1379.50000000, 31.70000000};
    l_U718 = 270.00000000;
    l_U816 = {-138.25730000, 1379.50000000, 31.90000000};
    l_U737 = {-136.13800000, 1382.49800000, 31.79690000};
    l_U746 = {0.00000000, 0.50000000, 0.50000000};
    l_U749 = {-146.55910000, 1383.57300000, 19.33940000};
    l_U752 = {138.05830000, 562.93510000, 13.56230000};
    l_U719 = 91.36040000;
    l_U773 = {-146.33700000, 1364.14000000, 21.71300000};
    l_U776 = {-133.10700000, 1380.06800000, 31.79690000};
    l_U713 = 180.64000000;
    l_U779 = {0.00000000, -1.55000000, -0.50000000};
    l_U782 = {0.00000000, 0.00000000, 0.00000000};
    l_U794 = {-134.95200000, 1377.51200000, 32.80308000};
    l_U797 = {-134.95200000, 1377.51200000, 32.80308000};
    l_U825 = {-165.35800000, 1379.82800000, 42.22800000};
    l_U822 = {64.82010000, -342.34420000, 13.76230000};
    for ( l_U673 = 0; l_U673 <= 2; l_U673++ )
    {
        l_U931[l_U673] = 0;
    }
    l_U935 = 723973206;
    l_U584._fU4 = -1097828879;
    REQUEST_MODEL( 26615298 );
    GET_WEAPONTYPE_MODEL( 17, ref l_U936 );
    REQUEST_MODEL( l_U936 );
    GET_WEAPONTYPE_MODEL( 7, ref l_U937 );
    REQUEST_MODEL( l_U937 );
    REQUEST_MODEL( l_U935 );
    REQUEST_MODEL( -1097828879 );
    SUPPRESS_CAR_MODEL( -1097828879 );
    REQUEST_MODEL( 284694541 );
    REQUEST_STREAMED_TXD( "TV_fakeStatic", 0 );
    REQUEST_ANIMS( "missfrancis4" );
    REQUEST_INTERIOR_MODELS( 1485770398, "Room_Apart" );
    sub_8052( "FM4AUD" );
    sub_8158( 11 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U631 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U632 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U633 );
    LOAD_COMBAT_DECISION_MAKER( 7, ref l_U635 );
    LOAD_ADDITIONAL_TEXT( "FRANCI4", 0 );
    LOAD_ALL_OBJECTS_NOW();
    LOAD_SCENE( -153.22030000, -898.65290000, 2.99680000 );
    CLEAR_AREA( l_U752._fU0, l_U752._fU4, l_U752._fU8, 25, 1 );
    CREATE_CAR( -1097828879, l_U752._fU0, l_U752._fU4, l_U752._fU8, ref l_U611, 1 );
    SET_CAR_HEADING( l_U611, l_U719 );
    ADD_BLIP_FOR_CAR( l_U611, ref l_U630 );
    CHANGE_BLIP_COLOUR( l_U630, 2 );
    SET_ROUTE( l_U630, 1 );
    CLEAR_AREA( l_U749._fU0, l_U749._fU4, l_U749._fU8, 25, 1 );
    CREATE_CAR( l_U935, l_U749._fU0, l_U749._fU4, l_U749._fU8, ref l_U610, 1 );
    SET_CAR_HEADING( l_U610, 0.00000000 );
    CHANGE_CAR_COLOUR( l_U610, 0, 0 );
    CREATE_OBJECT( 284694541, -139.55810000, 1379.48100000, 34.01812000, ref l_U636, 1 );
    SET_OBJECT_HEALTH( l_U636, l_U707 );
    SET_OBJECT_HEADING( l_U636, 270.00000000 );
    FREEZE_OBJECT_POSITION( l_U636, 1 );
    SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U636, 1 );
    ADD_SCENARIO_BLOCKING_AREA( -124.71080000, 1384.20200000, 50.00000000, -139.46800000, 1374.37400000, 30.00000000 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U635, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U635, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U635, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U635, 20 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U633, 2 );
    SET_RELATIONSHIP( 5, 25, 24 );
    SET_RELATIONSHIP( 5, 24, 25 );
    CREATE_WIDGET_GROUP( "locate dimmensions" );
    ADD_WIDGET_FLOAT_SLIDER( "WIDTH", ref l_U721, -50.00000000, 50.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "DEPTH", ref l_U722, -50.00000000, 50.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "HEIGHT", ref l_U723, -50.00000000, 50.00000000, 0.10000000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Lure animation" );
    ADD_WIDGET_TOGGLE( "activate lure animation", ref l_U916 );
    ADD_WIDGET_TOGGLE( "reposition player", ref l_U917 );
    ADD_WIDGET_TOGGLE( "run", ref l_U919 );
    ADD_WIDGET_FLOAT_SLIDER( "heading: ", ref l_U725, -1000.00000000, 1000.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "widget_pos_x: ", ref l_U726, -1000.00000000, 1000.00000000, 0.10000000 );
    END_WIDGET_GROUP();
    SET_CHAR_COORDINATES( sub_3461(), -153.22030000, -898.65290000, 2.99650000 );
    SET_CHAR_HEADING( sub_3461(), 0.00000000 );
    sub_9162( 1 );
    if (sub_9332())
    {
        CLEAR_PRINTS();
        PRINT_NOW( "GUN_09", 7500, 1 );
    }
    else
    {
        CLEAR_PRINTS();
        PRINT_NOW( "GUN_08", 7500, 1 );
    }
    l_U595 = 1;
    return;
}

void sub_8052(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_8069();
    return;
}

void sub_8069()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_8158(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_9162(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3321( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_3056() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_3461() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_3461() );
        }
        SET_PLAYER_CONTROL( sub_3056(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3461(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

int sub_9332()
{
    if ((HAS_CHAR_GOT_WEAPON( sub_3461(), 17 )) || (HAS_CHAR_GOT_WEAPON( sub_3461(), 16 )))
    {
        return 1;
    }
    return 0;
}

void sub_9477()
{
    switch (l_U600)
    {
        case 0:
        switch (l_U601)
        {
            case 0:
            if (sub_9582())
            {
                break;
            }
            if (sub_10014())
            {
                sub_9782();
            }
            if ((NOT (l_U682[0] == 1)) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
            {
                SET_CHAR_COORDINATES( sub_3461(), 140.80850000, 591.64960000, 13.56190000 );
                SET_CHAR_HEADING( sub_3461(), 351.30550000 );
                l_U682[0] = 1;
            }
            break;
            case 1:
            if (sub_9332())
            {
                sub_3561( 19, 0 );
                sub_9782();
            }
            break;
            case 2:
            sub_10538( ref l_U628, ref l_U773, "GUN_06", "REMIND_01" );
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3461(), l_U773._fU0, l_U773._fU4, l_U773._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
            {
                CLEAR_AREA_OF_CARS( l_U773._fU0, l_U773._fU4, l_U773._fU8, 10.00000000 );
            }
            if (DOES_BLIP_EXIST( l_U628 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3461(), l_U773._fU0, l_U773._fU4, l_U773._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
                {
                    if (NOT (sub_10948( sub_3461() )))
                    {
                        if (sub_11215( 1, 1 ))
                        {
                            sub_11505();
                            REMOVE_BLIP( l_U628 );
                            CLEAR_PRINTS();
                            l_U894 = 1;
                            l_U601 = 3;
                        }
                    }
                }
            }
            if ((NOT l_U876) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3461() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3461(), ref l_U611 );
                    if (NOT (l_U611 == nil))
                    {
                        if (NOT (IS_CAR_DEAD( l_U611 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_3461(), l_U611 ))
                            {
                                LOAD_SCENE( l_U773._fU0, l_U773._fU4, l_U773._fU8 );
                                SET_CHAR_COORDINATES( sub_3461(), l_U773._fU0, l_U773._fU4 - 10, l_U773._fU8 );
                                l_U876 = 1;
                            }
                        }
                    }
                }
                else if (NOT (IS_CAR_DEAD( l_U611 )))
                {
                    WARP_CHAR_INTO_CAR( sub_3461(), l_U611 );
                    LOAD_SCENE( l_U773._fU0, l_U773._fU4, l_U773._fU8 );
                    SET_CHAR_COORDINATES( sub_3461(), l_U773._fU0, l_U773._fU4 - 10, l_U773._fU8 );
                    l_U876 = 1;
                }
            }
            break;
            case 3:
            if (NOT l_U913)
            {
                sub_12002();
                sub_3522();
                l_U913 = 1;
            }
            sub_12116( 11, "FM4_CALL13", "FM4AUD" );
            l_U601 = 4;
            break;
            case 4:
            if (NOT (sub_15997( 0 )))
            {
                if (sub_16264() != -1)
                {
                    l_U697 = sub_16264();
                }
            }
            else if (l_U697 != -1)
            {
                if ((l_U697 > 1) || (NOT sub_16322()))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3461() )))
                    {
                        if (HAS_CHAR_GOT_WEAPON( sub_3461(), 17 ))
                        {
                            SET_CURRENT_CHAR_WEAPON( sub_3461(), 17, 1 );
                            l_U912 = 1;
                        }
                    }
                    ADD_BLIP_FOR_COORD( l_U825._fU0, l_U825._fU4, l_U825._fU8, ref l_U622 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "PROMPT_7B", 7500, 1 );
                    l_U600 = 1;
                }
                else
                {
                    l_U601 = 3;
                }
            }
            else
            {
                l_U601 = 3;
            }
            break;
        }
        break;
        case 1:
        if (NOT l_U912)
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3461() )))
            {
                if (HAS_CHAR_GOT_WEAPON( sub_3461(), 17 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_3461(), 17, 1 );
                    l_U912 = 1;
                }
            }
        }
        sub_10538( ref l_U622, ref l_U825, "GUN_06", "PROMPT_7B" );
        if (DOES_BLIP_EXIST( l_U622 ))
        {
            if (sub_9332())
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3461(), l_U825._fU0, l_U825._fU4, l_U825._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
                {
                    REMOVE_BLIP( l_U622 );
                    l_U595 = 2;
                }
            }
        }
        if (NOT l_U875)
        {
            if (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                SET_CHAR_COORDINATES( sub_3461(), -172.08600000, 1378.53700000, 55.62970000 );
                l_U875 = 1;
            }
        }
        break;
        case 2:
        if (NOT l_U864)
        {
            if (NOT (IS_CAR_DEAD( l_U610 )))
            {
                CLEAR_AREA( -146.55910000, 1383.57300000, 19.33940000, 5.00000000, 1 );
                SET_CAR_COORDINATES( l_U610, -146.55910000, 1383.57300000, 19.33940000 );
                SET_CAR_HEADING( l_U610, 1.71050000 );
            }
            BEGIN_CAM_COMMANDS( ref l_U674 );
            CREATE_CAM( 14, ref l_U651 );
            CREATE_CAM( 25, ref l_U650 );
            CREATE_CAM( 14, ref l_U652 );
            CREATE_CAM( 14, ref l_U653 );
            CREATE_CAM( 14, ref l_U655 );
            CREATE_CAM( 3, ref l_U654 );
            GET_GAME_CAM( ref l_U651 );
            GET_CAM_POS( l_U651, ref l_U755._fU0, ref l_U755._fU4, ref l_U755._fU8 );
            GET_CAM_ROT( l_U651, ref l_U758._fU0, ref l_U758._fU4, ref l_U758._fU8 );
            CREATE_CAM( 14, ref l_U644[0] );
            SET_CAM_POS( l_U644[0], l_U755._fU0, l_U755._fU4, l_U755._fU8 );
            SET_CAM_ROT( l_U644[0], l_U758._fU0, l_U758._fU4, l_U758._fU8 );
            SET_CAM_FOV( l_U644[0], 45.00000000 );
            ADD_CAM_SPLINE_NODE( l_U650, l_U644[0] );
            CREATE_CAM( 14, ref l_U644[1] );
            SET_CAM_POS( l_U644[1], -164.29960000, 1379.94700000, 42.59358000 );
            SET_CAM_ROT( l_U644[1], -1.54564700, -0.00000000, -88.89196000 );
            SET_CAM_FOV( l_U644[1], 45.00000000 );
            ADD_CAM_SPLINE_NODE( l_U650, l_U644[1] );
            CREATE_CAM( 14, ref l_U644[2] );
            SET_CAM_POS( l_U644[2], -145.87510000, 1378.43700000, 36.39314000 );
            SET_CAM_ROT( l_U644[2], -19.02619000, -0.00000000, -93.97051000 );
            SET_CAM_FOV( l_U644[2], 45.00000000 );
            ADD_CAM_SPLINE_NODE( l_U650, l_U644[2] );
            CREATE_CAM( 14, ref l_U644[3] );
            SET_CAM_POS( l_U644[3], -139.28540000, 1378.30300000, 33.68155000 );
            SET_CAM_ROT( l_U644[3], -24.75577000, 0.00000000, -88.81390000 );
            SET_CAM_FOV( l_U644[3], 45.00000000 );
            ADD_CAM_SPLINE_NODE( l_U650, l_U644[3] );
            CREATE_CAM( 14, ref l_U644[4] );
            SET_CAM_POS( l_U644[4], -135.90290000, 1378.53900000, 31.89296000 );
            SET_CAM_ROT( l_U644[4], 10.20727000, -0.00000000, 63.78501000 );
            SET_CAM_FOV( l_U644[4], 45.00000000 );
            ADD_CAM_SPLINE_NODE( l_U650, l_U644[4] );
            SET_CAM_SPLINE_DURATION( l_U650, 8000 );
            CREATE_CHAR( 26, 26615298, l_U764._fU0, l_U764._fU4, l_U764._fU8, ref l_U609, 1 );
            SET_CHAR_HEADING( l_U609, l_U718 );
            sub_17729( 1, l_U609, "DEALER_M", 0 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U609, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U609, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U609, 1 );
            SET_COMBAT_DECISION_MAKER( l_U609, l_U635 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U609, 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U609, "Room_Apart" );
            GET_INTERIOR_AT_COORDS( l_U764._fU0, l_U764._fU4, l_U764._fU8, ref l_U943 );
            ACTIVATE_INTERIOR( l_U943, 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_ACTIVE( l_U650, 1 );
            SET_CAM_PROPAGATE( l_U650, 1 );
            GET_GAME_TIMER( ref l_U690 );
            SETTIMERB( 0 );
            SETTIMERA( 0 );
            l_U864 = 1;
        }
        if ((TIMERB() > 8500) AND (l_U864))
        {
            if (NOT l_U865)
            {
                SET_CAM_PROPAGATE( l_U650, 0 );
                SET_CAM_ACTIVE( l_U650, 0 );
                SET_CAM_POS( l_U652, -135.90290000, 1378.53900000, 31.89296000 );
                SET_CAM_ROT( l_U652, 10.20727000, -0.00000000, 63.78501000 );
                SET_CAM_POS( l_U653, -135.61200000, 1378.91300000, 32.84066000 );
                SET_CAM_ROT( l_U653, 5.17315800, -0.00000000, -160.57470000 );
                SET_CAM_INTERP_STYLE_CORE( l_U654, l_U652, l_U653, 3000, 0 );
                SET_CAM_ACTIVE( l_U654, 1 );
                SET_CAM_PROPAGATE( l_U654, 1 );
                SETTIMERB( 0 );
                l_U865 = 1;
            }
        }
        if ((NOT l_U866) AND (l_U865))
        {
            if (NOT IS_CAM_INTERPOLATING())
            {
                SET_CAM_PROPAGATE( l_U654, 0 );
                SET_CAM_ACTIVE( l_U654, 0 );
                SET_CAM_PROPAGATE( l_U652, 0 );
                SET_CAM_ACTIVE( l_U652, 0 );
                SET_CAM_POS( l_U655, -136.32010000, 1377.55900000, 32.67090000 );
                SET_CAM_ROT( l_U655, 6.03156800, -0.00000000, -74.59894000 );
                SET_CAM_INTERP_STYLE_CORE( l_U654, l_U653, l_U655, 3000, 0 );
                SET_CAM_ACTIVE( l_U654, 1 );
                SET_CAM_PROPAGATE( l_U654, 1 );
                SETTIMERB( 0 );
                l_U866 = 1;
            }
        }
        if ((NOT l_U899) AND (l_U866))
        {
            if (TIMERB() > 6000)
            {
                SET_CAM_PROPAGATE( l_U654, 0 );
                SET_CAM_ACTIVE( l_U654, 0 );
                SET_CAM_PROPAGATE( l_U653, 0 );
                SET_CAM_ACTIVE( l_U653, 0 );
                SET_CAM_POS( l_U652, -140.95000000, 1378.88100000, 34.03774000 );
                SET_CAM_ROT( l_U652, 1.71488700, -0.00000000, -85.05917000 );
                SET_CAM_INTERP_STYLE_CORE( l_U654, l_U655, l_U652, 3000, 0 );
                SET_CAM_ACTIVE( l_U654, 1 );
                SET_CAM_PROPAGATE( l_U654, 1 );
                SETTIMERB( 0 );
                l_U600 = 3;
            }
        }
        break;
        case 3:
        if ((l_U879) || (TIMERB() > 4500))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_CAM_PROPAGATE( l_U650, 0 );
            SET_CAM_ACTIVE( l_U650, 0 );
            GET_GAME_VIEWPORT_ID( ref l_U942 );
            CLEAR_ROOM_FOR_VIEWPORT( l_U942 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CHAR_COORDINATES( sub_3461(), -164.16650000, 1380.64600000, 40.62840000 );
            SET_CHAR_HEADING( sub_3461(), 299.21020000 );
            ADD_BLIP_FOR_CHAR( l_U609, ref l_U623 );
            SET_CAM_BEHIND_PED( sub_3461() );
            DESTROY_ALL_CAMS();
            SET_WIDESCREEN_BORDERS( 0 );
            END_CAM_COMMANDS( ref l_U674 );
            SET_CHAR_COORDINATES( sub_3461(), -165.27000000, 1380.14800000, 40.62890000 );
            SET_CHAR_HEADING( sub_3461(), 300.21350000 );
            SET_PLAYER_CONTROL( sub_3056(), 1 );
            CLEAR_PRINTS();
            l_U879 = 1;
            SET_OBJECT_HEALTH( l_U636, l_U707 );
            if (NOT GET_IS_HIDEF())
            {
                GET_GAME_TIMER( ref l_U691 );
                l_U902 = 1;
            }
            GET_GAME_TIMER( ref l_U689 );
            GET_GAME_TIMER( ref l_U688 );
            CLEAR_HELP();
            PRINT_HELP_FOREVER( "fr4_help_01" );
            l_U595 = 3;
            DO_SCREEN_FADE_IN( 500 );
        }
        break;
    }
    if (l_U864)
    {
        if (NOT l_U879)
        {
            if (sub_19158())
            {
                l_U600 = 3;
                l_U879 = 1;
            }
        }
    }
    return;
}

int sub_9582()
{
    if (NOT l_U889)
    {
        if (DOES_VEHICLE_EXIST( l_U611 ))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U611 )))
            {
                REMOVE_BLIP( l_U630 );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U611 );
                l_U889 = 1;
                if (NOT sub_9332())
                {
                    if ((GET_CHAR_MONEY( sub_3461() )) >= 6000)
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "GUN_06", 7500, 1 );
                        sub_3561( 19, 1 );
                        l_U601 = 1;
                    }
                    else
                    {
                        CLEAR_PRINTS();
                        PRINT_NOW( "PROMPT_1", 7500, 1 );
                        sub_5913();
                    }
                }
                else
                {
                    sub_9782();
                }
                return 1;
            }
        }
    }
    return 0;
}

void sub_9782()
{
    if (NOT (DOES_BLIP_EXIST( l_U628 )))
    {
        SET_SNIPER_ZOOM_FACTOR( 2.20000000 );
        ADD_BLIP_FOR_COORD( l_U773._fU0, l_U773._fU4, l_U773._fU8, ref l_U628 );
        SET_ROUTE( l_U628, 1 );
        sub_9891( ref l_U628, -147.02250000, 1356.30900000, 19.34480000, 1.12880000 );
        CLEAR_PRINTS();
        PRINT_NOW( "REMIND_01", 7500, 1 );
        l_U601 = 2;
    }
    return;
}

void sub_9891(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_10014()
{
    if (NOT l_U898)
    {
        if (IS_VEH_DRIVEABLE( l_U611 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_3461(), l_U611 ))
            {
                if (DOES_BLIP_EXIST( l_U630 ))
                {
                    if (sub_9332())
                    {
                        if (HAS_CHAR_GOT_WEAPON( sub_3461(), 16 ))
                        {
                            sub_10119( 16 );
                            if (sub_10249())
                            {
                                return 1;
                            }
                        }
                        else
                        {
                            HAS_CHAR_GOT_WEAPON( sub_3461(), 17 );
                            sub_10119( 17 );
                            if (sub_10249())
                            {
                                return 1;
                            }
                        }
                    }
                    else
                    {
                        GIVE_WEAPON_TO_CHAR( sub_3461(), 17, 22, 0 );
                        if (sub_10249())
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

void sub_10119(unknown uParam0)
{
    PRINTSTRING( "fail_0" );
    PRINTNL();
    GET_AMMO_IN_CHAR_WEAPON( sub_3461(), uParam0, ref l_U698 );
    PRINTSTRING( "fail_1" );
    PRINTNL();
    l_U699 = 22 - l_U698;
    if (l_U699 < 0)
    {
        l_U699 = 1;
    }
    ADD_AMMO_TO_CHAR( sub_3461(), uParam0, l_U699 );
    return;
}

int sub_10249()
{
    REMOVE_BLIP( l_U630 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U611 );
    l_U898 = 1;
    return 1;
}

void sub_10538(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    switch (l_U608)
    {
        case 0:
        if (NOT sub_9332())
        {
            if (DOES_BLIP_EXIST( (uParam0^) ))
            {
                REMOVE_BLIP( (uParam0^) );
            }
            sub_3561( 19, 1 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam2, 7500, 1 );
            l_U608 = 1;
        }
        break;
        case 1:
        if (sub_9332())
        {
            sub_3561( 19, 0 );
            SET_SNIPER_ZOOM_FACTOR( 2.20000000 );
            ADD_BLIP_FOR_COORD( iParam1->_fU0, iParam1->_fU4, iParam1->_fU8, uParam0 );
            SET_ROUTE( l_U628, 1 );
            sub_9891( ref l_U628, -147.02250000, 1356.30900000, 19.34480000, 1.12880000 );
            CLEAR_PRINTS();
            PRINT_NOW( uParam3, 7500, 1 );
            l_U608 = 0;
        }
        break;
    }
    return;
}

int sub_10948(int iParam0)
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
                if (sub_11012( uVar3 ))
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

int sub_11012(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

int sub_11215(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3461() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3461(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3461() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3461(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3461()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3461() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3461() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3056() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3056() )))
    {
        return 0;
    }
    return 1;
}

void sub_11505()
{
    float fVar2;
    unknown uVar3;

    if ((IS_CHAR_ON_ANY_BIKE( sub_3461() )) || (IS_CHAR_IN_ANY_CAR( sub_3461() )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3461(), ref uVar3 );
        if (IS_VEH_DRIVEABLE( uVar3 ))
        {
            SET_PLAYER_CONTROL( sub_3056(), 0 );
            GET_CAR_SPEED( uVar3, ref fVar2 );
            while (fVar2 > 0.20000000)
            {
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    GET_CAR_SPEED( uVar3, ref fVar2 );
                }
            }
            SET_PLAYER_CONTROL( sub_3056(), 1 );
        }
    }
    return;
}

void sub_12002()
{
    return sub_12013( 1, 1 );
}

int sub_12013(boolean bParam0, unknown uParam1)
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

void sub_12116(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_12174( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_12174(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_12244( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_12244( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3056() )))
    {
        sub_12244( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3461() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3461() )))
    {
        sub_12244( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_12244( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_12701()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_12244( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_12701()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_14073( uParam0, ref g_U91._fU176 );
    sub_15454( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_15694( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_12244(unknown uParam0)
{
    return;
}

int sub_12701()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_12758())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_12758()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3056() )))
    {
        sub_12244( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_12244( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_12244( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_12244( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3056() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3461() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3461(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_12244( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3461() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_12244( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_12244( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3056() )))
    {
        sub_12244( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_14073(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_15454(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_15694(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_15997(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3461(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_12244( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_16264()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_16322()
{
    return g_U91._fU504;
}

void sub_17729(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_17809( "\n PED NUMBER ", uParam0 );
    sub_15694( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_17809(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_19158()
{
    if (NOT (IS_CONTROL_PRESSED( 2, 77 )))
    {
        l_U881 = 1;
    }
    else if (l_U881 == 1)
    {
        l_U881 = 0;
        return 1;
    }
    return 0;
}

void sub_19256()
{
    PRINTSTRING( "number of scripts running = " );
    PRINTINT( GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" ) );
    PRINTNL();
    if (NOT l_U879)
    {
        if (l_U607 != 0)
        {
            if (sub_19362( ref l_U693, 1000 ))
            {
                l_U607 = 7;
                l_U879 = 1;
            }
        }
    }
    switch (l_U607)
    {
        case 0:
        sub_19589( ref l_U609, ref l_U612 );
        if (sub_20042( 1 ))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3461() );
            if (DOES_VEHICLE_EXIST( l_U612 ))
            {
                if (IS_VEH_DRIVEABLE( l_U612 ))
                {
                    if (LOCATE_CAR_3D( l_U612, -173.32630000, 1381.92100000, 42.60620000, 11.50000000, 27.20000000, 25.22300000, 0 ))
                    {
                        DELETE_CAR( ref l_U612 );
                    }
                }
            }
            CLEAR_AREA( l_U819._fU0, l_U819._fU4, l_U819._fU8, 100.00000000, 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3461() );
            SET_CHAR_COORDINATES( sub_3461(), -164.11270000, 1379.89800000, 40.62890000 );
            SET_CHAR_HEADING( sub_3461(), 291.11610000 );
            if (HAS_CHAR_GOT_WEAPON( sub_3461(), 17 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3461(), 17, 1 );
            }
            else if (HAS_CHAR_GOT_WEAPON( sub_3461(), 16 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_3461(), 16, 1 );
            }
            TASK_AIM_GUN_AT_COORD( sub_3461(), l_U764._fU0, l_U764._fU4, l_U764._fU8, 999999 );
            LOAD_SCENE( l_U764._fU0, l_U764._fU4, l_U764._fU8 );
            GET_INTERIOR_AT_COORDS( l_U764._fU0, l_U764._fU4, l_U764._fU8, ref l_U943 );
            ACTIVATE_INTERIOR( l_U943, 1 );
            if (NOT (IS_CAR_DEAD( l_U610 )))
            {
                CLEAR_AREA( -146.55910000, 1383.57300000, 19.33940000, 5.00000000, 1 );
                SET_CAR_COORDINATES( l_U610, -146.55910000, 1383.57300000, 19.33940000 );
                SET_CAR_HEADING( l_U610, 1.71050000 );
            }
            BEGIN_CAM_COMMANDS( ref l_U674 );
            CREATE_CAM( 14, ref l_U652 );
            CREATE_CAM( 14, ref l_U653 );
            CREATE_CAM( 14, ref l_U655 );
            CREATE_CAM( 14, ref l_U656 );
            CREATE_CAM( 14, ref l_U657 );
            CREATE_CAM( 14, ref l_U658 );
            CREATE_CAM( 14, ref l_U659 );
            CREATE_CAM( 3, ref l_U654 );
            SET_CAM_POS( l_U652, -164.64220000, 1379.52900000, 42.47096000 );
            SET_CAM_ROT( l_U652, -11.83673000, -0.00000000, -82.27792000 );
            SET_CAM_FOV( l_U652, 39.90001000 );
            SET_CAM_POS( l_U653, -165.02200000, 1379.39400000, 42.78750000 );
            SET_CAM_ROT( l_U653, -23.72442000, 0.00000000, -79.28174000 );
            SET_CAM_FOV( l_U653, 36.00002000 );
            SET_CAM_POS( l_U655, -137.46580000, 1378.17700000, 33.18366000 );
            SET_CAM_ROT( l_U655, 13.95581000, -0.00000000, 82.01656000 );
            SET_CAM_FOV( l_U655, 16.80007000 );
            SET_CAM_POS( l_U656, -136.17440000, 1377.87000000, 32.55308000 );
            SET_CAM_ROT( l_U656, 11.20563000, -0.00000000, 72.62021000 );
            SET_CAM_FOV( l_U656, 37.20002000 );
            SET_CAM_POS( l_U657, -136.17440000, 1377.87000000, 32.55308000 );
            SET_CAM_ROT( l_U657, 7.42409500, 0.00000000, 58.63997000 );
            SET_CAM_FOV( l_U657, 39.30002000 );
            SET_CAM_POS( l_U658, -137.61690000, 1377.78700000, 32.52659000 );
            SET_CAM_ROT( l_U658, 9.37216100, 0.00000000, -90.32920000 );
            SET_CAM_FOV( l_U658, 26.70005000 );
            SET_CAM_POS( l_U659, -137.61690000, 1377.78700000, 32.52659000 );
            SET_CAM_ROT( l_U659, 9.37216100, 0.00000000, -90.32920000 );
            SET_CAM_FOV( l_U659, 24.70005000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U654, l_U652, l_U653, 5000, 500 );
            SET_CAM_ACTIVE( l_U654, 1 );
            SET_CAM_PROPAGATE( l_U654, 1 );
            GET_GAME_TIMER( ref l_U690 );
            GET_GAME_TIMER( ref l_U693 );
            DO_SCREEN_FADE_IN( 500 );
            l_U607 = 1;
        }
        break;
        case 1:
        if (NOT IS_CAM_INTERPOLATING())
        {
            DO_SCREEN_FADE_OUT( 500 );
            l_U607 = 2;
        }
        break;
        case 2:
        if (IS_SCREEN_FADED_OUT())
        {
            SET_CAM_ACTIVE( l_U652, 0 );
            SET_CAM_PROPAGATE( l_U652, 0 );
            SET_CAM_ACTIVE( l_U653, 0 );
            SET_CAM_PROPAGATE( l_U653, 0 );
            SET_CAM_ACTIVE( l_U654, 0 );
            SET_CAM_PROPAGATE( l_U654, 0 );
            while ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" )) > 1)
            {
                g_U9368 = 1;
                WAIT( 0 );
                PRINTSTRING( "amtv" );
                PRINTNL();
                PRINTINT( GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" ) );
                PRINTNL();
            }
            g_U9366 = 1;
            SET_CAM_ACTIVE( l_U655, 1 );
            SET_CAM_PROPAGATE( l_U655, 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3461(), 0 );
            CLEAR_AREA( -133.21440000, 1382.68400000, 23.81510000, 40.00000000, 1 );
            LOAD_SCENE( l_U819._fU0, l_U819._fU4, l_U819._fU8 );
            GET_INTERIOR_AT_COORDS( l_U819._fU0, l_U819._fU4, l_U819._fU8, ref l_U943 );
            l_U680 = GET_HASH_KEY( "Room_Apart" );
            LOAD_SCENE_FOR_ROOM_BY_KEY( l_U943, l_U680 );
            l_U921 = 1;
            while (NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -138.34000000, 1380.45000000, 32.26000000, 5.00000000, -45131371 )))
            {
                PRINTSTRING( "waiting on object cj cjair 13" );
                PRINTNL();
                WAIT( 0 );
            }
            SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -138.50000000, 1379.40000000, 31.80000000, 5.00000000, -45131371, 0 );
            l_U922 = 1;
            while (NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -138.50000000, 1379.40000000, 31.80000000, 5.00000000, 40403014 )))
            {
                PRINTSTRING( "waiting on object cj cjair 4" );
                PRINTNL();
                WAIT( 0 );
            }
            SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -138.50000000, 1379.40000000, 31.80000000, 5.00000000, 40403014, 0 );
            CREATE_CHAR( 26, 26615298, l_U819._fU0, l_U819._fU4, l_U819._fU8, ref l_U609, 1 );
            SET_CHAR_HEADING( l_U609, l_U718 );
            SET_CHAR_HEALTH( l_U609, 150 );
            SET_CHAR_MAX_HEALTH( l_U609, 150 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U609, 1 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U609, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U609, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U609, 1 );
            SET_COMBAT_DECISION_MAKER( l_U609, l_U633 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U609, 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U609, "Room_Apart" );
            SET_CHAR_COMPONENT_VARIATION( l_U609, 3, 0, 0 );
            SET_PED_DIES_WHEN_INJURED( l_U609, 1 );
            SET_CHAR_AS_ENEMY( l_U609, 1 );
            SET_CHAR_KEEP_TASK( l_U609, 1 );
            sub_17729( 1, 0, "DEALER_M", 0 );
            TASK_PLAY_ANIM( l_U609, "slumped_couch", "missfrancis4", 8.00000000, 1, 0, 0, 0, -2 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U609, "Room_Apart" );
            ENABLE_SCENE_STREAMING( 0 );
            l_U923 = 1;
            WAIT( 0 );
            GET_GAME_VIEWPORT_ID( ref l_U942 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U942, "Room_Apart" );
            GET_GAME_TIMER( ref l_U692 );
            l_U924 = 1;
            l_U607 = 3;
        }
        break;
        case 3:
        if (sub_19375( ref l_U692, 500 ))
        {
            SET_CAM_ACTIVE( l_U655, 0 );
            SET_CAM_PROPAGATE( l_U655, 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U654, l_U655, l_U656, 7000, 0 );
            SET_CAM_ACTIVE( l_U654, 1 );
            SET_CAM_PROPAGATE( l_U654, 1 );
            GET_GAME_TIMER( ref l_U692 );
            DO_SCREEN_FADE_IN( 500 );
            l_U607 = 4;
        }
        break;
        case 4:
        if (NOT IS_CAM_INTERPOLATING())
        {
            SET_CAM_INTERP_STYLE_CORE( l_U654, l_U656, l_U657, 3000, 0 );
            SET_CAM_ACTIVE( l_U654, 1 );
            SET_CAM_PROPAGATE( l_U654, 1 );
            g_U9366 = 1;
            GET_GAME_TIMER( ref l_U692 );
            l_U607 = 5;
        }
        break;
        case 5:
        if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" )) > 0) AND (NOT IS_CAM_INTERPOLATING()))
        {
            SET_CAM_ACTIVE( l_U654, 0 );
            SET_CAM_PROPAGATE( l_U654, 0 );
            SET_CAM_ACTIVE( l_U655, 0 );
            SET_CAM_PROPAGATE( l_U655, 0 );
            SET_CAM_ACTIVE( l_U656, 0 );
            SET_CAM_PROPAGATE( l_U656, 0 );
            SET_CAM_ACTIVE( l_U657, 0 );
            SET_CAM_PROPAGATE( l_U657, 0 );
            SET_CAM_ACTIVE( l_U658, 1 );
            SET_CAM_PROPAGATE( l_U658, 1 );
            GET_GAME_TIMER( ref l_U692 );
            l_U607 = 6;
        }
        break;
        case 6:
        if ((l_U879) || (sub_19375( ref l_U692, 3250 )))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                }
            }
            else
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_CAM_ACTIVE( l_U654, 0 );
                SET_CAM_PROPAGATE( l_U654, 0 );
                SET_CAM_ACTIVE( l_U652, 0 );
                SET_CAM_PROPAGATE( l_U652, 0 );
                SET_CAM_ACTIVE( l_U653, 0 );
                SET_CAM_PROPAGATE( l_U653, 0 );
                SET_CAM_ACTIVE( l_U655, 0 );
                SET_CAM_PROPAGATE( l_U655, 0 );
                SET_CAM_ACTIVE( l_U656, 0 );
                SET_CAM_PROPAGATE( l_U656, 0 );
                SET_CAM_ACTIVE( l_U657, 0 );
                SET_CAM_PROPAGATE( l_U657, 0 );
                SET_CAM_ACTIVE( l_U658, 0 );
                SET_CAM_PROPAGATE( l_U658, 0 );
                SET_CAM_ACTIVE( l_U659, 0 );
                SET_CAM_PROPAGATE( l_U659, 0 );
                DESTROY_ALL_CAMS();
                END_CAM_COMMANDS( ref l_U674 );
                sub_23262( ref l_U609, ref l_U612 );
                ADD_BLIP_FOR_CHAR( l_U609, ref l_U623 );
                SET_OBJECT_HEALTH( l_U636, l_U707 );
                if (NOT GET_IS_HIDEF())
                {
                    GET_GAME_TIMER( ref l_U691 );
                    l_U902 = 1;
                }
                GET_GAME_TIMER( ref l_U689 );
                GET_GAME_TIMER( ref l_U688 );
                SET_CHAR_COORDINATES( sub_3461(), -164.71490000, 1380.48300000, 40.62850000 );
                SET_CHAR_HEADING( sub_3461(), 290.67300000 );
                ENABLE_SCENE_STREAMING( 1 );
                sub_9162( 1 );
                l_U879 = 1;
                CLEAR_PRINTS();
                PRINT( "PROMPT_9A", 7500, 1 );
                l_U595 = 3;
            }
        }
        break;
        case 7:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        else
        {
            SET_CAM_ACTIVE( l_U654, 0 );
            SET_CAM_PROPAGATE( l_U654, 0 );
            SET_CAM_ACTIVE( l_U652, 0 );
            SET_CAM_PROPAGATE( l_U652, 0 );
            SET_CAM_ACTIVE( l_U653, 0 );
            SET_CAM_PROPAGATE( l_U653, 0 );
            SET_CAM_ACTIVE( l_U655, 0 );
            SET_CAM_PROPAGATE( l_U655, 0 );
            SET_CAM_ACTIVE( l_U656, 0 );
            SET_CAM_PROPAGATE( l_U656, 0 );
            SET_CAM_ACTIVE( l_U657, 0 );
            SET_CAM_PROPAGATE( l_U657, 0 );
            SET_CAM_ACTIVE( l_U659, 0 );
            SET_CAM_PROPAGATE( l_U659, 0 );
            if (NOT l_U924)
            {
                SET_CAM_ACTIVE( l_U655, 1 );
                SET_CAM_PROPAGATE( l_U655, 1 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3461(), 0 );
                CLEAR_AREA( -133.21440000, 1382.68400000, 23.81510000, 40.00000000, 1 );
                LOAD_SCENE( l_U819._fU0, l_U819._fU4, l_U819._fU8 );
                GET_INTERIOR_AT_COORDS( l_U819._fU0, l_U819._fU4, l_U819._fU8, ref l_U943 );
                l_U680 = GET_HASH_KEY( "Room_Apart" );
                LOAD_SCENE_FOR_ROOM_BY_KEY( l_U943, l_U680 );
                while (NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -138.34000000, 1380.45000000, 32.26000000, 5.00000000, -45131371 )))
                {
                    PRINTSTRING( "waiting on object cj cjair 13" );
                    PRINTNL();
                    WAIT( 0 );
                }
                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -138.50000000, 1379.40000000, 31.80000000, 5.00000000, -45131371, 0 );
                while (NOT (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( -138.50000000, 1379.40000000, 31.80000000, 5.00000000, 40403014 )))
                {
                    PRINTSTRING( "waiting on object cj cjair 4" );
                    PRINTNL();
                    WAIT( 0 );
                }
                SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE( -138.50000000, 1379.40000000, 31.80000000, 5.00000000, 40403014, 0 );
                if (NOT (DOES_CHAR_EXIST( l_U609 )))
                {
                    CREATE_CHAR( 26, 26615298, l_U819._fU0, l_U819._fU4, l_U819._fU8, ref l_U609, 1 );
                    SET_CHAR_HEADING( l_U609, l_U718 );
                    SET_CHAR_HEALTH( l_U609, 150 );
                    SET_CHAR_MAX_HEALTH( l_U609, 150 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U609, 1 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U609, 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U609, 1 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U609, 1 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U609, "Room_Apart" );
                    SET_CHAR_COMPONENT_VARIATION( l_U609, 3, 0, 0 );
                    SET_PED_DIES_WHEN_INJURED( l_U609, 1 );
                    SET_CHAR_AS_ENEMY( l_U609, 1 );
                    SET_CHAR_KEEP_TASK( l_U609, 1 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U609, 1 );
                    sub_17729( 1, 0, "DEALER_M", 0 );
                    TASK_PLAY_ANIM( l_U609, "slumped_couch", "missfrancis4", 8.00000000, 1, 0, 0, 0, -2 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U609, "Room_Apart" );
                }
            }
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" )) > 1)
            {
                while ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" )) > 1)
                {
                    g_U9368 = 1;
                    WAIT( 0 );
                    PRINTSTRING( "amtv2" );
                    PRINTNL();
                    PRINTINT( GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" ) );
                    PRINTNL();
                }
            }
            else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" )) == 0)
            {
                SET_CAM_ACTIVE( l_U658, 1 );
                SET_CAM_PROPAGATE( l_U658, 1 );
                g_U9366 = 1;
            }
            g_U9366 = 1;
            PRINTINT( GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" ) );
            PRINTNL();
            while (NOT (HAS_SCRIPT_LOADED( "AmbTV" )))
            {
                WAIT( 0 );
            }
            while ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" )) == 0)
            {
                WAIT( 0 );
            }
            PRINTINT( GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "AmbTV" ) );
            PRINTNL();
            l_U607 = 6;
        }
        break;
    }
    return;
}

int sub_19362(unknown uParam0, unknown uParam1)
{
    if (sub_19375( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_19442())
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_19375(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_19442()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_19589(unknown uParam0, unknown uParam1)
{
    sub_19607( 1, 1 );
    sub_19676( uParam0 );
    sub_19775( 1, ref l_U179, 1, 1 );
    sub_19883( uParam1 );
    return;
    break;
    2;
    1;
    ref l_U115;
    2;
    1;
    ref l_U178;
    2;
    1;
    ref l_U179;
    1;
    ref l_U178;
    1;
    1;
    ref l_U115;
    uParam1;
    2;
    1;
    ref l_U114;
    ref l_U114;
    uParam0;
    break;
}

void sub_19607(unknown uParam0, unknown uParam1)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_CHAR_HEALTH( (uParam0^), uParam1 );
        }
    }
    return;
}

void sub_19676(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_HEALTH( (uParam0^), 200 );
            SET_CHAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_19775(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), uParam1 );
            (uParam2^) = GET_ENGINE_HEALTH( (uParam0^) );
            (uParam3^) = GET_PETROL_TANK_HEALTH( (uParam0^) );
        }
    }
    return;
}

void sub_19883(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

int sub_20042(boolean bParam0)
{
    int iVar3;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_3461() ))
            {
                iVar3 = 0;
            }
            else
            {
                iVar3 = 1;
            }
            if (sub_11215( 1, iVar3 ))
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_3056(), 0 );
                }
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
    }
    else
    {
        sub_3321( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_3056(), 0 );
        CLEAR_CHAR_TASKS( sub_3461() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3461(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

void sub_23262(unknown uParam0, unknown uParam1)
{
    sub_23273( uParam1 );
    sub_23534( uParam0 );
    return;
}

void sub_23273(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            SET_CAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            sub_23329( uParam0 );
        }
    }
    return;
}

void sub_23329(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            else
            {
                SET_CAR_HEALTH( (uParam0^), ProtectedGet(l_U115) );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_ENGINE_HEALTH( (uParam0^), ProtectedGet(l_U178) );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            else
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), ProtectedGet(l_U179) );
            }
        }
    }
    return;
}

void sub_23534(unknown uParam0)
{
    unknown uVar3;

    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_PROOFS( (uParam0^), 0, 0, 0, 0, 0 );
            if (ProtectedGet(l_U114) < 110)
            {
                SET_CHAR_HEALTH( (uParam0^), 120 );
            }
            else
            {
                SET_CHAR_HEALTH( (uParam0^), ProtectedGet(l_U114) );
            }
        }
    }
    return;
}

void sub_25185()
{
    if (NOT l_U905)
    {
        sub_25205();
    }
    if ((sub_5702( ref l_U609 )) < 25.00000000)
    {
        if (sub_25897())
        {
            l_U595 = 5;
        }
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_3461(), -139.79350000, 1378.56800000, 32.51210000, 2.00000000, 1.30000000, 1.80000000, 0 )) || (l_U701 > 2))
    {
        if (NOT l_U845)
        {
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( -133.71210000, 1379.24500000, 31.79690000 );
            OPEN_SEQUENCE_TASK( ref l_U620 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -133.71210000, 1379.24500000, 31.79690000, 3, -1, 0.10000000 );
            CLOSE_SEQUENCE_TASK( l_U620 );
            TASK_PERFORM_SEQUENCE( l_U609, l_U620 );
            CLEAR_SEQUENCE_TASK( l_U620 );
            GET_GAME_TIMER( ref l_U692 );
        }
        l_U595 = 6;
        return;
    }
    if (l_U675 > 2)
    {
        l_U868 = 1;
        l_U595 = 5;
    }
    sub_26190();
    sub_26577();
    if (IS_EXPLOSION_IN_AREA( -1, -144.95000000, 1386.00000000, 38.50000000, -130.35910000, 1373.26700000, 27.13019000 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U609 )))
        {
            l_U920 = 1;
            SET_CHAR_PROOFS( l_U609, 1, 1, 1, 1, 1 );
            l_U595 = 5;
        }
    }
    switch (l_U603)
    {
        case 0:
        if (sub_26915( "5455550122" ))
        {
            sub_27021( 1 );
            GET_GAME_TIMER( ref l_U692 );
            GET_GAME_TIMER( ref l_U694 );
            l_U920 = 1;
            l_U603 = 5;
            break;
        }
        if (NOT l_U928)
        {
            if (sub_19375( ref l_U688, 300000 ))
            {
                l_U920 = 1;
                l_U603 = 7;
                break;
            }
        }
        if (sub_27135())
        {
            l_U920 = 1;
            break;
        }
        else if (sub_27272( 1 ))
        {
            l_U920 = 1;
            break;
        }
        if (l_U929)
        {
            if (NOT l_U903)
            {
                sub_27441( 11, 4, 16383, 16383, ref l_U950 );
                sub_27788( ref l_U950, 1 );
                sub_27819( ref l_U950, 0 );
                sub_27849( ref l_U950 );
                l_U903 = 1;
            }
        }
        if (NOT l_U920)
        {
            if (sub_28638())
            {
                break;
            }
        }
        break;
        case 2:
        if (sub_5470())
        {
            if (sub_27135())
            {
                break;
            }
            else if (sub_27272( 1 ))
            {
                break;
            }
            switch (sub_28984())
            {
                case 1:
                GET_GAME_TIMER( ref l_U689 );
                l_U603 = 0;
                break;
                default:
            }
            if (NOT (sub_15997( 0 )))
            {
                if (sub_16264() != -1)
                {
                    l_U697 = sub_16264();
                }
            }
            else if (l_U697 != -1)
            {
                if ((l_U697 >= 0) || (NOT sub_16322()))
                {
                    if (l_U700 == 1)
                    {
                        l_U929 = 1;
                        GET_GAME_TIMER( ref l_U702 );
                    }
                    GET_GAME_TIMER( ref l_U689 );
                    l_U700++;
                    l_U603 = 0;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U689 );
                    l_U603 = 0;
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U689 );
                l_U603 = 0;
            }
        }
        break;
        case 5:
        if (sub_5470())
        {
            switch (l_U695)
            {
                case 0:
                if (IS_PED_ATTACHED_TO_ANY_CAR( l_U609 ))
                {
                    DETACH_PED( l_U609, 1 );
                }
                FREEZE_CHAR_POSITION( l_U609, 0 );
                SET_CHAR_COORDINATES( l_U609, -137.79680000, 1379.74200000, 31.80130000 );
                SET_CHAR_HEADING( l_U609, 253.88490000 );
                CLEAR_CHAR_TASKS( l_U609 );
                OPEN_SEQUENCE_TASK( ref l_U619 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -136.76810000, 1377.84300000, 31.79690000, 2, -2, 0.40000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, -136.76810000, 1377.84300000, 31.79690000, 270.00000000, 1061158912 );
                TASK_PLAY_ANIM( 0, "Phone_Pickup", "missfrancis4", 8.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM( 0, "Phone_Loop", "missfrancis4", 8.00000000, 1, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( l_U619 );
                TASK_PERFORM_SEQUENCE( l_U609, l_U619 );
                CLEAR_SEQUENCE_TASK( l_U619 );
                l_U695++;
                break;
                case 1:
                if (sub_27272( 0 ))
                {
                    sub_29652();
                    break;
                }
                GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U833 );
                if (l_U833 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U609, ref l_U676 );
                    if (l_U676 > 2)
                    {
                        sub_27021( 0 );
                        sub_29933();
                        if (l_U665 == 0)
                        {
                            while (NOT (sub_29989( "FM4_CALL10", ref l_U944, 7, 1 )))
                            {
                                WAIT( 0 );
                            }
                            l_U695++;
                        }
                        else if (l_U665 == 1)
                        {
                            while (NOT (sub_29989( "FM4_CALL10b", ref l_U944, 7, 1 )))
                            {
                                WAIT( 0 );
                            }
                            l_U695++;
                        }
                        else
                        {
                            while (NOT (sub_31067( "FM4_CALL11", 0, 1, ref l_U944, 8, 1 )))
                            {
                                WAIT( 0 );
                            }
                            l_U695++;
                        }
                    }
                }
                break;
                case 2:
                sub_12002();
                if (sub_27272( 0 ))
                {
                    sub_29652();
                    break;
                }
                if (NOT (sub_31240( l_U944 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U619 );
                    TASK_PLAY_ANIM( 0, "Phone_Put_Down", "missfrancis4", 8.00000000, 0, 0, 0, 0, -1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U819._fU0, l_U819._fU4, l_U819._fU8, 2, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U619 );
                    TASK_PERFORM_SEQUENCE( l_U609, l_U619 );
                    CLEAR_SEQUENCE_TASK( l_U619 );
                    l_U695++;
                }
                break;
                case 3:
                GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U831 );
                if (l_U831 == 7)
                {
                    sub_3522();
                    if (sub_5470())
                    {
                        l_U675++;
                        if (l_U675 > 2)
                        {
                            l_U868 = 1;
                            l_U595 = 5;
                        }
                        else
                        {
                            l_U695 = 0;
                            l_U665++;
                            l_U603 = 8;
                        }
                    }
                }
                break;
            }
        }
        break;
        case 6:
        if (sub_5470())
        {
            if (NOT l_U847)
            {
                CLEAR_CHAR_TASKS( l_U609 );
                OPEN_SEQUENCE_TASK( ref l_U618 );
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "hit_tv", "missfrancis4", 1000.00000000, 0, 1, 1, 1, 0, 1, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U618 );
                TASK_PERFORM_SEQUENCE( l_U609, l_U618 );
                CLEAR_SEQUENCE_TASK( l_U618 );
                SETTIMERA( 0 );
                l_U847 = 1;
            }
            else if (sub_27272( 0 ))
            {
                sub_29652();
                break;
            }
            GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U832 );
            if (l_U832 == 7)
            {
                if (l_U847)
                {
                    l_U846 = 1;
                    l_U675++;
                    if (l_U675 > 2)
                    {
                        PRINTSTRING( "dealer runs out of flat" );
                        PRINTNL();
                        l_U868 = 1;
                        l_U595 = 5;
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U609 );
                        l_U603 = 8;
                    }
                }
            }
        }
        break;
        case 7:
        if (sub_5470())
        {
            if (NOT l_U845)
            {
                SET_CHAR_COORDINATES( l_U609, l_U764._fU0, l_U764._fU4, 31.50000000 );
                SET_CHAR_HEADING( l_U609, l_U718 );
                CLEAR_CHAR_TASKS( l_U609 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -136.23200000, 1381.81300000, 31.79690000 );
                OPEN_SEQUENCE_TASK( ref l_U617 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -136.23200000, 1381.81300000, 31.79690000, 2, -1, 0.40000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, -136.23200000, 1381.81300000, 31.79690000, 0.00000000, 1061158912 );
                TASK_PLAY_ANIM( 0, "Lie_On_Bed_R", "missfrancis4", 8.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM( 0, "Lie_On_Bed_Loop", "missfrancis4", 8.00000000, 1, 0, 0, 0, -2 );
                CLOSE_SEQUENCE_TASK( l_U617 );
                TASK_PERFORM_SEQUENCE( l_U609, l_U617 );
                CLEAR_SEQUENCE_TASK( l_U617 );
                l_U845 = 1;
            }
        }
        if (NOT l_U930)
        {
            if (l_U845)
            {
                GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U833 );
                if (l_U833 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U609, ref l_U676 );
                    if (l_U676 > 2)
                    {
                        l_U930 = 1;
                    }
                }
            }
        }
        else if (sub_27272( 0 ))
        {
            OPEN_SEQUENCE_TASK( ref l_U617 );
            TASK_PLAY_ANIM( 0, "Get_Out_Bed_R", "missfrancis4", 8.00000000, 0, 0, 0, 0, -1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -133.71210000, 1379.24500000, 31.79690000, 3, -1, 0.10000000 );
            CLOSE_SEQUENCE_TASK( l_U617 );
            TASK_PERFORM_SEQUENCE( l_U609, l_U617 );
            CLEAR_SEQUENCE_TASK( l_U617 );
            GET_GAME_TIMER( ref l_U692 );
            l_U701 = 3;
        }
        break;
        case 8:
        if (sub_5470())
        {
            PRINTSTRING( "seq not done" );
            PRINTNL();
            GET_SCRIPT_TASK_STATUS( l_U609, 80, ref l_U831 );
            if (l_U831 == 7)
            {
                SET_CHAR_COORDINATES( l_U609, l_U819._fU0, l_U819._fU4, l_U819._fU8 );
                SET_CHAR_HEADING( l_U609, l_U718 );
                TASK_PLAY_ANIM( l_U609, "slumped_couch", "missfrancis4", 8.00000000, 1, 0, 0, 0, -2 );
                l_U603 = 0;
            }
        }
        break;
        case 10:
        if (NOT l_U861)
        {
            if (sub_5470())
            {
                CLEAR_CHAR_TASKS( l_U609 );
                OPEN_SEQUENCE_TASK( ref l_U619 );
                PRINTSTRING( "fail 0" );
                PRINTNL();
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "spooked", "missfrancis4", 1000.00000000, 0, 1, 1, 1, 0, 1, 0, -1 );
                PRINTSTRING( "fail 1" );
                PRINTNL();
                CLOSE_SEQUENCE_TASK( l_U619 );
                TASK_PERFORM_SEQUENCE( l_U609, l_U619 );
                CLEAR_SEQUENCE_TASK( l_U619 );
                l_U861 = 1;
            }
        }
        if (l_U861)
        {
            if (NOT (IS_CHAR_INJURED( l_U609 )))
            {
                if (sub_27272( 0 ))
                {
                    l_U701++;
                }
                GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U832 );
                if (l_U832 == 7)
                {
                    l_U675++;
                    if (l_U675 > 2)
                    {
                        PRINTSTRING( "dealer runs out of flat" );
                        PRINTNL();
                        l_U868 = 1;
                        l_U595 = 5;
                    }
                    else
                    {
                        PRINTSTRING( "fail 2" );
                        PRINTNL();
                        l_U603 = 8;
                    }
                }
            }
        }
        break;
        case 11:
        if (NOT l_U880)
        {
            if (sub_5470())
            {
                CLEAR_CHAR_TASKS( l_U609 );
                OPEN_SEQUENCE_TASK( ref l_U619 );
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "spooked", "missfrancis4", 1000.00000000, 0, 1, 1, 1, 0, 1, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U619 );
                TASK_PERFORM_SEQUENCE( l_U609, l_U619 );
                CLEAR_SEQUENCE_TASK( l_U619 );
                l_U880 = 1;
            }
        }
        else if (sub_27272( 0 ))
        {
            l_U701++;
        }
        if (NOT (IS_CHAR_INJURED( l_U609 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U832 );
            if (l_U832 == 7)
            {
                CLEAR_CHAR_TASKS( l_U609 );
                l_U675++;
                if (l_U675 > 2)
                {
                    PRINTSTRING( "dealer runs out of flat" );
                    PRINTNL();
                    l_U868 = 1;
                    l_U595 = 5;
                }
                else
                {
                    l_U880 = 0;
                    l_U603 = 8;
                }
            }
        }
        break;
        case 12:
        PRINTSTRING( "target fired at case" );
        PRINTNL();
        if (sub_27272( 0 ))
        {
            l_U701++;
        }
        GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U833 );
        if (l_U833 == 7)
        {
            CLEAR_CHAR_TASKS( l_U609 );
            SET_CHAR_COORDINATES( l_U609, l_U819._fU0, l_U819._fU4, l_U819._fU8 );
            SET_CHAR_HEADING( l_U609, l_U718 );
            TASK_PLAY_ANIM( l_U609, "slumped_couch", "missfrancis4", 8.00000000, 1, 0, 0, 0, -2 );
            sub_3522();
            l_U603 = 0;
        }
        break;
    }
    if ((NOT l_U901) AND (IS_KEYBOARD_KEY_PRESSED( 21 )))
    {
        l_U901 = 1;
        l_U595 = 5;
    }
    return;
}

void sub_25205()
{
    if (l_U929)
    {
        if (NOT sub_25224())
        {
            if (NOT l_U931[0])
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER( "fr4_help_01" );
                sub_25306();
                l_U931[0] = 1;
            }
        }
        if (sub_25386() == 1002)
        {
            if (NOT l_U931[1])
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER( "fr4_help_02" );
                sub_25306();
                l_U931[1] = 1;
            }
        }
        if (sub_25386() == 1003)
        {
            if (NOT l_U931[2])
            {
                CLEAR_HELP();
                PRINT_HELP_FOREVER( "fr4_help_03" );
                sub_25306();
                l_U931[2] = 1;
            }
        }
        if (sub_25549( 56, 1 ))
        {
            CLEAR_HELP();
            l_U905 = 1;
        }
    }
    return;
}

int sub_25224()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_25306()
{
    for ( l_U673 = 0; l_U673 <= (l_U931 - 1); l_U673++ )
    {
        l_U931[l_U673] = 0;
    }
    return;
}

void sub_25386()
{
    return g_U91._fU0;
}

int sub_25549(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_12244( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_12244( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU60 == iParam0) AND (g_U91._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT g_U91._fU372) AND (g_U91._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

int sub_25897()
{
    unknown uVar2;
    unknown uVar3;

    if (sub_6809( ref uVar2 ))
    {
        GET_CAR_MODEL( uVar2, ref uVar3 );
        if (IS_THIS_MODEL_A_HELI( uVar3 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26190()
{
    if (l_U603 != 7)
    {
        if (NOT l_U887)
        {
            if (NOT l_U908)
            {
                GET_OBJECT_HEALTH( l_U636, ref l_U708 );
                if (l_U708 < l_U707)
                {
                    SET_OBJECT_DYNAMIC( l_U636, 1 );
                    FREEZE_OBJECT_POSITION( l_U636, 0 );
                    l_U740 = {0.00000000, 0.00000000, -1.00000000};
                    l_U743 = {0.00000000, 0.00000000, 0.00000000};
                    APPLY_FORCE_TO_OBJECT( l_U636, 1, l_U740, l_U743, 0, 0, 0, 1 );
                    l_U908 = 1;
                    g_U9367 = 1;
                    l_U920 = 1;
                }
            }
            if (l_U908)
            {
                GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U833 );
                if (l_U833 == 7)
                {
                    SET_CHAR_COORDINATES( l_U609, l_U819._fU0, l_U819._fU4, l_U819._fU8 );
                    SET_CHAR_HEADING( l_U609, l_U718 );
                    TASK_PLAY_ANIM( l_U609, "slumped_couch", "missfrancis4", 8.00000000, 1, 0, 0, 0, -2 );
                    if (NOT l_U888)
                    {
                        l_U603 = 6;
                    }
                    else
                    {
                        l_U861 = 0;
                        l_U603 = 10;
                    }
                    l_U887 = 1;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_26577()
{
    if (IS_CHAR_IN_AREA_3D( sub_3461(), -124.00000000, 1384.70200000, 50.00000000, -139.46800000, 1374.37400000, 0.00000000, 0 ))
    {
        if (IS_CHAR_SHOOTING( sub_3461() ))
        {
            ALTER_WANTED_LEVEL( sub_3056(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3056() );
            PRINT_NOW( "PROMPT_10", 7500, 1 );
            l_U911 = 1;
            l_U920 = 1;
            sub_5913();
        }
    }
    return;
}

int sub_26915(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U91._fU508 >= 4) AND (g_U91._fU0 == 1005))
    {
        if (g_U91._fU60 == 56)
        {
            return COMPARE_STRING( ref g_U91._fU128, uParam0 );
        }
    }
    return 0;
}

void sub_27021(unknown uParam0)
{
    g_U91._fU384 = uParam0;
    return;
}

int sub_27135()
{
    if (NOT l_U888)
    {
        if (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( -134.95200000, 1377.51200000, 32.80308000, 1.00000000, -1618524073, 0, 1 ))
        {
            PRINTSTRING( "tv destoyed**" );
            PRINTNL();
            l_U888 = 1;
            l_U603 = 10;
            return 1;
        }
    }
    return 0;
}

int sub_27272(boolean bParam0)
{
    if ((IS_BULLET_IN_BOX( -134.70000000, 1384.00000000, 35.47000000, -139.44630000, 1377.01600000, 31.80000000, 1 )) || (IS_SNIPER_BULLET_IN_AREA( -134.70000000, 1384.00000000, 35.47000000, -139.44630000, 1377.01600000, 31.80000000 )))
    {
        if (bParam0)
        {
            l_U603 = 11;
        }
        return 1;
    }
    return 0;
}

void sub_27441(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_27463( uParam0, 0, iParam4 + 0 );
    sub_27463( uParam1, 1, iParam4 + 0 );
    sub_27463( uParam2, 2, iParam4 + 0 );
    sub_27463( uParam3, 3, iParam4 + 0 );
    sub_27463( 0, 4, iParam4 + 0 );
    sub_27463( 1, 5, iParam4 + 0 );
    sub_27463( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_27463(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_27788(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_27819(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_27849(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_27919())
        {
            sub_2469( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_28046( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2469( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_2183( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_2183( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_27919()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2183( 1, g_U569[I] )) != 0))
        {
            sub_2469( I );
            return 1;
        }
    }
    return 0;
}

int sub_28046(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_28111( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_28111(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_2183( 0, uParam0 );
        if (iVar14 == (sub_2183( 0, uParam6 )))
        {
            iVar15 = sub_2183( 3, uParam0 );
            if (iVar15 == (sub_2183( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_28638()
{
    switch (l_U700)
    {
        case 0:
        if (sub_19375( ref l_U689, 75000 ))
        {
            if (sub_28728( 11, "FM4_CALL8", "FM4AUD", 5000, 0 ))
            {
                l_U697 = -1;
                l_U603 = 2;
                return 1;
            }
        }
        break;
        case 1:
        if (sub_19375( ref l_U689, 75000 ))
        {
            l_U928 = 1;
            if (sub_28728( 11, "FM4_CALL9", "FM4AUD", 5000, 0 ))
            {
                l_U697 = -1;
                l_U603 = 2;
                return 1;
            }
        }
        break;
        case 2: break;
    }
    return 0;
}

void sub_28728(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_12174( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_28984()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_29652()
{
    sub_3321( 0 );
    l_U701++;
    OPEN_SEQUENCE_TASK( ref l_U619 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -138.19670000, 1378.42100000, 31.79690000, 2, -2, 0.40000000 );
    TASK_CHAR_SLIDE_TO_COORD( 0, -138.19670000, 1378.42100000, 31.79690000, 93.00000000, 1061158912 );
    TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "Spooked_2nd_Half", "missfrancis4", 8.00000000, 0, 1, 1, 1, 0, 1, 0, -1 );
    CLOSE_SEQUENCE_TASK( l_U619 );
    TASK_PERFORM_SEQUENCE( l_U609, l_U619 );
    CLEAR_SEQUENCE_TASK( l_U619 );
    l_U603 = 12;
    return;
}

void sub_29933()
{
    return sub_12013( 0, 1 );
}

void sub_29989(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_30010( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_30010(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_30064( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_30064(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_30086( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_30762( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_30086(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12244( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12244( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12244( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_30762(int iParam0, int iParam1)
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

void sub_31067(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_31092( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_31092(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_30064( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_31240(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12244( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12244( "\n speech is not playing" );
    }
    return 0;
}

void sub_33812()
{
    if (NOT l_U925)
    {
        if (l_U605 != 0)
        {
            if (sub_19362( ref l_U693, 1000 ))
            {
                l_U925 = 1;
                l_U605 = 7;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U609 )))
    {
        switch (l_U605)
        {
            case 0:
            if (NOT (IS_CHAR_IN_AREA_3D( sub_3461(), -124.00000000, 1384.70200000, 50.00000000, -139.46800000, 1374.37400000, 0.00000000, 0 )))
            {
                if (sub_20042( 1 ))
                {
                    CLEAR_AREA( -133.21440000, 1382.68400000, 23.81510000, 30.00000000, 1 );
                    if (DOES_VEHICLE_EXIST( l_U612 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U612 ))
                        {
                            if (LOCATE_CAR_3D( l_U612, -142.64610000, 1381.50000000, 19.42930000, 4.00000000, 5.00000000, 4.00000000, 0 ))
                            {
                                SET_CAR_HEADING( l_U612, 1.93060000 );
                                SET_CAR_COORDINATES( l_U612, -146.53610000, 1374.88900000, 19.32320000 );
                            }
                        }
                    }
                    g_U9368 = 1;
                    if (NOT (IS_CHAR_INJURED( l_U609 )))
                    {
                        FREEZE_CHAR_POSITION( l_U609, 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U609 );
                        SET_CHAR_COORDINATES( l_U609, -132.59680000, 1381.35000000, 23.79720000 );
                        SET_CHAR_HEADING( l_U609, 310.96030000 );
                    }
                    LOAD_SCENE( -132.36930000, 1383.02400000, 20.14827000 );
                    GET_INTERIOR_AT_COORDS( -132.36930000, 1383.02400000, 20.14827000, ref l_U943 );
                    l_U680 = GET_HASH_KEY( "Room_HrlTGrnd" );
                    LOAD_SCENE_FOR_ROOM_BY_KEY( l_U943, l_U680 );
                    TASK_FLUSH_ROUTE();
                    TASK_EXTEND_ROUTE( -125.40000000, 1381.00000000, 23.79720000 );
                    if (NOT (IS_CHAR_INJURED( l_U609 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U620 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                        CLOSE_SEQUENCE_TASK( l_U620 );
                        TASK_PERFORM_SEQUENCE( l_U609, l_U620 );
                        CLEAR_SEQUENCE_TASK( l_U620 );
                        MODIFY_CHAR_MOVE_STATE( l_U609, 3 );
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U609, "Room_HrlTGrnd" );
                    }
                    BEGIN_CAM_COMMANDS( ref l_U674 );
                    CREATE_CAM( 14, ref l_U652 );
                    CREATE_CAM( 14, ref l_U653 );
                    CREATE_CAM( 14, ref l_U655 );
                    CREATE_CAM( 3, ref l_U654 );
                    SET_CAM_POS( l_U652, -126.56290000, 1383.29700000, 24.39247000 );
                    SET_CAM_ROT( l_U652, 2.60421600, 0.00000000, 124.46120000 );
                    SET_CAM_FOV( l_U652, 30.30004000 );
                    SET_CAM_POS( l_U653, -126.62480000, 1382.73900000, 24.84225000 );
                    SET_CAM_ROT( l_U653, -34.07940000, -2.65840400, 66.12149000 );
                    SET_CAM_FOV( l_U653, 44.40000000 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_CAM_ACTIVE( l_U652, 1 );
                    SET_CAM_PROPAGATE( l_U652, 1 );
                    WAIT( 0 );
                    GET_GAME_VIEWPORT_ID( ref l_U942 );
                    SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U942, "Room_HrlTGrnd" );
                    GET_GAME_TIMER( ref l_U692 );
                    GET_GAME_TIMER( ref l_U693 );
                    l_U605 = 1;
                }
            }
            break;
            case 1:
            if (sub_19375( ref l_U692, 500 ))
            {
                DO_SCREEN_FADE_IN( 500 );
                l_U605 = 2;
            }
            break;
            case 2:
            if (sub_19375( ref l_U692, 2500 ))
            {
                SET_CAM_ACTIVE( l_U652, 0 );
                SET_CAM_PROPAGATE( l_U652, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U609 );
                SET_CHAR_COORDINATES( l_U609, -126.70000000, 1383.87700000, 23.79720000 );
                SET_CHAR_HEADING( l_U609, 133.80900000 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( -141.52590000, 1383.00000000, 19.42940000 );
                TASK_FOLLOW_POINT_ROUTE( l_U609, 2, 0 );
                SET_CAM_ACTIVE( l_U653, 1 );
                SET_CAM_PROPAGATE( l_U653, 1 );
                GET_GAME_TIMER( ref l_U692 );
                l_U605 = 6;
            }
            break;
            case 6:
            SET_PED_ENABLE_LEG_IK( l_U609, 1 );
            if (sub_19375( ref l_U692, 3000 ))
            {
                SET_CHAR_PROOFS( l_U609, 0, 0, 0, 0, 0 );
                SET_CAM_ACTIVE( l_U655, 0 );
                SET_CAM_PROPAGATE( l_U655, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U674 );
                DESTROY_ALL_CAMS();
                CLEAR_AREA_OF_CARS( -150.80280000, 1393.48700000, 19.46970000, 50.00000000 );
                MODIFY_CHAR_MOVE_STATE( l_U609, 3 );
                sub_9162( 1 );
                PRINT_NOW( "PROMPT_8A", 7500, 1 );
                l_U595 = 7;
            }
            break;
            case 7:
            if (NOT IS_SCREEN_FADED_OUT())
            {
                if (NOT IS_SCREEN_FADING_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                }
            }
            else
            {
                SET_CHAR_PROOFS( l_U609, 0, 0, 0, 0, 0 );
                SET_CAM_ACTIVE( l_U655, 0 );
                SET_CAM_PROPAGATE( l_U655, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U674 );
                DESTROY_ALL_CAMS();
                CLEAR_AREA_OF_CARS( -150.80280000, 1393.48700000, 19.46970000, 50.00000000 );
                CLEAR_CHAR_TASKS( l_U609 );
                SET_CHAR_COORDINATES( l_U609, -132.77820000, 1383.51700000, 19.79950000 );
                SET_CHAR_HEADING( l_U609, 107.90830000 );
                OPEN_SEQUENCE_TASK( ref l_U620 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -141.52590000, 1383.00000000, 19.42940000, 3, -1, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U620 );
                TASK_PERFORM_SEQUENCE( l_U609, l_U620 );
                CLEAR_SEQUENCE_TASK( l_U620 );
                sub_9162( 1 );
                CLEAR_PRINTS();
                PRINT_NOW( "PROMPT_8A", 7500, 1 );
                l_U595 = 7;
            }
            break;
        }
    }
    return;
}

void sub_35572()
{
    if (NOT l_U915)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3461(), -172.38450000, 1381.08400000, 43.62960000, 10.70000000, 27.20000000, 7.00000000, 0 )))
        {
            g_U9368 = 1;
            l_U915 = 1;
        }
    }
    switch (l_U596)
    {
        case 0:
        if (NOT l_U863)
        {
            if (NOT (IS_CHAR_INJURED( l_U609 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U833 );
                if (l_U833 == 7)
                {
                    if (NOT (IS_CAR_DEAD( l_U610 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U609, 0 );
                        CLEAR_CHAR_TASKS( l_U609 );
                        SET_NEXT_DESIRED_MOVE_STATE( 3 );
                        GIVE_WEAPON_TO_CHAR( l_U609, 7, 30000, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U620 );
                        TASK_PLAY_ANIM( 0, "spooked_outside", "missfrancis4", 8.00000000, 0, 0, 0, 0, 5000 );
                        TASK_CAR_MISSION_PED_TARGET( 0, l_U610, sub_3461(), 8, 20.00000000, 2, -1, -1 );
                        CLOSE_SEQUENCE_TASK( l_U620 );
                        TASK_PERFORM_SEQUENCE( l_U609, l_U620 );
                        CLEAR_SEQUENCE_TASK( l_U620 );
                        l_U596 = 1;
                        l_U863 = 1;
                        PRINTSTRING( "get inside car" );
                        PRINTNL();
                        PRINTSTRING( "get inside car" );
                        PRINTNL();
                        PRINTSTRING( "get inside car" );
                        PRINTNL();
                    }
                    else
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U609, 0 );
                        CLEAR_CHAR_TASKS( l_U609 );
                        GIVE_WEAPON_TO_CHAR( l_U609, 7, 30000, 0 );
                        OPEN_SEQUENCE_TASK( ref l_U620 );
                        TASK_PLAY_ANIM( 0, "spooked_outside", "missfrancis4", 8.00000000, 0, 0, 0, 0, 5000 );
                        TASK_SMART_FLEE_CHAR( 0, sub_3461(), 50.00000000, 10000 );
                        TASK_COMBAT( 0, sub_3461() );
                        CLOSE_SEQUENCE_TASK( l_U620 );
                        TASK_PERFORM_SEQUENCE( l_U609, l_U620 );
                        CLEAR_SEQUENCE_TASK( l_U620 );
                        l_U863 = 1;
                        PRINTSTRING( "run" );
                        PRINTNL();
                        PRINTSTRING( "run" );
                        PRINTNL();
                        PRINTSTRING( "run" );
                        PRINTNL();
                        l_U596 = 3;
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U609 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U609, 29, ref l_U831 );
            if (l_U831 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U609, ref l_U676 );
                if (l_U676 == 1)
                {
                    if (NOT (IS_VEH_DRIVEABLE( l_U610 )))
                    {
                        PRINTSTRING( "car dead" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS( l_U609 );
                        OPEN_SEQUENCE_TASK( ref l_U620 );
                        TASK_SMART_FLEE_CHAR( 0, sub_3461(), 50.00000000, 5000 );
                        TASK_COMBAT( 0, sub_3461() );
                        CLOSE_SEQUENCE_TASK( l_U620 );
                        TASK_PERFORM_SEQUENCE( l_U609, l_U620 );
                        CLEAR_SEQUENCE_TASK( l_U620 );
                        sub_36544( ref l_U609 );
                        l_U596 = 3;
                    }
                }
                else if (l_U676 == 2)
                {
                    if (NOT (IS_CAR_DEAD( l_U610 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U609, l_U610 ))
                        {
                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3461(), 0 );
                            l_U596 = 2;
                        }
                    }
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U609 )))
        {
            if (NOT (IS_CAR_DEAD( l_U610 )))
            {
                GET_CAR_SPEED( l_U610, ref l_U712 );
                if (((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3461(), l_U609, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (l_U712 < 0.50000000)) || (NOT (IS_CHAR_IN_CAR( l_U609, l_U610 ))))
                {
                    CLEAR_CHAR_TASKS( l_U609 );
                    OPEN_SEQUENCE_TASK( ref l_U620 );
                    TASK_SMART_FLEE_CHAR( 0, sub_3461(), 50.00000000, 5000 );
                    TASK_COMBAT( 0, sub_3461() );
                    CLOSE_SEQUENCE_TASK( l_U620 );
                    TASK_PERFORM_SEQUENCE( l_U609, l_U620 );
                    CLEAR_SEQUENCE_TASK( l_U620 );
                    sub_36544( ref l_U609 );
                    l_U596 = 3;
                }
            }
        }
        break;
        case 3: break;
    }
    return;
}

void sub_36544(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        SET_RELATIONSHIP( 5, 0, 23 );
        SET_RELATIONSHIP( 5, 23, 0 );
        CLEAR_CHAR_TASKS( (uParam0^) );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( (uParam0^), 0 );
        SET_COMBAT_DECISION_MAKER( (uParam0^), l_U635 );
        SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
        SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
    }
    return;
}

void sub_37009(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U105)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U103))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U104 + 500))
        {
            l_U103 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_25224()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3461() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U105)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U104 );
            l_U103 = 1;
            l_U102 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U103) AND (NOT l_U102))
        {
            if (l_U105)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U102 = 1;
        }
    }
    else if (l_U102)
    {
        if (l_U105)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U102 = 0;
    };;;
    return;
}

void sub_37663()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3461(), -173.32630000, 1381.92100000, 42.60620000, 11.50000000, 27.20000000, 25.22300000, 0 )))
    {
        sub_37739( -156.42870000, 1371.10500000, 19.30320000, 0 );
        sub_37837();
    }
    return;
}

void sub_37739(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    unknown uVar6;

    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref uVar6 );
    REQUEST_MODEL( uVar6 );
    if (bParam3)
    {
        if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
        {
            ;
        }
    }
    else if (CREATE_EMERGENCY_SERVICES_CAR( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 ))
    {
        ;
    }
    return;
}

void sub_37837()
{
    CLEAR_WANTED_LEVEL( sub_3056() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_37895( 11, "FM4_CALL12", "FM4AUD", 1000, 0 );
    sub_37951();
    sub_3047();
    return;
}

void sub_37895(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    sub_6047( uParam0, ref cVar7, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_37951()
{
    sub_37960();
    return;
}

void sub_37960()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_37978();
    sub_38037( iVar2, iVar3, iVar4 );
    return;
}

void sub_37978()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U569[I] = 4;
    }
    return;
}

void sub_38037(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_38070( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_38070(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_38166( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_38166( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_38166( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_38166( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_38166( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_38166( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_38743( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4) AND (NOT g_U10981[iParam0]._fU144._fU12))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_39140( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_39140( 0, 4 );
            }
        }
    }
    if (NOT (sub_39229( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3056(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3056() );
    }
    sub_2145();
    bVar27 = true;
    uVar28 = sub_38743( iParam0, iVar7 );
    uVar29 = sub_1602( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 6) || (iVar30 == 5))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_48605( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_49035();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_49120( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_49177( iParam0 );
                sub_49216( 0 );
                sub_2043( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_49324();
        }
    }
    if (bParam2)
    {
        sub_49035();
        sub_49412();
        sub_49216( 0 );
    }
    if (bParam3)
    {
        sub_49035();
        sub_49452();
        sub_49216( 0 );
        sub_2043( uVar29, 0 );
    }
    sub_1489();
    return;
}

void sub_38166(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_38743(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_2001( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_39140(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_39229(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_39437( uParam1 );
        break;
        case 1:
        bVar8 = sub_41515( uParam1 );
        break;
        case 2:
        bVar8 = sub_41741( uParam1 );
        break;
        case 3:
        bVar8 = sub_41891( uParam1 );
        break;
        case 4:
        bVar8 = sub_42169( uParam1 );
        break;
        case 5:
        bVar8 = sub_42472( uParam1 );
        break;
        case 6:
        bVar8 = sub_42671( uParam1 );
        break;
        case 7:
        bVar8 = sub_42897( uParam1 );
        break;
        case 8:
        bVar8 = sub_43132( uParam1 );
        break;
        case 9:
        bVar8 = sub_43507( uParam1 );
        break;
        case 10:
        bVar8 = sub_43754( uParam1 );
        break;
        case 11:
        bVar8 = sub_43893( uParam1 );
        break;
        case 12:
        bVar8 = sub_44192( uParam1 );
        break;
        case 13:
        bVar8 = sub_44420( uParam1 );
        break;
        case 14:
        bVar8 = sub_44707( uParam1 );
        break;
        case 15:
        bVar8 = sub_44989( uParam1 );
        break;
        case 16:
        bVar8 = sub_45271( uParam1 );
        break;
        case 17:
        bVar8 = sub_45472( uParam1 );
        break;
        case 18:
        bVar8 = sub_45545( uParam1 );
        break;
        case 19:
        bVar8 = sub_45759( uParam1 );
        break;
        case 20:
        bVar8 = sub_46012( uParam1 );
        break;
        case 21:
        bVar8 = sub_46259( uParam1 );
        break;
        case 22:
        bVar8 = sub_46460( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_41120( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_38743( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_46783( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_39437(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_39716( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_39716( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_39716( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_39716( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_39716( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_39716( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_39716( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_39716( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_39716( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_39716( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_39716( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_39716( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_39716( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_39716( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_39716( iVar3, 0, sub_40998(), sub_41264(), 0, 0 );
        break;
        default:
        sub_41423( "Friend 1", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Friend 1", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_39716(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_39727( uParam1 );
    sub_39901( uParam0, 0, uParam2 );
    sub_39901( uParam0, 1, uParam3 );
    sub_39901( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_37978();
    return;
}

void sub_39727(unknown uParam0)
{
    ADD_SCORE( sub_3056(), uParam0 );
    sub_39752( uParam0 );
    return;
}

void sub_39752(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2001( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_39901(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_40058( uParam0 );
    }
    return;
}

void sub_40058(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 )))))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_40998()
{
    switch (l_U569[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_41120( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_41120(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_41264()
{
    switch (l_U569[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_41120( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_41423(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_41515(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 2", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 2", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41741(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_41423( "Girl 3", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Girl 3", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41891(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_39716( iVar3, 0, sub_40998(), sub_41264(), 0, 0 );
        break;
        default:
        sub_41423( "Friend 4", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Friend 4", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42169(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39716( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 5", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 5", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42472(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 7", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 7", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42671(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 7b", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 7b", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42897(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_39716( iVar3, 0, sub_40998(), sub_41264(), 0, 0 );
        break;
        default:
        sub_41423( "Friend 8", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Friend 8", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43132(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_39716( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_39716( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_39716( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_39716( iVar3, 0, sub_40998(), sub_41264(), 0, 0 );
        break;
        default:
        sub_41423( "Friend 9", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Friend 9", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43507(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_39716( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_39716( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_41423( "Contact 10", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_41423( "Contact 10", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43754(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_41423( "Girl 11", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Girl 11", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_43893(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39716( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39716( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_41423( "Contact 12", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 12", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44192(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 13", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 13", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44420(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_39716( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_39716( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_39716( iVar3, 0, sub_40998(), sub_41264(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_41423( "Friend 15", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Friend 15", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44707(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39716( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39716( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 16", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 16", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_44989(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39716( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_39716( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_41423( "Contact 18", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 18", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45271(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 19", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 19", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45472(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_41423( "Girl 20", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45545(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_41423( "Contact 21", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 21", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_45759(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_39716( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_41423( "Contact 22", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 22", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46012(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_39716( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_39716( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_39716( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_41423( "Contact 24", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 24", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46259(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_39716( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_39716( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_41423( "Contact 25", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_41423( "Contact 25", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_46460(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_39716( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_41423( "Girl 26", 1 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_41423( "Girl 26", 0 );
        sub_39716( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_46783(int iParam0, int iParam1)
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
    if (sub_46831( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_47562( iParam1 );
    }
    return;
}

int sub_46831(int iParam0, int iParam1)
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
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_46971( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_46971(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_47153( 0 );
    return;
}

void sub_47153(boolean bParam0)
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
        sub_47408();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_47408()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_47562(int iParam0)
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
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_47895( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_47895( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_47895( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_47895( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_47895( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_47895( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_47895( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_47895( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_47895( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_47895( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_47895( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_47895( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_47895( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_47895( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_47895( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_47895( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_47895( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_47895( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_47895( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_47895(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_48605(unknown uParam0, unknown uParam1)
{
    sub_48624( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_48624(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_49035()
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

int sub_49120(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_49177(unknown uParam0)
{
    sub_1388();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_49216(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_49324()
{
    sub_49333();
    return;
}

void sub_49333()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_49412()
{
    sub_49333();
    return;
}

void sub_49452()
{
    sub_49333();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

