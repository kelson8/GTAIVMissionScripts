void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U481 = {-1984.43100000, -22.83510000, 5.44760000};
    l_U484 = {754.95820000, -214.45890000, 4.81880000};
    l_U490 = 0;
    l_U491 = 0;
    l_U489 = 0;
    while (true)
    {
        WAIT( 0 );
        sub_193();
        if (g_U9893._fU28)
        {
            if (g_U9893._fU40 == 0)
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        if ((NOT (IS_CHAR_DEAD( sub_456() ))) AND (IS_PLAYER_PLAYING( sub_418() )))
        {
            switch (l_U491)
            {
                case 0:
                sub_563();
                break;
                case 1:
                sub_4947();
                break;
                case 2:
                sub_5301();
                break;
                case 3:
                sub_6993();
                break;
                case 4:
                sub_7757();
                TERMINATE_THIS_SCRIPT();
                break;
            }
            sub_20230();
            sub_22006();
        }
    }
    return;
}

void sub_193()
{
    int iVar2;

    if (l_U489 == 0)
    {
        return;
    }
    if ((NOT (DOES_BLIP_EXIST( l_U488 ))) AND (NOT (DOES_BLIP_EXIST( l_U487 ))))
    {
        l_U489 = 0;
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U489 > iVar2)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U487 ))
    {
        FLASH_BLIP( l_U487, 0 );
        CHANGE_BLIP_PRIORITY( l_U487, l_U5 );
    }
    if (DOES_BLIP_EXIST( l_U488 ))
    {
        FLASH_BLIP( l_U488, 0 );
        CHANGE_BLIP_PRIORITY( l_U488, l_U5 );
    }
    return;
}

void sub_418()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_456()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_563()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U490 == 0)
    {
        l_U492 = iVar2 + 10000;
        l_U490++;
    }
    if (g_U10978)
    {
        l_U490 = 0;
        l_U491 = 0;
        return;
    }
    if (l_U490 == 1)
    {
        if (l_U492 < iVar2)
        {
            if (NOT (sub_689( 0, "MF3_ROM6", "MF3AUD" )))
            {
                l_U490 = 0;
                l_U491 = 0;
                return;
            }
            l_U490++;
            return;
        }
    }
    if (l_U490 == 2)
    {
        if (NOT sub_4605())
        {
            l_U490++;
        }
    }
    if (l_U490 == 3)
    {
        switch (sub_4731())
        {
            case 1:
            case 2:
            l_U490 = 0;
            l_U491 = 0;
            return;
        }
        l_U490++;
    }
    if (l_U490 == 4)
    {
        if (sub_4854())
        {
            l_U490 = 0;
            l_U491 = 0;
            return;
        }
        l_U490 = 99;
    }
    if (l_U490 == 99)
    {
        l_U490 = 0;
        l_U491 = 1;
    }
    return;
}

void sub_689(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_747( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_747(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_817( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_817( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_418() )))
    {
        sub_817( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_456() ))) AND (IS_CHAR_IN_ANY_CAR( sub_456() )))
    {
        sub_817( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_817( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_1274()))
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
                sub_817( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_1274()))
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
    sub_2646( uParam0, ref g_U91._fU176 );
    sub_4027( ref g_U91._fU160 );
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
        sub_4267( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_817(unknown uParam0)
{
    return;
}

int sub_1274()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_1331())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_1331()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_418() )))
    {
        sub_817( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_817( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_817( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_817( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_418() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_456() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_456(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_817( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_456() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_817( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_817( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_418() )))
    {
        sub_817( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_2646(int iParam0, unknown uParam1)
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

void sub_4027(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_4267(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_4605()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 3) || (g_U15946[g_U91._fU60]._fU132._fU24 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4731()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_4854()
{
    return g_U91._fU504;
}

void sub_4947()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U490 == 0)
    {
        l_U492 = iVar2 + 10000;
        l_U490++;
    }
    if (g_U10978)
    {
        l_U490 = 0;
        l_U491 = 1;
        return;
    }
    if (l_U490 == 1)
    {
        if (l_U492 < iVar2)
        {
            if (NOT (sub_689( 10, "MF6_FIN1", "MF12AUD" )))
            {
                l_U490 = 0;
                l_U491 = 1;
                return;
            }
            l_U490++;
            return;
        }
    }
    if (l_U490 == 2)
    {
        if (NOT sub_4605())
        {
            l_U490++;
        }
    }
    if (l_U490 == 3)
    {
        switch (sub_4731())
        {
            case 1:
            case 2:
            l_U490 = 0;
            l_U491 = 1;
            return;
        }
        l_U490++;
    }
    if (l_U490 == 4)
    {
        if (sub_4854())
        {
            l_U490 = 0;
            l_U491 = 1;
            return;
        }
        l_U490 = 99;
    }
    if (l_U490 == 99)
    {
        l_U490 = 0;
        l_U491 = 2;
    }
    return;
}

void sub_5301()
{
    int iVar2;

    if (l_U490 == 0)
    {
        ADD_BLIP_FOR_CONTACT( l_U481._fU0, l_U481._fU4, l_U481._fU8, ref l_U487 );
        CHANGE_BLIP_DISPLAY( l_U487, 2 );
        CHANGE_BLIP_SPRITE( l_U487, 78 );
        CHANGE_BLIP_PRIORITY( l_U487, 1 );
        ADD_BLIP_FOR_CONTACT( l_U484._fU0, l_U484._fU4, l_U484._fU8, ref l_U488 );
        CHANGE_BLIP_DISPLAY( l_U488, 2 );
        CHANGE_BLIP_SPRITE( l_U488, 77 );
        CHANGE_BLIP_PRIORITY( l_U488, 1 );
        sub_5493( ref l_U488, 849.32810000, -135.87780000, 4.94600000, 232.08170000 );
        iVar2 = 0;
        GET_GAME_TIMER( ref iVar2 );
        l_U489 = iVar2 + 10000;
        FLASH_BLIP( l_U487, 1 );
        FLASH_BLIP_ALT( l_U488, 1 );
        CHANGE_BLIP_PRIORITY( l_U487, l_U6 );
        CHANGE_BLIP_PRIORITY( l_U488, l_U6 );
        PRINT_HELP( "CHOOSE" );
        l_U493 = 1;
        l_U494 = 0;
        l_U495 = 0;
        l_U490++;
    }
    if ((g_U9893._fU12) || (g_U10978))
    {
        return;
    }
    if (l_U490 == 1)
    {
        if ((NOT sub_5897()) AND ((NOT sub_5845()) AND (sub_5706())))
        {
            g_U15654[12] = 1;
            l_U490 = 99;
        }
        if ((NOT sub_5897()) AND ((NOT sub_5845()) AND (IS_CHAR_IN_AREA_3D( sub_456(), 682.06890000, -243.41550000, 0.00000000, 782.33720000, -153.58430000, 32.40240000, 0 ))))
        {
            g_U15654[12] = 0;
            l_U490 = 99;
        }
        if ((NOT sub_5897()) AND ((NOT sub_5845()) AND (IS_CHAR_IN_AREA_3D( sub_456(), 682.06890000, -295.79970000, 0.00000000, 749.06460000, -234.07570000, 32.40240000, 0 ))))
        {
            g_U15654[12] = 0;
            l_U490 = 99;
        }
        if ((NOT sub_5897()) AND ((NOT sub_5845()) AND (IS_CHAR_IN_AREA_3D( sub_456(), 645.37670000, -357.94360000, 0.00000000, 725.22410000, -234.07570000, 32.40240000, 0 ))))
        {
            g_U15654[12] = 0;
            l_U490 = 99;
        }
    }
    if (l_U490 == 99)
    {
        sub_6212();
        l_U490 = 0;
        l_U491 = 3;
    }
    return;
}

void sub_5493(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_5706()
{
    float fVar2;

    fVar2 = l_U481._fU8 + 2.00000000;
    if (LOCATE_CHAR_ON_FOOT_3D( sub_456(), l_U481._fU0, l_U481._fU4, fVar2, 1.60000000, 1.60000000, 2.00000000, 1 ))
    {
        return 1;
    }
    if (LOCATE_CHAR_IN_CAR_3D( sub_456(), l_U481._fU0, l_U481._fU4, fVar2, 2.50000000, 2.50000000, 2.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_5845()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_5897()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

void sub_6212()
{
    sub_6221();
    sub_6324( ref g_U9893._fU68 );
    sub_6373();
    return;
}

void sub_6221()
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

void sub_6324(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6373()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_6411( 1, g_U569[I] )) == 0)
        {
            sub_6662( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6840())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_6411(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6662(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6747( g_U569 - 1 );
    return;
}

void sub_6747(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6840()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_6411( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6993()
{
    unknown uVar2;

    if (l_U490 == 0)
    {
        if (NOT g_U15654[12])
        {
            PRINT_BIG( "M_92", 6000, 2 );
            sub_7046();
            l_U490 = 99;
            return;
        }
        else
        {
            PRINT_BIG( "M_91", 6000, 2 );
            sub_7046();
            l_U490++;
        }
    }
    if (l_U490 == 1)
    {
        if (IS_PLAYER_PLAYING( sub_418() ))
        {
            DO_SCREEN_FADE_OUT( 500 );
            if (IS_PLAYER_PLAYING( sub_418() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_456() ))
                {
                    SET_PLAYER_CONTROL( sub_418(), 0 );
                }
            }
            if (NOT (IS_CHAR_DEAD( sub_456() )))
            {
                SET_CHAR_PROOFS( sub_456(), 1, 1, 1, 1, 1 );
            }
            l_U490++;
        }
    }
    if (l_U490 == 2)
    {
        if (IS_SCREEN_FADED_OUT())
        {
            if (IS_PLAYER_PLAYING( sub_418() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_456() ))
                {
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
                    if (NOT (IS_CAR_DEAD( uVar2 )))
                    {
                        CLEAR_AREA( -2020.11500000, -15.15170000, 5.79430000, 3.00000000, 0 );
                        SET_CAR_HEADING( uVar2, 273.10230000 );
                        SET_CAR_COORDINATES( uVar2, -2020.11500000, -15.15170000, 5.79430000 );
                    }
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_456() );
                SET_PLAYER_CONTROL( sub_418(), 0 );
                CLEAR_WANTED_LEVEL( sub_418() );
            }
            if (NOT (IS_CHAR_DEAD( sub_456() )))
            {
                if (IS_CHAR_ON_FIRE( sub_456() ))
                {
                    EXTINGUISH_CHAR_FIRE( sub_456() );
                }
                SET_CHAR_PROOFS( sub_456(), 0, 0, 0, 0, 0 );
            }
            sub_7563();
            l_U490 = 99;
        }
    }
    if (l_U490 == 99)
    {
        l_U490 = 0;
        l_U491 = 4;
        sub_7707();
    }
    return;
}

void sub_7046()
{
    return sub_7057( 1, 1 );
}

int sub_7057(boolean bParam0, unknown uParam1)
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

void sub_7563()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_7707()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_7757()
{
    sub_7766();
    return;
}

void sub_7766()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_7784();
    sub_7843( iVar2, iVar3, iVar4 );
    return;
}

void sub_7784()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_7843(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_7874( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_7874(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_7970( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_7970( ref cVar9 );
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
            sub_7970( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_7970( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_7970( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_7970( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_8547( iParam0, iVar7 );;;
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
                sub_8965( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_8965( 0, 4 );
            }
        }
    }
    if (NOT (sub_9054( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_418(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_418() );
    }
    sub_18286();
    bVar27 = true;
    uVar28 = sub_8547( iParam0, iVar7 );
    uVar29 = sub_18472( iParam0 );
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
                sub_19003( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_19433();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_19518( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_19575( iParam0 );
                sub_19710( 0 );
                sub_19791( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_19896();
        }
    }
    if (bParam2)
    {
        sub_19433();
        sub_19984();
        sub_19710( 0 );
    }
    if (bParam3)
    {
        sub_19433();
        sub_20024();
        sub_19710( 0 );
        sub_19791( uVar29, 0 );
    }
    sub_20075();
    return;
}

void sub_7970(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_8547(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_8621( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_8621(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_8965(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_9054(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_9262( uParam1 );
        break;
        case 1:
        bVar8 = sub_11340( uParam1 );
        break;
        case 2:
        bVar8 = sub_11566( uParam1 );
        break;
        case 3:
        bVar8 = sub_11716( uParam1 );
        break;
        case 4:
        bVar8 = sub_11994( uParam1 );
        break;
        case 5:
        bVar8 = sub_12297( uParam1 );
        break;
        case 6:
        bVar8 = sub_12496( uParam1 );
        break;
        case 7:
        bVar8 = sub_12722( uParam1 );
        break;
        case 8:
        bVar8 = sub_12957( uParam1 );
        break;
        case 9:
        bVar8 = sub_13332( uParam1 );
        break;
        case 10:
        bVar8 = sub_13579( uParam1 );
        break;
        case 11:
        bVar8 = sub_13718( uParam1 );
        break;
        case 12:
        bVar8 = sub_14017( uParam1 );
        break;
        case 13:
        bVar8 = sub_14245( uParam1 );
        break;
        case 14:
        bVar8 = sub_14532( uParam1 );
        break;
        case 15:
        bVar8 = sub_14814( uParam1 );
        break;
        case 16:
        bVar8 = sub_15096( uParam1 );
        break;
        case 17:
        bVar8 = sub_15297( uParam1 );
        break;
        case 18:
        bVar8 = sub_15370( uParam1 );
        break;
        case 19:
        bVar8 = sub_15584( uParam1 );
        break;
        case 20:
        bVar8 = sub_15837( uParam1 );
        break;
        case 21:
        bVar8 = sub_16084( uParam1 );
        break;
        case 22:
        bVar8 = sub_16285( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_10945( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_8547( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_16608( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_9262(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_9541( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_9541( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_9541( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_9541( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_9541( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_9541( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_9541( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_9541( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_9541( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_9541( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_9541( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_9541( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_9541( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_9541( iVar3, 0, 3, 1, 0, 0 );
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
        sub_9541( iVar3, 0, sub_10823(), sub_11089(), 0, 0 );
        break;
        default:
        sub_11248( "Friend 1", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Friend 1", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_9541(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_9552( uParam1 );
    sub_9726( uParam0, 0, uParam2 );
    sub_9726( uParam0, 1, uParam3 );
    sub_9726( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_7784();
    return;
}

void sub_9552(unknown uParam0)
{
    ADD_SCORE( sub_418(), uParam0 );
    sub_9577( uParam0 );
    return;
}

void sub_9577(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_8621( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_9726(unknown uParam0, int iParam1, int iParam2)
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
        sub_9883( uParam0 );
    }
    return;
}

void sub_9883(unknown uParam0)
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

int sub_10823()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_10945( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_10945(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_11089()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_10945( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_11248(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_11340(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 2", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 2", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11566(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_11248( "Girl 3", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Girl 3", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11716(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_9541( iVar3, 0, sub_10823(), sub_11089(), 0, 0 );
        break;
        default:
        sub_11248( "Friend 4", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Friend 4", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11994(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_9541( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 5", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 5", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12297(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 7", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 7", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12496(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 7b", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 7b", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12722(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_9541( iVar3, 0, sub_10823(), sub_11089(), 0, 0 );
        break;
        default:
        sub_11248( "Friend 8", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Friend 8", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12957(unknown uParam0)
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
        sub_9541( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_9541( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_9541( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_9541( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_9541( iVar3, 0, sub_10823(), sub_11089(), 0, 0 );
        break;
        default:
        sub_11248( "Friend 9", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Friend 9", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13332(unknown uParam0)
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
        sub_9541( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_9541( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_9541( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_11248( "Contact 10", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_11248( "Contact 10", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13579(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_11248( "Girl 11", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Girl 11", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13718(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_9541( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_9541( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_11248( "Contact 12", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 12", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14017(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 13", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 13", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14245(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_9541( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_9541( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_9541( iVar3, 0, sub_10823(), sub_11089(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_11248( "Friend 15", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Friend 15", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14532(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_9541( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_9541( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 16", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 16", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14814(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_9541( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_9541( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_11248( "Contact 18", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 18", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15096(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 19", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 19", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15297(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_11248( "Girl 20", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15370(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_11248( "Contact 21", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 21", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15584(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_9541( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_11248( "Contact 22", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 22", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15837(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_9541( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_9541( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_9541( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_11248( "Contact 24", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 24", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_9541( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_9541( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_9541( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_11248( "Contact 25", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_11248( "Contact 25", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16285(unknown uParam0)
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
        sub_9541( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_11248( "Girl 26", 1 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_11248( "Girl 26", 0 );
        sub_9541( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_16608(int iParam0, int iParam1)
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
    if (sub_16656( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_17387( iParam1 );
    }
    return;
}

int sub_16656(int iParam0, int iParam1)
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
            sub_16796( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_16796(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_16978( 0 );
    return;
}

void sub_16978(boolean bParam0)
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
        sub_17233();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_17233()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_17387(int iParam0)
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
        sub_17720( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_17720( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_17720( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_17720( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_17720( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_17720( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_17720( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_17720( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_17720( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_17720( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_17720( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_17720( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_17720( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_17720( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_17720( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_17720( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_17720( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_17720( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_17720( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_17720(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_18286()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_6411( 5, g_U569[I] )) == 1))
        {
            if ((sub_6411( 1, g_U569[I] )) != 0)
            {
                sub_6662( I );
            }
        }
    }
    if (NOT sub_6840())
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

int sub_18472(unknown uParam0)
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
    sub_8621( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_19003(unknown uParam0, unknown uParam1)
{
    sub_19022( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_19022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_19433()
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

int sub_19518(int iParam0, int iParam1)
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

void sub_19575(unknown uParam0)
{
    sub_19584();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_19584()
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

void sub_19710(unknown uParam0)
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

void sub_19791(int iParam0, boolean bParam1)
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

void sub_19896()
{
    sub_19905();
    return;
}

void sub_19905()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_19984()
{
    sub_19905();
    return;
}

void sub_20024()
{
    sub_19905();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_20075()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_20097();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_20097()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_20230()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT l_U493)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U495 == 0)
    {
        l_U495 = iVar2 + 10000;
        return;
    }
    if (l_U495 > iVar2)
    {
        return;
    }
    array(ref uVar3._fU0._fU0, 3);
    ref uVar3._fU0;
    ref uVar3;
    uVar10 = sub_20319( 0 );
    sub_20809( uVar10, 13, 16383, 16383, ref uVar3 );
    sub_21153( ref uVar3, 1 );
    sub_21181( ref uVar3, 0 );
    sub_21208( ref uVar3 );
    l_U493 = 0;
    l_U494 = 1;
    l_U495 = 0;
    return;
}

int sub_20319(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_8621( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_20809(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_20831( uParam0, 0, iParam4 + 0 );
    sub_20831( uParam1, 1, iParam4 + 0 );
    sub_20831( uParam2, 2, iParam4 + 0 );
    sub_20831( uParam3, 3, iParam4 + 0 );
    sub_20831( 0, 4, iParam4 + 0 );
    sub_20831( 1, 5, iParam4 + 0 );
    sub_20831( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_20831(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_21153(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_21181(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_21208(int iParam0)
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
        if (NOT sub_21278())
        {
            sub_6662( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_21405( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_6662( iVar9 );
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
                ConcatString(ref cVar5, sub_6411( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_6411( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_21278()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_6411( 1, g_U569[I] )) != 0))
        {
            sub_6662( I );
            return 1;
        }
    }
    return 0;
}

int sub_21405(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_21470( uParam0, g_U569[Result] ))
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

int sub_21470(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_6411( 0, uParam0 );
        if (iVar14 == (sub_6411( 0, uParam6 )))
        {
            iVar15 = sub_6411( 3, uParam0 );
            if (iVar15 == (sub_6411( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_22006()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT l_U494)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U495 == 0)
    {
        l_U495 = iVar2 + 120000;
        return;
    }
    if (l_U495 > iVar2)
    {
        return;
    }
    array(ref uVar3._fU0._fU0, 3);
    ref uVar3._fU0;
    ref uVar3;
    uVar10 = sub_20319( 0 );
    sub_20809( uVar10, 16, 16383, 16383, ref uVar3 );
    sub_21153( ref uVar3, 1 );
    sub_21181( ref uVar3, 0 );
    sub_21208( ref uVar3 );
    l_U494 = 0;
    l_U495 = 0;
    return;
}

