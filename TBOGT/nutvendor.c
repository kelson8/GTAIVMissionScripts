void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0.40000000;
    l_U7 = 0;
    l_U11 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U59 = 0;
    l_U60 = 0;
    l_U61 = 0;
    l_U62 = 0;
    l_U67 = "ObjScpt_07";
    l_U68 = 0;
    l_U69 = 0;
    l_U70 = 1;
    l_U71 = 0;
    l_U72 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_133();
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U10935 != 1)
        {
            if (IS_PLAYER_PLAYING( sub_491() ))
            {
                if (DOES_OBJECT_EXIST( l_U96 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U96 ))
                    {
                        switch (l_U13)
                        {
                            case 0:
                            sub_1150( l_U96 );
                            l_U13 = 1;
                            break;
                            case 1:
                            sub_2182( l_U96 );
                            sub_2559( l_U96 );
                            break;
                            case 2:
                            sub_2570( l_U96 );
                            break;
                            case 3:
                            sub_7417();
                            sub_2559( l_U96 );
                            sub_7647();
                            break;
                            case 4:
                            sub_2559( l_U96 );
                            sub_8106();
                            l_U59 = 0;
                            break;
                            case 6:
                            if (NOT (IS_CHAR_INJURED( l_U91 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U91 );
                                SET_CHAR_KEEP_TASK( l_U91, 1 );
                                TASK_WANDER_STANDARD( l_U91 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                                l_U91 = nil;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U90 )))
                            {
                                CLEAR_CHAR_TASKS( l_U90 );
                            }
                            if (DOES_OBJECT_EXIST( l_U92 ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U92 ))
                                {
                                    DETACH_OBJECT( l_U92, 1 );
                                }
                                DELETE_OBJECT( ref l_U92 );
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U92 );
                            }
                            if (l_U62 == 0)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U90 )))
                                {
                                    TASK_ACHIEVE_HEADING( l_U90, l_U51 );
                                }
                            }
                            if (l_U14 != 19)
                            {
                                if (DOES_OBJECT_EXIST( l_U93 ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U93 ))
                                    {
                                        DETACH_OBJECT( l_U93, 1 );
                                    }
                                    DELETE_OBJECT( ref l_U93 );
                                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U93 );
                                }
                            }
                            l_U73[1] = 0;
                            l_U73[0] = 0;
                            l_U76 = 0;
                            CREATE_OBJECT( 1432278665, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U92, 1 );
                            SET_OBJECT_VISIBLE( l_U92, 0 );
                            SET_OBJECT_COLLISION( l_U92, 0 );
                            if (IS_PLAYER_PLAYING( sub_491() ))
                            {
                                sub_668( 0 );
                                SET_PLAYER_CONTROL_ADVANCED( sub_491(), 0, 0, 1 );
                            }
                            l_U14 = 0;
                            l_U13 = 7;
                            break;
                            case 7:
                            sub_2559( l_U96 );
                            sub_10305();
                            break;
                        }
                    }
                    else
                    {
                        sub_133();
                    }
                }
                else
                {
                    sub_133();
                }
            }
            else
            {
                sub_133();
            }
        }
        else
        {
            sub_133();
        }
    }
    return;
}

void sub_133()
{
    sub_155( "ObjScpt_07" );
    sub_221( 2, "ObjScpt_07" );
    sub_221( 2, "ClaScpt_07" );
    sub_221( 2, "NULL" );
    if (l_U13 == 7)
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_619() );
        sub_668( 1 );
    }
    if (DOES_OBJECT_EXIST( l_U92 ))
    {
        if (IS_OBJECT_ATTACHED( l_U92 ))
        {
            DETACH_OBJECT( l_U92, 1 );
        }
        DELETE_OBJECT( ref l_U92 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U92 );
    }
    if (DOES_OBJECT_EXIST( l_U93 ))
    {
        if (IS_OBJECT_ATTACHED( l_U93 ))
        {
            DETACH_OBJECT( l_U93, 1 );
        }
        DELETE_OBJECT( ref l_U93 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U93 );
    }
    if (l_U61 != 0)
    {
        STOP_PTFX( l_U61 );
    }
    if (NOT (IS_CHAR_INJURED( l_U90 )))
    {
        if (l_U72 == 1)
        {
            CLEAR_CHAR_TASKS( l_U90 );
            SET_CHAR_KEEP_TASK( l_U90, 1 );
            TASK_COMBAT( l_U90, sub_619() );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U90 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U90 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_155(unknown uParam0)
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

void sub_221(int iParam0, string sParam1)
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
                    sub_442();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_491(), 1 );
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

void sub_442()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_491()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_619()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_668(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_491(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_491(), 1 );
    }
    return;
}

void sub_1150(unknown uParam0)
{
    l_U89 = sub_1159();
    REQUEST_ANIMS( "amb@nutcart" );
    REQUEST_MODEL( l_U89 );
    REQUEST_MODEL( 1432278665 );
    sub_1859();
    l_U42._fU0 = 0.00000000;
    l_U42._fU4 = 0.00000000;
    l_U42._fU8 = 0.00000000;
    l_U42._fU0 = 0.00000000;
    l_U42._fU4 = 0.00000000;
    l_U42._fU8 = 0.00000000;
    sub_1948();
    sub_1985( uParam0 );
    return;
}

void sub_1159()
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

void sub_1859()
{
    return;
}

void sub_1948()
{
    l_U67 = "ObjScpt_07";
    return;
}

void sub_1985(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U15._fU0, ref l_U15._fU4, ref l_U15._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.70000000, -0.50000000, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.30000000, 0.20000000, 0.00000000, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
        GET_HEADING_FROM_VECTOR_2D( l_U21._fU0 - l_U18._fU0, l_U21._fU4 - l_U18._fU4, ref l_U51 );
        l_U55 = l_U51 - 180;
    }
    return;
}

void sub_2182(unknown uParam0)
{
    if ((HAS_MODEL_LOADED( l_U89 )) AND (HAS_MODEL_LOADED( 1432278665 )))
    {
        if (NOT (IS_OBJECT_ON_SCREEN( uParam0 )))
        {
            l_U61 = START_PTFX_ON_OBJ( "ambient_hotdogstand", uParam0, 0.00000000, 0.00000000, 0.80000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.50000000, -0.50000000, ref l_U24._fU0, ref l_U24._fU4, ref l_U24._fU8 );
            CREATE_OBJECT( 1432278665, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U92, 1 );
            SET_OBJECT_VISIBLE( l_U92, 0 );
            SET_OBJECT_COLLISION( l_U92, 0 );
            SET_OBJECT_LIGHTS( uParam0, 1 );
            CREATE_CHAR( 4, l_U89, l_U18._fU0, l_U18._fU4, l_U18._fU8, ref l_U90, 1 );
            if (NOT (IS_CHAR_INJURED( l_U90 )))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U90 );
                SET_CHAR_HEADING( l_U90, l_U51 );
                SET_CHAR_IN_CUTSCENE( l_U90, 1 );
                TASK_START_SCENARIO_IN_PLACE( l_U90, "scenario_standing", -1082130432 );
                l_U13 = 3;
            }
        }
    }
    return;
}

void sub_2559(unknown uParam0)
{
    unknown uVar3;

    sub_2570( uParam0 );
    if (DOES_CHAR_EXIST( l_U90 ))
    {
        if (IS_CHAR_DEAD( l_U90 ))
        {
            sub_133();
        }
        if (IS_CHAR_FATALLY_INJURED( l_U90 ))
        {
            sub_133();
        }
        if (IS_CHAR_INJURED( l_U90 ))
        {
            sub_133();
        }
        if (IS_PED_FLEEING( l_U90 ))
        {
            sub_133();
        }
        if (NOT (IS_CHAR_INJURED( l_U90 )))
        {
            GET_CURRENT_CHAR_WEAPON( sub_619(), ref uVar3 );
            if (IS_PLAYER_TARGETTING_CHAR( sub_491(), l_U90 ))
            {
                if (NOT sub_3206())
                {
                    SAY_AMBIENT_SPEECH( l_U90, "GUN_RUN", 0, 1, 0 );
                    sub_133();
                }
            }
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_619(), l_U15._fU0 - 15, l_U15._fU4 - 15, l_U15._fU0 + 15, l_U15._fU4 + 15, 0 ))
        {
            sub_133();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U91 )))
    {
        if ((sub_3441( l_U21 )) || ((IS_PLAYER_TARGETTING_CHAR( sub_491(), l_U91 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U91, sub_619(), 0 ))))
        {
            if (NOT (IS_CHAR_INJURED( l_U90 )))
            {
                CLEAR_CHAR_TASKS( l_U90 );
            }
            sub_3562();
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
            l_U59 = 0;
            l_U91 = nil;
            l_U73[1] = 0;
            l_U73[0] = 0;
            l_U76 = 0;
            l_U13 = 3;
            l_U14 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U91 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_619(), l_U91 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U91 );
                TASK_WANDER_STANDARD( l_U91 );
            }
            if (NOT (IS_CHAR_INJURED( l_U90 )))
            {
                CLEAR_CHAR_TASKS( l_U90 );
            }
            sub_3562();
            l_U59 = 0;
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
            l_U91 = nil;
            l_U73[1] = 0;
            l_U73[0] = 0;
            l_U76 = 0;
            l_U13 = 3;
            l_U14 = 0;
        }
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_619() ))
    {
        sub_3562();
    }
    if (NOT (IS_CHAR_INJURED( l_U90 )))
    {
        if (IS_CHAR_IN_MELEE_COMBAT( l_U90 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_619(), l_U90, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U71 = 1;
            }
        }
    }
    if (sub_4047())
    {
        sub_3562();
    }
    if (IS_CHAR_SHOOTING_IN_AREA( sub_619(), l_U15._fU0 - 30, l_U15._fU4 - 30, l_U15._fU0 + 30, l_U15._fU4 + 30, 0 ))
    {
        sub_133();
    }
    if (l_U13 == 7)
    {
        if ((l_U14 == 19) || ((l_U14 == 18) || ((l_U14 == 17) || (l_U14 == 15))))
        {
            if (sub_4312())
            {
                if (DOES_OBJECT_EXIST( l_U93 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U93 ))
                    {
                        DETACH_OBJECT( l_U93, 1 );
                    }
                    DELETE_OBJECT( ref l_U93 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U93 );
                    if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                    {
                        CLEAR_CHAR_TASKS( sub_619() );
                    }
                    sub_668( 1 );
                    l_U14 = 19;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U91 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U91, 0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
            sub_3562();
            l_U91 = nil;
            l_U73[1] = 0;
            l_U73[0] = 0;
            l_U76 = 0;
            l_U13 = 3;
            l_U14 = 0;
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_OBJECT_UPRIGHT( uParam0, 20 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_619(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U72 = 1;
            }
            sub_133();
        }
        if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 0 )) < l_U6)
        {
            sub_4726( uParam0 );
            sub_133();
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U15._fU0, l_U15._fU4, l_U15._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            sub_1985( uParam0 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_491() ))
    {
        if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_491() ))
        {
            GET_INTERIOR_FROM_CHAR( sub_619(), ref l_U94 );
            if (l_U94 == nil)
            {
                if (HAVE_ANIMS_LOADED( "amb@nutcart" ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U90 )))
                    {
                        if ((NOT (IS_CHAR_IN_ANY_CAR( sub_619() ))) AND (l_U13 != 1))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_619(), l_U21._fU0, l_U21._fU4, l_U21._fU8, 2.00000000, 2.00000000, 1.00000000, 0 ))
                            {
                                if (l_U13 != 7)
                                {
                                    if (l_U71 == 0)
                                    {
                                        if (NOT (IS_PED_RAGDOLL( l_U90 )))
                                        {
                                            if (NOT (IS_CHAR_GETTING_UP( l_U90 )))
                                            {
                                                if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U90 )))
                                                {
                                                    if (l_U62 == 0)
                                                    {
                                                        if (l_U13 != 2)
                                                        {
                                                            sub_1948();
                                                            if (sub_5250( 2, 0 ))
                                                            {
                                                                if (sub_5511( 2, l_U67, 0 ))
                                                                {
                                                                    if (IS_SCORE_GREATER( sub_491(), 4 ))
                                                                    {
                                                                        SET_MINIGAME_IN_PROGRESS( 1 );
                                                                        sub_155( l_U67 );
                                                                        REMOVE_PED_HELMET( sub_619(), 1 );
                                                                        g_U9577++;
                                                                        if (g_U9577 < g_U9574)
                                                                        {
                                                                            if (USING_STANDARD_CONTROLS())
                                                                            {
                                                                                l_U67 = "ObjScpt_07";
                                                                            }
                                                                            else
                                                                            {
                                                                                l_U67 = "ClaScpt_07";
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            l_U67 = "NULL";
                                                                        }
                                                                        l_U13 = 6;
                                                                    }
                                                                    else
                                                                    {
                                                                        sub_6292( "FAIL_TRAN", 3000, 0 );
                                                                    }
                                                                }
                                                            }
                                                            else
                                                            {
                                                                sub_221( 2, "ObjScpt_07" );
                                                                sub_221( 2, "ClaScpt_07" );
                                                                sub_221( 2, "NULL" );
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_221( 2, "ObjScpt_07" );
                                                            sub_221( 2, "ClaScpt_07" );
                                                            sub_221( 2, "NULL" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_221( 2, "ObjScpt_07" );
                                                        sub_221( 2, "ClaScpt_07" );
                                                        sub_221( 2, "NULL" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_221( 2, "ObjScpt_07" );
                                                    sub_221( 2, "ClaScpt_07" );
                                                    sub_221( 2, "NULL" );
                                                }
                                            }
                                            else
                                            {
                                                sub_221( 2, "ObjScpt_07" );
                                                sub_221( 2, "ClaScpt_07" );
                                                sub_221( 2, "NULL" );
                                            }
                                        }
                                        else
                                        {
                                            sub_221( 2, "ObjScpt_07" );
                                            sub_221( 2, "ClaScpt_07" );
                                            sub_221( 2, "NULL" );
                                        }
                                    }
                                    else if (l_U70 == 0)
                                    {
                                        CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U90 );
                                        sub_6714();
                                        SAY_AMBIENT_SPEECH( l_U90, "Generic_Fuck_Off", 1, 0, 0 );
                                        l_U70 = 1;
                                    }
                                    sub_221( 2, "ObjScpt_07" );
                                    sub_221( 2, "ClaScpt_07" );
                                    sub_221( 2, "NULL" );;
                                }
                            }
                            else
                            {
                                l_U70 = 0;
                                sub_221( 2, "ObjScpt_07" );
                                sub_221( 2, "ClaScpt_07" );
                                sub_221( 2, "NULL" );
                            }
                        }
                        else
                        {
                            sub_221( 2, "ObjScpt_07" );
                            sub_221( 2, "ClaScpt_07" );
                            sub_221( 2, "NULL" );
                        }
                    }
                    else
                    {
                        sub_221( 2, "ObjScpt_07" );
                        sub_221( 2, "ClaScpt_07" );
                        sub_221( 2, "NULL" );
                    }
                }
            }
        }
        else
        {
            sub_221( 2, "ObjScpt_07" );
            sub_221( 2, "ClaScpt_07" );
            sub_221( 2, "NULL" );
        }
    }
    return;
}

void sub_2570(unknown uParam0)
{
    switch (l_U62)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U90 )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U90, l_U18._fU0, l_U18._fU4, l_U18._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U95 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U18._fU0, l_U18._fU4, l_U18._fU8, 2, -1, 1.00000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, l_U18._fU0, l_U18._fU4, l_U18._fU8, l_U51, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U95 );
                l_U87 = 0;
                if (l_U91 != nil)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                    l_U91 = nil;
                }
                if (l_U13 == 7)
                {
                    sub_668( 1 );
                    CLEAR_CHAR_TASKS( sub_619() );
                    l_U14 = 0;
                }
                sub_1985( uParam0 );
                l_U13 = 2;
                l_U62++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U90 )))
        {
            TASK_PERFORM_SEQUENCE( l_U90, l_U95 );
            GET_GAME_TIMER( ref l_U64 );
            CLEAR_SEQUENCE_TASK( l_U95 );
            l_U62++;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U65 );
        l_U66 = l_U65 - l_U64;
        if (NOT (IS_CHAR_INJURED( l_U90 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U90, 29, ref l_U87 );
            if ((l_U66 > 8000) || (l_U87 == 7))
            {
                l_U13 = 3;
                l_U62 = 0;
            }
        }
        break;
    }
    return;
}

int sub_3206()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_619(), ref iVar2 );
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

int sub_3441(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( sub_619() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_619(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3562()
{
    if (DOES_OBJECT_EXIST( l_U93 ))
    {
        if (IS_OBJECT_ATTACHED( l_U93 ))
        {
            DETACH_OBJECT( l_U93, 1 );
        }
        DELETE_OBJECT( ref l_U93 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U93 );
    }
    if (DOES_OBJECT_EXIST( l_U92 ))
    {
        if (IS_OBJECT_ATTACHED( l_U92 ))
        {
            DETACH_OBJECT( l_U92, 1 );
        }
        DELETE_OBJECT( ref l_U92 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U92 );
    }
    return;
}

int sub_4047()
{
    if (sub_4056())
    {
        if (sub_4095())
        {
            return 1;
        }
    }
    return 0;
}

int sub_4056()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_4095()
{
    if (g_U95._fU60 != -1)
    {
        if ((g_U16014[g_U95._fU60]._fU212._fU24 == 3) || (g_U16014[g_U95._fU60]._fU212._fU24 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4312()
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

void sub_4726(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U90 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( l_U90, uParam0, 5.00000000, 5.00000000, 0 ))
            {
                TRIGGER_PTFX_ON_OBJ( "fire_hotdog_blaze", uParam0, 0.00000000, 0.00000000, 0.80000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                START_CHAR_FIRE( l_U90 );
                INCREMENT_INT_STAT_NO_MESSAGE( 272, 1 );
            }
        }
    }
    return;
}

int sub_5250(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_491() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_491() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_491() )))))
                {
                    if (NOT sub_4056())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_619() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_5402())
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

void sub_5402()
{
    return sub_5413( 0, 0 );
}

int sub_5413(boolean bParam0, unknown uParam1)
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

int sub_5511(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_5250( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_491(), 0 );
                l_U4 = 1;
            }
            g_U10534 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5786();
                l_U3 = 1;
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
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_5786()
{
    return sub_5413( 1, 1 );
}

int sub_6292(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_6714()
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

void sub_7417()
{
    switch (l_U63)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U90 )))
        {
            if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U90 )))
            {
                SAY_AMBIENT_SPEECH( l_U90, "ATTRACT_NUTS", 0, 1, 0 );
                GET_GAME_TIMER( ref l_U64 );
                GENERATE_RANDOM_INT_IN_RANGE( 4000, 13000, ref l_U57 );
                l_U63++;
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U65 );
        l_U66 = l_U65 - l_U64;
        if (l_U66 > (6000 + l_U57))
        {
            l_U63--;
        }
        break;
    }
    return;
}

void sub_7647()
{
    if (l_U13 != 6)
    {
        if (l_U91 == nil)
        {
            if (HAVE_ANIMS_LOADED( "amb@nutcart" ))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U15._fU0, l_U15._fU4, l_U15._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U91 );
            }
        }
        if (l_U91 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U91 )))
                {
                    if (NOT (IS_PED_A_MISSION_PED( l_U91 )))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U91, sub_619(), 0 )))
                        {
                            if (NOT (IS_PLAYER_TARGETTING_CHAR( sub_491(), l_U91 )))
                            {
                                if (NOT (sub_3441( l_U21 )))
                                {
                                    SET_CHAR_AS_MISSION_CHAR( l_U91 );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U91, 0 );
                                    SET_CHAR_IN_CUTSCENE( l_U91, 1 );
                                    l_U14 = 0;
                                    l_U13 = 4;
                                }
                                else
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                                    l_U91 = nil;
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                                l_U91 = nil;
                            }
                        }
                        else
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                            l_U91 = nil;
                        }
                    }
                    else
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                        l_U91 = nil;
                    }
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                    l_U91 = nil;
                }
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                l_U91 = nil;
            }
        }
    }
    return;
}

void sub_8106()
{
    sub_8115();
    if (NOT (IS_CHAR_INJURED( l_U90 )))
    {
        switch (l_U14)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U91, l_U21._fU0, l_U21._fU4, l_U21._fU8, 2, -2, 1.00000000 );
                if (sub_8374( l_U90, l_U18 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( l_U90, l_U18._fU0, l_U18._fU4, l_U18._fU8, l_U51, 2.00000000 );
                }
                l_U14 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U91, 27, ref l_U85 );
                if ((l_U85 == 2) || (l_U85 == 7))
                {
                    l_U14 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                if (sub_8374( l_U91, l_U21 ))
                {
                    TASK_GO_STRAIGHT_TO_COORD( l_U91, l_U21._fU0, l_U21._fU4, l_U21._fU8, 2, -2 );
                    l_U85 = 0;
                    l_U14 = 3;
                }
                else
                {
                    l_U14 = 0;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U91, 17, ref l_U85 );
                if ((l_U85 == 2) || (l_U85 == 7))
                {
                    l_U14 = 4;
                }
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                l_U85 = 0;
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U91, l_U90 );
                l_U14 = 5;
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U91, 34, ref l_U85 );
                if ((l_U85 == 2) || (l_U85 == 7))
                {
                    l_U14 = 6;
                }
            }
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                TASK_PLAY_ANIM( l_U90, "SELL_NUTS", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U91, "BUY_NUTS", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( l_U91, "Order_Food", 1, 0, 0 );
                l_U85 = 0;
                l_U14 = 8;
            }
            break;
            case 8:
            if (NOT (IS_CHAR_INJURED( l_U91 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U91, "amb@nutcart", "BUY_NUTS" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U91, "amb@nutcart", "BUY_NUTS", ref l_U53 );
                }
                else
                {
                    l_U14 = 19;
                }
            }
            if (IS_CHAR_PLAYING_ANIM( l_U90, "amb@nutcart", "BUY_NUTS" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U90, "amb@nutcart", "BUY_NUTS", ref l_U52 );
            }
            if (l_U73[0] == 0)
            {
                if (l_U52 > 0.21900000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U92 )))
                    {
                        CREATE_OBJECT( 1432278665, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U92, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U92 ))
                    {
                        if (NOT (IS_OBJECT_ATTACHED( l_U92 )))
                        {
                            ATTACH_OBJECT_TO_PED( l_U92, l_U90, 1219, 0, 0, 0, 0.00000000, 0.00000000, 0.00000000, 0 );
                        }
                        SET_OBJECT_VISIBLE( l_U92, 1 );
                        l_U73[0] = 1;
                    }
                }
            }
            if (l_U73[1] == 0)
            {
                if (l_U52 > 0.72500000)
                {
                    if (DOES_OBJECT_EXIST( l_U92 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U92 ))
                        {
                            DETACH_OBJECT( l_U92, 1 );
                        }
                        DELETE_OBJECT( ref l_U92 );
                        SAY_AMBIENT_SPEECH( l_U90, "SELL_GOODS", 0, 1, 0 );
                        l_U73[1] = 1;
                    }
                }
            }
            if (l_U76 == 0)
            {
                if (l_U53 > 0.91800000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U91 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U91, "Thanks", 1, 0, 0 );
                        GIVE_PED_AMBIENT_OBJECT( l_U91, 1432278665 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U91 );
                        l_U91 = nil;
                        l_U14 = 19;
                        l_U76 = 1;
                    }
                }
            }
            break;
            case 19:
            if (DOES_OBJECT_EXIST( l_U92 ))
            {
                if (IS_OBJECT_ATTACHED( l_U92 ))
                {
                    DETACH_OBJECT( l_U92, 1 );
                }
                DELETE_OBJECT( ref l_U92 );
            }
            sub_221( 2, "ObjScpt_07" );
            sub_221( 2, "ClaScpt_07" );
            sub_221( 2, "NULL" );
            CREATE_OBJECT( 1432278665, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U92, 1 );
            SET_OBJECT_VISIBLE( l_U92, 0 );
            SET_OBJECT_COLLISION( l_U92, 0 );
            l_U52 = 0.00000000;
            l_U76 = 0;
            l_U73[0] = 0;
            l_U73[1] = 0;
            l_U68 = 0;
            l_U69 = 0;
            l_U13 = 3;
            l_U60 = 0;
            l_U14 = 0;
            break;
        }
    }
    return;
}

void sub_8115()
{
    if (NOT (IS_CHAR_INJURED( l_U91 )))
    {
        if (l_U14 > 4)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U91, l_U21._fU0, l_U21._fU4, l_U21._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U14 = 19;
            }
        }
    }
    return;
}

int sub_8374(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_10305()
{
    if (NOT (IS_CHAR_INJURED( l_U90 )))
    {
        switch (l_U14)
        {
            case 0:
            if (sub_10414())
            {
                l_U14 = 19;
            }
            GET_CHAR_COORDINATES( sub_619(), ref l_U48._fU0, ref l_U48._fU4, ref l_U48._fU8 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_619(), l_U21._fU0, l_U21._fU4, l_U21._fU8, 3, -2, 0.20000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( l_U90, l_U21._fU0, l_U21._fU4, l_U21._fU8 );
            l_U85 = 0;
            l_U14 = 1;
            break;
            case 1:
            if (sub_10414())
            {
                l_U14 = 19;
            }
            GET_SCRIPT_TASK_STATUS( sub_619(), 27, ref l_U85 );
            if (l_U85 == 7)
            {
                if (sub_10764( l_U21 ))
                {
                    sub_10854();
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_619(), l_U21._fU0, l_U21._fU4, l_U21._fU8, l_U55, 2.00000000, 270.00000000 );
                    l_U14 = 3;
                }
                else
                {
                    l_U14 = 0;
                }
            }
            break;
            case 3:
            if (sub_10414())
            {
                l_U14 = 19;
                break;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( sub_619(), 68, ref l_U85 );
                if (l_U85 == 7)
                {
                    GET_GAME_TIMER( ref l_U64 );
                    l_U85 = 0;
                    l_U14 = 4;
                }
            }
            break;
            case 4:
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_619(), l_U90 );
            l_U14 = 5;
            break;
            case 5:
            GET_SCRIPT_TASK_STATUS( sub_619(), 34, ref l_U85 );
            if (l_U85 == 7)
            {
                TASK_LOOK_AT_CHAR( l_U90, sub_619(), 7000, 0 );
                TASK_PLAY_ANIM( sub_619(), "BUY_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U90, "SELL_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( sub_619(), "GENERIC_BUY", 1, 1, 0 );
                l_U14 = 12;
            }
            break;
            case 12:
            if (IS_CHAR_PLAYING_ANIM( sub_619(), "amb@nutcart", "BUY_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_619(), "amb@nutcart", "BUY_NUTS_PLYR", ref l_U53 );
            }
            if (IS_CHAR_PLAYING_ANIM( l_U90, "amb@nutcart", "SELL_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U90, "amb@nutcart", "SELL_NUTS_PLYR", ref l_U52 );
            }
            if (l_U73[0] == 0)
            {
                if (l_U52 > 0.30200000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U92 )))
                    {
                        CREATE_OBJECT( 1432278665, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U92, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U92 ))
                    {
                        if (NOT (IS_OBJECT_ATTACHED( l_U92 )))
                        {
                            ATTACH_OBJECT_TO_PED( l_U92, l_U90, 1219, -0.01000000, -0.02000000, 0, 2.96000000, -0.04000000, 0.56000000, 0 );
                        }
                        SET_OBJECT_VISIBLE( l_U92, 1 );
                        l_U73[0] = 1;
                    }
                }
            }
            if (l_U76 == 0)
            {
                if (l_U53 > 0.87000000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U93 )))
                    {
                        CREATE_OBJECT( 1432278665, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref l_U93, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U93 ))
                    {
                        SET_OBJECT_VISIBLE( l_U93, 1 );
                        SET_OBJECT_COLLISION( l_U93, 0 );
                        if (NOT (IS_OBJECT_ATTACHED( l_U93 )))
                        {
                            ATTACH_OBJECT_TO_PED( l_U93, sub_619(), 1232, 0, 0, 0, 0.00000000, 0.00000000, 0.00000000, 0 );
                        }
                    }
                    sub_11889();
                    if (DOES_OBJECT_EXIST( l_U92 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U92 ))
                        {
                            DETACH_OBJECT( l_U92, 1 );
                        }
                        DELETE_OBJECT( ref l_U92 );
                    }
                    SAY_AMBIENT_SPEECH( l_U90, "SELL_GOODS", 1, 1, 0 );
                    l_U52 = 0.00000000;
                    l_U14 = 17;
                }
            }
            break;
            case 17:
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_619(), "amb@nutcart", "BUY_NUTS_PLYR" )))
            {
                SAY_AMBIENT_SPEECH( sub_619(), "THANKS", 1, 1, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_619(), "EAT_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                l_U52 = 0.00000000;
                if (IS_PLAYER_PLAYING( sub_491() ))
                {
                    sub_668( 1 );
                }
                l_U14 = 18;
            }
            break;
            case 18:
            if (IS_CHAR_PLAYING_ANIM( sub_619(), "amb@nutcart", "EAT_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_619(), "amb@nutcart", "EAT_NUTS_PLYR", ref l_U52 );
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_619(), "amb@nutcart", "EAT_NUTS_PLYR" )))
            {
                if (DOES_OBJECT_EXIST( l_U93 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U93 ))
                    {
                        DETACH_OBJECT( l_U93, 1 );
                    }
                    DELETE_OBJECT( ref l_U93 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U93 );
                }
                l_U14 = 19;
            }
            break;
            case 19:
            sub_221( 2, "ObjScpt_07" );
            sub_221( 2, "ClaScpt_07" );
            sub_221( 2, "NULL" );
            if (DOES_OBJECT_EXIST( l_U92 ))
            {
                if (IS_OBJECT_ATTACHED( l_U92 ))
                {
                    DETACH_OBJECT( l_U92, 1 );
                }
                DELETE_OBJECT( ref l_U92 );
            }
            sub_13161();
            CREATE_OBJECT( 1432278665, l_U24._fU0, l_U24._fU4, l_U24._fU8, ref l_U92, 1 );
            SET_OBJECT_VISIBLE( l_U92, 0 );
            SET_OBJECT_COLLISION( l_U92, 0 );
            if (NOT (IS_CHAR_INJURED( l_U90 )))
            {
                TASK_ACHIEVE_HEADING( l_U90, l_U51 );
            }
            l_U52 = 0.00000000;
            l_U68 = 0;
            l_U69 = 0;
            SET_MINIGAME_IN_PROGRESS( 0 );
            l_U13 = 3;
            l_U14 = 0;
            break;
        }
    }
    return;
}

int sub_10414()
{
    if ((sub_10462()) || ((IS_BUTTON_PRESSED( 0, 16 )) || ((IS_BUTTON_PRESSED( 0, 15 )) || ((IS_BUTTON_PRESSED( 0, 14 )) || (IS_BUTTON_PRESSED( 0, 17 ))))))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_619() );
        SET_PLAYER_CONTROL( sub_491(), 1 );
        return 1;
    }
    return 0;
}

int sub_10462()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar2, ref iVar3 );
    }
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

int sub_10764(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( sub_619() )))
    {
        GET_CHAR_COORDINATES( sub_619(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10854()
{
    if (NOT (IS_CHAR_DEAD( sub_619() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_619(), ref l_U11 );
        if (l_U11 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_619(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_619(), 0, 1 );
        }
        if (l_U11 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_619(), 0, 1 );
        }
    }
    return;
}

void sub_11889()
{
    ADD_SCORE( sub_491(), -5 );
    sub_11911();
    SET_CHAR_HEALTH( sub_619(), sub_12028() );
    sub_12116( 2, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 97, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 309, 1 );
    return;
}

void sub_11911()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( sub_491() ))
        {
            SET_PLAYER_MOOD_NORMAL( sub_491() );
        }
    }
    sub_11968();
    return;
}

void sub_11968()
{
    if (NOT (IS_CHAR_DEAD( sub_619() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_619() );
    }
    return;
}

void sub_12028()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_619() )))
    {
        GET_CHAR_HEALTH( sub_619(), ref Result );
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

void sub_12116(unknown uParam0, unknown uParam1)
{
    sub_12137( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_12137(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_13161()
{
    if (NOT (IS_CHAR_DEAD( sub_619() )))
    {
        if (l_U11 != 0)
        {
            if (l_U11 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_619(), l_U11, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_619(), 46 );
            }
        }
    }
    return;
}

