void main()
{
    boolean bVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    int I;
    int iVar16;
    unknown uVar17;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U110 = 999999.80000000;
    l_U111 = 0.00000000;
    l_U112 = 0.26000000;
    l_U113 = 0.65000000;
    l_U115 = 0;
    l_U118 = "amb@smoking_idles";
    l_U119 = "stand_smoke";
    l_U120 = "walk_smoke";
    l_U121 = {0.01400000, -0.01900000, 0.01100000};
    l_U124 = {0.00000000, 0.00000000, 0.00000000};
    l_U127 = {0.14700000, -0.02900000, 0.00000000};
    l_U130 = {0.00000000, 0.00000000, 0.00000000};
    l_U133 = {0.00000000, 0.00000000, 1.00000000};
    l_U177 = 1;
    l_U183 = 0;
    l_U184 = 0;
    l_U185 = 0;
    l_U188 = 0;
    l_U189 = 0;
    l_U190 = 1;
    l_U212 = 0.05000000;
    l_U213 = 15.00000000;
    l_U214 = 50.00000000;
    l_U226 = 25;
    HAS_RESPRAY_HAPPENED();
    if (NOT g_U11064)
    {
        SET_FLOAT_STAT( 168, g_U11109[0] );
        SET_FLOAT_STAT( 169, g_U11109[1] );
        g_U11064 = 1;
    }
    g_U11058 = 0;
    g_U11061 = 0;
    g_U11062 = 0;
    g_U11059 = 0;
    g_U11060 = 0;
    g_U11066 = 0;
    g_U11070 = 0;
    g_U11074 = 0;
    g_U11069 = 0;
    g_U11063 = 0;
    g_U11081 = 0;
    g_U11091[0] = 0;
    g_U11091[1] = 0;
    if (NOT g_U12379)
    {
        g_U11084 = 0;
    }
    l_U173 = 0;
    INCREMENT_INT_STAT( 167, 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "ABILITY BACKUP - dismissed due to death arrest \n" );
        sub_572( ref l_U257, 0 );
        sub_572( ref l_U251, 0 );
        sub_708( 0, 1 );
    }
    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        l_U204 = 0;
        for ( I = 0; I < g_U10996; I++ )
        {
            if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[I]._fU0, 40.00000000, 40.00000000, 40.00000000, 0 ))
                {
                    l_U204 = 1;
                }
            }
        }
    }
    while (true)
    {
        if ((NOT ((NOT g_U11069) AND ((g_U11060) || (g_U11059)))) AND (IS_PLAYER_PLAYING( sub_774() )))
        {
            GET_FRAME_TIME( ref fVar3 );
            fVar3 *= 1000.00000000;
            l_U210 += fVar3;
            l_U211 += fVar3;
            l_U216 += fVar3;
            l_U217 += fVar3;
            l_U220 += fVar3;
            l_U221 += fVar3;
            l_U224 += fVar3;
            l_U225 += fVar3;
            l_U222 += fVar3;
            l_U223 += fVar3;
            l_U218 += fVar3;
            if ((sub_1348()) || (sub_1170()))
            {
                l_U219 = 0.00000000;
            }
            else
            {
                l_U219 += fVar3;
            }
            if (g_U12379)
            {
                l_U167 = 1;
            }
            if ((NOT g_U12379) AND (l_U167))
            {
                PRINTSTRING( "ABILITY BACKUP - No longer on mission resetting global \n" );
                g_U11165 = nil;
                g_U11166 = nil;
                l_U167 = 0;
            }
            switch (l_U227)
            {
                case 0:
                switch (l_U228)
                {
                    case 0:
                    if (sub_1710())
                    {
                        if (NOT g_U11100)
                        {
                            PRINTSTRING( "ABILITY BACKUP - g_bBuddyBackupNextTimeCreatedWillBeCustom = " );
                            if (g_U11067)
                            {
                                PRINTSTRING( "TRUE \n" );
                            }
                            else
                            {
                                PRINTSTRING( "FALSE \n" );
                            }
                            l_U226 = 25;
                            l_U228++;
                        }
                    }
                    break;
                    case 1:
                    if (NOT g_U11067)
                    {
                        if (sub_1903( ref vVar6, ref fVar3, ref l_U226 ))
                        {
                            bVar2 = true;
                        }
                        else if (l_U226 > 500)
                        {
                            if (l_U208 > 0.00000000)
                            {
                                vVar6 = {l_U266};
                                fVar3 = l_U215;
                                bVar2 = true;
                            }
                            else
                            {
                                PRINT( "BB_REACH", 7500, 1 );
                                PRINTSTRING( "CLEANUP_BIKER_BACKUP_SCRIPT() - 1 \n" );
                                sub_2828();
                            }
                        }
                    }
                    if ((g_U11067) || (bVar2))
                    {
                        PRINTSTRING( "ABILITY BACKUP - About to create dudes \n" );
                        # -sub_C1FFC0-0xc214c8( 2, ref l_U206 );
                        LOAD_COMBAT_DECISION_MAKER( 8, ref l_U207 );
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT l_U204)
                            {
                                g_U10996[I]._fU0 = nil;
                                g_U10996[I]._fU4 = nil;
                            }
                            if (g_U11067)
                            {
                                vVar6 = {g_U11151[I]};
                                fVar3 = g_U11127[I];
                            }
                            if (NOT g_U11094[I])
                            {
                                if (NOT l_U204)
                                {
                                    if (I == 0)
                                    {
                                        ;
                                    }
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 0, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 1, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 2, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 3, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 4, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 5, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 6, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 7, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 8, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U10996[I]._fU0, 9, 0, 0 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( g_U10996[I]._fU4, 2.00000000, 0.00000000, 0.00000000, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                                    SET_CAR_COORDINATES( g_U10996[I]._fU4, vVar6.x, vVar6.y, vVar6.z );
                                    SET_CAR_HEADING( g_U10996[I]._fU4, fVar3 );
                                    if ((g_U11088[I]) AND (g_U11067))
                                    {
                                        l_U159[I] = 1;
                                    }
                                    else
                                    {
                                        PRINTSTRING( "ABILITY_BACKUP - MARK_CAR_AS_NO_LONGER_NEEDED_KEEP_ID - after creation \n" );
                                        sub_5289( g_U10996[I]._fU4 );
                                    }
                                    SET_CHAR_DECISION_MAKER( g_U10996[I]._fU0, l_U206 );
                                    SET_COMBAT_DECISION_MAKER( g_U10996[I]._fU0, l_U207 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( g_U10996[I]._fU0, 0 );
                                    SET_CHAR_PROVIDE_COVERING_FIRE( g_U10996[I]._fU0, 1 );
                                    BLOCK_PEEKING_IN_COVER( g_U10996[I]._fU0, 1 );
                                    BLOCK_COWERING_IN_COVER( g_U10996[I]._fU0, 1 );
                                    SET_CHAR_WEAPON_SKILL( g_U10996[I]._fU0, 2 );
                                    UNLOCK_RAGDOLL( g_U10996[I]._fU0, 0 );
                                    SET_CHAR_WILL_DO_DRIVEBYS( g_U10996[I]._fU0, 1 );
                                    SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( g_U10996[I]._fU0, 0 );
                                    SET_PED_DIES_WHEN_INJURED( g_U10996[I]._fU0, 1 );
                                    if (NOT g_U11065)
                                    {
                                        if (NOT g_U11068)
                                        {
                                            sub_5584( ref g_U10996[I]._fU0, ref l_U140[I] );
                                        }
                                        sub_5697( g_U10996[I]._fU0, 0 );
                                        PRINTSTRING( "ABILITY BACKUP - Backup biker flags set \n" );
                                    }
                                    else
                                    {
                                        sub_5697( g_U10996[I]._fU0, 1 );
                                    }
                                    if (g_U11067)
                                    {
                                        if (g_U11088[I])
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[I]._fU0 );
                                            SET_CHAR_COORDINATES( g_U10996[I]._fU0, g_U11158[I]._fU0, g_U11158[I]._fU4, g_U11158[I]._fU8 );
                                            SET_CHAR_HEADING( g_U10996[I]._fU0, g_U11130[I] );
                                        }
                                    }
                                    if ((g_U11065) || ((g_U11088[I]) || (g_U11067)))
                                    {
                                        l_U187 = 1;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Ability Backup - bBuddysWereCreatedElsewhere = TRUE \n" );
                                }
                            }
                            else
                            {
                                g_U11094[I] = 0;
                            }
                            g_U11049[I] = g_U10996[I]._fU0;
                            g_U11052[I] = g_U10996[I]._fU0;
                            g_U11055[I] = g_U10996[I]._fU4;
                            if (l_U159[I])
                            {
                                l_U269[I] = g_U10996[I]._fU4;
                            }
                            sub_6413( I );
                        }
                        l_U225 = 0.00000000;
                        l_U203 = 1;
                        if ((sub_7630( g_U11165 )) || (IS_CHAR_INJURED( g_U11165 )))
                        {
                            g_U11165 = nil;
                        }
                        if ((sub_7630( g_U11166 )) || (IS_CHAR_INJURED( g_U11166 )))
                        {
                            g_U11166 = nil;
                        }
                        l_U238 = 0;
                        l_U210 = 0.00000000;
                        sub_7759( 1 );
                    }
                    break;
                }
                break;
                case 1:
                if (l_U203)
                {
                    if (l_U225 > 7000.00000000)
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (DOES_BLIP_EXIST( l_U143[I] ))
                            {
                                FLASH_BLIP( l_U143[I], 0 );
                            }
                        }
                        l_U203 = 0;
                    }
                    else
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (DOES_BLIP_EXIST( l_U143[I] ))
                            {
                                FLASH_BLIP( l_U143[I], 1 );
                            }
                        }
                    }
                }
                if (NOT g_U11058)
                {
                    if ((NOT l_U204) AND (NOT g_U11206))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT sub_1348())
                            {
                                PRINT_HELP( "TC_EXP" );
                                g_U11206 = 1;
                            }
                        }
                    }
                }
                if (NOT g_U12379)
                {
                    l_U263 = 3;
                }
                else
                {
                    l_U263 = 1;
                }
                if (IS_PLAYER_PLAYING( sub_774() ))
                {
                    if (g_U11058)
                    {
                        if (IS_WANTED_LEVEL_GREATER( sub_774(), 0 ))
                        {
                            if (NOT l_U189)
                            {
                                for ( I = 0; I < 2; I++ )
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                                    {
                                        SET_CHAR_RELATIONSHIP( g_U10996[I]._fU0, 5, 3 );
                                    }
                                }
                                l_U189 = 1;
                            }
                        }
                        else if (l_U189)
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                                {
                                    CLEAR_CHAR_RELATIONSHIP( g_U10996[I]._fU0, 5, 3 );
                                    CLEAR_CHAR_TASKS( g_U10996[I]._fU0 );
                                }
                            }
                            l_U189 = 0;
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (HAS_MODEL_LOADED( l_U248[I] )))
                    {
                        REQUEST_MODEL( l_U248[I] );
                    }
                }
                if ((NOT l_U204) AND (NOT l_U187))
                {
                    if (IS_PLAYER_PLAYING( sub_774() ))
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT l_U187)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U10996[I]._fU4 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( g_U10996[I]._fU0, g_U10996[I]._fU4 ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_866(), g_U10996[I]._fU4, 100.00000000, 100.00000000, 85.00000000, 0 ))
                                            {
                                                PLAY_AUDIO_EVENT_FROM_VEHICLE( "BACKUP_HORN", g_U10996[I]._fU4 );
                                                l_U187 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_PLAYER_PLAYING( sub_774() ))
                {
                    if (NOT g_U11058)
                    {
                        if ((NOT l_U204) AND (NOT g_U11065))
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (NOT g_U11085[I])
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                                    {
                                        if ((sub_8803( g_U10996[I]._fU0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[I]._fU0, 10.00000000, 10.00000000, 2.00000000, 0 )))
                                        {
                                            l_U171 = 1;
                                            l_U237 = I;
                                            g_U11058 = 1;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            g_U11058 = 1;
                        }
                        if (g_U11058)
                        {
                            HAS_RESPRAY_HAPPENED();
                        }
                    }
                    else if (NOT l_U173)
                    {
                        if (NOT g_U12379)
                        {
                            l_U166 = 1;
                        }
                        if (NOT l_U204)
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                                {
                                    if (NOT g_U11085[I])
                                    {
                                        sub_5697( g_U10996[I]._fU0, 0 );
                                    }
                                }
                            }
                        }
                        g_U11061 = 0;
                        g_U11062 = 0;
                        g_U11065 = 0;
                        g_U11067 = 0;
                        g_U11069 = 0;
                        g_U11074 = 0;
                        l_U173 = 1;
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (l_U159[I])
                    {
                        if (IS_VEH_DRIVEABLE( l_U269[I] ))
                        {
                            if (NOT (sub_9218( l_U269[I] )))
                            {
                                PRINTSTRING( "ABILITY_BACKUP - bike marked as no longer needed because someone got on \n" );
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U269[I] );
                                l_U269[I] = nil;
                                l_U159[I] = 0;
                            }
                        }
                        else
                        {
                            PRINTSTRING( "ABILITY_BACKUP - bike marked as no longer needed because the veh is not driveable \n" );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U269[I] );
                            l_U269[I] = nil;
                            l_U159[I] = 0;
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( g_U10996[I]._fU4 ))
                    {
                        if (NOT (IS_CAR_A_MISSION_CAR( g_U10996[I]._fU4 )))
                        {
                            if (sub_9218( g_U10996[I]._fU4 ))
                            {
                                if (NOT (sub_9647( g_U10996[I]._fU4 )))
                                {
                                    PRINTSTRING( "ABILITY_BACKUP - bike marked as mission car because it is empty \n" );
                                    SET_CAR_AS_MISSION_CAR( g_U10996[I]._fU4 );
                                    l_U269[I] = g_U10996[I]._fU4;
                                    l_U159[I] = 1;
                                }
                            }
                        }
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( sub_866() ))
                {
                    if ((g_U11082) || (l_U178))
                    {
                        l_U178 = 0;
                        l_U179[0] = 0;
                        l_U179[1] = 0;
                        g_U11082 = 0;
                    }
                    if (NOT g_U11085[0])
                    {
                        if (NOT l_U179[0])
                        {
                            l_U183 = 0;
                            if (l_U185)
                            {
                                ;
                            }
                            else if (NOT (DOES_CHAR_EXIST( g_U11165 )))
                            {
                                ;
                            }
                            else if (NOT (g_U11165 == g_U10996[0]._fU0))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11165 )))
                                {
                                    if (NOT (DOES_CHAR_EXIST( g_U11166 )))
                                    {
                                        ;
                                    }
                                    else if (NOT (g_U11166 == g_U10996[0]._fU0))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11166 )))
                                        {
                                            if (NOT l_U184)
                                            {
                                                l_U183 = 1;
                                                l_U179[1] = 0;
                                            }
                                        }
                                    }
                                }
                            };;;
                            l_U179[0] = 1;
                        }
                    }
                    if (NOT g_U11085[1])
                    {
                        if (NOT l_U179[1])
                        {
                            l_U184 = 0;
                            if (l_U185)
                            {
                                ;
                            }
                            else if (NOT (DOES_CHAR_EXIST( g_U11166 )))
                            {
                                ;
                            }
                            else if (NOT (g_U11166 == g_U10996[1]._fU0))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11166 )))
                                {
                                    if (NOT (DOES_CHAR_EXIST( g_U11165 )))
                                    {
                                        ;
                                    }
                                    else if (NOT (g_U11165 == g_U10996[1]._fU0))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11166 )))
                                        {
                                            if (NOT l_U183)
                                            {
                                                l_U184 = 1;
                                                l_U179[0] = 0;
                                            }
                                        }
                                    }
                                }
                            };;;
                            l_U179[1] = 1;
                        }
                    }
                }
                else if (NOT l_U178)
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (NOT g_U11085[I])
                        {
                            if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                            {
                                ;
                            }
                        }
                    }
                    if ((sub_7630( g_U11165 )) || (IS_CHAR_INJURED( g_U11165 )))
                    {
                        g_U11165 = nil;
                    }
                    if ((sub_7630( g_U11166 )) || (IS_CHAR_INJURED( g_U11166 )))
                    {
                        g_U11166 = nil;
                    }
                    l_U178 = 1;
                }
                if (g_U12379)
                {
                    if (NOT l_U191)
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (DOES_BLIP_EXIST( l_U140[I] ))
                            {
                                CHANGE_BLIP_DISPLAY( l_U140[I], 0 );
                            }
                        }
                        l_U191 = 1;
                    }
                }
                else if (l_U191)
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U140[I] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U140[I], 1 );
                        }
                    }
                    l_U191 = 0;
                }
                if (sub_1348())
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U140[I] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U140[I], 0 );
                        }
                    }
                }
                else
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U140[I] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U140[I], 1 );
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_CHAR_EXIST( g_U10996[I]._fU0 ))
                    {
                        if (IS_CHAR_INJURED( g_U10996[I]._fU0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U140[I] ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U140[I] );
                            }
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U140[I] ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U140[I] );
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U140[I] ))
                    {
                        if (NOT (IS_CHAR_DEAD( g_U10996[I]._fU0 )))
                        {
                            GET_CHAR_COORDINATES( g_U10996[I]._fU0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                        }
                        else
                        {
                            N_1363505769( g_U10996[I]._fU0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U143[I] )))
                        {
                            sub_11141( ref l_U143[I], vVar6, I );
                        }
                        else if (NOT l_U149[I])
                        {
                            bVar2 = false;
                            if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_774() ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[I]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        bVar2 = true;
                                    }
                                }
                            }
                            if (bVar2)
                            {
                                sub_11141( ref l_U143[I], vVar6, I );
                            }
                            else if (DOES_BLIP_EXIST( l_U143[I] ))
                            {
                                if ((GET_BLIP_INFO_ID_TYPE( l_U143[I] )) == 4)
                                {
                                    GET_BLIP_COORDS( l_U143[I], ref vVar9 );
                                    vVar12 = {vVar6 - vVar9};
                                    vVar12.z = 0.00000000;
                                    fVar3 = VMAG( vVar12 );
                                    if (fVar3 < l_U213)
                                    {
                                        fVar3 = l_U213;
                                    }
                                    if (fVar3 < l_U214)
                                    {
                                        fVar3 = l_U214;
                                    }
                                    fVar3 -= l_U213;
                                    fVar3 /= l_U214 - l_U213;
                                    fVar3 *= 1.00000000 - l_U212;
                                    fVar3 -= 1.00000000;
                                    fVar3 *= -1.00000000;
                                    vVar12 = {vVar12 * l_U212};
                                    vVar9 = {vVar9 + vVar12};
                                    sub_11141( ref l_U143[I], vVar9, I );
                                }
                            }
                        }
                        else
                        {
                            sub_11141( ref l_U143[I], vVar6, I );
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U143[I] ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U143[I] );
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (g_U11068)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U146[I] )))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                            {
                                ADD_BLIP_FOR_CHAR( g_U10996[I]._fU0, ref l_U146[I] );
                                SET_BLIP_AS_FRIENDLY( l_U146[I], 1 );
                                CHANGE_BLIP_SCALE( l_U146[I], 0.50000000 );
                                CHANGE_BLIP_PRIORITY( l_U146[I], 0 );
                                CHANGE_BLIP_DISPLAY( l_U146[I], 5 );
                                SET_BLIP_AS_SHORT_RANGE( l_U146[I], 1 );
                                if (I == 0)
                                {
                                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U146[I], "BLIP_95" );
                                }
                                else
                                {
                                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U146[I], "BLIP_96" );
                                }
                            }
                        }
                        else if (IS_CHAR_INJURED( g_U10996[I]._fU0 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U146[I] );
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U146[I] ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U146[I] );
                    }
                }
                if (l_U171)
                {
                    if (NOT (IS_CHAR_INJURED( g_U10996[l_U237]._fU0 )))
                    {
                        if (NOT l_U172)
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[l_U237]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (NOT sub_12625()))
                            {
                                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, g_U10996[l_U237]._fU0, 0, 0, 3000 );
                                l_U211 = 0.00000000;
                                l_U172 = 1;
                            }
                        }
                        else if (IS_HINT_RUNNING())
                        {
                            if (l_U211 < 3000.00000000)
                            {
                                if (sub_12625())
                                {
                                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, g_U10996[l_U237]._fU0, 0, 0, 0 );
                                }
                            }
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_CHAR_EXIST( g_U10996[I]._fU0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                        {
                            if (NOT l_U168[I])
                            {
                                if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_774(), g_U10996[I]._fU0 ))
                                {
                                    UNLOCK_RAGDOLL( g_U10996[I]._fU0, 1 );
                                    l_U168[I] = 1;
                                }
                            }
                            else if (NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_774(), g_U10996[I]._fU0 )))
                            {
                                if (NOT (IS_PED_RAGDOLL( g_U10996[I]._fU0 )))
                                {
                                    UNLOCK_RAGDOLL( g_U10996[I]._fU0, 0 );
                                    l_U168[I] = 0;
                                }
                            }
                        }
                        else if (NOT l_U168[I])
                        {
                            UNLOCK_RAGDOLL( g_U10996[I]._fU0, 1 );
                            l_U168[I] = 1;
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( g_U10996[I]._fU0 )))
                    {
                        if (IS_CHAR_ON_FIRE( g_U10996[I]._fU0 ))
                        {
                            GET_CHAR_HEALTH( g_U10996[I]._fU0, ref iVar16 );
                            if (iVar16 > 1)
                            {
                                UNLOCK_RAGDOLL( g_U10996[I]._fU0, 1 );
                                PRINTSTRING( "Backup Biker was on fires, setting health low. \n" );
                                SET_CHAR_HEALTH( g_U10996[I]._fU0, 1 );
                            }
                        }
                    }
                }
                iVar16 = 0;
                for ( I = 0; I < 2; I++ )
                {
                    if (IS_CHAR_INJURED( g_U10996[I]._fU0 ))
                    {
                        iVar16++;
                    }
                }
                if (iVar16 == 2)
                {
                    PRINTSTRING( "Dissmiss Backup 1 \n" );
                    sub_708( 0, 0 );
                }
                if (g_U11058)
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        if (HAS_RESPRAY_HAPPENED())
                        {
                            sub_708( 1, 1 );
                        }
                    }
                }
                switch (l_U243)
                {
                    case 0:
                    if (g_U11058)
                    {
                        if (l_U210 > 600000.00000000)
                        {
                            if ((NOT IS_MINIGAME_IN_PROGRESS()) AND (NOT g_U12379))
                            {
                                if (NOT sub_1348())
                                {
                                    bVar2 = true;
                                    for ( I = 0; I < 2; I++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                                        {
                                            if ((IS_CHAR_SHOOTING( g_U10996[I]._fU0 )) || (IS_PED_IN_COMBAT( g_U10996[I]._fU0 )))
                                            {
                                                bVar2 = false;
                                            }
                                        }
                                    }
                                    if ((IS_CHAR_SHOOTING( sub_866() )) || (IS_PED_IN_COMBAT( sub_866() )))
                                    {
                                        bVar2 = false;
                                    }
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    if (I == 0)
                                    {
                                        l_U192 = 1;
                                    }
                                    else
                                    {
                                        l_U192 = 0;
                                    }
                                    if (bVar2)
                                    {
                                        l_U243++;
                                    }
                                }
                            }
                        }
                    }
                    else if ((NOT g_U11065) AND (l_U210 > 180000.00000000))
                    {
                        PRINTSTRING( "Dissmiss Backup 3 \n" );
                        sub_708( 0, 0 );
                    }
                    break;
                    case 1:
                    if (NOT sub_1170())
                    {
                        if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                            {
                                if (sub_14095( "E1BEA", 7 ))
                                {
                                    if (l_U192)
                                    {
                                        if (sub_14579( "E1BE_8", ref l_U251, l_U263, 1 ))
                                        {
                                            l_U243++;
                                        }
                                    }
                                    else if (sub_14579( "E1BE_6", ref l_U251, l_U263, 1 ))
                                    {
                                        l_U243++;
                                    }
                                }
                            }
                        }
                        if ((IS_CHAR_INJURED( g_U10996[1]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                if (sub_14095( "E1BEA", 7 ))
                                {
                                    if (sub_14579( "E1BE_9", ref l_U251, l_U263, 1 ))
                                    {
                                        l_U243++;
                                    }
                                }
                            }
                        }
                        if ((IS_CHAR_INJURED( g_U10996[0]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                if (sub_14095( "E1BEA", 7 ))
                                {
                                    if (sub_14579( "E1BE_7", ref l_U251, l_U263, 1 ))
                                    {
                                        l_U243 += 2;
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 2:
                    if (sub_15899( ref l_U251 ))
                    {
                        sub_708( 0, 1 );
                        l_U243 = 99;
                    }
                    else if (IS_CHAR_INJURED( g_U10996[0]._fU0 ))
                    {
                        sub_572( ref l_U251, 0 );
                    }
                    break;
                    case 3:
                    if (sub_15899( ref l_U251 ))
                    {
                        sub_708( 0, 1 );
                        l_U243 = 99;
                    }
                    else if (IS_CHAR_INJURED( g_U10996[1]._fU0 ))
                    {
                        sub_572( ref l_U251, 0 );
                    }
                    break;
                }
                if (l_U177)
                {
                    if (NOT l_U149[0])
                    {
                        sub_16116( g_U10996[0]._fU0 );
                    }
                }
                if (NOT l_U186)
                {
                    if (IS_MINIGAME_IN_PROGRESS())
                    {
                        PRINTSTRING( "BIKER BACKUP - Minigame is active \n" );
                        if ((g_U11085[1]) || (g_U11085[0]))
                        {
                            l_U205 = 1;
                        }
                        if (NOT l_U205)
                        {
                            sub_19650( 1 );
                        }
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                            {
                                SET_CURRENT_CHAR_WEAPON( g_U10996[I]._fU0, 0, 1 );
                            }
                        }
                        l_U202 = 0;
                        if (NOT g_U11068)
                        {
                            g_U11068 = 1;
                            l_U202 = 1;
                        }
                        l_U186 = 1;
                    }
                }
                else if (NOT IS_MINIGAME_IN_PROGRESS())
                {
                    PRINTSTRING( "BIKER BACKUP - Minigame is finished \n" );
                    if (NOT l_U205)
                    {
                        sub_19650( 0 );
                    }
                    sub_19897( 1 );
                    if (l_U202)
                    {
                        g_U11068 = 0;
                        l_U202 = 0;
                    }
                    l_U186 = 0;
                }
                if ((NOT g_U11059) AND (NOT sub_1348()))
                {
                    switch (l_U238)
                    {
                        case 0:
                        if ((NOT l_U204) AND (NOT g_U11084))
                        {
                            if (g_U11058)
                            {
                                sub_20153( 1 );
                            }
                        }
                        else
                        {
                            sub_572( ref l_U251, 0 );
                            sub_20153( 2 );
                            l_U216 = -10000.00000000;
                        }
                        break;
                        case 1:
                        if ((sub_20402( sub_866() )) AND (l_U219 > 1000.00000000))
                        {
                            if (NOT g_U11084)
                            {
                                if ((sub_20499()) || (NOT sub_1170()))
                                {
                                    if (l_U216 > 1000.00000000)
                                    {
                                        if (l_U216 < 5000.00000000)
                                        {
                                            if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                            {
                                                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 )))
                                                {
                                                    if (sub_14095( "E1BEA", 7 ))
                                                    {
                                                        if (sub_14579( "E1BE_14", ref l_U251, l_U263, 1 ))
                                                        {
                                                            sub_20153( 2 );
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    sub_20153( 2 );
                                                }
                                            }
                                            else
                                            {
                                                sub_20153( 2 );
                                            }
                                        }
                                        else
                                        {
                                            sub_20153( 2 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                sub_572( ref l_U251, 0 );
                                sub_20153( 2 );
                                l_U216 = -10000.00000000;
                            }
                        }
                        break;
                        case 2:
                        if ((sub_20402( sub_866() )) AND (NOT sub_1170()))
                        {
                            if ((sub_15899( ref l_U251 )) AND (l_U216 > 3000.00000000))
                            {
                                bVar2 = false;
                                if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                {
                                    if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                    {
                                        sub_20153( 3 );
                                        bVar2 = true;
                                    }
                                }
                                if (NOT bVar2)
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                            {
                                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                                {
                                                    bVar2 = true;
                                                }
                                            }
                                            else
                                            {
                                                bVar2 = true;
                                            }
                                            if (bVar2)
                                            {
                                                sub_20153( 4 );
                                            }
                                        }
                                    }
                                }
                                if (NOT bVar2)
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                            {
                                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                                {
                                                    bVar2 = true;
                                                }
                                            }
                                            else
                                            {
                                                bVar2 = true;
                                            }
                                            if (bVar2)
                                            {
                                                sub_20153( 5 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (l_U216 > 10000.00000000)
                        {
                            sub_20153( 7 );
                        }
                        break;
                        case 3:
                        switch (l_U240)
                        {
                            case 0:
                            if ((l_U219 > 1000.00000000) AND (NOT sub_1170()))
                            {
                                switch (g_U11105)
                                {
                                    case 0:
                                    l_U264 = "E1BB_JTC1";
                                    break;
                                    case 1:
                                    l_U264 = "E1BB_JTC2";
                                    break;
                                    case 2:
                                    l_U264 = "E1BB_JTC3";
                                    break;
                                    case 3:
                                    l_U264 = "E1BB_JTC4";
                                    break;
                                }
                                if (sub_14095( "E1BBAU", 7 ))
                                {
                                    if (sub_14579( l_U264, ref l_U251, l_U263, 1 ))
                                    {
                                        l_U240++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if ((sub_21638( l_U251 )) || (NOT (sub_15899( ref l_U251 ))))
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                {
                                    switch (l_U239)
                                    {
                                        case 0:
                                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))))
                                        {
                                            l_U239 = 1;
                                            l_U224 = 0.00000000;
                                            sub_21847( ref l_U251 );
                                        }
                                        break;
                                        case 1:
                                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                        {
                                            if (l_U224 < 5000.00000000)
                                            {
                                                l_U239 = 2;
                                            }
                                            else
                                            {
                                                sub_572( ref l_U251, 0 );
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (sub_15899( ref l_U257 ))
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                            {
                                                if (sub_14095( "E1BBAU", 7 ))
                                                {
                                                    sub_22489( l_U264, ref l_U251, l_U263, 1 );
                                                    l_U239 = 0;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    sub_572( ref l_U257, 0 );
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                g_U11105++;
                                if (g_U11105 > 3)
                                {
                                    g_U11105 = 0;
                                }
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 4:
                        switch (l_U240)
                        {
                            case 0:
                            if ((l_U219 > 1000.00000000) AND (NOT sub_1170()))
                            {
                                switch (g_U11103)
                                {
                                    case 0:
                                    l_U264 = "E1BB_JT1";
                                    break;
                                    case 1:
                                    l_U264 = "E1BB_JT2";
                                    break;
                                    case 2:
                                    l_U264 = "E1BB_JT3";
                                    break;
                                    case 3:
                                    l_U264 = "E1BB_JT4";
                                    break;
                                    case 4:
                                    l_U264 = "E1BB_JT5";
                                    break;
                                    case 5:
                                    l_U264 = "E1BB_JT6";
                                    break;
                                }
                                if (sub_14095( "E1BBAU", 7 ))
                                {
                                    if (sub_14579( l_U264, ref l_U251, l_U263, 1 ))
                                    {
                                        l_U240++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if ((sub_21638( l_U251 )) || (NOT (sub_15899( ref l_U251 ))))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                {
                                    switch (l_U239)
                                    {
                                        case 0:
                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 )))
                                        {
                                            l_U239 = 1;
                                            l_U224 = 0.00000000;
                                            sub_21847( ref l_U251 );
                                        }
                                        break;
                                        case 1:
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (l_U224 < 5000.00000000)
                                            {
                                                l_U239 = 2;
                                            }
                                            else
                                            {
                                                sub_572( ref l_U251, 0 );
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (sub_15899( ref l_U257 ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                            {
                                                if (sub_14095( "E1BBAU", 7 ))
                                                {
                                                    sub_22489( l_U264, ref l_U251, l_U263, 1 );
                                                    l_U239 = 0;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    sub_572( ref l_U257, 0 );
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                g_U11103++;
                                if (g_U11103 > 5)
                                {
                                    g_U11103 = 0;
                                }
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 5:
                        switch (l_U240)
                        {
                            case 0:
                            if ((l_U219 > 1000.00000000) AND (NOT sub_1170()))
                            {
                                switch (g_U11104)
                                {
                                    case 0:
                                    l_U264 = "E1BB_JC1";
                                    break;
                                    case 1:
                                    l_U264 = "E1BB_JC2";
                                    break;
                                    case 2:
                                    l_U264 = "E1BB_JC3";
                                    break;
                                    case 3:
                                    l_U264 = "E1BB_JC4";
                                    break;
                                    case 4:
                                    l_U264 = "E1BB_JC5";
                                    break;
                                    case 5:
                                    l_U264 = "E1BB_JC6";
                                    break;
                                }
                                if (sub_14095( "E1BBAU", 7 ))
                                {
                                    if (sub_14579( l_U264, ref l_U251, l_U263, 1 ))
                                    {
                                        l_U240++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if ((sub_21638( l_U251 )) || (NOT (sub_15899( ref l_U251 ))))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                {
                                    switch (l_U239)
                                    {
                                        case 0:
                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 )))
                                        {
                                            l_U239 = 1;
                                            l_U224 = 0.00000000;
                                            sub_21847( ref l_U251 );
                                        }
                                        break;
                                        case 1:
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (l_U224 < 5000.00000000)
                                            {
                                                l_U239 = 2;
                                            }
                                            else
                                            {
                                                sub_572( ref l_U251, 0 );
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (sub_15899( ref l_U257 ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                            {
                                                if (sub_14095( "E1BBAU", 7 ))
                                                {
                                                    sub_22489( l_U264, ref l_U251, l_U263, 1 );
                                                    l_U239 = 0;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    sub_572( ref l_U257, 0 );
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                g_U11104++;
                                if (g_U11104 > 5)
                                {
                                    g_U11104 = 0;
                                }
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 6:
                        switch (l_U240)
                        {
                            case 0:
                            if ((l_U219 > 1000.00000000) AND (NOT sub_1170()))
                            {
                                switch (g_U11106)
                                {
                                    case 0:
                                    l_U264 = "E1BB_CT1";
                                    break;
                                    case 1:
                                    l_U264 = "E1BB_CT2";
                                    break;
                                    case 2:
                                    l_U264 = "E1BB_CT3";
                                    break;
                                    case 3:
                                    l_U264 = "E1BB_CT4";
                                    break;
                                }
                                if (sub_14095( "E1BBAU", 7 ))
                                {
                                    if (sub_14579( l_U264, ref l_U251, l_U263, 1 ))
                                    {
                                        l_U240++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if ((IS_CHAR_INJURED( g_U10996[1]._fU0 )) || (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                                else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                g_U11106++;
                                if (g_U11106 > 3)
                                {
                                    g_U11106 = 0;
                                }
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 8:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_14095( "E1BEA", 7 ))
                                        {
                                            if (sub_14579( "E1BE_15", ref l_U251, l_U263, 1 ))
                                            {
                                                l_U240++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U240++;
                                    }
                                }
                                else
                                {
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( g_U10996[0]._fU0 ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 9:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_14095( "E1BEA", 7 ))
                                        {
                                            if (sub_14579( "E1BE_17", ref l_U251, l_U263, 1 ))
                                            {
                                                l_U240++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U240++;
                                    }
                                }
                                else
                                {
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( g_U10996[1]._fU0 ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 10:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( sub_866() ))))
                                {
                                    if (sub_14095( "E1BEA", 7 ))
                                    {
                                        if (sub_14579( "E1BE_16", ref l_U251, l_U263, 1 ))
                                        {
                                            l_U240++;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( sub_866() ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 11:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_14095( "E1BEA", 7 ))
                                        {
                                            if (sub_14579( "E1BE_18", ref l_U251, l_U263, 1 ))
                                            {
                                                PRINTSTRING( "Played terry smoke chat \n" );
                                                l_U240++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        PRINTSTRING( "terry smoke chat 1\n" );
                                        l_U240++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "terry smoke chat 2 \n" );
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( g_U10996[0]._fU0 ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 12:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_14095( "E1BEA", 7 ))
                                        {
                                            if (sub_14579( "E1BE_19", ref l_U251, l_U263, 1 ))
                                            {
                                                l_U240++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U240++;
                                    }
                                }
                                else
                                {
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( g_U10996[1]._fU0 ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 13:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( sub_866() ))))
                                {
                                    if (sub_14095( "E1BEA", 7 ))
                                    {
                                        if (sub_14579( "E1BE_20", ref l_U251, l_U263, 1 ))
                                        {
                                            l_U240++;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( sub_866() ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 14:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))
                                    {
                                        if (sub_14095( "E1BEA", 7 ))
                                        {
                                            if (sub_14579( "E1BE_4", ref l_U251, l_U263, 1 ))
                                            {
                                                l_U240++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U240++;
                                    }
                                }
                                else
                                {
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( g_U10996[1]._fU0 ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 15:
                        switch (l_U240)
                        {
                            case 0:
                            if (l_U219 > 1000.00000000)
                            {
                                if ((NOT sub_1170()) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))
                                    {
                                        if (sub_14095( "E1BEA", 7 ))
                                        {
                                            if (sub_14579( "E1BE_5", ref l_U251, l_U263, 1 ))
                                            {
                                                l_U240++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U240++;
                                    }
                                }
                                else
                                {
                                    l_U240++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_15899( ref l_U251 )))
                            {
                                if (IS_CHAR_INJURED( g_U10996[0]._fU0 ))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_572( ref l_U251, 0 );
                                }
                            }
                            else
                            {
                                sub_20153( 7 );
                            }
                            break;
                        }
                        break;
                        case 7:
                        if (sub_27189())
                        {
                            if ((NOT sub_1170()) AND (l_U220 > 10000.00000000))
                            {
                                l_U265 = "";
                                if (l_U189)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                                }
                                else
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref I );
                                }
                                switch (I)
                                {
                                    case 0:
                                    l_U265 = "SHOOT_AT_COPS";
                                    break;
                                    case 1:
                                    l_U265 = "KEEP_SHOOTING";
                                    break;
                                    case 2:
                                    l_U265 = "SHOOT_AT_ENEMY";
                                    break;
                                }
                                if (NOT (IS_STRING_NULL( l_U265 )))
                                {
                                    if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                        if (I == 0)
                                        {
                                            SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                        }
                                        l_U220 = 0.00000000;
                                    }
                                    else if ((IS_CHAR_INJURED( g_U10996[1]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                        l_U220 = 0.00000000;
                                    }
                                    else if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                        l_U220 = 0.00000000;
                                    };;;
                                }
                            }
                        }
                        if (sub_27813())
                        {
                            if ((NOT sub_1170()) AND (l_U221 > 10000.00000000))
                            {
                                l_U265 = "";
                                GENERATE_RANDOM_INT_IN_RANGE( 1, 5, ref I );
                                switch (I)
                                {
                                    case 0:
                                    l_U265 = "BEEN_SHOT";
                                    break;
                                    case 1:
                                    l_U265 = "COME_UNDER_ATTACK";
                                    break;
                                    case 2:
                                    l_U265 = "COVER_ME";
                                    break;
                                    case 3:
                                    l_U265 = "TAKE_COVER";
                                    break;
                                    case 4:
                                    l_U265 = "SHIT";
                                    break;
                                }
                                if (NOT (IS_STRING_NULL( l_U265 )))
                                {
                                    if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                        if (I == 0)
                                        {
                                            SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                        }
                                        l_U221 = 0.00000000;
                                    }
                                    else if ((IS_CHAR_INJURED( g_U10996[1]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                        l_U221 = 0.00000000;
                                    }
                                    else if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                        l_U221 = 0.00000000;
                                    };;;
                                }
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_774() ))
                        {
                            if (IS_CHAR_SHOOTING( sub_866() ))
                            {
                                if ((NOT sub_1170()) AND (l_U222 > 20000.00000000))
                                {
                                    l_U265 = "NICE_SHOOTING_JOHNNY";
                                    if (NOT (IS_STRING_NULL( l_U265 )))
                                    {
                                        if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                            if (I == 0)
                                            {
                                                SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                            }
                                            l_U222 = 0.00000000;
                                        }
                                        else if ((IS_CHAR_INJURED( g_U10996[1]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                        {
                                            SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                            l_U222 = 0.00000000;
                                        }
                                        else if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                        {
                                            SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                            l_U222 = 0.00000000;
                                        };;;
                                    }
                                }
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_774() ))
                        {
                            if (IS_CHAR_ON_FOOT( sub_866() ))
                            {
                                GET_CHAR_SPEED( sub_866(), ref fVar3 );
                                if (fVar3 > 4.00000000)
                                {
                                    if ((NOT sub_1170()) AND (l_U223 > 20000.00000000))
                                    {
                                        l_U265 = "WAIT_FOR_ME";
                                        if (NOT (IS_STRING_NULL( l_U265 )))
                                        {
                                            if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                                if (I == 0)
                                                {
                                                    if (IS_CHAR_ON_FOOT( g_U10996[0]._fU0 ))
                                                    {
                                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U10996[0]._fU0, sub_866(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                        {
                                                            SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                                            l_U223 = 0.00000000;
                                                        }
                                                    }
                                                }
                                                else if (IS_CHAR_ON_FOOT( g_U10996[1]._fU0 ))
                                                {
                                                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U10996[1]._fU0, sub_866(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                                        l_U223 = 0.00000000;
                                                    }
                                                }
                                            }
                                            else if ((IS_CHAR_INJURED( g_U10996[1]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                            {
                                                if (IS_CHAR_ON_FOOT( g_U10996[0]._fU0 ))
                                                {
                                                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U10996[0]._fU0, sub_866(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( g_U10996[0]._fU0, l_U265, 1, 1, 2 );
                                                        l_U223 = 0.00000000;
                                                    }
                                                }
                                            }
                                            else if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                            {
                                                if (IS_CHAR_ON_FOOT( g_U10996[1]._fU0 ))
                                                {
                                                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U10996[1]._fU0, sub_866(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( g_U10996[1]._fU0, l_U265, 1, 1, 2 );
                                                        l_U223 = 0.00000000;
                                                    }
                                                }
                                            };;;
                                        }
                                    }
                                }
                            }
                        }
                        switch (l_U242)
                        {
                            case 0:
                            if ((IS_CHAR_INJURED( g_U10996[1]._fU0 )) || (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                            {
                                l_U242++;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_INJURED( g_U10996[0]._fU0 ))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 ))
                                    {
                                        sub_20153( 14 );
                                        l_U242++;
                                    }
                                }
                            }
                            if (IS_CHAR_INJURED( g_U10996[1]._fU0 ))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 ))
                                    {
                                        sub_20153( 15 );
                                        l_U242++;
                                    }
                                }
                            }
                            break;
                        }
                        if ((sub_20402( sub_866() )) AND ((l_U238 == 7) AND ((NOT sub_1170()) AND (l_U217 > 40000.00000000))))
                        {
                            bVar2 = false;
                            if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                            {
                                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    switch (I)
                                    {
                                        case 0:
                                        sub_20153( 6 );
                                        break;
                                        case 1:
                                        sub_20153( 10 );
                                        break;
                                    }
                                    bVar2 = true;
                                }
                            }
                            if (NOT bVar2)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                            {
                                                bVar2 = true;
                                            }
                                        }
                                        else
                                        {
                                            bVar2 = true;
                                        }
                                        if (bVar2)
                                        {
                                            sub_20153( 8 );
                                        }
                                    }
                                }
                            }
                            if (NOT bVar2)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                            {
                                                bVar2 = true;
                                            }
                                        }
                                        else
                                        {
                                            bVar2 = true;
                                        }
                                        if (bVar2)
                                        {
                                            sub_20153( 9 );
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            GET_CHAR_SPEED( sub_866(), ref fVar3 );
                            if (fVar3 > 2.00000000)
                            {
                                l_U217 = 0.00000000;
                            }
                            if (IS_CHAR_SHOOTING( sub_866() ))
                            {
                                l_U217 = 0.00000000;
                            }
                            if (sub_1179())
                            {
                                l_U217 = 0.00000000;
                            }
                        }
                        if (l_U238 == 7)
                        {
                            switch (l_U241)
                            {
                                case 0:
                                if ((l_U219 > 3000.00000000) AND (NOT sub_1170()))
                                {
                                    if (sub_30653( g_U10996[0]._fU0 ))
                                    {
                                        bVar2 = false;
                                        if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                                                switch (I)
                                                {
                                                    case 0:
                                                    sub_20153( 11 );
                                                    break;
                                                    case 1:
                                                    sub_20153( 12 );
                                                    break;
                                                    case 2:
                                                    sub_20153( 13 );
                                                    break;
                                                }
                                                bVar2 = true;
                                            }
                                        }
                                        if (NOT bVar2)
                                        {
                                            if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
                                            {
                                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                                {
                                                    if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
                                                    {
                                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U10996[1]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                                        {
                                                            bVar2 = true;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        bVar2 = true;
                                                    }
                                                    if (bVar2)
                                                    {
                                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                                        switch (I)
                                                        {
                                                            case 0:
                                                            sub_20153( 8 );
                                                            break;
                                                            case 1:
                                                            sub_20153( 13 );
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if (bVar2)
                                        {
                                            l_U218 = 0.00000000;
                                            l_U241++;
                                        }
                                    }
                                }
                                break;
                                case 1:
                                if (l_U218 > 60000.00000000)
                                {
                                    l_U241 = 0;
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                sub_31238();
                sub_37555();
                break;
            }
        }
        else if (NOT (IS_PLAYER_PLAYING( sub_774() )))
        {
            sub_572( ref l_U257, 0 );
            sub_572( ref l_U251, 0 );
        }
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
            {
                if (IS_GROUP_MEMBER( g_U10996[I]._fU0, sub_32263() ))
                {
                    REMOVE_CHAR_FROM_GROUP( g_U10996[I]._fU0 );
                }
            }
        }
        WAIT( 0 );
        if (g_U11081)
        {
            if (g_U11058)
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                    {
                        g_U11091[I] = 1;
                    }
                }
            }
        }
        if (g_U11060)
        {
            for ( I = 0; I < 2; I++ )
            {
                if (NOT (sub_39885( g_U10996[I]._fU0 )))
                {
                    if (NOT l_U204)
                    {
                        DELETE_CHAR( ref g_U10996[I]._fU0 );
                    }
                }
                if (DOES_VEHICLE_EXIST( g_U10996[I]._fU4 ))
                {
                    if (NOT (sub_40024( g_U10996[I]._fU4 )))
                    {
                        if (NOT (IS_CAR_DEAD( g_U10996[I]._fU4 )))
                        {
                            if (NOT (IS_CAR_A_MISSION_CAR( g_U10996[I]._fU4 )))
                            {
                                sub_40174( g_U10996[I]._fU4 );
                                PRINTSTRING( "ABILITY_BACKUP - DELTE CAR 2!! \n" );
                                DELETE_CAR( ref g_U10996[I]._fU4 );
                            }
                        }
                    }
                }
                if (I == 0)
                {
                    sub_3705( g_U10996[I]._fU0, 0 );
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_774() ))
        {
            if ((NOT g_U11060) AND (g_U11059))
            {
                if (NOT g_U11066)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                    if (I == 0)
                    {
                        l_U192 = 1;
                    }
                    else
                    {
                        l_U192 = 0;
                    }
                    SETTIMERA( 0 );
                    while (NOT sub_40532())
                    {
                        WAIT( 0 );
                    }
                }
            }
        }
        PRINTSTRING( "CLEANUP_BIKER_BACKUP_SCRIPT() - 2 \n" );
        sub_2828();;
        if (g_U11075)
        {
            if (NOT l_U188)
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                    {
                        SET_CHAR_VISIBLE( g_U10996[I]._fU0, 0 );
                    }
                }
                l_U202 = 0;
                if (NOT g_U11068)
                {
                    g_U11068 = 1;
                    l_U202 = 1;
                }
                l_U188 = 1;
            }
        }
        else if (l_U188)
        {
            for ( I = 0; I < 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                {
                    SET_CHAR_VISIBLE( g_U10996[I]._fU0, 1 );
                }
            }
            if (l_U202)
            {
                g_U11068 = 0;
                l_U202 = 0;
            }
            l_U188 = 0;
        }
        for ( I = 0; I < 2; I++ )
        {
            if (NOT g_U11068)
            {
                if (NOT (DOES_BLIP_EXIST( l_U140[I] )))
                {
                    if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
                    {
                        sub_5584( ref g_U10996[I]._fU0, ref l_U140[I] );
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U140[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U140[I] );
            }
        }
        if (g_U11074)
        {
            for ( I = 0; I < 2; I++ )
            {
                if (DOES_VEHICLE_EXIST( g_U10996[I]._fU4 ))
                {
                    bVar2 = true;
                    if (IS_CAR_A_MISSION_CAR( g_U10996[I]._fU4 ))
                    {
                        if (NOT l_U156[I])
                        {
                            bVar2 = false;
                        }
                        else if (NOT (l_U269[I] == g_U10996[I]._fU4))
                        {
                            bVar2 = false;
                        }
                    }
                    if (bVar2)
                    {
                        sub_40174( g_U10996[I]._fU4 );
                        PRINTSTRING( "ABILITY_BACKUP - DELTE CAR 3!! \n" );
                        DELETE_CAR( ref g_U10996[I]._fU4 );
                    }
                    g_U10996[I]._fU4 = nil;
                }
            }
            g_U11074 = 0;
        }
        for ( I = 0; I < 2; I++ )
        {
            g_U11055[I] = g_U10996[I]._fU4;
        }
        sub_41458( g_U11078 );
        if (NOT l_U155)
        {
            WAIT( 0 );
        }
        else
        {
            l_U155 = 0;
        }
    }
    return;
}

void sub_572(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_708(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11061) AND (NOT g_U11062))
    {
        if (bParam0)
        {
            g_U11060 = 1;
        }
        else
        {
            g_U11059 = 1;
        }
        g_U11066 = uParam1;
    }
    return;
}

void sub_774()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_866()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1170()
{
    if ((IS_HELP_MESSAGE_BEING_DISPLAYED()) || ((IS_MESSAGE_BEING_DISPLAYED()) || (sub_1179())))
    {
        return 1;
    }
    return 0;
}

int sub_1179()
{
    int I;

    if (NOT (IS_CHAR_INJURED( sub_866() )))
    {
        if (IS_ANY_SPEECH_PLAYING( sub_866() ))
        {
            return 1;
        }
    }
    for ( I = 0; I < g_U10996; I++ )
    {
        if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
        {
            if (IS_ANY_SPEECH_PLAYING( g_U10996[I]._fU0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_1348()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_774() )))
    {
        if ((sub_1382()) AND (ARE_WIDESCREEN_BORDERS_ACTIVE()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_1382()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_1710()
{
    return 0;
}

int sub_1903(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) == 25)
        {
            if (sub_1941( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_1941( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_1941(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;

    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        GET_CHAR_COORDINATES( sub_866(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_866() ))
        {
            uVar5._fU8 = 1.00000000;
        }
    }
    uVar16 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    if (NOT (iParam2 == -1))
    {
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam2, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11, ref uVar15 );
    }
    else
    {
        GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar12 );
    fVar14 = 1.00000000;
    if (NOT (sub_2162( uVar5, uVar8 )))
    {
        fVar14 *= 0.00000000;
    }
    fVar13 = uVar5._fU8 - uVar8._fU8;
    if (fVar13 < 0.00000000)
    {
        fVar13 *= -1.00000000;
    }
    if (NOT (fVar13 < 4.00000000))
    {
        if (fVar13 > 20.00000000)
        {
            fVar13 = 20.00000000;
        }
        fVar14 *= (20.00000000 - fVar13) / 20.00000000;
    }
    if (fVar12 < 100.00000000)
    {
        fVar14 *= fVar12 / 100.00000000;
    }
    if (sub_2394( uVar8._fU0, uVar8._fU4, uVar8._fU8, 5.00000000, 1128792064 ))
    {
        fVar14 *= 0.00000000;
    }
    if (fVar14 >= 1.00000000)
    {
        (uParam0^) = {uVar8};
        (uParam1^) = uVar11;
        return 1;
    }
    if (fVar14 > 0.00000000)
    {
        if (fVar14 > l_U208)
        {
            l_U266 = {uVar8};
            l_U215 = uVar11;
            l_U208 = fVar14;
        }
    }
    return 0;
}

int sub_2162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

int sub_2394(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_GAME_VIEWPORT_ID( ref uVar7 );
    if (CAM_IS_SPHERE_VISIBLE( uVar7, uParam0, uParam1, uParam2, uParam3 ))
    {
        if (IS_PLAYER_PLAYING( sub_774() ))
        {
            GET_CHAR_COORDINATES( sub_866(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {(vector( uParam0, uParam1, uParam2)) - vVar8};
            if ((VMAG( uVar11 )) < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_2828()
{
    int I;
    unknown uVar3;

    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U248[0] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U248[1] );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ability_stats" );
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
        {
            REMOVE_CHAR_FROM_GROUP( g_U10996[I]._fU0 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            if (DOES_VEHICLE_EXIST( g_U10996[I]._fU4 ))
            {
                if (IS_VEH_DRIVEABLE( g_U10996[I]._fU4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( g_U10996[I]._fU0, g_U10996[I]._fU4 )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( g_U10996[I]._fU0, g_U10996[I]._fU4, 20.00000000, 20.00000000, 5.00000000, 0 )))
                        {
                            TASK_GOTO_CAR( 0, g_U10996[I]._fU4, 9999999, 10.00000000 );
                        }
                        TASK_ENTER_CAR_AS_DRIVER( 0, g_U10996[I]._fU4, -2 );
                        TASK_CAR_DRIVE_WANDER( 0, g_U10996[I]._fU4, 25.00000000, 2 );
                    }
                    else
                    {
                        TASK_CAR_DRIVE_WANDER( 0, g_U10996[I]._fU4, 25.00000000, 2 );
                    }
                }
                else
                {
                    TASK_WANDER_STANDARD( 0 );
                }
            }
            else
            {
                TASK_WANDER_STANDARD( 0 );
            }
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( g_U10996[I]._fU0, uVar3 );
            CLEAR_SEQUENCE_TASK( uVar3 );
            SET_CHAR_KEEP_TASK( g_U10996[I]._fU0, 1 );
        }
        if (NOT l_U204)
        {
            if (l_U159[I])
            {
                if (DOES_VEHICLE_EXIST( l_U269[I] ))
                {
                    PRINTSTRING( "ABILITY_BACKUP - MARK_CAR_AS_NO_LONGER_NEEDED - cleanup - bBackupBikerBikeSetAsTemporaryMissionCar \n" );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U269[I] );
                    l_U269[I] = nil;
                }
            }
        }
        g_U11049[I] = nil;
        g_U11055[I] = nil;
        g_U11085[I] = 0;
        PRINTSTRING( "ABILITY_BACKUP - MARK_CAR_AS_NO_LONGER_NEEDED - Cleanup \n" );
    }
    for ( I = 0; I < 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U143[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U143[I] );
        }
        if (DOES_BLIP_EXIST( l_U140[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U140[I] );
        }
        if (DOES_BLIP_EXIST( l_U146[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U146[I] );
        }
    }
    sub_3705( g_U10996[0]._fU0, 1 );
    if (l_U182)
    {
        SET_RADAR_ZOOM( 0 );
        l_U182 = 0;
    }
    sub_4123( 1, "BB_WAYP_H1" );
    sub_4123( 1, "BB_WAYP_H2" );
    sub_4473( 1 );
    sub_4514();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3705(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U116 ))
        {
            DELETE_OBJECT( ref l_U116 );
            l_U116 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U116 ))
    {
        if (IS_OBJECT_ATTACHED( l_U116 ))
        {
            DETACH_OBJECT( l_U116, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U116 );
        l_U116 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U118 ))
        {
            if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 )))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (HAVE_ANIMS_LOADED( l_U118 ))
    {
        REMOVE_ANIMS( l_U118 );
    }
    if (HAS_MODEL_LOADED( -268530289 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    }
    l_U117 = nil;
    l_U111 = 0.00000000;
    if (l_U105)
    {
        sub_4001( ref l_U115 );
        l_U105 = 0;
    }
    return;
}

void sub_4001(unknown uParam0)
{
    if (sub_4013( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_4013(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

void sub_4123(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((l_U5) AND (g_U10534 == iParam0))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_4344();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_774(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_4344()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_4473(boolean bParam0)
{
    if (bParam0)
    {
        g_U11080 = 0;
    }
    else
    {
        g_U11080 = 1;
    }
    return;
}

void sub_4514()
{
    g_U11059 = 0;
    g_U11060 = 0;
    g_U11058 = 0;
    g_U11061 = 0;
    g_U11062 = 0;
    g_U11065 = 0;
    g_U11066 = 0;
    g_U11067 = 0;
    g_U11068 = 0;
    g_U11069 = 0;
    g_U11070 = 0;
    g_U11084 = 0;
    g_U11100 = 0;
    g_U11101 = 0;
    return;
}

void sub_5289(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_5584(unknown uParam0, unknown uParam1)
{
    ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    CHANGE_BLIP_COLOUR( (uParam1^), 3 );
    if (g_U12379)
    {
        CHANGE_BLIP_DISPLAY( (uParam1^), 0 );
        l_U191 = 1;
    }
    else
    {
        CHANGE_BLIP_DISPLAY( (uParam1^), 1 );
        l_U191 = 0;
    }
    return;
}

void sub_5697(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_5713())
        {
            if (NOT sub_5771())
            {
                sub_5814();
            }
        }
    }
    if (DOES_CHAR_EXIST( iParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            for ( I = 0; I < 2; I++ )
            {
                if (g_U10996[I]._fU0 == iParam0)
                {
                    iVar5 = I;
                }
            }
            if (bParam1)
            {
                ;
            }
            else if (IS_PLAYER_PLAYING( sub_774() ))
            {
                CLEAR_CHAR_TASKS( g_U10996[iVar5]._fU0 );
                if (g_U11058)
                {
                    ;
                }
            }
            g_U11085[iVar5] = bParam1;
        }
    }
    return;
}

int sub_5713()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_5771()
{
    if (NOT sub_5713())
    {
        return 0;
    }
    return g_U11058;
}

void sub_5814()
{
    g_U11058 = 1;
    return;
}

void sub_6413(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11049[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11049[uParam0], FLOOR( g_U11112[uParam0] ) );
        GET_CHAR_HEALTH( g_U11049[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11133[uParam0] );
        SET_CHAR_HEALTH( g_U11049[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11049[uParam0], sub_6552( g_U11115[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11049[uParam0], sub_7206( g_U11115[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11049[uParam0], sub_7206( g_U11115[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11049[uParam0], FLOOR( g_U11118[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11049[uParam0], FLOOR( g_U11121[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11049[uParam0], g_U11124[uParam0] );
    }
    return;
}

int sub_6552(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_7206(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

int sub_7630(int iParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (iParam0 == g_U10996[I]._fU0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7759(int iParam0)
{
    if (NOT (l_U227 == iParam0))
    {
        l_U227 = iParam0;
        l_U228 = 0;
        l_U155 = 1;
    }
    return;
}

int sub_8803(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_866() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
                GET_KEY_FOR_CHAR_IN_ROOM( sub_866(), ref iVar4 );
                if (iVar3 == iVar4)
                {
                    return 1;
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_9218(unknown uParam0)
{
    unknown uVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
        if (NOT (DOES_CHAR_EXIST( uVar3 )))
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_9647(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, sub_9658() ))
    {
        return 1;
    }
    return 0;
}

int sub_9658()
{
    return 1063483177;
}

void sub_11141(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    if (NOT g_U11068)
    {
        if (l_U190)
        {
            if (NOT (IS_CHAR_INJURED( g_U10996[iParam4]._fU0 )))
            {
                if (IS_CHAR_IN_ANY_CAR( g_U10996[iParam4]._fU0 ))
                {
                    if (DOES_BLIP_EXIST( (uParam0^) ))
                    {
                        if (NOT ((GET_BLIP_INFO_ID_TYPE( (uParam0^) )) == 4))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
                        }
                    }
                    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
                    {
                        ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
                    }
                    if (DOES_BLIP_EXIST( (uParam0^) ))
                    {
                        SET_BLIP_COORDINATES( (uParam0^), uParam1 );
                    }
                }
                else if (DOES_BLIP_EXIST( (uParam0^) ))
                {
                    if ((GET_BLIP_INFO_ID_TYPE( (uParam0^) )) == 4)
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
                    }
                }
                if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
                {
                    ADD_BLIP_FOR_CHAR( g_U10996[iParam4]._fU0, uParam0 );
                }
            }
            if (DOES_BLIP_EXIST( (uParam0^) ))
            {
                CHANGE_BLIP_COLOUR( (uParam0^), 3 );
                if (iParam4 == 0)
                {
                    CHANGE_BLIP_SPRITE( (uParam0^), 95 );
                }
                else
                {
                    CHANGE_BLIP_SPRITE( (uParam0^), 96 );
                }
                if (NOT (sub_11484( g_U10996[iParam4]._fU0 )))
                {
                    CHANGE_BLIP_DISPLAY( (uParam0^), 2 );
                }
                else
                {
                    CHANGE_BLIP_DISPLAY( (uParam0^), 0 );
                }
                CHANGE_BLIP_PRIORITY( (uParam0^), 3 );
                if (iParam4 == 0)
                {
                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( (uParam0^), "BLIP_95" );
                }
                else
                {
                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( (uParam0^), "BLIP_96" );
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
    }
    return;
}

int sub_11484(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_774() ))
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_866() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_866(), ref uVar3 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12625()
{
    if ((sub_12635( 17 )) || ((sub_12635( 16 )) || ((sub_12635( 15 )) || ((sub_12635( 14 )) || ((sub_12635( 7 )) || ((sub_12635( 6 )) || ((sub_12635( 5 )) || (sub_12635( 4 )))))))))
    {
        return 1;
    }
    return 0;
}

int sub_12635(unknown uParam0)
{
    int iVar3;

    GET_PAD_STATE( 0, uParam0, ref iVar3 );
    if (iVar3 > 128)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_14095(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_14122( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_866() )))
        {
            sub_14261( 0, sub_866(), "JOHNNY", 0 );
        }
        if (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 )))
        {
            sub_14261( 1, g_U10996[0]._fU0, "TERRY", 0 );
        }
        if (NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 )))
        {
            sub_14261( 2, g_U10996[1]._fU0, "CLAY", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_14122(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_14139();
    return;
}

void sub_14139()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_14261(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_14341( "\n PED NUMBER ", uParam0 );
    sub_14381( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_14341(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14381(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14579(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14600( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_14600(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_14654( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_14654(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_14676( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_15364( ref g_U8868, ref l_U6 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_14676(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_14753( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_14753( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_14753( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_14753(unknown uParam0)
{
    return;
}

void sub_15364(int iParam0, int iParam1)
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

int sub_15899(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            return 0;
        }
    }
    return 1;
}

void sub_16116(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((IS_PED_A_MISSION_PED( uParam0 )) AND (NOT IS_MINIGAME_IN_PROGRESS()))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U110 += fVar3 * 1000.00000000;
                l_U111 += fVar3 * 1000.00000000;
                if (l_U107)
                {
                    if (HAVE_ANIMS_LOADED( l_U118 ))
                    {
                        if ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 ))))
                        {
                            l_U110 = 0.00000000;
                            sub_16309( uParam0, 0 );
                            l_U107 = 0;
                        }
                    }
                    else
                    {
                        l_U110 = 0.00000000;
                        sub_16309( uParam0, 0 );
                        l_U107 = 0;
                    }
                }
                switch (l_U114)
                {
                    case 0:
                    if (NOT (sub_16428( uParam0 )))
                    {
                        l_U111 = 0.00000000;
                    }
                    if (l_U104)
                    {
                        sub_17406( uParam0 );
                    }
                    if (l_U111 > 5000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U118 )))
                        {
                            REQUEST_ANIMS( l_U118 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U118 ))
                        {
                            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))))
                            {
                                sub_16309( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U119, l_U118, 8.00000000, -1, 3328 );
                                l_U109 = 0;
                                l_U107 = 1;
                                l_U110 = 0.00000000;
                                l_U114 = 1;
                            }
                            else
                            {
                                sub_17406( uParam0 );
                                l_U110 = 0.00000000;
                                l_U114 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U118 ))
                    {
                        REMOVE_ANIMS( l_U118 );
                    }
                    if (HAS_MODEL_LOADED( -268530289 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
                    }
                    break;
                    case 1:
                    if (sub_16439( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U118 )))
                        {
                            REQUEST_ANIMS( l_U118 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (DOES_OBJECT_EXIST( l_U116 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U118 ))
                            {
                                if ((NOT l_U109) AND ((NOT (sub_16600( uParam0 ))) AND ((NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 ))) AND ((NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 ))) AND ((NOT (sub_18214( uParam0 ))) AND ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))) AND ((NOT (IS_CHAR_GESTURING( uParam0 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 ))) AND ((NOT (IS_CHAR_DUCKING( uParam0 ))) AND (NOT (IS_PED_RAGDOLL( uParam0 )))))))))))))
                                {
                                    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (l_U111 > 60000.00000000))
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_16309( uParam0, 1 );
                                        l_U111 = 0.00000000;
                                        l_U107 = 1;
                                    }
                                    else if (l_U110 > 10000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_16309( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U120, l_U118, 8.00000000, -1, 3328 );
                                        }
                                        l_U107 = 1;
                                        l_U110 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U109)
                            {
                                if (NOT l_U105)
                                {
                                    if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                    {
                                        if (HAVE_ANIMS_LOADED( l_U118 ))
                                        {
                                            if (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 ))
                                            {
                                                GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U118, l_U119, ref fVar3 );
                                                if (fVar3 > l_U113)
                                                {
                                                    l_U115 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U116, l_U127, l_U130, 1065353216 );
                                                    l_U105 = 1;
                                                }
                                            }
                                            else
                                            {
                                                l_U115 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U116, l_U127, l_U130, 1065353216 );
                                                l_U105 = 1;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
                                        if (DOES_VEHICLE_EXIST( uVar4 ))
                                        {
                                            if (NOT (IS_CAR_DEAD( uVar4 )))
                                            {
                                                if (NOT (DOES_CAR_HAVE_ROOF( uVar4 )))
                                                {
                                                    if (NOT (sub_18779( uParam0 )))
                                                    {
                                                        l_U115 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U116, l_U127, l_U130, 1065353216 );
                                                        l_U105 = 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else if ((sub_18779( uParam0 )) || (sub_18936( uParam0 )))
                                {
                                    sub_4001( ref l_U115 );
                                    l_U105 = 0;
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U118 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U118, l_U119, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U116 )))
                                    {
                                        if (fVar3 > l_U112)
                                        {
                                            sub_17406( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_17406( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_17406( uParam0 );
                        }
                        if (sub_18214( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U114 = 0;
                        l_U111 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_3705( uParam0, 0 );
                if (l_U108)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 4 \n" );
                }
            }
        }
        else
        {
            sub_3705( uParam0, 1 );
            if (l_U108)
            {
                PRINTSTRING( "REMOVE_CIGGY - 5 \n" );
            }
        }
    }
    else
    {
        sub_3705( uParam0, 0 );
        if (l_U108)
        {
            PRINTSTRING( "REMOVE_CIGGY - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U116 ))
        {
            if (HAVE_ANIMS_LOADED( l_U118 ))
            {
                if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 )))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_16309(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_16428(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_16439( uParam0 )))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 > 2.00000000)
        {
            return 0;
        }
        if (IS_CHAR_GESTURING( uParam0 ))
        {
            return 0;
        }
    }
    else
    {
        l_U111 = 999999.80000000;
    }
    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_866(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    if (sub_16600( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_16439(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U104)
    {
        return 1;
    }
    if (l_U106)
    {
        sub_3705( uParam0, 1 );
        l_U106 = 0;
        if (l_U108)
        {
            PRINTSTRING( "REMOVE_CIGGY - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((IS_CHAR_IN_WATER( uParam0 )) || ((sub_16600( uParam0 )) || ((IS_CHAR_ARMED( uParam0, 7 )) || ((IS_CHAR_SHOOTING( uParam0 )) || ((IS_CHAR_IN_MELEE_COMBAT( uParam0 )) || (IS_PED_IN_COMBAT( uParam0 )))))))
            {
                sub_3705( uParam0, 1 );
                if (l_U108)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 1B \n" );
                }
                return 0;
            }
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_VEHICLE_EXIST( uVar3 ))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    sub_3705( uParam0, 0 );
                    if (l_U108)
                    {
                        PRINTSTRING( "REMOVE_CIGGY - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_16832( uParam0 ))
            {
                sub_3705( uParam0, 0 );
                if (l_U108)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_3705( uParam0, 1 );
        if (l_U108)
        {
            PRINTSTRING( "REMOVE_CIGGY - 3B \n" );
        }
        return 0;
    }
    return 1;
}

int sub_16600(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 83, ref iVar3 );
        if (NOT (iVar3 == 7))
        {
            return 1;
        }
    }
    return 0;
}

int sub_16832(int iParam0)
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
                if (sub_16896( uVar3 ))
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

int sub_16896(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_17406(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U116 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -268530289, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U116, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U116, iVar6 );
            }
        }
        if (l_U104)
        {
            if (IS_OBJECT_ATTACHED( l_U116 ))
            {
                DETACH_OBJECT( l_U116, 1 );
            }
        }
        if (sub_17571( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U116 ))
            {
                DETACH_OBJECT( l_U116, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U116 )))
        {
            ATTACH_OBJECT_TO_PED( l_U116, uParam0, 1232, l_U121, l_U124, 0 );
            l_U117 = uParam0;
        }
        if (NOT (l_U114 == 1))
        {
            l_U114 = 1;
            l_U110 = 18000.00000000;
        }
    }
    return;
}

int sub_17571(int iParam0)
{
    if (iParam0 == l_U117)
    {
        return 1;
    }
    return 0;
}

int sub_18214(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_18779(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 > 1.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_18936(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if ((IS_THIS_MODEL_A_HELI( uVar4 )) || (IS_THIS_MODEL_A_CAR( uVar4 )))
                {
                    if (DOES_CAR_HAVE_ROOF( uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_19650(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_5697( g_U11049[I], uParam0 );
    }
    return;
}

void sub_19897(boolean bParam0)
{
    if (bParam0)
    {
        g_U11075 = 0;
    }
    else
    {
        g_U11075 = 1;
    }
    return;
}

void sub_20153(int iParam0)
{
    if (NOT (iParam0 == l_U238))
    {
        PRINTSTRING( "ABILITY_BACKUP.SC - GOTO_CONV_STATE - old state = " );
        PRINTINT( l_U238 );
        PRINTSTRING( ", new state = " );
        PRINTINT( iParam0 );
        PRINTSTRING( "\n" );
        l_U219 = 0.00000000;
        l_U216 = 0.00000000;
        l_U217 = 0.00000000;
        l_U238 = iParam0;
        l_U240 = 0;
        l_U239 = 0;
    }
    return;
}

int sub_20402(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_ON_FOOT( uParam0 ))
        {
            return 1;
        }
        else if (IS_CHAR_ON_ANY_BIKE( uParam0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_20499()
{
    if (g_U11101)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            return 1;
        }
    }
    return 0;
}

void sub_21638(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_21847(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_14753( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_14753( "\n CONVERSATION PAUSED AT LINE " );
            sub_21987( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_14753( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_14753( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_14753( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_21987(unknown uParam0)
{
    return;
}

void sub_22489(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22510( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

int sub_22510(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_14654( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_27189()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
        {
            if ((IS_CHAR_IN_MELEE_COMBAT( g_U10996[I]._fU0 )) || ((IS_CHAR_SHOOTING( g_U10996[I]._fU0 )) || (IS_PED_IN_COMBAT( g_U10996[I]._fU0 ))))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_27813()
{
    int I;
    int iVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( g_U10996[I]._fU0 )))
            {
                GET_CHAR_HEALTH( g_U10996[I]._fU0, ref iVar3 );
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U10996[I]._fU0, sub_866(), 0 )))
                {
                    if (iVar3 < l_U244[I])
                    {
                        if ((HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( g_U10996[I]._fU0, 57 )) AND (NOT (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( g_U10996[I]._fU0, 56 ))))
                        {
                            return 1;
                        }
                    }
                }
                l_U244[I] = iVar3;
                if (IS_PED_IN_COVER( g_U10996[I]._fU0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_30653(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_17571( uParam0 ))
        {
            if (NOT l_U107)
            {
                if ((l_U111 > 10000.00000000) AND (l_U110 < 1000.00000000))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_31238()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    int J;
    int I;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        for ( J = 0; J < 2; J++ )
        {
            if ((l_U165) || (sub_1348()))
            {
                if (sub_31300( l_U251 ))
                {
                    sub_572( ref l_U251, 0 );
                }
                if (NOT l_U149[J])
                {
                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - control switched OFF - processing ped " );
                    PRINTINT( J );
                    PRINTSTRING( "\n" );
                    iVar8 = nil;
                    if (IS_PLAYER_PLAYING( sub_774() ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_866() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_866(), ref iVar8 );
                        }
                    }
                    if (NOT g_U11085[J])
                    {
                        if (J == 0)
                        {
                            sub_3705( g_U10996[J]._fU0, 0 );
                        }
                        if (g_U11058)
                        {
                            l_U193[J] = 1;
                        }
                        else
                        {
                            l_U193[J] = 0;
                        }
                        if (l_U193[J])
                        {
                            l_U162[J] = 0;
                            if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                            {
                                if (IS_PLAYER_PLAYING( sub_774() ))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( sub_866(), g_U10996[J]._fU4 )))
                                    {
                                        if (NOT (g_U10996[J]._fU4 == iVar8))
                                        {
                                            if (NOT (IS_CAR_A_MISSION_CAR( g_U10996[J]._fU4 )))
                                            {
                                                if (NOT (sub_9647( g_U10996[J]._fU4 )))
                                                {
                                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - bike set as mission car \n" );
                                                    SET_CAR_AS_MISSION_CAR( g_U10996[J]._fU4 );
                                                    l_U269[J] = g_U10996[J]._fU4;
                                                    l_U156[J] = 1;
                                                }
                                            }
                                        }
                                        FREEZE_CAR_POSITION( g_U10996[J]._fU4, 1 );
                                        SET_CAR_COLLISION( g_U10996[J]._fU4, 0 );
                                        SET_CAR_VISIBLE( g_U10996[J]._fU4, 0 );
                                        PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - bBackupBikerBikeWarped set to TRUE \n" );
                                        l_U162[J] = 1;
                                    }
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( g_U10996[J]._fU0 )))
                            {
                                if (NOT (IS_GROUP_MEMBER( g_U10996[J]._fU0, sub_32263() )))
                                {
                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped entered into group \n" );
                                    SET_GROUP_MEMBER( sub_32263(), g_U10996[J]._fU0 );
                                    SET_CHAR_NEVER_LEAVES_GROUP( g_U10996[J]._fU0, 1 );
                                    l_U174[J] = 1;
                                }
                                else
                                {
                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped already in group \n" );
                                }
                                SET_CHAR_PROOFS( g_U10996[J]._fU0, 1, 1, 1, 1, 1 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[J]._fU0 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U10996[J]._fU0, 1 );
                                SET_CHAR_COLLISION( g_U10996[J]._fU0, 0 );
                                SET_CHAR_VISIBLE( g_U10996[J]._fU0, 0 );
                                SET_CHAR_GRAVITY( g_U10996[J]._fU0, 0 );
                                l_U199[J] = 0;
                            }
                        }
                        else
                        {
                            PRINTSTRING( "bHadArrivedAtPlayerWhenControlGotSwitchedOff is false \n" );
                            if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                            {
                                FREEZE_CAR_POSITION( g_U10996[J]._fU4, 1 );
                                SET_CAR_COLLISION( g_U10996[J]._fU4, 0 );
                                SET_CAR_VISIBLE( g_U10996[J]._fU4, 0 );
                            }
                            sub_32850( g_U10996[J]._fU0, 0 );
                            l_U199[J] = 0;
                        }
                        l_U152[J] = 1;
                    }
                    else
                    {
                        l_U152[J] = 0;
                    }
                    l_U149[J] = 1;
                }
                else if (NOT g_U11085[J])
                {
                    if (NOT (IS_CHAR_INJURED( g_U10996[J]._fU0 )))
                    {
                        GET_CAR_CHAR_IS_USING( g_U10996[J]._fU0, ref iVar8 );
                        if (DOES_VEHICLE_EXIST( iVar8 ))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[J]._fU0 );
                            FREEZE_CHAR_POSITION( g_U10996[J]._fU0, 1 );
                        }
                        else
                        {
                            FREEZE_CHAR_POSITION( g_U10996[J]._fU0, 0 );
                        }
                    }
                }
                if (l_U152[J])
                {
                    if (g_U11085[J])
                    {
                        if (l_U174[J])
                        {
                            SET_CHAR_NEVER_LEAVES_GROUP( g_U10996[J]._fU0, 0 );
                            REMOVE_CHAR_FROM_GROUP( g_U10996[J]._fU0 );
                            l_U174[J] = 0;
                            PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped removed from group \n" );
                        }
                        if (NOT l_U199[J])
                        {
                            sub_33766( ref g_U10996[J]._fU0 );
                            l_U199[J] = 1;
                        }
                    }
                }
            }
            else if (l_U149[J])
            {
                PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - control switched ON - processing ped " );
                PRINTINT( J );
                PRINTSTRING( "\n" );
                if (NOT (IS_CAR_DEAD( g_U10996[J]._fU4 )))
                {
                    SET_CAR_COLLISION( g_U10996[J]._fU4, 1 );
                    FREEZE_CAR_POSITION( g_U10996[J]._fU4, 0 );
                    SET_CAR_VISIBLE( g_U10996[J]._fU4, 1 );
                    if (l_U156[J])
                    {
                        PRINTSTRING( "ABILITY_BACKUP - CAR MARKED AS NO LONGER NEEDED because bBackupBikerBikeSetAsMissionCarForCutscene \n" );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U269[J] );
                        l_U269[J] = nil;
                        l_U156[J] = 0;
                    }
                }
                if (NOT l_U199[J])
                {
                    sub_33766( ref g_U10996[J]._fU0 );
                    l_U199[J] = 1;
                }
                if (NOT g_U11085[J])
                {
                    if (l_U193[J])
                    {
                        if (NOT (IS_CHAR_INJURED( g_U10996[J]._fU0 )))
                        {
                            if (l_U174[J])
                            {
                                SET_CHAR_NEVER_LEAVES_GROUP( g_U10996[J]._fU0, 0 );
                                REMOVE_CHAR_FROM_GROUP( g_U10996[J]._fU0 );
                                l_U174[J] = 0;
                                PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped removed from group \n" );
                            }
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[J]._fU0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U10996[J]._fU0, 0 );
                            SET_CHAR_COLLISION( g_U10996[J]._fU0, 1 );
                            SET_CHAR_VISIBLE( g_U10996[J]._fU0, 1 );
                            SET_CHAR_GRAVITY( g_U10996[J]._fU0, 1 );
                            SET_CHAR_PROOFS( g_U10996[J]._fU0, 0, 0, 0, 0, 0 );
                            FREEZE_CHAR_POSITION( g_U10996[J]._fU0, 0 );
                            GET_CHAR_COORDINATES( g_U10996[J]._fU0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if (GET_SAFE_POSITION_FOR_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                            {
                                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 1.00000000, 1.00000000, 1.00000000 )))
                                {
                                    SET_CHAR_COORDINATES( g_U10996[J]._fU0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped set to pos " );
                                    PRINTVECTOR( uVar2 );
                                    PRINTSTRING( "\n" );
                                }
                            }
                            if (l_U162[J])
                            {
                                if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_866(), 0.00000000, -3.00000000 + ((TO_FLOAT( J )) * 3.00000000), 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                    if (GET_SAFE_POSITION_FOR_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                                    {
                                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 2.00000000, 2.00000000, 2.00000000 )))
                                        {
                                            PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - set car to coords " );
                                            PRINTVECTOR( uVar2 );
                                            PRINTSTRING( "\n" );
                                            SET_CAR_COORDINATES( g_U10996[J]._fU4, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                            SET_CAR_ON_GROUND_PROPERLY( g_U10996[J]._fU4 );
                                            GET_CHAR_HEADING( sub_866(), ref uVar13 );
                                            SET_CAR_HEADING( g_U10996[J]._fU4, uVar13 );
                                        }
                                        else
                                        {
                                            for ( I = 1; I < 40; I++ )
                                            {
                                                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar2._fU0, uVar2._fU4, uVar2._fU8, I, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8, ref uVar13 );
                                                if ((NOT (sub_35280( uVar5 ))) AND ((NOT g_U11085[J]) AND (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar5._fU0, uVar5._fU4, uVar5._fU8, 2.00000000, 2.00000000, 5.00000000 )))))
                                                {
                                                    SET_CAR_HEADING( g_U10996[J]._fU4, uVar13 );
                                                    SET_CAR_COORDINATES( g_U10996[J]._fU4, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                                                    SET_CAR_ON_GROUND_PROPERLY( g_U10996[J]._fU4 );
                                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - bike placed on nearby road at" );
                                                    PRINTVECTOR( uVar5 );
                                                    PRINTSTRING( "\n" );
                                                    I = 40;
                                                }
                                            }
                                        }
                                    }
                                }
                                l_U162[J] = 0;
                            }
                            if (IS_CHAR_IN_ANY_CAR( sub_866() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_866(), ref iVar8 );
                                if (NOT (iVar8 == g_U10996[J]._fU4))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                                    {
                                        GET_DRIVER_OF_CAR( g_U10996[J]._fU4, ref uVar12 );
                                        if (NOT (DOES_CHAR_EXIST( uVar12 )))
                                        {
                                            WARP_CHAR_INTO_CAR( g_U10996[J]._fU0, g_U10996[J]._fU4 );
                                            PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - warping into own bike \n" );
                                        }
                                    }
                                }
                                else if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( g_U10996[J]._fU4, 0 ))
                                    {
                                        PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - warping into players car as passenger \n" );
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( g_U10996[J]._fU0, g_U10996[J]._fU4, 0 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (g_U11070)
                {
                    PRINTSTRING( "ABILITY_BACKUP - g_bBuddyBackupSetPositionsForAfterCutscene = TRUE \n" );
                    if (NOT (IS_CHAR_INJURED( g_U10996[J]._fU0 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[J]._fU0 );
                        if (DOES_VEHICLE_EXIST( g_U10996[J]._fU4 ))
                        {
                            if (NOT (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 )))
                            {
                                PRINTSTRING( "ABILITY_BACKUP - backup bike no longer driveable!! \n" );
                                g_U10996[J]._fU4 = nil;
                            }
                        }
                        if (NOT (DOES_VEHICLE_EXIST( g_U10996[J]._fU4 )))
                        {
                            if (J == 0)
                            {
                                PRINTSTRING( "ABILITY_BACKUP - Terry bike created \n" );
                            }
                            else
                            {
                                PRINTSTRING( "ABILITY_BACKUP - Clay bike created \n" );
                            }
                        }
                        if (DOES_VEHICLE_EXIST( g_U10996[J]._fU4 ))
                        {
                            if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                            {
                                if (NOT (IS_CAR_A_MISSION_CAR( g_U10996[J]._fU4 )))
                                {
                                    if (sub_9647( g_U10996[J]._fU4 ))
                                    {
                                        SET_CAR_AS_MISSION_CAR( g_U10996[J]._fU4 );
                                        l_U269[J] = g_U10996[J]._fU4;
                                        l_U159[J] = 1;
                                    }
                                }
                            }
                        }
                        if (g_U11088[J])
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[J]._fU0 );
                            SET_CHAR_COORDINATES( g_U10996[J]._fU0, g_U11158[J]._fU0, g_U11158[J]._fU4, g_U11158[J]._fU8 );
                            SET_CHAR_HEADING( g_U10996[J]._fU0, g_U11130[J] );
                            if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                            {
                                SET_CAR_COORDINATES( g_U10996[J]._fU4, g_U11151[J]._fU0, g_U11151[J]._fU4, g_U11151[J]._fU8 );
                                SET_CAR_HEADING( g_U10996[J]._fU4, g_U11127[J] );
                                SET_CAR_ENGINE_ON( g_U10996[J]._fU4, 0, 0 );
                            }
                        }
                        else if (IS_VEH_DRIVEABLE( g_U10996[J]._fU4 ))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[J]._fU0 );
                            SET_CAR_COORDINATES( g_U10996[J]._fU4, g_U11151[J]._fU0, g_U11151[J]._fU4, g_U11151[J]._fU8 );
                            SET_CAR_HEADING( g_U10996[J]._fU4, g_U11127[J] );
                            GET_DRIVER_OF_CAR( g_U10996[J]._fU4, ref uVar12 );
                            if (NOT (DOES_CHAR_EXIST( uVar12 )))
                            {
                                WARP_CHAR_INTO_CAR( g_U10996[J]._fU0, g_U10996[J]._fU4 );
                            }
                            else if (IS_CAR_PASSENGER_SEAT_FREE( g_U10996[J]._fU4, 0 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( g_U10996[J]._fU0, g_U10996[J]._fU4, 0 );
                            }
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U10996[J]._fU0 );
                            SET_CHAR_COORDINATES( g_U10996[J]._fU0, g_U11151[J]._fU0, g_U11151[J]._fU4, g_U11151[J]._fU8 );
                            SET_CHAR_HEADING( g_U10996[J]._fU0, g_U11127[J] );
                        }
                    }
                    if (J == 1)
                    {
                        g_U11070 = 0;
                    }
                    PRINTSTRING( "ABILITY BACKUP - backup ped position set after cutscene \n" );
                }
                l_U149[J] = 0;
            }
        }
    }
    return;
}

int sub_31300(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_14753( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_14753( "\n speech is not playing" );
    }
    return 0;
}

void sub_32263()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_32850(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "ABILITY_BACKUP - SAFE_FREEZE_AND_HIDE_CHAR called with " );
    if (bParam1)
    {
        PRINTSTRING( "TRUE\n" );
    }
    else
    {
        PRINTSTRING( "FALSE\n" );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (bParam1)
        {
            iVar5 = 0;
        }
        else
        {
            iVar5 = 1;
        }
        uVar4 = nil;
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            iVar6 = sub_33031( ref uParam0, uVar4 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam0 );
        }
        SET_CHAR_COLLISION( uParam0, bParam1 );
        SET_CHAR_VISIBLE( uParam0, bParam1 );
        SET_CHAR_GRAVITY( uParam0, bParam1 );
        SET_CHAR_PROOFS( uParam0, iVar5, iVar5, iVar5, iVar5, iVar5 );
        FREEZE_CHAR_POSITION( uParam0, iVar5 );
        if (DOES_VEHICLE_EXIST( uVar4 ))
        {
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (iVar6 > -2)
                {
                    if (iVar6 == -1)
                    {
                        WARP_CHAR_INTO_CAR( uParam0, uVar4 );
                    }
                    else
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( uParam0, uVar4, iVar6 );
                    }
                }
            }
        }
    }
    return;
}

int sub_33031(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int Result;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( (uParam0^), uParam1 ))
            {
                GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
                if (iVar4 == (uParam0^))
                {
                    return -1;
                }
                else
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam1, ref iVar5 );
                    for ( Result = 0; Result < iVar5; Result++ )
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam1, Result )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam1, Result, ref iVar4 );
                            if (iVar4 == (uParam0^))
                            {
                                return Result;
                            }
                        }
                    }
                }
            }
        }
    }
    return -2;
}

void sub_33766(unknown uParam0)
{
    sub_32850( (uParam0^), 1 );
    return;
}

int sub_35280(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (sub_35324( uParam0, 1055.97400000, -303.51480000, 19.79790000, 1060.62400000, -290.16480000, 24.49790000 ))
    {
        return 1;
    }
    else if (sub_35324( uParam0, -1152.71600000, 1181.71500000, 15.99260000, -1142.89100000, 1195.99000000, 20.94260000 ))
    {
        return 1;
    }
    else if (sub_35324( uParam0, -311.95000000, 1533.80000000, 19.00000000, -302.77500000, 1544.82500000, 23.52500000 ))
    {
        return 1;
    }
    else if (sub_35324( uParam0, -517.63170000, 361.37870000, 5.32590000, -506.73170000, 372.57870000, 9.92590000 ))
    {
        return 1;
    }
    else if (sub_35324( uParam0, -1303.47300000, 278.35980000, 9.28780000, -1297.07300000, 288.40980000, 14.08780000 ))
    {
        return 1;
    };;;;;
    return 0;
}

int sub_35324(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((uParam0._fU8 < uParam6._fU8) AND ((uParam0._fU8 > uParam3._fU8) AND ((uParam0._fU4 < uParam6._fU4) AND ((uParam0._fU4 > uParam3._fU4) AND ((uParam0._fU0 < uParam6._fU0) AND (uParam0._fU0 > uParam3._fU0))))))
    {
        return 1;
    }
    return 0;
}

void sub_37555()
{
    int I;
    int J;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    float fVar10;

    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        if (DOES_GROUP_EXIST( sub_32263() ))
        {
            for ( I = 0; I < 7; I++ )
            {
                l_U229[I] = -1;
            }
            GET_GROUP_SIZE( sub_32263(), ref uVar4, ref uVar5 );
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_32263(), I, ref iVar8 );
                if (IS_CHAR_INJURED( iVar8 ))
                {
                    if (NOT (IS_CHAR_DEAD( iVar8 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( iVar8 );
                    }
                }
            }
            GET_GROUP_SIZE( sub_32263(), ref uVar4, ref uVar5 );
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_32263(), I, ref iVar8 );
                if ((NOT (iVar8 == g_U10996[1]._fU0)) AND (NOT (iVar8 == g_U10996[0]._fU0)))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_866() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_866(), ref uVar7 );
                            if (NOT (sub_37857( iVar8, sub_866() )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( iVar8, sub_866(), 20.00000000, 20.00000000, 3.00000000, 0 ))
                                {
                                    for ( J = 0; J < g_U10996; J++ )
                                    {
                                        if (sub_38003() == 0)
                                        {
                                            if (sub_37857( g_U10996[J]._fU0, sub_866() ))
                                            {
                                                GET_CAR_SPEED( uVar7, ref fVar10 );
                                                if (fVar10 < 1.00000000)
                                                {
                                                    TASK_LEAVE_CAR_IMMEDIATELY( g_U10996[J]._fU0, uVar7 );
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
            GET_CAR_CHAR_IS_USING( sub_866(), ref uVar7 );
            if (IS_VEH_DRIVEABLE( uVar7 ))
            {
                for ( I = 0; I < 7; I++ )
                {
                    GET_GROUP_MEMBER( sub_32263(), I, ref iVar8 );
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar6 );
                        for ( J = 0; J < iVar6; J++ )
                        {
                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar7, J )))
                            {
                                GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar7, J, ref iVar9 );
                                if (IS_CHAR_SITTING_IN_CAR( iVar9, uVar7 ))
                                {
                                    if (iVar9 == iVar8)
                                    {
                                        l_U229[I] = J;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_32263(), I, ref iVar8 );
                if ((NOT (iVar8 == g_U10996[1]._fU0)) AND (NOT (iVar8 == g_U10996[0]._fU0)))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (l_U229[I] == -1)
                        {
                            l_U229[I] = sub_38511( -1 );
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_32263(), I, ref iVar8 );
                if ((iVar8 == g_U10996[1]._fU0) || (iVar8 == g_U10996[0]._fU0))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (l_U229[I] == -1)
                        {
                            l_U229[I] = sub_38511( -1 );
                        }
                    }
                }
            }
            GET_CAR_CHAR_IS_USING( sub_866(), ref uVar7 );
            if (IS_VEH_DRIVEABLE( uVar7 ))
            {
                for ( I = 0; I < 7; I++ )
                {
                    GET_GROUP_MEMBER( sub_32263(), I, ref iVar8 );
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (NOT (sub_38809( ref iVar8, uVar7, l_U229[I] )))
                        {
                            l_U229[I] = sub_38511( l_U229[I] );
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                if (l_U229[I] > 2)
                {
                    l_U229[I] = -1;
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_32263(), I, ref iVar8 );
                if (NOT (IS_CHAR_INJURED( iVar8 )))
                {
                    SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( iVar8, l_U229[I] );
                }
            }
        }
    }
    return;
}

int sub_37857(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if ((NOT (IS_CHAR_INJURED( uParam1 ))) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_38003()
{
    unknown uVar2;
    int iVar3;
    int I;
    int Result;

    Result = 0;
    if (IS_PLAYER_PLAYING( sub_774() ))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_866() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_866(), ref uVar2 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar2, ref iVar3 );
            for ( I = 0; I < iVar3; I++ )
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( uVar2, I ))
                {
                    Result++;
                }
            }
        }
    }
    return Result;
}

void sub_38511(int iParam0)
{
    int I;
    int Result;

    Result = iParam0 + 1;
    for ( I = 0; I < 7; I++ )
    {
        if (l_U229[I] == Result)
        {
            Result++;
            I = 0;
        }
    }
    return Result;
}

int sub_38809(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (DOES_VEHICLE_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam1, ref iVar6 );
            if (iVar6 > iParam2)
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( uParam1, iParam2 ))
                {
                    return 1;
                }
                else
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam1, iParam2, ref iVar5 );
                    if (iVar5 == (uParam0^))
                    {
                        return 1;
                    }
                    else if (l_U136)
                    {
                        PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, GET_CHAR_IN_CAR_PASSENGER_SEAT \n" );
                    }
                }
            }
            else if (l_U136)
            {
                PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, iNoOfSeats = " );
                PRINTINT( iVar6 );
                PRINTSTRING( " inSeatPriority = " );
                PRINTINT( iParam2 );
                PRINTSTRING( "\n" );
            }
        }
        else if (l_U136)
        {
            PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, char is injured \n" );
        }
    }
    else if (l_U136)
    {
        PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, car doesn't exist \n" );
    }
    return 0;
}

int sub_39885(unknown uParam0)
{
    if (IS_SCREEN_FADED_OUT())
    {
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( uParam0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_40024(unknown uParam0)
{
    if (IS_SCREEN_FADED_OUT())
    {
        return 0;
    }
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( uParam0 )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_40174(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
        if (DOES_CHAR_EXIST( uVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar3 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        for ( I = 0; I < iVar4; I++ )
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
            }
        }
    }
    return;
}

int sub_40532()
{
    if (TIMERA() > 5000)
    {
        return 1;
    }
    if (NOT sub_1170())
    {
        if ((NOT (IS_CHAR_INJURED( g_U10996[1]._fU0 ))) || (NOT (IS_CHAR_INJURED( g_U10996[0]._fU0 ))))
        {
            if (sub_14095( "E1BEA", 7 ))
            {
                if (sub_14579( "E1BE_10", ref l_U251, 2, 1 ))
                {
                    return 1;
                }
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_41458(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    float fVar6;
    boolean bVar7;
    boolean bVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    int iVar13;
    int iVar14;
    boolean bVar15;

    bVar7 = uParam0;
    fVar9 = 5.00000000;
    fVar10 = 30000.00000000;
    fVar11 = 14.00000000;
    fVar12 = 0.12500000;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        if (g_U11058)
        {
            bVar5 = true;
        }
    }
    else
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        if (NOT IS_MINIGAME_IN_PROGRESS())
        {
            if (IS_PLAYER_PLAYING( sub_774() ))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_866() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_866(), ref iVar4 );
                    if ((NOT (iVar4 == g_U11055[1])) AND (NOT (iVar4 == g_U11055[0])))
                    {
                        if (IS_VEH_DRIVEABLE( iVar4 ))
                        {
                            GET_CAR_SPEED( iVar4, ref fVar6 );
                            if (fVar6 > fVar9)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11049[0] )))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U11055[0] ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( g_U11049[0], g_U11055[0] ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U11049[0], fVar11, fVar11, 3.00000000, 0 ))
                                            {
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11049[0], ref iVar4 );
                                                GET_CAR_SPEED( iVar4, ref fVar6 );
                                                if (fVar6 > fVar9)
                                                {
                                                    if (NOT (IS_CHAR_INJURED( g_U11049[1] )))
                                                    {
                                                        if (IS_VEH_DRIVEABLE( g_U11055[1] ))
                                                        {
                                                            if (IS_CHAR_SITTING_IN_CAR( g_U11049[1], g_U11055[1] ))
                                                            {
                                                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_866(), g_U11049[1], fVar11, fVar11, 3.00000000, 0 ))
                                                                {
                                                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11049[1], ref iVar4 );
                                                                    GET_CAR_SPEED( iVar4, ref fVar6 );
                                                                    if (fVar6 > fVar9)
                                                                    {
                                                                        GET_FRAME_TIME( ref fVar6 );
                                                                        l_U137 += fVar6 * 1000.00000000;
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
                    }
                }
            }
            if (l_U137 > fVar10)
            {
                bVar8 = true;
                l_U137 = 0.00000000;
            }
        }
        bVar15 = false;
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
        {
            if (NOT g_U12379)
            {
                bVar15 = true;
            }
        }
        else
        {
            bVar15 = true;
        }
        if (bVar15)
        {
            if (NOT PLAYER_IS_INTERACTING_WITH_GARAGE())
            {
                STORE_WANTED_LEVEL( sub_774(), ref iVar13 );
                if (iVar13 < l_U138)
                {
                    iVar14 = l_U138 - iVar13;
                    if ((NOT (CHEAT_HAPPENED_RECENTLY( 3, 300000 ))) AND (NOT (CHEAT_HAPPENED_RECENTLY( 4, 5000 ))))
                    {
                        bVar7 = true;
                    }
                    else
                    {
                        PRINTSTRING( "ABILITY_BACKUP - wanted level down cheat activated recently! \n" );
                    }
                }
                l_U138 = iVar13;
            }
        }
        if (g_U11061)
        {
            g_U11077 = 1;
            g_U11061 = 0;
            sub_42295( 1.00000000 );
            sub_708( 0, 1 );
            PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupMissionPassed \n" );
        }
        if (g_U11063)
        {
            g_U11063 = 0;
            sub_708( 0, 1 );
            PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupMissionFailed \n" );
        }
        if (g_U11062)
        {
            g_U11062 = 0;
            g_U11077 = 1;
            sub_42295( 0.50000000 );
            sub_708( 0, 1 );
            PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupProceduralMissionPassed \n" );
        }
        if (bVar7)
        {
            g_U11078 = 1;
            if (iVar14 == 0)
            {
                iVar14 = 1;
            }
            fVar6 = TO_FLOAT( iVar14 - 1 );
            bVar7 = false;
        }
        if (bVar8)
        {
            g_U11079 = 1;
            sub_42295( fVar12 );
            bVar8 = false;
        }
    }
    if (HAS_SCRIPT_LOADED( "ability_stats" ))
    {
        if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND ((NOT g_U11080) AND ((NOT IS_MINIGAME_IN_PROGRESS()) AND ((NOT sub_1348()) AND (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_stats" )) == 0) AND (NOT sub_43583()))))))
        {
            if (NOT l_U139)
            {
                if (IS_BUTTON_PRESSED( 0, 9 ))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11049[0] )))
                    {
                        g_U11097[0] = 1;
                    }
                    else
                    {
                        g_U11097[0] = 0;
                    }
                    if (NOT (IS_CHAR_INJURED( g_U11049[1] )))
                    {
                        g_U11097[1] = 1;
                    }
                    else
                    {
                        g_U11097[1] = 0;
                    }
                    if ((g_U11097[1]) || (g_U11097[0]))
                    {
                        g_U11077 = 0;
                        g_U11078 = 0;
                        g_U11079 = 0;
                        g_U11069 = 1;
                    }
                    l_U139 = 1;
                }
            }
            else if (NOT (IS_BUTTON_PRESSED( 0, 9 )))
            {
                l_U139 = 0;
            }
        }
        if (g_U11069)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_stats" )) == 0)
            {
                START_NEW_SCRIPT( "ability_stats", 512 );
                g_U11069 = 0;
            }
            else
            {
                g_U11077 = 0;
                g_U11078 = 0;
                g_U11079 = 0;
                g_U11069 = 0;
            }
        }
    }
    else
    {
        REQUEST_SCRIPT( "ability_stats" );
    }
    return;
}

void sub_42295(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_42321( I, uParam0, 0 );
    }
    g_U11069 = 1;
    return;
}

void sub_42321(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((uParam2) || (NOT (IS_CHAR_INJURED( g_U11049[iParam0] ))))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11109[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11148[iParam0] = fVar7 - g_U11109[iParam0];
        g_U11109[iParam0] = fVar7;
        fVar8 = (g_U11109[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11133[iParam0] = fVar7 - g_U11112[iParam0];
        g_U11112[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11136[iParam0] = fVar7 - g_U11115[iParam0];
        g_U11115[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11139[iParam0] = fVar7 - g_U11118[iParam0];
        g_U11118[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11142[iParam0] = fVar7 - g_U11121[iParam0];
        g_U11121[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11145[iParam0] = fVar7 - g_U11124[iParam0];
        g_U11124[iParam0] = fVar7;
        if ((g_U11109[1] >= 100.00000000) AND (g_U11109[0] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11109[0] );
        SET_FLOAT_STAT( 169, g_U11109[1] );
        sub_6413( iParam0 );
        g_U11097[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11108 );
    }
    else
    {
        g_U11133[iParam0] = 0.00000000;
        g_U11136[iParam0] = 0.00000000;
        g_U11139[iParam0] = 0.00000000;
        g_U11142[iParam0] = 0.00000000;
        g_U11145[iParam0] = 0.00000000;
        g_U11097[iParam0] = 0;
    }
    return;
}

int sub_43583()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

