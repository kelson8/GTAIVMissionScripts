// kelson8 -
// I have renamed some variables in here and guessed what some of these functions do.

// This one came from one of the debug lines here: sub_1814( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
// g_U91 = cellphone3Dstructure

void main()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    l_U0 = 225;
    l_U957 = 1;
    l_U1075 = 0;

    getCurrentLanguage = GET_CURRENT_LANGUAGE();
    cellphone3Dstructure._fU380 = 1;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        DisplayHudAndActivatePhoneCamera();
        sub_108( ref l_U1020, 1 );
        cellphone3Dstructure._fU0 = 1000;
        STOP_MOBILE_PHONE_RINGING();
        UNREGISTER_SCRIPT_WITH_AUDIO();
        DESTROY_MOBILE_PHONE();
        TERMINATE_THIS_SCRIPT();
    }
    SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
    switch (g_U826)
    {
        case 0:
        cellphone3Dstructure._fU496 = GET_IS_HIDEF();
        break;
        case 1:
        cellphone3Dstructure._fU496 = 1;
        break;
        case 2:
        cellphone3Dstructure._fU496 = 0;
        break;
    }
    sub_978( ref l_U985, ref l_U972 );
    iVar6 = 0;
    sub_2206( ref l_U985 );
    if (cellphone3Dstructure._fU0 == 1000)
    {
        sub_108( ref l_U1020, 1 );
        sub_3046();
        sub_3247();
        if (cellphone3Dstructure._fU40 == 0)
        {
            sub_3706( 1048 );
        }
        else if ((cellphone3Dstructure._fU404 == 1015) AND (cellphone3Dstructure._fU408))
        {
            l_U1041 = sub_3771();
            if (l_U1041 != -1)
            {
                sub_3706( 1015 );
                l_U959 = 1;
            }
            else
            {
                sub_3706( 1002 );
            }
            cellphone3Dstructure._fU404 = 1000;
        }
        else
        {
            sub_3706( 1002 );
        }
    }
    while (true)
    {
        WAIT( 0 );
        sub_3939( ref l_U985, ref l_U972 );
        cellphone3Dstructure._fU428 = l_U1._fU60;
        if (NOT sub_3972())
        {
            if ((NOT sub_4914()) AND (sub_4880( ref l_U1020 )))
            {
                DisplayHudAndActivatePhoneCamera();
                cellphone3Dstructure._fU0 = 1001;
                cellphone3Dstructure.disableCellphone = 0;
            }
        }
        else if ((cellphone3Dstructure._fU52) || (cellphone3Dstructure._fU48))
        {
            if ((NOT sub_4914()) AND (sub_4880( ref l_U1020 )))
            {
                DisplayHudAndActivatePhoneCamera();
                while (NOT (sub_5052( 1 )))
                {
                    WAIT( 0 );
                    sub_5509();
                }
                if (cellphone3Dstructure._fU48)
                {
                    sub_3706( 1004 );
                }
                else
                {
                    sub_3706( 1005 );
                }
            }
        }
        if (sub_37055( iVar6 ))
        {
            switch (cellphone3Dstructure._fU0)
            {
                case 1002:
                sub_5509();
                if (sub_37391( ref l_U1020, 2 ))
                {
                    switch (sub_38425( cellphone3Dstructure._fU524 ))
                    {
                        case 0:
                        sub_3706( 1003 );
                        break;
                        case 6:
                        l_U1038 = -1;
                        switch (cellphone3Dstructure._fU404)
                        {
                            case 1015:
                            l_U1041 = sub_3771();
                            if (l_U1041 != -1)
                            {
                                sub_3706( 1015 );
                                l_U959 = 1;
                            }
                            else
                            {
                                sub_3706( 1011 );
                            }
                            break;
                            default:
                            sub_3706( 1011 );
                            break;
                        }
                        cellphone3Dstructure._fU404 = 1000;
                        break;
                        case 7:
                        case 1:
                        case 18:
                        cellphone3Dstructure._fU404 = 1000;
                        sub_3706( 1001 );
                        break;
                    }
                }
                break;
                case 1003:
                sub_5509();
                if (sub_37391( ref l_U1020, 3 ))
                {
                    switch (sub_38425( cellphone3Dstructure._fU524 ))
                    {
                        case 0:
                        if ((l_U1088 < 4) AND (l_U1088 > 0))
                        {
                            if (l_U1089 > 0)
                            {
                                l_U1089--;
                            }
                        }
                        break;
                        case 1:
                        if ((l_U1088 < 4) AND (l_U1088 > 0))
                        {
                            if (l_U1089 < 3)
                            {
                                l_U1089++;
                            }
                        }
                        break;
                        case 3:
                        if (l_U1088 < 4)
                        {
                            l_U1088++;
                        }
                        break;
                        case 2:
                        switch (l_U1088)
                        {
                            case 1: if (COMPARE_STRING( ref cellphone3Dstructure._fU128, "" ))
                            {
                                break;
                            }
                            default:
                            if (l_U1088 > 0)
                            {
                                l_U1088--;
                            }
                            break;
                        }
                        break;
                        case 8:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 0, 16);
                            l_U1088 = 2;
                            l_U1089 = 3;
                            l_U1090++;
                        }
                        break;
                        case 9:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 1, 16);
                            l_U1088 = 1;
                            l_U1089 = 0;
                            l_U1090++;
                        }
                        break;
                        case 10:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 2, 16);
                            l_U1088 = 2;
                            l_U1089 = 0;
                            l_U1090++;
                        }
                        break;
                        case 11:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 3, 16);
                            l_U1088 = 3;
                            l_U1089 = 0;
                            l_U1090++;
                        }
                        break;
                        case 12:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 4, 16);
                            l_U1088 = 1;
                            l_U1089 = 1;
                            l_U1090++;
                        }
                        break;
                        case 13:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 5, 16);
                            l_U1088 = 2;
                            l_U1089 = 1;
                            l_U1090++;
                        }
                        break;
                        case 14:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 6, 16);
                            l_U1088 = 3;
                            l_U1089 = 1;
                            l_U1090++;
                        }
                        break;
                        case 15:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 7, 16);
                            l_U1088 = 1;
                            l_U1089 = 2;
                            l_U1090++;
                        }
                        break;
                        case 16:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 8, 16);
                            l_U1088 = 2;
                            l_U1089 = 2;
                            l_U1090++;
                        }
                        break;
                        case 17:
                        if (l_U1090 < 10)
                        {
                            ConcatString(ref cellphone3Dstructure._fU128, 9, 16);
                            l_U1088 = 3;
                            l_U1089 = 2;
                            l_U1090++;
                        }
                        break;
                        case 6:
                        switch (iVar5)
                        {
                            case -2:
                            sub_3706( 1002 );
                            break;
                            case -1:
                            cellphone3Dstructure._fU420 = 0;
                            cellphone3Dstructure.multipleChoiceNumber = -2;
                            cellphone3Dstructure._fU124 = 1;
                            cellphone3Dstructure._fU60 = 56;
                            cellphone3Dstructure._fU52 = 1;
                            break;
                            case 12: break;
                            case 10:
                            if (l_U1090 > 0)
                            {
                                l_U1090--;
                                StrCopy( ref cellphone3Dstructure._fU128, GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref cellphone3Dstructure._fU128, l_U1090 ), 16 );
                            }
                            break;
                            default:
                            if (l_U1090 < 10)
                            {
                                if (iVar5 == 11)
                                {
                                    ConcatString(ref cellphone3Dstructure._fU128, 0, 16);
                                }
                                else
                                {
                                    ConcatString(ref cellphone3Dstructure._fU128, iVar5, 16);
                                }
                                l_U1090++;
                                if (l_U1090 == 10)
                                {
                                    l_U1088 = 0;
                                }
                            }
                            break;
                        }
                        break;
                        case 7:
                        sub_3706( 1002 );
                        break;
                        case 18:
                        sub_3706( 1001 );
                        break;
                    }
                }
                switch (l_U1088)
                {
                    case 0:
                    iVar5 = -1;
                    break;
                    case 4:
                    iVar5 = -2;
                    break;
                    default:
                    iVar5 = l_U1088 + (l_U1089 * 3);
                    break;
                }
                if (((COMPARE_STRING( ref cellphone3Dstructure._fU128, "911" )) AND (l_U1090 == 3)) || (l_U1090 == 10))
                {
                    l_U1088 = 0;
                }
                sub_25556( iVar5 );
                sub_43972( iVar5 );
                break;
                case 1047:
                case 1036:
                l_U1038 = 1047;
                sub_3706( 1011 );
                case 1011:
                case 1012:
                case 1013:
                case 1014:
                case 1016:
                case 1017:
                case 1018:
                case 1026:
                case 1027:
                case 1035:
                sub_5509();
                if (cellphone3Dstructure._fU0 == 1013)
                {
                    if (NOT g_U15946[cellphone3Dstructure._fU60]._fU132._fU0)
                    {
                        sub_3706( 1012 );
                        break;
                    }
                }
                else if (cellphone3Dstructure._fU0 == 1026)
                {
                    if (NOT cellphone3Dstructure._fU544)
                    {
                        if (l_U1._fU60 == 1030)
                        {
                            PRINT_HELP( "CP_SLEEP_H2" );
                            cellphone3Dstructure._fU544 = 1;
                        }
                    }
                }
                switch (sub_38425( cellphone3Dstructure._fU524 ))
                {
                    case 0:
                    if ((l_U1039) AND (cellphone3Dstructure._fU0 == 1014))
                    {
                        sub_44792( ref l_U1._fU52, ref l_U1._fU60, ref l_U1043, ref l_U1044 );
                    }
                    else
                    {
                        sub_44866( ref l_U1, ref l_U226, ref l_U39 );
                    }
                    break;
                    case 1:
                    if ((l_U1039) AND (cellphone3Dstructure._fU0 == 1014))
                    {
                        sub_45738( ref l_U1._fU52, ref l_U1._fU60, ref l_U1046, ref l_U1043, ref l_U1044 );
                    }
                    else
                    {
                        sub_45816( ref l_U1, ref l_U226, ref l_U39 );
                    }
                    break;
                    case 6:
                    switch (cellphone3Dstructure._fU0)
                    {
                        case 1011:
                        if (l_U1._fU60 == 65486)
                        {
                            if ((IS_SCREEN_FADED_IN()) AND ((NOT IS_MINIGAME_IN_PROGRESS()) AND (NOT g_U10978)))
                            {
                                g_U822 = 1;
                                sub_3706( 1001 );
                            }
                        }
                        else
                        {
                            switch (l_U1._fU60)
                            {
                                case 1047:
                                if ((# -NULL-0xbdd763()) == 1)
                                {
                                    sub_3706( 1039 );
                                }
                                else if (IS_PLAYER_SIGNED_IN_LOCALLY() == 1)
                                {
                                    sub_46855();
                                }
                                else if (# -NULL-0xc283b9())
                                {
                                    sub_3706( 1040 );
                                }
                                else if ((# -NULL-0xc0dd40()) || (# -NULL-0xc0e043()))
                                {
                                    sub_3706( 1045 );
                                }
                                else
                                {
                                    sub_47019();
                                    if ((# -NULL-0xc0dd40()) || (# -NULL-0xc0e043()))
                                    {
                                        sub_3706( 1045 );
                                    }
                                };;;;
                                break;
                                case 1012:
                                l_U1038 = cellphone3Dstructure._fU72;
                                sub_3706( 1012 );
                                break;
                                case 1031:
                                if (IS_REPLAY_SYSTEM_SAVING())
                                {
                                    l_U1038 = -1;
                                    sub_3706( 1033 );
                                }
                                else
                                {
                                    l_U1038 = -1;
                                    sub_3706( 1032 );
                                }
                                break;
                                default:
                                l_U1038 = -1;
                                sub_3706( l_U1._fU60 );
                                break;
                            }
                        }
                        break;
                        case 1012:
                        if (l_U1._fU4 != 0)
                        {
                            l_U1038 = -1;
                            cellphone3Dstructure._fU60 = l_U1._fU60;
                            if ((((sub_15436( g_U15946[cellphone3Dstructure._fU60]._fU0 )) != 0) || (cellphone3Dstructure._fU68 == cellphone3Dstructure._fU60)) AND (cellphone3Dstructure._fU76 != cellphone3Dstructure._fU60))
                            {
                                sub_3706( 1013 );
                            }
                            else
                            {
                                cellphone3Dstructure._fU52 = 1;
                            }
                        }
                        break;
                        case 1013:
                        if (l_U1._fU60 != 14)
                        {
                            if (g_U8394 == 0)
                            {
                                g_U15946[cellphone3Dstructure._fU60]._fU8[1]._fU0[l_U1._fU60] = 1;
                                g_U15946[cellphone3Dstructure._fU60]._fU4 = 1;
                                sub_47486( cellphone3Dstructure._fU60 );
                            }
                        }
                        cellphone3Dstructure._fU52 = 1;
                        break;
                        case 1014:
                        if (NOT l_U1039)
                        {
                            l_U1038 = -1;
                            l_U1041 = l_U1._fU60;
                            l_U947 = {g_U569[l_U1041]};
                            sub_3706( 1015 );
                        }
                        break;
                        case 1016:
                        l_U1038 = -1;
                        switch (l_U1._fU60)
                        {
                            case 0:
                            l_U1038 = -1;
                            cellphone3Dstructure._fU60 = l_U1048;
                            if ((((sub_15436( g_U15946[cellphone3Dstructure._fU60]._fU0 )) != 0) || (cellphone3Dstructure._fU68 == cellphone3Dstructure._fU60)) AND (cellphone3Dstructure._fU76 != cellphone3Dstructure._fU60))
                            {
                                sub_3706( 1013 );
                            }
                            else
                            {
                                cellphone3Dstructure._fU52 = 1;
                            }
                            break;
                            case 1:
                            cellphone3Dstructure._fU420 = 0;
                            cellphone3Dstructure.multipleChoiceNumber = -2;
                            cellphone3Dstructure._fU128 = {l_U1049};
                            cellphone3Dstructure._fU60 = 56;
                            cellphone3Dstructure._fU52 = 1;
                            break;
                            case 2:
                            sub_47878( l_U1041 );
                            sub_3706( 1014 );
                            break;
                            case 3: break;
                        }
                        break;
                        case 1017:
                        if (l_U39[l_U1._fU44]._fU72)
                        {
                            l_U1038 = -1;
                            l_U1091 = l_U1._fU60;
                            sub_3706( 1018 );
                        }
                        break;
                        case 1018:
                        if (l_U39[l_U1._fU44]._fU72)
                        {
                            l_U1038 = -1;
                            l_U1092 = l_U1._fU60;
                            sub_3706( 1019 );
                        }
                        break;
                        case 1026:
                        switch (l_U1._fU60)
                        {
                            case 0:
                            l_U1038 = 0;
                            if (cellphone3Dstructure._fU500)
                            {
                                cellphone3Dstructure._fU500 = 0;
                            }
                            else
                            {
                                cellphone3Dstructure._fU500 = 1;
                            }
                            sub_2206( ref l_U985 );
                            sub_3706( 1026 );
                            break;
                            case 1:
                            if (cellphone3Dstructure._fU524)
                            {
                                // CP_NAV_NO = No
                                sub_48299( 1, "CP_NAV_NO", ref l_U1, ref l_U39, ref l_U226, 0 );
                                cellphone3Dstructure._fU524 = 0;
                            }
                            else
                            {
                                // CP_NAV_YES = Yes
                                sub_48299( 1, "CP_NAV_YES", ref l_U1, ref l_U39, ref l_U226, 0 );
                                cellphone3Dstructure._fU524 = 1;
                            }
                            break;
                            default:
                            if ((l_U1._fU60 == 1030) AND (cellphone3Dstructure._fU540))
                            {
                                cellphone3Dstructure._fU540 = 0;
                                SET_SLEEP_MODE_ACTIVE( 0 );
                                sub_48299( 1030, "CP_SLEEP_ON2", ref l_U1, ref l_U39, ref l_U226, 0 );
                                break;
                            }
                            sub_3706( l_U1._fU60 );
                            break;
                        }
                        break;
                        case 1027:
                        cellphone3Dstructure._fU112 = l_U1._fU60;
                        SET_MOBILE_RING_TYPE( cellphone3Dstructure._fU112 );
                        break;
                        case 1035:
                        sub_18129( l_U1._fU60 );
                        break;
                    }
                    break;
                    case 7:
                    switch (cellphone3Dstructure._fU0)
                    {
                        case 1011:
                        sub_3706( 1002 );
                        break;
                        case 1012:
                        l_U1038 = 1012;
                        sub_3706( 1011 );
                        break;
                        case 1013:
                        l_U1038 = cellphone3Dstructure._fU60;
                        sub_3706( 1012 );
                        break;
                        case 1014:
                        l_U1038 = 1014;
                        sub_3706( 1011 );
                        break;
                        case 1016:
                        l_U1038 = -1;
                        if (sub_48940( l_U947, g_U569[l_U1041] ))
                        {
                            sub_3706( 1015 );
                        }
                        else
                        {
                            sub_3706( 1014 );
                        }
                        break;
                        case 1017:
                        l_U1038 = 1017;
                        sub_3706( 1011 );
                        break;
                        case 1018:
                        l_U1038 = l_U1091;
                        sub_3706( 1017 );
                        break;
                        case 1026:
                        l_U1038 = 1026;
                        sub_3706( 1011 );
                        break;
                        case 1027:
                        l_U1038 = 1027;
                        sub_3706( 1026 );
                        break;
                        case 1028:
                        l_U1038 = 1028;
                        sub_3706( 1026 );
                        break;
                        case 1035:
                        l_U1038 = 1035;
                        sub_3706( 1011 );
                        break;
                    }
                    break;
                    case 18:
                    sub_3706( 1001 );
                    break;
                }
                break;
                case 1029:
                sub_5509();
                switch (sub_38425( cellphone3Dstructure._fU524 ))
                {
                    case 0:
                    sub_44866( ref l_U1, ref l_U226, ref l_U39 );
                    break;

                    case 1:
                    sub_45816( ref l_U1, ref l_U226, ref l_U39 );
                    break;

                    case 6:
                    cellphone3Dstructure._fU400 = cellphone3Dstructure._fU396;
                    cellphone3Dstructure._fU396 = l_U1._fU60;
                    cellphone3Dstructure._fU392 = 1;
                    while (cellphone3Dstructure._fU392)
                    {
                        WAIT( 0 );
                    }
                    break;
                    case 7:
                    l_U1038 = 1029;
                    sub_3706( 1026 );
                    break;
                    case 18:
                    sub_3706( 1001 );
                    break;
                }
                break;
                case 1048:
                sub_5509();
                if (sub_37391( ref l_U1020, 2 ))
                {
                    switch (sub_38425( cellphone3Dstructure._fU524 ))
                    {
                        case 0:
                        sub_44866( ref l_U1, ref l_U226, ref l_U39 );
                        break;
                        case 1:
                        sub_45816( ref l_U1, ref l_U226, ref l_U39 );
                        break;
                        case 7:
                        l_U1038 = -1;
                        sub_3706( 1001 );
                        break;
                        case 6:
                        switch (l_U1._fU60)
                        {
                            case 1047:
                            if ((# -NULL-0xbdd763()) == 1)
                            {
                                sub_3706( 1039 );
                            }
                            else if (IS_PLAYER_SIGNED_IN_LOCALLY() == 1)
                            {
                                sub_46855();
                            }
                            else if ((# -NULL-0xc283b9()) == 1)
                            {
                                sub_3706( 1040 );
                            }
                            else if ((# -NULL-0xc0dd40()) || (# -NULL-0xc0e043()))
                            {
                                sub_3706( 1045 );
                            }
                            else
                            {
                                sub_47019();
                                if ((# -NULL-0xc0dd40()) || (# -NULL-0xc0e043()))
                                {
                                    sub_3706( 1045 );
                                }
                            };;;;
                            break;
                            case 1031:
                            if (IS_REPLAY_SYSTEM_SAVING())
                            {
                                l_U1038 = -1;
                                sub_3706( 1033 );
                            }
                            else
                            {
                                l_U1038 = -1;
                                sub_3706( 1032 );
                            }
                            break;
                        }
                        break;
                        case 18:
                        l_U1038 = -1;
                        sub_3706( 1001 );
                        break;
                    }
                }
                break;
                case 1045:
                case 1046:
                sub_5509();
                if (sub_37391( ref l_U1020, 2 ))
                {
                    if ((sub_38425( cellphone3Dstructure._fU524 )) == 7)
                    {
                        if (cellphone3Dstructure._fU40 == 0)
                        {
                            l_U1038 = -1;
                            sub_3706( 1048 );
                        }
                        else
                        {
                            l_U1038 = 1047;
                            sub_3706( 1011 );
                        }
                    }
                    else if (# -NULL-0xc0de66())
                    {
                        sub_46855();
                    }
                    else if ((TIMERA() > 10000) AND (cellphone3Dstructure._fU0 == 1045))
                    {
                        sub_3706( 1046 );
                    };;;
                }
                break;
                case 1038:
                case 1039:
                case 1040:
                case 1043:
                case 1032:
                case 1033:
                case 1030:
                case 1015:
                sub_5509();
                if (sub_37391( ref l_U1020, 2 ))
                {
                    switch (sub_38425( cellphone3Dstructure._fU524 ))
                    {
                        case 0:
                        sub_44792( ref l_U1._fU52, ref l_U1._fU60, ref l_U1043, ref l_U1044 );
                        break;
                        case 1:
                        sub_45738( ref l_U1._fU52, ref l_U1._fU60, ref l_U1046, ref l_U1043, ref l_U1044 );
                        break;
                        case 7:
                        switch (cellphone3Dstructure._fU0)
                        {
                            case 1038:
                            case 1039:
                            case 1040:
                            if (cellphone3Dstructure._fU40 == 0)
                            {
                                l_U1038 = 1047;
                                sub_3706( 1048 );
                            }
                            else
                            {
                                l_U1038 = 1047;
                                sub_3706( 1011 );
                            }
                            break;
                            case 1043:
                            if (cellphone3Dstructure._fU40 == 0)
                            {
                                sub_3706( 1001 );
                            }
                            else
                            {
                                l_U1038 = 1047;
                                sub_3706( 1011 );
                            }
                            break;
                            case 1032:
                            case 1033:
                            if (cellphone3Dstructure._fU40 == 0)
                            {
                                l_U1038 = 1031;
                                sub_3706( 1048 );
                            }
                            else
                            {
                                l_U1038 = 1031;
                                sub_3706( 1011 );
                            }
                            break;
                            case 1030:
                            l_U1038 = 1030;
                            sub_3706( 1026 );
                            break;
                            case 1015:
                            if (l_U959)
                            {
                                l_U1038 = -1;
                                sub_3706( 1002 );
                            }
                            else if (sub_48940( l_U947, g_U569[l_U1041] ))
                            {
                                l_U1038 = l_U1041;
                            }
                            else
                            {
                                l_U1038 = -1;
                            }
                            sub_3706( 1014 );;
                            l_U959 = 0;
                            break;
                        }
                        break;
                        case 6:
                        if (cellphone3Dstructure._fU0 == 1032)
                        {
                            l_U1038 = -1;
                            g_U13 = 1;
                            sub_3706( 1001 );
                        }
                        else if (cellphone3Dstructure._fU0 == 1030)
                        {
                            l_U1038 = 1030;
                            SET_SLEEP_MODE_ACTIVE( 1 );
                            cellphone3Dstructure._fU540 = 1;
                            sub_3706( 1026 );
                        }
                        else if (cellphone3Dstructure._fU0 == 1015)
                        {
                            if (l_U1040)
                            {
                                if (g_U9893._fU4)
                                {
                                    g_U9893._fU12 = 1;
                                    SET_PHONE_HUD_ITEM( 0, "", -1 );
                                }
                                sub_3706( 1001 );
                            }
                            else if (l_U1061)
                            {
                                l_U1038 = -1;
                                sub_3706( 1016 );
                            }
                        };;;
                        break;
                        case 18:
                        sub_3706( 1001 );
                        break;
                    }
                }
                break;
                case 1019:
                sub_5509();
                if (sub_37391( ref l_U1020, 2 ))
                {
                    switch (sub_38425( cellphone3Dstructure._fU524 ))
                    {
                        case 0:
                        sub_44866( ref l_U1, ref l_U226, ref l_U39 );
                        break;
                        case 1:
                        sub_45816( ref l_U1, ref l_U226, ref l_U39 );
                        break;
                        case 7:
                        switch (cellphone3Dstructure._fU0)
                        {
                            case 1019:
                            l_U1038 = l_U1092;
                            sub_3706( 1018 );
                            break;
                            default:
                        }
                        break;
                        case 18:
                        sub_3706( 1001 );
                        break;
                    }
                }
                break;
                case 1020:
                sub_5509();
                switch (sub_38425( 0 ))
                {
                    case 6:
                    INCREMENT_INT_STAT_NO_MESSAGE( 369, 1 );
                    PLAY_SOUND_FRONTEND( -1, "PHONE_TAKE_PICTURE" );
                    sub_3706( 1021 );
                    break;
                    case 7:
                    cellphone3Dstructure._fU88 = 0;
                    l_U1038 = 1020;
                    sub_3706( 1011 );
                    break;
                    case 18:
                    sub_3706( 1001 );
                    break;
                    default:
                    iVar4 = 0;
                    if (((NOT l_U1103) AND (IS_BUTTON_PRESSED( 0, 3 ))) || ((NOT l_U1103) AND (IS_BUTTON_PRESSED( 0, 1 ))))
                    {
                        if ((IS_USING_CONTROLLER()) AND (((IS_SNIPER_INVERTED()) AND (# -NULL-0xc27bfa())) || (((GET_PROFILE_SETTING( 4 )) != 0) AND (NOT (# -NULL-0xc27bfa())))))
                        {
                            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar3, ref uVar3, ref iVar4 );
                        }
                        else
                        {
                            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref iVar4, ref uVar3, ref uVar3 );
                        }
                    }
                    if (iVar4 == 0)
                    {
                        GET_KEYBOARD_MOVE_INPUT( ref uVar3, ref iVar4 );
                    }
                    if ((iVar4 < 65506) || (iVar4 > 30))
                    {
                        if (iVar4 > 30)
                        {
                            iVar4 += 50;
                        }
                        else
                        {
                            iVar4 -= 50;
                        }
                        iVar4 = iVar4 / 50;
                        l_U1._fU60 += iVar4;
                        if (l_U1._fU60 < 0)
                        {
                            l_U1._fU60 = 0;
                        }
                        else if (l_U1._fU60 > 49)
                        {
                            l_U1._fU60 = 49;
                        }
                        l_U1102 = 0.15000000 + ((TO_FLOAT( l_U1._fU60 )) * 0.00792000);
                        CELL_CAM_SET_ZOOM( l_U1102 );
                        sub_51393( "\n Camera Zoom is, ", l_U1102 );
                    }
                    break;
                }
                break;
                case 1022: sub_3706( 1023 );
                case 1021:
                sub_5509();
                break;
                case 1023:
                sub_5509();
                switch (sub_38425( cellphone3Dstructure._fU524 ))
                {
                    case 6:
                    if (cellphone3Dstructure._fU88)
                    {
                        sub_3706( 1024 );
                    }
                    break;
                    case 7:
                    CELL_CAM_ACTIVATE( 1, 1 );
                    cellphone3Dstructure._fU0 = 1020;
                    break;
                    case 18:
                    sub_3706( 1001 );
                    break;
                }
                break;
                case 1024:
                sub_5509();
                break;
                case 1028:
                sub_5509();
                if (NOT l_U1095)
                {
                    if (TIMERA() > 700)
                    {
                        START_CUSTOM_MOBILE_PHONE_RINGING( l_U1._fU60 );
                        l_U1095 = 1;
                    }
                }
                switch (sub_38425( cellphone3Dstructure._fU524 ))
                {
                    case 0:
                    sub_44866( ref l_U1, ref l_U226, ref l_U39 );
                    STOP_MOBILE_PHONE_RINGING();
                    SETTIMERA( 0 );
                    l_U1095 = 0;
                    break;
                    case 1:
                    sub_45816( ref l_U1, ref l_U226, ref l_U39 );
                    STOP_MOBILE_PHONE_RINGING();
                    SETTIMERA( 0 );
                    l_U1095 = 0;
                    break;
                    case 6:
                    cellphone3Dstructure._fU108 = l_U1._fU60;
                    break;
                    case 7:
                    STOP_MOBILE_PHONE_RINGING();
                    l_U1038 = 1028;
                    sub_3706( 1026 );
                    break;
                    case 18:
                    STOP_MOBILE_PHONE_RINGING();
                    sub_3706( 1001 );
                    break;
                }
                break;
                case 1001:
                if (sub_37391( ref l_U1020, 1 ))
                {
                    DisplayHudAndActivatePhoneCamera();
                    cellphone3Dstructure._fU0 = 1000;
                    ReleaseAndMarkTxdAsNotNeeded( ref l_U960 );
                    DESTROY_MOBILE_PHONE();
                    STOP_MOBILE_PHONE_RINGING();
                    UNREGISTER_SCRIPT_WITH_AUDIO();
                    TERMINATE_THIS_SCRIPT();
                }
                break;
            }
        }
        else
        {
            DisplayHudAndActivatePhoneCamera();
            ReleaseAndMarkTxdAsNotNeeded( ref l_U960 );
            STOP_MOBILE_PHONE_RINGING();
            UNREGISTER_SCRIPT_WITH_AUDIO();
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

// sub_69
void DisplayHudAndActivatePhoneCamera()
{
    DISPLAY_HUD( 1 );
    CELL_CAM_ACTIVATE( 0, 0 );
    return;
}

// uParam1 seems to usually be set to 1, at least in this file.
void sub_108(int iParam0, unknown uParam1)
{
    iParam0->_fU0 = uParam1;
    sub_132( uParam1, ref cellphone3Dstructure._fU8 );
    SetPhoneScalePosAndRotation();
    return;
}

void sub_132(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_249( uParam1, 11.50000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_249( uParam1, 5.00000000, -60.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;

        case 2:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_249( uParam1, 11.50000000, -11.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_249( uParam1, 5.00000000, -7.00000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;

        case 3:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_249( uParam1, 11.50000000, 4.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_249( uParam1, 5.00000000, 8.50000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;

        case 4:
        if ((GET_IS_WIDESCREEN()) AND (cellphone3Dstructure._fU496))
        {
            sub_249( uParam1, 11.50000000, -5.25000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        else
        {
            sub_249( uParam1, 5.00000000, -0.75000000, -50.00000000, -92.00000000, -10.50000000, 0.00000000, cellphone3Dstructure._fU8._fU24 );
        }
        break;
    }
    return;
}

void sub_249(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    iParam0->_fU0 = {uParam1};
    iParam0->_fU12 = {uParam4};
    iParam0->_fU24 = uParam7;
    iParam0->_fU28 = uParam1._fU0;
    return;
}

// sub_762
void SetPhoneScalePosAndRotation()
{
    SET_MOBILE_PHONE_SCALE( cellphone3Dstructure._fU8._fU24 );
    SET_MOBILE_PHONE_POSITION( cellphone3Dstructure._fU8._fU0 );
    SET_MOBILE_PHONE_ROTATION( cellphone3Dstructure._fU8._fU12 );
    return;
}

void sub_978(int iParam0, int iParam1)
{
    sub_991( iParam0, iParam1 );
    if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
    {
        cellphone3Dstructure._fU564 = 2;
    }
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        sub_1098( iParam1 + 0, 90, 110, 110, 255 );
        sub_1098( iParam1 + 4, 0, 0, 0, 205 );
        sub_1098( iParam1 + 8, 0, 0, 0, 140 );
        sub_1098( iParam1 + 12, 0, 0, 0, 140 );
        sub_1098( iParam1 + 16, 0, 0, 0, 255 );
        sub_1098( iParam1 + 20, 0, 0, 0, 255 );
        sub_1098( iParam1 + 24, 0, 0, 0, 255 );
        sub_1098( iParam1 + 28, 0, 0, 0, 255 );
        sub_1098( iParam1 + 40, 0, 0, 0, 255 );
        sub_1098( iParam1 + 44, 255, 255, 255, 255 );
        sub_1098( iParam1 + 48, 255, 255, 255, 255 );
        sub_1098( ref iParam0->_fU0[0]._fU8, 255, 255, 255, 230 );
        sub_1098( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 230 );
        sub_1098( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 230 );
        sub_1098( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 230 );
        sub_1098( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 230 );
        sub_1098( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 230 );
        break;

        default:
        sub_1098( iParam1 + 0, 90, 110, 110, 255 );
        sub_1098( iParam1 + 4, 20, 30, 30, 255 );
        sub_1098( iParam1 + 8, 40, 60, 60, 255 );
        sub_1098( iParam1 + 12, 30, 50, 50, 255 );
        sub_1098( iParam1 + 16, 40, 60, 60, 255 );
        sub_1098( iParam1 + 20, 40, 60, 60, 255 );
        sub_1098( iParam1 + 24, 40, 60, 60, 255 );
        sub_1098( iParam1 + 28, 40, 60, 60, 255 );
        sub_1098( iParam1 + 32, 80, 100, 100, 255 );
        sub_1098( iParam1 + 36, 40, 60, 60, 255 );
        sub_1098( iParam1 + 40, 0, 0, 0, 255 );
        sub_1098( iParam1 + 44, 255, 255, 255, 255 );
        sub_1098( iParam1 + 48, 255, 255, 255, 255 );
        sub_1098( ref iParam0->_fU0[0]._fU8, 0, 0, 0, 200 );
        sub_1098( ref iParam0->_fU0[3]._fU8, 255, 255, 255, 200 );
        sub_1098( ref iParam0->_fU0[4]._fU8, 0, 0, 0, 200 );
        sub_1098( ref iParam0->_fU0[5]._fU8, 255, 255, 255, 200 );
        sub_1098( ref iParam0->_fU0[6]._fU8, 0, 0, 0, 200 );
        sub_1098( ref iParam0->_fU0[7]._fU8, 255, 255, 255, 200 );
        break;
    }
    return;
}

void sub_991(int iParam0, unknown uParam1)
{
    sub_1000();
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
        {
            sub_1098( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 230 );
            sub_1098( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 230 );
        }
        else
        {
            sub_1098( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 230 );
            sub_1098( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 230 );
        }
        break;
        default:
        if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
        {
            sub_1098( ref iParam0->_fU0[2]._fU8, 200, 0, 0, 200 );
            sub_1098( ref iParam0->_fU0[1]._fU8, 0, 200, 0, 200 );
        }
        else
        {
            sub_1098( ref iParam0->_fU0[2]._fU8, 204, 43, 71, 200 );
            sub_1098( ref iParam0->_fU0[1]._fU8, 108, 130, 187, 200 );
        }
        break;
    }
    return;
}

void sub_1000()
{
    cellphone3Dstructure._fU560 = 17;
    cellphone3Dstructure._fU556 = 16;
    return;
}

void sub_1098(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam0, 0, 7, uParam1 );
    SET_BITS_IN_RANGE( uParam0, 8, 15, uParam2 );
    SET_BITS_IN_RANGE( uParam0, 16, 23, uParam3 );
    SET_BITS_IN_RANGE( uParam0, 24, 31, uParam4 );
    return;
}

void sub_2206(int iParam0)
{
    float fVar3;

    fVar3 = 1.85000000;
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (cellphone3Dstructure._fU500)
        {
            fVar3 = 1.55000000;
            sub_2280( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2280( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
            sub_2280( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2280( iParam0 + 108, 0.95000000, 0.89000000 );
        }
        else
        {
            sub_2280( ref iParam0->_fU0[3]._fU0, 1.68000000, 1.68000000 );
            sub_2280( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2280( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2280( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2280( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2280( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2280( iParam0 + 132, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
        default:
        if (cellphone3Dstructure._fU500)
        {
            fVar3 = 1.55000000;
            sub_2280( ref iParam0->_fU0[3]._fU0, fVar3, fVar3 );
            sub_2280( iParam0 + 100, 0.05000000, 0.89000000 );
            sub_2280( iParam0 + 108, 0.95000000, 0.89000000 );
            sub_2280( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        }
        else
        {
            sub_2280( ref iParam0->_fU0[3]._fU0, 1.75000000, 1.75000000 );
            sub_2280( ref iParam0->_fU0[0]._fU0, 1.75000000, 1.75000000 );
            sub_2280( iParam0 + 100, 0.05000000, 0.87500000 );
            sub_2280( iParam0 + 108, 0.95000000, 0.87500000 );
        }
        sub_2280( ref iParam0->_fU0[0]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[1]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[2]._fU0, fVar3, fVar3 );
        iParam0->_fU116 = 1678728908;
        sub_2280( iParam0 + 120, fVar3, fVar3 );
        iParam0->_fU128 = 1678728908;
        sub_2280( iParam0 + 132, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[4]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[5]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[6]._fU0, fVar3, fVar3 );
        sub_2280( ref iParam0->_fU0[7]._fU0, fVar3, fVar3 );
        break;
    }
    return;
}

void sub_2280(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = uParam1;
    iParam0->_fU4 = uParam2;
    return;
}

void sub_3046()
{
    sub_3083( "\n == Mobile Phone Created" );
    GET_MOBILE_PHONE_RENDER_ID( ref cellphone3Dstructure._fU44 );
    while (cellphone3Dstructure._fU44 == -1)
    {
        WAIT( 0 );
        GET_MOBILE_PHONE_RENDER_ID( ref cellphone3Dstructure._fU44 );
        sub_3083( "\n == Getting Render Target" );
    }
    sub_3083( "\n == Mobile Phone Loaded" );
    cellphone3Dstructure._fU8._fU24 = 324.00000000;
    return;
}

void sub_3083(unknown uParam0)
{
    return;
}

void sub_3247()
{
    int I;

    g_U523._fU124 = 255;
    for ( I = 0; I <= 4; I++ )
    {
        sub_3283( I, 0 );
    }
    return;
}

void sub_3283(int iParam0, boolean bParam1)
{
    unknown uVar4;
    unknown uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar4 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar5 );
    switch (iParam0 / 2)
    {
        case 0:
        fVar6 = 0.10000000 + (uVar4 * 0.20000000);
        fVar8 = 0.20000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01400000 + (uVar5 * 0.00050000);
        break;
        case 1:
        fVar6 = 0.20000000 + (uVar4 * 0.15000000);
        fVar8 = 0.50000000 + (uVar5 * 0.05000000);
        fVar9 = -0.01100000 + (uVar5 * 0.00050000);
        break;
        case 2:
        fVar6 = 0.40000000 + (uVar4 * 0.05000000);
        fVar8 = 0.90000000 + (uVar5 * 0.05000000);
        fVar9 = -0.00800000 + (uVar5 * 0.00050000);
        break;
    }
    if (bParam1)
    {
        fVar7 = 1.00000000 + (fVar8 * 0.50000000);
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.20000000, 0.81000000, ref fVar7 );
    }
    sub_3586( iParam0, fVar6, fVar7, fVar8, fVar8, fVar9 );
    return;
}

void sub_3586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_2280( ref g_U523._fU20[uParam0]._fU0, uParam1, uParam2 );
    sub_2280( ref g_U523._fU20[uParam0]._fU8, uParam3, uParam4 );
    g_U523._fU20[uParam0]._fU16 = uParam5;
    return;
}

void sub_3706(unknown uParam0)
{
    l_U958 = 1;
    cellphone3Dstructure._fU0 = uParam0;
    return;
}

void sub_3771()
{
    int Result;
    unknown uVar3;
    int iVar4;

    iVar4 = -1;
    for ( Result = g_U569 - 1; Result >= 0; Result += -1 )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            return Result;
        }
    }
    return iVar4;
}

void sub_3939(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3972()
{
    // bVar2 is possibly a check for if the player is in water?
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerIdCurrentPlayerId() )))
    {
        sub_3083( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }

    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3083( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }

    if (cellphone3Dstructure.overrideCellphoneChecks)
    {
        sub_3083( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }

    if ((cellphone3Dstructure.hideCellphone) || (cellphone3Dstructure.disableCellphone))
    {
        sub_3083( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }

    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerIdCurrentPlayerId() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3083( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;

                default:
                if (NOT (IS_CHAR_IN_WATER( CurrentPlayerChar() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3083( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_3083( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( CurrentPlayerIdCurrentPlayerId() )))
    {
        sub_3083( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

// sub_3984
void CurrentPlayerIdCurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

// sub_4408
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4880(int iParam0)
{
    if (iParam0->_fU0 < 5)
    {
        return 1;
    }
    return 0;
}

int sub_4914()
{
    if ((cellphone3Dstructure._fU0 == 1001) || (cellphone3Dstructure._fU0 == 1010))
    {
        return 1;
    }
    return 0;
}

// iParam0 = spCellphoneCallingScript
int sub_5052(int spCellphoneCallingScript)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (spCellphoneCallingScript != g_U555)
    {
        sub_5077( ref uVar3, spCellphoneCallingScript );
        REQUEST_SCRIPT( ref uVar3 );
        if (NOT (HAS_SCRIPT_LOADED( ref uVar3 )))
        {
            REQUEST_SCRIPT( ref uVar3 );
        }
        else
        {
            g_U555 = spCellphoneCallingScript;
            g_U556[g_U555] = START_NEW_SCRIPT( ref uVar3, 16888 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref uVar3 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

// Cell phone options such for Singleplayer and Multiplayer.
void sub_5077(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        StrCopy( (uParam0^), "SPcellphoneMain", 32 );
        break;
        case 1:
        StrCopy( (uParam0^), "SPcellphoneCalling", 32 );
        break;
        case 2:
        StrCopy( (uParam0^), "SPcellphoneNetwork", 32 );
        break;
        case 3:
        StrCopy( (uParam0^), "SPcellphoneTutorial", 32 );
        break;
        case 4:
        StrCopy( (uParam0^), "MPcellphoneMain", 32 );
        break;
        case 5:
        StrCopy( (uParam0^), "MPcellphoneCalling", 32 );
        break;
        case 6:
        StrCopy( (uParam0^), "MPcellphoneNetwork", 32 );
        break;
        case 7:
        StrCopy( (uParam0^), "MPcellphoneParty", 32 );
        break;
    }
    return;
}

void sub_5509()
{
    char[16] cVar2;
    char[16] cVar6;
    float fVar10;

    SET_TEXT_RENDER_ID( cellphone3Dstructure._fU44 );
    switch (cellphone3Dstructure._fU0)
    {
        case 1017:
        case 1018:
        case 1019:
        l_U1093 = GET_HOURS_OF_DAY();
        if (l_U1094 != l_U1093)
        {
            l_U1038 = l_U226[l_U1._fU16[l_U1._fU44]]._fU0;
            cellphone3Dstructure._fU92 = 1;
            l_U1094 = l_U1093;
        }
        break;
        case 1013:
        if (l_U1108 != g_U10978)
        {
            l_U1038 = l_U226[l_U1._fU16[l_U1._fU44]]._fU0;
            cellphone3Dstructure._fU92 = 1;
        }
        break;
    }
    if (sub_5724( ref getCurrentLanguage ))
    {
        sub_5784( ref l_U1, ref l_U39, -1 );
        l_U985._fU116 = 1678728908;
        l_U985._fU128 = 1678728908;
        if (cellphone3Dstructure._fU0 == 1012)
        {
            cellphone3Dstructure._fU92 = 1;
            l_U1038 = l_U1._fU60;
        }
    }
    if ((cellphone3Dstructure._fU92) || (l_U958))
    {
        sub_8234();
    }
    fVar10 = 0.80000000;
    switch (cellphone3Dstructure._fU0)
    {
        case 1002:
        sub_24251( 1, l_U972, 1, 1 );
        switch (cellphone3Dstructure._fU404)
        {
            case 1015:
            // Read
            StrCopy( ref cVar6, "CP_NAV_READ", 16 );
            break;

            default:
            // Menu
            StrCopy( ref cVar6, "CP_NAV_MENU", 16 );
            break;
        }

        if (l_U1100)
        {
            sub_24323( 0, g_U481._fU0[15], 0.15000000, 0.80000000, 0.20000000, 0.10000000 );
            if (l_U1101)
            {
                sub_24323( 0, g_U481._fU0[16], 0.35000000, 0.80000000, 0.10000000, 0.10000000 );
            }
        }

        else if (l_U1101)
        {
            sub_24323( 0, g_U481._fU0[16], 0.10000000, 0.80000000, 0.10000000, 0.10000000 );
        }

        if (cellphone3Dstructure._fU572)
        {
            sub_24323( 0, g_U481._fU0[17], 0.84500000, 0.25000000, 0.45000000, 0.20000000 );
        }

        if (cellphone3Dstructure._fU540)
        {
            sub_16367( 0, 0, ref l_U985._fU0[4], "CP_SLEEPMODE", 0.50000000, 0.30000000, 0.05000000, 0.95000000, 2, 0, 0, 0, 0, 1 );
        }

        sub_26759( ref l_U985, "CP_NAV_EXIT", ref cVar6, ref l_U972 );
        break;
        case 1003:
        sub_24251( 1, l_U972, 1, 0 );

        if (cellphone3Dstructure._fU40 == 2)
        {
            sub_25286( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U972._fU8 );
        }

        if (l_U1090 != 0)
        {
            sub_16367( 0, 5, ref l_U985._fU0[0], ref cellphone3Dstructure._fU128, 0.90000000, 0.70000000, 0.10000000, 0.90000000, 1, 0, 0, 0, 0, 1 );
        }

        sub_26759( ref l_U985, "BLANK", "BLANK", ref l_U972 );
        if (cellphone3Dstructure._fU52 == 1)
        {
            sub_25556( 0 );
        }

        break;
        case 1014: if (l_U1039)
        {
            sub_24251( 1, l_U972, 1, 0 );
            sub_27983( ref l_U985._fU0[0], ref l_U972, ref l_U960, ref l_U1062, l_U1042, ref l_U1043, ref l_U1044, l_U1046 );
            sub_26759( ref l_U985, "CP_NAV_BACK", "BLANK", ref l_U972 );
            sub_29096( ref l_U1, ref l_U972, l_U1._fU60 );
            break;
        }
        case 1011:
        case 1012:
        case 1013:
        case 1016:
        case 1017:
        case 1018:
        case 1026:
        case 1027:
        case 1028:
        case 1029:
        case 1035:
        case 1048:
        sub_24251( 1, l_U972, 1, 0 );
        sub_29549( ref l_U1, ref l_U39, ref l_U985, ref l_U972, 0 );
        StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
        StrCopy( ref cVar6, "BLANK", 16 );
        switch (cellphone3Dstructure._fU0)
        {
            case 1048: StrCopy( ref cVar2, "CP_NAV_EXIT", 16 );
            case 1011:
            case 1016:
            case 1035:
            StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            break;
            case 1026:
            switch (l_U1._fU60)
            {
                case 0:
                case 1:
                StrCopy( ref cVar6, "CP_CHANGE", 16 );
                break;
                default:
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
                break;
            }
            break;
            case 1017:
            sub_32139();
            if (l_U39[l_U1._fU44]._fU72)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
            case 1018:
            sub_32139();
            if (l_U39[l_U1._fU44]._fU72)
            {
                StrCopy( ref cVar6, "CP_NAV_READ", 16 );
            }
            break;
            case 1012:
            if ((l_U39[l_U1._fU44]._fU72) || (cellphone3Dstructure._fU68 == l_U1._fU60))
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            else
            {
                StrCopy( ref cVar6, "CP_NAV_CALL", 16 );
            }
            break;
            case 1013:
            StrCopy( ref cVar6, "CP_NAV_CALL", 16 );
            break;
            case 1014:
            StrCopy( ref cVar6, "CP_NAV_READ", 16 );
            sub_32494();
            break;
            case 1027:
            if (cellphone3Dstructure._fU112 != l_U1._fU60)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
            case 1028:
            if (cellphone3Dstructure._fU108 != l_U1._fU60)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
            case 1029:
            if (cellphone3Dstructure._fU396 != l_U1._fU60)
            {
                StrCopy( ref cVar6, "CP_NAV_SELECT", 16 );
            }
            break;
        }
        sub_26759( ref l_U985, ref cVar2, ref cVar6, ref l_U972 );
        break;

        case 1015:
        case 1019:
        case 1038:
        case 1039:
        case 1040:
        case 1043:
        case 1032:
        case 1033:
        case 1030:
        case 1045:
        case 1046:
        StrCopy( ref cVar6, "BLANK", 16 );
        StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
        sub_24251( 1, l_U972, 1, 0 );

        // I think this might be a part of the phone handling that can change the settings and stuff on the phone.
        switch (cellphone3Dstructure._fU0)
        {
            case 1015:
            if (l_U1040)
            {
                StrCopy( ref cVar6, "CP_OPT_REPLAY", 16 );
            }
            else if (l_U1061)
            {
                StrCopy( ref cVar6, "CP_OPT_OPTIONS", 16 );
            }
            break;
            case 1038:
            case 1039:
            case 1040:
            StrCopy( ref cVar6, "BLANK", 16 );
            StrCopy( ref cVar2, "CP_NAV_BACK", 16 );
            break;
            case 1043:
            if (cellphone3Dstructure._fU40 == 0)
            {
                StrCopy( ref cVar2, "CP_NAV_EXIT", 16 );
            }
            break;
            case 1032:
            StrCopy( ref cVar6, "CP_NAV_YES", 16 );
            StrCopy( ref cVar2, "CP_NAV_NO", 16 );
            break;
            case 1030:
            StrCopy( ref cVar6, "CP_NAV_YES", 16 );
            StrCopy( ref cVar2, "CP_NAV_NO", 16 );
            break;
        }
        sub_27983( ref l_U985._fU0[0], ref l_U972, ref l_U960, ref l_U1062, l_U1042, ref l_U1043, ref l_U1044, l_U1046 );
        sub_26759( ref l_U985, ref cVar2, ref cVar6, ref l_U972 );
        sub_29096( ref l_U1, ref l_U972, l_U1._fU60 );
        break;

        case 1020:
        sub_24251( 1, l_U972, 1, 0 );
        if (l_U1103)
        {
            switch (l_U1104)
            {
                case 0:
                l_U1107 += l_U1105;
                if (l_U1107 >= (0.62500000 + l_U1106))
                {
                    l_U1107 = 0.62500000 + l_U1106;
                    l_U1106 *= 0.75000000;
                    l_U1105 *= 0.75000000;
                    l_U1104++;
                }
                break;

                case 1:
                l_U1107 -= l_U1105;
                if (l_U1107 <= (0.62500000 - l_U1106))
                {
                    l_U1107 = 0.62500000 - l_U1106;
                    l_U1106 *= 0.75000000;
                    l_U1105 *= 0.75000000;
                    l_U1104++;
                }
                break;

                case 2:
                l_U1107 += l_U1105;
                if (l_U1107 >= (0.62500000 + l_U1106))
                {
                    l_U1107 = 0.62500000 + l_U1106;
                    l_U1106 *= 0.75000000;
                    l_U1105 *= 0.75000000;
                    l_U1104++;
                }
                break;

                case 3:
                l_U1107 -= l_U1105;
                if (l_U1107 <= 0.62500000)
                {
                    l_U1107 = 0.62500000;
                    l_U1103 = 0;
                }
                break;

            }
            CELL_CAM_SET_CENTRE_POS( l_U1107, 0.40000000 );
        }

        else if (cellphone3Dstructure._fU516 != 0.00000000)
        {
            l_U1103 = 1;
            l_U1104 = 0;
            l_U1106 = (0.60000000 - l_U1102) * 0.10000000;
            sub_3083( "\n SHAKE AMOUNT IS " );
            sub_33788( l_U1106 );
            l_U1105 = l_U1106 * cellphone3Dstructure._fU516;
            l_U1107 = 0.62500000;
            cellphone3Dstructure._fU516 = 0.00000000;
        }

        if (l_U1075)
        {
            DRAW_SPRITE_PHOTO( 0.48500000, 0.49000000 * 0.65000000, 0.97000000, 0.67000000 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
        }
        else
        {
            l_U1075 = 1;
        }

        sub_29096( ref l_U1, ref l_U972, l_U1._fU60 );
        sub_26759( ref l_U985, "CP_NAV_BACK", "CAMERA_CAPTURE", ref l_U972 );
        break;

        case 1021:
        sub_24251( 1, l_U972, 1, 0 );

        switch (l_U1077)
        {
            case 0:
            l_U1076 += 0.08000000;
            if (l_U1076 >= 0.33500000)
            {
                l_U1076 = 0.50000000;
                l_U1077++;
                CELL_CAM_ACTIVATE( 0, 1 );
            }
            break;

            case 1:
            l_U1076 -= 0.08000000;
            if (l_U1076 <= 0.00000000)
            {
                l_U1076 = 0.00000000;
                sub_3706( 1022 );
            }
            break;
        }
        DRAW_SPRITE_PHOTO( 0.48500000, 0.49000000 * 0.65000000, 0.97000000, 0.67000000 * 0.65000000, 0.00000000, 255, 255, 255, 255 );

        sub_24481( 0, 0.48500000, 0.15500000 + (l_U1076 * 0.50000000), 0.97000000, l_U1076, 0, 0, 0, 255 );
        sub_24481( 0, 0.48500000, 0.82000000 - (l_U1076 * 0.50000000), 0.97000000, l_U1076, 0, 0, 0, 255 );

        sub_29096( ref l_U1, ref l_U972, l_U1._fU60 );
        sub_6958( "\n the scroll be at ", l_U1._fU60 );
        sub_26759( ref l_U985, "BLANK", "BLANK", ref l_U972 );
        break;

        case 1023:
        sub_24251( 1, l_U972, 1, 0 );
        DRAW_SPRITE_PHOTO( 0.48500000, 0.49000000 * 0.65000000, 0.97000000, 0.67000000 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
        sub_29096( ref l_U1, ref l_U972, -1 );

        if (cellphone3Dstructure._fU88)
        {
            sub_26759( ref l_U985, "CP_NAV_BACK", "CP_NAV_SEND", ref l_U972 );
        }
        else
        {
            sub_26759( ref l_U985, "CP_NAV_BACK", "BLANK", ref l_U972 );
        }
        break;

        case 1024:
        sub_24251( 1, l_U972, 1, 0 );

        if (l_U955 == 0.00000000)
        {
            sub_25286( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, l_U972._fU8 );
        }
        if (GET_CURRENT_LANGUAGE() == 6)
        {
            fVar10 = 0.90000000;
        }
        else
        {
            fVar10 = 0.80000000;
        }

        if (l_U1078 < 4)
        {
            sub_16367( 0, 0, ref l_U985._fU0[0], "CP_INFO_SENDING", 0.10000000, 0.20000000, 0.10000000, fVar10, 0, 0, 0, 0, 0, 1 );
            sub_16367( 0, 0, ref l_U985._fU0[0], ref l_U1096, 0.10000000, 0.70000000, 0.10000000, fVar10, 0, 0, 0, 0, 0, 1 );
        }
        else
        {
            sub_16367( 0, 0, ref l_U985._fU0[0], "CP_INFO_SENT", 0.10000000, 0.20000000, 0.10000000, fVar10, 0, 0, 0, 0, 0, 1 );
        }

        switch (l_U1078)
        {
            case 0:
            sub_24323( 0, g_U481._fU0[19], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            sub_24323( 0, g_U481._fU0[20], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            if (l_U957)
            {
                l_U1079._fU0 -= l_U1081._fU0;
                l_U1079._fU4 -= l_U1081._fU4;
                l_U1083._fU0 -= l_U1085._fU0;
                l_U1083._fU4 -= l_U1085._fU4;
            }
            DRAW_SPRITE_PHOTO( l_U1079._fU0, (0.15500000 * 0.65000000) + l_U1079._fU4, l_U1083._fU0, l_U1083._fU4, 0.00000000, 255, 255, 255, 255 );
            if (l_U1083._fU0 <= 0.35000000)
            {
                l_U1078++;
            }
            break;

            case 1:
            case 2:
            case 3:
            case 4:
            sub_24323( 0, g_U481._fU0[20], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            if (l_U957)
            {
                switch (l_U1078)
                {
                    case 1:
                    l_U1079._fU0 += l_U1085._fU0;
                    if (l_U1079._fU0 >= 0.50000000)
                    {
                        l_U1079._fU0 = 0.50000000;
                        l_U1078++;
                    }
                    break;
                    case 2:
                    l_U1079._fU4 += l_U1085._fU4;
                    if (l_U1079._fU4 >= (0.41500000 * 0.65000000))
                    {
                        l_U1078++;
                    }
                    break;
                    case 3:
                    l_U1087 -= 25;
                    if (l_U1087 <= 0)
                    {
                        l_U1087 = 0;
                        l_U1078++;
                        SETTIMERA( 0 );
                    }
                    break;
                    case 4:
                    if (TIMERA() >= 500)
                    {
                        sub_3706( 1001 );
                        l_U1078++;
                    }
                    break;
                }
            }
            DRAW_SPRITE_PHOTO( l_U1079._fU0, (0.15500000 * 0.65000000) + l_U1079._fU4, l_U1083._fU0, l_U1083._fU4, 0.00000000, 255, 255, 255, l_U1087 );
            sub_24323( 0, g_U481._fU0[19], 0.50000000, 0.49500000, 0.50000000, 0.50000000 );
            if (l_U1078 == 5)
            {
                DisplayHudAndActivatePhoneCamera();
            }
            break;
        }
        sub_26759( ref l_U985, "BLANK", "BLANK", ref l_U972 );
        break;
    }
    sub_35652( ref l_U985._fU0[3], ref l_U972 );
    return;
}

int sub_5724(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_5784(int iParam0, unknown uParam1, int iParam2)
{
    int I;

    int iVar6;
    int iVar7;

    // Looking into sub_6228.
    // I think this is xScale
    float fVar8;
    // I think this one is yScale
    float fVar9;

    float fVar10;
    float fVar11;
    unknown uVar12;
    char[32] cVar13;

    iVar6 = 0;
    iVar7 = (uParam1^) - 1;

    //
    if (iParam2 != -1)
    {
        iVar6 = iParam2;
        iVar7 = iParam2;
    }

    if ((cellphone3Dstructure._fU500) AND (cellphone3Dstructure._fU496))
    {
        fVar8 = 1.55000000;
        fVar9 = 1.40000000;
    }
    else
    {
        fVar8 = 1.90000000;
        fVar9 = 1.80000000;
    }
    fVar10 = (ref iParam0->_fU84->_fU4) - (ref iParam0->_fU84->_fU0);
    fVar11 = (ref iParam0->_fU92->_fU4) - (ref iParam0->_fU92->_fU0);

    for ( I = iVar6; I <= iVar7; I++ )
    {
        sub_5945( ref (uParam1^)[I] );

        if ((uParam1^)[I]._fU0)
        {
            if ((sub_6228( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar8, fVar8 )) > fVar10)
            {
                if ((sub_6228( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, fVar9, fVar9 )) > fVar10)
                {
                    (uParam1^)[I]._fU92 = 1;
                    if ((uParam1^)[I]._fU40)
                    {
                        (uParam1^)[I]._fU96 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU8 );
                    }
                    else
                    {
                        (uParam1^)[I]._fU96 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
                    }

                    (uParam1^)[I]._fU100 = 0;
                    (uParam1^)[I]._fU104 = 4;

                    if ((uParam1^)[I]._fU40)
                    {
                        StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU8, 0, (uParam1^)[I]._fU104 ), 32 );
                        while ((sub_6228( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU8, 0, (uParam1^)[I]._fU104 ), 32 );
                            sub_6729( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6804( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48, 0, (uParam1^)[I]._fU104, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU104++;
                            sub_6958( "\n Cutdown label end = ", (uParam1^)[I]._fU104 );
                        }
                    }

                    (uParam1^)[I]._fU104--;

                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU124 = (uParam1^)[I]._fU100;
                        iParam0->_fU128 = (uParam1^)[I]._fU104;
                        iParam0->_fU132 = 1;
                    }

                    sub_6729( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU8 );
                    sub_6958( " starting at ", (uParam1^)[I]._fU100 );
                    sub_6958( " and ending at ", (uParam1^)[I]._fU104 );
                    sub_3083( "." );
                }
                else
                {
                    sub_6729( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU8 );
                    (uParam1^)[I]._fU76._fU0 = fVar9;
                    (uParam1^)[I]._fU76._fU4 = fVar9;
                }
            }

            if ((sub_6228( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar8, fVar8 )) > fVar11)
            {
                if ((sub_6228( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU68, 0, 0, fVar9, fVar9 )) > fVar11)
                {
                    (uParam1^)[I]._fU108 = 1;
                    if ((uParam1^)[I]._fU68)
                    {
                        (uParam1^)[I]._fU112 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU52 );
                    }
                    else
                    {
                        (uParam1^)[I]._fU112 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref (uParam1^)[I]._fU52 );
                    }

                    (uParam1^)[I]._fU116 = 0;
                    (uParam1^)[I]._fU120 = 4;

                    if ((uParam1^)[I]._fU68)
                    {
                        StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU52, 0, (uParam1^)[I]._fU120 ), 32 );
                        while ((sub_6228( ref cVar13, 1, 0, 0, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            StrCopy( ref cVar13, GET_STRING_FROM_STRING( ref (uParam1^)[I]._fU52, 0, (uParam1^)[I]._fU120 ), 32 );
                            sub_6729( "\n The following is the cutdown label ", ref cVar13 );
                        }
                    }
                    else
                    {
                        while ((sub_6804( ref (uParam1^)[I]._fU52, 0, 0, 0, (uParam1^)[I]._fU120, fVar8, fVar8 )) < (fVar10 * 0.90000000))
                        {
                            (uParam1^)[I]._fU120++;
                            sub_6958( "\n Cutdown label end = ", (uParam1^)[I]._fU120 );
                        }
                    }

                    (uParam1^)[I]._fU120--;

                    if (I == iParam0->_fU44)
                    {
                        iParam0->_fU140 = (uParam1^)[I]._fU116;
                        iParam0->_fU144 = (uParam1^)[I]._fU120;
                        iParam0->_fU148 = 1;
                    }
                    sub_6729( "\n The following string is going to scroll ", ref (uParam1^)[I]._fU52 );
                    sub_6958( " starting at ", (uParam1^)[I]._fU116 );
                    sub_6958( " and ending at ", (uParam1^)[I]._fU120 );
                    sub_3083( "." );
                }
                else
                {
                    sub_6729( "\n The following string is using the RetryScale ", ref (uParam1^)[I]._fU52 );
                    (uParam1^)[I]._fU84._fU0 = fVar9;
                    (uParam1^)[I]._fU84._fU4 = fVar9;
                }
            }
        }
    }
    return;
}

void sub_5945(int iParam0)
{
    iParam0->_fU92 = 0;
    iParam0->_fU96 = 0;
    iParam0->_fU100 = 0;
    iParam0->_fU104 = 0;
    iParam0->_fU108 = 0;
    iParam0->_fU112 = 0;
    iParam0->_fU116 = 0;
    iParam0->_fU120 = 0;
    if ((cellphone3Dstructure._fU500) AND (cellphone3Dstructure._fU496))
    {
        ref iParam0->_fU76->_fU0 = 1.55000000;
        ref iParam0->_fU76->_fU4 = 1.55000000;
        ref iParam0->_fU84->_fU0 = 1.55000000;
        ref iParam0->_fU84->_fU4 = 1.55000000;
    }
    else
    {
        ref iParam0->_fU76->_fU0 = 1.90000000;
        ref iParam0->_fU76->_fU4 = 1.90000000;
        ref iParam0->_fU84->_fU0 = 1.90000000;
        ref iParam0->_fU84->_fU4 = 1.90000000;
    }
    return;
}

// Set text font to 0, if Japanese version set text font to 2.
// Set text scale from uParam4, to xScale.
// Set text scale from uParam5, to yScale.
// If bParam1 is true, return GET_STRING_WIDTH_WITH_STRING( "STRING", stringToCheck );
// If bParam2 is true, return GET_STRING_WIDTH_WITH_NUMBER( stringToCheck, uParam3 );
// If bParam1 and bParam2 is false, Get the string width for stringToCheck
void sub_6228(char stringToCheck, boolean bParam1, boolean bParam2, unknown uParam3, float xScale, float yScale)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }

    SET_TEXT_SCALE( xScale, yScale * 0.65000000 );

    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", stringToCheck );
    }
    else if (bParam2)
    {
        return GET_STRING_WIDTH_WITH_NUMBER( stringToCheck, uParam3 );
    }
    return GET_STRING_WIDTH( stringToCheck );
}

// Debug line
void sub_6729(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6804(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam5, uParam6 * 0.65000000 );
    return GET_WIDTH_OF_SUBSTRING_GIVEN_TEXT_LABEL( uParam0, uParam1, uParam2, uParam3, uParam4 );
}

void sub_6958(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_8234()
{
    int I;
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    char[16] cVar7;
    char[16] cVar11;
    int iVar15;
    unknown uVar16;

    cellphone3Dstructure._fU528 = 0;
    switch (cellphone3Dstructure._fU0)
    {
        case 1002:
        l_U1088 = 2;
        l_U1089 = 1;
        ReleaseAndMarkTxdAsNotNeeded( ref l_U960 );
        l_U1100 = sub_8621();
        l_U1101 = sub_8937();
        l_U959 = 0;
        break;
        case 1011:
        switch (l_U1038)
        {
            case 1020:
            DisplayHudAndActivatePhoneCamera();
            break;
            default:
        }
        sub_9366( ref l_U1, 1, l_U1038, 0 );

        // CP_OPT_PBOOK = Phonebook
        sub_9450( ref l_U1, ref l_U226, 1012, "CP_OPT_PBOOK", "", 1, 0, 0, 0, 0 );
        
        // CP_OPT_MESSAGES = Messages
        sub_9450( ref l_U1, ref l_U226, 1014, "CP_OPT_MESSAGES", "", 1, 0, 0, 0, 0 );

        // CP_OPT_ORGAN = Organizer
        sub_9450( ref l_U1, ref l_U226, 1017, "CP_OPT_ORGAN", "", 1, 0, 0, 0, 0 );
        
        if (cellphone3Dstructure._fU40 == 2)
        {
            // CP_OPT_CAMERA = Camera
            sub_9450( ref l_U1, ref l_U226, 1020, "CP_OPT_CAMERA", "", 1, 0, 0, 0, 0 );
        }

        // CP_OPT_NETWORK = Multiplayer
        sub_9450( ref l_U1, ref l_U226, 1047, "CP_OPT_NETWORK", "", 1, 0, 0, 0, 0 );
        
        // CP_OPT_OPTIONS = Options
        sub_9450( ref l_U1, ref l_U226, 1026, "CP_OPT_OPTIONS", "", 1, 0, 0, 0, 0 );
        
        if ((cellphone3Dstructure._fU40 != 0) AND (# -NULL-0xc27e40()))
        {
            // CP_OPT_REPMENU = unknown?
            sub_9450( ref l_U1, ref l_U226, 1031, "CP_OPT_REPMENU", "", 1, 0, 0, 0, 0 );
        }

        if (ProtectedGet(cellphone3Dstructure._fU536) != 0)
        {
            // CP_CHEATS = Cheats
            sub_9450( ref l_U1, ref l_U226, 1035, "CP_CHEATS", "", 1, 0, 0, 0, 0 );
        }

        if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
        {
            if ((g_U15654[75]) AND ((NOT IS_MINIGAME_IN_PROGRESS()) AND ((NOT g_U10978) AND (g_U823))))
            {
                // CP_6AXIS = SIXAXIS? Tutorial
                sub_9450( ref l_U1, ref l_U226, 65486, "CP_6AXIS", "", 1, 0, 0, 0, 0 );
            }
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;

        case 1013:
        l_U1108 = g_U10978;

        if (g_U15946[cellphone3Dstructure._fU60]._fU132._fU0)
        {
            sub_9366( ref l_U1, 1, l_U1038, 0 );
            // CP_NAV_CALL = Call
            sub_9450( ref l_U1, ref l_U226, 14, "CP_NAV_CALL", "", 1, 0, 0, 0, 0 );
           
            iVar3 = 14 - 1;

            if (g_U15946[cellphone3Dstructure._fU60]._fU8[0]._fU0[2])
            {
                StrCopy( ref cVar7, "SP_", 16 );
                ConcatString(ref cVar7, ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, 16);
                ConcatString(ref cVar7, "_", 16);
                ConcatString(ref cVar7, 2, 16);
                sub_9450( ref l_U1, ref l_U226, 2, ref cVar7, "", 1, 0, 0, 0, 0 );
            }

            for ( I = 0; I <= iVar3; I++ )
            {
                if (I != 2)
                {
                    if (g_U15946[cellphone3Dstructure._fU60]._fU8[0]._fU0[I])
                    {
                        bVar6 = false;
                        if (I < 3)
                        {
                            StrCopy( ref cVar7, "SP_", 16 );
                            ConcatString(ref cVar7, ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, 16);
                            ConcatString(ref cVar7, "_", 16);
                            ConcatString(ref cVar7, I, 16);
                            bVar6 = true;
                        }
                        else if (g_U15946[cellphone3Dstructure._fU60]._fU8[0]._fU0[2])
                        {
                            if (I == 3)
                            {
                                sub_12247( ref cVar7, "CALL_", ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, I - 3, -1 );
                                if (NOT (DOES_TEXT_LABEL_EXIST( ref cVar7 )))
                                {
                                    sub_12350( ref cVar7, "CALL", I - 3, -1, -1 );
                                }
                                bVar6 = true;
                            }
                        }
                        else if (NOT g_U10978)
                        {
                            sub_12247( ref cVar7, "CALL_", ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, I - 3, -1 );
                            if (NOT (DOES_TEXT_LABEL_EXIST( ref cVar7 )))
                            {
                                sub_12350( ref cVar7, "CALL", I - 3, -1, -1 );
                            }
                            bVar6 = true;
                        }
                        else if ((cellphone3Dstructure._fU68 == cellphone3Dstructure._fU60) AND (I == 3))
                        {
                            sub_12247( ref cVar7, "CALL_EXIT_", ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, -1, -1 );
                            if (NOT (DOES_TEXT_LABEL_EXIST( ref cVar7 )))
                            {
                                // CALL_EXIT_JOB = Exit Job
                                StrCopy( ref cVar7, "CALL_EXIT_JOB", 16 );
                            }
                            bVar6 = true;
                        }

                        if (bVar6)
                        {
                            sub_9450( ref l_U1, ref l_U226, I, ref cVar7, "", 1, 0, 0, 0, 0 );
                        }
                    }
                }
            }
            sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
            break;
        }
        case 1012:
        cellphone3Dstructure._fU0 = 1012;

        sub_12726();
        sub_9366( ref l_U1, 1, l_U1038, 0 );
        sub_15300();
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;

        case 1014:
        if (cellphone3Dstructure._fU520)
        {
            cellphone3Dstructure._fU520 = 0;
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }

        ReleaseAndMarkTxdAsNotNeeded( ref l_U960 );

        iVar3 = sub_15968();
        if (iVar3 == 0)
        {
            l_U1039 = 1;
            StrCopy( ref l_U1062[0], "NO_TXT_MESSAGES", 16 );
            StrCopy( ref l_U1062[1], "", 16 );
            StrCopy( ref l_U1062[2], "", 16 );
            l_U1042 = 0;
            sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        }
        else
        {
            sub_9366( ref l_U1, 2, l_U1038, 0 );
            for ( I = 0; I <= (iVar3 - 1); I++ )
            {
                sub_17304( ref cVar7, "TM_NAME_", sub_8659( 0, g_U569[(iVar3 - 1) - I] ), -1, -1 );
                if ((sub_8659( 1, g_U569[(iVar3 - 1) - I] )) == 0)
                {
                    StrCopy( ref cVar11, "CP_FAKE_REPLAY", 16 );
                }
                else
                {
                    sub_17304( ref cVar11, "TM_", sub_8659( 0, g_U569[(iVar3 - 1) - I] ), sub_8659( 1, g_U569[(iVar3 - 1) - I] ), -1 );
                }
                sub_9450( ref l_U1, ref l_U226, (iVar3 - 1) - I, ref cVar7, ref cVar11, 1, 0, 0, 0, 0 );
            }
            l_U1039 = 0;
            sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 0, 0.15000000 );
        }
        break;
        case 1019: if (cellphone3Dstructure._fU92)
        {
            if (l_U1091 == GET_CURRENT_DAY_OF_WEEK())
            {
                if (l_U1092 < sub_17596())
                {
                    cellphone3Dstructure._fU0 = 1017;
                    l_U1038 = -1;
                    sub_8234();
                    break;
                }
            }
        }
        case 1015:
        if (cellphone3Dstructure._fU520)
        {
            cellphone3Dstructure._fU520 = 0;
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
        l_U1047 = 0;
        l_U1048 = -1;
        StrCopy( ref l_U1062[0], "", 16 );
        StrCopy( ref l_U1062[1], "", 16 );
        l_U1040 = 0;
        l_U1042 = 0;
        l_U1061 = 0;
        switch (cellphone3Dstructure._fU0)
        {
            case 1015:
            iVar5 = sub_8659( 0, g_U569[l_U1041] );
            I = sub_8659( 1, g_U569[l_U1041] );
            if (iVar5 < 57)
            {
                if (g_U15946[iVar5]._fU132._fU0)
                {
                    l_U1047 = 1;
                    l_U1048 = iVar5;
                    l_U1061 = 1;
                    l_U1062[1] = {g_U15946[iVar5]._fU132._fU8};
                    sub_12247( ref l_U1062[0], "TXTN_", ref l_U1062[1], I, -1 );
                    sub_12247( ref l_U1057, "CONT_", ref l_U1062[1], -1, -1 );
                }
            }
            if (DOES_TEXT_LABEL_EXIST( ref l_U1062[0] ))
            {
                l_U1053 = {l_U1062[0]};
                ConcatString(ref l_U1062[0], "S", 16);
                StrCopy( ref l_U1049, GET_STRING_FROM_TEXT_FILE( ref l_U1062[0] ), 16 );
                l_U1061 = 1;
            }
            else
            {
                StrCopy( ref l_U1053, "", 16 );
            }
            if (((sub_8659( 4, g_U569[l_U1041] )) == 0) AND ((I == 404) AND (iVar5 == 82)))
            {
                sub_18129( 1 );
            }
            sub_18645( ref g_U569[l_U1041] );
            if (NOT sub_8621())
            {
                SET_MESSAGES_WAITING( 0 );
            }
            sub_17304( ref l_U1062[0], "TM_", iVar5, I, -1 );
            if (I == 0)
            {
                l_U1040 = 1;
                StrCopy( ref l_U1062[0], "CP_REAL_REPLAY", 16 );
                l_U1062[1] = {g_U9921};
            }
            else
            {
                I = sub_8659( 2, g_U569[l_U1041] );
                if (I != 16383)
                {
                    sub_17304( ref l_U1062[1], "TM_", iVar5, I, -1 );
                }
                I = sub_8659( 3, g_U569[l_U1041] );
                if (I != 16383)
                {
                    sub_17304( ref l_U1062[2], "TM_", iVar5, I, -1 );
                }
                I = sub_8659( 6, g_U569[l_U1041] );
                if (I != -1)
                {
                    l_U1042 = 1;
                    sub_19216( ref l_U960, I );
                }
                if (g_U569[l_U1041]._fU20)
                {
                    l_U1061 = 1;
                }
            }
            break;
            case 1019:
            sub_19366( ref l_U1062[0], l_U1091, l_U1092 );
            break;
        }
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
        case 1018:
        if (cellphone3Dstructure._fU92)
        {
            if (l_U1091 == GET_CURRENT_DAY_OF_WEEK())
            {
                if (l_U1093 == 0)
                {
                    cellphone3Dstructure._fU0 = 1017;
                    l_U1038 = -1;
                    sub_8234();
                    break;
                }
            }
        }
        if (l_U1091 == GET_CURRENT_DAY_OF_WEEK())
        {
            iVar4 = sub_17596();
        }
        else
        {
            iVar4 = 0;
        }
        if (l_U1038 == -1)
        {
            l_U1038 = sub_19751( l_U1091, iVar4 );
        }
        sub_9366( ref l_U1, 2, l_U1038, 0 );
        for ( I = iVar4; I <= 3; I++ )
        {
            sub_17304( ref cVar7, "CP_ORGAN_", I, -1, -1 );
            sub_19366( ref cVar11, l_U1091, I );
            sub_9450( ref l_U1, ref l_U226, I, ref cVar7, ref cVar11, sub_19900( l_U1091, I ), 0, 0, 0, 0 );
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0.15000000 );
        break;
        case 1017:
        l_U1093 = GET_HOURS_OF_DAY();
        l_U1094 = l_U1093;
        sub_9366( ref l_U1, 1, l_U1038, 0 );
        iVar15 = GET_CURRENT_DAY_OF_WEEK();
        sub_9450( ref l_U1, ref l_U226, iVar15, "DOW_TODAY", "", sub_20063( iVar15, sub_17596() ), 0, 0, 0, 0 );
        if (iVar15 != (7 - 1))
        {
            for ( I = iVar15 + 1; I <= (7 - 1); I++ )
            {
                sub_17304( ref cVar7, "DOW_DAY_", I, -1, -1 );
                sub_9450( ref l_U1, ref l_U226, I, ref cVar7, "", sub_20063( I, 0 ), 0, 0, 0, 0 );
            }
        }
        if (iVar15 != 0)
        {
            for ( I = 0; I <= (iVar15 - 1); I++ )
            {
                sub_17304( ref cVar7, "DOW_DAY_", I, -1, -1 );
                sub_9450( ref l_U1, ref l_U226, I, ref cVar7, "", sub_20063( I, 0 ), 0, 0, 0, 0 );
            }
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0.15000000 );
        break;
        case 1020:
        cellphone3Dstructure._fU88 = 0;
        DISPLAY_HUD( 0 );
        CELL_CAM_SET_CENTRE_POS( 0.62500000, 0.40000000 );
        CELL_CAM_SET_ZOOM( 0.37500000 );
        l_U1102 = 0.37500000;
        CELL_CAM_ACTIVATE( 1, 1 );
        l_U1075 = 0;
        l_U1._fU52 = 1;
        l_U1._fU60 = 25;
        l_U1._fU56 = 0.72000000 / 50.00000000;
        l_U1103 = 0;
        l_U1104 = 0;
        l_U1105 = 0.00000000;
        l_U1106 = 0.00000000;
        cellphone3Dstructure._fU516 = 0.00000000;
        break;
        case 1021:
        l_U1077 = 0;
        l_U1076 = 0.00000000;
        break;
        case 1023: break;
        case 1024:
        StrCopy( ref l_U1096, "CONT_", 16 );
        ConcatString(ref l_U1096, ref g_U15946[cellphone3Dstructure._fU60]._fU132._fU8, 16);
        l_U1078 = 0;
        l_U1087 = 255;
        sub_2280( ref l_U1079, 0.48500000, 0.33500000 * 0.65000000 );
        sub_2280( ref l_U1083, 0.97000000, 0.67000000 * 0.65000000 );
        sub_2280( ref l_U1081, l_U1079._fU0 / 25.00000000, l_U1079._fU4 / 25.00000000 );
        sub_2280( ref l_U1085, l_U1083._fU0 / 25.00000000, l_U1083._fU4 / 25.00000000 );
        break;
        case 1016:
        sub_9366( ref l_U1, 2, l_U1038, 0 );
        if (NOT (COMPARE_STRING( ref l_U1053, "" )))
        {
            sub_9450( ref l_U1, ref l_U226, 1, "CP_NAV_CALL", ref l_U1053, 1, 0, 0, 0, 0 );
        }
        if (l_U1047)
        {
            sub_9450( ref l_U1, ref l_U226, 0, "CP_NAV_CALL", ref l_U1057, 1, 0, 0, 0, 0 );
        }
        if (g_U569[l_U1041]._fU20)
        {
            sub_9450( ref l_U1, ref l_U226, 2, "CP_OPT_DELETE", "CP_OPT_MESSAGE", 1, 0, 0, 0, 0 );
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;
        case 1026:
        sub_9366( ref l_U1, 2, l_U1038, 0 );
        sub_17304( ref cVar7, "CP_RINGTYPE_", cellphone3Dstructure._fU112, -1, -1 );
        sub_9450( ref l_U1, ref l_U226, 1027, "CP_OPT_RINGTYPE", ref cVar7, 1, 0, 0, 0, 0 );
        if (cellphone3Dstructure._fU108 == 60)
        {
            StrCopy( ref cVar7, "CP_RINGTONE_38", 16 );
        }
        else if (cellphone3Dstructure._fU108 == 61)
        {
            StrCopy( ref cVar7, "CP_RINGTONE_39", 16 );
        }
        else
        {
            sub_17304( ref cVar7, "CP_RINGTONE_", cellphone3Dstructure._fU108, -1, -1 );
        }
        sub_9450( ref l_U1, ref l_U226, 1028, "CP_OPT_RINGTONE", ref cVar7, 1, 0, 0, 0, 0 );
        if (cellphone3Dstructure._fU40 == 2)
        {
            sub_17304( ref cVar7, "CP_ANIMTM_", cellphone3Dstructure._fU396, -1, -1 );
            sub_9450( ref l_U1, ref l_U226, 1029, "CP_OPT_THEME", ref cVar7, 1, 0, 0, 0, 0 );
        }
        if (cellphone3Dstructure._fU496)
        {
            if (cellphone3Dstructure._fU500)
            {
                StrCopy( ref cVar7, "CP_TEXT_SMALL", 16 );
            }
            else
            {
                StrCopy( ref cVar7, "CP_TEXT_LARGE", 16 );
            }
            sub_9450( ref l_U1, ref l_U226, 0, "CP_TEXT_SIZE", ref cVar7, 1, 0, 0, 0, 0 );
        }
        if (cellphone3Dstructure._fU524)
        {
            StrCopy( ref cVar7, "CP_NAV_YES", 16 );
        }
        else
        {
            StrCopy( ref cVar7, "CP_NAV_NO", 16 );
        }
        sub_9450( ref l_U1, ref l_U226, 1, "CP_KEYPAD_TONE", ref cVar7, 1, 0, 0, 0, 0 );
        if (NOT g_U10978)
        {
            if (cellphone3Dstructure._fU540)
            {
                sub_9450( ref l_U1, ref l_U226, 1030, "CP_SLEEP_ON1", "CP_SLEEP_OFF", 1, 0, 0, 0, 0 );
            }
            else
            {
                sub_9450( ref l_U1, ref l_U226, 1030, "CP_SLEEP_ON1", "CP_SLEEP_ON2", 1, 0, 0, 0, 0 );
            }
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;
        case 1027:
        l_U1038 = cellphone3Dstructure._fU112;
        sub_9366( ref l_U1, 1, l_U1038, 0 );
        sub_9450( ref l_U1, ref l_U226, 4, "CP_RINGTYPE_4", "", 1, 0, 0, 0, 0 );
        sub_9450( ref l_U1, ref l_U226, 0, "CP_RINGTYPE_0", "", 1, 0, 0, 0, 0 );
        sub_9450( ref l_U1, ref l_U226, 3, "CP_RINGTYPE_3", "", 1, 0, 0, 0, 0 );
        sub_9450( ref l_U1, ref l_U226, 1, "CP_RINGTYPE_1", "", 1, 0, 0, 0, 0 );
        sub_9450( ref l_U1, ref l_U226, 2, "CP_RINGTYPE_2", "", 1, 0, 0, 0, 0 );
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;
        case 1028:
        l_U1095 = 0;
        SETTIMERA( 0 );
        l_U1038 = cellphone3Dstructure._fU108;
        sub_9366( ref l_U1, 1, l_U1038, 0 );
        for ( I = 0; I <= 10; I++ )
        {
            sub_17304( ref cVar7, "CP_RINGTONE_", I, -1, -1 );
            sub_9450( ref l_U1, ref l_U226, I, ref cVar7, "", 1, 0, 0, 0, 0 );
        }
        if (cellphone3Dstructure._fU40 == 2)
        {
            for ( I = 11; I <= 37; I++ )
            {
                if ((I != 36) AND (IS_BIT_SET( cellphone3Dstructure._fU412, I - 11 )))
                {
                    sub_17304( ref cVar7, "CP_RINGTONE_", I, -1, -1 );
                    sub_9450( ref l_U1, ref l_U226, I, ref cVar7, "", 1, 0, 0, 0, 0 );
                }
            }
        }
        else if (IS_BIT_SET( cellphone3Dstructure._fU412, 25 ))
        {
            sub_17304( ref cVar7, "CP_RINGTONE_", 36, -1, -1 );
            sub_9450( ref l_U1, ref l_U226, 36, ref cVar7, "", 1, 0, 0, 0, 0 );
        }
        if (IS_BIT_SET( cellphone3Dstructure._fU412, 27 ))
        {
            sub_9450( ref l_U1, ref l_U226, 60, "CP_RINGTONE_38", "", 1, 0, 0, 0, 0 );
        }
        if (IS_BIT_SET( cellphone3Dstructure._fU412, 28 ))
        {
            sub_9450( ref l_U1, ref l_U226, 61, "CP_RINGTONE_39", "", 1, 0, 0, 0, 0 );
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;
        case 1029:
        l_U1038 = cellphone3Dstructure._fU396;
        sub_9366( ref l_U1, 1, l_U1038, 0 );
        for ( I = 0; I <= 12; I++ )
        {
            if (IS_BIT_SET( cellphone3Dstructure._fU416, I ))
            {
                sub_17304( ref cVar7, "CP_ANIMTM_", I, -1, -1 );
                sub_9450( ref l_U1, ref l_U226, I, ref cVar7, "", 1, 0, 0, 0, 0 );
            }
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;
        case 1003:
        l_U1090 = 0;
        StrCopy( ref cellphone3Dstructure._fU128, "", 16 );
        break;
        case 1038:
        StrCopy( ref l_U1062[0], "CP_SC_SIGN_INPC", 16 );
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
        case 1039:
        if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U1062[0], "NT_HACKED", 16 );
            StrCopy( ref l_U1062[1], "", 16 );
            StrCopy( ref l_U1062[2], "", 16 );
            l_U1042 = 0;
            sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        }
        break;
        case 1040:
        if (# -NULL-0xc27c84())
        {
            StrCopy( ref l_U1062[0], "CP_SIGN_IN", 16 );
        }
        else if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U1062[0], "CP_SIGN_INPC", 16 );
        }
        else
        {
            StrCopy( ref l_U1062[0], "CP_SIGN_INPS3", 16 );
        }
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
        case 1043:
        if (# -NULL-0xc27c84())
        {
            StrCopy( ref l_U1062[0], "CP_CANT_PLAY", 16 );
        }
        else if (# -NULL-0xc27bfa())
        {
            StrCopy( ref l_U1062[0], "CP_CANT_PLAYPC", 16 );
        }
        else
        {
            StrCopy( ref l_U1062[0], "CP_CANT_PLAYPS3", 16 );
        }
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
        case 1032:
        StrCopy( ref l_U1062[0], "CP_REPLAY_WARN", 16 );
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
        case 1033:
        StrCopy( ref l_U1062[0], "MO_VE_WAIT", 16 );
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
        case 1030:
        StrCopy( ref l_U1062[0], "CP_SLEEP_WARN", 16 );
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
        case 1031: break;
        case 1035:
        sub_9366( ref l_U1, 1, l_U1038, 0 );
        for ( I = 0; I <= 22; I++ )
        {
            if (IS_BIT_SET( ProtectedGet(cellphone3Dstructure._fU536), I ))
            {
                sub_17304( ref cVar7, "CP_CHEATS_", I, -1, -1 );
                sub_9450( ref l_U1, ref l_U226, I, ref cVar7, "", 1, 0, 0, 0, 0 );
            }
        }
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;

        case 1048:
        sub_9366( ref l_U1, 1, l_U1038, 0 );
        // CP_OPT_NETWORK = Multiplayer
        sub_9450( ref l_U1, ref l_U226, 1047, "CP_OPT_NETWORK", "", 1, 0, 0, 0, 0 );
        // Unknown
        sub_9450( ref l_U1, ref l_U226, 1031, "CP_OPT_REPMENU", "", 1, 0, 0, 0, 0 );
        sub_10177( ref l_U1, ref l_U226, ref l_U39, 1, 1, 0 );
        break;

        case 1045:
        SETTIMERA( 0 );
        // CP_GAMEPROV = Connecting to game provider...
        StrCopy( ref l_U1062[0], "CP_GAMEPROV", 16 );
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;

        case 1046:
        // CP_GAMEPROVTO = Cannot connect to game provider, please try again later.
        StrCopy( ref l_U1062[0], "CP_GAMEPROVTO", 16 );
        StrCopy( ref l_U1062[1], "", 16 );
        StrCopy( ref l_U1062[2], "", 16 );
        l_U1042 = 0;
        sub_16177( ref l_U985._fU0[0], ref l_U1062, l_U1042, ref l_U1046, ref l_U1045, ref l_U1043, ref l_U1044, ref l_U1._fU44, ref l_U1._fU60, ref l_U1._fU56, ref l_U1._fU52 );
        break;
    }
    l_U958 = 0;
    cellphone3Dstructure._fU92 = 0;
    return;
}

// Seems to release and mark txd as no longer needed
// sub_8531
void ReleaseAndMarkTxdAsNotNeeded(int txdToRelease)
{
    if (txdToRelease->_fU40)
    {
        RELEASE_TEXTURE( txdToRelease->_fU36 );
        txdToRelease->_fU40 = 0;
    }
    if (NOT (COMPARE_STRING( txdToRelease + 0, "" )))
    {
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( txdToRelease + 0 );
    }
    txdToRelease->_fU44 = 0;
    return;
}

int sub_8621()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_8659( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_8659(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

int sub_8937()
{
    int J;
    int I;
    int iVar4;
    unknown uVar5;

    iVar4 = GET_CURRENT_DAY_OF_WEEK();
    uVar5 = sub_8962( GET_HOURS_OF_DAY() );
    for ( J = 0; J <= 6; J++ )
    {
        if (J == iVar4)
        {
            for ( I = uVar5; I <= 3; I++ )
            {
                if ((sub_9070( J, I )) > 1)
                {
                    return 1;
                }
            }
        }
        else
        {
            for ( I = 0; I <= 3; I++ )
            {
                if ((sub_9070( J, I )) > 1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

// In sub_8937:
// uVar5 = sub_8962( GET_HOURS_OF_DAY() );
// I think iParam0 is currentHoursInDay
// TODO Figure out what exactly this is for and label it.
int sub_8962(int currentHoursInDay)
{
    if (currentHoursInDay < 8)
    {
        return 0;
    }
    else if (currentHoursInDay < 12)
    {
        return 1;
    }
    else if (currentHoursInDay < 18)
    {
        return 2;
    }
    return 3;
}

int sub_9070(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_9366(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU4 = 0;
    iParam0->_fU0 = uParam1;
    iParam0->_fU12 = 0;
    iParam0->_fU8 = uParam2;
    iParam0->_fU64 = uParam3;
    return;
}

// Example usage for this: sub_9450( ref l_U1, ref l_U226, 14, "CP_NAV_CALL", "", 1, 0, 0, 0, 0 );
// Seems to possibly show the menu options on the phone? 
// uParam2 is some type of int
// uParam3 seems to be a gxt text to display
void sub_9450(int iParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0->_fU4 < (uParam1^))
    {
        if (NOT iParam0->_fU12)
        {
            if (iParam2 == iParam0->_fU8)
            {
                iParam0->_fU8 = iParam0->_fU4;
                iParam0->_fU12 = 1;
            }
        }
        (uParam1^)[iParam0->_fU4]._fU0 = iParam2;
        
        // Phone GXT string
        StrCopy( ref (uParam1^)[iParam0->_fU4]._fU4, uParam3, 32 );
        
        (uParam1^)[iParam0->_fU4]._fU36 = uParam6;
        (uParam1^)[iParam0->_fU4]._fU40 = uParam8;
        (uParam1^)[iParam0->_fU4]._fU44 = uParam9;
        StrCopy( ref (uParam1^)[iParam0->_fU4]._fU48, uParam4, 16 );
        (uParam1^)[iParam0->_fU4]._fU64 = uParam7;
        (uParam1^)[iParam0->_fU4]._fU68 = uParam5;
        iParam0->_fU4++;
    }
    else
    {
        sub_3083( "\n SIMPLE OPTIONS ARRAY TO SMALL TO ADD " );
        sub_3083( uParam3 );
        sub_3083( " TO THE PHONE OPTIONS." );
    }
    return;
}

void sub_10177(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;
    int iVar9;
    float fVar10;
    float fVar11;

    fVar10 = 0.49500000;
    fVar11 = 0.93000000;
    cellphone3Dstructure._fU492 = 1000 / iParam0->_fU4;
    sub_10234( ref cellphone3Dstructure._fU492, 100, 500 );
    if (cellphone3Dstructure._fU500)
    {
        iVar9 = 6;
    }
    else
    {
        iVar9 = 4;
    }
    if (iParam0->_fU0 == 2)
    {
        iVar9 = iVar9 / 2;
    }
    if (((iParam0->_fU8 < iVar9) AND (iParam0->_fU12)) || ((NOT iParam0->_fU12) || (iParam0->_fU4 < iVar9)))
    {
        for ( I = 0; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = I;
        }
        if (iParam0->_fU12)
        {
            iParam0->_fU44 = iParam0->_fU8;
        }
        else
        {
            iParam0->_fU44 = 0;
        }
    }
    else if ((iParam0->_fU4 - iParam0->_fU8) < iVar9)
    {
        sub_6958( "\n menuStruct.total is ", iParam0->_fU4 );
        sub_6958( "\n menuStruct.memory is ", iParam0->_fU8 );
        for ( I = 0; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = iParam0->_fU4 - (iVar9 - I);
            if (I == (iVar9 - (iParam0->_fU4 - iParam0->_fU8)))
            {
                iParam0->_fU44 = I;
            }
        }
    }
    else
    {
        iParam0->_fU16[0] = iParam0->_fU8;
        iParam0->_fU44 = 0;
        for ( I = 1; I <= (iVar9 - 1); I++ )
        {
            iParam0->_fU16[I] = iParam0->_fU16[0] + I;
            if (iParam0->_fU16[I] >= iParam0->_fU4)
            {
                iParam0->_fU16[I] -= iParam0->_fU4;
            }
        }
    }
    if (iParam0->_fU4 < iVar9)
    {
        iParam0->_fU48 = iParam0->_fU4;
        iParam0->_fU52 = 0;
        iVar9 = iParam0->_fU4;
    }
    else
    {
        iParam0->_fU48 = iVar9;
        iParam0->_fU52 = 1;
        if (cellphone3Dstructure._fU40 == 2)
        {
            iParam0->_fU56 = 0.72000000 / (TO_FLOAT( iParam0->_fU4 ));
        }
        else
        {
            iParam0->_fU56 = 0.75000000 / (TO_FLOAT( iParam0->_fU4 ));
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        sub_10952( ref (uParam2^)[I] );
    }
    for ( I = 0; I <= (iVar9 - 1); I++ )
    {
        sub_11027( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    if (cellphone3Dstructure._fU40 != 2)
    {
        if (iParam0->_fU52)
        {
            fVar10 = 0.47500000;
            fVar11 = 0.95000000;
        }
        else
        {
            fVar10 = 0.50000000;
            fVar11 = 1.00000000;
        }
    }
    if (cellphone3Dstructure._fU500)
    {
        if (iParam0->_fU0 == 1)
        {
            sub_2280( iParam0 + 68, fVar10, 0.19000000 );
            if (cellphone3Dstructure._fU40 == 2)
            {
                sub_2280( iParam0 + 76, fVar11, 0.12000000 );
            }
            else
            {
                sub_2280( iParam0 + 76, fVar11, 0.75000000 / 6 );
            }
            iParam0->_fU100 = -0.04500000;
        }
        else
        {
            sub_2280( iParam0 + 68, fVar10, 0.25000000 );
            if (cellphone3Dstructure._fU40 == 2)
            {
                sub_2280( iParam0 + 76, fVar11, 0.24000000 );
            }
            else
            {
                sub_2280( iParam0 + 76, fVar11, 0.75000000 / 3 );
            }
            iParam0->_fU100 = -0.09000000;
            iParam0->_fU104 = 0.01000000;
        }
    }
    else if (iParam0->_fU0 == 1)
    {
        sub_2280( iParam0 + 68, fVar10, 0.22000000 );
        if (cellphone3Dstructure._fU40 == 2)
        {
            sub_2280( iParam0 + 76, fVar11, 0.18000000 );
        }
        else
        {
            sub_2280( iParam0 + 76, fVar11, 0.75000000 / 4 );
        }
        iParam0->_fU100 = -0.05500000;
    }
    else
    {
        sub_2280( iParam0 + 68, fVar10, 0.31000000 );
        if (cellphone3Dstructure._fU40 == 2)
        {
            sub_2280( iParam0 + 76, fVar11, 0.36000000 );
        }
        else
        {
            sub_2280( iParam0 + 76, fVar11, 0.75000000 / 2 );
        }
        iParam0->_fU100 = -0.14500000;
        iParam0->_fU104 = 0.03500000;
    }
    ref iParam0->_fU84->_fU0 = 0.05000000 + uParam5;
    ref iParam0->_fU84->_fU4 = 0.95000000;
    ref iParam0->_fU92->_fU0 = 0.05000000 + uParam5;
    ref iParam0->_fU92->_fU4 = 0.95000000;
    iParam0->_fU120 = uParam3;
    iParam0->_fU136 = uParam4;
    iParam0->_fU132 = 1;
    iParam0->_fU148 = 1;
    iParam0->_fU108 = -5;
    iParam0->_fU112 = -5;
    iParam0->_fU116 = -5;
    sub_5784( iParam0, uParam2, -1 );
    return;
}

int sub_10234(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam2 < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) < iParam1)
    {
        (uParam0^) = iParam1;
        return 1;
    }
    else if ((uParam0^) > iParam2)
    {
        (uParam0^) = iParam2;
        return 1;
    }
    return 0;
}

void sub_10952(int iParam0)
{
    iParam0->_fU0 = 0;
    return;
}

void sub_11027(int iParam0, int iParam1)
{
    iParam1->_fU4 = iParam0->_fU0;
    iParam1->_fU8 = {iParam0->_fU4};
    iParam1->_fU40 = iParam0->_fU36;
    iParam1->_fU44 = iParam0->_fU40;
    iParam1->_fU48 = iParam0->_fU44;
    iParam1->_fU52 = {iParam0->_fU48};
    iParam1->_fU68 = iParam0->_fU64;
    iParam1->_fU72 = iParam0->_fU68;
    iParam1->_fU0 = 1;
    return;
}

void sub_12247(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
    if (iParam3 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam3, 16);
        if (iParam4 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam4, 16);
        }
    }
    return;
}

void sub_12350(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_12726()
{
    if (GET_CURRENT_LANGUAGE() == 5)
    {
        g_U15946[28]._fU132._fU4 = 10;
        g_U15946[19]._fU132._fU4 = 20;
        g_U15946[18]._fU132._fU4 = 30;
        g_U15946[24]._fU132._fU4 = 40;
        g_U15946[8]._fU132._fU4 = 50;
        g_U15946[1]._fU132._fU4 = 60;
        g_U15946[20]._fU132._fU4 = 70;
        g_U15946[16]._fU132._fU4 = 80;
        g_U15946[15]._fU132._fU4 = 90;
        g_U15946[46]._fU132._fU4 = 100;
        g_U15946[25]._fU132._fU4 = 110;
        g_U15946[27]._fU132._fU4 = 120;
        g_U15946[7]._fU132._fU4 = 130;
        g_U15946[30]._fU132._fU4 = 140;
        g_U15946[10]._fU132._fU4 = 150;
        g_U15946[29]._fU132._fU4 = 160;
        g_U15946[3]._fU132._fU4 = 170;
        g_U15946[2]._fU132._fU4 = 180;
        g_U15946[26]._fU132._fU4 = 190;
        g_U15946[5]._fU132._fU4 = 200;
        g_U15946[13]._fU132._fU4 = 210;
        g_U15946[22]._fU132._fU4 = 220;
        g_U15946[9]._fU132._fU4 = 230;
        g_U15946[0]._fU132._fU4 = 235;
        g_U15946[14]._fU132._fU4 = 240;
        g_U15946[37]._fU132._fU4 = 250;
        g_U15946[4]._fU132._fU4 = 260;
        g_U15946[17]._fU132._fU4 = 270;
        g_U15946[11]._fU132._fU4 = 280;
        g_U15946[36]._fU132._fU4 = 290;
        g_U15946[6]._fU132._fU4 = 300;
        g_U15946[35]._fU132._fU4 = 310;
        g_U15946[12]._fU132._fU4 = 320;
        g_U15946[33]._fU132._fU4 = 330;
        g_U15946[54]._fU132._fU4 = 340;
        g_U15946[31]._fU132._fU4 = 350;
        g_U15946[32]._fU132._fU4 = 360;
        g_U15946[21]._fU132._fU4 = 370;
    }
    else if (NOT IS_JAPANESE_VERSION())
    {
        switch (GET_CURRENT_LANGUAGE())
        {
            case 1:
            g_U15946[36]._fU132._fU4 = 201;
            g_U15946[17]._fU132._fU4 = 231;
            g_U15946[35]._fU132._fU4 = 11;
            g_U15946[27]._fU132._fU4 = 111;
            break;
            case 2:
            g_U15946[36]._fU132._fU4 = 101;
            g_U15946[17]._fU132._fU4 = 12;
            g_U15946[35]._fU132._fU4 = 11;
            g_U15946[27]._fU132._fU4 = 201;
            break;
            case 3:
            g_U15946[36]._fU132._fU4 = 61;
            g_U15946[17]._fU132._fU4 = 271;
            g_U15946[35]._fU132._fU4 = 11;
            g_U15946[27]._fU132._fU4 = 111;
            break;
            case 4:
            g_U15946[36]._fU132._fU4 = 261;
            g_U15946[17]._fU132._fU4 = 11;
            g_U15946[35]._fU132._fU4 = 0;
            g_U15946[27]._fU132._fU4 = 151;
            break;
            default:
            g_U15946[36]._fU132._fU4 = 31;
            g_U15946[17]._fU132._fU4 = 131;
            g_U15946[35]._fU132._fU4 = 191;
            g_U15946[27]._fU132._fU4 = 231;
            break;
        }
        g_U15946[28]._fU132._fU4 = 10;
        g_U15946[19]._fU132._fU4 = 20;
        g_U15946[18]._fU132._fU4 = 30;
        g_U15946[8]._fU132._fU4 = 40;
        g_U15946[24]._fU132._fU4 = 50;
        g_U15946[30]._fU132._fU4 = 60;
        g_U15946[16]._fU132._fU4 = 70;
        g_U15946[25]._fU132._fU4 = 80;
        g_U15946[7]._fU132._fU4 = 90;
        g_U15946[6]._fU132._fU4 = 100;
        g_U15946[4]._fU132._fU4 = 110;
        g_U15946[11]._fU132._fU4 = 120;
        g_U15946[37]._fU132._fU4 = 130;
        g_U15946[20]._fU132._fU4 = 152;
        g_U15946[15]._fU132._fU4 = 150;
        g_U15946[46]._fU132._fU4 = 160;
        g_U15946[22]._fU132._fU4 = 241;
        g_U15946[10]._fU132._fU4 = 180;
        g_U15946[29]._fU132._fU4 = 190;
        g_U15946[3]._fU132._fU4 = 200;
        g_U15946[26]._fU132._fU4 = 210;
        g_U15946[5]._fU132._fU4 = 220;
        g_U15946[2]._fU132._fU4 = 230;
        g_U15946[13]._fU132._fU4 = 240;
        g_U15946[9]._fU132._fU4 = 250;
        g_U15946[14]._fU132._fU4 = 260;
        g_U15946[0]._fU132._fU4 = 270;
        g_U15946[12]._fU132._fU4 = 280;
        g_U15946[1]._fU132._fU4 = 290;
        g_U15946[33]._fU132._fU4 = 300;
        g_U15946[54]._fU132._fU4 = 310;
        g_U15946[31]._fU132._fU4 = 320;
        g_U15946[32]._fU132._fU4 = 330;
        g_U15946[21]._fU132._fU4 = 340;
    }
    else
    {
        g_U15946[12]._fU132._fU4 = 10;
        g_U15946[21]._fU132._fU4 = 20;
        g_U15946[28]._fU132._fU4 = 30;
        g_U15946[6]._fU132._fU4 = 40;
        g_U15946[30]._fU132._fU4 = 50;
        g_U15946[29]._fU132._fU4 = 60;
        g_U15946[20]._fU132._fU4 = 70;
        g_U15946[10]._fU132._fU4 = 80;
        g_U15946[3]._fU132._fU4 = 90;
        g_U15946[46]._fU132._fU4 = 100;
        g_U15946[15]._fU132._fU4 = 110;
        g_U15946[33]._fU132._fU4 = 120;
        g_U15946[25]._fU132._fU4 = 130;
        g_U15946[16]._fU132._fU4 = 140;
        g_U15946[7]._fU132._fU4 = 150;
        g_U15946[18]._fU132._fU4 = 160;
        g_U15946[13]._fU132._fU4 = 170;
        g_U15946[4]._fU132._fU4 = 180;
        g_U15946[17]._fU132._fU4 = 190;
        g_U15946[1]._fU132._fU4 = 200;
        g_U15946[11]._fU132._fU4 = 210;
        g_U15946[8]._fU132._fU4 = 220;
        g_U15946[24]._fU132._fU4 = 230;
        g_U15946[9]._fU132._fU4 = 240;
        g_U15946[37]._fU132._fU4 = 250;
        g_U15946[22]._fU132._fU4 = 260;
        g_U15946[19]._fU132._fU4 = 270;
        g_U15946[5]._fU132._fU4 = 280;
        g_U15946[27]._fU132._fU4 = 290;
        g_U15946[26]._fU132._fU4 = 300;
        g_U15946[2]._fU132._fU4 = 310;
        g_U15946[14]._fU132._fU4 = 320;
        g_U15946[0]._fU132._fU4 = 330;
        g_U15946[36]._fU132._fU4 = 340;
        g_U15946[35]._fU132._fU4 = 350;
    }
    return;
}

void sub_15300()
{
    int I;
    int J;
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
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    char[16] cVar23;

    for ( I = 0; I <= (57 - 1); I++ )
    {
        if ((g_U15946[I]._fU132._fU4 != -1) AND (g_U15946[I]._fU132._fU0))
        {
            StrCopy( ref cVar23, "CONT_", 16 );
            ConcatString(ref cVar23, ref g_U15946[I]._fU132._fU8, 16);
            if ((((sub_15436( g_U15946[I]._fU0 )) != 0) || (cellphone3Dstructure._fU68 == I)) AND (cellphone3Dstructure._fU76 != I))
            {
                iVar4 = 1;
            }
            else
            {
                iVar4 = 0;
            }
            sub_9450( ref l_U1, ref l_U226, g_U15946[I]._fU0, ref cVar23, "", iVar4, 0, 0, 0, 0 );
        }
    }
    for ( I = 0; I <= (l_U1._fU4 - 2); I++ )
    {
        for ( J = 0; J <= (l_U1._fU4 - (I + 2)); J++ )
        {
            if (g_U15946[l_U226[J]._fU0]._fU132._fU4 > (g_U15946[l_U226[J + 1]._fU0]._fU132._fU4))
            {
                uVar5 = {l_U226[J]};
                l_U226[J] = {l_U226[J + 1]};
                l_U226[J + 1] = {uVar5};
                if (l_U1._fU12)
                {
                    if (l_U1._fU8 == J)
                    {
                        l_U1._fU8++;
                    }
                    else if (l_U1._fU8 == (J + 1))
                    {
                        l_U1._fU8--;
                    }
                }
            }
        }
    }
    return;
}

void sub_15436(unknown uParam0)
{
    int I;
    int Result;

    Result = 0;
    if (NOT g_U10978)
    {
        for ( I = 0; I <= (14 - 1); I++ )
        {
            if (g_U15946[uParam0]._fU8[0]._fU0[I])
            {
                Result++;
            }
        }
    }
    else
    {
        for ( I = 0; I <= 2; I++ )
        {
            if (g_U15946[uParam0]._fU8[0]._fU0[I])
            {
                Result++;
            }
        }
    }
    return Result;
}

void sub_15968()
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] == -1)
        {
            return Result;
        }
    }
    return g_U569;
}

void sub_16177(unknown uParam0, unknown uParam1, boolean bParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    int iVar17;

    if (cellphone3Dstructure._fU500)
    {
        uVar13._fU0 = 0.08000000;
        uVar13._fU4 = 0.10000000;
        uVar15._fU0 = 0.08000000;
        uVar15._fU4 = 0.92000000;
        iVar17 = 6;
    }
    else if (cellphone3Dstructure._fU40 == 2)
    {
        uVar13._fU0 = 0.10000000;
        uVar15._fU0 = 0.10000000;
    }
    else
    {
        uVar13._fU0 = 0.05000000;
        uVar15._fU0 = 0.05000000;
    }
    uVar13._fU4 = 0.10000000;
    uVar15._fU4 = 0.90000000;
    iVar17 = 5;;
    sub_16367( 0, 7, uParam0, "", uVar13._fU0, uVar13._fU4, uVar15._fU0, uVar15._fU4, 0, 0, 0, 0, 0, 1 );
    (uParam4^) = GET_NUMBER_LINES_WITH_SUBSTRINGS( uVar13._fU0, uVar13._fU4, ref (uParam1^)[0], ref (uParam1^)[1], ref (uParam1^)[2] );
    (uParam5^) = 0;
    (uParam7^) = 0;
    (uParam8^) = 0;
    if (bParam2)
    {
        cellphone3Dstructure._fU528 = 1;
        (uParam3^) = (uParam4^) + iVar17;
    }
    else
    {
        (uParam3^) = (uParam4^);
    }
    if ((uParam3^) <= iVar17)
    {
        (uParam6^) = (uParam4^) - 1;
        (uParam10^) = 0;
    }
    else
    {
        (uParam6^) = iVar17 - 1;
        (uParam10^) = 1;
        (uParam9^) = 0.72000000 / ((uParam3^) - (iVar17 - 1));
    }
    return;
}

void sub_16367(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, float fParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, int iParam13)
{
    float fVar16;
    float fVar17;

    fVar16 = ref iParam2->_fU0->_fU0;
    fVar17 = ref iParam2->_fU0->_fU4;
    if ((iParam13 == 1) AND (IS_JAPANESE_VERSION()))
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    if (IS_JAPANESE_VERSION())
    {
        fVar16 *= 0.70000000;
    }
    switch (uParam0)
    {
        case 0:
        if (sub_16486( uParam3 ))
        {
            fVar16 *= 0.80000000;
            fVar17 *= 0.80000000;
        }
        SET_TEXT_SCALE( fVar16, fVar17 * 0.65000000 );
        fParam5 *= 0.65000000;
        break;
        case 1:
        SET_TEXT_SCALE( ref iParam2->_fU0->_fU0, (ref iParam2->_fU0->_fU4) * 0.35000000 );
        fParam5 *= 0.35000000;
        break;
    }
    switch (uParam8)
    {
        case 1:
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        break;
        case 2:
        SET_TEXT_CENTRE( 1 );
        break;
    }
    SET_TEXT_WRAP( uParam6, uParam7 );
    SET_TEXT_COLOUR( sub_16722( iParam2 + 8, 0 ), sub_16722( iParam2 + 8, 1 ), sub_16722( iParam2 + 8, 2 ), sub_16722( iParam2 + 8, 3 ) );
    SET_TEXT_DROPSHADOW( uParam12, 0, 0, 0, 255 );
    switch (uParam1)
    {
        case 2:
        case 1: SET_TEXT_LINE_DISPLAY( 0, 0 );
        case 0:
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 4:
        SET_TEXT_LINE_DISPLAY( uParam9, uParam10 );
        DISPLAY_TEXT( uParam4, fParam5, uParam3 );
        break;
        case 5:
        SET_TEXT_LINE_DISPLAY( 0, 0 );
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_STRING( uParam4, fParam5, "STRING", uParam3 );
        SET_TEXT_USE_UNDERSCORE( 0 );
        break;
        case 6:
        DISPLAY_TEXT_WITH_NUMBER( uParam4, fParam5, uParam3, uParam11 );
        break;
    }
    return;
}

int sub_16486(unknown uParam0)
{
    if ((GET_LENGTH_OF_LITERAL_STRING( uParam0 )) >= 6)
    {
        return COMPARE_STRING( GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( uParam0, 6 ), "TM_82_" );
    }
    return 0;
}

void sub_16722(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( (uParam0^), 0, 7 );
        case 1: return GET_BITS_IN_RANGE( (uParam0^), 8, 15 );
        case 2: return GET_BITS_IN_RANGE( (uParam0^), 16, 23 );
    }
    return GET_BITS_IN_RANGE( (uParam0^), 24, 31 );
}

void sub_17304(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
    if (iParam3 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam3, 16);
        if (iParam4 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam4, 16);
        }
    }
    return;
}

int sub_17596()
{
    int iVar2;

    iVar2 = GET_HOURS_OF_DAY();
    if (iVar2 < 8)
    {
        return 0;
    }
    else if (iVar2 < 12)
    {
        return 1;
    }
    else if (iVar2 < 18)
    {
        return 2;
    };;;
    return 3;
}

int sub_18129(unknown uParam0)
{
    SET_BIT( 1, uParam0 );
    switch (uParam0)
    {
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        if (IS_INTERIOR_SCENE())
        {
            return 0;
        }
        break;
    }
    switch (uParam0)
    {
        case 0:
        ACTIVATE_CHEAT( 2 );
        ACTIVATE_CHEAT( 1 );
        break;
        case 1:
        ACTIVATE_CHEAT( 2 );
        break;
        case 2:
        ACTIVATE_CHEAT( 1 );
        break;
        case 3:
        ACTIVATE_CHEAT( 0 );
        break;
        case 4:
        ACTIVATE_CHEAT( 4 );
        break;
        case 5:
        ACTIVATE_CHEAT( 3 );
        break;
        case 7:
        ACTIVATE_CHEAT( 6 );
        break;
        case 8:
        ACTIVATE_CHEAT( 7 );
        break;
        case 9:
        ACTIVATE_CHEAT( 10 );
        break;
        case 10:
        ACTIVATE_CHEAT( 8 );
        break;
        case 11:
        ACTIVATE_CHEAT( 15 );
        break;
        case 12:
        ACTIVATE_CHEAT( 9 );
        break;
        case 13:
        ACTIVATE_CHEAT( 11 );
        break;
        case 14:
        ACTIVATE_CHEAT( 12 );
        break;
        case 15:
        ACTIVATE_CHEAT( 13 );
        break;
        case 16:
        ACTIVATE_CHEAT( 14 );
        break;
    }
    return 1;
    break;
    2;
    1;
    ref cellphone3Dstructure._fU536;
    1;
    ref cellphone3Dstructure._fU536;
    break;
}

void sub_18645(unknown uParam0)
{
    switch (sub_8659( 4, (uParam0^) ))
    {
        case 0:
        case 1:
        sub_18699( 3, 4, uParam0 );
        break;
        case 2:
        sub_18699( 4, 4, uParam0 );
        break;
    }
    return;
}

void sub_18699(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_19216(int iParam0, unknown uParam1)
{
    ReleaseAndMarkTxdAsNotNeeded( iParam0 );
    sub_19238( iParam0 + 0, uParam1 );
    REQUEST_STREAMED_TXD( iParam0 + 0, 1 );
    iParam0->_fU32 = uParam1;
    iParam0->_fU44 = 1;
    return;
}

void sub_19238(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "phone_photo_", 32 );
    ConcatString((uParam0^), iParam1 / 5, 32);
    return;
}

void sub_19366(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( (uParam0^), "CP_APMNT_", 16 );
    switch (uParam2)
    {
        case 0:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U465[uParam1]._fU0, 0, 15 ), 16);
        break;
        case 1:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U465[uParam1]._fU0, 16, 31 ), 16);
        break;
        case 2:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U465[uParam1]._fU4, 0, 15 ), 16);
        break;
        case 3:
        ConcatString((uParam0^), GET_BITS_IN_RANGE( g_U465[uParam1]._fU4, 16, 31 ), 16);
        break;
    }
    return;
}

int sub_19751(unknown uParam0, unknown uParam1)
{
    int Result;

    for ( Result = uParam1; Result <= 3; Result++ )
    {
        if ((sub_9070( uParam0, Result )) != 0)
        {
            return Result;
        }
    }
    return -1;
}

int sub_19900(unknown uParam0, unknown uParam1)
{
    if ((sub_9070( uParam0, uParam1 )) == 0)
    {
        return 0;
    }
    return 1;
}

int sub_20063(unknown uParam0, unknown uParam1)
{
    int I;

    for ( I = uParam1; I <= 3; I++ )
    {
        if ((sub_9070( uParam0, I )) != 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_24251(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, boolean bParam14, boolean bParam15)
{
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (bParam14)
        {
            sub_24323( 0, g_U523._fU0[0], 0.50000000, 0.50000000, 1.00000000, 1.00000000 );
            sub_24481( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, g_U828 );
        }
        sub_24592( uParam0 );
        if (bParam15)
        {
            if (NOT cellphone3Dstructure._fU540)
            {
                sub_24323( 0, g_U523._fU0[1], 0.50000000, 0.50000000, 0.85000000, 0.41000000 );
            }
        }
        break;
        default:
        sub_25286( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, uParam1._fU0 );
        if ((NOT cellphone3Dstructure._fU540) AND (cellphone3Dstructure._fU0 == 1002))
        {
            sub_25012( 0, g_U481._fU0[19], 0.50000000, 0.60000000, 0.80000000, 0.40000000, uParam1._fU12 );
        }
        break;
    }
    switch (cellphone3Dstructure._fU0)
    {
        case 1003:
        case 1009: break;
        default:
        if (NOT cellphone3Dstructure._fU528)
        {
            sub_25556( 0 );
        }
        break;
    }
    return;
}

void sub_24323(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, 255, 255, 255, 255 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, 255, 255, 255, 255 );
    }
    return;
}

void sub_24481(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, uParam5, uParam6, uParam7, uParam8 );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, uParam5, uParam6, uParam7, uParam8 );
    }
    return;
}

void sub_24592(int iParam0)
{
    int I;
    unknown uVar4;

    switch (iParam0)
    {
        case 2:
        if (g_U523._fU124 > 0)
        {
            g_U523._fU124 -= 25;
            sub_10234( ref g_U523._fU124, 0, 255 );
            break;
        }
        break;
        case 1: sub_24698();
        case 0:
        if (iParam0 != 2)
        {
            if (g_U523._fU124 < 255)
            {
                g_U523._fU124 += 25;
                sub_10234( ref g_U523._fU124, 0, 255 );
            }
        }
        sub_1098( ref uVar4, 255, 255, 255, g_U523._fU124 );
        for ( I = 0; I <= 4; I++ )
        {
            sub_25012( 0, g_U523._fU0[2], g_U523._fU20[I]._fU0._fU0, g_U523._fU20[I]._fU0._fU4, g_U523._fU20[I]._fU8._fU0, g_U523._fU20[I]._fU8._fU4, uVar4 );
        }
        break;
    }
    return;
}

void sub_24698()
{
    int I;

    for ( I = 0; I <= 4; I++ )
    {
        g_U523._fU20[I]._fU0._fU4 += g_U523._fU20[I]._fU16;
        if ((g_U523._fU20[I]._fU0._fU4 + (g_U523._fU20[I]._fU8._fU4 * 0.50000000)) < 0.00000000)
        {
            sub_3283( I, 1 );
        }
    }
    return;
}

void sub_25012(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, sub_16722( ref uParam6, 0 ), sub_16722( ref uParam6, 1 ), sub_16722( ref uParam6, 2 ), sub_16722( ref uParam6, 3 ) );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, sub_16722( ref uParam6, 0 ), sub_16722( ref uParam6, 1 ), sub_16722( ref uParam6, 2 ), sub_16722( ref uParam6, 3 ) );
    }
    return;
}

void sub_25286(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (iParam0 == 0)
    {
        DRAW_RECT( uParam1, uParam2 * 0.65000000, uParam3, uParam4 * 0.65000000, sub_16722( ref uParam5, 0 ), sub_16722( ref uParam5, 1 ), sub_16722( ref uParam5, 2 ), sub_16722( ref uParam5, 3 ) );
    }
    else
    {
        DRAW_RECT( uParam1, 0.65000000 + (uParam2 * 0.35000000), uParam3, uParam4 * 0.35000000, sub_16722( ref uParam5, 0 ), sub_16722( ref uParam5, 1 ), sub_16722( ref uParam5, 2 ), sub_16722( ref uParam5, 3 ) );
    }
    return;
}

void sub_25556(int iParam0)
{
    int I;

    sub_24481( 1, 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if ((iParam0 > 0) AND (NOT IS_USING_CONTROLLER()))
    {
        iParam0 = 0;
    }
    for ( I = 1; I <= 12; I++ )
    {
        if (iParam0 != I)
        {
            if (cellphone3Dstructure._fU496)
            {
                sub_25726( 1, g_U481._fU0[I], 0.25000000 + (((I - 1) mod 3) * 0.25000000), 0.25000000 + (((I - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 200, 200, 200, 255 );
            }
            else
            {
                sub_24323( 1, g_U481._fU0[I], 0.25000000 + (((I - 1) mod 3) * 0.25000000), 0.25000000 + (((I - 1) / 3) * 0.20000000), 0.24500000, 0.18500000 );
            }
        }
    }
    if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
    {
        if (iParam0 != -1)
        {
            sub_25726( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 108, 130, 187, 255 );
        }
        else
        {
            sub_25726( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 100, 169, 249, 255 );
        }
        if (iParam0 != -2)
        {
            sub_25726( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 204, 43, 71, 255 );
        }
        else
        {
            sub_25726( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 250, 105, 141, 255 );
        }
    }
    else if (iParam0 != -1)
    {
        sub_25726( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 0, 100, 0, 255 );
    }
    else
    {
        sub_25726( 1, g_U481._fU0[13], 0.10500000, 0.20000000, 0.10000000, 0.30000000, 0, 200, 0, 255 );
    }
    if (iParam0 != -2)
    {
        sub_25726( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 100, 0, 0, 255 );
    }
    else
    {
        sub_25726( 1, g_U481._fU0[14], 0.89500000, 0.20000000, 0.10000000, 0.30000000, 200, 0, 0, 255 );
    }
    return;
}

void sub_25726(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 == 0)
    {
        DRAW_SPRITE( uParam1, uParam2, uParam3 * 0.65000000, uParam4, uParam5 * 0.65000000, 0.00000000, uParam6, uParam7, uParam8, uParam9 );
    }
    else
    {
        DRAW_SPRITE( uParam1, uParam2, 0.65000000 + (uParam3 * 0.35000000), uParam4, uParam5 * 0.35000000, 0.00000000, uParam6, uParam7, uParam8, uParam9 );
    }
    return;
}

void sub_26759(int iParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    int iVar6;
    int iVar7;
    unknown uVar8;

    iVar6 = GET_HASH_KEY( uParam2 );
    iVar7 = GET_HASH_KEY( uParam1 );
    if ((iVar7 != iParam0->_fU128) || (iVar6 != iParam0->_fU116))
    {
        iParam0->_fU116 = iVar6;
        iParam0->_fU128 = iVar7;
        sub_26840( iParam0, uParam2, uParam1 );
    }
    uVar8 = sub_27029( uParam1, 0, iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 );
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (cellphone3Dstructure._fU528)
        {
            sub_24481( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, 0, 0, 0, 255 );
        }
        else
        {
            sub_25286( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        }
        break;
        default:
        sub_25286( 0, 0.50000000, 0.94000000, 1.00000000, 0.12000000, iParam3->_fU4 );
        sub_25286( 0, 0.50000000, 0.88000000, 1.00000000, 0.01000000, iParam3->_fU16 );
        sub_25286( 0, 0.50000000, 0.94000000, 0.01000000, 0.12000000, iParam3->_fU20 );
        break;
    }
    if (iParam0->_fU116 != 1678728908)
    {
        sub_16367( 0, 0, ref iParam0->_fU0[1], uParam2, ref iParam0->_fU100->_fU0, ref iParam0->_fU100->_fU4, 0.00000000, 1.00000000, 0, 0, 0, 0, cellphone3Dstructure._fU564, 1 );
    }
    if (iParam0->_fU128 != 1678728908)
    {
        sub_16367( 0, 0, ref iParam0->_fU0[2], uParam1, (ref iParam0->_fU108->_fU0) - uVar8, ref iParam0->_fU108->_fU4, 0.00000000, ref iParam0->_fU108->_fU0, 0, 0, 0, 0, cellphone3Dstructure._fU564, 1 );
    }
    return;
}

void sub_26840(int iParam0, string sParam1, string sParam2)
{
    boolean bVar5;
    int[2] iVar6;

    bVar5 = true;
    array(ref iVar6, 2);
    sub_26871( ref iParam0->_fU0[1]._fU0, iParam0 + 120 );
    sub_26871( ref iParam0->_fU0[2]._fU0, iParam0 + 132 );
    if (iParam0->_fU116 == 1678728908)
    {
        sParam1 = "A";
        iVar6[0] = 1;
    }
    if (iParam0->_fU128 == 1678728908)
    {
        sParam2 = "A";
        iVar6[1] = 1;
    }
    bVar5 = true;
    while (bVar5)
    {
        if (((sub_27029( sParam1, iVar6[0], iParam0->_fU0[1]._fU0._fU0, iParam0->_fU0[1]._fU0._fU4 )) + (sub_27029( sParam2, iVar6[1], iParam0->_fU0[2]._fU0._fU0, iParam0->_fU0[2]._fU0._fU4 ))) > 0.90000000)
        {
            iParam0->_fU0[1]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[1]._fU0._fU4 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU0 *= 0.80000000;
            iParam0->_fU0[2]._fU0._fU4 *= 0.80000000;
        }
        else
        {
            bVar5 = false;
        }
    }
    return;
}

void sub_26871(int iParam0, int iParam1)
{
    iParam0->_fU0 = iParam1->_fU0;
    iParam0->_fU4 = iParam1->_fU4;
    return;
}

void sub_27029(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3)
{
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    else
    {
        SET_TEXT_FONT( 0 );
    }
    SET_TEXT_SCALE( uParam2, uParam3 * 0.65000000 );
    if (bParam1)
    {
        return GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    return GET_STRING_WIDTH( uParam0 );
}

void sub_27983(unknown uParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, int iParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    int iVar15;
    int iVar16;

    iVar15 = 5;
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        if (((uParam6^) != (iParam7 - 1)) AND (uParam4))
        {
            sub_25286( 0, 0.50000000, 0.50500000, 0.90000000, 0.75000000, iParam1->_fU8 );
        }
        else
        {
            sub_25286( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam1->_fU8 );
        }
        break;
        default:
        sub_25286( 0, 0.50000000, 0.50000000, 1.00000000, 1.00000000, iParam1->_fU0 );
        break;
    }
    if (cellphone3Dstructure._fU500)
    {
        uVar10._fU0 = 0.08000000;
        uVar10._fU4 = 0.10000000;
        uVar12._fU0 = 0.08000000;
        uVar12._fU4 = 0.92000000;
        iVar15 = 6;
    }
    else if (cellphone3Dstructure._fU40 == 2)
    {
        uVar10._fU0 = 0.10000000;
        uVar12._fU0 = 0.10000000;
    }
    else
    {
        uVar10._fU0 = 0.05000000;
        uVar12._fU0 = 0.05000000;
    }
    uVar10._fU4 = 0.10000000;
    uVar12._fU4 = 0.90000000;
    iVar15 = 5;;
    fVar14 = 0.67000000 / (TO_FLOAT( iVar15 ));
    iVar16 = (uParam6^) - iParam7;
    if ((iVar16 < iVar15) AND (uParam4))
    {
        if (sub_28337( iParam2 ))
        {
            sub_24323( 0, iParam2->_fU36, 0.50000000, 0.49000000 - ((iVar16 + 1) * fVar14), 0.85000000, 0.67000000 );
        }
        else
        {
            sub_28618( uParam0, 0.49000000 - ((iVar16 + 1) * fVar14), iVar16 );
        }
        sub_16367( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    else
    {
        sub_16367( 0, 7, uParam0, "", uVar10._fU0, uVar10._fU4, uVar12._fU0, uVar12._fU4, 0, 0, 0, 0, 0, 1 );
        SET_TEXT_LINE_DISPLAY( (uParam5^), (uParam6^) );
    }
    DISPLAY_TEXT_WITH_TWO_STRINGS( uVar10._fU0, uVar10._fU4, ref (uParam3^)[0], ref (uParam3^)[1], ref (uParam3^)[2] );
    if (cellphone3Dstructure._fU528)
    {
        sub_25556( 0 );
    }
    return;
}

int sub_28337(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU40)
    {
        return 1;
    }
    if (iParam0->_fU44)
    {
        if (HAS_STREAMED_TXD_LOADED( iParam0 + 0 ))
        {
            sub_28398( ref uVar3, iParam0->_fU32 );
            iParam0->_fU36 = GET_TEXTURE_FROM_STREAMED_TXD( iParam0 + 0, ref uVar3 );
            iParam0->_fU40 = 1;
            return 1;
        }
    }
    else
    {
        SCRIPT_ASSERT( "CELLPHONE - photo texture now loaded for some reason" );
    }
    return 0;
}

void sub_28398(unknown uParam0, int iParam1)
{
    StrCopy( (uParam0^), "photo_", 16 );
    ConcatString((uParam0^), iParam1 mod 5, 16);
    return;
}

void sub_28618(unknown uParam0, unknown uParam1, int iParam2)
{
    sub_24481( 0, 0.50000000, uParam1 - 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_24481( 0, 0.50000000, uParam1 + 0.33500000, 0.85000000, 0.01000000, 255, 255, 255, 150 );
    sub_24481( 0, 0.07500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    sub_24481( 0, 0.92500000, uParam1, 0.01000000, 0.67000000, 255, 255, 255, 150 );
    if (iParam2 >= -6)
    {
        sub_16367( 0, 0, uParam0, "PHOTO_LOADING", 0.09000000, uParam1 - 0.32000000, 0.10000000, 0.90000000, 0, 0, 0, 0, 0, 1 );
    }
    else
    {
        sub_6958( "\n photo sections", iParam2 );
    }
    return;
}

void sub_29096(int iParam0, int iParam1, int iParam2)
{
    int iVar5;

    if (iParam2 != -1)
    {
        iVar5 = iParam2;
    }
    else
    {
        iVar5 = iParam0->_fU16[iParam0->_fU44];
    }
    if (iParam0->_fU52)
    {
        if (cellphone3Dstructure._fU40 == 1)
        {
            sub_25286( 0, 0.95000000, 0.50500000, 0.01000000, 0.75000000, iParam1->_fU28 );
            sub_25286( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000, iParam0->_fU56, iParam1->_fU36 );
            sub_25286( 0, 0.95000000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.05000000 * 0.70000000, iParam0->_fU56 * 0.70000000, iParam1->_fU32 );
        }
        else
        {
            sub_25286( 0, 0.97000000, 0.49000000, 0.00700000, 0.72000000, iParam1->_fU28 );
            sub_25286( 0, 0.98500000, 0.13000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_25286( 0, 0.98500000, 0.85000000, 0.03000000, 0.00700000, iParam1->_fU28 );
            sub_25286( 0, 0.98500000, (0.13000000 + (iParam0->_fU56 * 0.50000000)) + ((TO_FLOAT( iVar5 )) * iParam0->_fU56), 0.03000000, iParam0->_fU56, iParam1->_fU28 );
        }
    }
    return;
}

void sub_29549(int iParam0, unknown uParam1, int iParam2, int iParam3, boolean bParam4)
{
    int I;
    float fVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;

    iVar10 = 0;
    iParam0->_fU112++;
    iParam0->_fU116++;
    if ((cellphone3Dstructure._fU40 == 2) AND (iParam0->_fU64))
    {
        sub_25286( 0, 0.50000000, 0.49000000, 0.90000000, 0.72000000, iParam3->_fU8 );
    }
    for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
    {
        fVar8 = (ref iParam0->_fU68->_fU4) + ((ref iParam0->_fU76->_fU4) * I);
        iVar9 = 0;
        if (bParam4)
        {
            if ((uParam1^)[I]._fU0)
            {
                if (cellphone3Dstructure._fU0 == 1083)
                {
                    if ((uParam1^)[I]._fU4 != 1000)
                    {
                        iVar9 = 1;
                    }
                    else if (NOT (COMPARE_STRING( ref (uParam1^)[I]._fU8, "CP_OPT_INVITE" )))
                    {
                        iVar9 = 1;
                    }
                }
                else if ((uParam1^)[I]._fU72)
                {
                    iVar9 = 1;
                }
            }
        }
        if ((iParam0->_fU64) || (iParam0->_fU44 == I))
        {
            if (NOT iParam0->_fU64)
            {
                sub_25286( 0, ref iParam0->_fU68->_fU0, fVar8, ref iParam0->_fU76->_fU0, ref iParam0->_fU76->_fU4, iParam3->_fU8 );
            }
            iVar11 = 5;
            iVar12 = 7;
            iVar10 = 1;
        }
        else
        {
            iVar11 = 4;
            iVar12 = 6;
            iVar10 = 0;
        }
        if ((uParam1^)[I]._fU92)
        {
            if ((iParam0->_fU120) AND (iParam0->_fU44 == I))
            {
                if (iParam0->_fU112 >= 5)
                {
                    sub_30032( ref (uParam1^)[I]._fU8, iParam0, 1, (uParam1^)[I]._fU40, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
                }
                sub_30577( ref (uParam1^)[I]._fU8, iParam0->_fU124, iParam0->_fU128, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
            else
            {
                sub_30577( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU100, (uParam1^)[I]._fU104, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
        }
        else
        {
            iVar13 = 0;
            if ((uParam1^)[I]._fU40)
            {
                iVar13 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU8 );
            }
            else
            {
                iVar13 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( ref (uParam1^)[I]._fU8, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
            }
            sub_30577( ref (uParam1^)[I]._fU8, 0, iVar13, ref iParam0->_fU84->_fU0, fVar8 + iParam0->_fU100, (uParam1^)[I]._fU76._fU0, (uParam1^)[I]._fU76._fU4, ref iParam2->_fU0[iVar11], ref iParam0->_fU84->_fU0, ref iParam0->_fU84->_fU4, (uParam1^)[I]._fU40, iVar9, iVar10, (uParam1^)[I]._fU44, (uParam1^)[I]._fU48 );
        }
        if (iParam0->_fU0 == 2)
        {
            if ((uParam1^)[I]._fU108)
            {
                if ((iParam0->_fU136) AND (iParam0->_fU44 == I))
                {
                    if (iParam0->_fU116 >= 5)
                    {
                        sub_30032( ref (uParam1^)[I]._fU52, iParam0, 0, (uParam1^)[I]._fU68, 0, 0 );
                    }
                    sub_30577( ref (uParam1^)[I]._fU52, iParam0->_fU140, iParam0->_fU144, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
                }
                else
                {
                    sub_30577( ref (uParam1^)[I]._fU52, (uParam1^)[I]._fU116, (uParam1^)[I]._fU120, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
                }
            }
            else
            {
                iVar14 = 0;
                if ((uParam1^)[I]._fU68)
                {
                    iVar14 = GET_LENGTH_OF_LITERAL_STRING( ref (uParam1^)[I]._fU52 );
                }
                else
                {
                    iVar14 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref (uParam1^)[I]._fU52 );
                }
                sub_30577( ref (uParam1^)[I]._fU52, 0, iVar14, ref iParam0->_fU92->_fU0, fVar8 + iParam0->_fU104, (uParam1^)[I]._fU84._fU0, (uParam1^)[I]._fU84._fU4, ref iParam2->_fU0[iVar12], ref iParam0->_fU92->_fU0, ref iParam0->_fU92->_fU4, (uParam1^)[I]._fU68, 0, 0, 0, 0 );
            }
        }
    }
    sub_29096( iParam0, iParam3, -1 );
    return;
}

void sub_30032(unknown uParam0, int iParam1, boolean bParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    if (bParam3)
    {
        iVar8 = GET_LENGTH_OF_LITERAL_STRING( uParam0 );
    }
    else
    {
        iVar8 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL_INS_NUM( uParam0, uParam4, uParam5 );
    }
    if (bParam2)
    {
        if (iParam1->_fU132)
        {
            if (iParam1->_fU128 < iVar8)
            {
                iParam1->_fU124++;
                iParam1->_fU128++;
                iParam1->_fU112 = 0;
            }
            else
            {
                iParam1->_fU132 = 0;
                iParam1->_fU112 = -10;
            }
        }
        else if (iParam1->_fU124 > 0)
        {
            iParam1->_fU124--;
            iParam1->_fU128--;
            iParam1->_fU112 = 0;
        }
        else
        {
            iParam1->_fU132 = 1;
            iParam1->_fU112 = -10;
        }
    }
    else if (iParam1->_fU148)
    {
        if (iParam1->_fU144 < iVar8)
        {
            iParam1->_fU140++;
            iParam1->_fU144++;
            iParam1->_fU116 = 0;
        }
        else
        {
            iParam1->_fU148 = 0;
            iParam1->_fU116 = -10;
        }
    }
    else if (iParam1->_fU140 > 0)
    {
        iParam1->_fU140--;
        iParam1->_fU144--;
        iParam1->_fU116 = 0;
    }
    else
    {
        iParam1->_fU148 = 1;
        iParam1->_fU116 = -10;
    };;;
    return;
}

void sub_30577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4, unknown uParam5, unknown uParam6, int iParam7, unknown uParam8, unknown uParam9, boolean bParam10, boolean bParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    SET_TEXT_FONT( 0 );
    if (IS_JAPANESE_VERSION())
    {
        SET_TEXT_FONT( 2 );
    }
    SET_TEXT_SCALE( uParam5, uParam6 * 0.65000000 );
    SET_TEXT_WRAP( uParam8, uParam9 );
    if (bParam11)
    {
        if (NETWORK_IS_FRIEND_ONLINE( uParam0 ))
        {
            SET_TEXT_COLOUR( sub_16722( iParam7 + 8, 0 ), sub_16722( iParam7 + 8, 1 ), sub_16722( iParam7 + 8, 2 ), sub_16722( iParam7 + 8, 3 ) );
        }
        else if ((uParam12) || (cellphone3Dstructure._fU40 == 2))
        {
            SET_TEXT_COLOUR( 130, 130, 130, sub_16722( iParam7 + 8, 3 ) );
        }
        else
        {
            SET_TEXT_COLOUR( 70, 70, 70, sub_16722( iParam7 + 8, 3 ) );
        }
    }
    else
    {
        SET_TEXT_COLOUR( sub_16722( iParam7 + 8, 0 ), sub_16722( iParam7 + 8, 1 ), sub_16722( iParam7 + 8, 2 ), sub_16722( iParam7 + 8, 3 ) );
    }
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 0 );
    fParam4 *= 0.65000000;
    if (bParam10)
    {
        SET_TEXT_USE_UNDERSCORE( 1 );
        DISPLAY_TEXT_WITH_LITERAL_SUBSTRING( uParam3, fParam4, "STRING", uParam0, uParam1, uParam2 );
        SET_TEXT_USE_UNDERSCORE( 0 );
    }
    else
    {
        DISPLAY_TEXT_SUBSTRING( uParam3, fParam4, uParam0, uParam13, uParam14, uParam1, uParam2 );
    }
    return;
}

void sub_32139()
{
    int I;
    float fVar3;

    for ( I = 0; I <= 5; I++ )
    {
        if (l_U39[I]._fU0)
        {
            if (l_U39[I]._fU72)
            {
                fVar3 = l_U1._fU68._fU4 + (l_U1._fU76._fU4 * I);
                sub_24323( 0, g_U481._fU0[16], 0.12000000, fVar3, 0.14000000, 0.07000000 );
            }
        }
    }
    return;
}

void sub_32494()
{
    int I;
    float fVar3;

    for ( I = 0; I <= 5; I++ )
    {
        if (l_U39[I]._fU0)
        {
            if (sub_32542( l_U39[I]._fU4 ))
            {
                fVar3 = l_U1._fU68._fU4 + (l_U1._fU76._fU4 * I);
                if (fVar3 <= 0.85000000)
                {
                    sub_24323( 0, g_U481._fU0[15], 0.12000000, fVar3, 0.14000000, 0.07000000 );
                }
            }
        }
    }
    return;
}

int sub_32542(unknown uParam0)
{
    if ((sub_8659( 4, g_U569[uParam0] )) == 0)
    {
        return 1;
    }
    return 0;
}

void sub_33788(unknown uParam0)
{
    return;
}

void sub_35652(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    char[16] cVar7;

    iVar5 = GET_BITS_IN_RANGE( cellphone3Dstructure._fU96, 0, 15 );
    iVar6 = GET_BITS_IN_RANGE( cellphone3Dstructure._fU96, 16, 31 );
    iVar6++;
    if (iVar6 >= 120)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 301, ref iVar4 );
        if (iVar4 < 70)
        {
            if (iVar5 > 1)
            {
                iVar5--;
                SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 0, 15, iVar5 );
            }
        }
        else if (iVar4 > 200)
        {
            if (iVar5 < 4)
            {
                iVar5++;
                SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 0, 15, iVar5 );
            }
        }
        SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 16, 31, 0 );
    }
    else
    {
        SET_BITS_IN_RANGE( ref cellphone3Dstructure._fU96, 16, 31, iVar6 );
    }
    switch (cellphone3Dstructure._fU40)
    {
        case 2:
        sub_25286( 0, 0.50000000, 0.06000000, 1.00000000, 0.12000000, iParam1->_fU12 );
        if (NOT cellphone3Dstructure._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_24481( 0, 0.20000000, 0.06000000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_24481( 0, 0.16000000, 0.07000000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_24481( 0, 0.12000000, 0.08000000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_24481( 0, 0.08000000, 0.09000000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (cellphone3Dstructure._fU500)
        {
            sub_16367( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_36241( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_16367( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_36241( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
        default:
        sub_25286( 0, 0.50000000, 0.06500000, 1.00000000, 0.13000000, iParam1->_fU12 );
        if (NOT cellphone3Dstructure._fU540)
        {
            switch (iVar5)
            {
                case 4: sub_24481( 0, 0.20000000, 0.06500000, 0.02500000, 0.08000000, 255, 255, 255, 255 );
                case 3: sub_24481( 0, 0.16000000, 0.07500000, 0.02500000, 0.06000000, 255, 255, 255, 255 );
                case 2: sub_24481( 0, 0.12000000, 0.08500000, 0.02500000, 0.04000000, 255, 255, 255, 255 );
                case 1:
                sub_24481( 0, 0.08000000, 0.09500000, 0.02500000, 0.02000000, 255, 255, 255, 255 );
                break;
            }
        }
        StrCopy( ref cVar7, "DOW_SHORT_DAY_", 16 );
        ConcatString(ref cVar7, GET_CURRENT_DAY_OF_WEEK(), 16);
        if (cellphone3Dstructure._fU500)
        {
            sub_16367( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01500000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_36241( uParam0, 0.79000000, 0.01500000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        else
        {
            sub_16367( 0, 0, uParam0, ref cVar7, 0.58000000, 0.01000000, 0.00000000, 0.62500000, 1, 0, 0, 0, 0, 1 );
            sub_36241( uParam0, 0.79000000, 0.01000000, GET_HOURS_OF_DAY(), GET_MINUTES_OF_DAY() );
        }
        break;
    }
    return;
}

void sub_36241(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    if (iParam3 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_16367( 0, 6, uParam0, ref cVar7, uParam1 - 0.02000000, uParam2, 0.00000000, uParam1 - 0.02000000, 1, 0, 0, iParam3, 0, 1 );
    sub_16367( 0, 0, uParam0, "CP_TIME_SEP", uParam1, uParam2 - 0.01000000, 0.00000000, 1.00000000, 2, 0, 0, 0, 0, 1 );
    if (iParam4 < 10)
    {
        StrCopy( ref cVar7, "CP_TIME_ZERO", 16 );
    }
    else
    {
        StrCopy( ref cVar7, "CP_TIME_NOZERO", 16 );
    }
    sub_16367( 0, 6, uParam0, ref cVar7, uParam1 + 0.02000000, uParam2, 0.00000000, 1.00000000, 0, 0, 0, iParam4, 0, 1 );
    return;
}

int sub_37055(int iParam0)
{
    if (iParam0 == g_U555)
    {
        return 1;
    }
    return 0;
}

void sub_37391(int iParam0, int iParam1)
{
    boolean Result;
    int iVar5;

    if (cellphone3Dstructure._fU380)
    {
        Result = false;
        iVar5 = 0;
        if (cellphone3Dstructure._fU0 == 1004)
        {
            if ((cellphone3Dstructure._fU112 == 4) || (cellphone3Dstructure._fU112 == 3))
            {
                iVar5 = 1;
                if (cellphone3Dstructure._fU116)
                {
                    SHAKE_PAD( 0, 100, 256 );
                    cellphone3Dstructure._fU8._fU0._fU0 += 0.25000000;
                    if (cellphone3Dstructure._fU8._fU0._fU0 >= (cellphone3Dstructure._fU8._fU28 + 0.50000000))
                    {
                        cellphone3Dstructure._fU116 = 0;
                    }
                }
                else
                {
                    SHAKE_PAD( 0, 100, 128 );
                    cellphone3Dstructure._fU8._fU0._fU0 -= 0.25000000;
                    if (cellphone3Dstructure._fU8._fU0._fU0 <= (cellphone3Dstructure._fU8._fU28 - 0.50000000))
                    {
                        cellphone3Dstructure._fU116 = 1;
                    }
                }
            }
        }
        if (iParam0->_fU0 == iParam1)
        {
            sub_37671( iParam0, iVar5 );
            if (iParam1 == 1)
            {
                SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 0 );
            }
            Result = true;
        }
        else if (iParam1 == 1)
        {
            SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN( 1 );
        }
        if ((iParam1 < 5) AND (iParam0->_fU0 < 5))
        {
            sub_38115( iParam0, iParam0->_fU0, iParam1 );
            iParam0->_fU0 = (iParam0->_fU0 * 10) + iParam1;
        }
        else
        {
            sub_37671( iParam0, iVar5 );
        }
        if ((iVar5) || (NOT Result))
        {
            SetPhoneScalePosAndRotation();
        }
    }
    else
    {
        Result = true;
    }
    return Result;
}

void sub_37671(int iParam0, boolean bParam1)
{
    unknown uVar4;

    GET_FRAME_TIME( ref uVar4 );
    if (iParam0->_fU0 > 5)
    {
        sub_37744( ref cellphone3Dstructure._fU8._fU0, (ref ref iParam0->_fU4->_fU0->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU0->_fU8) * uVar4 );
        sub_37744( ref cellphone3Dstructure._fU8._fU12, (ref ref iParam0->_fU4->_fU12->_fU0) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU4) * uVar4, (ref ref iParam0->_fU4->_fU12->_fU8) * uVar4 );
        if (sub_37851( iParam0 ))
        {
            iParam0->_fU0 = iParam0->_fU0 mod 10;
            if (NOT bParam1)
            {
                sub_108( iParam0, iParam0->_fU0 );
            }
        }
    }
    return;
}

void sub_37744(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU0 -= uParam1;
    iParam0->_fU4 -= uParam2;
    iParam0->_fU8 -= uParam3;
    return;
}

int sub_37851(int iParam0)
{
    if ((ref ref iParam0->_fU4->_fU0->_fU4) >= 0.00000000)
    {
        if (cellphone3Dstructure._fU8._fU0._fU4 <= (ref ref iParam0->_fU36->_fU0->_fU4))
        {
            cellphone3Dstructure._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
            return 1;
        }
    }
    else if (cellphone3Dstructure._fU8._fU0._fU4 >= (ref ref iParam0->_fU36->_fU0->_fU4))
    {
        cellphone3Dstructure._fU8._fU0._fU4 = ref ref iParam0->_fU36->_fU0->_fU4;
        return 1;
    }
    return 0;
}

void sub_38115(int iParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    sub_132( uParam1, ref uVar5 );
    sub_132( uParam2, iParam0 + 36 );
    iParam0->_fU68 = 0;
    ref iParam0->_fU4->_fU0 = {(uVar5._fU0._fU0 - (ref ref iParam0->_fU36->_fU0->_fU0)) / 0.18000000, (uVar5._fU0._fU4 - (ref ref iParam0->_fU36->_fU0->_fU4)) / 0.18000000, (uVar5._fU0._fU8 - (ref ref iParam0->_fU36->_fU0->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU12 = {(uVar5._fU12._fU0 - (ref ref iParam0->_fU36->_fU12->_fU0)) / 0.18000000, (uVar5._fU12._fU4 - (ref ref iParam0->_fU36->_fU12->_fU4)) / 0.18000000, (uVar5._fU12._fU8 - (ref ref iParam0->_fU36->_fU12->_fU8)) / 0.18000000};
    ref iParam0->_fU4->_fU24 = (uVar5._fU24 - (ref iParam0->_fU36->_fU24)) / 0.18000000;
    return;
}

void sub_38425(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int Result;
    unknown uVar6;
    int iVar7;
    int iVar8;

    iVar4 = uParam0;
    iVar7 = 19;
    iVar8 = 0;
    GET_MOUSE_WHEEL( ref iVar8 );
    if (IS_PAUSE_MENU_ACTIVE())
    {
        return 19;
    }
    switch (g_U565)
    {
        case 1:
        if (((NOT IS_USING_CONTROLLER()) || (NOT (IS_CONTROL_PRESSED( 2, 22 )))) AND ((iVar8 <= 0) AND ((NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 ))))))
        {
            Result = sub_38591( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((cellphone3Dstructure._fU484) AND (iVar3 >= g_U568))
            {
                g_U565 = 5;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 5:
        if ((iVar8 <= 0) AND ((NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))))
        {
            Result = sub_38591( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= cellphone3Dstructure._fU488)
            {
                cellphone3Dstructure._fU488 = iVar3 + cellphone3Dstructure._fU492;
                return 1;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 0:
        if ((iVar8 >= 0) AND ((NOT (IS_CONTROL_PRESSED( 2, 21 ))) AND ((NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 ))))))
        {
            Result = sub_38591( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if ((cellphone3Dstructure._fU484) AND (iVar3 >= g_U568))
            {
                g_U565 = 4;
                return 19;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 4:
        if ((iVar8 >= 0) AND ((NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))))
        {
            Result = sub_38591( iVar4 );
        }
        else
        {
            GET_GAME_TIMER( ref iVar3 );
            if (iVar3 >= cellphone3Dstructure._fU488)
            {
                cellphone3Dstructure._fU488 = iVar3 + cellphone3Dstructure._fU492;
                return 0;
            }
            else
            {
                return 19;
            }
        }
        break;
        case 2:
        if ((NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))
        {
            Result = sub_38591( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 3:
        if ((NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 ))))
        {
            Result = sub_38591( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 18:
        if ((NOT IS_USING_CONTROLLER()) AND (NOT (IS_CONTROL_PRESSED( 2, 22 ))))
        {
            Result = sub_38591( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        Result = sub_38591( iVar4 );
        break;
    }
    if (Result != 19)
    {
        iVar4 = 0;
    }
    switch (g_U566)
    {
        case 6:
        if ((NOT (IS_MOUSE_BUTTON_PRESSED( 1 ))) AND (((NOT (IS_CONTROL_PRESSED( 2, 181 ))) || (IS_USING_CONTROLLER())) AND ((NOT (IS_CONTROL_PRESSED( 2, 77 ))) || (NOT IS_USING_CONTROLLER()))))
        {
            uVar6 = sub_41171( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        case 7:
        if ((NOT (IS_MOUSE_BUTTON_PRESSED( 2 ))) AND (((NOT (IS_CONTROL_PRESSED( 2, 182 ))) || (IS_USING_CONTROLLER())) AND ((NOT (IS_CONTROL_PRESSED( 2, 78 ))) || (NOT IS_USING_CONTROLLER()))))
        {
            uVar6 = sub_41171( iVar4 );
        }
        else
        {
            return 19;
        }
        break;
        default:
        uVar6 = sub_41171( iVar4 );
        break;
    }
    if (IS_NUMLOCK_ENABLED())
    {
        switch (g_U567)
        {
            case 8:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 82 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 9:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 79 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 10:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 80 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 11:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 81 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 12:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 75 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 13:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 76 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 14:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 77 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 15:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 71 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 16:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 72 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            case 17:
            if (NOT (IS_GAME_KEYBOARD_KEY_PRESSED( 73 )))
            {
                iVar7 = sub_41633( iVar4 );
            }
            else
            {
                return 19;
            }
            break;
            default:
            iVar7 = sub_41633( iVar4 );
            break;
        }
    }
    if (Result != 19)
    {
        return Result;
    }
    if (iVar7 != 19)
    {
        return iVar7;
    }
    return uVar6;
}

void sub_38591(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    GET_MOUSE_WHEEL( ref iVar11 );
    if (IS_CONTROL_PRESSED( 2, 21 ))
    {
        iVar9 = 1;
    }
    if (IS_CONTROL_PRESSED( 2, 22 ))
    {
        iVar10 = 1;
    }
    if ((IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 1 )) || (IS_BUTTON_PRESSED( 0, 11 )))
    {
        bVar3 = true;
    }
    if ((IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 1 )) || (IS_BUTTON_PRESSED( 0, 9 )))
    {
        bVar4 = true;
    }
    if (IS_BUTTON_PRESSED( 0, 8 ))
    {
        bVar5 = true;
    }
    if ((IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 1 )) || (IS_BUTTON_PRESSED( 0, 10 )))
    {
        bVar6 = true;
    }
    if ((cellphone3Dstructure._fU0 != 1003) AND ((cellphone3Dstructure._fU0 != 1002) AND (iVar11 > 0)))
    {
        iVar7 = 1;
    }
    if (((cellphone3Dstructure._fU0 != 1003) AND ((cellphone3Dstructure._fU0 != 1002) AND ((cellphone3Dstructure._fU0 != 1000) AND (iVar11 < 0)))) || ((cellphone3Dstructure._fU0 != 1002) AND ((cellphone3Dstructure._fU0 != 1000) AND (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 1 )))))
    {
        iVar8 = 1;
    }
    if (((cellphone3Dstructure._fU0 == 1002) || (cellphone3Dstructure._fU0 == 1000)) AND (iVar9))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 0;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_38992( 2, uParam0 );
            break;
        }
    }
    else if ((NOT IS_USING_CONTROLLER()) AND (iVar10))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 18;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005: break;
            default:
            sub_38992( 8, uParam0 );
            break;
        }
    }
    else if ((cellphone3Dstructure._fU0 == 1002) AND (iVar10))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        g_U565 = 1;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005: break;
            default:
            sub_38992( 8, uParam0 );
            break;
        }
    }
    else if ((NOT bVar4) AND ((NOT bVar5) AND (bVar3)))
    {
        g_U565 = 3;
        if ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003))
        {
            sub_38992( 7, uParam0 );
        }
    }
    else if ((NOT bVar6) AND ((NOT bVar3) AND ((iVar7) || (bVar4))))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        cellphone3Dstructure._fU488 = 0;
        g_U565 = 1;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005: break;
            default:
            sub_38992( 8, uParam0 );
            break;
        }
    }
    else if ((NOT bVar6) AND ((NOT bVar3) AND ((iVar8) || (bVar5))))
    {
        GET_GAME_TIMER( ref g_U568 );
        g_U568 += 500;
        cellphone3Dstructure._fU488 = 0;
        g_U565 = 0;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_38992( 2, uParam0 );
            break;
        }
    }
    else if ((NOT bVar4) AND ((NOT bVar5) AND (bVar6)))
    {
        g_U565 = 2;
        if ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003))
        {
            sub_38992( 3, uParam0 );
        }
    }
    else
    {
        g_U565 = 19;
    };;;;;;;
    return g_U565;
}

void sub_38992(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (((cellphone3Dstructure._fU0 == 1005) || (NOT cellphone3Dstructure.overrideCellphoneChecks)) AND (uParam1))
    {
        uVar4 = GET_SOUND_ID();
        if (cellphone3Dstructure._fU0 == 1005)
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY_SPEED" );
        }
        else
        {
            PLAY_SOUND_FRONTEND( uVar4, "PHONE_PRESS_KEY" );
        }
        switch (uParam0)
        {
            case 0:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 10.00000000 );
            sub_3083( "\n playing keypadTone 10.0" );
            break;
            case 1:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 0.00000000 );
            sub_3083( "\n playing keypadTone 0.0" );
            break;
            case 2:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 1.00000000 );
            sub_3083( "\n playing keypadTone 1.0" );
            break;
            case 3:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 2.00000000 );
            sub_3083( "\n playing keypadTone 2.0" );
            break;
            case 4:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 3.00000000 );
            sub_3083( "\n playing keypadTone 3.0" );
            break;
            case 5:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 4.00000000 );
            sub_3083( "\n playing keypadTone 4.0" );
            break;
            case 6:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 5.00000000 );
            sub_3083( "\n playing keypadTone 5.0" );
            break;
            case 7:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 6.00000000 );
            sub_3083( "\n playing keypadTone 6.0" );
            break;
            case 8:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 7.00000000 );
            sub_3083( "\n playing keypadTone 7.0" );
            break;
            case 9:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 8.00000000 );
            sub_3083( "\n playing keypadTone 8.0" );
            break;
            case 10:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 9.00000000 );
            sub_3083( "\n playing keypadTone 9.0" );
            break;
            case 11:
            SET_VARIABLE_ON_SOUND( uVar4, "Number", 11.00000000 );
            sub_3083( "\n playing keypadTone 11.0" );
            break;
        }
        RELEASE_SOUND_ID( uVar4 );
    }
    return;
}

void sub_41171(unknown uParam0)
{
    if ((IS_MOUSE_BUTTON_PRESSED( 1 )) || (((IS_CONTROL_PRESSED( 2, 181 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) AND (IS_USING_CONTROLLER()))))
    {
        g_U566 = 6;
        switch (cellphone3Dstructure._fU0)
        {
            case 1005:
            case 1007: break;
            default:
            sub_38992( 6, uParam0 );
            break;
        }
    }
    else if ((IS_MOUSE_BUTTON_PRESSED( 2 )) || (((IS_CONTROL_PRESSED( 2, 182 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 78 )) AND (IS_USING_CONTROLLER()))))
    {
        g_U566 = 7;
        if (cellphone3Dstructure._fU0 != 1007)
        {
            sub_38992( 4, uParam0 );
        }
    }
    else
    {
        g_U566 = 19;
    }
    return g_U566;
}

void sub_41633(unknown uParam0)
{
    g_U567 = 19;
    if ((IS_NUMLOCK_ENABLED()) AND ((cellphone3Dstructure._fU0 == 1009) || (cellphone3Dstructure._fU0 == 1003)))
    {
        if (IS_GAME_KEYBOARD_KEY_PRESSED( 82 ))
        {
            g_U567 = 8;
            sub_38992( 0, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 79 ))
        {
            g_U567 = 9;
            sub_38992( 1, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 80 ))
        {
            g_U567 = 10;
            sub_38992( 2, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 81 ))
        {
            g_U567 = 11;
            sub_38992( 3, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 75 ))
        {
            g_U567 = 12;
            sub_38992( 4, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 76 ))
        {
            g_U567 = 13;
            sub_38992( 5, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 77 ))
        {
            g_U567 = 14;
            sub_38992( 6, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 71 ))
        {
            g_U567 = 15;
            sub_38992( 7, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 72 ))
        {
            g_U567 = 16;
            sub_38992( 8, uParam0 );
        }
        else if (IS_GAME_KEYBOARD_KEY_PRESSED( 73 ))
        {
            g_U567 = 17;
            sub_38992( 9, uParam0 );
        };;;;;;;;;;
    }
    return g_U567;
}

void sub_43972(int iParam0)
{
    if (iParam0 < 1)
    {
        return;
    }
    if (# -NULL-0xc27c84())
    {
        sub_25726( 1, g_U481._fU88[iParam0 - 1], 0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000), 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 0, 200, 0, 255 );
        if (iParam0 != 12)
        {
            sub_24323( 1, g_U481._fU144[0], (0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000)) + 0.04000000, 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.11000000, 0.17000000 );
        }
    }
    else if (# -NULL-0xc27bfa())
    {
        sub_25726( 1, g_U481._fU88[iParam0 - 1], 0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000), 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 0, 200, 0, 255 );
        if ((IS_USING_CONTROLLER()) AND (iParam0 != 12))
        {
            sub_24323( 1, g_U481._fU144[0], (0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000)) + 0.04000000, 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.11000000, 0.17000000 );
        }
    }
    else
    {
        sub_25726( 1, g_U481._fU88[iParam0 - 1], 0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000), 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.24500000, 0.18500000, 108, 130, 187, 255 );
        if (iParam0 != 12)
        {
            sub_24323( 1, g_U481._fU144[0], (0.25000000 + (((iParam0 - 1) mod 3) * 0.25000000)) + 0.04000000, 0.25000000 + (((iParam0 - 1) / 3) * 0.20000000), 0.11000000, 0.17000000 );
        }
    }
    return;
}

void sub_44792(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if ((uParam0^))
    {
        if ((uParam2^) > 0)
        {
            (uParam2^)--;
            (uParam3^)--;
            (uParam1^)--;
        }
    }
    return;
}

void sub_44866(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;

    if (iParam0->_fU44 > 0)
    {
        iParam0->_fU44--;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    else if (iParam0->_fU52)
    {
        if ((iParam0->_fU16[iParam0->_fU44] - 1) >= 0)
        {
            iVar6 = iParam0->_fU16[iParam0->_fU44] - 1;
            for ( I = iParam0->_fU48 - 1; I >= 1; I += -1 )
            {
                iParam0->_fU16[I] = iParam0->_fU16[I - 1];
            }
            sub_45148( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_11027( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5784( iParam0, uParam2, iParam0->_fU44 );
            iParam0->_fU108 = -5;
            iParam0->_fU112 = -5;
            iParam0->_fU116 = -5;
            iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
            iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
            iParam0->_fU132 = 1;
            iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
            iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
            iParam0->_fU148 = 1;
        }
        else
        {
            iParam0->_fU44 = iParam0->_fU48 - 1;
            for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
            {
                iParam0->_fU16[I] = iParam0->_fU4 - (iParam0->_fU48 - I);
                sub_11027( ref (uParam1^)[iParam0->_fU16[I]], ref (uParam2^)[I] );
            }
            sub_5784( iParam0, uParam2, -1 );
        }
    }
    else
    {
        iParam0->_fU44 = iParam0->_fU4 - 1;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    return;
}

void sub_45148(unknown uParam0)
{
    int I;

    for ( I = (uParam0^) - 2; I >= 0; I += -1 )
    {
        (uParam0^)[I + 1] = {(uParam0^)[I]};
    }
    return;
}

void sub_45738(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if ((uParam0^))
    {
        if ((uParam4^) < ((uParam2^) - 1))
        {
            (uParam3^)++;
            (uParam4^)++;
            (uParam1^)++;
        }
    }
    return;
}

void sub_45816(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;

    if (iParam0->_fU44 < (iParam0->_fU48 - 1))
    {
        iParam0->_fU44++;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    else if (iParam0->_fU52)
    {
        if ((iParam0->_fU16[iParam0->_fU44] + 1) < iParam0->_fU4)
        {
            iVar6 = iParam0->_fU16[iParam0->_fU44] + 1;
            for ( I = 0; I <= (iParam0->_fU48 - 2); I++ )
            {
                iParam0->_fU16[I] = iParam0->_fU16[I + 1];
            }
            sub_46110( uParam2 );
            iParam0->_fU16[iParam0->_fU44] = iVar6;
            sub_11027( ref (uParam1^)[iVar6], ref (uParam2^)[iParam0->_fU44] );
            sub_5784( iParam0, uParam2, iParam0->_fU44 );
            iParam0->_fU108 = -5;
            iParam0->_fU112 = -5;
            iParam0->_fU116 = -5;
            iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
            iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
            iParam0->_fU132 = 1;
            iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
            iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
            iParam0->_fU148 = 1;
        }
        else
        {
            iParam0->_fU44 = 0;
            for ( I = 0; I <= (iParam0->_fU48 - 1); I++ )
            {
                iParam0->_fU16[I] = I;
                sub_11027( ref (uParam1^)[I], ref (uParam2^)[I] );
            }
            sub_5784( iParam0, uParam2, -1 );
        }
    }
    else
    {
        iParam0->_fU44 = 0;
        iParam0->_fU108 = -5;
        iParam0->_fU112 = -5;
        iParam0->_fU116 = -5;
        iParam0->_fU124 = (uParam2^)[iParam0->_fU44]._fU100;
        iParam0->_fU128 = (uParam2^)[iParam0->_fU44]._fU104;
        iParam0->_fU132 = 1;
        iParam0->_fU140 = (uParam2^)[iParam0->_fU44]._fU116;
        iParam0->_fU144 = (uParam2^)[iParam0->_fU44]._fU120;
        iParam0->_fU148 = 1;
    }
    iParam0->_fU60 = (uParam2^)[iParam0->_fU44]._fU4;
    return;
}

void sub_46110(unknown uParam0)
{
    int I;

    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        (uParam0^)[I - 1] = {(uParam0^)[I]};
    }
    return;
}

void sub_46855()
{
    if ((# -NULL-0xbdd763()) == 1)
    {
        sub_3706( 1039 );
    }
    else if (IS_PLAYER_SIGNED_IN_LOCALLY() == 1)
    {
        while (NOT (sub_5052( 2 )))
        {
            WAIT( 0 );
            sub_5509();
        }
    }
    else
    {
        sub_3706( 1040 );
    }
    return;
}

void sub_47019()
{
    DO_SCREEN_FADE_OUT_UNHACKED( 0 );
    PAUSE_GAME();
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    SHOW_SIGNIN_UI();
    while (IS_SYSTEM_UI_SHOWING())
    {
        WAIT( 0 );
    }
    UNPAUSE_GAME();
    DO_SCREEN_FADE_IN_UNHACKED( 0 );
    return;
}

void sub_47486(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = iParam0 / 32;
    iVar4 = iParam0 mod 32;
    if (iVar3 > 2)
    {
        return;
    }
    if (iVar4 > 32)
    {
        return;
    }
    SET_BIT( ref g_U10975[iVar3], iVar4 );
    return;
}

void sub_47878(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_47963( g_U569 - 1 );
    return;
}

void sub_47963(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

// Seems to display a message on the phone or something
// uParam1 is a gxt string.
// uParam3 seems to be what this is referencing for the copy of the string from uParam1 or to it.
// uParam4 also seems to be what this is referencing for the copy of the string from uParam1 or to it.
void sub_48299(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5)
{
    int I;

    for ( I = 0; I <= ((uParam4^) - 1); I++ )
    {
        if ((uParam4^)[I]._fU0 == iParam0)
        {
            if (bParam5)
            {
                StrCopy( ref (uParam4^)[I]._fU4, uParam1, 32 );
            }
            else
            {
                StrCopy( ref (uParam4^)[I]._fU48, uParam1, 16 );
            }
        }
    }
    for ( I = 0; I <= ((uParam3^) - 1); I++ )
    {
        if ((uParam3^)[I]._fU4 == iParam0)
        {
            if (bParam5)
            {
                StrCopy( ref (uParam3^)[I]._fU8, uParam1, 32 );
            }
            else
            {
                StrCopy( ref (uParam3^)[I]._fU52, uParam1, 16 );
            }
            sub_5784( uParam2, uParam3, I );
        }
    }
    return;
}

int sub_48940(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_8659( 0, uParam0 );
        if (iVar14 == (sub_8659( 0, uParam6 )))
        {
            iVar15 = sub_8659( 3, uParam0 );
            if (iVar15 == (sub_8659( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_51393(unknown uParam0, unknown uParam1)
{
    return;
}

