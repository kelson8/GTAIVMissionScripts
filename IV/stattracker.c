void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U261 = 0;
    l_U273 = 0;
    l_U274 = 0;
    l_U275 = 0;
    l_U276 = 0;
    l_U277 = 0;
    l_U278 = 0;
    l_U279 = 0;
    l_U280 = 0;
    l_U281 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        sub_90();
        sub_2175();
        sub_15729();
        WAIT( 5000 );
    }
    return;
}

void sub_90()
{
    int iVar2;

    iVar2 = GET_INT_STAT( 44 );
    if (iVar2 < 600000)
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_0" );
        }
    }
    else if ((iVar2 < 1200000) AND (iVar2 >= 600000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_1" );
        }
    }
    else if ((iVar2 < 1800000) AND (iVar2 >= 1200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_2" );
        }
    }
    else if ((iVar2 < 3600000) AND (iVar2 >= 1800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_3" );
        }
    }
    else if ((iVar2 < 10800000) AND (iVar2 >= 3600000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_4" );
        }
    }
    else if ((iVar2 < 18000000) AND (iVar2 >= 10800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_5" );
        }
    }
    else if ((iVar2 < 25200000) AND (iVar2 >= 18000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_6" );
        }
    }
    else if ((iVar2 < 36000000) AND (iVar2 >= 25200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_7" );
        }
    }
    else if ((iVar2 < 46800000) AND (iVar2 >= 36000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_8" );
        }
    }
    else if ((iVar2 < 61200000) AND (iVar2 >= 46800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_9" );
        }
    }
    else if ((iVar2 < 75600000) AND (iVar2 >= 61200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_10" );
        }
    }
    else if ((iVar2 < 86400000) AND (iVar2 >= 75600000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_11" );
        }
    }
    else if ((iVar2 < 108000000) AND (iVar2 >= 86400000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_12" );
        }
    }
    else if ((iVar2 < 122400000) AND (iVar2 >= 108000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_13" );
        }
    }
    else if ((iVar2 < 136800000) AND (iVar2 >= 122400000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_14" );
        }
    }
    else if ((iVar2 < 158400000) AND (iVar2 >= 136800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_15" );
        }
    }
    else if ((iVar2 < 172800000) AND (iVar2 >= 158400000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_16" );
        }
    }
    else if ((iVar2 < 187200000) AND (iVar2 >= 172800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_17" );
        }
    }
    else if ((iVar2 < 208800000) AND (iVar2 >= 187200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_18" );
        }
    }
    else if ((iVar2 < 223200000) AND (iVar2 >= 208800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_19" );
        }
    }
    else if ((iVar2 < 244800000) AND (iVar2 >= 223200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_20" );
        }
    }
    else if ((iVar2 < 259200000) AND (iVar2 >= 244800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_21" );
        }
    }
    else if ((iVar2 < 280800000) AND (iVar2 >= 259200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_22" );
        }
    }
    else if ((iVar2 < 295200000) AND (iVar2 >= 280800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_23" );
        }
    }
    else if ((iVar2 < 316800000) AND (iVar2 >= 295200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_24" );
        }
    }
    else if ((iVar2 < 331200000) AND (iVar2 >= 316800000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_25" );
        }
    }
    else if ((iVar2 < 360000000) AND (iVar2 >= 331200000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_26" );
        }
    }
    else if ((iVar2 < 432000000) AND (iVar2 >= 360000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_27" );
        }
    }
    else if ((iVar2 < 504000000) AND (iVar2 >= 432000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_28" );
        }
    }
    else if ((iVar2 < 576000000) AND (iVar2 >= 504000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_29" );
        }
    }
    else if ((iVar2 < 648000000) AND (iVar2 >= 576000000))
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_30" );
        }
    }
    else if (iVar2 >= 648000000)
    {
        if (CAN_THE_STAT_HAVE_STRING( 649 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_31" );
        }
    }
    else if (CAN_THE_STAT_HAVE_STRING( 649 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 649, "Addict_0" );
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return;
}

void sub_2175()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( sub_2184() )))
    {
        if ((NOT (IS_CHAR_IN_ANY_HELI( sub_2184() ))) AND ((NOT (IS_CHAR_IN_ANY_BOAT( sub_2184() ))) AND ((NOT (IS_CHAR_ON_ANY_BIKE( sub_2184() ))) AND (IS_CHAR_IN_ANY_CAR( sub_2184() )))))
        {
            GET_CAR_CHAR_IS_USING( sub_2184(), ref uVar2 );
            sub_2312( uVar2 );
            sub_9729( uVar2 );
            sub_12424( uVar2 );
        }
        else if (IS_CHAR_ON_ANY_BIKE( sub_2184() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2184(), ref uVar2 );
            sub_2312( uVar2 );
            sub_13618( uVar2 );
        }
        else if (IS_CHAR_IN_ANY_BOAT( sub_2184() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2184(), ref uVar2 );
            sub_2312( uVar2 );
            sub_14001( uVar2 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2184() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2184(), ref uVar2 );
            sub_2312( uVar2 );
            sub_14406( uVar2 );
        };;;;
        sub_14679();
        sub_15401();
    }
    return;
}

void sub_2184()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2312(unknown uParam0)
{
    unknown uVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar3 );
        sub_2347( uVar3 );
    }
    return;
}

void sub_2347(int iParam0)
{
    if (iParam0 == 1264341792)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[1], ProtectedGet(l_U101[1]) + 5000);
    }
    else if (iParam0 == 1560980623)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[2], ProtectedGet(l_U101[2]) + 5000);
    }
    else if (iParam0 == 1171614426)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[3], ProtectedGet(l_U101[3]) + 5000);
    }
    else if (iParam0 == -1041692462)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U101[4], ProtectedGet(l_U101[4]) + 5000);
    }
    else if (iParam0 == -682211828)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[5], ProtectedGet(l_U101[5]) + 5000);
    }
    else if (iParam0 == 2053223216)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[6], ProtectedGet(l_U101[6]) + 5000);
    }
    else if (iParam0 == 850991848)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[7], ProtectedGet(l_U101[7]) + 5000);
    }
    else if (iParam0 == -344943009)
    {
        ProtectedSet(l_U243[11], ProtectedGet(l_U243[11]) + 1);
        ProtectedSet(l_U101[8], ProtectedGet(l_U101[8]) + 5000);
    }
    else if (iParam0 == -1830458836)
    {
        ProtectedSet(l_U243[6], ProtectedGet(l_U243[6]) + 1);
        ProtectedSet(l_U210[3], ProtectedGet(l_U210[3]) + 5000);
    }
    else if (iParam0 == 1075851868)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[9], ProtectedGet(l_U101[9]) + 5000);
    }
    else if (iParam0 == -1987130134)
    {
        ProtectedSet(l_U243[2], ProtectedGet(l_U243[2]) + 1);
        ProtectedSet(l_U101[10], ProtectedGet(l_U101[10]) + 5000);
    }
    else if (iParam0 == -1346687836)
    {
        ProtectedSet(l_U243[2], ProtectedGet(l_U243[2]) + 1);
        ProtectedSet(l_U101[11], ProtectedGet(l_U101[11]) + 5000);
    }
    else if (iParam0 == -907477130)
    {
        ProtectedSet(l_U243[2], ProtectedGet(l_U243[2]) + 1);
        ProtectedSet(l_U101[12], ProtectedGet(l_U101[12]) + 5000);
    }
    else if (iParam0 == -713569950)
    {
        ProtectedSet(l_U243[4], ProtectedGet(l_U243[4]) + 1);
        ProtectedSet(l_U101[13], ProtectedGet(l_U101[13]) + 5000);
    }
    else if (iParam0 == 1884962369)
    {
        ProtectedSet(l_U243[4], ProtectedGet(l_U243[4]) + 1);
        ProtectedSet(l_U101[14], ProtectedGet(l_U101[14]) + 5000);
    }
    else if (iParam0 == -960289747)
    {
        ProtectedSet(l_U243[4], ProtectedGet(l_U243[4]) + 1);
        ProtectedSet(l_U101[15], ProtectedGet(l_U101[15]) + 5000);
    }
    else if (iParam0 == 2006918058)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[16], ProtectedGet(l_U101[16]) + 5000);
    }
    else if (iParam0 == -67282078)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[17], ProtectedGet(l_U101[17]) + 5000);
    }
    else if (iParam0 == -2030171296)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[18], ProtectedGet(l_U101[18]) + 5000);
    }
    else if (iParam0 == 1063483177)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U101[19], ProtectedGet(l_U101[19]) + 5000);
    }
    else if (iParam0 == 108773431)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U101[20], ProtectedGet(l_U101[20]) + 5000);
    }
    else if (iParam0 == 162883121)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[21], ProtectedGet(l_U101[21]) + 5000);
    }
    else if (iParam0 == 723973206)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[22], ProtectedGet(l_U101[22]) + 5000);
    }
    else if (iParam0 == -1130810103)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[23], ProtectedGet(l_U101[23]) + 5000);
    }
    else if (iParam0 == 1033245328)
    {
        ProtectedSet(l_U243[5], ProtectedGet(l_U243[5]) + 1);
        ProtectedSet(l_U222[1], ProtectedGet(l_U222[1]) + 5000);
    }
    else if (iParam0 == -1971955454)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[24], ProtectedGet(l_U101[24]) + 5000);
    }
    else if (iParam0 == -685276541)
    {
        ProtectedSet(l_U243[14], ProtectedGet(l_U243[14]) + 1);
        ProtectedSet(l_U101[25], ProtectedGet(l_U101[25]) + 5000);
    }
    else if (iParam0 == -1883002148)
    {
        ProtectedSet(l_U243[14], ProtectedGet(l_U243[14]) + 1);
        ProtectedSet(l_U101[26], ProtectedGet(l_U101[26]) + 5000);
    }
    else if (iParam0 == -276900515)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[27], ProtectedGet(l_U101[27]) + 5000);
    }
    else if (iParam0 == 675415136)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[28], ProtectedGet(l_U101[28]) + 5000);
    }
    else if (iParam0 == -2119578145)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[29], ProtectedGet(l_U101[29]) + 5000);
    }
    else if (iParam0 == -1842748181)
    {
        ProtectedSet(l_U243[12], ProtectedGet(l_U243[12]) + 1);
        ProtectedSet(l_U210[1], ProtectedGet(l_U210[1]) + 5000);
    }
    else if (iParam0 == 1127131465)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[30], ProtectedGet(l_U101[30]) + 5000);
    }
    else if (iParam0 == -1097828879)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U101[31], ProtectedGet(l_U101[31]) + 5000);
    }
    else if (iParam0 == 974744810)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[32], ProtectedGet(l_U101[32]) + 5000);
    }
    else if (iParam0 == 1026055242)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[33], ProtectedGet(l_U101[33]) + 5000);
    }
    else if (iParam0 == 1938952078)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[34], ProtectedGet(l_U101[34]) + 5000);
    }
    else if (iParam0 == 1353720154)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[35], ProtectedGet(l_U101[35]) + 5000);
    }
    else if (iParam0 == 627033353)
    {
        ProtectedSet(l_U243[16], ProtectedGet(l_U243[16]) + 1);
        ProtectedSet(l_U101[36], ProtectedGet(l_U101[36]) + 5000);
    }
    else if (iParam0 == 1491375716)
    {
        ProtectedSet(l_U243[2], ProtectedGet(l_U243[2]) + 1);
        ProtectedSet(l_U101[37], ProtectedGet(l_U101[37]) + 5000);
    }
    else if (iParam0 == 2016857647)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[38], ProtectedGet(l_U101[38]) + 5000);
    }
    else if (iParam0 == 884422927)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[39], ProtectedGet(l_U101[39]) + 5000);
    }
    else if (iParam0 == -341892653)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[40], ProtectedGet(l_U101[40]) + 5000);
    }
    else if (iParam0 == 584879743)
    {
        ProtectedSet(l_U243[6], ProtectedGet(l_U243[6]) + 1);
        ProtectedSet(l_U210[2], ProtectedGet(l_U210[2]) + 5000);
    }
    else if (iParam0 == 486987393)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[41], ProtectedGet(l_U101[41]) + 5000);
    }
    else if (iParam0 == -1289722222)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[42], ProtectedGet(l_U101[42]) + 5000);
    }
    else if (iParam0 == 886934177)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[43], ProtectedGet(l_U101[43]) + 5000);
    }
    else if (iParam0 == 418536135)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U101[44], ProtectedGet(l_U101[44]) + 5000);
    }
    else if (iParam0 == 1269098716)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[45], ProtectedGet(l_U101[45]) + 5000);
    }
    else if (iParam0 == -37030056)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[46], ProtectedGet(l_U101[46]) + 5000);
    }
    else if (iParam0 == 861409633)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U222[2], ProtectedGet(l_U222[2]) + 5000);
    }
    else if (iParam0 == -2124201592)
    {
        ProtectedSet(l_U243[14], ProtectedGet(l_U243[14]) + 1);
        ProtectedSet(l_U101[47], ProtectedGet(l_U101[47]) + 5000);
    }
    else if (iParam0 == 1304597482)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[48], ProtectedGet(l_U101[48]) + 5000);
    }
    else if (iParam0 == -1043459709)
    {
        ProtectedSet(l_U243[5], ProtectedGet(l_U243[5]) + 1);
        ProtectedSet(l_U222[3], ProtectedGet(l_U222[3]) + 5000);
    }
    else if (iParam0 == -1260881538)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[49], ProtectedGet(l_U101[49]) + 5000);
    }
    else if (iParam0 == -310465116)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[50], ProtectedGet(l_U101[50]) + 5000);
    }
    else if (iParam0 == 583100975)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[51], ProtectedGet(l_U101[51]) + 5000);
    }
    else if (iParam0 == 525509695)
    {
        ProtectedSet(l_U243[11], ProtectedGet(l_U243[11]) + 1);
        ProtectedSet(l_U101[52], ProtectedGet(l_U101[52]) + 5000);
    }
    else if (iParam0 == 904750859)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[53], ProtectedGet(l_U101[53]) + 5000);
    }
    else if (iParam0 == 1203311498)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U210[4], ProtectedGet(l_U210[4]) + 5000);
    }
    else if (iParam0 == 148777611)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[54], ProtectedGet(l_U101[54]) + 5000);
    }
    else if (iParam0 == 1911513875)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[55], ProtectedGet(l_U101[55]) + 5000);
    }
    else if (iParam0 == 1348744438)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[56], ProtectedGet(l_U101[56]) + 5000);
    }
    else if (iParam0 == 569305213)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[57], ProtectedGet(l_U101[57]) + 5000);
    }
    else if (iParam0 == -808457413)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[58], ProtectedGet(l_U101[58]) + 5000);
    }
    else if (iParam0 == -909201658)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U210[5], ProtectedGet(l_U210[5]) + 5000);
    }
    else if (iParam0 == -2137348917)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[59], ProtectedGet(l_U101[59]) + 5000);
    }
    else if (iParam0 == -2077743597)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[60], ProtectedGet(l_U101[60]) + 5000);
    }
    else if (iParam0 == -1590284256)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[61], ProtectedGet(l_U101[61]) + 5000);
    }
    else if (iParam0 == 1830407356)
    {
        ProtectedSet(l_U243[12], ProtectedGet(l_U243[12]) + 1);
        ProtectedSet(l_U101[62], ProtectedGet(l_U101[62]) + 5000);
    }
    else if (iParam0 == 131140572)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[63], ProtectedGet(l_U101[63]) + 5000);
    }
    else if (iParam0 == 1376298265)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[64], ProtectedGet(l_U101[64]) + 5000);
    }
    else if (iParam0 == 2046537925)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[65], ProtectedGet(l_U101[65]) + 5000);
    }
    else if (iParam0 == -1627000575)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[66], ProtectedGet(l_U101[66]) + 5000);
    }
    else if (iParam0 == -350085182)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[67], ProtectedGet(l_U101[67]) + 5000);
    }
    else if (iParam0 == -119658072)
    {
        ProtectedSet(l_U243[2], ProtectedGet(l_U243[2]) + 1);
        ProtectedSet(l_U101[68], ProtectedGet(l_U101[68]) + 5000);
    }
    else if (iParam0 == -488123221)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U222[4], ProtectedGet(l_U222[4]) + 5000);
    }
    else if (iParam0 == -1883869285)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[69], ProtectedGet(l_U101[69]) + 5000);
    }
    else if (iParam0 == -1962071130)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[70], ProtectedGet(l_U101[70]) + 5000);
    }
    else if (iParam0 == -1150599089)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[71], ProtectedGet(l_U101[71]) + 5000);
    }
    else if (iParam0 == -1900572838)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[72], ProtectedGet(l_U101[72]) + 5000);
    }
    else if (iParam0 == 1390084576)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[73], ProtectedGet(l_U101[73]) + 5000);
    }
    else if (iParam0 == 1759673526)
    {
        ProtectedSet(l_U243[5], ProtectedGet(l_U243[5]) + 1);
        ProtectedSet(l_U222[5], ProtectedGet(l_U222[5]) + 5000);
    }
    else if (iParam0 == 83136452)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U101[74], ProtectedGet(l_U101[74]) + 5000);
    }
    else if (iParam0 == -845979911)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[75], ProtectedGet(l_U101[75]) + 5000);
    }
    else if (iParam0 == 627094268)
    {
        ProtectedSet(l_U243[14], ProtectedGet(l_U243[14]) + 1);
        ProtectedSet(l_U101[76], ProtectedGet(l_U101[76]) + 5000);
    }
    else if (iParam0 == -1932515764)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[77], ProtectedGet(l_U101[77]) + 5000);
    }
    else if (iParam0 == -227741703)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[78], ProtectedGet(l_U101[78]) + 5000);
    }
    else if (iParam0 == -449022887)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[79], ProtectedGet(l_U101[79]) + 5000);
    }
    else if (iParam0 == 1264386590)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[80], ProtectedGet(l_U101[80]) + 5000);
    }
    else if (iParam0 == -1685021548)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[81], ProtectedGet(l_U101[81]) + 5000);
    }
    else if (iParam0 == 788045382)
    {
        ProtectedSet(l_U243[9], ProtectedGet(l_U243[9]) + 1);
        ProtectedSet(l_U210[6], ProtectedGet(l_U210[6]) + 5000);
    }
    else if (iParam0 == -322343873)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[82], ProtectedGet(l_U101[82]) + 5000);
    }
    else if (iParam0 == 1349725314)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[83], ProtectedGet(l_U101[83]) + 5000);
    }
    else if (iParam0 == 1923400478)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[84], ProtectedGet(l_U101[84]) + 5000);
    }
    else if (iParam0 == 1677715180)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[85], ProtectedGet(l_U101[85]) + 5000);
    }
    else if (iParam0 == 1747439474)
    {
        ProtectedSet(l_U243[2], ProtectedGet(l_U243[2]) + 1);
        ProtectedSet(l_U101[86], ProtectedGet(l_U101[86]) + 5000);
    }
    else if (iParam0 == 1344573448)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[87], ProtectedGet(l_U101[87]) + 5000);
    }
    else if (iParam0 == 1723137093)
    {
        ProtectedSet(l_U243[13], ProtectedGet(l_U243[13]) + 1);
        ProtectedSet(l_U101[88], ProtectedGet(l_U101[88]) + 5000);
    }
    else if (iParam0 == -1961627517)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[89], ProtectedGet(l_U101[89]) + 5000);
    }
    else if (iParam0 == 800869680)
    {
        ProtectedSet(l_U243[4], ProtectedGet(l_U243[4]) + 1);
        ProtectedSet(l_U101[90], ProtectedGet(l_U101[90]) + 5000);
    }
    else if (iParam0 == 1821991593)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U101[91], ProtectedGet(l_U101[91]) + 5000);
    }
    else if (iParam0 == 400514754)
    {
        ProtectedSet(l_U243[5], ProtectedGet(l_U243[5]) + 1);
        ProtectedSet(l_U222[6], ProtectedGet(l_U222[6]) + 5000);
    }
    else if (iParam0 == 970598228)
    {
        ProtectedSet(l_U243[9], ProtectedGet(l_U243[9]) + 1);
        ProtectedSet(l_U101[92], ProtectedGet(l_U101[92]) + 5000);
    }
    else if (iParam0 == -295689028)
    {
        ProtectedSet(l_U243[9], ProtectedGet(l_U243[9]) + 1);
        ProtectedSet(l_U101[93], ProtectedGet(l_U101[93]) + 5000);
    }
    else if (iParam0 == -956048545)
    {
        ProtectedSet(l_U243[4], ProtectedGet(l_U243[4]) + 1);
        ProtectedSet(l_U101[94], ProtectedGet(l_U101[94]) + 5000);
    }
    else if (iParam0 == 1208856469)
    {
        ProtectedSet(l_U243[4], ProtectedGet(l_U243[4]) + 1);
        ProtectedSet(l_U101[95], ProtectedGet(l_U101[95]) + 5000);
    }
    else if (iParam0 == 1917016601)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U101[96], ProtectedGet(l_U101[96]) + 5000);
    }
    else if (iParam0 == 290013743)
    {
        ProtectedSet(l_U243[5], ProtectedGet(l_U243[5]) + 1);
        ProtectedSet(l_U222[7], ProtectedGet(l_U222[7]) + 5000);
    }
    else if (iParam0 == 1064455782)
    {
        ProtectedSet(l_U243[5], ProtectedGet(l_U243[5]) + 1);
        ProtectedSet(l_U222[8], ProtectedGet(l_U222[8]) + 5000);
    }
    else if (iParam0 == -1896659641)
    {
        ProtectedSet(l_U243[7], ProtectedGet(l_U243[7]) + 1);
        ProtectedSet(l_U101[97], ProtectedGet(l_U101[97]) + 5000);
    }
    else if (iParam0 == 2027357303)
    {
        ProtectedSet(l_U243[4], ProtectedGet(l_U243[4]) + 1);
        ProtectedSet(l_U236[3], ProtectedGet(l_U236[3]) + 5000);
    }
    else if (iParam0 == 1534326199)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[98], ProtectedGet(l_U101[98]) + 5000);
    }
    else if (iParam0 == -825837129)
    {
        ProtectedSet(l_U243[10], ProtectedGet(l_U243[10]) + 1);
        ProtectedSet(l_U101[99], ProtectedGet(l_U101[99]) + 5000);
    }
    else if (iParam0 == -1758379524)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[100], ProtectedGet(l_U101[100]) + 5000);
    }
    else if (iParam0 == -583281407)
    {
        ProtectedSet(l_U243[16], ProtectedGet(l_U243[16]) + 1);
        ProtectedSet(l_U101[101], ProtectedGet(l_U101[101]) + 5000);
    }
    else if (iParam0 == -498054846)
    {
        ProtectedSet(l_U243[14], ProtectedGet(l_U243[14]) + 1);
        ProtectedSet(l_U101[102], ProtectedGet(l_U101[102]) + 5000);
    }
    else if (iParam0 == 2006667053)
    {
        ProtectedSet(l_U243[12], ProtectedGet(l_U243[12]) + 1);
        ProtectedSet(l_U101[103], ProtectedGet(l_U101[103]) + 5000);
    }
    else if (iParam0 == 1937616578)
    {
        ProtectedSet(l_U243[15], ProtectedGet(l_U243[15]) + 1);
        ProtectedSet(l_U101[104], ProtectedGet(l_U101[104]) + 5000);
    }
    else if (iParam0 == 1777363799)
    {
        ProtectedSet(l_U243[8], ProtectedGet(l_U243[8]) + 1);
        ProtectedSet(l_U101[105], ProtectedGet(l_U101[105]) + 5000);
    }
    else if (iParam0 == -1099960214)
    {
        ProtectedSet(l_U243[1], ProtectedGet(l_U243[1]) + 1);
        ProtectedSet(l_U101[106], ProtectedGet(l_U101[106]) + 5000);
    }
    else if (iParam0 == -570033273)
    {
        ProtectedSet(l_U243[6], ProtectedGet(l_U243[6]) + 1);
        ProtectedSet(l_U210[7], ProtectedGet(l_U210[7]) + 5000);
    }
    else if (iParam0 == -810318068)
    {
        ProtectedSet(l_U243[2], ProtectedGet(l_U243[2]) + 1);
        ProtectedSet(l_U101[107], ProtectedGet(l_U101[107]) + 5000);
    }
    else if (iParam0 == -1660661558)
    {
        ProtectedSet(l_U243[0], ProtectedGet(l_U243[0]) + 1);
        ProtectedSet(l_U236[1], ProtectedGet(l_U236[1]) + 5000);
    }
    else if (iParam0 == 353883353)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U236[2], ProtectedGet(l_U236[2]) + 5000);
    }
    else if (iParam0 == 837858166)
    {
        ProtectedSet(l_U243[3], ProtectedGet(l_U243[3]) + 1);
        ProtectedSet(l_U236[4], ProtectedGet(l_U236[4]) + 5000);
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return;
}

void sub_9729(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_CAR( uVar4 ))
        {
            for ( I = 0; I <= 107; I++ )
            {
                if (ProtectedGet(l_U101[I]) > ProtectedGet(l_U101[l_U274]))
                {
                    l_U274 = I;
                    l_U278 = I;
                }
            }
            uVar4 = sub_9847( l_U278 );
            if (l_U278 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 653 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 653, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_9847(int iParam0)
{
    if (iParam0 == 1)
    {
        return 1264341792;
    }
    else if (iParam0 == 2)
    {
        return 1560980623;
    }
    else if (iParam0 == 3)
    {
        return 1171614426;
    }
    else if (iParam0 == 4)
    {
        return -1041692462;
    }
    else if (iParam0 == 5)
    {
        return -682211828;
    }
    else if (iParam0 == 6)
    {
        return 2053223216;
    }
    else if (iParam0 == 7)
    {
        return 850991848;
    }
    else if (iParam0 == 8)
    {
        return -344943009;
    }
    else if (iParam0 == 9)
    {
        return 1075851868;
    }
    else if (iParam0 == 10)
    {
        return -1987130134;
    }
    else if (iParam0 == 11)
    {
        return -1346687836;
    }
    else if (iParam0 == 12)
    {
        return -907477130;
    }
    else if (iParam0 == 13)
    {
        return -713569950;
    }
    else if (iParam0 == 14)
    {
        return 1884962369;
    }
    else if (iParam0 == 15)
    {
        return -960289747;
    }
    else if (iParam0 == 16)
    {
        return 2006918058;
    }
    else if (iParam0 == 17)
    {
        return -67282078;
    }
    else if (iParam0 == 18)
    {
        return -2030171296;
    }
    else if (iParam0 == 19)
    {
        return 1063483177;
    }
    else if (iParam0 == 20)
    {
        return 108773431;
    }
    else if (iParam0 == 21)
    {
        return 162883121;
    }
    else if (iParam0 == 22)
    {
        return 723973206;
    }
    else if (iParam0 == 23)
    {
        return -1130810103;
    }
    else if (iParam0 == 24)
    {
        return -1971955454;
    }
    else if (iParam0 == 25)
    {
        return -685276541;
    }
    else if (iParam0 == 26)
    {
        return -1883002148;
    }
    else if (iParam0 == 27)
    {
        return -276900515;
    }
    else if (iParam0 == 28)
    {
        return 675415136;
    }
    else if (iParam0 == 29)
    {
        return -2119578145;
    }
    else if (iParam0 == 30)
    {
        return 1127131465;
    }
    else if (iParam0 == 31)
    {
        return -1097828879;
    }
    else if (iParam0 == 32)
    {
        return 974744810;
    }
    else if (iParam0 == 33)
    {
        return 1026055242;
    }
    else if (iParam0 == 34)
    {
        return 1938952078;
    }
    else if (iParam0 == 35)
    {
        return 1353720154;
    }
    else if (iParam0 == 36)
    {
        return 627033353;
    }
    else if (iParam0 == 37)
    {
        return 1491375716;
    }
    else if (iParam0 == 38)
    {
        return 2016857647;
    }
    else if (iParam0 == 39)
    {
        return 884422927;
    }
    else if (iParam0 == 40)
    {
        return -341892653;
    }
    else if (iParam0 == 41)
    {
        return 486987393;
    }
    else if (iParam0 == 42)
    {
        return -1289722222;
    }
    else if (iParam0 == 43)
    {
        return 886934177;
    }
    else if (iParam0 == 44)
    {
        return 418536135;
    }
    else if (iParam0 == 45)
    {
        return 1269098716;
    }
    else if (iParam0 == 46)
    {
        return -37030056;
    }
    else if (iParam0 == 47)
    {
        return -2124201592;
    }
    else if (iParam0 == 48)
    {
        return 1304597482;
    }
    else if (iParam0 == 49)
    {
        return -1260881538;
    }
    else if (iParam0 == 50)
    {
        return -310465116;
    }
    else if (iParam0 == 51)
    {
        return 583100975;
    }
    else if (iParam0 == 52)
    {
        return 525509695;
    }
    else if (iParam0 == 53)
    {
        return 904750859;
    }
    else if (iParam0 == 54)
    {
        return 148777611;
    }
    else if (iParam0 == 55)
    {
        return 1911513875;
    }
    else if (iParam0 == 56)
    {
        return 1348744438;
    }
    else if (iParam0 == 57)
    {
        return 569305213;
    }
    else if (iParam0 == 58)
    {
        return -808457413;
    }
    else if (iParam0 == 59)
    {
        return -2137348917;
    }
    else if (iParam0 == 60)
    {
        return -2077743597;
    }
    else if (iParam0 == 61)
    {
        return -1590284256;
    }
    else if (iParam0 == 62)
    {
        return 1830407356;
    }
    else if (iParam0 == 63)
    {
        return 131140572;
    }
    else if (iParam0 == 64)
    {
        return 1376298265;
    }
    else if (iParam0 == 65)
    {
        return 2046537925;
    }
    else if (iParam0 == 66)
    {
        return -1627000575;
    }
    else if (iParam0 == 67)
    {
        return -350085182;
    }
    else if (iParam0 == 68)
    {
        return -119658072;
    }
    else if (iParam0 == 69)
    {
        return -1883869285;
    }
    else if (iParam0 == 70)
    {
        return -1962071130;
    }
    else if (iParam0 == 71)
    {
        return -1150599089;
    }
    else if (iParam0 == 72)
    {
        return -1900572838;
    }
    else if (iParam0 == 73)
    {
        return 1390084576;
    }
    else if (iParam0 == 74)
    {
        return 83136452;
    }
    else if (iParam0 == 75)
    {
        return -845979911;
    }
    else if (iParam0 == 76)
    {
        return 627094268;
    }
    else if (iParam0 == 77)
    {
        return -1932515764;
    }
    else if (iParam0 == 78)
    {
        return -227741703;
    }
    else if (iParam0 == 79)
    {
        return -449022887;
    }
    else if (iParam0 == 80)
    {
        return 1264386590;
    }
    else if (iParam0 == 81)
    {
        return -1685021548;
    }
    else if (iParam0 == 82)
    {
        return -322343873;
    }
    else if (iParam0 == 83)
    {
        return 1349725314;
    }
    else if (iParam0 == 84)
    {
        return 1923400478;
    }
    else if (iParam0 == 85)
    {
        return 1677715180;
    }
    else if (iParam0 == 86)
    {
        return 1747439474;
    }
    else if (iParam0 == 87)
    {
        return 1344573448;
    }
    else if (iParam0 == 88)
    {
        return 1723137093;
    }
    else if (iParam0 == 89)
    {
        return -1961627517;
    }
    else if (iParam0 == 90)
    {
        return 800869680;
    }
    else if (iParam0 == 91)
    {
        return 1821991593;
    }
    else if (iParam0 == 92)
    {
        return 970598228;
    }
    else if (iParam0 == 93)
    {
        return -295689028;
    }
    else if (iParam0 == 94)
    {
        return -956048545;
    }
    else if (iParam0 == 95)
    {
        return 1208856469;
    }
    else if (iParam0 == 96)
    {
        return 1917016601;
    }
    else if (iParam0 == 97)
    {
        return -1896659641;
    }
    else if (iParam0 == 98)
    {
        return 1534326199;
    }
    else if (iParam0 == 99)
    {
        return -825837129;
    }
    else if (iParam0 == 100)
    {
        return -1758379524;
    }
    else if (iParam0 == 101)
    {
        return -583281407;
    }
    else if (iParam0 == 102)
    {
        return -498054846;
    }
    else if (iParam0 == 103)
    {
        return 2006667053;
    }
    else if (iParam0 == 104)
    {
        return 1937616578;
    }
    else if (iParam0 == 105)
    {
        return 1777363799;
    }
    else if (iParam0 == 106)
    {
        return -1099960214;
    }
    else if (iParam0 == 107)
    {
        return -810318068;
    };;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    return 0;
}

void sub_12424(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    int I;
    string sVar6;

    sVar6 = "colour_0";
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COLOURS( uParam0, ref iVar3, ref uVar4 );
        if ((iVar3 == 1) || (iVar3 == 0))
        {
            l_U262[0]++;
        }
        else if ((iVar3 < 27) AND (iVar3 > 1))
        {
            l_U262[1]++;
        }
        else if ((iVar3 < 50) AND (iVar3 >= 27))
        {
            l_U262[2]++;
        }
        else if ((iVar3 < 62) AND (iVar3 >= 50))
        {
            l_U262[3]++;
        }
        else if ((iVar3 < 89) AND (iVar3 >= 62))
        {
            l_U262[4]++;
        }
        else if ((iVar3 < 99) AND (iVar3 >= 89))
        {
            l_U262[5]++;
        }
        else if ((iVar3 < 102) AND (iVar3 >= 99))
        {
            l_U262[6]++;
        }
        else if ((iVar3 < 112) AND (iVar3 >= 102))
        {
            l_U262[7]++;
        }
        else if ((iVar3 < 124) AND (iVar3 >= 112))
        {
            l_U262[8]++;
        }
        else if (iVar3 == 124)
        {
            l_U262[6]++;
        }
        else if (iVar3 == 125)
        {
            l_U262[2]++;
        }
        else if (iVar3 == 126)
        {
            l_U262[3]++;
        }
        else if (iVar3 == 127)
        {
            l_U262[5]++;
        }
        else if (iVar3 == 128)
        {
            l_U262[4]++;
        }
        else if (iVar3 == 129)
        {
            l_U262[2]++;
        }
        else if (iVar3 == 130)
        {
            l_U262[7]++;
        }
        else if (iVar3 == 131)
        {
            l_U262[9]++;
        }
        else if (iVar3 == 132)
        {
            l_U262[5]++;
        };;;;;;;;;;;;;;;;;;
        for ( I = 0; I <= 9; I++ )
        {
            if (l_U262[I] > l_U262[l_U273])
            {
                l_U273 = I;
            }
        }
        if (l_U262[l_U273] > 0)
        {
            if (l_U273 == 0)
            {
                sVar6 = "colour_1";
            }
            else if (l_U273 == 1)
            {
                sVar6 = "colour_2";
            }
            else if (l_U273 == 2)
            {
                sVar6 = "colour_3";
            }
            else if (l_U273 == 3)
            {
                sVar6 = "colour_4";
            }
            else if (l_U273 == 4)
            {
                sVar6 = "colour_5";
            }
            else if (l_U273 == 5)
            {
                sVar6 = "colour_6";
            }
            else if (l_U273 == 6)
            {
                sVar6 = "colour_7";
            }
            else if (l_U273 == 7)
            {
                sVar6 = "colour_8";
            }
            else if (l_U273 == 8)
            {
                sVar6 = "colour_9";
            }
            else if (l_U273 == 9)
            {
                sVar6 = "colour_10";
            }
            else
            {
                sVar6 = "colour_0";
            };;;;;;;;;;
        }
        else
        {
            sVar6 = "colour_0";
        }
        if (CAN_THE_STAT_HAVE_STRING( 659 ))
        {
            REGISTER_STRING_FOR_FRONTEND_STAT( 659, sVar6 );
        }
    }
    return;
}

void sub_13618(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_BIKE( uVar4 ))
        {
            for ( I = 0; I <= 10; I++ )
            {
                if (ProtectedGet(l_U210[I]) > ProtectedGet(l_U210[l_U275]))
                {
                    l_U275 = I;
                    l_U279 = I;
                }
            }
            uVar4 = sub_13734( l_U279 );
            if (l_U279 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 654 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 654, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_13734(int iParam0)
{
    if (iParam0 == 1)
    {
        return -1842748181;
    }
    else if (iParam0 == 2)
    {
        return 584879743;
    }
    else if (iParam0 == 4)
    {
        return 1203311498;
    }
    else if (iParam0 == 5)
    {
        return -909201658;
    }
    else if (iParam0 == 6)
    {
        return 788045382;
    }
    else if (iParam0 == 7)
    {
        return -570033273;
    }
    else if (iParam0 == 3)
    {
        return -1830458836;
    };;;;;;;
    return 0;
}

void sub_14001(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_BOAT( uVar4 ))
        {
            for ( I = 0; I <= 12; I++ )
            {
                if (ProtectedGet(l_U222[I]) > ProtectedGet(l_U222[l_U276]))
                {
                    l_U276 = I;
                    l_U280 = I;
                }
            }
            uVar4 = sub_14117( l_U280 );
            if (l_U280 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 655 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 655, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_14117(int iParam0)
{
    if (iParam0 == 1)
    {
        return 1033245328;
    }
    else if (iParam0 == 2)
    {
        return 861409633;
    }
    else if (iParam0 == 4)
    {
        return -488123221;
    }
    else if (iParam0 == 5)
    {
        return 1759673526;
    }
    else if (iParam0 == 3)
    {
        return -1043459709;
    }
    else if (iParam0 == 6)
    {
        return 400514754;
    }
    else if (iParam0 == 7)
    {
        return 290013743;
    }
    else if (iParam0 == 8)
    {
        return 1064455782;
    };;;;;;;;
    return 0;
}

void sub_14406(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_MODEL( uParam0, ref uVar4 );
        if (IS_THIS_MODEL_A_HELI( uVar4 ))
        {
            for ( I = 0; I <= 5; I++ )
            {
                if (ProtectedGet(l_U236[I]) > ProtectedGet(l_U236[l_U277]))
                {
                    l_U277 = I;
                    l_U281 = I;
                }
            }
            uVar4 = sub_14522( l_U281 );
            if (l_U281 != 0)
            {
                if (CAN_THE_STAT_HAVE_STRING( 656 ))
                {
                    REGISTER_STRING_FOR_FRONTEND_STAT( 656, GET_DISPLAY_NAME_FROM_VEHICLE_MODEL( uVar4 ) );
                }
            }
        }
    }
    return;
}

int sub_14522(int iParam0)
{
    if (iParam0 == 1)
    {
        return -1660661558;
    }
    else if (iParam0 == 2)
    {
        return 353883353;
    }
    else if (iParam0 == 4)
    {
        return 837858166;
    }
    else if (iParam0 == 3)
    {
        return 2027357303;
    };;;;
    return 0;
}

void sub_14679()
{
    string sVar2;
    int I;

    sVar2 = "plyimage_0";
    for ( I = 0; I <= 16; I++ )
    {
        if (ProtectedGet(l_U243[I]) > ProtectedGet(l_U243[l_U261]))
        {
            l_U261 = I;
        }
    }
    if (ProtectedGet(l_U243[l_U261]) > 0)
    {
        if (l_U261 == 0)
        {
            sVar2 = "plyimage_1";
        }
        else if (l_U261 == 1)
        {
            sVar2 = "plyimage_2";
        }
        else if (l_U261 == 2)
        {
            sVar2 = "plyimage_3";
        }
        else if (l_U261 == 3)
        {
            sVar2 = "plyimage_4";
        }
        else if (l_U261 == 4)
        {
            sVar2 = "plyimage_5";
        }
        else if (l_U261 == 5)
        {
            sVar2 = "plyimage_6";
        }
        else if (l_U261 == 6)
        {
            sVar2 = "plyimage_7";
        }
        else if (l_U261 == 7)
        {
            sVar2 = "plyimage_8";
        }
        else if (l_U261 == 8)
        {
            sVar2 = "plyimage_9";
        }
        else if (l_U261 == 9)
        {
            sVar2 = "plyimage_10";
        }
        else if (l_U261 == 10)
        {
            sVar2 = "plyimage_11";
        }
        else if (l_U261 == 11)
        {
            sVar2 = "plyimage_12";
        }
        else if (l_U261 == 12)
        {
            sVar2 = "plyimage_13";
        }
        else if (l_U261 == 13)
        {
            sVar2 = "plyimage_14";
        }
        else if (l_U261 == 14)
        {
            sVar2 = "plyimage_15";
        }
        else if (l_U261 == 15)
        {
            sVar2 = "plyimage_16";
        }
        else if (l_U261 == 16)
        {
            sVar2 = "plyimage_17";
        }
        else
        {
            sVar2 = "plyimage_0";
        };;;;;;;;;;;;;;;;;
    }
    else
    {
        sVar2 = "plyimage_0";
    }
    if (CAN_THE_STAT_HAVE_STRING( 658 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 658, sVar2 );
    }
    return;
}

void sub_15401()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    string sVar5;
    int I;

    sVar5 = "vehtype_0";
    for ( I = 0; I <= 107; I++ )
    {
        if (ProtectedGet(l_U101[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U101[I]);
            sVar5 = "vehtype_1";
        }
    }
    for ( I = 0; I <= 10; I++ )
    {
        if (ProtectedGet(l_U210[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U210[I]);
            sVar5 = "vehtype_2";
        }
    }
    for ( I = 0; I <= 12; I++ )
    {
        if (ProtectedGet(l_U222[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U222[I]);
            sVar5 = "vehtype_3";
        }
    }
    for ( I = 0; I <= 5; I++ )
    {
        if (ProtectedGet(l_U236[I]) > iVar2)
        {
            iVar2 = ProtectedGet(l_U236[I]);
            sVar5 = "vehtype_4";
        }
    }
    if (CAN_THE_STAT_HAVE_STRING( 652 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 652, sVar5 );
    }
    return;
}

void sub_15729()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    float fVar11;
    string sVar12;

    sVar12 = "Not moved";
    iVar2 = GET_INT_STAT( 80 );
    iVar3 = GET_INT_STAT( 81 );
    iVar4 = GET_INT_STAT( 77 );
    iVar5 = GET_INT_STAT( 79 );
    iVar6 = GET_INT_STAT( 78 );
    iVar7 = GET_INT_STAT( 76 );
    iVar9 = GET_INT_STAT( 86 );
    iVar10 = GET_INT_STAT( 85 );
    fVar11 = TO_FLOAT( ((((((iVar2 + iVar3) + iVar4) + iVar5) + iVar6) + iVar7) + iVar9) + iVar10 );
    fVar11 *= 0.00100000;
    if (fVar11 == 0)
    {
        sVar12 = "plyimage_0";
    }
    else if ((fVar11 > 0) AND (fVar11 < 2))
    {
        sVar12 = "distan_0";
    }
    else if ((fVar11 < 5) AND (fVar11 >= 2))
    {
        sVar12 = "distan_1";
    }
    else if ((fVar11 < 13.50000000) AND (fVar11 >= 5))
    {
        sVar12 = "distan_2";
    }
    else if ((fVar11 < 50) AND (fVar11 >= 13.50000000))
    {
        sVar12 = "distan_3";
    }
    else if ((fVar11 < 82) AND (fVar11 >= 50))
    {
        sVar12 = "distan_4";
    }
    else if ((fVar11 < 228) AND (fVar11 >= 82))
    {
        sVar12 = "distan_5";
    }
    else if ((fVar11 < 590) AND (fVar11 >= 228))
    {
        sVar12 = "distan_6";
    }
    else if ((fVar11 < 720) AND (fVar11 >= 590))
    {
        sVar12 = "distan_7";
    }
    else if ((fVar11 < 1092) AND (fVar11 >= 720))
    {
        sVar12 = "distan_8";
    }
    else if ((fVar11 < 2239) AND (fVar11 >= 1092))
    {
        sVar12 = "distan_9";
    }
    else if ((fVar11 < 6744) AND (fVar11 >= 2239))
    {
        sVar12 = "distan_10";
    }
    else if ((fVar11 < 10357) AND (fVar11 >= 6744))
    {
        sVar12 = "distan_11";
    }
    else if ((fVar11 < 25000) AND (fVar11 >= 10357))
    {
        sVar12 = "distan_12";
    }
    else if ((fVar11 < 50000) AND (fVar11 >= 25000))
    {
        sVar12 = "distan_13";
    }
    else if ((fVar11 < 99786) AND (fVar11 >= 50000))
    {
        sVar12 = "distan_14";
    }
    else if ((fVar11 < 238900) AND (fVar11 >= 99786))
    {
        sVar12 = "distan_15";
    }
    else if (fVar11 >= 238900)
    {
        sVar12 = "distan_17";
    }
    else
    {
        sVar12 = "distan_0";
    };;;;;;;;;;;;;;;;;;
    if (CAN_THE_STAT_HAVE_STRING( 657 ))
    {
        REGISTER_STRING_FOR_FRONTEND_STAT( 657, sVar12 );
    }
    return;
}

