void main()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    int iVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    l_U17 = 0.00000000;
    l_U18 = 0.00000000;
    l_U19 = 0.00000000;
    l_U21 = 0;
    l_U22 = -1;
    l_U23 = 0;
    l_U24 = 0;
    l_U25 = 0;
    l_U26 = 0;
    l_U27 = 0;
    l_U28 = 0.00000000;
    l_U29 = 0.00000000;
    l_U30 = 0.00000000;
    l_U31 = -60.00000000;
    l_U32 = -80.00000000;
    l_U33 = -50.00000000;
    l_U34 = -7.00000000;
    l_U35 = -5.50000000;
    l_U36 = -12.00000000;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    sub_166( l_U40 );
    while (true)
    {
        WAIT( 0 );
        if ((IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )) || (NOT g_U2692[l_U21]._fU56))
        {
            sub_257();
        }
        if (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )))
        {
            if ((g_U2692[l_U21]._fU4 != 1) AND (g_U2692[l_U21]._fU4 != 0))
            {
                if (IS_CHAR_IN_ANY_CAR( g_U2692[l_U21]._fU0 ))
                {
                    sub_257();
                }
            }
        }
        if ((NOT g_U2692[l_U21]._fU68) AND ((g_U2692[l_U21]._fU56) AND (sub_665())))
        {
            if (l_U31 != g_U2692[l_U21]._fU48)
            {
                l_U31 = g_U2692[l_U21]._fU48;
                l_U32 = l_U31 - (-60.00000000 - -80.00000000);
                l_U33 = l_U31 + (-50.00000000 - -60.00000000);
            }
            if (l_U34 != g_U2692[l_U21]._fU52)
            {
                l_U34 = g_U2692[l_U21]._fU52;
                l_U35 = l_U34 + (-5.50000000 - -7.00000000);
                l_U36 = l_U34 - (-7.00000000 - -12.00000000);
                if (l_U35 > -2.00000000)
                {
                    l_U35 = -2.00000000;
                }
            }
            if (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )))
            {
                if (NOT l_U38)
                {
                    SET_CHAR_COMPONENT_VARIATION( g_U2692[l_U21]._fU0, 8, 1, 0 );
                    l_U38 = 1;
                }
                switch (g_U2692[l_U21]._fU4)
                {
                    case 0:
                    if (NOT (IS_CHAR_IN_ANY_CAR( g_U2692[l_U21]._fU0 )))
                    {
                        GET_CHAR_HEIGHT_ABOVE_GROUND( g_U2692[l_U21]._fU0, ref fVar2 );
                        if ((g_U2784) || (fVar2 > 30.00000000))
                        {
                            GET_CHAR_VELOCITY( g_U2692[l_U21]._fU0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                            if (uVar3._fU8 < -4.00000000)
                            {
                                sub_1206( uVar3 );
                            }
                        }
                    }
                    else
                    {
                        l_U37 = 0;
                        g_U2692[l_U21]._fU4 = 1;
                    }
                    break;
                    case 1:
                    if ((l_U37 == 0) AND (NOT (IS_CHAR_IN_ANY_CAR( g_U2692[l_U21]._fU0 ))))
                    {
                        GET_GAME_TIMER( ref l_U37 );
                    }
                    if (l_U37 != 0)
                    {
                        GET_GAME_TIMER( ref iVar6 );
                        if ((iVar6 - l_U37) > 1000)
                        {
                            g_U2692[l_U21]._fU4 = 0;
                        }
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( g_U2692[l_U21]._fU0 )))
                        {
                            GET_CHAR_VELOCITY( g_U2692[l_U21]._fU0, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            l_U26 = 1;
                            sub_1206( uVar7 );
                        }
                    }
                    break;
                    case 3:
                    if (g_U2692[l_U21]._fU8 == 2)
                    {
                        GET_CHAR_COORDINATES( sub_2126(), ref g_U2692[l_U21]._fU12._fU0, ref g_U2692[l_U21]._fU12._fU4, ref g_U2692[l_U21]._fU12._fU8 );
                    }
                    sub_2213();
                    break;
                    case 4:
                    if (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )))
                    {
                        GET_CHAR_COORDINATES( g_U2692[l_U21]._fU0, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( g_U2692[l_U21]._fU0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2692[l_U21]._fU0, 1 );
                        UNLOCK_RAGDOLL( g_U2692[l_U21]._fU0, 0 );
                        if (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Hang_Idle" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Hang_Idle", "PARACHUTE", 10.00000000, 1, 1, 1, 0, 0 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U20 )))
                        {
                            CREATE_OBJECT( 1490460832, uVar10._fU0, uVar10._fU4, uVar10._fU8 + 2.00000000, ref l_U20, 1 );
                            ATTACH_OBJECT_TO_PED( l_U20, g_U2692[l_U21]._fU0, 0, 0.02500000, -0.12500000, 5.83000000, 0.00000000, 0.00000000, 0.00000000, 1 );
                        }
                        g_U2692[l_U21]._fU4 = 5;
                    }
                    break;
                    case 5:
                    if ((NOT (IS_CHAR_INJURED( sub_2126() ))) AND (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 ))))
                    {
                        if (g_U2692[l_U21]._fU8 == 2)
                        {
                            GET_CHAR_COORDINATES( sub_2126(), ref g_U2692[l_U21]._fU12._fU0, ref g_U2692[l_U21]._fU12._fU4, ref g_U2692[l_U21]._fU12._fU8 );
                        }
                        sub_5140();
                    }
                    break;
                    case 7:
                    if (DOES_OBJECT_EXIST( l_U20 ))
                    {
                        GET_OBJECT_COORDINATES( l_U20, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
                        SLIDE_OBJECT( l_U20, uVar13._fU0, uVar13._fU4, uVar13._fU8 + 40.00000000, 0.00000000, 0.00000000, 0.40000000, 0 );
                        if (IS_OBJECT_PLAYING_ANIM( l_U20, "obj_crumple", "PARACHUTE" ))
                        {
                            SET_OBJECT_ANIM_SPEED( l_U20, "obj_crumple", "PARACHUTE", 0.20000000 );
                        }
                        l_U23 += 10;
                        if (l_U23 > 255)
                        {
                            l_U23 = 255;
                        }
                        SET_OBJECT_ALPHA( l_U20, 255 - l_U23 );
                        if (l_U23 >= 255)
                        {
                            DELETE_OBJECT( ref l_U20 );
                        }
                    }
                    else if ((NOT (IS_PED_RAGDOLL( g_U2692[l_U21]._fU0 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Land_Fast" ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Land_Safe" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Land" ))))))
                    {
                        sub_257();
                    }
                    break;
                }
                GET_CHAR_HEALTH( g_U2692[l_U21]._fU0, ref iVar16 );
                if (iVar16 <= 125)
                {
                    UNLOCK_RAGDOLL( g_U2692[l_U21]._fU0, 1 );
                    SWITCH_PED_TO_RAGDOLL( g_U2692[l_U21]._fU0, 0, 2000, 0, 1, 1, 0 );
                    SET_CHAR_HEALTH( g_U2692[l_U21]._fU0, 0 );
                    sub_257();
                }
            }
            else if (g_U2692[l_U21]._fU56)
            {
                if (DOES_CHAR_EXIST( g_U2692[l_U21]._fU0 ))
                {
                    UNLOCK_RAGDOLL( g_U2692[l_U21]._fU0, 1 );
                    N_1363505769( g_U2692[l_U21]._fU0, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                    FIRE_SINGLE_BULLET( uVar17._fU0 + 2.00000000, uVar17._fU4, uVar17._fU8, uVar17._fU0, uVar17._fU4, uVar17._fU8, 100 );
                    FIRE_SINGLE_BULLET( uVar17._fU0 - 2.00000000, uVar17._fU4, uVar17._fU8, uVar17._fU0, uVar17._fU4, uVar17._fU8 + 0.10000000, 100 );
                }
                sub_257();
            }
        }
    }
    return;
}

void sub_166(unknown uParam0)
{
    l_U21 = uParam0;
    g_U2692[l_U21]._fU60 = 1;
    return;
}

void sub_257()
{
    if (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2692[l_U21]._fU0, 0 );
    }
    if (DOES_CHAR_EXIST( g_U2692[l_U21]._fU0 ))
    {
        UNLOCK_RAGDOLL( g_U2692[l_U21]._fU0, 1 );
    }
    if (DOES_OBJECT_EXIST( l_U20 ))
    {
        DETACH_OBJECT( l_U20, 0 );
        DELETE_OBJECT( ref l_U20 );
    }
    g_U2692[l_U21]._fU0 = nil;
    g_U2692[l_U21]._fU4 = 0;
    g_U2692[l_U21]._fU8 = 0;
    g_U2692[l_U21]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    g_U2692[l_U21]._fU48 = -60.00000000;
    g_U2692[l_U21]._fU52 = -7.00000000;
    g_U2692[l_U21]._fU56 = 0;
    g_U2692[l_U21]._fU60 = 0;
    g_U2692[l_U21]._fU64 = 0;
    g_U2692[l_U21]._fU68 = 0;
    g_U2788 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_665()
{
    if ((HAVE_ANIMS_LOADED( "PARACHUTE" )) AND (HAS_MODEL_LOADED( 1490460832 )))
    {
        return 1;
    }
    return 0;
}

void sub_1206(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )))
    {
        if (IS_PED_RAGDOLL( g_U2692[l_U21]._fU0 ))
        {
            BLEND_FROM_NM_WITH_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Free_Fall", 0, 0, 0, 0 );
            SWITCH_PED_TO_ANIMATED( g_U2692[l_U21]._fU0, 1 );
        }
        else if (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Free_Fall" )))
        {
            if (l_U26)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Free_Fall", "PARACHUTE", 0.75000000, 1, 1, 1, 0, 0 );
            }
        }
        UNLOCK_RAGDOLL( g_U2692[l_U21]._fU0, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U2692[l_U21]._fU0, 1 );
        l_U28 = VMAG( uParam0._fU0, uParam0._fU4, 0.00000000 );
        l_U30 = 0.00000000;
        if (l_U26)
        {
            l_U29 = -30.00000000;
        }
        else
        {
            l_U29 = uParam0._fU8;
        }
        g_U2692[l_U21]._fU36._fU0 = 0;
        g_U2692[l_U21]._fU36._fU4 = 0;
        GET_CHAR_HEADING( g_U2692[l_U21]._fU0, ref g_U2692[l_U21]._fU36._fU8 );
    }
    g_U2692[l_U21]._fU4 = 3;
    sub_1690();
    return;
}

void sub_1690()
{
    if (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 )))
    {
        SET_CHAR_ROTATION( g_U2692[l_U21]._fU0, g_U2692[l_U21]._fU36._fU0, g_U2692[l_U21]._fU36._fU4, g_U2692[l_U21]._fU36._fU8 );
        SET_CHAR_VELOCITY( g_U2692[l_U21]._fU0, l_U28 * (-SIN( g_U2692[l_U21]._fU36._fU8 )), l_U28 * (COS( g_U2692[l_U21]._fU36._fU8 )), l_U29 );
    }
    return;
}

void sub_2126()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2213()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;

    if ((g_U2692[l_U21]._fU12._fU0 != 0.00000000) AND (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 ))))
    {
        fVar2 = 0.00000000;
        GET_CHAR_COORDINATES( g_U2692[l_U21]._fU0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        GET_CHAR_VELOCITY( g_U2692[l_U21]._fU0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_CHAR_HEIGHT_ABOVE_GROUND( g_U2692[l_U21]._fU0, ref fVar2 );
        if (uVar6._fU8 < -1.00000000)
        {
            if (NOT g_U2692[l_U21]._fU64)
            {
                fVar9 = sub_2396( fVar2, uVar6._fU8, l_U21 );
                fVar10 = 1.25000000;
                fVar11 = 0.00000000;
                fVar12 = 0.00000000;
                if (fVar2 > 20.00000000)
                {
                    fVar11 = sub_2631( g_U2692[l_U21]._fU36._fU8, uVar3, g_U2692[l_U21]._fU12, fVar10 );
                }
                sub_2917( ref l_U30, fVar11, 0.07500000 );
                fVar12 = (l_U30 / fVar10) * 45.00000000;
                sub_3088( ref g_U2692[l_U21]._fU36._fU4, fVar12, 45.00000000 * 2.00000000, 0.05000000, 5.00000000, 1065353216 );
                sub_2917( ref l_U28, 1.00000000, 0.30000000 );
                sub_2917( ref l_U29, l_U31, 0.40000000 );
                g_U2692[l_U21]._fU36._fU8 -= l_U30;
                if (g_U2692[l_U21]._fU36._fU8 > 180)
                {
                    g_U2692[l_U21]._fU36._fU8 -= 360;
                }
                else if (g_U2692[l_U21]._fU36._fU8 < 65356)
                {
                    g_U2692[l_U21]._fU36._fU8 += 360;
                }
                fVar13 = uVar3._fU8 - g_U2692[l_U21]._fU12._fU8;
                if ((fVar13 < 100.00000000) || (fVar9 < 0.20000000))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Open_chute", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    g_U2692[l_U21]._fU64 = 1;
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Free_Fall" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Free_Fall", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                }
            }
            else
            {
                sub_3620( uVar3 );
            }
            sub_1690();
        }
        if ((uVar6._fU8 > -5.00000000) AND (fVar2 < 10.00000000))
        {
            SET_CHAR_HEADING( g_U2692[l_U21]._fU0, g_U2692[l_U21]._fU36._fU8 );
            SET_CHAR_VELOCITY( g_U2692[l_U21]._fU0, l_U28 * (-SIN( g_U2692[l_U21]._fU36._fU8 )), l_U28 * (COS( g_U2692[l_U21]._fU36._fU8 )), l_U29 );
            SET_CHAR_HEALTH( g_U2692[l_U21]._fU0, 0 );
            sub_257();
        }
    }
    return;
}

void sub_2396(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float Result;
    float fVar6;
    float fVar7;
    unknown uVar8;
    float fVar9;

    Result = 1.00000000;
    if (g_U2692[uParam2]._fU4 == 3)
    {
        fVar6 = 15.00000000;
        fVar7 = (-12.00000000 - uParam1) / fVar6;
        uVar8 = ABSF( (uParam1 * fVar7) + ((fVar6 / 2) * (fVar7 * fVar7)) );
        fVar9 = uParam0 - uVar8;
        if (fVar9 < 0.00000000)
        {
            fVar9 = 0.00000000;
        }
        else if (fVar9 > 400.00000000)
        {
            fVar9 = 400.00000000;
        }
        Result = fVar9 / 400.00000000;
    }
    return Result;
}

void sub_2631(float fParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    float Result;
    float fVar11;
    float fVar12;
    float fVar13;

    Result = 0.00000000;
    if (fParam0 < 0.00000000)
    {
        fParam0 += 360.00000000;
    }
    fVar11 = -ATAN2( uParam4._fU0 - uParam1._fU0, uParam4._fU4 - uParam1._fU4 );
    if (fVar11 < 0.00000000)
    {
        fVar11 += 360.00000000;
    }
    fVar12 = fVar11 - fParam0;
    if (fVar12 < 0.00000000)
    {
        fVar12 += 360.00000000;
    }
    fVar13 = fParam0 - fVar11;
    if (fVar13 < 0.00000000)
    {
        fVar13 += 360.00000000;
    }
    if (fVar12 <= fVar13)
    {
        if (fVar12 > 25.00000000)
        {
            Result = -uParam7;
        }
        else
        {
            Result = (fVar12 / 25.00000000) * -uParam7;
        }
    }
    else if (fVar13 > 25.00000000)
    {
        Result = uParam7;
    }
    else
    {
        Result = (fVar13 / 25.00000000) * uParam7;
    }
    return Result;
}

void sub_2917(unknown uParam0, float fParam1, unknown uParam2)
{
    unknown uVar5;
    float fVar6;

    if ((uParam0^) != fParam1)
    {
        GET_FRAME_TIME( ref uVar5 );
        fVar6 = (uParam2 * 30.00000000) * uVar5;
        if (((uParam0^) - fParam1) > fVar6)
        {
            (uParam0^) -= fVar6;
        }
        else if (((uParam0^) - fParam1) < -fVar6)
        {
            (uParam0^) += fVar6;
        }
        else
        {
            (uParam0^) = fParam1;
        }
    }
    return;
}

void sub_3088(unknown uParam0, float fParam1, unknown uParam2, float fParam3, unknown uParam4, float fParam5)
{
    float fVar8;
    float fVar9;

    if ((uParam0^) != fParam1)
    {
        fVar8 = (ABSF( (uParam0^) - fParam1 )) / uParam2;
        fVar9 = uParam4;
        if (fVar8 < fParam5)
        {
            fVar9 = (fVar8 / fParam5) * uParam4;
        }
        if (fVar9 < fParam3)
        {
            fVar9 = fParam3;
        }
        sub_2917( uParam0, fParam1, fVar9 );
    }
    return;
}

void sub_3620(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if ((g_U2692[l_U21]._fU4 == 3) AND (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 ))))
    {
        if (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Open_Chute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( g_U2692[l_U21]._fU0, "PARACHUTE", "Open_Chute", ref fVar5 );
            if (fVar5 < 0.30000000)
            {
                sub_2917( ref l_U29, -60.00000000, 0.40000000 );
                sub_2917( ref l_U28, 1.00000000, 0.30000000 );
            }
            else if (l_U29 > -60.00000000)
            {
                sub_2917( ref l_U29, -7.00000000, 1.50000000 * 2.00000000 );
            }
            else
            {
                sub_2917( ref l_U29, -7.00000000, 1.50000000 );
            }
            sub_2917( ref l_U28, 12.00000000, 0.30000000 );
            if (NOT l_U25)
            {
                PLAY_SOUND_FROM_PED( -1, "PARACHUTE_OPEN", g_U2692[l_U21]._fU0 );
                l_U25 = 1;
            }
            if (fVar5 > 0.40000000)
            {
                if (NOT (DOES_OBJECT_EXIST( l_U20 )))
                {
                    CREATE_OBJECT( 1490460832, uParam0._fU0, uParam0._fU4, uParam0._fU8 + 2.00000000, ref l_U20, 1 );
                    ATTACH_OBJECT_TO_PED( l_U20, g_U2692[l_U21]._fU0, 0, 0.02500000, -0.12500000, 5.83000000, 0.00000000, 0.00000000, 0.00000000, 1 );
                    PLAY_OBJECT_ANIM( l_U20, "obj_deploy", "PARACHUTE", 1000.00000000, 0, 1 );
                }
                else if (NOT (IS_OBJECT_PLAYING_ANIM( l_U20, "obj_wind_low", "PARACHUTE" )))
                {
                    if (fVar5 > 0.60000000)
                    {
                        PLAY_OBJECT_ANIM( l_U20, "obj_wind_low", "PARACHUTE", 10.00000000, 1, 0 );
                    }
                }
            }
            if (fVar5 > 0.95000000)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Hang_Idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Hang_Idle", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                }
                g_U2692[l_U21]._fU4 = 5;
            }
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Open_chute", "PARACHUTE", 1000.00000000, 0, 1, 1, 0, 0 );
        }
    }
    sub_3088( ref g_U2692[l_U21]._fU36._fU0, 0.00000000, 45.00000000, 0.05000000, 5.00000000, 1065353216 );
    sub_3088( ref g_U2692[l_U21]._fU36._fU4, 0.00000000, 45.00000000, 0.05000000, 5.00000000, 1065353216 );
    sub_2917( ref l_U30, 0.00000000, 0.10000000 );
    return;
}

void sub_5140()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    float fVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;
    int iVar20;

    if ((g_U2692[l_U21]._fU12._fU0 != 0.00000000) AND (NOT (IS_CHAR_INJURED( g_U2692[l_U21]._fU0 ))))
    {
        fVar2 = 0.00000000;
        GET_CHAR_COORDINATES( g_U2692[l_U21]._fU0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        GET_CHAR_VELOCITY( g_U2692[l_U21]._fU0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_CHAR_HEIGHT_ABOVE_GROUND( g_U2692[l_U21]._fU0, ref fVar2 );
        if ((uVar3._fU8 < 0.00000000) || (IS_CHAR_IN_WATER( g_U2692[l_U21]._fU0 )))
        {
            if (DOES_OBJECT_EXIST( l_U20 ))
            {
                DETACH_OBJECT( l_U20, 1 );
                SET_OBJECT_COLLISION( l_U20, 0 );
                SET_OBJECT_DYNAMIC( l_U20, 1 );
                PLAY_OBJECT_ANIM( l_U20, "obj_crumple", "PARACHUTE", 8.00000000, 0, 1 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U2692[l_U21]._fU0 );
            SET_CHAR_HEADING( g_U2692[l_U21]._fU0, g_U2692[l_U21]._fU36._fU8 );
            g_U2692[l_U21]._fU4 = 7;
        }
        if (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Hang_Idle" )))
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Hang_Idle", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
        }
        if (NOT (DOES_OBJECT_EXIST( l_U20 )))
        {
            CREATE_OBJECT( 1490460832, uVar3._fU0, uVar3._fU4, uVar3._fU8 + 2.00000000, ref l_U20, 1 );
            ATTACH_OBJECT_TO_PED( l_U20, g_U2692[l_U21]._fU0, 0, 0.02500000, -0.12500000, 5.83000000, 0.00000000, 0.00000000, 0.00000000, 1 );
        }
        fVar9 = 1.25000000 * 1.25000000;
        fVar10 = 12.00000000;
        uVar11 = l_U34;
        fVar12 = 0.00000000;
        fVar13 = 20.00000000;
        fVar14 = 0.00000000;
        fVar15 = g_U2692[l_U21]._fU12._fU0 - uVar3._fU0;
        fVar16 = g_U2692[l_U21]._fU12._fU4 - uVar3._fU4;
        uVar17 = SQRT( (fVar15 * fVar15) + (fVar16 * fVar16) );
        uVar18 = ABSF( g_U2692[l_U21]._fU12._fU8 - uVar3._fU8 );
        fVar19 = uVar17 / uVar18;
        fVar10 = ABSF( uVar11 * fVar19 );
        if (fVar10 < 6.00000000)
        {
            fVar10 = 6.00000000;
        }
        else if (fVar10 > 15.00000000)
        {
            fVar10 = 15.00000000;
        }
        if (fVar2 > 10.00000000)
        {
            fVar12 = sub_2631( g_U2692[l_U21]._fU36._fU8, uVar3, g_U2692[l_U21]._fU12, fVar9 );
        }
        fVar14 = (l_U30 / fVar9) * 45.00000000;
        sub_2917( ref l_U28, fVar10, 0.30000000 );
        sub_2917( ref l_U29, uVar11, 0.25000000 );
        sub_2917( ref l_U30, fVar12, 0.07500000 );
        sub_3088( ref g_U2692[l_U21]._fU36._fU0, fVar13, 20.00000000 * 2.00000000, 0.05000000, 5.00000000, 1065353216 );
        sub_3088( ref g_U2692[l_U21]._fU36._fU4, fVar14, 45.00000000 * 2.00000000, 0.05000000, 5.00000000, 1065353216 );
        g_U2692[l_U21]._fU36._fU8 -= l_U30;
        if (g_U2692[l_U21]._fU36._fU8 > 180)
        {
            g_U2692[l_U21]._fU36._fU8 -= 360;
        }
        else if (g_U2692[l_U21]._fU36._fU8 < 65356)
        {
            g_U2692[l_U21]._fU36._fU8 += 360;
        }
        if (NOT (IS_PED_RAGDOLL( g_U2692[l_U21]._fU0 )))
        {
            sub_1690();
        }
        if (IS_CHAR_WAITING_FOR_WORLD_COLLISION( g_U2692[l_U21]._fU0 ))
        {
            l_U27 = 1;
            l_U24 = 0;
        }
        else if (l_U27)
        {
            if (l_U24 == 0)
            {
                GET_GAME_TIMER( ref l_U24 );
            }
            else
            {
                GET_GAME_TIMER( ref iVar20 );
                if ((uVar6._fU8 < -1.00000000) || ((iVar20 - l_U24) > 2000))
                {
                    l_U27 = 0;
                }
            }
        }
        if (((NOT l_U27) AND (((ABSF( uVar6._fU8 - l_U29 )) > 3.00000000) AND (uVar6._fU8 > -1.00000000))) || (fVar2 < 1.20000000))
        {
            if (DOES_OBJECT_EXIST( l_U20 ))
            {
                DETACH_OBJECT( l_U20, 1 );
                SET_OBJECT_COLLISION( l_U20, 0 );
                SET_OBJECT_DYNAMIC( l_U20, 1 );
                PLAY_OBJECT_ANIM( l_U20, "obj_crumple", "PARACHUTE", 8.00000000, 0, 1 );
            }
            SET_CHAR_HEADING( g_U2692[l_U21]._fU0, g_U2692[l_U21]._fU36._fU8 );
            SET_CHAR_VELOCITY( g_U2692[l_U21]._fU0, uVar6._fU0 / 2.00000000, uVar6._fU4 / 2.00000000, uVar6._fU8 );
            if (l_U29 >= (l_U34 - 2.00000000))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Land" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Land", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( g_U2692[l_U21]._fU0, "PARACHUTE", "Land_Fast" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U2692[l_U21]._fU0, "Land_Fast", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
            }
            g_U2692[l_U21]._fU4 = 7;
        }
    }
    return;
}

