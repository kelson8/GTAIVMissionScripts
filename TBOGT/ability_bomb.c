void main()
{
    float fVar2;
    boolean bVar3;
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int I;
    int iVar16;

    l_U0 = 150.00000000;
    l_U50 = 0;
    l_U51 = 86.00000000;
    l_U52 = 274.00000000;
    l_U61 = 0;
    l_U62 = 0;
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0;
    l_U66 = 1;
    l_U67 = 0;
    l_U68 = 1.00000000;
    l_U69 = 1.00000000;
    l_U70 = 40.00000000;
    l_U71 = 8000.00000000;
    l_U72 = 30.00000000;
    l_U73 = 0.25000000;
    l_U76 = 13;
    l_U78 = {0.12400000, 0.12400000, 0.00000000};
    l_U81 = {-3.14000000, -1.57000000, 0.00000000};
    l_U84 = {0.00000000, 0.00000000, 0.00000000};
    l_U87 = {0.00000000, 0.00000000, 0.00000000};
    PRINTSTRING( "ABILITY BOMB - SCRIPT STARTED \n" );
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "ABILITY BOMB - CLEANUP 1 \n" );
        sub_333();
    }
    g_U11204 = 0;
    l_U58 = {sub_897( g_U11200 )};
    if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
    {
        l_U93 = CREATE_WIDGET_GROUP( "Ability Bomb" );
        CREATE_WIDGET_GROUP( "For testing" );
        ADD_WIDGET_TOGGLE( "Recreate from current position", ref l_U61 );
        ADD_WIDGET_SLIDER( "Bomb Location", ref g_U11200, -1, 16, 1 );
        ADD_WIDGET_TOGGLE( "Recreate at preset location", ref l_U62 );
        ADD_WIDGET_FLOAT_SLIDER( "x", ref l_U58._fU0._fU0, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "y", ref l_U58._fU0._fU4, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "z", ref l_U58._fU0._fU8, -999999.80000000, 999999.80000000, 0.00100000 );
        ADD_WIDGET_TOGGLE( "Recreate at above coords", ref l_U63 );
        ADD_WIDGET_TOGGLE( "Warp player near bomb", ref l_U64 );
        ADD_WIDGET_TOGGLE( "bDetonateBomb", ref l_U65 );
        END_WIDGET_GROUP();
        CREATE_WIDGET_GROUP( "Debug" );
        START_NEW_WIDGET_COMBO();
        ADD_TO_WIDGET_COMBO( "CREATION" );
        ADD_TO_WIDGET_COMBO( "FIRST_WAIT_TO_PICKUP" );
        ADD_TO_WIDGET_COMBO( "BOMB_PICKUP" );
        ADD_TO_WIDGET_COMBO( "WAIT_TO_DROP" );
        ADD_TO_WIDGET_COMBO( "WAIT_TO_DETONATE" );
        ADD_TO_WIDGET_COMBO( "DETONATION_CALL" );
        FINISH_WIDGET_COMBO( "iState", ref l_U74 );
        ADD_WIDGET_SLIDER( "iProgress", ref l_U75, 0, 99, 1 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachOffset1.x", ref l_U78._fU0, -1.00000000, 1.00000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachOffset1.y", ref l_U78._fU4, -1.00000000, 1.00000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachOffset1.z", ref l_U78._fU8, -1.00000000, 1.00000000, 0.00100000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachRotation1.x", ref l_U81._fU0, -5.00000000, 5.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachRotation1.y", ref l_U81._fU4, -5.00000000, 5.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vAttachRotation1.z", ref l_U81._fU8, -5.00000000, 5.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vExplosionCoords.x", ref l_U90._fU0, -5.00000000, 5.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vExplosionCoords.y", ref l_U90._fU4, -5.00000000, 5.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vExplosionCoords.z", ref l_U90._fU8, -5.00000000, 5.00000000, 0.01000000 );
        ADD_WIDGET_SLIDER( "iExplosionType", ref l_U76, -1, 15, 1 );
        ADD_WIDGET_FLOAT_SLIDER( "fExplosionCamShakeMultiplier", ref l_U68, 0.00000000, 10.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fExplosionScale", ref l_U69, 0.00000000, 10.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bMakeExplosionSound", ref l_U66 );
        ADD_WIDGET_TOGGLE( "bNoExplosionFx", ref l_U67 );
        ADD_WIDGET_FLOAT_SLIDER( "fBlastRadius", ref l_U70, 0.00000000, 100.00000000, 1.00000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fForceMultiplier", ref l_U71, 0.00000000, 10000.00000000, 1.00000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fForceZMultiplier", ref l_U72, 0.00000000, 10000.00000000, 1.00000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fExplodeCarDistance", ref l_U73, 0.00000000, 1.00000000, 0.10000000 );
        END_WIDGET_GROUP();
        END_WIDGET_GROUP();
    }
    while (IS_PLAYER_PLAYING( sub_632() ))
    {
        if (l_U61)
        {
            sub_751();
            if (sub_1347())
            {
                l_U58 = {sub_897( -1 )};
            }
            sub_3598( 0 );
            l_U61 = 0;
        }
        if (l_U62)
        {
            sub_751();
            l_U58 = {sub_897( g_U11200 )};
            sub_3598( 0 );
            l_U62 = 0;
        }
        if (l_U63)
        {
            sub_751();
            sub_3598( 0 );
            l_U63 = 0;
        }
        if ((IS_KEYBOARD_KEY_JUST_PRESSED( 36 )) || (l_U64))
        {
            SET_CHAR_COORDINATES( sub_1398(), l_U58._fU0._fU0, l_U58._fU0._fU4, l_U58._fU0._fU8 );
            LOAD_SCENE( l_U58._fU0._fU0, l_U58._fU0._fU4, l_U58._fU0._fU8 );
            l_U64 = 0;
        }
        switch (l_U74)
        {
            case 0:
            switch (l_U75)
            {
                case 0:
                sub_751();
                CREATE_OBJECT( 410856034, l_U58._fU0._fU0, l_U58._fU0._fU4, l_U58._fU0._fU8, ref l_U77, 1 );
                SET_OBJECT_HEALTH( l_U77, 1000.00000000 );
                SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U77, 1 );
                GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar2 );
                SET_OBJECT_HEADING( l_U77, fVar2 );
                ADD_BLIP_FOR_OBJECT( l_U77, ref l_U57 );
                CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U57, "PK_BMB" );
                PRINT_NOW( "PK_M01", 7500, 1 );
                sub_3598( 1 );
                break;
                default:
            }
            break;
            case 1:
            switch (l_U75)
            {
                case 0:
                if (DOES_OBJECT_EXIST( l_U77 ))
                {
                    GET_OBJECT_COORDINATES( l_U77, ref l_U58._fU0._fU0, ref l_U58._fU0._fU4, ref l_U58._fU0._fU8 );
                    GET_OBJECT_HEALTH( l_U77, ref fVar2 );
                    if (fVar2 < 900.00000000)
                    {
                        ADD_EXPLOSION( l_U58._fU0._fU0, l_U58._fU0._fU4, l_U58._fU0._fU8, 0, 1056964608, 1, 0, 1065353216 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U57 );
                        DELETE_OBJECT( ref l_U77 );
                    }
                    bVar3 = false;
                    if (sub_4223())
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_1398(), l_U58._fU0._fU0, l_U58._fU0._fU4, l_U58._fU0._fU8, 0.70000000, 0.70000000, 2.00000000, 0 ))
                        {
                            bVar3 = true;
                        }
                    }
                    if (bVar3)
                    {
                        SHAKE_PAD( 0, 120, 100 );
                        ATTACH_OBJECT_TO_PED( l_U77, sub_1398(), 1202, l_U78, l_U81, 0 );
                        PRINT_HELP( "PK_H04" );
                        if (DOES_BLIP_EXIST( l_U57 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U57 );
                        }
                        g_U11204 = 1;
                        REQUEST_MODEL( 410856034 );
                        REQUEST_ANIMS( "pickup_object" );
                        sub_3598( 3 );
                        break;
                    }
                    else
                    {
                        sub_352( 2, "PK_H01" );
                    }
                }
                else
                {
                    PRINTSTRING( "Ability BOMB - CLEANUP 2 \n" );
                    sub_333();
                }
                break;
                default:
            }
            break;
            case 3:
            switch (l_U75)
            {
                case 0:
                if (DOES_OBJECT_EXIST( l_U77 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U77 ))
                    {
                        DETACH_OBJECT( l_U77, 1 );
                    }
                    ATTACH_OBJECT_TO_PED( l_U77, sub_1398(), 1202, l_U78, l_U81, 0 );
                }
                bVar3 = false;
                if (IS_PLAYER_PLAYING( sub_632() ))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1398() )))
                    {
                        if (sub_4744( 2, 0 ))
                        {
                            bVar3 = true;
                        }
                    }
                }
                if (NOT (HAVE_ANIMS_LOADED( "pickup_object" )))
                {
                    REQUEST_ANIMS( "pickup_object" );
                    bVar3 = false;
                }
                if ((sub_4744( 2, 0 )) AND (bVar3))
                {
                    if (sub_5037( 2, "PK_H05", 0 ))
                    {
                        REQUEST_MODEL( 410856034 );
                        TASK_SWAP_WEAPON( sub_1398(), 0 );
                        TASK_PLAY_ANIM( sub_1398(), "putdown_low", "pickup_object", 4.00000000, 0, 1, 1, 0, -1 );
                        SETTIMERA( 0 );
                        l_U75++;
                    }
                }
                else
                {
                    sub_352( 2, "PK_H05" );
                }
                break;
                case 1:
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_1398(), "pickup_object", "putdown_low" )))
                {
                    sub_352( 2, "PK_H05" );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 410856034 );
                    sub_3598( 4 );
                    l_U75++;
                }
                else
                {
                    GET_CHAR_ANIM_CURRENT_TIME( sub_1398(), "pickup_object", "putdown_low", ref fVar2 );
                    if (fVar2 < 0.50000000)
                    {
                        if (DOES_OBJECT_EXIST( l_U77 ))
                        {
                            SET_OBJECT_ONLY_DAMAGED_BY_PLAYER( l_U77, 1 );
                            SET_OBJECT_COLLISION( l_U77, 0 );
                            if (IS_OBJECT_ATTACHED( l_U77 ))
                            {
                                DETACH_OBJECT( l_U77, 1 );
                            }
                            ATTACH_OBJECT_TO_PED( l_U77, sub_1398(), 1232, l_U84, l_U87, 0 );
                        }
                    }
                    else if (DOES_OBJECT_EXIST( l_U77 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U77 ))
                        {
                            SET_OBJECT_COLLISION( l_U77, 1 );
                            DETACH_OBJECT( l_U77, 1 );
                        }
                    }
                }
                break;
            }
            break;
            case 4:
            if (NOT sub_6117())
            {
                if (DOES_OBJECT_EXIST( l_U77 ))
                {
                    GET_OBJECT_HEALTH( l_U77, ref fVar2 );
                    if (fVar2 < 900.00000000)
                    {
                        l_U65 = 1;
                    }
                }
                if (l_U65)
                {
                    if (DOES_OBJECT_EXIST( l_U77 ))
                    {
                        GET_OBJECT_COORDINATES( l_U77, ref l_U90._fU0, ref l_U90._fU4, ref l_U90._fU8 );
                        DELETE_OBJECT( ref l_U77 );
                    }
                    ADD_EXPLOSION( l_U90._fU0, l_U90._fU4, l_U90._fU8, l_U76, l_U69, l_U66, l_U67, l_U68 );
                    for ( I = 0; I < 16; I++ )
                    {
                        vVar7 = {0.00000000, 1.00000000, 0.00000000};
                        vVar7 = {vVar7 * l_U70};
                        fVar2 = 360.00000000 / 16.00000000;
                        fVar2 *= TO_FLOAT( I );
                        vVar7 = {sub_6518( vVar7, 0.00000000, 0.00000000, fVar2 )};
                        vVar4 = {l_U90 + (vVar7 * 0.50000000)};
                        GET_RANDOM_CAR_IN_SPHERE( vVar4.x, vVar4.y, vVar4.z, l_U70 * 0.50000000, 0, 127, ref uVar13 );
                        if (DOES_VEHICLE_EXIST( uVar13 ))
                        {
                            if (NOT (IS_CAR_DEAD( uVar13 )))
                            {
                                GET_CAR_COORDINATES( uVar13, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                                vVar7 = {vVar4 - l_U90};
                                fVar2 = VMAG( vVar7 );
                                vVar7 = {vVar7 / fVar2};
                                fVar2 = l_U70 - fVar2;
                                fVar2 /= l_U70;
                                if (fVar2 < 0.00000000)
                                {
                                    fVar2 = 0.00000000;
                                }
                                vVar7 = {vVar7 * fVar2};
                                vVar7 = {vVar7 * l_U71};
                                vVar7.z *= l_U72;
                                APPLY_FORCE_TO_CAR( uVar13, 3, vVar7, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 0 );
                                GET_CAR_HEALTH( uVar13, ref iVar16 );
                                if (iVar16 < 1)
                                {
                                    iVar16 = 1;
                                }
                                SET_CAR_HEALTH( uVar13, ROUND( (1.00000000 - fVar2) * (TO_FLOAT( iVar16 )) ) );
                                iVar16 = ROUND( GET_ENGINE_HEALTH( uVar13 ) );
                                SET_ENGINE_HEALTH( uVar13, (1.00000000 - fVar2) * (TO_FLOAT( iVar16 )) );
                                iVar16 = ROUND( GET_PETROL_TANK_HEALTH( uVar13 ) );
                                SET_PETROL_TANK_HEALTH( uVar13, (1.00000000 - fVar2) * (TO_FLOAT( iVar16 )) );
                                if (fVar2 < l_U73)
                                {
                                    EXPLODE_CAR( uVar13, 1, 0 );
                                }
                            }
                        }
                    }
                    l_U65 = 0;
                    sub_333();
                }
            }
            break;
        }
        if (g_U11201)
        {
            PRINTSTRING( "Ability BOMB - CLEANUP 5 \n" );
            sub_333();
        }
        WAIT( 0 );
    }
    PRINTSTRING( "Ability BOMB - CLEANUP 6 \n" );
    sub_333();
    return;
}

void sub_333()
{
    sub_352( 2, "PK_H01" );
    sub_352( 2, "PK_H05" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 410856034 );
    sub_751();
    g_U11201 = 0;
    g_U11204 = 0;
    g_U11200 = -1;
    if (DOES_WIDGET_GROUP_EXIST( l_U93 ))
    {
        DELETE_WIDGET_GROUP( l_U93 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_352(int iParam0, string sParam1)
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
            if ((l_U56) AND (g_U10534 == iParam0))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U56 = 0;
                if (l_U54)
                {
                    sub_579();
                    l_U54 = 0;
                }
            }
            if (l_U55)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_632(), 1 );
                l_U55 = 0;
            }
            if (l_U53)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U53 = 0;
            }
        }
    }
    return;
}

void sub_579()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_632()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_751()
{
    if (DOES_BLIP_EXIST( l_U57 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U57 );
    }
    if (DOES_OBJECT_EXIST( l_U77 ))
    {
        DELETE_OBJECT( ref l_U77 );
    }
    return;
}

void sub_897(int iParam0)
{
    if (NOT l_U50)
    {
        sub_917();
    }
    if (iParam0 == -1)
    {
        if (NOT sub_1347())
        {
            g_U11200 = 0;
        }
    }
    else
    {
        g_U11200 = iParam0;
    }
    if ((g_U11200 >= 16) || (g_U11200 < 0))
    {
        g_U11200 = 0;
    }
    return l_U1[g_U11200];
}

void sub_917()
{
    l_U1[0]._fU0 = {1220.64900000, 37.39700000, 34.55670000};
    l_U1[1]._fU0 = {1082.27800000, -231.10910000, 21.69380000};
    l_U1[2]._fU0 = {1086.80000000, 855.95480000, 31.68420000};
    l_U1[3]._fU0 = {1852.95700000, 528.88980000, 27.71360000};
    l_U1[4]._fU0 = {1313.92400000, 1733.78000000, 14.41560000};
    l_U1[5]._fU0 = {454.76400000, 1815.95900000, 21.62930000};
    l_U1[6]._fU0 = {-99.35060000, 1580.10600000, 17.53020000};
    l_U1[7]._fU0 = {-269.67870000, 1091.81300000, 7.59000000};
    l_U1[8]._fU0 = {-257.55070000, 603.82620000, 13.81520000};
    l_U1[9]._fU0 = {-490.96090000, -90.38910000, 6.84240000};
    l_U1[10]._fU0 = {112.68110000, -207.09040000, 13.91790000};
    l_U1[11]._fU0 = {-16.27910000, -907.56730000, 4.16440000};
    l_U1[12]._fU0 = {-1453.93800000, -250.30910000, 1.86880000};
    l_U1[13]._fU0 = {-1733.62400000, 361.21480000, 24.44370000};
    l_U1[14]._fU0 = {-1276.92300000, 826.39620000, 18.56500000};
    l_U1[15]._fU0 = {-1034.85300000, 1420.33700000, 24.66210000};
    l_U50 = 1;
    return;
}

int sub_1347()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int[5] iVar6;
    float[5] fVar12;
    int iVar18;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;

    if (NOT l_U50)
    {
        sub_917();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( sub_632() ))
    {
        GET_CHAR_COORDINATES( sub_1398(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
        iVar26 = GET_MAP_AREA_FROM_COORDS( vVar20 );
    }
    else
    {
        return 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        iVar6[I] = -1;
        fVar12[I] = 1E8;
    }
    iVar18 = -1;
    fVar19 = 1E8;
    for ( I = 0; I < 16; I++ )
    {
        if ((GET_MAP_AREA_FROM_COORDS( l_U1[I]._fU0 )) == iVar26)
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U1[I]._fU0._fU0, l_U1[I]._fU0._fU4, l_U1[I]._fU0._fU8, 5.00000000, 5.00000000, 5.00000000 )))
            {
                uVar23 = {l_U1[I]._fU0 - vVar20};
                for ( iVar3 = 0; iVar3 < 5; iVar3++ )
                {
                    if ((VMAG( uVar23 )) < fVar12[iVar3])
                    {
                        for ( J = 0; J < 5; J++ )
                        {
                            iVar5 = 5 - (J + 1);
                            if ((iVar5 > 0) AND (iVar5 > iVar3))
                            {
                                iVar6[iVar5] = iVar6[iVar5 - 1];
                                fVar12[iVar5] = fVar12[iVar5 - 1];
                            }
                        }
                        iVar6[iVar3] = I;
                        fVar12[iVar3] = VMAG( uVar23 );
                        iVar3 = 5;
                    }
                }
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (iVar6[I] == -1))
        {
            if (fVar12[I] > l_U0)
            {
                if (fVar12[I] < fVar19)
                {
                    iVar18 = iVar6[I];
                    fVar19 = fVar12[I];
                }
            }
        }
    }
    if (iVar18 == -1)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (iVar6[I] == -1))
            {
                iVar18 = iVar6[I];
                fVar19 = fVar12[I];
            }
        }
    }
    if (NOT (iVar18 == -1))
    {
        g_U11200 = iVar18;
        return 1;
        break;
    }
    return 0;
}

void sub_1398()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3598(unknown uParam0)
{
    l_U75 = 0;
    l_U74 = uParam0;
    return;
}

void sub_4223()
{
    return sub_4234( 0, 0 );
}

int sub_4234(boolean bParam0, unknown uParam1)
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

int sub_4744(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_632() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_632() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_632() )))))
                {
                    if (NOT sub_4840())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1398() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_4223())
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

int sub_4840()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_5037(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_4744( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U55)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_632(), 0 );
                l_U55 = 1;
            }
            g_U10534 = uParam0;
            l_U56 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5318();
                l_U54 = 1;
                g_U10535 = 6;
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
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U53 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U53)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U53 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_5318()
{
    return sub_4234( 1, 1 );
}

int sub_6117()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_632() )))
    {
        if ((sub_6151()) AND (ARE_WIDESCREEN_BORDERS_ACTIVE()))
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
    return 0;
}

int sub_6151()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_6518(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

