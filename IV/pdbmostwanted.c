void main()
{
    l_U0 = 1;
    l_U1 = 0;
    l_U167 = -1;
    l_U220 = 0;
    l_U221 = 0;
    l_U170 = l_U222;
    sub_45();
    SET_MISSION_FLAG( 1 );
    g_U8194++;
    while (true)
    {
        if (l_U221 == 0)
        {
            sub_4401();
        }
        if (IS_CHAR_DEAD( l_U169 ))
        {
            sub_4545();
        }
        if (sub_6479())
        {
            sub_6502();
        }
        switch (l_U221)
        {
            case 0:
            sub_6617();
            sub_7373();
            break;
            case 2:
            sub_7669();
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_45()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    sub_54();
    sub_134();
    if (IS_PLAYER_PLAYING( sub_644() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_687(), ref l_U179 );
        if (NOT (IS_CAR_DEAD( l_U179 )))
        {
            SWITCH_CAR_SIREN( l_U179, 1 );
        }
    }
    if (sub_770())
    {
        uVar2 = {g_U2273[l_U170]._fU60[0]._fU16._fU0, g_U2273[l_U170]._fU60[0]._fU16._fU4, g_U2273[l_U170]._fU60[0]._fU16._fU8};
        PRINT_STRING_IN_STRING_NOW( "MW_GOD_01", ref g_U2273[l_U170]._fU60[0]._fU0, 5000, 1 );
        l_U219 = 0;
    }
    else if (sub_940())
    {
        uVar2 = {g_U2273[l_U170]._fU32._fU16._fU0, g_U2273[l_U170]._fU32._fU16._fU4, g_U2273[l_U170]._fU32._fU16._fU8};
        PRINT_STRING_IN_STRING_NOW( "MW_GOD_01", ref g_U2273[l_U170]._fU32._fU0, 5000, 1 );
        l_U219 = 1;
    }
    GET_WEAPONTYPE_MODEL( sub_1098( l_U170 ), ref uVar5 );
    REQUEST_MODEL( sub_1388( l_U170 ) );
    REQUEST_MODEL( uVar5 );
    REQUEST_MODEL( -196312163 );
    while ((NOT (HAS_MODEL_LOADED( -196312163 ))) || ((NOT (HAS_MODEL_LOADED( uVar5 ))) || (NOT (HAS_MODEL_LOADED( sub_1388( l_U170 ) )))))
    {
        WAIT( 0 );
    }
    LOAD_ALL_OBJECTS_NOW();
    uVar6 = sub_1525( l_U170 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U173 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U174 );
    CREATE_CHAR( 26, sub_1388( l_U170 ), uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U169, 1 );
    SET_CHAR_DECISION_MAKER( l_U169, l_U173 );
    LOAD_COMBAT_DECISION_MAKER( uVar6, ref l_U172 );
    SET_COMBAT_DECISION_MAKER( l_U169, l_U172 );
    GIVE_WEAPON_TO_CHAR( l_U169, sub_1098( l_U170 ), 300, 0 );
    SET_CHAR_ACCURACY( l_U169, sub_1869( l_U170 ) );
    ADD_BLIP_FOR_CHAR( l_U169, ref l_U171 );
    CHANGE_BLIP_DISPLAY( l_U171, 0 );
    if (IS_PLAYER_PLAYING( sub_644() ))
    {
        GIVE_WEAPON_TO_CHAR( sub_687(), 7, 300, 0 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( uVar5 );
    sub_2168();
    return;
}

void sub_54()
{
    return sub_65( 1, 1 );
}

int sub_65(boolean bParam0, unknown uParam1)
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

void sub_134()
{
    l_U182[0] = "MW_BG_GOLDWA";
    l_U182[1] = "MW_BG_DVDPLA";
    l_U182[2] = "MW_BG_XBOX360";
    l_U182[3] = "MW_BG_PS3";
    l_U182[4] = "MW_BG_PSP";
    l_U182[5] = "MW_BG_NDS";
    l_U182[6] = "MW_BG_STEREO";
    l_U182[7] = "MW_BG_MP3PL";
    l_U182[8] = "MW_BG_CLOTHES";
    l_U182[9] = "MW_BG_DIAMOND";
    l_U193[0] = "MW_ST_GOLDWA";
    l_U193[1] = "MW_ST_TOY";
    l_U193[2] = "MW_ST_BOOKS";
    l_U193[3] = "MW_ST_LAPTOP";
    l_U193[4] = "MW_ST_MP3PL";
    l_U193[5] = "MW_ST_CLOTHES";
    l_U193[6] = "MW_ST_NDS";
    l_U193[7] = "MW_ST_SDMAKER";
    l_U193[8] = "MW_ST_ST";
    l_U193[9] = "MW_ST_ST";
    l_U204[0] = 7;
    l_U204[1] = 10;
    l_U204[2] = 12;
    l_U204[3] = 14;
    l_U204[4] = 4;
    l_U204[5] = 14;
    return;
}

void sub_644()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_687()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_770()
{
    return DOES_BLIP_EXIST( g_U8078._fU0 );
}

void sub_940()
{
    return DOES_BLIP_EXIST( g_U8074._fU0 );
}

void sub_1098(unknown uParam0)
{
    int Result;
    unknown uVar4;

    uVar4 = g_U2273[uParam0]._fU196;
    switch (uVar4)
    {
        case 0:
        Result = 0;
        break;
        case 200:
        Result = 7;
        break;
        case 300:
        Result = 12;
        break;
        case 400:
        Result = 7;
        break;
        case 500:
        Result = 7;
        break;
        case 600:
        case 1300:
        Result = 1;
        break;
        case 700:
        Result = 10;
        break;
        case 800:
        Result = 7;
        break;
        case 900:
        Result = 0;
        break;
        case 1000:
        Result = 10;
        break;
        case 1100:
        Result = 0;
        break;
        case 1200:
        Result = 14;
        break;
        case 1400:
        case 1500:
        Result = 12;
        break;
        default:
        Result = 0;
        break;
    }
    return Result;
}

void sub_1388(unknown uParam0)
{
    unknown Result;
    unknown uVar4;

    uVar4 = g_U2273[uParam0]._fU184;
    return Result;
}

int sub_1525(unknown uParam0)
{
    unknown uVar3;

    uVar3 = g_U2273[uParam0]._fU196;
    switch (uVar3)
    {
        case 200: return 7;
        case 300: return 2;
        case 400: return 3;
        case 500: return 9;
        case 600: return 4;
        case 700: return 10;
        case 800: return 1;
        case 900: return 1;
        case 1000: return 10;
        case 1100: return 6;
        case 1200: return 9;
        case 1300: return 7;
        case 1400: return 9;
    }
    return 1;
}

int sub_1869(unknown uParam0)
{
    unknown uVar3;

    uVar3 = g_U2273[uParam0]._fU196;
    switch (uVar3)
    {
        case 0: return 4;
        case 200: return 8;
        case 300: return 12;
        case 400: return 8;
        case 500: return 10;
        case 600: return 15;
        case 700: return 8;
        case 800: return 12;
        case 900: return 5;
        case 1000: return 6;
        case 1100: return 5;
        case 1200: return 14;
        case 1300: return 15;
        case 1400:
        case 1500: return 10;
    }
    return 5;
}

void sub_2168()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int I;
    unknown uVar9;
    int iVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;

    uVar13 = sub_2182( l_U170 );
    switch (uVar13)
    {
        case 200:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref iVar10 );
            for ( I = 0; I <= iVar10; I++ )
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar9 );
            }
        }
        break;
        case 300:
        case 1100:
        case 900:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GET_CHAR_COORDINATES( l_U169, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_CLOSEST_CAR_NODE( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000, 0, 0, ref l_U180 );
            while (l_U180 == nil)
            {
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 50.00000000, 0, 0, ref l_U180 );
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U180 )))
            {
                GET_DRIVER_OF_CAR( l_U180, ref iVar11 );
            }
            if (NOT (iVar11 == nil))
            {
                if (NOT (IS_CHAR_DEAD( iVar11 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( iVar11 );
                    DELETE_CHAR( ref iVar11 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U169 )))
            {
                WARP_CHAR_INTO_CAR( l_U169, l_U180 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1289722222 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1097828879 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 974744810 );
        }
        break;
        case 400:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GET_CHAR_COORDINATES( l_U169, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CREATE_RANDOM_CHAR( uVar2._fU0 - 1.33000000, uVar2._fU4, uVar2._fU8, ref l_U176[0] );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U169, l_U176[0] );
            GENERATE_RANDOM_INT_IN_RANGE( 100, 12000, ref uVar9 );
            SET_CHAR_MONEY( l_U176[0], uVar9 );
            REQUEST_ANIMS( "test_environment" );
            while (NOT (HAVE_ANIMS_LOADED( "test_environment" )))
            {
                WAIT( 0 );
            }
            OPEN_SEQUENCE_TASK( ref l_U211 );
            TASK_PLAY_ANIM( 0, "drugs_deal", "test_environment", 8.00000000, 0, 0, 0, 0, 1250 );
            TASK_STAND_STILL( 0, 2600 );
            CLOSE_SEQUENCE_TASK( l_U211 );
            OPEN_SEQUENCE_TASK( ref l_U212[0] );
            TASK_STAND_STILL( 0, 3000 );
            CLOSE_SEQUENCE_TASK( l_U212[0] );
        }
        break;
        case 500:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GET_CHAR_COORDINATES( l_U169, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CREATE_RANDOM_CHAR( uVar2._fU0 - 2.50000000, uVar2._fU4, uVar2._fU8, ref l_U176[0] );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U169, l_U176[0] );
            GENERATE_RANDOM_INT_IN_RANGE( 100, 12000, ref uVar9 );
            SET_CHAR_MONEY( l_U176[0], uVar9 );
            for ( I = 0; I <= 3; I++ )
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar9 );
                GET_WEAPONTYPE_MODEL( l_U204[uVar9], ref uVar12 );
                REQUEST_MODEL( uVar12 );
                LOAD_ALL_OBJECTS_NOW();
                GIVE_WEAPON_TO_CHAR( l_U169, l_U204[uVar9], 200, 0 );
            }
        }
        break;
        case 600:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 1, 4, ref iVar10 );
            for ( I = 0; I <= iVar10; I++ )
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar9 );
            }
        }
        break;
        case 700:
        case 800:
        case 1000:
        case 1200:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 300000, ref uVar9 );
            SET_CHAR_MONEY( l_U169, uVar9 );
        }
        break;
        case 1300:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GET_CHAR_COORDINATES( l_U169, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CREATE_RANDOM_CHAR( uVar2._fU0 - 2.00000000, uVar2._fU4, uVar2._fU8, ref l_U176[0] );
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U169, l_U176[0] );
            SET_CHAR_DECISION_MAKER( l_U176[0], l_U174 );
            SET_CHAR_HEALTH( l_U176[0], 1400 );
            SET_CHAR_PROOFS( l_U176[0], 1, 1, 1, 0, 0 );
        }
        break;
        case 1400:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GET_CHAR_COORDINATES( l_U169, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            CREATE_RANDOM_CHAR( uVar2._fU0 + 2.00000000, uVar2._fU4, uVar2._fU8, ref l_U176[0] );
            CREATE_RANDOM_CHAR( uVar2._fU0 - 2.00000000, uVar2._fU4, uVar2._fU8, ref l_U176[1] );
            GET_WEAPONTYPE_MODEL( 12, ref uVar12 );
            LOAD_ALL_OBJECTS_NOW();
            for ( I = 0; I <= 1; I++ )
            {
                GIVE_WEAPON_TO_CHAR( l_U176[I], 12, 100, 0 );
                SET_CHAR_DECISION_MAKER( l_U176[I], l_U173 );
                SET_COMBAT_DECISION_MAKER( l_U176[I], l_U172 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U176[I], 23 );
            }
            CREATE_GROUP( 0, ref l_U181, 1 );
            if (DOES_GROUP_EXIST( l_U181 ))
            {
                SET_GROUP_LEADER( l_U181, l_U169 );
                SET_GROUP_MEMBER( l_U181, l_U176[0] );
                SET_GROUP_MEMBER( l_U181, l_U176[1] );
            }
        }
        break;
        case 1500:
        if (NOT (IS_CHAR_DEAD( l_U169 )))
        {
            GET_CHAR_COORDINATES( l_U169, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_CLOSEST_CAR_NODE( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_WEAPONTYPE_MODEL( 12, ref uVar12 );
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 50.00000000, 0, 0, ref l_U180 );
            while (l_U180 == nil)
            {
                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 50.00000000, 0, 0, ref l_U180 );
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U180 )))
            {
                GET_DRIVER_OF_CAR( l_U180, ref iVar11 );
            }
            if (NOT (iVar11 == nil))
            {
                if (NOT (IS_CHAR_DEAD( iVar11 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( iVar11 );
                    DELETE_CHAR( ref iVar11 );
                }
            }
            for ( I = 0; I <= 1; I++ )
            {
                CREATE_CHAR( 26, 869501081, uVar2._fU0 - (3.00000000 * (I + 1)), uVar2._fU4, uVar2._fU8, ref l_U176[I], 1 );
                GIVE_WEAPON_TO_CHAR( l_U176[I], 12, 400, 0 );
                if ((NOT (IS_CHAR_DEAD( l_U176[I] ))) AND (NOT (IS_CAR_DEAD( l_U180 ))))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U176[I], l_U180, I + 1 );
                }
            }
            if (NOT (IS_CAR_DEAD( l_U180 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U169 )))
                {
                    WARP_CHAR_INTO_CAR( l_U169, l_U180 );
                }
            }
        }
        break;
    }
    return;
}

void sub_2182(unknown uParam0)
{
    unknown Result;

    Result = g_U2273[uParam0]._fU196;
    return Result;
}

void sub_4401()
{
    if (IS_PLAYER_PLAYING( sub_644() ))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_687() )))
        {
            sub_4445();
            if (NOT (IS_CAR_DEAD( l_U179 )))
            {
                SWITCH_CAR_SIREN( l_U179, 1 );
            }
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_4445()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_4545()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    PRINT_NOW( "MW_PASS", 3000, 1 );
    sub_4575();
    g_U8090 = 0;
    sub_4445();
    if (NOT (IS_CAR_DEAD( l_U179 )))
    {
        SWITCH_CAR_SIREN( l_U179, 0 );
    }
    ProtectedSet(g_U8195, ProtectedGet(g_U8195) + 1);
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4575()
{
    if ((g_U8083 < g_U2272) AND (g_U8083 < 100))
    {
        g_U2273[g_U8083]._fU180 = 1;
        g_U8083 = -1;
        sub_4635();
    }
    else
    {
        SCRIPT_ASSERT( "ILLEGAL ACCESS TO DATABASE INDEX CAUGHT" );
    }
    return;
}

void sub_4635()
{
    int I;
    int J;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (IS_PLAYER_PLAYING( sub_644() ))
    {
        GET_CHAR_COORDINATES( sub_687(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        uVar8 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    }
    for ( I = 0; I <= (sub_4700() - 1); I++ )
    {
        g_U2273[I]._fU212 = 0;
        if (g_U2273[I]._fU196 < 2000)
        {
            g_U2273[I]._fU148 = {sub_4785( g_U2273[I]._fU196 )};
        }
    }
    for ( I = 0; I <= (sub_4700() - 1); I++ )
    {
        if ((NOT (g_U2273[I]._fU216 == 1)) AND ((sub_5800( uVar8, I )) AND ((NOT g_U2273[I]._fU208) AND (g_U2273[I]._fU196 < 2000))))
        {
            g_U8091[I] = g_U2273[I]._fU196;
        }
        else
        {
            g_U8091[I] = 63536;
        }
    }
    for ( I = 0; I <= (sub_4700() - 1); I++ )
    {
        for ( J = 0; J <= (sub_4700() - 1); J++ )
        {
            if (g_U8091[I] >= g_U8091[J])
            {
                uVar4 = g_U8091[I];
                g_U8091[I] = g_U8091[J];
                g_U8091[J] = uVar4;
            }
        }
    }
    for ( I = 0; I <= 9; I++ )
    {
        g_U8182[I] = sub_6123( g_U8091[I] );
        if (NOT (g_U8182[I] == -1))
        {
            g_U8193++;
        }
    }
    return;
}

void sub_4700()
{
    return g_U2272;
}

void sub_4785(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    Result = {sub_4796( uParam0 )};
    return Result;
}

void sub_4796(unknown uParam0)
{
    char[32] Result;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 200:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 300:
        StrCopy( ref Result, "PD_CRM_GTA", 32 );
        break;
        case 400:
        StrCopy( ref Result, "PD_CRM_DRG", 32 );
        break;
        case 500:
        StrCopy( ref Result, "PD_CRM_AD", 32 );
        break;
        case 600:
        StrCopy( ref Result, "PD_CRM_PROS", 32 );
        break;
        case 700:
        StrCopy( ref Result, "PD_CRM_BA", 32 );
        break;
        case 800:
        StrCopy( ref Result, "PD_CRM_CCF", 32 );
        break;
        case 900:
        StrCopy( ref Result, "PD_CRM_HR", 32 );
        break;
        case 1000:
        StrCopy( ref Result, "PD_CRM_RBT", 32 );
        break;
        case 1100:
        StrCopy( ref Result, "PD_CRM_DWI", 32 );
        break;
        case 1200:
        StrCopy( ref Result, "PD_CRM_DTR", 32 );
        break;
        case 1300:
        StrCopy( ref Result, "PD_CRM_RACK", 32 );
        break;
        case 1400:
        StrCopy( ref Result, "PD_CRM_GRV", 32 );
        break;
        case 1500:
        StrCopy( ref Result, "PD_CRM_GDB", 32 );
        break;
        case 1600:
        StrCopy( ref Result, "PD_CRM_TER", 32 );
        break;
        case 2000:
        StrCopy( ref Result, "PD_CRM_EXT", 32 );
        break;
        case 2100:
        StrCopy( ref Result, "PD_CRM_ML", 32 );
        break;
        case 2200:
        StrCopy( ref Result, "PD_CRM_IFD", 32 );
        break;
        case 2300:
        StrCopy( ref Result, "PD_CRM_AM", 32 );
        break;
        case 2400:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2500:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2600:
        StrCopy( ref Result, "PD_CRM_STDI", 32 );
        break;
        case 2700:
        StrCopy( ref Result, "PD_CRM_RSG", 32 );
        break;
        case 2800:
        StrCopy( ref Result, "PD_CRM_PTD", 32 );
        break;
        case 2900:
        StrCopy( ref Result, "PD_CRM_COKE", 32 );
        break;
        case 3000:
        StrCopy( ref Result, "PD_CRM_IEX", 32 );
        break;
        case 3100:
        StrCopy( ref Result, "PD_CRM_PROST", 32 );
        break;
        case 3200:
        StrCopy( ref Result, "PD_CRM_GRA", 32 );
        break;
        case 3300:
        StrCopy( ref Result, "PD_CRM_SOL", 32 );
        break;
    }
    return Result;
}

int sub_5800(int iParam0, unknown uParam1)
{
    if ((iParam0 == 1) || (iParam0 == 0))
    {
        if ((g_U2273[uParam1]._fU220 == 1) || (g_U2273[uParam1]._fU220 == 0))
        {
            return 1;
        }
    }
    if (g_U2273[uParam1]._fU220 == iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_6123(int iParam0)
{
    int Result;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (IS_PLAYER_PLAYING( sub_644() ))
    {
        GET_CHAR_COORDINATES( sub_687(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        uVar7 = GET_MAP_AREA_FROM_COORDS( uVar4 );
    }
    for ( Result = 0; Result <= (sub_4700() - 1); Result++ )
    {
        if ((sub_5800( uVar7, Result )) AND ((NOT g_U2273[Result]._fU212) AND (g_U2273[Result]._fU196 == iParam0)))
        {
            g_U2273[Result]._fU212 = 1;
            return Result;
        }
    }
    return -1;
}

int sub_6479()
{
    return 0;
}

void sub_6502()
{
    PRINT_NOW( "MW_FAIL", 3000, 1 );
    g_U8083 = -1;
    sub_4445();
    if (NOT (IS_CAR_DEAD( l_U179 )))
    {
        SWITCH_CAR_SIREN( l_U179, 0 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_6617()
{
    int I;

    if (NOT l_U219)
    {
        if (sub_6638( 15 ))
        {
            sub_6782();
            if (NOT (IS_CHAR_DEAD( l_U169 )))
            {
                CHANGE_BLIP_DISPLAY( l_U171, 4 );
                sub_6868();
                l_U221 = 2;
            }
        }
    }
    if (l_U219)
    {
        if (sub_7051( 15 ))
        {
            sub_7195();
            if (NOT (IS_CHAR_DEAD( l_U169 )))
            {
                CHANGE_BLIP_DISPLAY( l_U171, 4 );
                sub_6868();
                l_U221 = 2;
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U169 );
            }
            for ( I = 0; I <= 1; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U176[I] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U176[I] );
                }
            }
        }
    }
    return;
}

int sub_6638(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U8078._fU0 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_687(), g_U8078._fU4._fU0, g_U8078._fU4._fU4, g_U8078._fU4._fU8, 50.00000000, 50.00000000, 15.00000000, 0 ))
        {
            SET_ROUTE( g_U8078._fU0, 0 );
            REMOVE_BLIP( g_U8078._fU0 );
            g_U8078._fU0 = nil;
            return 1;
        }
    }
    return 0;
}

void sub_6782()
{
    SET_ROUTE( g_U8078._fU0, 0 );
    REMOVE_BLIP( g_U8078._fU0 );
    g_U8078._fU0 = nil;
    return;
}

void sub_6868()
{
    unknown uVar2;
    char[16] cVar3;
    unknown uVar7;

    StrCopy( ref cVar3, "MW_", 16 );
    uVar7 = sub_2182( l_U170 );
    ConcatString(ref cVar3, uVar7, 16);
    ConcatString(ref cVar3, "_", 16);
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref uVar2 );
    ConcatString(ref cVar3, 1, 16);
    BEGIN_CAM_COMMANDS( ref l_U220 );
    if (NOT (IS_CHAR_DEAD( l_U169 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( l_U169 )))
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U169, 0, 0, 3000 );
        }
    }
    END_CAM_COMMANDS( ref l_U220 );
    PRINT_NOW( ref cVar3, 3000, 1 );
    return;
}

int sub_7051(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U8074._fU0 ))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_687(), g_U8074._fU4._fU0, g_U8074._fU4._fU4, g_U8074._fU4._fU8, 50.00000000, 50.00000000, 15.00000000, 0 ))
        {
            SET_ROUTE( g_U8074._fU0, 0 );
            REMOVE_BLIP( g_U8074._fU0 );
            g_U8074._fU0 = nil;
            return 1;
        }
    }
    return 0;
}

void sub_7195()
{
    SET_ROUTE( g_U8074._fU0, 0 );
    REMOVE_BLIP( g_U8074._fU0 );
    g_U8074._fU0 = nil;
    return;
}

void sub_7373()
{
    unknown uVar2;

    uVar2 = sub_2182( l_U170 );
    switch (uVar2)
    {
        case 200: break;
        case 300: break;
        case 400:
        case 1200: break;
        case 500: break;
        case 600: break;
        case 700: break;
        case 800: break;
        case 900: break;
        case 1000: break;
        case 1100: break;
        case 1300:
        sub_7557();
        break;
        case 1400: break;
    }
    return;
}

void sub_7557()
{
    if (NOT l_U215)
    {
        if ((NOT (IS_CHAR_DEAD( l_U176[0] ))) AND (NOT (IS_CHAR_DEAD( l_U169 ))))
        {
            TASK_COMBAT( l_U169, l_U176[0] );
        }
        l_U215 = 1;
    }
    return;
}

void sub_7669()
{
    unknown uVar2;

    uVar2 = sub_2182( l_U170 );
    switch (uVar2)
    {
        case 200:
        sub_7811();
        break;
        case 300:
        sub_7834( 0 );
        break;
        case 400:
        case 1200:
        sub_8333();
        break;
        case 500:
        sub_8702();
        break;
        case 600:
        sub_7811();
        break;
        case 700:
        sub_7811();
        break;
        case 800:
        sub_7811();
        break;
        case 900:
        sub_7834( 1 );
        break;
        case 1000:
        sub_7811();
        break;
        case 1100:
        sub_7834( 1 );
        break;
        case 1300:
        sub_8971();
        break;
        case 1400:
        sub_9185();
        break;
        case 1500:
        sub_9290();
        break;
    }
    return;
}

void sub_7811()
{
    return;
}

void sub_7834(boolean bParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT l_U218)
    {
        l_U218 = 1;
    }
    if ((NOT (IS_CAR_DEAD( l_U180 ))) AND (NOT (IS_CHAR_DEAD( l_U169 ))))
    {
        if (NOT l_U216)
        {
            SET_CAR_FORWARD_SPEED( l_U180, 20.00000000 );
            if (bParam0)
            {
                TASK_CAR_DRIVE_WANDER( l_U169, l_U180, 28.00000000, 3 );
            }
            else
            {
                TASK_CAR_DRIVE_WANDER( l_U169, l_U180, 28.00000000, 2 );
            }
            l_U216 = 1;
        }
    }
    if (l_U216)
    {
        if ((IS_PLAYER_PLAYING( sub_644() )) AND ((NOT (IS_CAR_DEAD( l_U180 ))) AND (NOT (IS_CHAR_DEAD( l_U169 )))))
        {
            if (IS_CHAR_SITTING_IN_CAR( l_U169, l_U180 ))
            {
                GET_CHAR_COORDINATES( sub_687(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                GET_CHAR_COORDINATES( l_U169, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if ((VDIST( uVar6, uVar3 )) < 20.00000000)
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( l_U169, 33.00000000 );
                }
                if (((VDIST( uVar6, uVar3 )) < 45.00000000) AND ((VDIST( uVar6, uVar3 )) > 20.00000000))
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( l_U169, 24.00000000 );
                }
                if (((VDIST( uVar6, uVar3 )) < 80.00000000) AND ((VDIST( uVar6, uVar3 )) > 45.00000000))
                {
                    SET_DRIVE_TASK_CRUISE_SPEED( l_U169, 20.00000000 );
                }
            }
            else if (IS_CAR_ON_FIRE( l_U180 ))
            {
                TASK_LEAVE_CAR_AND_FLEE( l_U169, l_U180, 300.00000000, 300.00000000, 20.00000000 );
            }
        }
    }
    return;
}

void sub_8333()
{
    int iVar2;
    int iVar3;

    if (NOT l_U216)
    {
        if ((NOT (IS_CHAR_DEAD( l_U176[0] ))) AND (NOT (IS_CHAR_DEAD( l_U169 ))))
        {
            GET_SCRIPT_TASK_STATUS( l_U169, 29, ref iVar2 );
            if (iVar2 == 7)
            {
                TASK_PERFORM_SEQUENCE( l_U169, l_U211 );
            }
            GET_SCRIPT_TASK_STATUS( l_U176[0], 29, ref iVar3 );
            if (iVar3 == 7)
            {
                TASK_PERFORM_SEQUENCE( l_U176[0], l_U212[0] );
            }
        }
    }
    if (l_U216)
    {
        if (NOT l_U217)
        {
            if ((NOT (IS_CHAR_DEAD( l_U169 ))) AND (IS_PLAYER_PLAYING( sub_644() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_687(), l_U169, 6.00000000, 6.00000000, 0 ))
                {
                    if (NOT (IS_CHAR_STUCK_UNDER_CAR( l_U169 )))
                    {
                        TASK_FLEE_CHAR_ANY_MEANS( l_U169, sub_687(), 1000.00000000, -2, 1, 2500, 500, 0.00000000 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U176[0] )))
                    {
                        if (NOT (IS_CHAR_STUCK_UNDER_CAR( l_U176[0] )))
                        {
                            TASK_SMART_FLEE_CHAR( l_U176[0], sub_687(), 200.00000000, -2 );
                        }
                    }
                    l_U217 = 1;
                }
            }
        }
    }
    return;
}

void sub_8702()
{
    unknown uVar2;

    if (NOT l_U216)
    {
        if ((NOT (IS_CHAR_DEAD( l_U176[0] ))) AND (NOT (IS_CHAR_DEAD( l_U169 ))))
        {
            TASK_COMBAT( l_U169, l_U176[0] );
            l_U216 = 1;
        }
    }
    if (l_U216)
    {
        if (NOT l_U217)
        {
            if ((NOT (IS_CHAR_DEAD( l_U169 ))) AND (IS_PLAYER_PLAYING( sub_644() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_687(), l_U169, 7.00000000, 7.00000000, 3.50000000, 0 ))
                {
                    TASK_COMBAT( l_U169, sub_687() );
                    l_U217 = 1;
                }
            }
        }
    }
    return;
}

void sub_8971()
{
    if (NOT l_U216)
    {
        if ((IS_PLAYER_PLAYING( sub_644() )) AND (NOT (IS_CHAR_DEAD( l_U169 ))))
        {
            if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U169, sub_687() )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U169, sub_687(), 0 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U169 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U169 );
                TASK_COMBAT( l_U169, sub_687() );
                if (NOT (IS_CHAR_DEAD( l_U176[0] )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U176[0] );
                    TASK_SMART_FLEE_CHAR( l_U176[0], l_U169, 150.00000000, -1 );
                }
                l_U216 = 1;
            }
        }
    }
    return;
}

void sub_9185()
{
    if (NOT l_U216)
    {
        if ((NOT (IS_CHAR_DEAD( l_U169 ))) AND (IS_PLAYER_PLAYING( sub_644() )))
        {
            if (NOT (IS_CHAR_STUCK_UNDER_CAR( l_U169 )))
            {
                TASK_COMBAT( l_U169, sub_687() );
                l_U216 = 1;
            }
        }
    }
    return;
}

void sub_9290()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT l_U216)
    {
        if (IS_PLAYER_PLAYING( sub_644() ))
        {
            if (NOT (IS_CHAR_DEAD( l_U169 )))
            {
                if (NOT (IS_CAR_DEAD( l_U180 )))
                {
                    TASK_CAR_DRIVE_WANDER( l_U169, l_U180, 25.00000000, 3 );
                }
            }
            for ( I = 0; I <= 1; I++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U176[I] )))
                {
                    if (NOT (IS_CAR_DEAD( l_U180 )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U176[I], l_U180 ))
                        {
                            if (I == 1)
                            {
                                iVar3 = 1;
                            }
                            TASK_DRIVE_BY( l_U176[I], sub_687(), 0, 0.00000000, 0.00000000, 0.00000000, 500.00000000, 4, iVar3, 30 );
                        }
                    }
                }
            }
        }
        l_U216 = 1;
    }
    if (l_U216)
    {
        if ((NOT (IS_CHAR_DEAD( l_U169 ))) AND (IS_PLAYER_PLAYING( sub_644() )))
        {
            GET_CHAR_COORDINATES( l_U169, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_CHAR_COORDINATES( sub_687(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            if (NOT (IS_CAR_DEAD( l_U180 )))
            {
                if (IS_CHAR_IN_CAR( l_U169, l_U180 ))
                {
                    if ((VDIST( uVar4, uVar7 )) < 20.00000000)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( l_U169, 33.00000000 );
                    }
                    if (((VDIST( uVar4, uVar7 )) < 45.00000000) AND ((VDIST( uVar4, uVar7 )) > 20.00000000))
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( l_U169, 24.00000000 );
                    }
                    if ((VDIST( uVar4, uVar7 )) > 45.00000000)
                    {
                        SET_DRIVE_TASK_CRUISE_SPEED( l_U169, 20.00000000 );
                    }
                }
            }
            if ((VDIST( uVar4, uVar7 )) > 350.00000000)
            {
                sub_6502();
            }
        }
    }
    return;
}

