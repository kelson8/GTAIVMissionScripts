void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    fSecurityDudeHeadingOffset = 270.00000000;
    fCurrentAngle = 0.00000000;
    vRightArmOffset = {3.97000000, -0.10100000, 0.45800000};
    vLeftArmOffset = {-3.97000000, -0.17800000, 0.45800000};
    vSecurityDudeOffset = {-3.80000000, 1.72500000, -0.62500000};
    l_U16 = 0;
    PRINTSTRING( "AMBIENT BARRIER SCRIPT STARTED \n" );
    while (NOT (DOES_OBJECT_EXIST( l_U21 )))
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( l_U21 ))
    {
        GET_OBJECT_COORDINATES( l_U21, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8 );
        l_U17 = VDIST( l_U18, 65, 1235, 18 );
        if (l_U17 < 50.00000000)
        {
            l_U16 = 1;
        }
    }
    CREATE_WIDGET_GROUP( "Security Barrier" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "LOAD_SHIT" );
    ADD_TO_WIDGET_COMBO( "CREATE_SHIT" );
    ADD_TO_WIDGET_COMBO( "IDLE" );
    ADD_TO_WIDGET_COMBO( "OPENING" );
    ADD_TO_WIDGET_COMBO( "WAITING_TO_PASS" );
    ADD_TO_WIDGET_COMBO( "CLOSING" );

    FINISH_WIDGET_COMBO( "iState", ref iState );
    ADD_WIDGET_SLIDER( "iProgress", ref iProgress, 0, 99, 1 );
    ADD_WIDGET_FLOAT_SLIDER( "vRightArmOffset.x", ref vRightArmOffset.x, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vRightArmOffset.y", ref vRightArmOffset.y, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vRightArmOffset.z", ref vRightArmOffset.z, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vLeftArmOffset.x", ref vRightArmOffset.x, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vLeftArmOffset.y", ref vRightArmOffset.y, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vLeftArmOffset.z", ref vRightArmOffset.z, -90.00000000, 90.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vSecurityDudeOffset.x", ref vSecurityDudeOffset.x, -999.90000000, 999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vSecurityDudeOffset.y", ref vSecurityDudeOffset.y, -999.90000000, 999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vSecurityDudeOffset.z", ref vSecurityDudeOffset.z, -999.90000000, 999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fSecurityDudeHeadingOffset", ref fSecurityDudeHeadingOffset, 0.00000000, 360.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fCurrentAngle", ref fCurrentAngle, 0.00000000, 180.00000000, 0.01000000 );
    END_WIDGET_GROUP();
    sub_978( 0 );
    
    while (true)
    {
        if (DOES_OBJECT_EXIST( l_U21 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U21 ))
            {
                if (l_U16)
                {
                    if (IS_PLAYER_PLAYING( sub_1060() ))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1060(), 0 )))
                        {
                            sub_1149( "bIsPoliceBarrier = TRUE\n" );
                            GET_OBJECT_COORDINATES( l_U21, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8 );
                            if (LOCATE_CHAR_IN_CAR_3D( sub_1188(), l_U18._fU0, l_U18._fU4, l_U18._fU8, 4.00000000, 4.00000000, 3.00000000, 0 ))
                            {
                                if ((IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U18._fU0, l_U18._fU4, l_U18._fU8, 5.00000000, -1046467484, 1, 1 )) || (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U18._fU0, l_U18._fU4, l_U18._fU8, 5.00000000, -869586478, 1, 1 )))
                                {
                                    ALTER_WANTED_LEVEL_NO_DROP( sub_1060(), 1 );
                                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_1060() );
                                    l_U16 = 0;
                                }
                            }
                        }
                    }
                }
                switch (iState)
                {
                    case 0:
                    switch (iProgress)
                    {
                        case 0:
                        REQUEST_MODEL( -869586478 );
                        REQUEST_MODEL( -1046467484 );
                        iProgress++;
                        break;
                        case 1:
                        if ((HAS_MODEL_LOADED( -1046467484 )) AND (HAS_MODEL_LOADED( -869586478 )))
                        {
                            sub_978( 1 );
                        }
                        break;
                    }
                    break;
                    case 1:
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, vRightArmOffset.x, vRightArmOffset.y, vRightArmOffset.z, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    CREATE_OBJECT_NO_OFFSET( -1046467484, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U4, 1 );
                    SET_OBJECT_DYNAMIC( l_U4, 1 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, vRightArmOffset.x, vRightArmOffset.y, vRightArmOffset.z, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    CREATE_OBJECT_NO_OFFSET( -869586478, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U5, 1 );
                    SET_OBJECT_DYNAMIC( l_U5, 1 );
                    GET_OBJECT_HEADING( l_U21, ref l_U17 );
                    SET_OBJECT_ROTATION( l_U5, 0.00000000, 0.00000000, l_U17 );
                    SET_OBJECT_ROTATION( l_U4, 0.00000000, 0.00000000, l_U17 );
                    if (g_U9170)
                    {
                        sub_978( 3 );
                    }
                    else
                    {
                        sub_978( 2 );
                    }
                    break;
                    case 2:
                    if (NOT (sub_1779( l_U4 )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, vRightArmOffset.x, vRightArmOffset.y, vRightArmOffset.z, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        SET_OBJECT_COORDINATES( l_U4, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    }
                    if (NOT (sub_1779( l_U5 )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, vRightArmOffset.x, vRightArmOffset.y, vRightArmOffset.z, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        SET_OBJECT_COORDINATES( l_U5, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, 0.00000000, -4.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (IS_PLAYER_PLAYING( sub_1060() ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( sub_1188(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 4.00000000, 3.00000000, 0 ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1188(), ref uVar5 );
                            GET_CAR_SPEED( uVar5, ref l_U17 );
                            if (l_U17 < 5.00000000)
                            {
                                sub_978( 3 );
                            }
                        }
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, 0.00000000, 4.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (IS_PLAYER_PLAYING( sub_1060() ))
                    {
                        if (LOCATE_CHAR_IN_CAR_3D( sub_1188(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 4.00000000, 3.00000000, 0 ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1188(), ref uVar5 );
                            GET_CAR_SPEED( uVar5, ref l_U17 );
                            if (l_U17 < 5.00000000)
                            {
                                sub_978( 3 );
                            }
                        }
                    }
                    break;
                    case 3:
                    GET_FRAME_TIME( ref l_U17 );
                    fCurrentAngle += (84.00000000 / 5.00000000) * l_U17;
                    GET_OBJECT_HEADING( l_U21, ref l_U17 );
                    if (NOT (sub_1779( l_U5 )))
                    {
                        SET_OBJECT_ROTATION( l_U5, 0.00000000, fCurrentAngle * -1.00000000, l_U17 );
                    }
                    if (NOT (sub_1779( l_U4 )))
                    {
                        SET_OBJECT_ROTATION( l_U4, 0.00000000, fCurrentAngle, l_U17 );
                    }
                    if (fCurrentAngle > 84.00000000)
                    {
                        sub_978( 4 );
                    }
                    break;
                    case 4:
                    if (IS_PLAYER_PLAYING( sub_1060() ))
                    {
                        if (NOT g_U9170)
                        {
                            GET_OBJECT_COORDINATES( l_U21, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_1188(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 8.00000000, 8.00000000, 3.00000000, 0 )))
                            {
                                sub_978( 5 );
                            }
                        }
                    }
                    break;
                    case 5:
                    GET_FRAME_TIME( ref l_U17 );
                    fCurrentAngle -= (84.00000000 / 5.00000000) * l_U17;
                    GET_OBJECT_HEADING( l_U21, ref l_U17 );
                    if (NOT (sub_1779( l_U5 )))
                    {
                        SET_OBJECT_ROTATION( l_U5, 0.00000000, fCurrentAngle * -1.00000000, l_U17 );
                    }
                    if (NOT (sub_1779( l_U4 )))
                    {
                        SET_OBJECT_ROTATION( l_U4, 0.00000000, fCurrentAngle, l_U17 );
                    }
                    if (fCurrentAngle <= 0.00000000)
                    {
                        sub_978( 2 );
                    }
                    break;
                }
            }
            else
            {
                sub_2771();
            }
        }
        else
        {
            sub_2771();
        }
        WAIT( 0 );
    }
    return;
}

void sub_978(int iParam0)
{
    if (NOT (iState == iParam0))
    {
        iState = iParam0;
        iProgress = 0;
    }
    return;
}

void sub_1060()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1149(unknown uParam0)
{
    return;
}

void sub_1188()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1779(unknown uParam0)
{
    float fVar3;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref fVar3 );
        if (fVar3 < 1000.00000000)
        {
            return 1;
        }
        GET_OBJECT_COORDINATES( uParam0, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8 );
        if (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U18._fU0, l_U18._fU4, l_U18._fU8, 5.00000000, -869586478, 1, 1 ))
        {
            return 1;
        }
        if (IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED( l_U18._fU0, l_U18._fU4, l_U18._fU8, 5.00000000, -1046467484, 1, 1 ))
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

void sub_2771()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( -869586478 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1046467484 );
    DELETE_OBJECT( ref l_U4 );
    DELETE_OBJECT( ref l_U4 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U6 );
    PRINTSTRING( "AMBIENT BARRIER SCRIPT CLEANED UP \n" );
    TERMINATE_THIS_SCRIPT();
    return;
}

