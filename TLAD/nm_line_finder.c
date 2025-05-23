void main()
{
    l_U3 = 1;
    l_U4 = 1;
    l_U5 = 0;
    l_U6 = 1;
    l_U8 = 0;
    l_U9 = 0;
    while (sub_33())
    {
        WAIT( 0 );
    }
    sub_4132();
    return;
}

int sub_33()
{
    if (NOT l_U9)
    {
        if (NOT (DOES_WIDGET_GROUP_EXIST( l_U16 )))
        {
            l_U16 = CREATE_WIDGET_GROUP( "Natural Motion Lines" );
            ADD_WIDGET_TOGGLE( "Destroy this widget", ref l_U8 );
            CREATE_WIDGET_GROUP( "Natural Motion Line Finder" );
            ADD_WIDGET_TOGGLE( "Is Active?", ref l_U3 );
            ADD_WIDGET_TOGGLE( "Is Relative to Player?", ref l_U4 );
            ADD_WIDGET_TOGGLE( "Reset to default (near player)", ref l_U6 );
            ADD_WIDGET_TOGGLE( "Dump to temp_debug.txt", ref l_U7 );
            ADD_WIDGET_FLOAT_SLIDER( "Line Start x", ref l_U43._fU0, -9999.90000000, 9999.90000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Line Start y", ref l_U43._fU4, -9999.90000000, 9999.90000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Line Start z", ref l_U43._fU8, -9999.90000000, 9999.90000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Line End x", ref l_U46._fU0, -9999.90000000, 9999.90000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Line End y", ref l_U46._fU4, -9999.90000000, 9999.90000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Line End z", ref l_U46._fU8, -9999.90000000, 9999.90000000, 0.01000000 );
            END_WIDGET_GROUP();
            CREATE_WIDGET_GROUP( "Natural Motion Line on a Vehicle" );
            ADD_WIDGET_TOGGLE( "Is Active?", ref l_U0 );
            ADD_WIDGET_TOGGLE( "Dump to temp_debug.txt", ref l_U1 );
            ADD_WIDGET_TOGGLE( "Rectangle mode", ref l_U2 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 1.x", ref l_U18[0]._fU0, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 1.y", ref l_U18[0]._fU4, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 1.z", ref l_U18[0]._fU8, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 2.x", ref l_U18[1]._fU0, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 2.y", ref l_U18[1]._fU4, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 2.z", ref l_U18[1]._fU8, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 3.x", ref l_U18[2]._fU0, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 3.y", ref l_U18[2]._fU4, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 3.z", ref l_U18[2]._fU8, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 4.x", ref l_U18[3]._fU0, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 4.y", ref l_U18[3]._fU4, -10.00000000, 10.00000000, 0.01000000 );
            ADD_WIDGET_FLOAT_SLIDER( "Point 4.z", ref l_U18[3]._fU8, -10.00000000, 10.00000000, 0.01000000 );
            CREATE_WIDGET_GROUP( "Approx. Presets" );
            ADD_WIDGET_TOGGLE( "Bonnet", ref l_U10 );
            ADD_WIDGET_TOGGLE( "Windscreen", ref l_U11 );
            ADD_WIDGET_TOGGLE( "Passenger Door", ref l_U12 );
            ADD_WIDGET_TOGGLE( "Driver Door", ref l_U13 );
            ADD_WIDGET_TOGGLE( "Boot", ref l_U14 );
            ADD_WIDGET_TOGGLE( "Rectangle", ref l_U15 );
            END_WIDGET_GROUP();
            END_WIDGET_GROUP();
            END_WIDGET_GROUP();
            l_U9 = 1;
        }
    }
    sub_1403();
    sub_2329();
    if (l_U8)
    {
        return 0;
    }
    return 1;
}

void sub_1403()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (l_U3)
    {
        if (l_U4)
        {
            if (l_U6)
            {
                l_U37 = {-1.00000000, 2.00000000, 0.00000000};
                l_U40 = {1.00000000, 2.00000000, 0.00000000};
                l_U5 = 0;
                l_U6 = 0;
            }
            if (NOT l_U5)
            {
                l_U43 = {l_U37};
                l_U46 = {l_U40};
                l_U5 = 1;
            }
            else
            {
                l_U37 = {l_U43};
                l_U40 = {l_U46};
            }
            if (NOT (IS_CHAR_INJURED( sub_1553() )))
            {
                if (NOT (IS_CHAR_INJURED( sub_1553() )))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1553(), l_U37._fU0, l_U37._fU4, l_U37._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1553(), l_U40._fU0, l_U40._fU4, l_U40._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                }
            }
            LINE( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
        }
        else if ((l_U5) || (l_U6))
        {
            if (IS_PLAYER_PLAYING( sub_1757() ))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1553(), -1.00000000, 2.00000000, 0.00000000, ref l_U31._fU0, ref l_U31._fU4, ref l_U31._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1553(), 1.00000000, 2.00000000, 0.00000000, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
                l_U6 = 0;
                l_U5 = 1;
            }
        }
        if (l_U5)
        {
            l_U43 = {l_U31};
            l_U46 = {l_U34};
            l_U5 = 0;
        }
        else
        {
            l_U31 = {l_U43};
            l_U34 = {l_U46};
        }
        LINE( l_U31._fU0, l_U31._fU4, l_U31._fU8, l_U34._fU0, l_U34._fU4, l_U34._fU8 );;
        if (l_U7)
        {
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "--- Natural Motion Line Finder --- " );
            if (l_U4)
            {
                SAVE_STRING_TO_DEBUG_FILE( "(RELATIVE TO CHAR)" );
            }
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "Start Point = << " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U43._fU0 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U43._fU4 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U43._fU8 );
            SAVE_STRING_TO_DEBUG_FILE( ">> " );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( "End Point = << " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U34._fU0 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U34._fU4 );
            SAVE_STRING_TO_DEBUG_FILE( ", " );
            SAVE_FLOAT_TO_DEBUG_FILE( l_U34._fU8 );
            SAVE_STRING_TO_DEBUG_FILE( ">> " );
            l_U7 = 0;
        }
    }
    return;
}

void sub_1553()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1757()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2329()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (l_U0)
    {
        if (NOT (IS_CHAR_INJURED( sub_1553() )))
        {
            if (l_U10)
            {
                l_U18[0] = {-0.09750000, 1.45750000, 0.52250000};
                l_U18[1] = {0.58750000, 2.11000000, 0.37000000};
                l_U18[2] = {0.82750000, 2.20500000, 0.81500000};
                l_U18[3] = {0.00000000, 1.28000000, 0.55000000};
                l_U10 = 0;
            }
            if (l_U11)
            {
                l_U18[0] = {-0.57000000, 0.34500000, 0.83000000};
                l_U18[1] = {0.58750000, 1.25000000, 0.37000000};
                l_U18[2] = {0.72050000, 1.25000000, 0.32250000};
                l_U18[3] = {-0.40000000, 0.41750000, 0.89500000};
                l_U11 = 0;
            }
            if (l_U12)
            {
                l_U18[0] = {-0.92250000, 0.28500000, 0.37000000};
                l_U18[1] = {-0.92299990, -0.14750000, 0.37000000};
                l_U18[2] = {-0.92299990, -0.14800000, 0.45750000};
                l_U18[3] = {-0.92299990, 0.28500000, 0.43750000};
                l_U12 = 0;
            }
            if (l_U13)
            {
                l_U18[0] = {0.92250000, 0.28500000, 0.37000000};
                l_U18[1] = {0.92299990, -0.14750000, 0.37000000};
                l_U18[2] = {0.92299990, -0.14800000, 0.45750000};
                l_U18[3] = {0.92299990, 0.28500000, 0.43750000};
                l_U13 = 0;
            }
            if (l_U14)
            {
                l_U18[0] = {-0.48000000, -2.76750000, 0.37000000};
                l_U18[1] = {0.48000000, -2.76800000, 0.37000000};
                l_U18[2] = {0.48000000, -2.76800000, 0.51300000};
                l_U18[3] = {-0.48000000, -2.76800000, 0.51250000};
                l_U14 = 0;
            }
            if (l_U15)
            {
                l_U18[0] = {-0.95500000, 1.00750000, 0.25550000};
                l_U18[1] = {-0.95500000, -1.96250000, 0.25600000};
                l_U18[2] = {0.95500000, -1.96300000, 0.25600000};
                l_U18[3] = {0.95500000, 1.00800000, 0.25600000};
                l_U15 = 0;
                l_U2 = 1;
            }
            if (IS_CHAR_IN_ANY_CAR( sub_1553() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1553(), ref uVar8 );
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[0]._fU0, l_U18[0]._fU4, l_U18[0]._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[1]._fU0, l_U18[1]._fU4, l_U18[1]._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        LINE( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                        if (l_U2)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[1]._fU0, l_U18[1]._fU4, l_U18[1]._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[2]._fU0, l_U18[2]._fU4, l_U18[2]._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                            LINE( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[2]._fU0, l_U18[2]._fU4, l_U18[2]._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[3]._fU0, l_U18[3]._fU4, l_U18[3]._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                            LINE( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[3]._fU0, l_U18[3]._fU4, l_U18[3]._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar8, l_U18[0]._fU0, l_U18[0]._fU4, l_U18[0]._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                            LINE( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                        }
                    }
                }
            }
            if (l_U1)
            {
                SAVE_NEWLINE_TO_DEBUG_FILE();
                SAVE_STRING_TO_DEBUG_FILE( "--- Natural Motion Line Finder on Vehicle --- " );
                SAVE_NEWLINE_TO_DEBUG_FILE();
                SAVE_STRING_TO_DEBUG_FILE( "point 1 offset = << " );
                SAVE_FLOAT_TO_DEBUG_FILE( l_U18[0]._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( l_U18[0]._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( l_U18[0]._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ">> " );
                SAVE_NEWLINE_TO_DEBUG_FILE();
                SAVE_STRING_TO_DEBUG_FILE( "point 2 offset = << " );
                SAVE_FLOAT_TO_DEBUG_FILE( l_U18[1]._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( l_U18[1]._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( l_U18[1]._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ">> " );
                if (l_U2)
                {
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "point 3 offset = << " );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U18[2]._fU0 );
                    SAVE_STRING_TO_DEBUG_FILE( ", " );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U18[2]._fU4 );
                    SAVE_STRING_TO_DEBUG_FILE( ", " );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U18[2]._fU8 );
                    SAVE_STRING_TO_DEBUG_FILE( ">> " );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "point 4 offset = << " );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U18[3]._fU0 );
                    SAVE_STRING_TO_DEBUG_FILE( ", " );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U18[3]._fU4 );
                    SAVE_STRING_TO_DEBUG_FILE( ", " );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U18[3]._fU8 );
                    SAVE_STRING_TO_DEBUG_FILE( ">> " );
                }
                l_U1 = 0;
            }
        }
    }
    return;
}

void sub_4132()
{
    if (DOES_WIDGET_GROUP_EXIST( l_U16 ))
    {
        DELETE_WIDGET_GROUP( l_U16 );
    }
    return;
}

