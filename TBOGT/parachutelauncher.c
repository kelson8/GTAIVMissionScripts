void main()
{
    int iVar2;
    int iVar3;
    int I;
    int iVar5;
    float fVar6;
    int iVar7;
    int iVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U35 = 0;
    l_U36 = 0;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U43 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (true)
    {
        WAIT( 0 );
        if ((g_U2799) || (g_U2792))
        {
            if (DOES_OBJECT_EXIST( l_U40 ))
            {
                DELETE_OBJECT( ref l_U40 );
            }
            if (NOT g_U2799)
            {
                if (g_U2692[0]._fU56)
                {
                    if ((g_U2692[0]._fU4 == 1) || (g_U2692[0]._fU4 == 0))
                    {
                        if (NOT (IS_CHAR_INJURED( sub_196() )))
                        {
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_196(), 41 )))
                            {
                                GIVE_WEAPON_TO_CHAR( sub_196(), 41, 1, 0 );
                            }
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( sub_196() )))
            {
                if (HAS_CHAR_GOT_WEAPON( sub_196(), 41 ))
                {
                    REMOVE_WEAPON_FROM_CHAR( sub_196(), 41 );
                }
            }
            sub_346();
            SET_DRAW_PLAYER_COMPONENT( 8, 0 );
        }
        if (NOT (IS_CHAR_INJURED( sub_196() )))
        {
            if (NOT l_U36)
            {
                if (NOT (DOES_PICKUP_EXIST( l_U6[0] )))
                {
                    if (g_U15811[65])
                    {
                        sub_791();
                        l_U36 = 1;
                    }
                }
            }
            else
            {
                sub_2098();
            }
            if (NOT l_U37)
            {
                if (NOT (DOES_PICKUP_EXIST( l_U32 )))
                {
                    if (g_U42974)
                    {
                        sub_2241();
                        l_U37 = 1;
                    }
                }
            }
            else if (HAS_PICKUP_BEEN_COLLECTED( l_U32 ))
            {
                if (NOT (HAS_CHAR_GOT_WEAPON( sub_196(), 41 )))
                {
                    GIVE_WEAPON_TO_CHAR( sub_196(), 41, 1, 0 );
                    g_U2798 = 1;
                }
            }
            if (NOT l_U39)
            {
                if (NOT (DOES_PICKUP_EXIST( l_U34 )))
                {
                    if (g_U15811[4])
                    {
                        sub_2453();
                        l_U39 = 1;
                    }
                }
            }
            else if (HAS_PICKUP_BEEN_COLLECTED( l_U34 ))
            {
                if (NOT (HAS_CHAR_GOT_WEAPON( sub_196(), 41 )))
                {
                    GIVE_WEAPON_TO_CHAR( sub_196(), 41, 1, 0 );
                }
            }
            if (NOT l_U38)
            {
                if (NOT (DOES_PICKUP_EXIST( l_U33 )))
                {
                    if (g_U15811[65])
                    {
                        iVar2 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "yusuf2" );
                        if (iVar2 == 0)
                        {
                            sub_2657();
                            l_U38 = 1;
                        }
                    }
                }
            }
            else
            {
                iVar2 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "yusuf2" );
                if (iVar2 == 0)
                {
                    if (HAS_PICKUP_BEEN_COLLECTED( l_U33 ))
                    {
                        if (NOT (HAS_CHAR_GOT_WEAPON( sub_196(), 41 )))
                        {
                            GIVE_WEAPON_TO_CHAR( sub_196(), 41, 1, 0 );
                        }
                    }
                }
                else if (DOES_PICKUP_EXIST( l_U33 ))
                {
                    REMOVE_PICKUP( l_U33 );
                    l_U38 = 0;
                }
            }
        }
        if (NOT g_U2795)
        {
            if (NOT sub_2869())
            {
                sub_3087();
            }
            if (NOT g_U2787)
            {
                SET_DRAW_PLAYER_COMPONENT( 8, 0 );
            }
        }
        iVar3 = 0;
        I = 0;
        for ( I = 0; I < g_U2692; I++ )
        {
            if (g_U2692[I]._fU56)
            {
                if ((NOT (HAVE_ANIMS_LOADED( "PARACHUTE" ))) || (NOT (HAS_MODEL_LOADED( 1490460832 ))))
                {
                    sub_3254();
                }
                else if (NOT g_U2692[I]._fU60)
                {
                    if (I == 0)
                    {
                        if (DOES_OBJECT_EXIST( l_U40 ))
                        {
                            DELETE_OBJECT( ref l_U40 );
                        }
                        if (HAS_SCRIPT_LOADED( "parachute_player" ))
                        {
                            START_NEW_SCRIPT( "parachute_player", 512 );
                        }
                        else
                        {
                            REQUEST_SCRIPT( "parachute_player" );
                        }
                    }
                    else if (HAS_SCRIPT_LOADED( "parachute_ai" ))
                    {
                        START_NEW_SCRIPT_WITH_ARGS( "parachute_ai", ref I, 1, 512 );
                    }
                    else
                    {
                        REQUEST_SCRIPT( "parachute_ai" );
                    }
                }
                iVar3++;
            }
        }
        if (iVar3 == 0)
        {
            if (NOT (DOES_OBJECT_EXIST( l_U40 )))
            {
                sub_3586();
            }
        }
        else
        {
            sub_3254();
        }
        if (NOT (IS_CHAR_INJURED( sub_196() )))
        {
            GET_CURRENT_CHAR_WEAPON( sub_196(), ref iVar5 );
            if (iVar5 == 41)
            {
                if ((NOT g_U2800) AND (sub_3730( 4, 0 )))
                {
                    if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND ((l_U42 < 2) AND (NOT l_U43)))
                    {
                        PRINT_HELP( "PARA_EQUIP" );
                        l_U43 = 1;
                        l_U42++;
                    }
                    if (IS_CONTROL_JUST_PRESSED( 0, 4 ))
                    {
                        REMOVE_WEAPON_FROM_CHAR( sub_196(), 41 );
                        GIVE_WEAPON_TO_CHAR( sub_196(), 0, 0, 1 );
                        sub_4161( sub_196() );
                    }
                }
            }
            else if (l_U43)
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PARA_EQUIP" ))
                {
                    CLEAR_HELP();
                }
                l_U43 = 0;
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_196() )))
        {
            if (g_U2692[0]._fU56)
            {
                if (NOT g_U2787)
                {
                    sub_4767( 1 );
                }
                if (NOT (DOES_OBJECT_EXIST( l_U40 )))
                {
                    if ((g_U2692[0]._fU4 == 8) || ((g_U2692[0]._fU4 == 7) || ((g_U2692[0]._fU4 == 5) || (g_U2692[0]._fU4 == 3))))
                    {
                        sub_4976();
                    }
                }
            }
            else if (DOES_OBJECT_EXIST( l_U40 ))
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT (IS_CHAR_IN_WATER( sub_196() )))
                    {
                        if (HAVE_ANIMS_LOADED( "PARACHUTE" ))
                        {
                            if (g_U2787)
                            {
                                if (NOT l_U35)
                                {
                                    if ((NOT (IS_CHAR_IN_ANY_CAR( sub_196() ))) AND (sub_3730( 4, 0 )))
                                    {
                                        sub_5286();
                                        l_U35 = 1;
                                    }
                                }
                                else if (l_U41 == 0)
                                {
                                    SET_DRAW_PLAYER_COMPONENT( 8, 0 );
                                    if (IS_OBJECT_PLAYING_ANIM( l_U40, "obj_chute_off", "PARACHUTE" ))
                                    {
                                        GET_OBJECT_ANIM_CURRENT_TIME( l_U40, "obj_chute_off", "PARACHUTE", ref fVar6 );
                                        if (fVar6 > 0.95000000)
                                        {
                                            DETACH_OBJECT( l_U40, 1 );
                                            PLAY_OBJECT_ANIM( l_U40, "obj_chute_off_idle", "PARACHUTE", 8.00000000, 1, 0 );
                                            GET_GAME_TIMER( ref l_U41 );
                                        }
                                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_196(), "PARACHUTE", "chute_off" )))
                                        {
                                            sub_5771();
                                        }
                                    }
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref iVar7 );
                                    GET_OBJECT_COORDINATES( l_U40, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                                    GET_GROUND_Z_FOR_3D_COORD( uVar10._fU0, uVar10._fU4, uVar10._fU8 + 1000.00000000, ref uVar9 );
                                    if (uVar10._fU8 < (uVar9 + 1.00000000))
                                    {
                                        FREEZE_OBJECT_POSITION( l_U40, 1 );
                                    }
                                    iVar8 = iVar7 - l_U41;
                                    if (iVar8 > 2000)
                                    {
                                        sub_5771();
                                    }
                                    else if (iVar8 > 1000)
                                    {
                                        SET_OBJECT_ALPHA( l_U40, 255 - (ROUND( ((TO_FLOAT( iVar8 - 1000 )) / 1000.00000000) * 255.00000000 )) );
                                    }
                                }
                            }
                            else
                            {
                                sub_5771();
                            }
                        }
                        else
                        {
                            sub_5771();
                        }
                    }
                    else
                    {
                        sub_5771();
                    }
                }
                else
                {
                    sub_5771();
                }
            }
            else if (g_U2787)
            {
                if (NOT IS_PLAYER_BEING_ARRESTED())
                {
                    sub_4767( 0 );
                }
            };;;
        }
        else
        {
            sub_5771();
        }
        sub_6107();
    }
    return;
}

void sub_196()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_346()
{
    int I;

    g_U2783 = 1;
    g_U2784 = 0;
    g_U2785 = 1;
    g_U2786 = 0;
    g_U2787 = 0;
    g_U2795 = 0;
    g_U2788 = 0;
    g_U2789 = 0;
    g_U2790 = 0;
    g_U2791 = 0;
    g_U2789 = 0;
    g_U2792 = 0;
    g_U2794 = 1;
    g_U2797 = 0;
    g_U2798 = 0;
    g_U2799 = 0;
    g_U2800 = 0;
    g_U2801 = 0;
    g_U2802 = 0;
    I = 0;
    for ( I = 0; I < g_U2692; I++ )
    {
        g_U2692[I]._fU0 = nil;
        g_U2692[I]._fU4 = 0;
        g_U2692[I]._fU8 = 0;
        g_U2692[I]._fU12 = {0.00000000, 0.00000000, 0.00000000};
        g_U2692[I]._fU24 = {0.00000000, 0.00000000, 0.00000000};
        g_U2692[I]._fU36 = {0.00000000, 0.00000000, 0.00000000};
        g_U2692[I]._fU48 = -60.00000000;
        g_U2692[I]._fU52 = -7.00000000;
        g_U2692[I]._fU56 = 0;
        g_U2692[I]._fU60 = 0;
        g_U2692[I]._fU64 = 0;
        g_U2692[I]._fU68 = 0;
    }
    return;
}

void sub_791()
{
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 796.18000000, -426.18000000, 84.40000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[0] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -809.75000000, 884.25000000, 135.94000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[1] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -814.01000000, 777.89000000, 3.47000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[2] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -605.46000000, -749.52000000, 92.63000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[3] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 1565.46000000, 862.78000000, 88.71000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[4] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 412.12000000, -638.82000000, 3.70000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[5] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -300.28000000, 513.73000000, 174.34000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[6] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -1202.69000000, -97.70000000, 49.16000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[7] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 369.37000000, 1442.26000000, 88.82000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[8] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 909.85000000, 627.67000000, 72.42000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[9] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -17.59000000, 164.34000000, 219.44000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[10] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -138.22000000, 1288.89000000, 148.57000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[11] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -157.50000000, 599.44000000, 124.52000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[12] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -144.45000000, 203.48000000, 278.57000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[13] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -167.39000000, 348.22000000, 202.45000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[14] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -280.07000000, 346.24000000, 119.13000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[15] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -195.13000000, -474.09000000, 239.41000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[16] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -0.70999990, 566.87000000, 205.16000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[17] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -77.82000000, -408.05000000, 161.19000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[18] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -576.02000000, -267.57000000, 120.39000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[19] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 280.60000000, -357.15000000, 161.32000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[20] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 40.65000000, -716.74000000, 115.70000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[21] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, 152.83000000, -580.94000000, 262.27000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[22] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -78.65000000, -140.63000000, 122.50000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[23] );
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -330.01000000, -492.17000000, 140.22000000, -90.00000000, 0.00000000, 0.00000000, ref l_U6[24] );
    return;
}

void sub_2098()
{
    int I;

    I = 0;
    for ( I = 0; I < l_U6; I++ )
    {
        if (HAS_PICKUP_BEEN_COLLECTED( l_U6[I] ))
        {
            if (NOT (HAS_CHAR_GOT_WEAPON( sub_196(), 41 )))
            {
                GIVE_WEAPON_TO_CHAR( sub_196(), 41, 1, 0 );
            }
        }
    }
    return;
}

void sub_2241()
{
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -433.84200000, 1392.39700000, 15.45800000, -90.00000000, 0.00000000, 0.00000000, ref l_U32 );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U32, "E2_luisapartment" );
    return;
}

void sub_2453()
{
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -707.89430000, 345.92170000, 3.05250000, -90.00000000, 0.00000000, 0.00000000, ref l_U34 );
    return;
}

void sub_2657()
{
    CREATE_PICKUP_ROTATE( 833537224, 2, 0, -279.94000000, -100.42000000, 389.63000000, -90.00000000, 0.00000000, 0.00000000, ref l_U33 );
    return;
}

int sub_2869()
{
    int iVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_196() )))
    {
        iVar2 = sub_2896();
        iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_196(), 8 );
        if (iVar2 != iVar3)
        {
            return 0;
        }
    }
    return 1;
}

int sub_2896()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( sub_196() )))
    {
        uVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_196(), 1 );
        switch (uVar2)
        {
            case 0:
            return 1;
            break;
            case 1:
            return 2;
            break;
            case 2:
            return 2;
            break;
            case 3:
            return 1;
            break;
            case 4:
            return 1;
            break;
        }
    }
    return 1;
}

void sub_3087()
{
    unknown uVar2;

    uVar2 = sub_2896();
    SET_CHAR_COMPONENT_VARIATION( sub_196(), 8, uVar2, 0 );
    WAIT( 0 );
    if (NOT g_U2787)
    {
        SET_DRAW_PLAYER_COMPONENT( 8, 0 );
    }
    return;
}

void sub_3254()
{
    REQUEST_MODEL( 1490460832 );
    REQUEST_ANIMS( "PARACHUTE" );
    return;
}

void sub_3586()
{
    if (HAS_MODEL_LOADED( 1490460832 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1490460832 );
    }
    if (HAVE_ANIMS_LOADED( "PARACHUTE" ))
    {
        REMOVE_ANIMS( "PARACHUTE" );
    }
    return;
}

int sub_3730(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_3739() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_3739() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3739() )))))
                {
                    if (NOT sub_3852())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_196() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_3937())
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

void sub_3739()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3852()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3937()
{
    return sub_3948( 0, 0 );
}

int sub_3948(boolean bParam0, unknown uParam1)
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

void sub_4161(int iParam0)
{
    int iVar3;
    int I;

    iVar3 = sub_4172( iParam0 );
    if (iVar3 == -1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            if (iParam0 != sub_196())
            {
                I = 1;
                for ( I = 0; I < g_U2692; I++ )
                {
                    if (NOT g_U2692[I]._fU56)
                    {
                        iVar3 = I;
                    }
                }
            }
            else
            {
                iVar3 = 0;
            }
            if (iVar3 != -1)
            {
                if (NOT g_U2692[iVar3]._fU56)
                {
                    g_U2692[iVar3]._fU0 = iParam0;
                    g_U2692[iVar3]._fU4 = 0;
                    g_U2692[iVar3]._fU8 = 0;
                    g_U2692[iVar3]._fU12 = {0.00000000, 0.00000000, 0.00000000};
                    g_U2692[iVar3]._fU56 = 1;
                    g_U2692[iVar3]._fU60 = 0;
                    g_U2692[iVar3]._fU64 = 0;
                    g_U2692[iVar3]._fU48 = -60.00000000;
                    g_U2692[iVar3]._fU52 = -7.00000000;
                    g_U2791 = 0;
                    g_U2789 = 0;
                    g_U2785 = 1;
                    g_U2784 = 0;
                    g_U2783 = 0;
                    g_U2786 = 0;
                    g_U2790 = 0;
                }
            }
            else
            {
                SCRIPT_ASSERT( "GIVE_PED_A_PARACHUTE: All AI parachute ped slots are currently in use." );
            }
        }
    }
    return;
}

int sub_4172(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < g_U2692; Result++ )
    {
        if (g_U2692[Result]._fU0 == iParam0)
        {
            if (g_U2692[Result]._fU56)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_4767(boolean bParam0)
{
    if (NOT bParam0)
    {
        SET_DRAW_PLAYER_COMPONENT( 8, 0 );
        g_U2787 = 0;
    }
    else if (NOT sub_4804())
    {
        sub_3087();
    }
    SET_DRAW_PLAYER_COMPONENT( 8, 1 );
    g_U2787 = 1;;
    return;
}

int sub_4804()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_196() )))
    {
        iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_196(), 8 );
        if (iVar2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

void sub_4976()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (HAS_MODEL_LOADED( 1276771907 )))
    {
        REQUEST_MODEL( 1276771907 );
    }
    else if (NOT (IS_CHAR_INJURED( sub_196() )))
    {
        GET_CHAR_COORDINATES( sub_196(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT_NO_OFFSET( 1276771907, uVar2._fU0, uVar2._fU4, -25.00000000, ref l_U40, 1 );
        SET_OBJECT_DYNAMIC( l_U40, 0 );
        SET_OBJECT_COLLISION( l_U40, 0 );
        SET_OBJECT_VISIBLE( l_U40, 0 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U40, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1276771907 );
    }
    return;
}

void sub_5286()
{
    if (DOES_OBJECT_EXIST( l_U40 ))
    {
        SET_OBJECT_DYNAMIC( l_U40, 1 );
        SET_OBJECT_COLLISION( l_U40, 1 );
        SET_OBJECT_VISIBLE( l_U40, 1 );
        ATTACH_OBJECT_TO_PED( l_U40, sub_196(), 1202, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1 );
        PLAY_OBJECT_ANIM( l_U40, "obj_chute_off", "PARACHUTE", 1000.00000000, 0, 1 );
        if (NOT (IS_CHAR_INJURED( sub_196() )))
        {
            TASK_PLAY_ANIM_WITH_FLAGS( sub_196(), "chute_off", "PARACHUTE", 3.00000000, 0, 1280 );
        }
    }
    return;
}

void sub_5771()
{
    if (DOES_OBJECT_EXIST( l_U40 ))
    {
        DELETE_OBJECT( ref l_U40 );
        l_U41 = 0;
        l_U35 = 0;
    }
    return;
}

void sub_6107()
{
    if (NOT (IS_CHAR_INJURED( sub_196() )))
    {
        if ((IS_HUD_PREFERENCE_SWITCHED_ON()) AND ((NOT ARE_WIDESCREEN_BORDERS_ACTIVE()) AND ((IS_CHAR_IN_ANY_HELI( sub_196() )) || (((g_U2692[0]._fU4 == 5) || (g_U2692[0]._fU4 == 3)) AND (g_U2692[0]._fU56)))))
        {
            DISPLAY_ALTIMETER_THIS_FRAME();
        }
    }
    return;
}

