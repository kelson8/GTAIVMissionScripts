void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U370 = 0;
    l_U371 = 0;
    l_U372 = 0;
    l_U373 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_73();
    }
    while (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
    {
        WAIT( 0 );
        if (l_U373 != 4)
        {
            sub_140( l_U374._fU4[0] );
        }
        switch (l_U373)
        {
            case 0:
            sub_1046();
            sub_1719( l_U374._fU4[0] );
            l_U373 = 1;
            break;
            case 1:
            if (sub_5915())
            {
                if (sub_6207( ref l_U179 ))
                {
                    if (sub_6443())
                    {
                        sub_7171();
                        sub_7994();
                        sub_1719( l_U374._fU4[0] );
                        sub_8234();
                        l_U373 = 2;
                    }
                }
            }
            break;
            case 2:
            sub_8448( l_U179, 0 );
            if (l_U371 == 6)
            {
                l_U373 = 3;
            }
            break;
            case 3:
            if (l_U178 == 3)
            {
                sub_448( 0 );
            }
            else
            {
                sub_448( 2 );
            }
            sub_538();
            l_U373 = 4;
            break;
            case 4: break;
        }
    }
    sub_73();
    return;
}

void sub_73()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_140(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (l_U373 < 2)
    {
        if (g_U12379 == 0)
        {
            PRINTNL();
            PRINTSTRING( "***********************" );
            PRINTNL();
            PRINTSTRING( "Food eating is quitting as not on mission = FALSE" );
            PRINTNL();
            PRINTSTRING( "***********************" );
            PRINTNL();
            TERMINATE_THIS_SCRIPT();
        }
    }
    if (l_U373 == 2)
    {
        if (DOES_CHAR_EXIST( l_U367[0] ))
        {
            if (IS_CHAR_INJURED( l_U367[0] ))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U367[0], sub_393(), 0 ))
                {
                    sub_448( 5 );
                }
                else
                {
                    sub_448( 4 );
                }
                sub_538();
                l_U373 = 4;
            }
        }
        if (DOES_CHAR_EXIST( l_U367[1] ))
        {
            if (IS_CHAR_INJURED( l_U367[1] ))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U367[1], sub_393(), 0 ))
                {
                    sub_448( 5 );
                }
                else
                {
                    sub_448( 4 );
                }
                sub_538();
                l_U373 = 4;
            }
        }
    }
    return;
}

void sub_393()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_448(unknown uParam0)
{
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        g_U28807._fU40 = uParam0;
        return;
    }
    g_U28807._fU36 = uParam0;
    return;
}

void sub_538()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12380 = 0;
    if (g_U28807._fU0[0] == 34)
    {
        if (sub_588())
        {
            g_U12379 = 0;
        }
        sub_745();
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU40 == 8)
        {
            g_U28807._fU40 = 3;
        }
    }
    else if (NOT (g_U28807._fU24 == 16))
    {
        if (g_U28807._fU36 == 8)
        {
            g_U28807._fU36 = 3;
        }
    }
    else
    {
        return;
    }
    g_U28807._fU52 = 1;
    return;
}

int sub_588()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)
    {
        PRINTSTRING( "\n\n*******************\nTony1 Active so don't change the g_onMission flag\n*******************\n" );
        return 0;
    }
    return 1;
}

void sub_745()
{
    g_U28805._fU4 = 1;
    return;
}

void sub_1046()
{
    l_U281[0] = {-60.07860000, -75.07300000, 13.65720000};
    l_U281[1] = {-60.38600000, 5.82760000, 13.64600000};
    l_U281[2] = {-2.84730000, -327.98640000, 13.65230000};
    l_U281[3] = {-301.24570000, 21.55460000, 13.55690000};
    l_U281[4] = {-436.45570000, 1178.14600000, 11.83710000};
    l_U281[5] = {118.51820000, 650.31560000, 13.59380000};
    l_U281[6] = {-143.60320000, 59.53730000, 13.65910000};
    l_U281[7] = {-403.36530000, 250.41420000, 12.35630000};
    l_U281[8] = {-623.24830000, 158.93560000, 3.66270000};
    l_U281[9] = {-1006.06600000, 1604.26700000, 22.84400000};
    l_U281[10] = {-1158.11200000, 1389.37800000, 23.19280000};
    l_U281[11] = {-1250.33100000, 1071.12700000, 18.60790000};
    l_U281[12] = {441.29720000, 1526.51600000, 15.20670000};
    l_U281[13] = {1097.06800000, 1600.93700000, 15.59930000};
    l_U281[14] = {1185.15400000, 381.42550000, 23.50160000};
    l_U281[15] = {1657.06400000, 229.84580000, 23.96140000};
    l_U281[16] = {870.45820000, -482.69210000, 13.66510000};
    l_U281[17] = {34.71580000, 982.71630000, 13.54950000};
    l_U339[0] = {17.78320000, -110.44230000, 13.66080000};
    l_U339[1] = {-235.36260000, 32.97460000, 13.56120000};
    l_U339[2] = {-192.76810000, 306.57170000, 13.74260000};
    l_U339[3] = {118.71500000, 575.37290000, 13.61880000};
    l_U339[4] = {-521.59580000, 1414.46800000, 14.35740000};
    l_U339[5] = {-990.19740000, 918.54820000, 12.67370000};
    l_U339[6] = {-1373.73500000, 510.32710000, 11.47960000};
    l_U339[7] = {931.52900000, -501.26440000, 14.16370000};
    return;
}

void sub_1719(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_1731( uParam0 )) == 0)
    {
        l_U178 = 3;
        sub_1859( l_U281[0], 0, -71.75100000, -74.33650000, 13.76340000, 269.29450000, 1, ref l_U179 );
        sub_2000( ref l_U179, -57.22818000, -72.22290000, 14.38110000, 2.04196600, -0.00000000, 117.71580000, -60.45518000, -72.13308000, 14.90188000, 2.04196600, -0.00000000, 117.71580000, 45, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 1)
    {
        l_U178 = 3;
        sub_1859( l_U281[1], 0, -67.41440000, 14.45490000, 13.80060000, 324.34300000, 1, ref l_U179 );
        sub_2000( ref l_U179, -65.76537000, 24.98617000, 18.17422000, -16.32347000, 0.00000000, 175.45670000, -65.84908000, 23.93271000, 21.78266000, -16.32347000, 0.00000000, 175.45670000, 45, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 2)
    {
        l_U178 = 3;
        sub_1859( l_U281[2], 181.08270000, -5.46150000, -327.67110000, 13.76230000, 260.29160000, 1, ref l_U179 );
        sub_2000( ref l_U179, -1.52510300, -317.90430000, 18.24793000, -16.81664000, 0.00000000, 165.58300000, -2.28295000, -320.85220000, 28.31903000, -16.81664000, 0.00000000, 165.58300000, 45, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 3)
    {
        l_U178 = 3;
        sub_1859( l_U281[3], 89.92620000, -301.67280000, 16.32150000, 13.70740000, 354.43510000, 1, ref l_U179 );
        sub_2000( ref l_U179, -307.85300000, 23.18573000, 14.18429000, -6.89211800, 0.00000000, -122.95030000, -307.27470000, 22.81084000, 19.88648000, -6.89211800, 0.00000000, -122.95030000, 45, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 4)
    {
        l_U178 = 0;
        sub_1859( l_U281[4], 87.66080000, -429.86580000, 1182.30000000, 12.06720000, 177.44440000, 1, ref l_U179 );
        sub_2000( ref l_U179, -416.20750000, 1176.64700000, 19.58881000, -27.61243000, 0.00000100, 66.49268000, -416.31440000, 1176.69300000, 19.57940000, -19.41356000, -0.00000000, 66.49268000, 37, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 5)
    {
        l_U178 = 2;
        sub_1859( l_U281[5], 180.50410000, 114.01470000, 641.35020000, 13.71270000, 272.04780000, 1, ref l_U179 );
        sub_2000( ref l_U179, 117.75400000, 632.58140000, 13.77677000, 12.48859000, -0.00000000, 25.26116000, 118.06400000, 631.71480000, 15.93610000, 0.52195600, 0.00000000, 23.70393000, 38, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 6)
    {
        l_U178 = 1;
        sub_1859( l_U281[6], 16.32830000, -139.25720000, 71.93250000, 13.75920000, 97.37860000, 1, ref l_U179 );
        sub_2000( ref l_U179, -141.10720000, 48.24503000, 14.52513000, -1.92371800, 0.00000000, 1.26392100, -140.83660000, 41.24469000, 30.38216000, -1.92371800, -0.00000000, -11.53290000, 20, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 7)
    {
        l_U178 = 2;
        sub_1859( l_U281[7], 268.56340000, -389.41010000, 245.03840000, 14.34180000, 61.95740000, 1, ref l_U179 );
        sub_2000( ref l_U179, -387.22150000, 249.53150000, 21.16422000, -21.45800000, 0.00000000, 104.21760000, -375.83950000, 251.58840000, 24.08780000, -18.42792000, -0.00000100, 127.13010000, 37, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 8)
    {
        l_U178 = 0;
        sub_1859( l_U281[8], 80.27900000, -617.83120000, 148.35490000, 3.80000000, 19.25670000, 1, ref l_U179 );
        sub_2000( ref l_U179, -627.95300000, 165.94190000, 5.46856600, -3.37064700, 0.00000000, -157.06770000, -627.86200000, 165.72680000, 9.43430800, -3.37064700, 0.00000000, -157.06770000, 37, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 9)
    {
        l_U178 = 0;
        sub_1859( l_U281[9], 21.85810000, -1006.59800000, 1611.00800000, 23.01270000, 178.85040000, 1, ref l_U179 );
        sub_2000( ref l_U179, -1000.64000000, 1602.67900000, 25.67654000, -26.02594000, -0.00000100, 43.09988000, -1000.58500000, 1602.68300000, 26.51431000, 5.45291000, 0.00000000, 43.09988000, 37, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 10)
    {
        l_U178 = 2;
        sub_1859( l_U281[10], 269.94530000, -1157.18600000, 1400.53400000, 23.42080000, 177.84070000, 1, ref l_U179 );
        sub_2000( ref l_U179, -1149.28300000, 1399.74600000, 25.56342000, -10.62157000, 0.00000000, 139.34450000, -1148.85200000, 1399.74600000, 25.56342000, -12.47462000, -0.00000000, 106.13960000, 37, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 11)
    {
        l_U178 = 3;
        sub_1859( l_U281[11], 1.52950000, -1242.84600000, 1071.55800000, 18.78060000, 91.35570000, 1, ref l_U179 );
        sub_2000( ref l_U179, -1252.48000000, 1066.83300000, 19.14869000, 5.11244800, -0.00000000, -44.57519000, -1252.59200000, 1066.71900000, 20.93413000, 5.11244800, -0.00000000, -44.57519000, 36, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 12)
    {
        l_U178 = 0;
        sub_1859( l_U281[12], 271.86930000, 441.93590000, 1517.70100000, 15.31160000, 20.58010000, 1, ref l_U179 );
        sub_2000( ref l_U179, 434.45230000, 1532.57900000, 18.30164000, -6.72725000, -0.00000000, -148.83270000, 434.71480000, 1532.14500000, 22.60280000, -1.12187800, 0.00000000, -148.83270000, 31, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 13)
    {
        l_U178 = 0;
        sub_1859( l_U281[13], 316.39060000, 1098.93200000, 1595.00800000, 15.71580000, 26.35490000, 1, ref l_U179 );
        sub_2000( ref l_U179, 1098.93500000, 1605.22700000, 17.31030000, -2.41638400, -0.00000000, 167.14520000, 1103.45300000, 1605.22700000, 17.31030000, -0.20041000, -0.00000000, 167.88440000, 31, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 14)
    {
        l_U178 = 1;
        sub_1859( l_U281[14], 272.08670000, 1192.26900000, 377.16530000, 22.86350000, 31.72450000, 1, ref l_U179 );
        sub_2000( ref l_U179, 1177.11500000, 380.85000000, 25.74579000, -10.08404000, 0.00000000, -107.92810000, 1177.53600000, 380.71370000, 28.23441000, -10.08404000, 0.00000100, -122.44760000, 31, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 15)
    {
        l_U178 = 0;
        sub_1859( l_U281[15], 354.93950000, 1655.32600000, 225.74640000, 23.98260000, 317.42070000, 1, ref l_U179 );
        sub_2000( ref l_U179, 1662.46800000, 235.02970000, 26.55567000, 0.66050600, -0.00000000, 122.32220000, 1663.28500000, 235.05760000, 31.08541000, -1.05892000, 0.00000000, 104.17540000, 36, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 16)
    {
        l_U178 = 2;
        sub_1859( l_U281[16], 181.97970000, 884.22070000, -480.61370000, 14.88330000, 12.03240000, 1, ref l_U179 );
        sub_2000( ref l_U179, 862.62840000, -473.41850000, 14.69269000, 9.01804300, 0.00000000, -125.63280000, 869.53980000, -473.41850000, 14.69269000, 9.01804300, 0.00000000, -125.63280000, 36, 8000 );
    }
    else if ((sub_1731( uParam0 )) == 17)
    {
        l_U178 = 3;
        sub_1859( l_U281[17], 358.90560000, 28.41270000, 980.65630000, 13.66320000, 270, 1, ref l_U179 );
        sub_2000( ref l_U179, 33.52589000, 989.83890000, 14.46687000, 2.00838800, -0.00000000, 168.49980000, 33.56032000, 989.96430000, 18.20295000, 2.00838800, 0.00000000, 150.89210000, 36, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 0)
    {
        sub_1859( l_U339[0], 0, 6.15790000, -115.66150000, 13.77290000, 301.35290000, 2, ref l_U228 );
        sub_2000( ref l_U228, 12.82663000, -105.79100000, 15.89240000, -9.12652800, 0.00000000, -151.25840000, 9.15082900, -105.79100000, 15.89240000, 19.72743000, -0.00000000, 173.75100000, 45, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 1)
    {
        sub_1859( l_U339[1], 89.83160000, -236.24090000, 49.09630000, 14.70010000, 192.75240000, 2, ref l_U228 );
        sub_2000( ref l_U228, -243.83310000, 33.42586000, 16.66905000, -7.93912000, 0.00000000, -91.20096000, -242.64880000, 39.25813000, 15.99256000, -3.35495600, 0.00000000, -26.32488000, 45, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 2)
    {
        sub_1859( l_U339[2], 178.78090000, -187.08420000, 317.56470000, 13.81400000, 89.15490000, 2, ref l_U228 );
        sub_2000( ref l_U228, -191.69540000, 299.35530000, 14.66308000, 7.35185600, -0.00000000, -21.80601000, -191.82360000, 299.78340000, 17.33711000, -2.13878000, -0.00000000, -25.17972000, 45, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 3)
    {
        sub_1859( l_U339[3], 182.43720000, 90.66870000, 555.57330000, 17.62980000, 251.64890000, 2, ref l_U228 );
        sub_2000( ref l_U228, 119.51050000, 549.48020000, 17.40518000, -13.43865000, -0.00000000, 22.74287000, 119.32600000, 549.92040000, 19.40197000, -13.43865000, -0.00000000, 22.74287000, 39, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 4)
    {
        sub_1859( l_U339[4], 92.56890000, -535.05080000, 1410.44600000, 14.47260000, 346.14010000, 2, ref l_U228 );
        sub_2000( ref l_U228, -542.78460000, 1409.51100000, 25.62388000, -26.86600000, 0.00000100, -74.64749000, -544.15030000, 1409.13600000, 22.82789000, -26.86600000, 0.00000100, -74.64749000, 28, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 5)
    {
        sub_1859( l_U339[5], 27.90420000, -984.65830000, 916.92720000, 12.67760000, 174.44260000, 2, ref l_U228 );
        sub_2000( ref l_U228, -976.47870000, 911.18230000, 14.82901000, -5.66369300, -0.00000100, 50.16215000, -977.81340000, 912.29590000, 32.35391000, -5.66369300, -0.00000100, 50.16215000, 36, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 6)
    {
        sub_1859( l_U339[6], 285.09530000, -1364.26000000, 520.59840000, 12.55780000, 144.05800000, 2, ref l_U228 );
        sub_2000( ref l_U228, -1379.87300000, 507.27420000, 12.95199000, -14.08117000, 0.00000000, -54.47315000, -1379.50000000, 507.54060000, 15.06771000, -5.65496100, -0.00000000, -54.47316000, 31, 8000 );
    }
    else if ((sub_4666( uParam0 )) == 7)
    {
        sub_1859( l_U339[7], 268.92570000, 926.74610000, -490.46910000, 14.32160000, 85.83510000, 2, ref l_U228 );
        sub_2000( ref l_U228, 922.01870000, -508.43680000, 17.34037000, -3.62778100, 0.00000000, -44.61792000, 921.98670000, -499.65600000, 17.34037000, 8.42851000, 0.00000000, -44.61792000, 36, 8000 );
    };;;;;;;;;;;;;;;;;;;;;;;;;;
    return;
}

int sub_1731(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int Result;

    for ( Result = 0; Result <= 18; Result++ )
    {
        if ((VDIST( uParam0, l_U281[Result] )) < 15.00000000)
        {
            return Result;
        }
    }
    return 18;
}

void sub_1859(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, int iParam9)
{
    iParam9->_fU0 = {uParam0};
    iParam9->_fU12 = uParam3;
    iParam9->_fU16 = {uParam4};
    iParam9->_fU28 = uParam7;
    iParam9->_fU192 = uParam8;
    return;
}

void sub_2000(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14)
{
    ref iParam0->_fU52->_fU0 = {uParam1};
    ref iParam0->_fU52->_fU12 = {uParam4};
    ref iParam0->_fU52->_fU96 = {uParam7};
    ref iParam0->_fU52->_fU108 = {uParam10};
    ref iParam0->_fU52->_fU120 = uParam13;
    ref iParam0->_fU52->_fU124 = uParam14;
    return;
}

int sub_4666(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int Result;

    for ( Result = 0; Result <= 7; Result++ )
    {
        if ((VDIST( uParam0, l_U339[Result] )) < 10.00000000)
        {
            return Result;
        }
    }
    return 8;
}

int sub_5915()
{
    if (g_U12379)
    {
        if (sub_5935( 6 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_5935(int iParam0)
{
    unknown uVar3;

    if (NOT g_U12379)
    {
        return 1;
    }
    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_6002( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        return 1;
    }
    return 0;
}

int sub_6002(unknown uParam0)
{
    return 0;
}

int sub_6207(int iParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_393() )))
    {
        if (NOT sub_6234())
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_393(), ref iParam0->_fU0->_fU0, ref iParam0->_fU0->_fU4, (ref iParam0->_fU0->_fU8) + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                sub_6376( iParam0 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_6234()
{
    if (NOT (IS_CHAR_DEAD( sub_393() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_393() ))
        {
            if (IS_CHAR_IN_ANY_HELI( sub_393() ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_6376(int iParam0)
{
    if (DOES_BLIP_EXIST( iParam0->_fU188 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( iParam0 + 188 );
    }
    return;
}

int sub_6443()
{
    if (sub_5915())
    {
        if (IS_BIT_SET( g_U10938._fU0, 4 ))
        {
            return 0;
        }
        if (NOT (sub_6487( 6 )))
        {
            return 0;
        }
        if (sub_6876( sub_393() ))
        {
            return 0;
        }
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

int sub_6487(int iParam0)
{
    unknown uVar3;

    if (g_U28807._fU0[0] == 34)
    {
        return 0;
    }
    if (g_U28807._fU128)
    {
        return 0;
    }
    if (sub_6002( iParam0 ))
    {
        return 0;
    }
    uVar3 = iParam0;
    if (iParam0 == g_U28807._fU24)
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
            if (g_U28807._fU60[uVar3] > 0)
            {
                g_U28807._fU60[uVar3]--;
            }
            g_U28807._fU124 = 0;
            return 1;
        }
    }
    if (g_U28807._fU28 == iParam0)
    {
        return 1;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU48)
        {
            return 0;
        }
        else
        {
            g_U28807._fU28 = 16;
        }
    }
    if (g_U28807._fU56 <= 0)
    {
        g_U28807._fU32 = iParam0;
        return 0;
    }
    if (g_U28807._fU60[uVar3] > 0)
    {
        g_U28807._fU28 = iParam0;
        g_U28807._fU60[uVar3]--;
        if (iParam0 == 12)
        {
            g_U28807._fU124 = 1;
        }
        return 1;
    }
    g_U28807._fU32 = iParam0;
    return 0;
}

int sub_6876(int iParam0)
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
                if (sub_6940( uVar3 ))
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

int sub_6940(int iParam0)
{
    if ((iParam0 == g_U2687) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_7171()
{
    sub_7180();
    sub_7325( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_7399();
    return;
}

void sub_7180()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_7325(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7399()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_7437( 1, g_U575[I] )) == 0)
        {
            sub_7688( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7866())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_7437(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_7688(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_7773( g_U575 - 1 );
    return;
}

void sub_7773(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_7866()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_7437( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7994()
{
    sub_8003();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_8003()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12380 = 1;
    g_U28807._fU44 = 34;
    if (NOT (g_U28807._fU0[0] == 34))
    {
        g_U28807._fU48 = 1;
        g_U28807._fU52 = 0;
        if (NOT (g_U28807._fU28 == 16))
        {
            sub_8093();
        }
        return;
    }
    if (sub_588())
    {
        g_U12379 = 1;
    }
    sub_8169();
    return;
}

void sub_8093()
{
    if (NOT (g_U28807._fU56 > 0))
    {
        return;
    }
    g_U28807._fU56--;
    return;
}

void sub_8169()
{
    g_U28805._fU4 = 0;
    return;
}

void sub_8234()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    bVar3 = true;
    while (bVar3)
    {
        bVar3 = sub_8266( ref l_U364[iVar2], iVar2 );
        if (bVar3)
        {
            l_U367[iVar2] = sub_8346( iVar2 );
        }
        iVar2++;
        if (iVar2 >= 2)
        {
            bVar3 = false;
        }
    }
    return;
}

int sub_8266(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_8346(int iParam0)
{
    if (iParam0 >= 2)
    {
        return nil;
    }
    return g_U28807._fU12[iParam0];
}

void sub_8448(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45, unknown uParam46, unknown uParam47, unknown uParam48, int iParam49)
{
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    int iVar58;

    iVar58 = 0;
    if (l_U371 > 1)
    {
        if (sub_8475())
        {
            sub_8614( uParam0 );
        }
    }
    if ((l_U372 == 3) || (l_U372 == 0))
    {
        switch (l_U371)
        {
            case 0:
            BEGIN_CAM_COMMANDS( ref l_U277 );
            sub_9031( ref uVar52, iVar58 );
            sub_9164( "E2FAHA" );
            sub_9283( 0, sub_393(), "LUIS", 0 );
            sub_9283( 1, l_U367[0], "ARMANDO", 0 );
            sub_9283( 2, l_U367[1], "HENRIQUE", 0 );
            l_U371 = 1;
            break;
            case 1:
            if (uParam0._fU192 == 1)
            {
                switch (l_U178)
                {
                    case 3:
                    sub_9552( 3, ref uVar52 );
                    break;
                    case 0:
                    sub_11248( 3, ref uVar52 );
                    break;
                    case 1:
                    sub_11538( 3, ref uVar52 );
                    break;
                    case 2:
                    sub_11832( 3, ref uVar52 );
                    break;
                }
            }
            else
            {
                sub_12045( 3, ref uVar52 );
            }
            sub_12233( uParam0._fU52, 0 );
            sub_12741( 1 );
            GET_GAME_TIMER( ref l_U278 );
            l_U371 = 2;
            break;
            case 2:
            sub_12992( uParam0 );
            GET_GAME_TIMER( ref l_U279 );
            l_U280 = l_U279 - l_U278;
            if (l_U280 > uParam0._fU52._fU124)
            {
                if (l_U370 == 3)
                {
                    l_U371 = 3;
                }
            }
            break;
            case 3:
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 3000 );
            }
            if (NOT (IS_CHAR_INJURED( sub_393() )))
            {
                while (IS_CHAR_IN_ANY_CAR( sub_393() ))
                {
                    WAIT( 0 );
                }
            }
            l_U371 = 4;
            break;
            case 4:
            if (IS_SCREEN_FADED_OUT())
            {
                if (NOT (IS_CHAR_INJURED( sub_393() )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_393() ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_393(), uParam0._fU16._fU0, uParam0._fU16._fU4, uParam0._fU16._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_393(), uParam0._fU16._fU0, uParam0._fU16._fU4, uParam0._fU16._fU8 );
                    }
                    SET_CHAR_HEADING( sub_393(), uParam0._fU28 );
                    SET_CAM_BEHIND_PED( sub_393() );
                    sub_13512( uParam0 );
                    if ((uParam0._fU192 == 2) || (iParam49 == 1))
                    {
                        PRINTSTRING( "IF TurnOnDrunk = TRUE \n" );
                        sub_13952();
                    }
                    else
                    {
                        PRINTSTRING( "SET_CHAR_HEALTH(PLAYER_CHAR_ID(), 200) \n" );
                        SET_CHAR_HEALTH( sub_393(), 200 );
                        RESET_VISIBLE_PED_DAMAGE( sub_393() );
                    }
                    DO_SCREEN_FADE_IN( 3000 );
                    l_U371 = 5;
                }
            }
            break;
            case 5:
            sub_12741( 0 );
            END_CAM_COMMANDS( ref l_U277 );
            l_U371 = 6;
            break;
            case 6: break;
        }
    }
    return;
}

void sub_8475()
{
    int I;
    int Result;

    Result = 1;
    if (NOT (IS_CHAR_INJURED( sub_393() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_393() ))
        {
            Result = 0;
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U367[I] )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U367[I] ))
            {
                Result = 0;
            }
        }
    }
    return Result;
}

void sub_8614(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45, unknown uParam46, unknown uParam47, unknown uParam48)
{
    switch (l_U372)
    {
        case 0:
        if (sub_8667())
        {
            l_U372 = 1;
        }
        break;
        case 1:
        DO_SCREEN_FADE_OUT( 500 );
        l_U372 = 2;
        break;
        case 2:
        if (IS_SCREEN_FADED_OUT())
        {
            CLEAR_CHAR_TASKS( sub_393() );
            SET_CHAR_COORDINATES( sub_393(), uParam0._fU16._fU0, uParam0._fU16._fU4, uParam0._fU16._fU8 );
            SET_CHAR_HEADING( sub_393(), uParam0._fU28 );
            SET_CAM_BEHIND_PED( sub_393() );
            DO_SCREEN_FADE_IN( 500 );
            l_U371 = 5;
            l_U372 = 3;
        }
        break;
        case 3: break;
    }
    return;
}

int sub_8667()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_9031(int iParam0, unknown uParam1)
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

void sub_9164(unknown uParam0)
{
    StrCopy( ref l_U10._fU0, uParam0, 16 );
    sub_9181();
    return;
}

void sub_9181()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U10._fU16[I]._fU0 = nil;
        StrCopy( ref l_U10._fU16[I]._fU4, "", 32 );
        l_U10._fU344[I] = 0;
    }
    return;
}

void sub_9283(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U10._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U10._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_9363( "\n PED NUMBER ", uParam0 );
    sub_9403( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_9363(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9403(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9552(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_9575( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_9639( ref l_U157, "E2FA_FOOD3", "E2FA_FOOD4" );
        sub_9993( ref l_U157, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Eat_High_End\n\n" );
        return;
    }
    sub_10964( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_9575(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_9639( ref l_U157, "E2FA_FOOD5", "E2FA_FOOD6" );
        sub_9993( ref l_U157, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Eat_Drunk\n\n" );
        return;
    }
    sub_10964( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_9639(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_9690( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_9690(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_9993(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_10020( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10020(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_10042( iParam1 )))
    {
        return 0;
    }
    l_U10._fU384 = 0;
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
    sub_10730( ref g_U8868, ref l_U10 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_10042(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_10119( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_10119( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_10119( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_10119(unknown uParam0)
{
    return;
}

void sub_10730(int iParam0, int iParam1)
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

void sub_10964(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10985( uParam0, ref l_U10._fU0, uParam1, uParam2, uParam3 );
}

void sub_10985(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10020( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_11248(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_9575( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_9639( ref l_U157, "E2FA_FOOD1", "E2FA_FOOD2" );
        sub_9993( ref l_U157, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Eat_Bruger_Shot\n\n" );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Arrive_Eat_Bruger_Shot: No special speech in E1 for arriving at Burger Shot\n" );
    return;
}

void sub_11538(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_9575( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_9639( ref l_U157, "E2FA_FOOD1", "E2FA_FOOD2" );
        sub_9993( ref l_U157, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Eat_Cluckin_Bell\n\n" );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Arrive_Eat_Cluckin_Bell: No special speech in E1 for arriving at Clucking Bell\n" );
    return;
}

void sub_11832(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_9575( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_9639( ref l_U157, "E2FA_FOOD1", "E2FA_FOOD2" );
        sub_9993( ref l_U157, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Eat_Fast_Food\n\n" );
        return;
    }
    sub_10964( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_12045(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_9639( ref l_U157, "E2FA_DP1", "E2FA_DP2" );
        sub_9993( ref l_U157, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_Drink_Favourite_Pub\n\n" );
        return;
    }
    sub_10964( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_12233(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, int iParam34)
{
    if (DOES_CAM_EXIST( l_U5 ))
    {
        DESTROY_CAM( l_U5 );
    }
    if (DOES_CAM_EXIST( l_U2[0] ))
    {
        DESTROY_CAM( l_U2[0] );
    }
    CREATE_CAM( 14, ref l_U2[0] );
    SET_CAM_POS( l_U2[0], uParam0._fU0._fU0, uParam0._fU0._fU4, uParam0._fU0._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U2[0], uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam34 )))
        {
            POINT_CAM_AT_PED( l_U2[0], iParam34 );
        }
    }
    SET_CAM_FOV( l_U2[0], uParam0._fU120 );
    if (DOES_CAM_EXIST( l_U2[1] ))
    {
        DESTROY_CAM( l_U2[1] );
    }
    CREATE_CAM( 14, ref l_U2[1] );
    SET_CAM_POS( l_U2[1], uParam0._fU96._fU0, uParam0._fU96._fU4, uParam0._fU96._fU8 );
    if (iParam34 == nil)
    {
        SET_CAM_ROT( l_U2[1], uParam0._fU108._fU0, uParam0._fU108._fU4, uParam0._fU108._fU8 );
    }
    else if (DOES_CHAR_EXIST( iParam34 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam34 )))
        {
            POINT_CAM_AT_PED( l_U2[1], iParam34 );
        }
    }
    SET_CAM_FOV( l_U2[1], uParam0._fU120 );
    CREATE_CAM( 3, ref l_U5 );
    SET_CAM_ACTIVE( l_U5, 1 );
    SET_CAM_PROPAGATE( l_U5, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U5, l_U2[0], l_U2[1], uParam0._fU124, 0 );
    return;
}

void sub_12741(boolean bParam0)
{
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_12759() ))
    {
        SET_PLAYER_CONTROL( sub_12759(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_12759(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_393() )))
    {
        CLEAR_CHAR_TASKS( sub_393() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_393(), 1 );
    }
    else
    {
        sub_12907();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_393(), 0 );
    }
    return;
}

void sub_12759()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_12907()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_12992(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45, unknown uParam46, unknown uParam47, unknown uParam48)
{
    switch (l_U370)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( sub_393() )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_393(), uParam0._fU16._fU0, uParam0._fU16._fU4, uParam0._fU16._fU8, 2, -2, 2.00000000 );
            l_U370 = 1;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( sub_393() )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_393(), uParam0._fU16._fU0, uParam0._fU16._fU4, uParam0._fU16._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U370 = 2;
            }
        }
        break;
        case 2:
        l_U370 = 3;
        break;
        case 3: break;
    }
    return;
}

void sub_13512(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45, unknown uParam46, unknown uParam47, unknown uParam48)
{
    int I;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;

    for ( I = 0; I < 2; I++ )
    {
        if ((NOT (IS_CHAR_INJURED( sub_393() ))) AND (NOT (IS_CHAR_INJURED( l_U367[I] ))))
        {
            REMOVE_CHAR_FROM_GROUP( l_U367[I] );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_393(), -0.50000000, sub_13619( -1.50000000, 1.50000000 ), -1.00000000, ref uVar52._fU0, ref uVar52._fU4, ref uVar52._fU8 );
            if (IS_CHAR_IN_ANY_CAR( l_U367[I] ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U367[I], uVar52._fU0, uVar52._fU4, uVar52._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U367[I], uVar52._fU0, uVar52._fU4, uVar52._fU8 );
            }
            SET_CHAR_HEADING( l_U367[I], uParam0._fU28 );
            SET_GROUP_MEMBER( sub_13813(), l_U367[I] );
        }
    }
    return;
}

void sub_13619(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_13813()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_13952()
{
    int iVar2;
    int iVar3;
    int I;

    iVar2 = 90000;
    iVar3 = 90000;
    if (NOT (IS_CHAR_INJURED( sub_393() )))
    {
        sub_14000( sub_393(), iVar2 );
        sub_14640( sub_393(), iVar3 );
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U367[I] )))
        {
            sub_14000( l_U367[I], iVar2 );
            sub_15562( l_U367[I], sub_393() );
        }
    }
    sub_15835( iVar2 + iVar3, 1050253722 );
    return;
}

int sub_14000(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;

    if (iParam0 == nil)
    {
        return 0;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return 0;
    }
    iVar4 = sub_14044( iParam0 );
    if (NOT (iVar4 == -1))
    {
        return 1;
    }
    iVar5 = sub_14153( iParam0 );
    if (NOT (iVar5 == -1))
    {
        return 1;
    }
    if ((iParam1 < 0) || (iParam1 == 0))
    {
        SCRIPT_ASSERT( "Attempt to Make_Ped_Drunk but ragdoll msec requested is NOT_DRUNK or a negative value" );
        return 0;
    }
    iVar6 = sub_14350();
    if (iVar6 == -1)
    {
        PRINTSTRING( "\n\n\nAll drunk request slots are full - Need to increase MAX_NUMBER_OF_DRUNK_REQUESTS\n\n" );
        return 0;
    }
    g_U9074[iVar6]._fU0 = 0;
    g_U9074[iVar6]._fU4 = iParam0;
    g_U9074[iVar6]._fU8 = iParam1;
    g_U9074[iVar6]._fU12 = iParam1;
    g_U9074[iVar6]._fU16 = nil;
    g_U9074[iVar6]._fU20 = nil;
    if (iParam0 == sub_393())
    {
        g_U9199 = 1;
    }
    return 1;
}

int sub_14044(int iParam0)
{
    int I;

    if (iParam0 == nil)
    {
        return -1;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (iParam0 == g_U9105[I]._fU4)
        {
            return g_U9105[I]._fU0;
        }
    }
    return -1;
}

int sub_14153(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU4 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

int sub_14350()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU0 == 16)
        {
            return Result;
        }
    }
    return -1;
}

void sub_14640(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (iParam0 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return;
    }
    if (iParam1 < 0)
    {
        SCRIPT_ASSERT( "Extend_Overall_Drunk_Time(): time msec requested is a negative value" );
        return;
    }
    iVar4 = sub_14044( iParam0 );
    iVar5 = -1;
    if (iVar4 == -1)
    {
        iVar5 = sub_14153( iParam0 );
        if (NOT (iVar5 == -1))
        {
            g_U9074[iVar5]._fU12 = g_U9074[iVar5]._fU8 + iParam1;
        }
        return;
    }
    sub_14844( 1, iVar4, 3, iParam1 );
    return;
}

void sub_14844(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_14862( uParam0, uParam1, uParam2, 0, uParam3 );
    return;
}

void sub_14862(int iParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for poster is unknown" );
        return;
    }
    if (iParam1 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for reader is unknown" );
        return;
    }
    if (iParam2 == 5)
    {
        SCRIPT_ASSERT( "Post_Notice: Notice ID is unknown" );
        return;
    }
    if (sub_15084( iParam0, iParam1, iParam2 ))
    {
        return;
    }
    iVar7 = sub_15233();
    if (iVar7 == -1)
    {
        SCRIPT_ASSERT( "All drunk notice slots are full - Tell Keith to increase MAX_NUMBER_OF_DRUNK_NOTICES" );
        return;
    }
    g_U9116[iVar7]._fU0 = iParam0;
    g_U9116[iVar7]._fU4 = iParam1;
    g_U9116[iVar7]._fU8 = iParam2;
    g_U9116[iVar7]._fU12 = uParam3;
    g_U9116[iVar7]._fU16 = uParam4;
    return;
}

int sub_15084(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_15099( uParam0, uParam1, uParam2 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_15099(int iParam0, int iParam1, int iParam2)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (iParam2 == g_U9116[Result]._fU8)
        {
            if (iParam0 == g_U9116[Result]._fU0)
            {
                if (iParam1 == g_U9116[Result]._fU4)
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_15233()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (g_U9116[Result]._fU8 == 5)
        {
            return Result;
        }
    }
    return -1;
}

void sub_15562(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (iParam0 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return;
    }
    if (NOT (iParam1 == nil))
    {
        if (NOT (DOES_CHAR_EXIST( iParam1 )))
        {
            SCRIPT_ASSERT( "Attempt to Make_Drunk_Ped_Follow_Ped but specified leader does not exist" );
            return;
        }
    }
    iVar4 = sub_14044( iParam0 );
    iVar5 = -1;
    if (iVar4 == -1)
    {
        iVar5 = sub_14153( iParam0 );
        if (NOT (iVar5 == -1))
        {
            g_U9074[iVar5]._fU16 = iParam1;
        }
        return;
    }
    sub_15775( 1, iVar4, 2, iParam1 );
    return;
}

void sub_15775(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_14862( uParam0, uParam1, uParam2, uParam3, 0 );
    return;
}

void sub_15835(int iParam0, float fParam1)
{
    unknown uVar4;
    int iVar5;

    if (g_U9197)
    {
        return;
    }
    if (iParam0 < 0)
    {
        SCRIPT_ASSERT( "Activate_Drunk_Camera: Camera activated with a negative activation time" );
        return;
    }
    if ((fParam1 > 1.00000000) || (fParam1 < 0.00000000))
    {
        SCRIPT_ASSERT( "Activate_Drunk_Camera: The camera shake strength is outside acceptable boundaries" );
        return;
    }
    GET_ROOT_CAM( ref uVar4 );
    SET_DRUNK_CAM( uVar4, fParam1, iParam0 );
    g_U9197 = 1;
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U9198 = iVar5 + iParam0;
    return;
}

