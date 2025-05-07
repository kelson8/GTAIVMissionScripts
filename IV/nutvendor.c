void main()
{
    l_U4 = 0.40000000;
    l_U5 = 0;
    l_U9 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U57 = 0;
    l_U58 = 0;

    // l_U59 = particleEffects
    particleEffects = 0;
    l_U60 = 0;
    // l_U65 = currentObjectScript?
    currentObjectScript = "ObjScpt_07";
    l_U66 = 0;
    l_U67 = 0;
    l_U68 = 1;
    l_U69 = 0;
    l_U70 = 0;

    if (HAS_DEATHARREST_EXECUTED())
    {
        CleanupScript();
    }

    while (true)
    {
        WAIT( 0 );
        if (g_U9890 != 1)
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                // TODO Figure this out
                // l_U94 is some type of object, the hotdogCartObject?
                if (DOES_OBJECT_EXIST( l_U94 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U94 ))
                    {
                        switch (l_U11)
                        {
                            case 0:
                            sub_1134( l_U94 );
                            l_U11 = 1;
                            break;
                            case 1:
                            sub_2166( l_U94 );
                            sub_2543( l_U94 );
                            break;
                            case 2:
                            sub_2554( l_U94 );
                            break;
                            case 3:
                            sub_7393();
                            sub_2543( l_U94 );
                            sub_7623();
                            break;
                            case 4:
                            sub_2543( l_U94 );
                            sub_8082();
                            l_U57 = 0;
                            break;
                            case 6:
                            if (NOT (IS_CHAR_INJURED( l_U89 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U89 );
                                SET_CHAR_KEEP_TASK( l_U89, 1 );
                                TASK_WANDER_STANDARD( l_U89 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                                l_U89 = nil;
                            }
                            if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
                            {
                                CLEAR_CHAR_TASKS( hotdogVendorPed );
                            }
                            if (DOES_OBJECT_EXIST( hotdogVenderCart ))
                            {
                                if (IS_OBJECT_ATTACHED( hotdogVenderCart ))
                                {
                                    DETACH_OBJECT( hotdogVenderCart, 1 );
                                }
                                DELETE_OBJECT( ref hotdogVenderCart );
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref hotdogVenderCart );
                            }
                            if (l_U60 == 0)
                            {
                                if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
                                {
                                    // l_U49 = hotdogStandHeading
                                    TASK_ACHIEVE_HEADING( hotdogVendorPed, hotdogStandHeading );
                                }
                            }
                            if (l_U12 != 19)
                            {
                                if (DOES_OBJECT_EXIST( l_U91 ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U91 ))
                                    {
                                        DETACH_OBJECT( l_U91, 1 );
                                    }
                                    DELETE_OBJECT( ref l_U91 );
                                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
                                }
                            }
                            l_U71[1] = 0;
                            l_U71[0] = 0;
                            l_U74 = 0;

                            CREATE_OBJECT( 1432278665, l_U22.x, l_U22.y, l_U22.z, ref hotdogVenderCart, 1 );
                            SET_OBJECT_VISIBLE( hotdogVenderCart, 0 );
                            SET_OBJECT_COLLISION( hotdogVenderCart, 0 );

                            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                            {
                                TogglePlayerControl( 0 );
                                SET_PLAYER_CONTROL_ADVANCED( CurrentPlayerId(), 0, 0, 1 );
                            }

                            l_U12 = 0;
                            l_U11 = 7;
                            break;
                            case 7:
                            sub_2543( l_U94 );
                            sub_10281();
                            break;
                        }
                    }
                    else
                    {
                        CleanupScript();
                    }
                }
                else
                {
                    CleanupScript();
                }
            }
            else
            {
                CleanupScript();
            }
        }
        else
        {
            CleanupScript();
        }
    }
    return;
}

// Cleanup Script
// sub_117
void CleanupScript()
{
    sub_139( "ObjScpt_07" );
    SetScriptObject( 2, "ObjScpt_07" );
    SetScriptObject( 2, "ClaScpt_07" );
    SetScriptObject( 2, "NULL" );
    if (l_U11 == 7)
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( GetPlayerChar() );
        TogglePlayerControl( 1 );
    }
    if (DOES_OBJECT_EXIST( hotdogVenderCart ))
    {
        if (IS_OBJECT_ATTACHED( hotdogVenderCart ))
        {
            DETACH_OBJECT( hotdogVenderCart, 1 );
        }
        DELETE_OBJECT( ref hotdogVenderCart );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref hotdogVenderCart );
    }
    if (DOES_OBJECT_EXIST( l_U91 ))
    {
        if (IS_OBJECT_ATTACHED( l_U91 ))
        {
            DETACH_OBJECT( l_U91, 1 );
        }
        DELETE_OBJECT( ref l_U91 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
    }
    
    // 
    if (particleEffects != 0)
    {
        STOP_PTFX( particleEffects );
    }
    if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
    {
        if (l_U70 == 1)
        {
            CLEAR_CHAR_TASKS( hotdogVendorPed );
            SET_CHAR_KEEP_TASK( hotdogVendorPed, 1 );
            TASK_COMBAT( hotdogVendorPed, GetPlayerChar() );
        }
        else
        {
            CLEAR_CHAR_TASKS( hotdogVendorPed );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref hotdogVendorPed );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_139(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

// TODO Check this later
// sub_205
// Possibly SetScriptObject(int iParam0, string scriptObject)
void SetScriptObject(int iParam0, string sParam1)
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
                    sub_426();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( CurrentPlayerId(), 1 );
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

void sub_426()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

// sub_475
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

// sub_603
void GetPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

// Toggle Player Control
// sub_652
void TogglePlayerControl(int toggle)
{
    if (toggle == 0)
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    }
    return;
}

void sub_1134(unknown uParam0)
{
    l_U87 = sub_1143();
    REQUEST_ANIMS( "amb@nutcart" );
    REQUEST_MODEL( l_U87 );
    REQUEST_MODEL( 1432278665 );
    sub_1843();
    l_U40._fU0 = 0.00000000;
    l_U40._fU4 = 0.00000000;
    l_U40._fU8 = 0.00000000;
    l_U40._fU0 = 0.00000000;
    l_U40._fU4 = 0.00000000;
    l_U40._fU8 = 0.00000000;
    sub_1932();
    sub_1969( uParam0 );
    return;
}

void sub_1143()
{
    int iVar2;
    unknown uVar3;
    int Result;
    int iVar5;
    int iVar6;
    int iVar7;

    Result = -186113957;
    iVar5 = 142730876;
    iVar6 = 768442188;
    iVar7 = 420915580;
    FIND_PRIMARY_POPULATION_ZONE_GROUP( ref iVar2, ref uVar3 );
    if (iVar2 == 0)
    {
        return Result;
    }
    if (iVar2 == 1)
    {
        return iVar7;
    }
    if (iVar2 == 2)
    {
        return Result;
    }
    if (iVar2 == 3)
    {
        return Result;
    }
    if (iVar2 == 4)
    {
        return iVar7;
    }
    if (iVar2 == 5)
    {
        return iVar7;
    }
    if (iVar2 == 6)
    {
        return Result;
    }
    if (iVar2 == 7)
    {
        return Result;
    }
    if (iVar2 == 8)
    {
        return Result;
    }
    if (iVar2 == 9)
    {
        return Result;
    }
    if (iVar2 == 10)
    {
        return Result;
    }
    if (iVar2 == 11)
    {
        return iVar5;
    }
    if (iVar2 == 13)
    {
        return iVar5;
    }
    if (iVar2 == 14)
    {
        return Result;
    }
    if (iVar2 == 15)
    {
        return iVar6;
    }
    if (iVar2 == 16)
    {
        return iVar7;
    }
    if (iVar2 == 17)
    {
        return iVar7;
    }
    if (iVar2 == 18)
    {
        return iVar6;
    }
    if (iVar2 == 19)
    {
        return Result;
    }
    if (iVar2 == 20)
    {
        return Result;
    }
    if (iVar2 == 21)
    {
        return iVar6;
    }
    if (iVar2 == 22)
    {
        return Result;
    }
    if (iVar2 == 23)
    {
        return Result;
    }
    if (iVar2 == 24)
    {
        return iVar6;
    }
    if (iVar2 == 25)
    {
        return iVar5;
    }
    if (iVar2 == 26)
    {
        return iVar5;
    }
    if (iVar2 == 27)
    {
        return iVar5;
    }
    if (iVar2 == 28)
    {
        return iVar5;
    }
    if (iVar2 == 29)
    {
        return iVar5;
    }
    if (iVar2 == 30)
    {
        return iVar7;
    }
    if (iVar2 == 31)
    {
        return iVar7;
    }
    if (iVar2 == 32)
    {
        return iVar7;
    }
    if (iVar2 == 33)
    {
        return Result;
    }
    if (iVar2 == 34)
    {
        return iVar5;
    }
    if (iVar2 == 35)
    {
        return iVar5;
    }
    if (iVar2 == 36)
    {
        return iVar5;
    }
    if (iVar2 == 37)
    {
        return Result;
    }
    if (iVar2 == 38)
    {
        return Result;
    }
    if (iVar2 == 39)
    {
        return iVar6;
    }
    if (iVar2 == 40)
    {
        return iVar6;
    }
    if (iVar2 == 41)
    {
        return iVar7;
    }
    return Result;
}

void sub_1843()
{
    return;
}

void sub_1932()
{
    currentObjectScript = "ObjScpt_07";
    return;
}

void sub_1969(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.70000000, -0.50000000, ref l_U16.x, ref l_U16.y, ref l_U16.z );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.30000000, 0.20000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
        GET_HEADING_FROM_VECTOR_2D( l_U19._fU0 - l_U16.x, l_U19._fU4 - l_U16.y, ref hotdogStandHeading );
        l_U53 = hotdogStandHeading - 180;
    }
    return;
}

void sub_2166(unknown uParam0)
{
    if ((HAS_MODEL_LOADED( l_U87 )) AND (HAS_MODEL_LOADED( 1432278665 )))
    {
        if (NOT (IS_OBJECT_ON_SCREEN( uParam0 )))
        {
            particleEffects = START_PTFX_ON_OBJ( "ambient_hotdogstand", uParam0, 0.00000000, 0.00000000, 0.80000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.50000000, -0.50000000, ref l_U22.x, ref l_U22.y, ref l_U22.z );

            // l_U90 = hotdogVenderCart
            CREATE_OBJECT( 1432278665, l_U22.x, l_U22.y, l_U22.z, ref hotdogVenderCart, 1 );
            SET_OBJECT_VISIBLE( hotdogVenderCart, 0 );
            SET_OBJECT_COLLISION( hotdogVenderCart, 0 );
            SET_OBJECT_LIGHTS( uParam0, 1 );

            // l_U88 is possibly the nutVendorPed or hotdogVendorPed
            CREATE_CHAR( 4, l_U87, l_U16.x, l_U16.y, l_U16.z, ref hotdogVendorPed, 1 );
            if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( hotdogVendorPed );
                SET_CHAR_HEADING( hotdogVendorPed, hotdogStandHeading );
                SET_CHAR_IN_CUTSCENE( hotdogVendorPed, 1 );
                TASK_START_SCENARIO_IN_PLACE( hotdogVendorPed, "scenario_standing", -1082130432 );
                l_U11 = 3;
            }
        }
    }
    return;
}

void sub_2543(unknown uParam0)
{
    unknown uVar3;

    sub_2554( uParam0 );
    if (DOES_CHAR_EXIST( hotdogVendorPed ))
    {
        if (IS_CHAR_DEAD( hotdogVendorPed ))
        {
            CleanupScript();
        }
        if (IS_CHAR_FATALLY_INJURED( hotdogVendorPed ))
        {
            CleanupScript();
        }
        if (IS_CHAR_INJURED( hotdogVendorPed ))
        {
            CleanupScript();
        }
        if (IS_PED_FLEEING( hotdogVendorPed ))
        {
            CleanupScript();
        }
        if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
        {
            GET_CURRENT_CHAR_WEAPON( GetPlayerChar(), ref uVar3 );
            if (IS_PLAYER_TARGETTING_CHAR( CurrentPlayerId(), hotdogVendorPed ))
            {
                if (NOT sub_3190())
                {
                    SAY_AMBIENT_SPEECH( hotdogVendorPed, "GUN_RUN", 0, 1, 0 );
                    CleanupScript();
                }
            }
        }
        if (IS_CHAR_SHOOTING_IN_AREA( GetPlayerChar(), l_U13._fU0 - 15, l_U13._fU4 - 15, l_U13._fU0 + 15, l_U13._fU4 + 15, 0 ))
        {
            CleanupScript();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U89 )))
    {
        if ((sub_3425( l_U19 )) || ((IS_PLAYER_TARGETTING_CHAR( CurrentPlayerId(), l_U89 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U89, GetPlayerChar(), 0 ))))
        {
            if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
            {
                CLEAR_CHAR_TASKS( hotdogVendorPed );
            }
            sub_3546();
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
            l_U57 = 0;
            l_U89 = nil;
            l_U71[1] = 0;
            l_U71[0] = 0;
            l_U74 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U89 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( GetPlayerChar(), l_U89 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U89 );
                TASK_WANDER_STANDARD( l_U89 );
            }
            if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
            {
                CLEAR_CHAR_TASKS( hotdogVendorPed );
            }
            sub_3546();
            l_U57 = 0;
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
            l_U89 = nil;
            l_U71[1] = 0;
            l_U71[0] = 0;
            l_U74 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (IS_CHAR_IN_MELEE_COMBAT( GetPlayerChar() ))
    {
        sub_3546();
    }
    if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
    {
        if (IS_CHAR_IN_MELEE_COMBAT( hotdogVendorPed ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( GetPlayerChar(), hotdogVendorPed, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U69 = 1;
            }
        }
    }
    if (sub_4031())
    {
        sub_3546();
    }
    if (IS_CHAR_SHOOTING_IN_AREA( GetPlayerChar(), l_U13._fU0 - 30, l_U13._fU4 - 30, l_U13._fU0 + 30, l_U13._fU4 + 30, 0 ))
    {
        CleanupScript();
    }
    if (l_U11 == 7)
    {
        if ((l_U12 == 19) || ((l_U12 == 18) || ((l_U12 == 17) || (l_U12 == 15))))
        {
            if (sub_4296())
            {
                if (DOES_OBJECT_EXIST( l_U91 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U91 ))
                    {
                        DETACH_OBJECT( l_U91, 1 );
                    }
                    DELETE_OBJECT( ref l_U91 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
                    if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                    {
                        CLEAR_CHAR_TASKS( GetPlayerChar() );
                    }
                    TogglePlayerControl( 1 );
                    l_U12 = 19;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U89 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U89, 0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
            sub_3546();
            l_U89 = nil;
            l_U71[1] = 0;
            l_U71[0] = 0;
            l_U74 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_OBJECT_UPRIGHT( uParam0, 20 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( GetPlayerChar(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U70 = 1;
            }
            CleanupScript();
        }
        if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 0 )) < l_U4)
        {
            sub_4710( uParam0 );
            CleanupScript();
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U13._fU0, l_U13._fU4, l_U13._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            sub_1969( uParam0 );
        }
    }
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerId() ))
        {
            GET_INTERIOR_FROM_CHAR( GetPlayerChar(), ref l_U92 );
            if (l_U92 == nil)
            {
                if (HAVE_ANIMS_LOADED( "amb@nutcart" ))
                {
                    if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
                    {
                        if ((NOT (IS_CHAR_IN_ANY_CAR( GetPlayerChar() ))) AND (l_U11 != 1))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( GetPlayerChar(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 2.00000000, 2.00000000, 1.00000000, 0 ))
                            {
                                if (l_U11 != 7)
                                {
                                    if (l_U69 == 0)
                                    {
                                        if (NOT (IS_PED_RAGDOLL( hotdogVendorPed )))
                                        {
                                            if (NOT (IS_CHAR_GETTING_UP( hotdogVendorPed )))
                                            {
                                                if (NOT (IS_CHAR_IN_MELEE_COMBAT( hotdogVendorPed )))
                                                {
                                                    if (l_U60 == 0)
                                                    {
                                                        if (l_U11 != 2)
                                                        {
                                                            sub_1932();
                                                            if (sub_5234( 2, 0 ))
                                                            {
                                                                if (sub_5495( 2, currentObjectScript, 0 ))
                                                                {
                                                                    if (IS_SCORE_GREATER( CurrentPlayerId(), 5 ))
                                                                    {
                                                                        sub_139( currentObjectScript );
                                                                        REMOVE_PED_HELMET( GetPlayerChar(), 1 );
                                                                        g_U9060++;
                                                                        if (g_U9060 < g_U9057)
                                                                        {
                                                                            if (USING_STANDARD_CONTROLS())
                                                                            {
                                                                                currentObjectScript = "ObjScpt_07";
                                                                            }
                                                                            else
                                                                            {
                                                                                currentObjectScript = "ClaScpt_07";
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            currentObjectScript = "NULL";
                                                                        }
                                                                        l_U11 = 6;
                                                                    }
                                                                    else
                                                                    {
                                                                        sub_6268( "FAIL_TRAN", 3000, 0 );
                                                                    }
                                                                }
                                                            }
                                                            else
                                                            {
                                                                SetScriptObject( 2, "ObjScpt_07" );
                                                                SetScriptObject( 2, "ClaScpt_07" );
                                                                SetScriptObject( 2, "NULL" );
                                                            }
                                                        }
                                                        else
                                                        {
                                                            SetScriptObject( 2, "ObjScpt_07" );
                                                            SetScriptObject( 2, "ClaScpt_07" );
                                                            SetScriptObject( 2, "NULL" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        SetScriptObject( 2, "ObjScpt_07" );
                                                        SetScriptObject( 2, "ClaScpt_07" );
                                                        SetScriptObject( 2, "NULL" );
                                                    }
                                                }
                                                else
                                                {
                                                    SetScriptObject( 2, "ObjScpt_07" );
                                                    SetScriptObject( 2, "ClaScpt_07" );
                                                    SetScriptObject( 2, "NULL" );
                                                }
                                            }
                                            else
                                            {
                                                SetScriptObject( 2, "ObjScpt_07" );
                                                SetScriptObject( 2, "ClaScpt_07" );
                                                SetScriptObject( 2, "NULL" );
                                            }
                                        }
                                        else
                                        {
                                            SetScriptObject( 2, "ObjScpt_07" );
                                            SetScriptObject( 2, "ClaScpt_07" );
                                            SetScriptObject( 2, "NULL" );
                                        }
                                    }

                                    // l_U68 seems to be cancelling the hot dog vendor speech.
                                    else if (l_U68 == 0)
                                    {
                                        CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( hotdogVendorPed );
                                        PrintUpsetVendorText();
                                        SAY_AMBIENT_SPEECH( hotdogVendorPed, "Generic_Fuck_Off", 1, 0, 0 );
                                        l_U68 = 1;
                                    }
                                    SetScriptObject( 2, "ObjScpt_07" );
                                    SetScriptObject( 2, "ClaScpt_07" );
                                    SetScriptObject( 2, "NULL" );;
                                }
                            }
                            else
                            {
                                l_U68 = 0;
                                SetScriptObject( 2, "ObjScpt_07" );
                                SetScriptObject( 2, "ClaScpt_07" );
                                SetScriptObject( 2, "NULL" );
                            }
                        }
                        else
                        {
                            SetScriptObject( 2, "ObjScpt_07" );
                            SetScriptObject( 2, "ClaScpt_07" );
                            SetScriptObject( 2, "NULL" );
                        }
                    }
                    else
                    {
                        SetScriptObject( 2, "ObjScpt_07" );
                        SetScriptObject( 2, "ClaScpt_07" );
                        SetScriptObject( 2, "NULL" );
                    }
                }
            }
        }
        else
        {
            SetScriptObject( 2, "ObjScpt_07" );
            SetScriptObject( 2, "ClaScpt_07" );
            SetScriptObject( 2, "NULL" );
        }
    }
    return;
}

void sub_2554(unknown uParam0)
{
    switch (l_U60)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( hotdogVendorPed, l_U16.x, l_U16.y, l_U16.z, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U93 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U16.x, l_U16.y, l_U16.z, 2, -1, 1.00000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, l_U16.x, l_U16.y, l_U16.z, hotdogStandHeading, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U93 );
                l_U85 = 0;
                if (l_U89 != nil)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                    l_U89 = nil;
                }
                if (l_U11 == 7)
                {
                    TogglePlayerControl( 1 );
                    CLEAR_CHAR_TASKS( GetPlayerChar() );
                    l_U12 = 0;
                }
                sub_1969( uParam0 );
                l_U11 = 2;
                l_U60++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
        {
            TASK_PERFORM_SEQUENCE( hotdogVendorPed, l_U93 );
            GET_GAME_TIMER( ref l_U62 );
            CLEAR_SEQUENCE_TASK( l_U93 );
            l_U60++;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U63 );
        l_U64 = l_U63 - l_U62;
        if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
        {
            GET_SCRIPT_TASK_STATUS( hotdogVendorPed, 29, ref l_U85 );
            if ((l_U64 > 8000) || (l_U85 == 7))
            {
                l_U11 = 3;
                l_U60 = 0;
            }
        }
        break;
    }
    return;
}

int sub_3190()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( GetPlayerChar(), ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    if (iVar2 == 3)
    {
        return 1;
    }
    if (iVar2 == 1)
    {
        return 1;
    }
    if (iVar2 == 46)
    {
        return 1;
    }
    return 0;
}

int sub_3425(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( GetPlayerChar() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( GetPlayerChar(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3546()
{
    if (DOES_OBJECT_EXIST( l_U91 ))
    {
        if (IS_OBJECT_ATTACHED( l_U91 ))
        {
            DETACH_OBJECT( l_U91, 1 );
        }
        DELETE_OBJECT( ref l_U91 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
    }
    if (DOES_OBJECT_EXIST( hotdogVenderCart ))
    {
        if (IS_OBJECT_ATTACHED( hotdogVenderCart ))
        {
            DETACH_OBJECT( hotdogVenderCart, 1 );
        }
        DELETE_OBJECT( ref hotdogVenderCart );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref hotdogVenderCart );
    }
    return;
}

int sub_4031()
{
    if (sub_4040())
    {
        if (sub_4079())
        {
            return 1;
        }
    }
    return 0;
}

int sub_4040()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_4079()
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

int sub_4296()
{
    if ((IS_BUTTON_PRESSED( 0, 16 )) || ((IS_BUTTON_PRESSED( 0, 15 )) || ((IS_BUTTON_PRESSED( 0, 14 )) || (IS_BUTTON_PRESSED( 0, 17 )))))
    {
        return 1;
    }
    if ((IS_BUTTON_JUST_PRESSED( 0, 16 )) || ((IS_BUTTON_JUST_PRESSED( 0, 15 )) || ((IS_BUTTON_JUST_PRESSED( 0, 14 )) || (IS_BUTTON_JUST_PRESSED( 0, 17 )))))
    {
        return 1;
    }
    return 0;
}

void sub_4710(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( hotdogVendorPed )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( hotdogVendorPed, uParam0, 5.00000000, 5.00000000, 0 ))
            {
                TRIGGER_PTFX_ON_OBJ( "fire_hotdog_blaze", uParam0, 0.00000000, 0.00000000, 0.80000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                START_CHAR_FIRE( hotdogVendorPed );
                INCREMENT_INT_STAT_NO_MESSAGE( 272, 1 );
            }
        }
    }
    return;
}

int sub_5234(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerId() )))))
                {
                    if (NOT sub_4040())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( GetPlayerChar() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_5386())
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

void sub_5386()
{
    return sub_5397( 0, 0 );
}

int sub_5397(boolean bParam0, unknown uParam1)
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

int sub_5495(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_5234( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( CurrentPlayerId(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5770();
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

void sub_5770()
{
    return sub_5397( 1, 1 );
}

int sub_6268(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

// sub_6690
// Print upset vendor text
void PrintUpsetVendorText()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar2 );
    if (iVar2 == 0)
    {
        PRINT( "upsetVend", 5000, 1 );
    }
    else if (iVar2 == 1)
    {
        PRINT( "upsetVend1", 5000, 1 );
    }
    else if (iVar2 == 2)
    {
        PRINT( "upsetVend2", 5000, 1 );
    }
    else if (iVar2 == 3)
    {
        PRINT( "upsetVend3", 5000, 1 );
    }
    else if (iVar2 == 4)
    {
        PRINT( "upsetVend4", 5000, 1 );
    }
    else if (iVar2 == 5)
    {
        PRINT( "upsetVend5", 5000, 1 );
    }
    else if (iVar2 == 6)
    {
        PRINT( "upsetVend6", 5000, 1 );
    }
    else if (iVar2 == 7)
    {
        PRINT( "upsetVend7", 5000, 1 );
    }
    else
    {
        PRINT( "upsetVend8", 5000, 1 );
    };;;;;;;;
    return;
}

void sub_7393()
{
    switch (l_U61)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
        {
            if (NOT (IS_CHAR_IN_MELEE_COMBAT( hotdogVendorPed )))
            {
                SAY_AMBIENT_SPEECH( hotdogVendorPed, "ATTRACT_NUTS", 0, 1, 0 );
                GET_GAME_TIMER( ref l_U62 );
                GENERATE_RANDOM_INT_IN_RANGE( 4000, 13000, ref l_U55 );
                l_U61++;
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U63 );
        l_U64 = l_U63 - l_U62;
        if (l_U64 > (6000 + l_U55))
        {
            l_U61--;
        }
        break;
    }
    return;
}

void sub_7623()
{
    if (l_U11 != 6)
    {
        if (l_U89 == nil)
        {
            if (HAVE_ANIMS_LOADED( "amb@nutcart" ))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U13._fU0, l_U13._fU4, l_U13._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U89 );
            }
        }
        if (l_U89 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U89 )))
                {
                    if (NOT (IS_PED_A_MISSION_PED( l_U89 )))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U89, GetPlayerChar(), 0 )))
                        {
                            if (NOT (IS_PLAYER_TARGETTING_CHAR( CurrentPlayerId(), l_U89 )))
                            {
                                if (NOT (sub_3425( l_U19 )))
                                {
                                    SET_CHAR_AS_MISSION_CHAR( l_U89 );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U89, 0 );
                                    SET_CHAR_IN_CUTSCENE( l_U89, 1 );
                                    l_U12 = 0;
                                    l_U11 = 4;
                                }
                                else
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                                    l_U89 = nil;
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                                l_U89 = nil;
                            }
                        }
                        else
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                            l_U89 = nil;
                        }
                    }
                    else
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                        l_U89 = nil;
                    }
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                    l_U89 = nil;
                }
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                l_U89 = nil;
            }
        }
    }
    return;
}

void sub_8082()
{
    sub_8091();
    if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
    {
        switch (l_U12)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U89, l_U19._fU0, l_U19._fU4, l_U19._fU8, 2, -2, 1.00000000 );
                if (sub_8350( hotdogVendorPed, l_U16 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( hotdogVendorPed, l_U16.x, l_U16.y, l_U16.z, hotdogStandHeading, 2.00000000 );
                }
                l_U12 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U89, 27, ref l_U83 );
                if ((l_U83 == 2) || (l_U83 == 7))
                {
                    l_U12 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                if (sub_8350( l_U89, l_U19 ))
                {
                    TASK_GO_STRAIGHT_TO_COORD( l_U89, l_U19._fU0, l_U19._fU4, l_U19._fU8, 2, -2 );
                    l_U83 = 0;
                    l_U12 = 3;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U89, 17, ref l_U83 );
                if ((l_U83 == 2) || (l_U83 == 7))
                {
                    l_U12 = 4;
                }
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                l_U83 = 0;
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U89, hotdogVendorPed );
                l_U12 = 5;
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U89, 34, ref l_U83 );
                if ((l_U83 == 2) || (l_U83 == 7))
                {
                    l_U12 = 6;
                }
            }
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                TASK_PLAY_ANIM( hotdogVendorPed, "SELL_NUTS", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U89, "BUY_NUTS", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( l_U89, "Order_Food", 1, 0, 0 );
                l_U83 = 0;
                l_U12 = 8;
            }
            break;
            case 8:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U89, "amb@nutcart", "BUY_NUTS" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U89, "amb@nutcart", "BUY_NUTS", ref l_U51 );
                }
                else
                {
                    l_U12 = 19;
                }
            }
            if (IS_CHAR_PLAYING_ANIM( hotdogVendorPed, "amb@nutcart", "BUY_NUTS" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( hotdogVendorPed, "amb@nutcart", "BUY_NUTS", ref l_U50 );
            }
            if (l_U71[0] == 0)
            {
                if (l_U50 > 0.21900000)
                {
                    if (NOT (DOES_OBJECT_EXIST( hotdogVenderCart )))
                    {
                        CREATE_OBJECT( 1432278665, l_U22.x, l_U22.y, l_U22.z, ref hotdogVenderCart, 1 );
                    }
                    if (DOES_OBJECT_EXIST( hotdogVenderCart ))
                    {
                        if (NOT (IS_OBJECT_ATTACHED( hotdogVenderCart )))
                        {
                            ATTACH_OBJECT_TO_PED( hotdogVenderCart, hotdogVendorPed, 1219, 0, 0, 0, 0.00000000, 0.00000000, 0.00000000, 0 );
                        }
                        SET_OBJECT_VISIBLE( hotdogVenderCart, 1 );
                        l_U71[0] = 1;
                    }
                }
            }
            if (l_U71[1] == 0)
            {
                if (l_U50 > 0.72500000)
                {
                    if (DOES_OBJECT_EXIST( hotdogVenderCart ))
                    {
                        if (IS_OBJECT_ATTACHED( hotdogVenderCart ))
                        {
                            DETACH_OBJECT( hotdogVenderCart, 1 );
                        }
                        DELETE_OBJECT( ref hotdogVenderCart );
                        SAY_AMBIENT_SPEECH( hotdogVendorPed, "SELL_GOODS", 0, 1, 0 );
                        l_U71[1] = 1;
                    }
                }
            }
            if (l_U74 == 0)
            {
                if (l_U51 > 0.91800000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U89 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U89, "Thanks", 1, 0, 0 );
                        GIVE_PED_AMBIENT_OBJECT( l_U89, 1432278665 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                        l_U89 = nil;
                        l_U12 = 19;
                        l_U74 = 1;
                    }
                }
            }
            break;
            case 19:
            if (DOES_OBJECT_EXIST( hotdogVenderCart ))
            {
                if (IS_OBJECT_ATTACHED( hotdogVenderCart ))
                {
                    DETACH_OBJECT( hotdogVenderCart, 1 );
                }
                DELETE_OBJECT( ref hotdogVenderCart );
            }
            SetScriptObject( 2, "ObjScpt_07" );
            SetScriptObject( 2, "ClaScpt_07" );
            SetScriptObject( 2, "NULL" );
            CREATE_OBJECT( 1432278665, l_U22.x, l_U22.y, l_U22.z, ref hotdogVenderCart, 1 );
            SET_OBJECT_VISIBLE( hotdogVenderCart, 0 );
            SET_OBJECT_COLLISION( hotdogVenderCart, 0 );
            l_U50 = 0.00000000;
            l_U74 = 0;
            l_U71[0] = 0;
            l_U71[1] = 0;
            l_U66 = 0;
            l_U67 = 0;
            l_U11 = 3;
            l_U58 = 0;
            l_U12 = 0;
            break;
        }
    }
    return;
}

void sub_8091()
{
    if (NOT (IS_CHAR_INJURED( l_U89 )))
    {
        if (l_U12 > 4)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U89, l_U19._fU0, l_U19._fU4, l_U19._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U12 = 19;
            }
        }
    }
    return;
}

int sub_8350(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        if ((VDIST( uVar6, uParam1 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10281()
{
    if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
    {
        switch (l_U12)
        {
            case 0:
            if (sub_10390())
            {
                l_U12 = 19;
            }
            GET_CHAR_COORDINATES( GetPlayerChar(), ref l_U46._fU0, ref l_U46._fU4, ref l_U46._fU8 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( GetPlayerChar(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 3, -2, 0.20000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( hotdogVendorPed, l_U19._fU0, l_U19._fU4, l_U19._fU8 );
            l_U83 = 0;
            l_U12 = 1;
            break;
            case 1:
            if (sub_10390())
            {
                l_U12 = 19;
            }
            GET_SCRIPT_TASK_STATUS( GetPlayerChar(), 27, ref l_U83 );
            if (l_U83 == 7)
            {
                if (sub_10718( l_U19 ))
                {
                    sub_10808();
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( GetPlayerChar(), l_U19._fU0, l_U19._fU4, l_U19._fU8, l_U53, 2.00000000, 270.00000000 );
                    l_U12 = 3;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 3:
            if (sub_10390())
            {
                l_U12 = 19;
                break;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( GetPlayerChar(), 68, ref l_U83 );
                if (l_U83 == 7)
                {
                    GET_GAME_TIMER( ref l_U62 );
                    l_U83 = 0;
                    l_U12 = 4;
                }
            }
            break;
            case 4:
            TASK_TURN_CHAR_TO_FACE_CHAR( GetPlayerChar(), hotdogVendorPed );
            l_U12 = 5;
            break;
            case 5:
            GET_SCRIPT_TASK_STATUS( GetPlayerChar(), 34, ref l_U83 );
            if (l_U83 == 7)
            {
                TASK_LOOK_AT_CHAR( hotdogVendorPed, GetPlayerChar(), 7000, 0 );
                TASK_PLAY_ANIM( GetPlayerChar(), "BUY_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( hotdogVendorPed, "SELL_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( GetPlayerChar(), "GENERIC_BUY", 1, 1, 0 );
                l_U12 = 12;
            }
            break;
            case 12:
            if (IS_CHAR_PLAYING_ANIM( GetPlayerChar(), "amb@nutcart", "BUY_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( GetPlayerChar(), "amb@nutcart", "BUY_NUTS_PLYR", ref l_U51 );
            }
            if (IS_CHAR_PLAYING_ANIM( hotdogVendorPed, "amb@nutcart", "SELL_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( hotdogVendorPed, "amb@nutcart", "SELL_NUTS_PLYR", ref l_U50 );
            }
            if (l_U71[0] == 0)
            {
                if (l_U50 > 0.30200000)
                {
                    if (NOT (DOES_OBJECT_EXIST( hotdogVenderCart )))
                    {
                        CREATE_OBJECT( 1432278665, l_U22.x, l_U22.y, l_U22.z, ref hotdogVenderCart, 1 );
                    }
                    if (DOES_OBJECT_EXIST( hotdogVenderCart ))
                    {
                        if (NOT (IS_OBJECT_ATTACHED( hotdogVenderCart )))
                        {
                            ATTACH_OBJECT_TO_PED( hotdogVenderCart, hotdogVendorPed, 1219, -0.01000000, -0.02000000, 0, 2.96000000, -0.04000000, 0.56000000, 0 );
                        }
                        SET_OBJECT_VISIBLE( hotdogVenderCart, 1 );
                        l_U71[0] = 1;
                    }
                }
            }
            if (l_U74 == 0)
            {
                if (l_U51 > 0.87000000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U91 )))
                    {
                        CREATE_OBJECT( 1432278665, l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U91, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U91 ))
                    {
                        SET_OBJECT_VISIBLE( l_U91, 1 );
                        SET_OBJECT_COLLISION( l_U91, 0 );
                        if (NOT (IS_OBJECT_ATTACHED( l_U91 )))
                        {
                            ATTACH_OBJECT_TO_PED( l_U91, GetPlayerChar(), 1232, 0, 0, 0, 0.00000000, 0.00000000, 0.00000000, 0 );
                        }
                    }
                    sub_11843();
                    if (DOES_OBJECT_EXIST( hotdogVenderCart ))
                    {
                        if (IS_OBJECT_ATTACHED( hotdogVenderCart ))
                        {
                            DETACH_OBJECT( hotdogVenderCart, 1 );
                        }
                        DELETE_OBJECT( ref hotdogVenderCart );
                    }
                    SAY_AMBIENT_SPEECH( hotdogVendorPed, "SELL_GOODS", 1, 1, 0 );
                    l_U50 = 0.00000000;
                    l_U12 = 17;
                }
            }
            break;
            case 17:
            if (NOT (IS_CHAR_PLAYING_ANIM( GetPlayerChar(), "amb@nutcart", "BUY_NUTS_PLYR" )))
            {
                SAY_AMBIENT_SPEECH( GetPlayerChar(), "THANKS", 1, 1, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( GetPlayerChar(), "EAT_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                l_U50 = 0.00000000;
                if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                {
                    TogglePlayerControl( 1 );
                }
                l_U12 = 18;
            }
            break;
            case 18:
            if (IS_CHAR_PLAYING_ANIM( GetPlayerChar(), "amb@nutcart", "EAT_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( GetPlayerChar(), "amb@nutcart", "EAT_NUTS_PLYR", ref l_U50 );
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( GetPlayerChar(), "amb@nutcart", "EAT_NUTS_PLYR" )))
            {
                if (DOES_OBJECT_EXIST( l_U91 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U91 ))
                    {
                        DETACH_OBJECT( l_U91, 1 );
                    }
                    DELETE_OBJECT( ref l_U91 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
                }
                l_U12 = 19;
            }
            break;
            case 19:
            SetScriptObject( 2, "ObjScpt_07" );
            SetScriptObject( 2, "ClaScpt_07" );
            SetScriptObject( 2, "NULL" );
            if (DOES_OBJECT_EXIST( hotdogVenderCart ))
            {
                if (IS_OBJECT_ATTACHED( hotdogVenderCart ))
                {
                    DETACH_OBJECT( hotdogVenderCart, 1 );
                }
                DELETE_OBJECT( ref hotdogVenderCart );
            }
            sub_13115();
            CREATE_OBJECT( 1432278665, l_U22.x, l_U22.y, l_U22.z, ref hotdogVenderCart, 1 );
            SET_OBJECT_VISIBLE( hotdogVenderCart, 0 );
            SET_OBJECT_COLLISION( hotdogVenderCart, 0 );
            if (NOT (IS_CHAR_INJURED( hotdogVendorPed )))
            {
                TASK_ACHIEVE_HEADING( hotdogVendorPed, hotdogStandHeading );
            }
            l_U50 = 0.00000000;
            l_U66 = 0;
            l_U67 = 0;
            l_U11 = 3;
            l_U12 = 0;
            break;
        }
    }
    return;
}

int sub_10390()
{
    if ((sub_10438()) || ((IS_BUTTON_PRESSED( 0, 16 )) || ((IS_BUTTON_PRESSED( 0, 15 )) || ((IS_BUTTON_PRESSED( 0, 14 )) || (IS_BUTTON_PRESSED( 0, 17 ))))))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( GetPlayerChar() );
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
        return 1;
    }
    return 0;
}

int sub_10438()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 < 65436) || (iVar2 > 100))
    {
        return 1;
    }
    if ((iVar3 < 65436) || (iVar3 > 100))
    {
        return 1;
    }
    return 0;
}

int sub_10718(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( GetPlayerChar() )))
    {
        GET_CHAR_COORDINATES( GetPlayerChar(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10808()
{
    if (NOT (IS_CHAR_DEAD( GetPlayerChar() )))
    {
        GET_CURRENT_CHAR_WEAPON( GetPlayerChar(), ref l_U9 );
        if (l_U9 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( GetPlayerChar(), 46 );
            SET_CURRENT_CHAR_WEAPON( GetPlayerChar(), 0, 1 );
        }
        if (l_U9 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( GetPlayerChar(), 0, 1 );
        }
    }
    return;
}

void sub_11843()
{
    ADD_SCORE( CurrentPlayerId(), -5 );
    sub_11865();
    SET_CHAR_HEALTH( GetPlayerChar(), sub_11982() );
    sub_12070( 2, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 97, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 309, 1 );
    return;
}

void sub_11865()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            SET_PLAYER_MOOD_NORMAL( CurrentPlayerId() );
        }
    }
    sub_11922();
    return;
}

void sub_11922()
{
    if (NOT (IS_CHAR_DEAD( GetPlayerChar() )))
    {
        RESET_VISIBLE_PED_DAMAGE( GetPlayerChar() );
    }
    return;
}

void sub_11982()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( GetPlayerChar() )))
    {
        GET_CHAR_HEALTH( GetPlayerChar(), ref Result );
        if (Result <= 100)
        {
            Result += 100;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}

void sub_12070(unknown uParam0, unknown uParam1)
{
    sub_12091( uParam0, uParam1, 0.00000000, "" );
    return;
}

// Increment values for stats
// uParam0 seems to be set to 2 in sub_11843
// uParam1 seems to be the amount to increase by.
// uParam2 and uParam3 seem to be unused.
// void sub_12091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
void sub_12091(unknown uParam0, int statIncrementAmount, unknown uParam2, unknown uParam3)
{
    // Why are there so many of these, they aren't in use.
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
        PLAYSTATS_INT( "SPRUNK_BOUGHT", statIncrementAmount );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", statIncrementAmount );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", statIncrementAmount );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", statIncrementAmount );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", statIncrementAmount );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", statIncrementAmount );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", statIncrementAmount );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", statIncrementAmount );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", statIncrementAmount );
        break;
        case 9: break;
    }
    return;
}

// Set the player to put their weapon away.
void sub_13115()
{
    if (NOT (IS_CHAR_DEAD( GetPlayerChar() )))
    {
        if (l_U9 != 0)
        {
            if (l_U9 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( GetPlayerChar(), l_U9, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( GetPlayerChar(), 46 );
            }
        }
    }
    return;
}

