void main()
{
    l_U0 = {0.00000000, 0.00000000, 0.00000000};
    l_U118 = {1.00000000, 1.00000000, 1.00000000};
    l_U121 = {0.00000000, 1.00000000, 0.00000000};
    l_U124 = {0.00000000, -1.00000000, 0.00000000};
    l_U137 = 0;
    l_U138 = 0;
    l_U149 = 100.00000000;
    l_U150 = 10.50000000;
    l_U151 = 0.50000000;
    l_U152 = 2.85000000;
    l_U157 = 0;
    l_U158 = 1;
    l_U159 = 3;
    l_U165 = 0;
    l_U182 = -1;
    l_U186 = 0;
    l_U187 = 1;
    l_U188 = 1;
    l_U196 = 150.00000000;
    l_U286 = 0;
    l_U287 = 150.00000000;
    l_U337 = 0;
    l_U935 = 3;
    l_U936 = 0;
    l_U937 = 0;
    l_U939 = 0;
    l_U940 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        g_U64771++;
        sub_290();
        sub_3435( l_U935, l_U853 );
        sub_3492();
    }
    HAS_RESPRAY_HAPPENED();
    LOAD_ADDITIONAL_TEXT( "JACOB3P", 0 );
    sub_3944( "LJP3AUD", 6 );
    sub_4092( l_U935 );
    l_U906[0] = -503930010;
    l_U906[1] = -235584669;
    l_U906[2] = 207714363;
    l_U906[3] = 514268366;
    l_U906[4] = -503930010;
    l_U912[0] = -164935626;
    l_U912[1] = -1084007777;
    l_U912[2] = -164935626;
    l_U912[3] = -1084007777;
    l_U912[4] = -164935626;
    l_U925[0] = 7;
    l_U925[1] = 10;
    l_U925[2] = 7;
    l_U925[3] = 7;
    l_U853 = sub_4328( l_U935 );
    l_U893 = sub_4439( l_U935, 1, l_U853 );
    switch (l_U893)
    {
        case 0:
        REQUEST_ANIMS( "missjacob3" );
        l_U938 = 0;
        l_U852 = 3;
        l_U862 = 1;
        StrCopy( ref l_U672, "PRCDRG_04", 16 );
        StrCopy( ref l_U701, "PRCDRG_23", 16 );
        l_U638 = {1024.28400000, -70.26700000, 29.35100000};
        l_U666 = {1024.20100000, -70.01190000, 27.71730000};
        l_U663 = 105.52380000;
        l_U664 = 105.52380000;
        l_U744[0] = {1023.12200000, -78.32584000, 28.18782000};
        l_U760[0] = {4.69426700, 0.00000000, -16.75697000};
        l_U744[1] = {1021.63800000, -57.83687000, 29.61377000};
        l_U760[1] = {-3.54835100, -0.00000000, -167.71380000};
        l_U744[2] = {1022.01300000, -59.55634000, 29.50464000};
        l_U760[2] = {-3.54835300, -0.00000000, -167.71380000};
        l_U744[3] = {1025.20200000, -67.65900000, 28.78908000};
        l_U760[3] = {-3.89212000, -0.00000000, 148.79420000};
        l_U744[4] = {1025.20200000, -67.65900000, 28.78908000};
        l_U760[4] = {-3.89212000, -0.00000000, 148.79420000};
        l_U840 = {1026.62500000, -67.52960000, 27.83840000};
        l_U843 = 150.00530000;
        l_U644[0] = {1034.42300000, -77.74790000, 31.02860000};
        l_U644[1] = {1013.72300000, -76.94190000, 30.59920000};
        l_U644[2] = {1038.33200000, -65.29710000, 32.73540000};
        l_U644[3] = {1016.61600000, -64.23360000, 30.84160000};
        l_U827[0] = {1030.33400000, -76.79090000, 28.36220000};
        l_U827[1] = {1022.22900000, -76.73240000, 27.99990000};
        l_U827[2] = {1029.95000000, -64.40870000, 28.27570000};
        l_U827[3] = {1022.39700000, -64.86400000, 28.14270000};
        # -sub_C1FFC0-0xc214c8( 1, ref l_U732 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U731 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U731, 2 );
        l_U905 = 1.20000000;
        break;
        case 1:
        REQUEST_ANIMS( "missjacob3" );
        l_U938 = 1;
        StrCopy( ref l_U676[0], "PRCDRG_05", 16 );
        StrCopy( ref l_U676[1], "PRCDRG_36", 16 );
        StrCopy( ref l_U676[2], "PRCDRG_37", 16 );
        StrCopy( ref l_U676[3], "PRCDRG_38", 16 );
        StrCopy( ref l_U676[4], "PRCDRG_44", 16 );
        StrCopy( ref l_U676[5], "PRCDRG_45", 16 );
        l_U867 = 1;
        l_U669 = {1133.98600000, 249.74100000, 31.02700000};
        l_U641 = {1106.99700000, 218.26110000, 30.25330000};
        l_U638 = {1132.68600000, 249.74100000, 29.52700000};
        l_U662 = 291.49660000;
        l_U666 = {1133.63000000, 250.11000000, 29.54440000};
        l_U663 = 111.49660000;
        l_U776 = {1141.23100000, 233.87900000, 35.81951000};
        l_U779 = {-16.26956000, 0.00000000, 26.28906000};
        l_U840 = {1134.99500000, 246.61150000, 29.59960000};
        l_U843 = 10.59910000;
        l_U905 = 2.00000000;
        break;
        case 2:
        REQUEST_ANIMS( "missjacob3" );
        l_U938 = 2;
        StrCopy( ref l_U676[0], "PRCDRG_06", 16 );
        StrCopy( ref l_U676[1], "PRCDRG_33", 16 );
        StrCopy( ref l_U676[2], "PRCDRG_34", 16 );
        StrCopy( ref l_U676[3], "PRCDRG_35", 16 );
        StrCopy( ref l_U676[4], "PRCDRG_46", 16 );
        StrCopy( ref l_U676[5], "PRCDRG_47", 16 );
        l_U669 = {1791.87600000, 192.50100000, 21.68700000};
        l_U638 = {1790.85900000, 193.06560000, 20.08670000};
        l_U662 = 250.95220000;
        l_U666 = {1791.76000000, 192.70000000, 20.08740000};
        l_U663 = 70.94999000;
        l_U776 = {1799.31400000, 175.28400000, 22.65254000};
        l_U779 = {-4.54942800, 0.00000000, 24.75550000};
        l_U840 = {1794.49200000, 195.83760000, 20.08770000};
        l_U843 = 338.95530000;
        l_U905 = 2.00000000;
        break;
        case 3:
        l_U925[0] = 7;
        l_U925[1] = 7;
        l_U925[2] = 7;
        l_U925[3] = 7;
        # -sub_C1FFC0-0xc214c8( 1, ref l_U732 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U731 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U731, 2 );
        REQUEST_ANIMS( "missjacob3" );
        l_U938 = 3;
        l_U924 = 886934177;
        REQUEST_MODEL( l_U924 );
        l_U863 = 1;
        l_U884 = 1;
        l_U852 = 2;
        l_U860 = 1;
        l_U733 = {1237.05800000, 424.14810000, 23.60280000};
        l_U736 = 282.65700000;
        l_U737 = {1254.22200000, 424.69050000, 22.59880000};
        l_U740 = 277.43650000;
        l_U666 = {1267.73400000, 423.16980000, 22.59880000};
        l_U663 = 295.19480000;
        l_U664 = 295.19480000;
        l_U741 = {1251.89800000, 424.64140000, 23.59840000};
        l_U644[0] = {1282.19100000, 426.19270000, 27.26670000};
        l_U644[1] = {1281.70600000, 421.48380000, 27.26670000};
        l_U644[2] = {1243.66700000, 428.51430000, 25.93200000};
        l_U827[0] = {1272.50200000, 425.65350000, 27.26680000};
        l_U827[1] = {1272.72200000, 423.02490000, 27.26680000};
        l_U827[2] = {1251.50700000, 427.71910000, 25.93200000};
        l_U744[0] = {1261.76000000, 423.18750000, 28.50689000};
        l_U760[0] = {-38.73595000, 0.00000000, -89.04266000};
        l_U744[1] = {1261.76000000, 423.18750000, 28.50689000};
        l_U760[1] = {-38.73595000, 0.00000000, -89.04266000};
        l_U744[2] = {1261.76000000, 423.18750000, 28.50689000};
        l_U760[2] = {-0.34778300, -0.00000000, -89.04267000};
        l_U744[3] = {1259.95900000, 421.69180000, 22.99594000};
        l_U760[3] = {13.63639000, -0.00000000, 60.21416000};
        l_U744[4] = {1259.95900000, 421.69180000, 22.99594000};
        l_U760[4] = {13.63639000, -0.00000000, 60.21416000};
        l_U814[0] = {1254.83900000, 423.67880000, 22.59910000};
        l_U814[1] = {1251.08300000, 424.14720000, 22.59890000};
        l_U814[2] = {1248.20700000, 424.50990000, 22.42270000};
        l_U814[3] = {1244.27900000, 424.48560000, 22.05420000};
        StrCopy( ref l_U672, "PRCDRG_07", 16 );
        StrCopy( ref l_U701, "PRCDRG_23", 16 );
        l_U638 = {1267.64000000, 423.49600000, 24.19900000};
        l_U840 = {1263.50400000, 423.09210000, 22.59910000};
        l_U843 = 270.92300000;
        l_U905 = 2.00000000;
        break;
        case 4:
        # -sub_C1FFC0-0xc214c8( 1, ref l_U732 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U731 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U731, 2 );
        REQUEST_ANIMS( "missjacob3" );
        l_U938 = 4;
        l_U863 = 1;
        l_U852 = 3;
        l_U666 = {1383.76500000, 693.35660000, 33.88940000};
        l_U663 = 184.12090000;
        l_U664 = 184.12090000;
        l_U644[0] = {1391.33600000, 684.82320000, 33.88930000};
        l_U644[1] = {1391.90800000, 682.24390000, 33.88930000};
        l_U644[2] = {1357.61500000, 691.89740000, 33.88930000};
        l_U644[3] = {1357.61500000, 692.89740000, 33.88930000};
        l_U827[0] = {1389.24600000, 690.30400000, 33.88930000};
        l_U827[1] = {1391.74200000, 690.39840000, 33.88930000};
        l_U827[2] = {1358.13100000, 690.88580000, 33.88930000};
        l_U827[3] = {1365.55100000, 691.28250000, 33.88930000};
        l_U744[0] = {1371.82200000, 702.73340000, 35.31800000};
        l_U760[0] = {-2.06664500, -0.00000000, -128.62580000};
        l_U744[1] = {1393.89600000, 694.14790000, 33.94829000};
        l_U760[1] = {26.69584000, 0.00000000, 141.04520000};
        l_U744[2] = {1393.89600000, 694.14790000, 33.94829000};
        l_U760[2] = {19.59116000, -0.00000000, 141.04520000};
        l_U744[3] = {1363.51900000, 692.69480000, 35.22427000};
        l_U760[3] = {0.00398900, -0.00000000, -108.16570000};
        l_U744[4] = {1363.51900000, 692.69480000, 35.22427000};
        l_U760[4] = {0.00398900, -0.00000000, -108.16570000};
        StrCopy( ref l_U672, "PRCDRG_08", 16 );
        StrCopy( ref l_U701, "PRCDRG_23", 16 );
        l_U638 = {1383.68400000, 693.38600000, 35.48900000};
        l_U840 = {1401.59900000, 680.70500000, 33.40120000};
        l_U843 = 1.53260000;
        l_U905 = 2.00000000;
        break;
        case 5:
        REQUEST_ANIMS( "missjacob3" );
        l_U938 = 5;
        StrCopy( ref l_U676[0], "PRCDRG_09", 16 );
        StrCopy( ref l_U676[1], "PRCDRG_39", 16 );
        StrCopy( ref l_U676[2], "PRCDRG_40", 16 );
        StrCopy( ref l_U676[3], "PRCDRG_41", 16 );
        StrCopy( ref l_U676[4], "PRCDRG_42", 16 );
        StrCopy( ref l_U676[5], "PRCDRG_43", 16 );
        l_U662 = 232.00000000;
        l_U669 = {848.21340000, 575.54070000, 10.75300000};
        l_U638 = {847.46040000, 576.17500000, 9.15310000};
        l_U666 = {848.24000000, 575.54000000, 9.19060100};
        l_U663 = 52;
        l_U776 = {860.85400000, 594.81830000, 12.35424000};
        l_U779 = {-4.79916800, 0.00000000, 145.40800000};
        l_U840 = {851.59910000, 577.32480000, 9.15310000};
        l_U843 = 135.01520000;
        l_U905 = 2.00000000;
        break;
        case 6:
        REQUEST_ANIMS( "missjacob3" );
        REQUEST_MODEL( -183203150 );
        REQUEST_MODEL( 2046537925 );
        l_U938 = 6;
        l_U644[0] = {1772.96500000, 507.96340000, 27.94280000};
        l_U644[1] = {1774.25900000, 504.54830000, 27.94280000};
        l_U644[2] = {1769.65700000, 503.53090000, 27.94280000};
        l_U657[0] = 129.69110000;
        l_U657[1] = 110.90450000;
        l_U657[2] = 346.60580000;
        l_U856 = 864;
        l_U863 = 1;
        l_U864 = 1;
        l_U861 = 1;
        REQUEST_CAR_RECORDING( l_U856 );
        l_U852 = 2;
        l_U874 = 1;
        StrCopy( ref l_U672, "PRCDRG_16", 16 );
        StrCopy( ref l_U701, "PRCDRG_31", 16 );
        l_U733 = {1703.12400000, 491.22510000, 28.68930000};
        l_U736 = 323.11320000;
        l_U737 = {1763.97600000, 497.96570000, 27.97640000};
        l_U740 = 9.14620000;
        l_U638 = {1773.26000000, 504.46000000, 29.51300000};
        l_U782[0] = {1766.14900000, 499.43520000, 28.42219000};
        l_U798[0] = {8.63925000, -0.00000000, -45.26993000};
        l_U782[1] = {1767.24700000, 501.67880000, 28.74210000};
        l_U798[1] = {1.26449600, 0.00000000, -55.87519000};
        l_U782[2] = {1775.97100000, 508.70580000, 29.62247000};
        l_U798[2] = {0.68356000, 0.00000000, 128.96800000};
        l_U782[3] = {1775.97100000, 508.70580000, 29.62247000};
        l_U798[3] = {0.68356000, 0.00000000, 128.96800000};
        l_U782[4] = {1767.91000000, 501.87850000, 28.52163000};
        l_U798[4] = {11.59821000, 0.00000000, 128.33030000};
        l_U666 = {1773.26000000, 504.46000000, 27.79950000};
        l_U663 = -92.46000000;
        l_U664 = 150;
        # -sub_C1FFC0-0xc214c8( 1, ref l_U732 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U731 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U731, 2 );
        l_U840 = {1770.62800000, 509.21480000, 28.01490000};
        l_U843 = 326.22120000;
        l_U906[0] = 280474699;
        l_U906[1] = -19263344;
        l_U906[2] = 1844702918;
        l_U906[3] = 280474699;
        l_U906[4] = -19263344;
        l_U912[0] = 1844702918;
        l_U912[1] = 280474699;
        l_U912[2] = -19263344;
        l_U912[3] = 1844702918;
        l_U912[4] = 280474699;
        l_U905 = 2.00000000;
        break;
        case 7:
        l_U938 = 7;
        l_U925[0] = 7;
        l_U925[1] = 7;
        l_U925[2] = 7;
        l_U925[3] = 7;
        REQUEST_ANIMS( "missjacob3" );
        l_U924 = 2016857647;
        REQUEST_MODEL( l_U924 );
        l_U852 = 2;
        l_U862 = 1;
        l_U860 = 1;
        StrCopy( ref l_U672, "PRCDRG_11", 16 );
        StrCopy( ref l_U701, "PRCDRG_23", 16 );
        l_U733 = {1589.80400000, 629.28460000, 28.72240000};
        l_U736 = 270.01960000;
        l_U737 = {1605.09500000, 629.22780000, 28.73850000};
        l_U740 = 270.01960000;
        l_U741 = {1600.82800000, 629.10430000, 28.78370000};
        l_U638 = {1610.07100000, 632.45300000, 30.35300000};
        l_U666 = {1610.17200000, 632.46330000, 28.75290000};
        l_U663 = 18.27860000;
        l_U664 = 206.20270000;
        l_U744[0] = {1614.52800000, 624.78310000, 43.71951000};
        l_U760[0] = {-58.55230000, -0.00000000, 26.23304000};
        l_U744[1] = {1615.89300000, 620.92690000, 30.49797000};
        l_U760[1] = {-1.26451400, 0.00000000, 57.67654000};
        l_U744[2] = {1615.89300000, 620.92690000, 30.49797000};
        l_U760[2] = {-1.26451400, 0.00000000, 53.20747000};
        l_U744[3] = {1593.94000000, 631.34860000, 29.40085000};
        l_U760[3] = {6.06795800, 0.00000000, -102.30660000};
        l_U744[4] = {1593.94000000, 631.34860000, 29.40085000};
        l_U760[4] = {6.06795800, 0.00000000, -102.30660000};
        l_U814[0] = {1588.74700000, 628.90040000, 28.68620000};
        l_U814[1] = {1593.70200000, 629.15960000, 28.81590000};
        l_U814[2] = {1600.60300000, 629.18270000, 28.78620000};
        l_U814[3] = {1606.88600000, 629.50770000, 28.72010000};
        l_U840 = {1614.13100000, 632.27980000, 28.75300000};
        l_U843 = 272.74180000;
        l_U644[0] = {1609.67000000, 621.22940000, 29.73510000};
        l_U644[1] = {1634.98600000, 635.48570000, 28.70770000};
        l_U644[2] = {1635.33700000, 637.16100000, 28.71520000};
        l_U827[0] = {1614.55200000, 621.18240000, 29.11950000};
        l_U827[1] = {1635.18600000, 632.07100000, 28.70500000};
        l_U827[2] = {1633.46400000, 631.66550000, 28.64950000};
        # -sub_C1FFC0-0xc214c8( 1, ref l_U732 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U731 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U731, 2 );
        l_U905 = 2.00000000;
        break;
        case 8:
        REQUEST_ANIMS( "missjacob3" );
        REQUEST_MODEL( -183203150 );
        REQUEST_MODEL( 2046537925 );
        l_U938 = 8;
        l_U644[0] = {1570.35700000, 871.31730000, 15.00600000};
        l_U644[1] = {1572.40000000, 870.61000000, 15.04050000};
        l_U644[2] = {1574.40000000, 870.96630000, 15.00510000};
        l_U657[0] = 342.24900000;
        l_U657[1] = 14.44000000;
        l_U657[2] = 82.97620000;
        l_U856 = 865;
        l_U862 = 1;
        l_U864 = 1;
        l_U861 = 1;
        l_U874 = 1;
        REQUEST_CAR_RECORDING( l_U856 );
        l_U852 = 2;
        StrCopy( ref l_U672, "PRCDRG_12", 16 );
        StrCopy( ref l_U701, "PRCDRG_31", 16 );
        l_U733 = {1651.87100000, 931.01590000, 15.68790000};
        l_U736 = 75.68870000;
        l_U737 = {1574.53100000, 895.74700000, 15.12100000};
        l_U740 = 90.92020000;
        l_U638 = {1572.36000000, 871.57000000, 16.60500000};
        l_U782[0] = {1579.45800000, 877.35670000, 16.04572000};
        l_U798[0] = {0.88612000, -0.00000000, 116.67640000};
        l_U782[1] = {1577.38500000, 877.06590000, 16.08032000};
        l_U798[1] = {0.19765200, 0.00000000, 143.32450000};
        l_U782[2] = {1574.72700000, 952.07910000, 15.47733000};
        l_U798[2] = {15.00752000, -0.00000100, -137.39820000};
        l_U782[3] = {1574.72700000, 952.07910000, 15.47733000};
        l_U798[3] = {15.00752000, -0.00000000, -143.81530000};
        l_U782[4] = {1570.03000000, 899.52850000, 15.19492000};
        l_U798[4] = {16.50518000, -0.00000000, -151.94840000};
        l_U666 = {1572.36000000, 871.57000000, 15.04050000};
        l_U663 = 179.80760000;
        l_U664 = 0;
        # -sub_C1FFC0-0xc214c8( 1, ref l_U732 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U731 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U731, 2 );
        l_U840 = {1572.54800000, 877.01020000, 15.04050000};
        l_U843 = 185.27270000;
        l_U906[0] = 280474699;
        l_U906[1] = -19263344;
        l_U906[2] = 1844702918;
        l_U906[3] = 280474699;
        l_U906[4] = -19263344;
        l_U912[0] = 1844702918;
        l_U912[1] = 280474699;
        l_U912[2] = -19263344;
        l_U912[3] = 1844702918;
        l_U912[4] = 280474699;
        l_U905 = 2.00000000;
        break;
        case 9:
        l_U891 = 1;
        REQUEST_ANIMS( "missjacob3" );
        l_U938 = 9;
        l_U863 = 1;
        StrCopy( ref l_U676[0], "PRCDRG_13", 16 );
        StrCopy( ref l_U676[1], "PRCDRG_14", 16 );
        StrCopy( ref l_U676[2], "PRCDRG_15", 16 );
        StrCopy( ref l_U676[3], "PRCDRG_17", 16 );
        StrCopy( ref l_U676[4], "PRCDRG_18", 16 );
        StrCopy( ref l_U676[5], "PRCDRG_48", 16 );
        l_U662 = 54.00000000;
        l_U867 = 1;
        l_U669 = {1230.32600000, 879.89200000, 36.71700000};
        l_U641 = {1184, 873, 35};
        l_U638 = {1231.32600000, 879.09160000, 35.08220000};
        l_U666 = {1230.54000000, 879.70000000, 35.11750000};
        l_U663 = 234.00000000;
        l_U776 = {1215.79500000, 883.78830000, 45.17371000};
        l_U779 = {-29.98782000, -0.00000000, -107.33500000};
        l_U840 = {1227.93400000, 882.13340000, 35.08220000};
        l_U843 = 224.74180000;
        l_U905 = 2.00000000;
        break;
    }
    while (true)
    {
        WAIT( 0 );
        if (sub_10666( l_U935 ))
        {
            sub_11495( ref l_U896, "LJ3p_CAN", "LJ3p_CDISS" );
            l_U882 = 1;
            sub_11838();
            sub_16234();
        }
        if (l_U892)
        {
            if (HAS_RESPRAY_HAPPENED())
            {
                PRINT_NOW( "PRCDRG_22", 7500, 1 );
                REMOVE_BLIP( l_U718 );
                REMOVE_BLIP( l_U719 );
                sub_16234();
            }
        }
        if (l_U874)
        {
            for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
            {
                if (l_U888)
                {
                    if (IS_CHAR_INJURED( l_U708[l_U854] ))
                    {
                        PRINT_NOW( "PRCDRG_19", 7500, 1 );
                        sub_16234();
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U708[l_U854] )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U708[l_U854], sub_12152(), 0 ))
                    {
                        GET_CHAR_HEALTH( l_U708[l_U854], ref l_U855 );
                        if (l_U855 < 150)
                        {
                            PRINT_NOW( "PRCDRG_19", 7500, 1 );
                            sub_16234();
                        }
                        CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U708[l_U854] );
                    }
                }
            }
        }
        else if (l_U888)
        {
            for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
            {
                if (DOES_BLIP_EXIST( l_U720[l_U854] ))
                {
                    if (IS_CHAR_INJURED( l_U708[l_U854] ))
                    {
                        REMOVE_BLIP( l_U720[l_U854] );
                    }
                }
            }
            if (DOES_BLIP_EXIST( l_U725 ))
            {
                if (IS_CHAR_INJURED( l_U714 ))
                {
                    REMOVE_BLIP( l_U725 );
                }
            }
            if (DOES_BLIP_EXIST( l_U726 ))
            {
                if (IS_CHAR_INJURED( l_U713 ))
                {
                    REMOVE_BLIP( l_U726 );
                }
            }
            if (l_U860)
            {
                if ((IS_CHAR_INJURED( l_U708[2] )) AND ((IS_CHAR_INJURED( l_U708[1] )) AND ((IS_CHAR_INJURED( l_U708[0] )) AND ((IS_CHAR_INJURED( l_U714 )) AND (IS_CHAR_INJURED( l_U713 ))))))
                {
                    sub_17635();
                }
            }
            else if ((IS_CHAR_INJURED( l_U708[3] )) AND ((IS_CHAR_INJURED( l_U708[2] )) AND ((IS_CHAR_INJURED( l_U708[1] )) AND (IS_CHAR_INJURED( l_U708[0] )))))
            {
                sub_17635();
            }
        }
        if (NOT (IS_PLAYER_PLAYING( sub_411() )))
        {
            sub_16234();
        }
        switch (l_U936)
        {
            case 0:
            switch (l_U937)
            {
                case 0:
                SUPPRESS_CAR_MODEL( 486987393 );
                if ((GET_INT_STAT( 284 )) == 9)
                {
                    REQUEST_MODEL( 486987393 );
                    l_U937 = 1;
                }
                else
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U895 );
                    if (l_U895 == 0)
                    {
                        REQUEST_MODEL( -1758379524 );
                        l_U937 = 1;
                    }
                    else if (l_U895 == 1)
                    {
                        REQUEST_MODEL( 1264386590 );
                        l_U937 = 1;
                    }
                    else if (l_U895 == 2)
                    {
                        REQUEST_MODEL( -1883002148 );
                        l_U937 = 1;
                    };;;
                }
                break;
                case 1:
                if ((GET_INT_STAT( 284 )) == 9)
                {
                    if (HAS_MODEL_LOADED( 486987393 ))
                    {
                        sub_29088( l_U935 );
                        STOP_PED_SPEAKING( sub_12152(), 0 );
                        l_U937 = 2;
                    }
                }
                else if (l_U895 == 0)
                {
                    if (HAS_MODEL_LOADED( -1758379524 ))
                    {
                        sub_29088( l_U935 );
                        STOP_PED_SPEAKING( sub_12152(), 0 );
                        l_U937 = 2;
                    }
                }
                else if (l_U895 == 1)
                {
                    if (HAS_MODEL_LOADED( 1264386590 ))
                    {
                        sub_29088( l_U935 );
                        STOP_PED_SPEAKING( sub_12152(), 0 );
                        l_U937 = 2;
                    }
                }
                else if (l_U895 == 2)
                {
                    if (HAS_MODEL_LOADED( -1883002148 ))
                    {
                        sub_29088( l_U935 );
                        STOP_PED_SPEAKING( sub_12152(), 0 );
                        l_U937 = 2;
                    }
                };;;;
                break;
                case 2:
                if ((GET_INT_STAT( 284 )) == 9)
                {
                    CREATE_CAR( 486987393, 1459.66600000, 27.70450000, 23.82670000, ref l_U706, 1 );
                    CHANGE_CAR_COLOUR( l_U706, 0, 59 );
                    SET_EXTRA_CAR_COLOURS( l_U706, 113, 90 );
                    SUPPRESS_CAR_MODEL( 486987393 );
                }
                else if (l_U895 == 0)
                {
                    CREATE_CAR( -1758379524, 1459.66600000, 27.70450000, 23.82670000, ref l_U706, 1 );
                    CHANGE_CAR_COLOUR( l_U706, 0, 59 );
                    SET_EXTRA_CAR_COLOURS( l_U706, 113, 90 );
                    SUPPRESS_CAR_MODEL( -1758379524 );
                }
                else if (l_U895 == 1)
                {
                    CREATE_CAR( 1264386590, 1459.66600000, 27.70450000, 23.82670000, ref l_U706, 1 );
                    CHANGE_CAR_COLOUR( l_U706, 0, 59 );
                    SET_EXTRA_CAR_COLOURS( l_U706, 113, 90 );
                    SUPPRESS_CAR_MODEL( 1264386590 );
                }
                else if (l_U895 == 2)
                {
                    CREATE_CAR( -1883002148, 1459.66600000, 27.70450000, 23.82670000, ref l_U706, 1 );
                    CHANGE_CAR_COLOUR( l_U706, 0, 59 );
                    SET_EXTRA_CAR_COLOURS( l_U706, 113, 90 );
                    SUPPRESS_CAR_MODEL( -1883002148 );
                };;;;
                SET_CAR_HEADING( l_U706, 273.32290000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U706 );
                ADD_BLIP_FOR_CAR( l_U706, ref l_U717 );
                CHANGE_BLIP_COLOUR( l_U717, 2 );
                SET_ROUTE( l_U717, 1 );
                PRINT_NOW( "PRCDRG_28", 7500, 1 );
                l_U936 = 1;
                break;
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U706 ))
            {
                if (IS_CHAR_IN_CAR( sub_12152(), l_U706 ))
                {
                    REMOVE_BLIP( l_U717 );
                    l_U936 = 2;
                }
            }
            else if (IS_CAR_DEAD( l_U706 ))
            {
                PRINT_NOW( "PRCDRG_25", 7500, 1 );
                sub_16234();
            }
            break;
            case 2:
            switch (l_U938)
            {
                case 0:
                sub_30024();
                break;
                case 1:
                sub_46689();
                break;
                case 2:
                sub_46689();
                break;
                case 3:
                sub_30024();
                break;
                case 4:
                sub_30024();
                break;
                case 5:
                sub_46689();
                break;
                case 6:
                sub_30024();
                break;
                case 7:
                sub_30024();
                break;
                case 8:
                sub_30024();
                break;
                case 9:
                sub_46689();
                break;
            }
            break;
        }
    }
    return;
}

void sub_290()
{
    sub_299();
    return;
}

void sub_299()
{
    int iVar2;

    iVar2 = 3;
    sub_313( iVar2 );
    sub_1840( iVar2 );
    return;
}

void sub_313(unknown uParam0)
{
    if (g_U813)
    {
        sub_332();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_411(), 150 );
    switch (uParam0)
    {
        case 0:
        case 3:
        case 8:
        case 19:
        case 22:
        sub_508( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1619( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1754();
    return;
}

void sub_332()
{
    sub_341();
    return;
}

void sub_341()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_411()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_508(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_519( uParam1 );
    sub_714( uParam0, 0, uParam2 );
    sub_714( uParam0, 1, uParam3 );
    sub_714( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_1486();
    return;
}

void sub_519(unknown uParam0)
{
    ADD_SCORE( sub_411(), uParam0 );
    sub_544( uParam0 );
    return;
}

void sub_544(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_655( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_655(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_714(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_871( uParam0 );
    }
    return;
}

void sub_871(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 )))))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

void sub_1486()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U632[I] = 4;
    }
    return;
}

void sub_1619(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1754()
{
    sub_1763();
    return;
}

void sub_1763()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1840(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1619( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U13391[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1619( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U13391[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U13391[uParam0]._fU160._fU100 < iVar3)
    {
        g_U13391[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U10978 = 0;
    g_U10981[uParam0]._fU28 = 1;
    sub_2239();
    sub_2863();
    uVar4 = sub_2898( uParam0 );
    sub_3318( uVar4, 0 );
    return;
}

void sub_2239()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2277( 5, g_U569[I] )) == 1))
        {
            if ((sub_2277( 1, g_U569[I] )) != 0)
            {
                sub_2563( I );
            }
        }
    }
    if (NOT sub_2729())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_2277(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2563(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2648( g_U569 - 1 );
    return;
}

void sub_2648(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2729()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2277( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2863()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_2898(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_655( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_3318(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_3435(unknown uParam0, unknown uParam1)
{
    g_U15946[uParam0]._fU168._fU12[uParam1] = 2;
    g_U15946[uParam0]._fU168._fU0 = 2;
    return;
}

void sub_3492()
{
    SET_CREATE_RANDOM_COPS( 1 );
    ENABLE_POLICE_SCANNER();
    SWITCH_PED_PATHS_ON( l_U638._fU0 - 20, l_U638._fU4 - 20, l_U638._fU8 - 20, l_U638._fU0 + 20, l_U638._fU4 + 20, l_U638._fU8 + 20 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3596( 0 );
    if (l_U876)
    {
        END_CAM_COMMANDS( ref l_U894 );
    }
    if (NOT (IS_CHAR_INJURED( l_U715 )))
    {
        CLEAR_CHAR_TASKS( l_U715 );
    }
    FLUSH_SCENARIO_BLOCKING_AREAS();
    sub_3799( l_U935 );
    sub_3848( l_U935 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3596(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3799(int iParam0)
{
    if (g_U91._fU68 == iParam0)
    {
        g_U91._fU68 = -1;
    }
    return;
}

void sub_3848(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_3944(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3980())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_3980()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_4092(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

int sub_4328(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15946[uParam0]._fU168._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_4439(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return g_U15946[uParam0]._fU168._fU76[uParam1]._fU0[uParam2];
}

int sub_10666(unknown uParam0)
{
    if (g_U15946[uParam0]._fU4 == 1)
    {
        if (g_U15946[uParam0]._fU8[1]._fU0[3] == 1)
        {
            g_U15946[uParam0]._fU4 = 0;
            g_U15946[uParam0]._fU8[1]._fU0[3] = 0;
            if (sub_10759())
            {
                return 0;
            }
            sub_11398();
            return 1;
        }
    }
    return 0;
}

int sub_10759()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BADMAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CHERISE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CLARENCE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "GRACIE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "HOSSAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ILYENA" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "IVAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1_MISSION" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MEL" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA2" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_11398()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_11495(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_11546( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_11546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_11838()
{
    l_U877 = 1;
    if (sub_11868( ref l_U896, "LJP3AUD", 1 ))
    {
        while (l_U877)
        {
            WAIT( 0 );
            switch (sub_15874())
            {
                case 2:
                l_U877 = 0;
                break;
                default:
                if (sub_15962( 0 ))
                {
                    l_U877 = 0;
                    sub_16234();
                }
                break;
            }
        }
    }
    return;
}

int sub_11868(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_11921( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_13856( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_11921(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_11991( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_11991( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_411() )))
    {
        sub_11991( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_12152() ))) AND (IS_CHAR_IN_ANY_CAR( sub_12152() )))
    {
        sub_11991( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_11991( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_12484()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_11991( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_12484()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_13856( uParam0, ref g_U91._fU176 );
    sub_15237( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_15477( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_11991(unknown uParam0)
{
    return;
}

void sub_12152()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_12484()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_12541())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_12541()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_411() )))
    {
        sub_11991( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_11991( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_11991( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_11991( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_411() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_12152() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_12152(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_11991( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_12152() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_11991( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_11991( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_411() )))
    {
        sub_11991( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_13856(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_15237(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_15477(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_15874()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_15962(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_12152(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_11991( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_16234()
{
    g_U64771++;
    if (g_U64771 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_411(), 150 );
        SAY_AMBIENT_SPEECH( sub_12152(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_290();
    if (NOT l_U882)
    {
        sub_11495( ref l_U896, "LJp3_CFAIL", "LJ3p_CDISS" );
        sub_16397( l_U935, ref l_U896, "LJP3AUD", 8000, 0 );
    }
    sub_3435( l_U935, l_U853 );
    sub_3492();
    return;
}

void sub_16397(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_16417( uParam0, uParam1, uParam2, uParam3, uParam4, 0 );
    return;
}

void sub_16417(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_17635()
{
    g_U64771 = 0;
    sub_17652();
    INCREMENT_INT_STAT( 284, 1 );
    sub_28325( l_U935, l_U853, 10 );
    if (NOT (sub_28378( l_U935, 10 )))
    {
        sub_11495( ref l_U896, "LJp3_NCPASS", "LJ3_P_CPASS" );
    }
    else
    {
        sub_11495( ref l_U896, "LJp3_NCPASS", "LJ3p_FINAL" );
    }
    sub_16397( l_U935, ref l_U896, "LJP3AUD", 8000, 0 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_3492();
    return;
}

void sub_17652()
{
    sub_17661();
    return;
}

void sub_17661()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 3;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_17688( iVar3, iVar4, iVar5 );
    sub_1840( iVar2 );
    return;
}

void sub_17688(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_17719( iVar5, uParam0, uParam1, uParam2, "Friend_4" );
    return;
}

void sub_17719(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_17815( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_17815( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_17815( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_17815( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_17815( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_17815( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_18392( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4) AND (NOT g_U10981[iParam0]._fU144._fU12))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_18789( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_18789( 0, 4 );
            }
        }
    }
    if (NOT (sub_18878( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_411(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_411() );
    }
    sub_2239();
    bVar27 = true;
    uVar28 = sub_18392( iParam0, iVar7 );
    uVar29 = sub_2898( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 6) || (iVar30 == 5))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_27159( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_27589();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_27674( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_27731( iParam0 );
                sub_27866( 0 );
                sub_3318( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_27974();
        }
    }
    if (bParam2)
    {
        sub_27589();
        sub_28062();
        sub_27866( 0 );
    }
    if (bParam3)
    {
        sub_27589();
        sub_28102();
        sub_27866( 0 );
        sub_3318( uVar29, 0 );
    }
    sub_28153();
    return;
}

void sub_17815(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_18392(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_655( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_18789(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_18878(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_19086( uParam1 );
        break;
        case 1:
        bVar8 = sub_20069( uParam1 );
        break;
        case 2:
        bVar8 = sub_20295( uParam1 );
        break;
        case 3:
        bVar8 = sub_20445( uParam1 );
        break;
        case 4:
        bVar8 = sub_20723( uParam1 );
        break;
        case 5:
        bVar8 = sub_21026( uParam1 );
        break;
        case 6:
        bVar8 = sub_21225( uParam1 );
        break;
        case 7:
        bVar8 = sub_21451( uParam1 );
        break;
        case 8:
        bVar8 = sub_21686( uParam1 );
        break;
        case 9:
        bVar8 = sub_22061( uParam1 );
        break;
        case 10:
        bVar8 = sub_22308( uParam1 );
        break;
        case 11:
        bVar8 = sub_22447( uParam1 );
        break;
        case 12:
        bVar8 = sub_22746( uParam1 );
        break;
        case 13:
        bVar8 = sub_22974( uParam1 );
        break;
        case 14:
        bVar8 = sub_23261( uParam1 );
        break;
        case 15:
        bVar8 = sub_23543( uParam1 );
        break;
        case 16:
        bVar8 = sub_23825( uParam1 );
        break;
        case 17:
        bVar8 = sub_24026( uParam1 );
        break;
        case 18:
        bVar8 = sub_24099( uParam1 );
        break;
        case 19:
        bVar8 = sub_24313( uParam1 );
        break;
        case 20:
        bVar8 = sub_24566( uParam1 );
        break;
        case 21:
        bVar8 = sub_24813( uParam1 );
        break;
        case 22:
        bVar8 = sub_25014( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1619( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_18392( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_25337( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_19086(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_508( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_508( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_508( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_508( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_508( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_508( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_508( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_508( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_508( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_508( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_508( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_508( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_508( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_508( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_508( iVar3, 0, sub_19682(), sub_19818(), 0, 0 );
        break;
        default:
        sub_19977( "Friend 1", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Friend 1", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19682()
{
    switch (l_U632[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1619( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_19818()
{
    switch (l_U632[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1619( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_19977(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_20069(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 2", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 2", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20295(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_19977( "Girl 3", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Girl 3", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20445(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_508( iVar3, 0, sub_19682(), sub_19818(), 0, 0 );
        break;
        default:
        sub_19977( "Friend 4", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Friend 4", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20723(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_508( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 5", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 5", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21026(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 7", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 7", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21225(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 7b", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 7b", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21451(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_508( iVar3, 0, sub_19682(), sub_19818(), 0, 0 );
        break;
        default:
        sub_19977( "Friend 8", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Friend 8", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21686(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_508( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_508( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_508( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_508( iVar3, 0, sub_19682(), sub_19818(), 0, 0 );
        break;
        default:
        sub_19977( "Friend 9", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Friend 9", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22061(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_508( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_508( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_19977( "Contact 10", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_19977( "Contact 10", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22308(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_19977( "Girl 11", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Girl 11", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22447(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_508( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_508( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_19977( "Contact 12", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 12", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22746(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 13", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 13", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22974(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_508( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_508( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_508( iVar3, 0, sub_19682(), sub_19818(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_19977( "Friend 15", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Friend 15", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23261(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_508( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_508( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 16", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 16", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23543(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_508( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_508( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_19977( "Contact 18", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 18", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_23825(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 19", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 19", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24026(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_19977( "Girl 20", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24099(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_19977( "Contact 21", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 21", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24313(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_508( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_19977( "Contact 22", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 22", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24566(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_508( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_508( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_508( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_19977( "Contact 24", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 24", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24813(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_508( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_508( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_19977( "Contact 25", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_19977( "Contact 25", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25014(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_508( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_19977( "Girl 26", 1 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_19977( "Girl 26", 0 );
        sub_508( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_25337(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_25385( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_26116( iParam1 );
    }
    return;
}

int sub_25385(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_25525( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_25525(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_25707( 0 );
    return;
}

void sub_25707(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_25962();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_25962()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_26116(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_26449( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_26449( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_26449( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_26449( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_26449( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_26449( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_26449( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_26449( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_26449( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_26449( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_26449( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_26449( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_26449( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_26449( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_26449( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_26449( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_26449( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_26449( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_26449( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_26449(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_27159(unknown uParam0, unknown uParam1)
{
    sub_27178( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_27178(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_27589()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_27674(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_27731(unknown uParam0)
{
    sub_27740();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_27740()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_27866(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_27974()
{
    sub_27983();
    return;
}

void sub_27983()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_28062()
{
    sub_27983();
    return;
}

void sub_28102()
{
    sub_27983();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_28153()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_28175();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_28175()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_28325(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15946[uParam0]._fU168._fU12[uParam1] = 1;
    g_U15946[uParam0]._fU168._fU0 = 1;
    return sub_28378( uParam0, uParam2 );
}

int sub_28378(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15946[uParam0]._fU168._fU12[I] != 1)
        {
            sub_28467( "\n Player has NOT passed mission ", I );
            return 0;
        }
        else
        {
            sub_28467( "\n Player has passed mission ", I );
        }
    }
    return 1;
}

void sub_28467(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_29088(unknown uParam0)
{
    g_U91._fU68 = uParam0;
    return;
}

void sub_30024()
{
    if (l_U874)
    {
        for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
        {
            if (l_U888)
            {
                if (IS_CHAR_INJURED( l_U708[l_U854] ))
                {
                    PRINT_NOW( "PRCDRG_19", 7500, 1 );
                    sub_16234();
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U708[l_U854] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U708[l_U854], sub_12152(), 0 ))
                {
                    GET_CHAR_HEALTH( l_U708[l_U854], ref l_U855 );
                    if (l_U855 < 150)
                    {
                        PRINT_NOW( "PRCDRG_19", 7500, 1 );
                        sub_16234();
                    }
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U708[l_U854] );
                }
            }
        }
    }
    switch (l_U939)
    {
        case 0:
        PRINT_NOW( ref l_U672, 7500, 1 );
        ADD_BLIP_FOR_COORD( l_U638._fU0, l_U638._fU4, l_U638._fU8, ref l_U718 );
        SET_ROUTE( l_U718, 1 );
        for ( l_U854 = 0; l_U854 <= 3; l_U854++ )
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U930[l_U854] );
            if (l_U862)
            {
                l_U918[l_U930[l_U854]] = l_U906[l_U930[l_U854]];
            }
            else if (l_U863)
            {
                l_U918[l_U930[l_U854]] = l_U912[l_U930[l_U854]];
            }
            REQUEST_MODEL( l_U918[l_U930[l_U854]] );
            while (NOT (HAS_MODEL_LOADED( l_U918[l_U930[l_U854]] )))
            {
                WAIT( 0 );
            }
            l_U939 = 1;
        }
        break;
        case 1:
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_411(), 0 )))
        {
            if (NOT l_U868)
            {
                if (NOT (DOES_BLIP_EXIST( l_U718 )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( ref l_U672, 7500, 1 );
                        ADD_BLIP_FOR_COORD( l_U638._fU0, l_U638._fU4, l_U638._fU8, ref l_U718 );
                        SET_ROUTE( l_U718, 1 );
                        l_U868 = 1;
                        l_U869 = 0;
                    }
                }
            }
            if (l_U864)
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 50, 50, 50, 0 ))
                {
                    for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                    {
                        CREATE_CHAR( 26, l_U918[l_U930[l_U854]], l_U644[l_U854]._fU0, l_U644[l_U854]._fU4, l_U644[l_U854]._fU8, ref l_U708[l_U854], 1 );
                        if (l_U874)
                        {
                            SET_CHAR_NEVER_TARGETTED( l_U708[l_U854], 1 );
                            SET_CHAR_RELATIONSHIP( l_U708[l_U854], 1, 0 );
                        }
                        SET_CHAR_HEADING( l_U708[l_U854], l_U657[l_U854] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U708[l_U854] );
                        GIVE_WEAPON_TO_CHAR( l_U708[l_U854], l_U925[l_U854], 30000, 0 );
                        SET_CHAR_DECISION_MAKER( l_U708[l_U854], l_U732 );
                        SET_COMBAT_DECISION_MAKER( l_U708[l_U854], l_U731 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U708[l_U854], 0 );
                        SET_CHAR_NEVER_TARGETTED( l_U708[l_U854], 1 );
                    }
                    CLEAR_AREA( l_U638._fU0, l_U638._fU4, l_U638._fU8, 10.00000000, 0 );
                    CLEAR_AREA_OF_CHARS( l_U638._fU0, l_U638._fU4, l_U638._fU8, 20.00000000 );
                    SWITCH_PED_PATHS_OFF( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                    ADD_SCENARIO_BLOCKING_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                    SET_PED_NON_CREATION_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                    l_U888 = 1;
                    l_U939 = 5;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))
            {
                PRINTNL();
                PRINTNL();
                PRINTNL();
                PRINTSTRING( "PED_PASTHS" );
                PRINTNL();
                PRINTNL();
                PRINTNL();
                CLEAR_AREA( l_U638._fU0, l_U638._fU4, l_U638._fU8, 40.00000000, 0 );
                SWITCH_PED_PATHS_OFF( l_U638._fU0 - 80, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                ADD_SCENARIO_BLOCKING_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                SET_PED_NON_CREATION_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                CLEAR_AREA_OF_CHARS( l_U638._fU0, l_U638._fU4, l_U638._fU8, 50 );
                SET_CREATE_RANDOM_COPS( 0 );
                CLEAR_AREA_OF_COPS( l_U638._fU0, l_U638._fU4, l_U638._fU8, 50 );
                l_U939 = 2;
            }
        }
        else if (NOT l_U869)
        {
            REMOVE_BLIP( l_U718 );
            PRINT_NOW( "PRCDRG_26", 7500, 1 );
            l_U869 = 1;
            l_U868 = 0;
        }
        break;
        case 2:
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_411(), 0 )))
        {
            if (NOT l_U868)
            {
                if (NOT (DOES_BLIP_EXIST( l_U718 )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( ref l_U672, 7500, 1 );
                        ADD_BLIP_FOR_COORD( l_U638._fU0, l_U638._fU4, l_U638._fU8, ref l_U718 );
                        SET_ROUTE( l_U718, 1 );
                        l_U868 = 1;
                        l_U869 = 0;
                    }
                }
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 6.50000000, 6.50000000, 2.00000000, 0 ))
            {
                if (NOT l_U865)
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (DOES_VEHICLE_EXIST( l_U706 ))
                        {
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U706 );
                        }
                        GET_CAR_CHAR_IS_USING( sub_12152(), ref l_U706 );
                        if (NOT (IS_CAR_A_MISSION_CAR( l_U706 )))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U706 );
                        }
                        PRINT_NOW( "PRCDRG_21", 7500, 1 );
                        l_U865 = 1;
                    }
                }
            }
            else
            {
                l_U865 = 0;
            }
            if (IS_VEH_DRIVEABLE( l_U706 ))
            {
                if ((LOCATE_CAR_3D( l_U706, l_U814[3]._fU0, l_U814[3]._fU4, l_U814[3]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U814[2]._fU0, l_U814[2]._fU4, l_U814[2]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U814[1]._fU0, l_U814[1]._fU4, l_U814[1]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U814[0]._fU0, l_U814[0]._fU4, l_U814[0]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U744[1]._fU0, l_U744[1]._fU4, l_U744[1]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U744[0]._fU0, l_U744[0]._fU4, l_U744[0]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || (LOCATE_CAR_3D( l_U706, l_U638._fU0, l_U638._fU4, l_U638._fU8, 4.00000000, 4.00000000, l_U905, 0 ))))))))
                {
                    l_U870 = 1;
                }
                else
                {
                    l_U870 = 0;
                }
                for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                {
                    if (LOCATE_CAR_3D( l_U706, l_U644[l_U854]._fU0, l_U644[l_U854]._fU4, l_U644[l_U854]._fU8, 3.00000000, 3.00000000, l_U905, 0 ))
                    {
                        l_U870 = 1;
                    }
                }
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 1.60000000, 1.60000000, 2.00000000, 1 ))
            {
                if (sub_32997( 1, 1 ))
                {
                    SET_ALL_RANDOM_PEDS_FLEE( sub_411(), 1 );
                    if (HAVE_ANIMS_LOADED( "missjacob3" ))
                    {
                        l_U939 = 3;
                    }
                    else
                    {
                        REQUEST_ANIMS( "missjacob3" );
                    }
                }
            }
        }
        else if (NOT l_U869)
        {
            REMOVE_BLIP( l_U718 );
            PRINT_NOW( "PRCDRG_26", 7500, 1 );
            l_U869 = 1;
            l_U868 = 0;
        }
        break;
        case 3:
        if (NOT l_U881)
        {
            sub_33435();
        }
        else if (l_U860)
        {
            l_U939 = 4;
        }
        else
        {
            SETTIMERA( 0 );
            l_U939 = 5;
        }
        break;
        case 4:
        if (NOT l_U864)
        {
            if (TIMERA() >= 3000)
            {
                if (NOT (IS_CHAR_INJURED( l_U713 )))
                {
                    if (sub_39453( l_U713 ))
                    {
                        SET_CHAR_RELATIONSHIP( l_U713, 5, 0 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U713, 4 );
                        TASK_COMBAT( l_U713, sub_12152() );
                        if (NOT (IS_CHAR_INJURED( l_U714 )))
                        {
                            SET_CHAR_RELATIONSHIP_GROUP( l_U714, 4 );
                            SET_CHAR_RELATIONSHIP( l_U714, 5, 0 );
                            TASK_COMBAT( l_U714, sub_12152() );
                        }
                        SETTIMERA( 0 );
                        l_U939 = 5;
                    }
                }
            }
        }
        break;
        case 5:
        if (NOT l_U864)
        {
            if (NOT l_U885)
            {
                if (TIMERA() >= 10000)
                {
                    for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                        {
                            if (l_U905 == 1.20000000)
                            {
                                SET_CHAR_ACCURACY( l_U708[l_U854], 60 );
                            }
                            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U731, 60 );
                        }
                    }
                    l_U885 = 1;
                }
            }
            for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
            {
                if (DOES_BLIP_EXIST( l_U720[l_U854] ))
                {
                    if (IS_CHAR_INJURED( l_U708[l_U854] ))
                    {
                        REMOVE_BLIP( l_U720[l_U854] );
                    }
                }
            }
            if (DOES_BLIP_EXIST( l_U725 ))
            {
                if (IS_CHAR_INJURED( l_U714 ))
                {
                    REMOVE_BLIP( l_U725 );
                }
            }
            if (DOES_BLIP_EXIST( l_U726 ))
            {
                if (IS_CHAR_INJURED( l_U713 ))
                {
                    REMOVE_BLIP( l_U726 );
                }
            }
            if (l_U860)
            {
                if ((IS_CHAR_INJURED( l_U708[2] )) AND ((IS_CHAR_INJURED( l_U708[1] )) AND ((IS_CHAR_INJURED( l_U708[0] )) AND ((IS_CHAR_INJURED( l_U714 )) AND (IS_CHAR_INJURED( l_U713 ))))))
                {
                    l_U939 = 8;
                }
                if (NOT (IS_CHAR_INJURED( l_U713 )))
                {
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U713, 150, 150, 0 ))))
                    {
                        if (sub_32997( 1, 1 ))
                        {
                            PRINT_NOW( "PRCDRG_01", 7500, 1 );
                            sub_16234();
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U714 )))
                {
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U714, 150, 150, 0 ))))
                    {
                        if (sub_32997( 1, 1 ))
                        {
                            PRINT_NOW( "PRCDRG_01", 7500, 1 );
                            sub_16234();
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U708[0] )))
                {
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U708[0], 150, 150, 0 ))))
                    {
                        if (sub_32997( 1, 1 ))
                        {
                            PRINT_NOW( "PRCDRG_01", 7500, 1 );
                            sub_16234();
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U708[1] )))
                {
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U708[1], 150, 150, 0 ))))
                    {
                        if (sub_32997( 1, 1 ))
                        {
                            PRINT_NOW( "PRCDRG_01", 7500, 1 );
                            sub_16234();
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U708[2] )))
                {
                    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U708[2], 150, 150, 0 ))))
                    {
                        if (sub_32997( 1, 1 ))
                        {
                            PRINT_NOW( "PRCDRG_01", 7500, 1 );
                            sub_16234();
                        }
                    }
                }
            }
            else if ((IS_CHAR_INJURED( l_U708[3] )) AND ((IS_CHAR_INJURED( l_U708[2] )) AND ((IS_CHAR_INJURED( l_U708[1] )) AND (IS_CHAR_INJURED( l_U708[0] )))))
            {
                l_U939 = 8;
            }
            if (NOT (IS_CHAR_INJURED( l_U708[0] )))
            {
                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U708[0], 150, 150, 0 ))))
                {
                    if (sub_32997( 1, 1 ))
                    {
                        PRINT_NOW( "PRCDRG_01", 7500, 1 );
                        sub_16234();
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U708[1] )))
            {
                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U708[1], 150, 150, 0 ))))
                {
                    if (sub_32997( 1, 1 ))
                    {
                        PRINT_NOW( "PRCDRG_01", 7500, 1 );
                        sub_16234();
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U708[2] )))
            {
                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U708[2], 150, 150, 0 ))))
                {
                    if (sub_32997( 1, 1 ))
                    {
                        PRINT_NOW( "PRCDRG_01", 7500, 1 );
                        sub_16234();
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U708[3] )))
            {
                if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 100, 100, 100, 0 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U708[3], 150, 150, 0 ))))
                {
                    if (sub_32997( 1, 1 ))
                    {
                        PRINT_NOW( "PRCDRG_01", 7500, 1 );
                        sub_16234();
                    }
                }
            }
        }
        else if (NOT (IS_WANTED_LEVEL_GREATER( sub_411(), 0 )))
        {
            if (NOT l_U868)
            {
                if (NOT (DOES_BLIP_EXIST( l_U718 )))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        PRINT_NOW( ref l_U672, 7500, 1 );
                        ADD_BLIP_FOR_COORD( l_U638._fU0, l_U638._fU4, l_U638._fU8, ref l_U718 );
                        SET_ROUTE( l_U718, 1 );
                        l_U868 = 1;
                        l_U869 = 0;
                    }
                }
            }
            if (NOT l_U865)
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 6.50000000, 6.50000000, 6.50000000, 0 ))
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                            {
                                TASK_LOOK_AT_CHAR( l_U708[l_U854], sub_12152(), 5000, 0 );
                            }
                        }
                        PRINT_NOW( "PRCDRG_29", 7500, 1 );
                        l_U865 = 1;
                    }
                }
            }
            if (NOT l_U879)
            {
                if (NOT (IS_CHAR_INJURED( l_U708[1] )))
                {
                    if (NOT (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U708[1] )))
                    {
                        TASK_START_SCENARIO_AT_POSITION( l_U708[1], "Scenario_SellingDrugs", l_U644[1]._fU0, l_U644[1]._fU4, l_U644[1]._fU8, l_U657[1] );
                        l_U879 = 1;
                    }
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_12152() ))
            {
                GET_CAR_CHAR_IS_USING( sub_12152(), ref l_U706 );
                if (IS_VEH_DRIVEABLE( l_U706 ))
                {
                    if ((LOCATE_CAR_3D( l_U706, l_U782[4]._fU0, l_U782[4]._fU4, l_U782[4]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U782[3]._fU0, l_U782[3]._fU4, l_U782[3]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U782[2]._fU0, l_U782[2]._fU4, l_U782[2]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U782[1]._fU0, l_U782[1]._fU4, l_U782[1]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U782[0]._fU0, l_U782[0]._fU4, l_U782[0]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || (LOCATE_CAR_3D( l_U706, l_U669._fU0, l_U669._fU4, l_U669._fU8, 4.00000000, 4.00000000, l_U905, 0 )))))))
                    {
                        l_U870 = 1;
                    }
                    else
                    {
                        l_U870 = 0;
                    }
                }
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
            {
                if (sub_32997( 1, 1 ))
                {
                    SET_ALL_RANDOM_PEDS_FLEE( sub_411(), 1 );
                    if ((HAS_MODEL_LOADED( 2046537925 )) AND (HAS_MODEL_LOADED( -183203150 )))
                    {
                        l_U939 = 6;
                    }
                    else
                    {
                        REQUEST_MODEL( -183203150 );
                        REQUEST_MODEL( 2046537925 );
                    }
                }
            }
        }
        else if (NOT l_U869)
        {
            REMOVE_BLIP( l_U718 );
            PRINT_NOW( "PRCDRG_26", 7500, 1 );
            l_U869 = 1;
            l_U868 = 0;
        };;;
        break;
        case 6:
        if (l_U880)
        {
            if ((IS_SCREEN_FADED_IN()) AND (sub_33454()))
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (IS_SCREEN_FADING_OUT())
                {
                    WAIT( 0 );
                }
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 0 );
                if (NOT (IS_CHAR_INJURED( l_U713 )))
                {
                    for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                        {
                            SET_CHAR_RELATIONSHIP( l_U708[l_U854], 5, 3 );
                            TASK_COMBAT( l_U708[l_U854], l_U713 );
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U707 ))
                {
                    SET_CAR_COORDINATES( l_U707, l_U737._fU0, l_U737._fU4, l_U737._fU8 );
                    SET_CAR_HEADING( l_U707, l_U740 );
                }
                SET_CHAR_HEADING( sub_12152(), l_U664 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                l_U876 = 0;
                END_CAM_COMMANDS( ref l_U894 );
                SET_PLAYER_CONTROL_ADVANCED( sub_411(), 1, 1, 1 );
                DISPLAY_RADAR( 1 );
                DISPLAY_HUD( 1 );
                ALTER_WANTED_LEVEL( sub_411(), 2 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_411() );
                PRINT_NOW( "PRCDRG_26", 7500, 1 );
                SETTIMERA( 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                LOAD_SCENE( l_U666._fU0, l_U666._fU4, l_U666._fU8 );
                l_U888 = 0;
                DO_SCREEN_FADE_IN( 500 );
                while (IS_SCREEN_FADING_IN())
                {
                    WAIT( 0 );
                }
                l_U939 = 8;
            }
        }
        switch (l_U857)
        {
            case 0:
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            BEGIN_CAM_COMMANDS( ref l_U894 );
            l_U876 = 1;
            CREATE_CAM( 14, ref l_U727 );
            CREATE_CAM( 14, ref l_U728 );
            CREATE_CAM( 3, ref l_U729 );
            SET_CAM_POS( l_U727, l_U782[0]._fU0, l_U782[0]._fU4, l_U782[0]._fU8 );
            SET_CAM_ROT( l_U727, l_U798[0]._fU0, l_U798[0]._fU4, l_U798[0]._fU8 );
            SET_CAM_FOV( l_U727, 45.00000000 );
            SET_CAM_NEAR_DOF( l_U727, 0.50000000 );
            SET_CAM_FAR_DOF( l_U727, 10.00000000 );
            SET_CAM_POS( l_U728, l_U782[1]._fU0, l_U782[1]._fU4, l_U782[1]._fU8 );
            SET_CAM_ROT( l_U728, l_U798[1]._fU0, l_U798[1]._fU4, l_U798[1]._fU8 );
            SET_CAM_FOV( l_U728, 45.00000000 );
            SET_CAM_NEAR_DOF( l_U728, 0.50000000 );
            SET_CAM_FAR_DOF( l_U728, 15.00000000 );
            SET_CAM_ACTIVE( l_U727, 1 );
            SET_CAM_PROPAGATE( l_U727, 1 );
            SET_CAM_ACTIVE( l_U728, 1 );
            SET_CAM_PROPAGATE( l_U728, 1 );
            SET_CAM_ACTIVE( l_U729, 1 );
            SET_CAM_PROPAGATE( l_U729, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U729, l_U727, l_U728, 4500, 0 );
            sub_43539();
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U706 );
            if (IS_VEH_DRIVEABLE( l_U706 ))
            {
                if ((LOCATE_CAR_3D( l_U706, l_U782[4]._fU0, l_U782[4]._fU4, l_U782[4]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U782[3]._fU0, l_U782[3]._fU4, l_U782[3]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U782[2]._fU0, l_U782[2]._fU4, l_U782[2]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U782[1]._fU0, l_U782[1]._fU4, l_U782[1]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || (LOCATE_CAR_3D( l_U706, l_U638._fU0, l_U638._fU4, l_U638._fU8, 4.00000000, 4.00000000, l_U905, 0 ))))))
                {
                    l_U870 = 1;
                }
                for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                {
                    if (LOCATE_CAR_3D( l_U706, l_U644[l_U854]._fU0, l_U644[l_U854]._fU4, l_U644[l_U854]._fU8, 3.00000000, 3.00000000, l_U905, 0 ))
                    {
                        l_U870 = 1;
                    }
                }
            }
            if (l_U870)
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U706 );
                if (IS_VEH_DRIVEABLE( l_U706 ))
                {
                    SET_CAR_COORDINATES( l_U706, l_U840._fU0, l_U840._fU4, l_U840._fU8 );
                    SET_CAR_HEADING( l_U706, l_U843 );
                }
            }
            WAIT( 100 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CLEAR_PRINTS();
            REMOVE_BLIP( l_U718 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_12152() );
            FREEZE_CHAR_POSITION( sub_12152(), 1 );
            SET_CHAR_COORDINATES( sub_12152(), l_U666._fU0, l_U666._fU4, l_U666._fU8 );
            SET_CHAR_HEADING( sub_12152(), l_U663 );
            FREEZE_CHAR_POSITION( sub_12152(), 0 );
            SET_PLAYER_CONTROL_ADVANCED( sub_411(), 0, 1, 1 );
            if (NOT (IS_CHAR_INJURED( l_U708[1] )))
            {
                TASK_PLAY_ANIM( l_U708[1], "Drugs_buy", "missjacob3", 1000, 0, 0, 0, 0, 0 );
            }
            TASK_PLAY_ANIM( sub_12152(), "Drugs_deal", "missjacob3", 1000, 0, 0, 0, 0, 0 );
            SETTIMERA( 0 );
            l_U857++;
            break;
            case 1:
            if (TIMERA() >= 400)
            {
                if (NOT (IS_CHAR_INJURED( l_U708[2] )))
                {
                    TASK_LOOK_AT_CHAR( l_U708[2], sub_12152(), 3500, 0 );
                    SAY_AMBIENT_SPEECH( l_U708[2], "GENERIC_HI", 1, 1, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U708[0] )))
                {
                    TASK_LOOK_AT_CHAR( l_U708[0], sub_12152(), 3500, 0 );
                }
                SETTIMERA( 0 );
                l_U880 = 1;
                l_U857++;
            }
            break;
            case 2:
            if (TIMERA() >= 3500)
            {
                if (IS_VEH_DRIVEABLE( l_U707 ))
                {
                    SWITCH_CAR_SIREN( l_U707, 1 );
                }
                SET_CAM_POS( l_U727, l_U782[2]._fU0, l_U782[2]._fU4, l_U782[2]._fU8 );
                SET_CAM_ROT( l_U727, l_U798[2]._fU0, l_U798[2]._fU4, l_U798[2]._fU8 );
                SET_CAM_FOV( l_U727, 45.00000000 );
                SET_CAM_NEAR_DOF( l_U727, 0.50000000 );
                SET_CAM_FAR_DOF( l_U727, 80.00000000 );
                SET_CAM_POS( l_U728, l_U782[3]._fU0, l_U782[3]._fU4, l_U782[3]._fU8 );
                SET_CAM_ROT( l_U728, l_U798[3]._fU0, l_U798[3]._fU4, l_U798[3]._fU8 );
                SET_CAM_FOV( l_U728, 45.00000000 );
                SET_CAM_NEAR_DOF( l_U728, 0.50000000 );
                SET_CAM_FAR_DOF( l_U728, 80.00000000 );
                SET_CHAR_HEADING( sub_12152(), l_U664 );
                SET_CAM_INTERP_STYLE_CORE( l_U729, l_U727, l_U728, 5000, 0 );
                PRINT_NOW( ref l_U701, 7500, 1 );
                if (NOT (IS_CHAR_INJURED( l_U713 )))
                {
                    for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                        {
                            if (l_U863)
                            {
                                SET_CHAR_HEADING( l_U708[l_U854], 150.48990000 );
                            }
                            SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG( l_U708[l_U854], 0 );
                            SET_CHAR_RELATIONSHIP( l_U708[l_U854], 5, 3 );
                            TASK_SHOOT_AT_CHAR( l_U708[l_U854], l_U713, 10000, 5 );
                        }
                    }
                }
                SETTIMERA( 0 );
                l_U857++;
            }
            break;
            case 3:
            if (TIMERA() >= 2000)
            {
                if ((NOT (IS_CHAR_INJURED( l_U714 ))) AND (NOT (IS_CHAR_INJURED( l_U713 ))))
                {
                    SET_CHAR_RELATIONSHIP( l_U713, 5, 0 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U713, 3 );
                    SET_CHAR_RELATIONSHIP( l_U714, 5, 0 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U714, 3 );
                    SET_CHAR_DECISION_MAKER( l_U713, l_U732 );
                    SET_COMBAT_DECISION_MAKER( l_U713, l_U731 );
                    SET_CHAR_DECISION_MAKER( l_U714, l_U732 );
                    SET_COMBAT_DECISION_MAKER( l_U714, l_U731 );
                }
                l_U857++;
            }
            break;
            case 4:
            if (l_U887)
            {
                if (NOT (IS_CHAR_INJURED( l_U713 )))
                {
                    GET_CHAR_SPEED( l_U713, ref l_U665 );
                    if (l_U665 < 8)
                    {
                        SAY_AMBIENT_SPEECH( l_U713, "MEGAPHONE_FOOT_PURSUIT", 1, 1, 2 );
                        l_U887 = 0;
                    }
                }
            }
            if (TIMERA() >= 1000)
            {
                SET_CAM_POS( l_U727, l_U782[4]._fU0, l_U782[4]._fU4, l_U782[4]._fU8 );
                SET_CAM_ROT( l_U727, l_U798[4]._fU0, l_U798[4]._fU4, l_U798[4]._fU8 );
                SET_CAM_ACTIVE( l_U728, 0 );
                SET_CAM_PROPAGATE( l_U728, 0 );
                SET_CAM_ACTIVE( l_U729, 0 );
                SET_CAM_PROPAGATE( l_U729, 0 );
                SET_CAM_ACTIVE( l_U727, 1 );
                SET_CAM_PROPAGATE( l_U727, 1 );
                SET_CAM_FOV( l_U727, 45.50004000 );
                SET_CAM_NEAR_DOF( l_U727, 0.50000000 );
                SET_CAM_FAR_DOF( l_U727, 35.00000000 );
                SETTIMERA( 0 );
                l_U939 = 7;
            }
            break;
        }
        break;
        case 7:
        if (l_U887)
        {
            if (NOT (IS_CHAR_INJURED( l_U713 )))
            {
                GET_CHAR_SPEED( l_U713, ref l_U665 );
                if (l_U665 < 6)
                {
                    SAY_AMBIENT_SPEECH( l_U713, "MEGAPHONE_FOOT_PURSUIT", 1, 1, 2 );
                    l_U887 = 0;
                }
            }
        }
        if (TIMERA() >= 2500)
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            l_U888 = 0;
            l_U876 = 0;
            END_CAM_COMMANDS( ref l_U894 );
            SET_PLAYER_CONTROL_ADVANCED( sub_411(), 1, 1, 1 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            ALTER_WANTED_LEVEL( sub_411(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_411() );
            PRINT( "PRCDRG_26", 7500, 1 );
            SETTIMERA( 0 );
            SET_PED_IS_BLIND_RAGING( sub_12152(), 1 );
            l_U939 = 8;
        }
        break;
        case 8:
        if (NOT l_U875)
        {
            if ((NOT (IS_CHAR_INJURED( l_U714 ))) AND ((NOT (IS_CHAR_INJURED( l_U713 ))) AND (IS_VEH_DRIVEABLE( l_U707 ))))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U707 )))
                {
                    SET_CHAR_RELATIONSHIP( l_U714, 5, 0 );
                    SET_CHAR_RELATIONSHIP( l_U713, 5, 0 );
                    TASK_COMBAT( l_U714, sub_12152() );
                    TASK_COMBAT( l_U713, sub_12152() );
                    l_U875 = 1;
                }
            }
        }
        if (l_U864)
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_411(), 0 )))
            {
                sub_17635();
            }
        }
        else
        {
            sub_17635();
        }
        break;
    }
    return;
}

int sub_32997(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_12152() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_12152(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 > 1.01100000) || (fVar6 < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_12152() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_12152(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_12152()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_12152() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_12152() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_411() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_411() )))
    {
        return 0;
    }
    return 1;
}

void sub_33435()
{
    if (l_U880)
    {
        if ((IS_SCREEN_FADED_IN()) AND (sub_33454()))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            DISABLE_POLICE_SCANNER();
            SET_WANTED_MULTIPLIER( 0.00000000 );
            SET_CHAR_HEADING( sub_12152(), l_U664 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            CLEAR_CHAR_TASKS( sub_12152() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_ACTIVE( l_U727, 0 );
            SET_CAM_PROPAGATE( l_U727, 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            l_U876 = 0;
            END_CAM_COMMANDS( ref l_U894 );
            SET_PLAYER_CONTROL_ADVANCED( sub_411(), 1, 1, 1 );
            PRINT_NOW( "PRCDRG_32", 7500, 1 );
            SETTIMERA( 0 );
            for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                {
                    SET_CHAR_COORDINATES( l_U708[l_U854], l_U827[l_U854]._fU0, l_U827[l_U854]._fU4, l_U827[l_U854]._fU8 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U708[l_U854], 4 );
                    SET_CHAR_RELATIONSHIP( l_U708[l_U854], 5, 0 );
                    if (NOT (DOES_BLIP_EXIST( l_U720[l_U854] )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U708[l_U854], ref l_U720[l_U854] );
                    }
                    OPEN_SEQUENCE_TASK( ref l_U730 );
                    TASK_AIM_GUN_AT_CHAR( 0, sub_12152(), 8000 );
                    TASK_COMBAT( 0, sub_12152() );
                    CLOSE_SEQUENCE_TASK( l_U730 );
                    TASK_PERFORM_SEQUENCE( l_U708[l_U854], l_U730 );
                    CLEAR_SEQUENCE_TASK( l_U730 );
                    SAY_AMBIENT_SPEECH( l_U708[l_U854], "GENERIC_FUCK_OFF", 0, 0, 0 );
                }
            }
            if (l_U860)
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U707 )))
                {
                    if (HAS_MODEL_LOADED( l_U924 ))
                    {
                        CREATE_CAR( l_U924, l_U737._fU0, l_U737._fU4, l_U737._fU8, ref l_U707, 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 1, 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 2, 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 3, 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 4, 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 5, 0 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 6, 0 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 7, 0 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 8, 1 );
                        TURN_OFF_VEHICLE_EXTRA( l_U707, 9, 1 );
                        SET_CAR_HEADING( l_U707, l_U740 );
                        CREATE_CHAR_INSIDE_CAR( l_U707, 26, l_U918[l_U930[2]], ref l_U713 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U713 );
                        GIVE_WEAPON_TO_CHAR( l_U713, 7, 30000, 0 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U713, 4 );
                        SET_CHAR_DECISION_MAKER( l_U713, l_U732 );
                        SET_COMBAT_DECISION_MAKER( l_U713, l_U731 );
                        SET_PED_DIES_WHEN_INJURED( l_U713, 1 );
                        if (NOT (DOES_BLIP_EXIST( l_U726 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U713, ref l_U726 );
                        }
                        CREATE_CHAR_AS_PASSENGER( l_U707, 26, l_U918[l_U930[3]], 0, ref l_U714 );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U714 );
                        GIVE_WEAPON_TO_CHAR( l_U714, 10, 30000, 0 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U714, 4 );
                        SET_CHAR_DECISION_MAKER( l_U714, l_U732 );
                        SET_COMBAT_DECISION_MAKER( l_U714, l_U731 );
                        if (NOT (DOES_BLIP_EXIST( l_U725 )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U714, ref l_U725 );
                        }
                    }
                }
                else
                {
                    SET_CAR_COORDINATES( l_U707, l_U737._fU0, l_U737._fU4, l_U737._fU8 );
                    SET_CAR_HEADING( l_U707, l_U740 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U713 )))
            {
                SET_CHAR_RELATIONSHIP( l_U713, 5, 0 );
                if (NOT (DOES_BLIP_EXIST( l_U726 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U730 );
                    TASK_AIM_GUN_AT_CHAR( 0, sub_12152(), 4000 );
                    TASK_COMBAT( 0, sub_12152() );
                    CLOSE_SEQUENCE_TASK( l_U730 );
                    TASK_PERFORM_SEQUENCE( l_U713, l_U730 );
                    CLEAR_SEQUENCE_TASK( l_U730 );
                    ADD_BLIP_FOR_CHAR( l_U713, ref l_U726 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U714 )))
            {
                SET_CHAR_RELATIONSHIP( l_U714, 5, 0 );
                if (NOT (DOES_BLIP_EXIST( l_U725 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U730 );
                    TASK_AIM_GUN_AT_CHAR( 0, sub_12152(), 4000 );
                    TASK_COMBAT( 0, sub_12152() );
                    CLOSE_SEQUENCE_TASK( l_U730 );
                    TASK_PERFORM_SEQUENCE( l_U714, l_U730 );
                    CLEAR_SEQUENCE_TASK( l_U730 );
                    ADD_BLIP_FOR_CHAR( l_U714, ref l_U725 );
                }
            }
            SET_PED_IS_BLIND_RAGING( sub_12152(), 1 );
            LOAD_SCENE( l_U666._fU0, l_U666._fU4, l_U666._fU8 );
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U881 = 1;
        }
    }
    switch (l_U857)
    {
        case 0:
        l_U868 = 1;
        CLEAR_PRINTS();
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        DISABLE_POLICE_SCANNER();
        SET_WANTED_MULTIPLIER( 0.00000000 );
        BEGIN_CAM_COMMANDS( ref l_U894 );
        l_U876 = 1;
        CREATE_CAM( 14, ref l_U727 );
        CREATE_CAM( 14, ref l_U728 );
        CREATE_CAM( 3, ref l_U729 );
        SET_CAM_FOV( l_U727, 50 );
        SET_CAM_NEAR_DOF( l_U727, 15.50000000 );
        SET_CAM_FAR_DOF( l_U727, 20.00000000 );
        SET_CAM_POS( l_U727, l_U744[0]._fU0, l_U744[0]._fU4, l_U744[0]._fU8 );
        SET_CAM_ROT( l_U727, l_U760[0]._fU0, l_U760[0]._fU4, l_U760[0]._fU8 );
        SET_CAM_FOV( l_U728, 45 );
        SET_CAM_NEAR_DOF( l_U728, 15.50000000 );
        SET_CAM_FAR_DOF( l_U728, 20.00000000 );
        SET_CAM_POS( l_U728, l_U744[0]._fU0, l_U744[0]._fU4, l_U744[0]._fU8 );
        SET_CAM_ROT( l_U728, l_U760[0]._fU0, l_U760[0]._fU4, l_U760[0]._fU8 );
        SET_CAM_ACTIVE( l_U727, 1 );
        SET_CAM_PROPAGATE( l_U727, 1 );
        SET_CAM_ACTIVE( l_U728, 1 );
        SET_CAM_PROPAGATE( l_U728, 1 );
        SET_CAM_ACTIVE( l_U729, 1 );
        SET_CAM_PROPAGATE( l_U729, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U729, l_U727, l_U728, 3000, 0 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CLEAR_AREA_OF_CHARS( l_U638._fU0, l_U638._fU4, l_U638._fU8, 1000 );
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U706 );
        if (IS_VEH_DRIVEABLE( l_U706 ))
        {
            if ((LOCATE_CAR_3D( l_U706, l_U814[3]._fU0, l_U814[3]._fU4, l_U814[3]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U814[2]._fU0, l_U814[2]._fU4, l_U814[2]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U814[1]._fU0, l_U814[1]._fU4, l_U814[1]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U814[0]._fU0, l_U814[0]._fU4, l_U814[0]._fU8, 5.00000000, 5.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U744[1]._fU0, l_U744[1]._fU4, l_U744[1]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || ((LOCATE_CAR_3D( l_U706, l_U744[0]._fU0, l_U744[0]._fU4, l_U744[0]._fU8, 4.00000000, 4.00000000, l_U905, 0 )) || (LOCATE_CAR_3D( l_U706, l_U638._fU0, l_U638._fU4, l_U638._fU8, 4.00000000, 4.00000000, l_U905, 0 ))))))))
            {
                l_U870 = 1;
            }
            for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
            {
                if (LOCATE_CAR_3D( l_U706, l_U644[l_U854]._fU0, l_U644[l_U854]._fU4, l_U644[l_U854]._fU8, 3.00000000, 3.00000000, l_U905, 0 ))
                {
                    l_U870 = 1;
                }
            }
        }
        if (l_U870)
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U706 );
            if (IS_VEH_DRIVEABLE( l_U706 ))
            {
                SET_CAR_COORDINATES( l_U706, l_U840._fU0, l_U840._fU4, l_U840._fU8 );
                SET_CAR_HEADING( l_U706, l_U843 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_12152() );
        FREEZE_CHAR_POSITION( sub_12152(), 1 );
        SET_CHAR_COORDINATES( sub_12152(), l_U666._fU0, l_U666._fU4, l_U666._fU8 );
        SET_CHAR_HEADING( sub_12152(), l_U663 );
        FREEZE_CHAR_POSITION( sub_12152(), 0 );
        SET_PLAYER_CONTROL_ADVANCED( sub_411(), 0, 1, 1 );
        OPEN_SEQUENCE_TASK( ref l_U730 );
        TASK_PLAY_ANIM( 0, "stash", "missjacob3", 1000, 0, 0, 0, 0, 0 );
        TASK_PLAY_ANIM( 0, "Stash_lookaround", "missjacob3", 1000, 0, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U730 );
        TASK_PERFORM_SEQUENCE( sub_12152(), l_U730 );
        CLEAR_SEQUENCE_TASK( l_U730 );
        REMOVE_BLIP( l_U718 );
        SETTIMERA( 0 );
        l_U857++;
        break;
        case 1:
        if (TIMERA() >= 1000)
        {
            for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
            {
                CREATE_CHAR( 26, l_U918[l_U930[l_U854]], l_U644[l_U854]._fU0, l_U644[l_U854]._fU4, l_U644[l_U854]._fU8, ref l_U708[l_U854], 1 );
                SET_CHAR_HEADING( l_U708[l_U854], l_U657[l_U854] );
                if (l_U905 == 1.20000000)
                {
                    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U731, 50 );
                }
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U708[l_U854] );
                GIVE_WEAPON_TO_CHAR( l_U708[l_U854], l_U925[l_U854], 30000, 1 );
                SET_CURRENT_CHAR_WEAPON( l_U708[l_U854], l_U925[l_U854], 1 );
                SET_CHAR_DECISION_MAKER( l_U708[l_U854], l_U732 );
                if (l_U884)
                {
                    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U731, 1 );
                }
                SET_COMBAT_DECISION_MAKER( l_U708[l_U854], l_U731 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U708[l_U854], 4 );
                SET_PED_DIES_WHEN_INJURED( l_U708[l_U854], 1 );
                l_U888 = 1;
            }
            if (NOT l_U860)
            {
                for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U730 );
                        TASK_STAND_STILL( 0, 1500 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U827[l_U854]._fU0, l_U827[l_U854]._fU4, l_U827[l_U854]._fU8, 2, 0, 1.00000000, sub_12152(), l_U666._fU0, l_U666._fU4, l_U666._fU8, 0 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_12152(), 8000 );
                        CLOSE_SEQUENCE_TASK( l_U730 );
                        TASK_PERFORM_SEQUENCE( l_U708[l_U854], l_U730 );
                        CLEAR_SEQUENCE_TASK( l_U730 );
                    }
                }
            }
            else
            {
                for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U730 );
                        TASK_GO_TO_COORD_WHILE_AIMING( 0, l_U827[l_U854]._fU0, l_U827[l_U854]._fU4, l_U827[l_U854]._fU8, 2, 0, 1.00000000, sub_12152(), l_U666._fU0, l_U666._fU4, l_U666._fU8, 0 );
                        TASK_AIM_GUN_AT_CHAR( 0, sub_12152(), 8000 );
                        CLOSE_SEQUENCE_TASK( l_U730 );
                        TASK_PERFORM_SEQUENCE( l_U708[l_U854], l_U730 );
                        CLEAR_SEQUENCE_TASK( l_U730 );
                    }
                }
            }
            l_U880 = 1;
            SETTIMERA( 0 );
            l_U857++;
        }
        break;
        case 2:
        if (TIMERA() >= 3000)
        {
            SET_CAM_FOV( l_U727, 45 );
            SET_CAM_NEAR_DOF( l_U727, 0.50000000 );
            SET_CAM_FAR_DOF( l_U727, 10.00000000 );
            SET_CAM_POS( l_U727, l_U744[1]._fU0, l_U744[1]._fU4, l_U744[1]._fU8 );
            SET_CAM_ROT( l_U727, l_U760[1]._fU0, l_U760[1]._fU4, l_U760[1]._fU8 );
            SET_CAM_FOV( l_U728, 45 );
            SET_CAM_NEAR_DOF( l_U728, 0.50000000 );
            SET_CAM_FAR_DOF( l_U728, 20.00000000 );
            SET_CAM_POS( l_U728, l_U744[2]._fU0, l_U744[2]._fU4, l_U744[2]._fU8 );
            SET_CAM_ROT( l_U728, l_U760[2]._fU0, l_U760[2]._fU4, l_U760[2]._fU8 );
            SET_CAM_INTERP_STYLE_CORE( l_U729, l_U727, l_U728, 3000, 0 );
            PRINT_NOW( ref l_U701, 7500, 1 );
            SETTIMERA( 0 );
            l_U857++;
        }
        break;
        case 3:
        if (TIMERA() >= 1500)
        {
            if (l_U860)
            {
                if (HAS_MODEL_LOADED( l_U924 ))
                {
                    CREATE_CAR( l_U924, l_U733._fU0, l_U733._fU4, l_U733._fU8, ref l_U707, 1 );
                    SET_CAR_HEADING( l_U707, l_U736 );
                    SET_CAR_ENGINE_ON( l_U707, 1, 1 );
                    CREATE_CHAR_INSIDE_CAR( l_U707, 26, l_U918[l_U930[2]], ref l_U713 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U713 );
                    GIVE_WEAPON_TO_CHAR( l_U713, 7, 30000, 0 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U713, 4 );
                    SET_CHAR_DECISION_MAKER( l_U713, l_U732 );
                    SET_COMBAT_DECISION_MAKER( l_U713, l_U731 );
                    SET_PED_DIES_WHEN_INJURED( l_U713, 1 );
                    CREATE_CHAR_AS_PASSENGER( l_U707, 26, l_U918[l_U930[3]], 0, ref l_U714 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U714 );
                    GIVE_WEAPON_TO_CHAR( l_U714, 7, 30000, 0 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U714, 4 );
                    SET_CHAR_DECISION_MAKER( l_U714, l_U732 );
                    SET_COMBAT_DECISION_MAKER( l_U714, l_U731 );
                    TASK_CAR_DRIVE_TO_COORD( l_U713, l_U707, l_U741._fU0, l_U741._fU4, l_U741._fU8, 20.00000000, 0, 0, 3, 4.00000000, -1 );
                    l_U857++;
                }
                else
                {
                    REQUEST_MODEL( l_U924 );
                }
            }
            else
            {
                l_U857++;
            }
        }
        break;
        case 4:
        if (TIMERA() >= 3500)
        {
            SET_CAM_FOV( l_U727, 45 );
            SET_CAM_NEAR_DOF( l_U727, 10.50000000 );
            SET_CAM_FAR_DOF( l_U727, 15.00000000 );
            SET_CAM_POS( l_U727, l_U744[3]._fU0, l_U744[3]._fU4, l_U744[3]._fU8 );
            SET_CAM_ROT( l_U727, l_U760[3]._fU0, l_U760[3]._fU4, l_U760[3]._fU8 );
            SET_CAM_FOV( l_U728, 45 );
            SET_CAM_NEAR_DOF( l_U728, 0.50000000 );
            SET_CAM_FAR_DOF( l_U728, 35.00000000 );
            SET_CAM_POS( l_U728, l_U744[4]._fU0, l_U744[4]._fU4, l_U744[4]._fU8 );
            SET_CAM_ROT( l_U728, l_U760[4]._fU0, l_U760[4]._fU4, l_U760[4]._fU8 );
            SET_CAM_INTERP_STYLE_CORE( l_U729, l_U727, l_U728, 2000, 0 );
            SETTIMERA( 0 );
            if (DOES_CHAR_EXIST( l_U708[1] ))
            {
                TASK_LOOK_AT_CHAR( sub_12152(), l_U708[1], 2500, 0 );
            }
            l_U857++;
        }
        break;
        case 5:
        if (TIMERA() >= 2500)
        {
            SET_CHAR_HEADING( sub_12152(), l_U664 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_ACTIVE( l_U727, 0 );
            SET_CAM_PROPAGATE( l_U727, 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            l_U876 = 0;
            END_CAM_COMMANDS( ref l_U894 );
            SET_PLAYER_CONTROL_ADVANCED( sub_411(), 1, 1, 1 );
            PRINT( "PRCDRG_32", 7500, 1 );
            SETTIMERA( 0 );
            if (NOT (IS_CHAR_INJURED( l_U713 )))
            {
                SET_CHAR_RELATIONSHIP( l_U713, 5, 0 );
                if (NOT (DOES_BLIP_EXIST( l_U726 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U713, ref l_U726 );
                    TASK_COMBAT( l_U713, sub_12152() );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U714 )))
            {
                SET_CHAR_RELATIONSHIP( l_U714, 5, 0 );
                if (NOT (DOES_BLIP_EXIST( l_U725 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U714, ref l_U725 );
                    TASK_COMBAT( l_U714, sub_12152() );
                }
            }
            for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U708[l_U854] )))
                {
                    SET_CHAR_RELATIONSHIP( l_U708[l_U854], 5, 0 );
                    ADD_BLIP_FOR_CHAR( l_U708[l_U854], ref l_U720[l_U854] );
                    OPEN_SEQUENCE_TASK( ref l_U730 );
                    TASK_AIM_GUN_AT_CHAR( 0, sub_12152(), 8000 );
                    TASK_COMBAT( 0, sub_12152() );
                    CLOSE_SEQUENCE_TASK( l_U730 );
                    TASK_PERFORM_SEQUENCE( l_U708[l_U854], l_U730 );
                    CLEAR_SEQUENCE_TASK( l_U730 );
                    SAY_AMBIENT_SPEECH( l_U708[l_U854], "GENERIC_FUCK_OFF", 0, 0, 0 );
                }
            }
            SETTIMERA( 0 );
            SET_PED_IS_BLIND_RAGING( sub_12152(), 1 );
            l_U881 = 1;
        }
        break;
    }
    return;
}

int sub_33454()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_39453(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if (fVar3 < 1.50000000)
    {
        return 1;
    }
    return 0;
}

void sub_43539()
{
    l_U887 = 1;
    CREATE_CAR( 2046537925, l_U733._fU0, l_U733._fU4, l_U733._fU8, ref l_U707, 1 );
    SET_CAR_HEADING( l_U707, l_U736 );
    CREATE_CHAR_INSIDE_CAR( l_U707, 26, -183203150, ref l_U713 );
    GIVE_WEAPON_TO_CHAR( l_U713, 7, 30000, 0 );
    SET_CHAR_DECISION_MAKER_TO_DEFAULT( l_U713 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U713 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U713, 3 );
    CREATE_CHAR_AS_PASSENGER( l_U707, 26, -183203150, 0, ref l_U714 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U714, 3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U714 );
    SET_CHAR_DECISION_MAKER_TO_DEFAULT( l_U714 );
    GIVE_WEAPON_TO_CHAR( l_U714, 7, 30000, 0 );
    FORCE_CAR_LIGHTS( l_U707, 2 );
    if (l_U861)
    {
        REQUEST_CAR_RECORDING( l_U856 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U856 )))
        {
            WAIT( 0 );
        }
        if (IS_VEH_DRIVEABLE( l_U707 ))
        {
            START_PLAYBACK_RECORDED_CAR( l_U707, l_U856 );
            SET_PLAYBACK_SPEED( l_U707, 1.50000000 );
        }
    }
    else
    {
        TASK_CAR_DRIVE_TO_COORD( l_U713, l_U707, l_U741._fU0, l_U741._fU4, l_U741._fU8, 20.00000000, 0, -341892653, 3, 4.00000000, -1 );
    }
    if (l_U864)
    {
        for ( l_U854 = 0; l_U854 <= l_U852; l_U854++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U708[l_U854] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U708[l_U854], sub_12152(), 0 ))
                {
                    PRINT_NOW( "PRCDRG_19", 7500, 1 );
                    sub_16234();
                }
            }
        }
    }
    SETTIMERA( 0 );
    return;
}

void sub_46689()
{
    switch (l_U940)
    {
        case 0:
        l_U890 = 1;
        l_U892 = 1;
        SET_WANTED_MULTIPLIER( 0.10000000 );
        GET_DISTANCE_BETWEEN_COORDS_3D( 1459.66600000, 27.70450000, 24.22670000, l_U638._fU0, l_U638._fU4, l_U638._fU8, ref l_U845 );
        if (l_U891)
        {
            l_U844 = l_U845 / 9.40000000;
        }
        else
        {
            l_U844 = l_U845 / 9.10000000;
        }
        l_U844 *= 1000.00000000;
        g_U64758 = ROUND( l_U844 );
        GET_GAME_TIMER( ref l_U849 );
        GET_TIME_OF_DAY( ref l_U848, ref l_U847 );
        l_U846 = g_U64758;
        for ( l_U846 += l_U847 * 2000; l_U846 >= 120000; l_U846 -= 120000 )
        {
            WAIT( 0 );
            l_U848++;
        }
        if (l_U846 < 120000)
        {
            if (l_U846 <= 30000)
            {
                l_U847 = 15;
            }
            else if ((l_U846 <= 60000) AND (l_U846 > 30000))
            {
                l_U847 = 30;
            }
            else if ((l_U846 <= 90000) AND (l_U846 > 60000))
            {
                l_U847 = 45;
            }
            else if ((l_U846 <= 120000) AND (l_U846 > 90000))
            {
                l_U848++;
                l_U847 = 0;
            };;;;
        }
        if ((l_U847 < 10) AND (l_U848 == 24))
        {
            PRINT_WITH_NUMBER( ref l_U676[4], l_U847, 7500, 1 );
        }
        else if ((l_U847 >= 10) AND (l_U848 == 24))
        {
            PRINT_WITH_NUMBER( ref l_U676[5], l_U847, 7500, 1 );
        }
        else if ((l_U847 >= 10) AND (l_U848 >= 10))
        {
            PRINT_WITH_2_NUMBERS( ref l_U676[0], l_U848, l_U847, 7500, 1 );
        }
        else if ((l_U847 < 10) AND (l_U848 < 10))
        {
            PRINT_WITH_2_NUMBERS( ref l_U676[1], l_U848, l_U847, 7500, 1 );
        }
        else if ((l_U847 >= 10) AND (l_U848 < 10))
        {
            PRINT_WITH_2_NUMBERS( ref l_U676[2], l_U848, l_U847, 7500, 1 );
        }
        else if ((l_U847 < 10) AND (l_U848 >= 10))
        {
            PRINT_WITH_2_NUMBERS( ref l_U676[3], l_U848, l_U847, 7500, 1 );
        };;;;;;
        l_U940 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U851 );
        l_U850 = l_U851 - l_U849;
        if (l_U850 > (g_U64758 - 10000))
        {
            if (NOT l_U859)
            {
                PRINT_NOW( "PRCDRG_20", 7500, 1 );
                l_U859 = 1;
            }
        }
        if (NOT l_U866)
        {
            if (CAN_CREATE_RANDOM_CHAR( 1, 0 ))
            {
                CREATE_RANDOM_MALE_CHAR( l_U638._fU0, l_U638._fU4, l_U638._fU8, ref l_U716 );
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U716, 1 );
                SET_CHAR_HEADING( l_U716, l_U662 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U716 );
                SET_CHAR_RELATIONSHIP( l_U716, 1, 0 );
                CLEAR_AREA( l_U638._fU0, l_U638._fU4, l_U638._fU8, 25.00000000, 0 );
                SWITCH_PED_PATHS_OFF( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                ADD_SCENARIO_BLOCKING_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                SET_PED_NON_CREATION_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                CLEAR_AREA_OF_CHARS( l_U638._fU0, l_U638._fU4, l_U638._fU8, 50 );
                SET_CAR_GENERATORS_ACTIVE_IN_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40, 0 );
                l_U866 = 1;
            }
            else
            {
                REQUEST_MODEL( 1976502708 );
                if (HAS_MODEL_LOADED( 1976502708 ))
                {
                    CREATE_CHAR( 26, 1976502708, l_U638._fU0, l_U638._fU4, l_U638._fU8, ref l_U716, 1 );
                    SET_CHAR_HEADING( l_U716, l_U662 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U716 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U716, 1 );
                    SET_CHAR_RELATIONSHIP( l_U716, 1, 0 );
                    CLEAR_AREA( l_U638._fU0, l_U638._fU4, l_U638._fU8, 25.00000000, 0 );
                    SWITCH_PED_PATHS_OFF( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                    ADD_SCENARIO_BLOCKING_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                    SET_PED_NON_CREATION_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40 );
                    CLEAR_AREA_OF_CHARS( l_U638._fU0, l_U638._fU4, l_U638._fU8, 50 );
                    SET_CAR_GENERATORS_ACTIVE_IN_AREA( l_U638._fU0 - 40, l_U638._fU4 - 40, l_U638._fU8 - 40, l_U638._fU0 + 40, l_U638._fU4 + 40, l_U638._fU8 + 40, 0 );
                    l_U866 = 1;
                }
            }
        }
        if (sub_48592( l_U848, l_U847 ))
        {
            if (l_U889)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if ((l_U847 < 10) AND (l_U848 == 24))
                    {
                        PRINT_WITH_NUMBER( ref l_U676[4], l_U847, 7500, 1 );
                    }
                    else if ((l_U847 >= 10) AND (l_U848 == 24))
                    {
                        PRINT_WITH_NUMBER( ref l_U676[5], l_U847, 7500, 1 );
                    }
                    else if ((l_U847 >= 10) AND (l_U848 >= 10))
                    {
                        PRINT_WITH_2_NUMBERS( ref l_U676[0], l_U848, l_U847, 7500, 1 );
                    }
                    else if ((l_U847 < 10) AND (l_U848 < 10))
                    {
                        PRINT_WITH_2_NUMBERS( ref l_U676[1], l_U848, l_U847, 7500, 1 );
                    }
                    else if ((l_U847 >= 10) AND (l_U848 < 10))
                    {
                        PRINT_WITH_2_NUMBERS( ref l_U676[2], l_U848, l_U847, 7500, 1 );
                    }
                    else if ((l_U847 < 10) AND (l_U848 >= 10))
                    {
                        PRINT_WITH_2_NUMBERS( ref l_U676[3], l_U848, l_U847, 7500, 1 );
                    };;;;;;
                    l_U889 = 0;
                }
            }
            if (l_U866)
            {
                if (NOT (IS_CHAR_INJURED( l_U716 )))
                {
                    if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U716, sub_12152(), 0 )))
                    {
                        if (NOT l_U878)
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U716, 20, 20, 0 )) AND (IS_CHAR_ON_SCREEN( l_U716 )))
                            {
                                l_U878 = 1;
                            }
                        }
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_411(), 0 )))
                        {
                            if (NOT l_U868)
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U718 )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U669._fU0, l_U669._fU4, l_U669._fU8, ref l_U718 );
                                    if (l_U867)
                                    {
                                        if (NOT (DOES_BLIP_EXIST( l_U719 )))
                                        {
                                            ADD_BLIP_FOR_COORD( l_U641._fU0, l_U641._fU4, l_U641._fU8, ref l_U719 );
                                            SET_ROUTE( l_U719, 1 );
                                            CHANGE_BLIP_SCALE( l_U719, 0.00000000 );
                                        }
                                    }
                                    else
                                    {
                                        SET_ROUTE( l_U718, 1 );
                                    }
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        if ((l_U847 < 10) AND (l_U848 == 24))
                                        {
                                            PRINT_WITH_NUMBER_NOW( ref l_U676[4], l_U847, 7500, 1 );
                                        }
                                        else if ((l_U847 >= 10) AND (l_U848 == 24))
                                        {
                                            PRINT_WITH_NUMBER_NOW( ref l_U676[5], l_U847, 7500, 1 );
                                        }
                                        else if ((l_U847 >= 10) AND (l_U848 >= 10))
                                        {
                                            PRINT_WITH_2_NUMBERS_NOW( ref l_U676[0], l_U848, l_U847, 7500, 1 );
                                        }
                                        else if ((l_U847 < 10) AND (l_U848 < 10))
                                        {
                                            PRINT_WITH_2_NUMBERS_NOW( ref l_U676[1], l_U848, l_U847, 7500, 1 );
                                        }
                                        else if ((l_U847 >= 10) AND (l_U848 < 10))
                                        {
                                            PRINT_WITH_2_NUMBERS_NOW( ref l_U676[2], l_U848, l_U847, 7500, 1 );
                                        }
                                        else if ((l_U847 < 10) AND (l_U848 >= 10))
                                        {
                                            PRINT_WITH_2_NUMBERS_NOW( ref l_U676[3], l_U848, l_U847, 7500, 1 );
                                        };;;;;;
                                    }
                                    else if (NOT l_U890)
                                    {
                                        l_U889 = 1;
                                    }
                                    l_U890 = 0;
                                    l_U868 = 1;
                                    l_U869 = 0;
                                }
                            }
                            if ((g_U64758 - l_U850) < 10000)
                            {
                                if (NOT l_U859)
                                {
                                    PRINT_NOW( "PRCDRG_20", 7500, 1 );
                                    l_U859 = 1;
                                }
                            }
                            if (NOT l_U883)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U638._fU0, l_U638._fU4, l_U638._fU8, 150.00000000, 150.00000000, 150.00000000, 0 ))
                                {
                                    CLEAR_AREA_OF_CHARS( l_U638._fU0, l_U638._fU4, l_U638._fU8, 100 );
                                    l_U883 = 1;
                                }
                            }
                            if (NOT l_U886)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_12152(), l_U669._fU0, l_U669._fU4, l_U669._fU8, 6.50000000, 6.50000000, 6.50000000, 0 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U716 )))
                                    {
                                        TASK_LOOK_AT_CHAR( l_U716, sub_12152(), -1, 0 );
                                        l_U886 = 1;
                                    }
                                }
                            }
                            if (LOCATE_CHAR_IN_CAR_3D( sub_12152(), l_U669._fU0, l_U669._fU4, l_U669._fU8, 6.50000000, 6.50000000, 6.50000000, 0 ))
                            {
                                if (NOT l_U865)
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        GET_CAR_CHAR_IS_USING( sub_12152(), ref l_U706 );
                                        if (NOT (IS_CAR_A_MISSION_CAR( l_U706 )))
                                        {
                                            SET_CAR_AS_MISSION_CAR( l_U706 );
                                        }
                                        PRINT_NOW( "PRCDRG_29", 7500, 1 );
                                        l_U865 = 1;
                                    }
                                }
                            }
                            else
                            {
                                l_U865 = 0;
                            }
                            if (IS_VEH_DRIVEABLE( l_U706 ))
                            {
                                if (LOCATE_CAR_3D( l_U706, l_U669._fU0, l_U669._fU4, l_U669._fU8, 4.00000000, 4.00000000, l_U905, 0 ))
                                {
                                    l_U870 = 1;
                                }
                                else
                                {
                                    l_U870 = 0;
                                }
                            }
                            if (NOT l_U879)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U716 )))
                                {
                                    if (NOT (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U716 )))
                                    {
                                        TASK_START_SCENARIO_AT_POSITION( l_U716, "Scenario_SellingDrugs", l_U638._fU0, l_U638._fU4, l_U638._fU8, l_U662 );
                                        l_U879 = 1;
                                    }
                                }
                            }
                            if (NOT l_U871[0])
                            {
                                if (LOCATE_CHAR_ON_FOOT_3D( sub_12152(), l_U669._fU0, l_U669._fU4, l_U669._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
                                {
                                    if (sub_32997( 1, 1 ))
                                    {
                                        SET_ALL_RANDOM_PEDS_FLEE( sub_411(), 1 );
                                        if (HAVE_ANIMS_LOADED( "missjacob3" ))
                                        {
                                            CLEAR_PRINTS();
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_12152() );
                                            CLEAR_AREA( l_U669._fU0, l_U669._fU4, l_U669._fU8, 20, 1 );
                                            FREEZE_CHAR_POSITION( sub_12152(), 1 );
                                            SET_CHAR_HEADING( sub_12152(), l_U663 );
                                            SET_CHAR_COORDINATES( sub_12152(), l_U666._fU0, l_U666._fU4, l_U666._fU8 );
                                            FREEZE_CHAR_POSITION( sub_12152(), 0 );
                                            if (NOT (IS_CHAR_INJURED( l_U716 )))
                                            {
                                                FREEZE_CHAR_POSITION( l_U716, 1 );
                                                SET_CHAR_HEADING( l_U716, l_U662 );
                                                SET_CHAR_COORDINATES( l_U716, l_U638._fU0, l_U638._fU4, l_U638._fU8 );
                                                FREEZE_CHAR_POSITION( l_U716, 0 );
                                            }
                                            SET_PLAYER_CONTROL_ADVANCED( sub_411(), 0, 1, 1 );
                                            REMOVE_BLIP( l_U718 );
                                            REMOVE_BLIP( l_U719 );
                                            DISPLAY_RADAR( 0 );
                                            DISPLAY_HUD( 0 );
                                            BEGIN_CAM_COMMANDS( ref l_U894 );
                                            l_U876 = 1;
                                            CREATE_CAM( 14, ref l_U727 );
                                            CREATE_CAM( 14, ref l_U728 );
                                            CREATE_CAM( 3, ref l_U729 );
                                            SET_CAM_FOV( l_U727, 44.10000000 );
                                            SET_CAM_NEAR_DOF( l_U727, 17.00000000 );
                                            SET_CAM_FAR_DOF( l_U727, 80.00000000 );
                                            SET_CAM_POS( l_U727, l_U776._fU0, l_U776._fU4, l_U776._fU8 );
                                            SET_CAM_ROT( l_U727, l_U779._fU0, l_U779._fU4, l_U779._fU8 );
                                            SET_CAM_FOV( l_U728, 35.10006000 );
                                            SET_CAM_NEAR_DOF( l_U728, 17.00000000 );
                                            SET_CAM_FAR_DOF( l_U728, 80.00000000 );
                                            SET_CAM_POS( l_U728, l_U776._fU0, l_U776._fU4, l_U776._fU8 );
                                            SET_CAM_ROT( l_U728, l_U779._fU0, l_U779._fU4, l_U779._fU8 );
                                            SET_CAM_ACTIVE( l_U727, 1 );
                                            SET_CAM_PROPAGATE( l_U727, 1 );
                                            SET_CAM_ACTIVE( l_U728, 1 );
                                            SET_CAM_PROPAGATE( l_U728, 1 );
                                            SET_CAM_ACTIVE( l_U729, 1 );
                                            SET_CAM_PROPAGATE( l_U729, 1 );
                                            SET_CAM_INTERP_STYLE_CORE( l_U729, l_U727, l_U728, 3500, 0 );
                                            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 1 );
                                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U706 );
                                            if (IS_VEH_DRIVEABLE( l_U706 ))
                                            {
                                                if (LOCATE_CAR_3D( l_U706, l_U669._fU0, l_U669._fU4, l_U669._fU8, 4.00000000, 4.00000000, l_U905, 0 ))
                                                {
                                                    SET_CAR_COORDINATES( l_U706, l_U840._fU0, l_U840._fU4, l_U840._fU8 );
                                                    SET_CAR_HEADING( l_U706, l_U843 );
                                                }
                                            }
                                            if (NOT (IS_CHAR_INJURED( l_U716 )))
                                            {
                                                TASK_PLAY_ANIM( l_U716, "Drugs_buy", "missjacob3", 1000, 0, 0, 0, 0, 0 );
                                            }
                                            TASK_PLAY_ANIM( sub_12152(), "Drugs_deal", "missjacob3", 1000, 0, 0, 0, 0, 0 );
                                            while (NOT (IS_CHAR_PLAYING_ANIM( sub_12152(), "missjacob3", "Drugs_deal" )))
                                            {
                                                WAIT( 0 );
                                            }
                                            while (IS_CHAR_PLAYING_ANIM( sub_12152(), "missjacob3", "Drugs_deal" ))
                                            {
                                                WAIT( 0 );
                                            }
                                            SET_GAME_CAM_HEADING( 0.00000000 );
                                            SET_CAM_ACTIVE( l_U727, 0 );
                                            SET_CAM_PROPAGATE( l_U727, 0 );
                                            SET_WIDESCREEN_BORDERS( 0 );
                                            DISPLAY_RADAR( 1 );
                                            DISPLAY_HUD( 1 );
                                            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 0 );
                                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                            l_U876 = 0;
                                            END_CAM_COMMANDS( ref l_U894 );
                                            SET_PLAYER_CONTROL_ADVANCED( sub_411(), 1, 1, 1 );
                                            l_U871[0] = 1;
                                            sub_17635();
                                        }
                                        else
                                        {
                                            REQUEST_ANIMS( "missjacob3" );
                                        }
                                    }
                                }
                            }
                        }
                        else if (NOT l_U869)
                        {
                            if (l_U867)
                            {
                                REMOVE_BLIP( l_U719 );
                            }
                            REMOVE_BLIP( l_U718 );
                            PRINT_NOW( "PRCDRG_26", 7500, 1 );
                            l_U869 = 1;
                            l_U868 = 0;
                        }
                    }
                    else
                    {
                        GET_CAR_CHAR_IS_USING( sub_12152(), ref l_U705 );
                        if (IS_CHAR_IN_ANY_CAR( sub_12152() ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U705 ))
                            {
                                if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U716, l_U705 ))
                                {
                                    if (IS_CHAR_INJURED( l_U716 ))
                                    {
                                        PRINT_NOW( "PRCDRG_19", 7500, 1 );
                                        REMOVE_BLIP( l_U718 );
                                        REMOVE_BLIP( l_U719 );
                                        sub_16234();
                                    }
                                }
                            }
                        }
                        else
                        {
                            PRINT_NOW( "PRCDRG_19", 7500, 1 );
                            REMOVE_BLIP( l_U718 );
                            REMOVE_BLIP( l_U719 );
                            sub_16234();
                        }
                    }
                }
                else
                {
                    PRINT_NOW( "PRCDRG_30", 7500, 1 );
                    REMOVE_BLIP( l_U718 );
                    REMOVE_BLIP( l_U719 );
                    sub_16234();
                }
            }
        }
        else if (l_U866)
        {
            if (NOT (IS_CHAR_DEAD( l_U716 )))
            {
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U716, sub_12152(), 0 )))
                {
                    if (NOT l_U878)
                    {
                        PRINT_NOW( "PRCDRG_22", 7500, 1 );
                        REMOVE_BLIP( l_U718 );
                        REMOVE_BLIP( l_U719 );
                        sub_16234();
                    }
                    else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_12152(), l_U716, 20, 20, 0 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U716 ))))
                    {
                        PRINT_NOW( "PRCDRG_22", 7500, 1 );
                        REMOVE_BLIP( l_U718 );
                        REMOVE_BLIP( l_U719 );
                        sub_16234();
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_12152(), l_U669._fU0, l_U669._fU4, l_U669._fU8, 6.50000000, 6.50000000, 6.50000000, 0 ))
                    {
                        if (NOT l_U865)
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                GET_CAR_CHAR_IS_USING( sub_12152(), ref l_U706 );
                                if (NOT (IS_CAR_A_MISSION_CAR( l_U706 )))
                                {
                                    SET_CAR_AS_MISSION_CAR( l_U706 );
                                }
                                PRINT_NOW( "PRCDRG_29", 7500, 1 );
                                l_U865 = 1;
                            }
                        }
                    }
                    else
                    {
                        l_U865 = 0;
                    }
                    if (IS_VEH_DRIVEABLE( l_U706 ))
                    {
                        if (LOCATE_CAR_3D( l_U706, l_U669._fU0, l_U669._fU4, l_U669._fU8, 4.00000000, 4.00000000, l_U905, 0 ))
                        {
                            l_U870 = 1;
                        }
                        else
                        {
                            l_U870 = 0;
                        }
                    }
                    if (NOT l_U879)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U716 )))
                        {
                            if (NOT (IS_CHAR_WAITING_FOR_WORLD_COLLISION( l_U716 )))
                            {
                                TASK_START_SCENARIO_AT_POSITION( l_U716, "Scenario_SellingDrugs", l_U638._fU0, l_U638._fU4, l_U638._fU8, l_U662 );
                                l_U879 = 1;
                            }
                        }
                    }
                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_411(), 0 )))
                    {
                        if (NOT l_U868)
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U718 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U669._fU0, l_U669._fU4, l_U669._fU8, ref l_U718 );
                                if (l_U867)
                                {
                                    if (NOT (DOES_BLIP_EXIST( l_U719 )))
                                    {
                                        ADD_BLIP_FOR_COORD( l_U641._fU0, l_U641._fU4, l_U641._fU8, ref l_U719 );
                                        SET_ROUTE( l_U719, 1 );
                                        CHANGE_BLIP_SCALE( l_U719, 0.00000000 );
                                    }
                                }
                                else
                                {
                                    SET_ROUTE( l_U718, 1 );
                                }
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if ((l_U847 < 10) AND (l_U848 == 24))
                                    {
                                        PRINT_WITH_NUMBER_NOW( ref l_U676[4], l_U847, 7500, 1 );
                                    }
                                    else if ((l_U847 >= 10) AND (l_U848 == 24))
                                    {
                                        PRINT_WITH_NUMBER_NOW( ref l_U676[5], l_U847, 7500, 1 );
                                    }
                                    else if ((l_U847 >= 10) AND (l_U848 >= 10))
                                    {
                                        PRINT_WITH_2_NUMBERS_NOW( ref l_U676[0], l_U848, l_U847, 7500, 1 );
                                    }
                                    else if ((l_U847 < 10) AND (l_U848 < 10))
                                    {
                                        PRINT_WITH_2_NUMBERS_NOW( ref l_U676[1], l_U848, l_U847, 7500, 1 );
                                    }
                                    else if ((l_U847 >= 10) AND (l_U848 < 10))
                                    {
                                        PRINT_WITH_2_NUMBERS_NOW( ref l_U676[2], l_U848, l_U847, 7500, 1 );
                                    }
                                    else if ((l_U847 < 10) AND (l_U848 >= 10))
                                    {
                                        PRINT_WITH_2_NUMBERS_NOW( ref l_U676[3], l_U848, l_U847, 7500, 1 );
                                    };;;;;;
                                }
                                else if (NOT l_U890)
                                {
                                    l_U889 = 1;
                                }
                                l_U868 = 1;
                                l_U869 = 0;
                            }
                        }
                        if (NOT l_U871[0])
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_12152(), l_U669._fU0, l_U669._fU4, l_U669._fU8, 1.60000000, 1.60000000, 1.60000000, 1 ))
                            {
                                if (HAVE_ANIMS_LOADED( "missjacob3" ))
                                {
                                    if (sub_32997( 1, 1 ))
                                    {
                                        SET_ALL_RANDOM_PEDS_FLEE( sub_411(), 1 );
                                        if (NOT (IS_CHAR_INJURED( l_U716 )))
                                        {
                                            SAY_AMBIENT_SPEECH( l_U716, "SHIT", 1, 1, 0 );
                                        }
                                        CLEAR_PRINTS();
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_12152() );
                                        CLEAR_AREA( l_U669._fU0, l_U669._fU4, l_U669._fU8, 20, 1 );
                                        FREEZE_CHAR_POSITION( sub_12152(), 1 );
                                        SET_CHAR_HEADING( sub_12152(), l_U663 );
                                        SET_CHAR_COORDINATES( sub_12152(), l_U666._fU0, l_U666._fU4, l_U666._fU8 );
                                        FREEZE_CHAR_POSITION( sub_12152(), 0 );
                                        if (NOT (IS_CHAR_INJURED( l_U716 )))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U716 );
                                            FREEZE_CHAR_POSITION( l_U716, 1 );
                                            SET_CHAR_HEADING( l_U716, l_U662 );
                                            SET_CHAR_COORDINATES( l_U716, l_U638._fU0, l_U638._fU4, l_U638._fU8 );
                                            FREEZE_CHAR_POSITION( l_U716, 0 );
                                        }
                                        SET_PLAYER_CONTROL_ADVANCED( sub_411(), 0, 1, 1 );
                                        REMOVE_BLIP( l_U718 );
                                        REMOVE_BLIP( l_U719 );
                                        DISPLAY_RADAR( 0 );
                                        DISPLAY_HUD( 0 );
                                        BEGIN_CAM_COMMANDS( ref l_U894 );
                                        l_U876 = 1;
                                        CREATE_CAM( 14, ref l_U727 );
                                        CREATE_CAM( 14, ref l_U728 );
                                        CREATE_CAM( 3, ref l_U729 );
                                        SET_CAM_FOV( l_U727, 44.10000000 );
                                        SET_CAM_NEAR_DOF( l_U727, 17.00000000 );
                                        SET_CAM_FAR_DOF( l_U727, 80.00000000 );
                                        SET_CAM_POS( l_U727, l_U776._fU0, l_U776._fU4, l_U776._fU8 );
                                        SET_CAM_ROT( l_U727, l_U779._fU0, l_U779._fU4, l_U779._fU8 );
                                        SET_CAM_FOV( l_U728, 35.10006000 );
                                        SET_CAM_NEAR_DOF( l_U728, 17.00000000 );
                                        SET_CAM_FAR_DOF( l_U728, 80.00000000 );
                                        SET_CAM_POS( l_U728, l_U776._fU0, l_U776._fU4, l_U776._fU8 );
                                        SET_CAM_ROT( l_U728, l_U779._fU0, l_U779._fU4, l_U779._fU8 );
                                        SET_CAM_ACTIVE( l_U727, 1 );
                                        SET_CAM_PROPAGATE( l_U727, 1 );
                                        SET_CAM_ACTIVE( l_U728, 1 );
                                        SET_CAM_PROPAGATE( l_U728, 1 );
                                        SET_CAM_ACTIVE( l_U729, 1 );
                                        SET_CAM_PROPAGATE( l_U729, 1 );
                                        SET_CAM_INTERP_STYLE_CORE( l_U729, l_U727, l_U728, 3500, 0 );
                                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 1 );
                                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U706 );
                                        if (IS_VEH_DRIVEABLE( l_U706 ))
                                        {
                                            if (LOCATE_CAR_3D( l_U706, l_U669._fU0, l_U669._fU4, l_U669._fU8, 4.00000000, 4.00000000, l_U905, 0 ))
                                            {
                                                SET_CAR_COORDINATES( l_U706, l_U840._fU0, l_U840._fU4, l_U840._fU8 );
                                                SET_CAR_HEADING( l_U706, l_U843 );
                                            }
                                        }
                                        if (NOT (IS_CHAR_INJURED( l_U716 )))
                                        {
                                            TASK_PLAY_ANIM( l_U716, "Drugs_buy", "missjacob3", 1000, 0, 0, 0, 0, 0 );
                                        }
                                        TASK_PLAY_ANIM( sub_12152(), "Drugs_deal", "missjacob3", 1000, 0, 0, 0, 0, 0 );
                                        while (NOT (IS_CHAR_PLAYING_ANIM( sub_12152(), "missjacob3", "Drugs_deal" )))
                                        {
                                            WAIT( 0 );
                                        }
                                        while (IS_CHAR_PLAYING_ANIM( sub_12152(), "missjacob3", "Drugs_deal" ))
                                        {
                                            WAIT( 0 );
                                        }
                                        SET_GAME_CAM_HEADING( 0.00000000 );
                                        SET_CAM_ACTIVE( l_U727, 0 );
                                        SET_CAM_PROPAGATE( l_U727, 0 );
                                        SET_WIDESCREEN_BORDERS( 0 );
                                        DISPLAY_RADAR( 1 );
                                        DISPLAY_HUD( 1 );
                                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_12152(), 0 );
                                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                        l_U876 = 0;
                                        END_CAM_COMMANDS( ref l_U894 );
                                        SET_PLAYER_CONTROL_ADVANCED( sub_411(), 1, 1, 1 );
                                        sub_17635();
                                        l_U871[0] = 1;
                                    }
                                }
                                else
                                {
                                    REQUEST_ANIMS( "missjacob3" );
                                }
                            }
                        }
                    }
                    else if (NOT l_U869)
                    {
                        if (l_U867)
                        {
                            REMOVE_BLIP( l_U719 );
                        }
                        REMOVE_BLIP( l_U718 );
                        PRINT_NOW( "PRCDRG_26", 7500, 1 );
                        l_U869 = 1;
                        l_U868 = 0;
                    };;;
                }
                else
                {
                    PRINT_NOW( "PRCDRG_19", 7500, 1 );
                    REMOVE_BLIP( l_U718 );
                    REMOVE_BLIP( l_U719 );
                    sub_16234();
                }
            }
            else
            {
                PRINT_NOW( "PRCDRG_30", 7500, 1 );
                REMOVE_BLIP( l_U718 );
                REMOVE_BLIP( l_U719 );
                sub_16234();
            }
        }
        else
        {
            PRINT_NOW( "PRCDRG_22", 7500, 1 );
            REMOVE_BLIP( l_U718 );
            REMOVE_BLIP( l_U719 );
            sub_16234();
        }
        break;
    }
    return;
}

int sub_48592(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    GET_TIME_OF_DAY( ref iVar4, ref iVar5 );
    if (iVar4 == iParam0)
    {
        if (iVar5 > iParam1)
        {
            return 0;
        }
    }
    return 1;
}

