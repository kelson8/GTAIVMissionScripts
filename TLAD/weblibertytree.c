void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    char[16] cVar8;
    char[16] cVar12;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    char[64] cVar20;
    char[16] cVar36;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    char[16] cVar50;
    unknown uVar54;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U860._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    switch (GET_CURRENT_EPISODE())
    {
        default:
        StrCopy( ref cVar8, "LCT", 16 );
        ConcatString(ref cVar8, GET_CURRENT_EPISODE(), 16);
        cVar12 = {cVar8};
        ConcatString(ref cVar8, "_LINK_", 16);
        ConcatString(ref cVar8, g_U1454, 16);
        if (DOES_TEXT_LABEL_EXIST( ref cVar8 ))
        {
            StrCopy( ref cVar8, "LBTR", 16 );
            ConcatString(ref cVar8, GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar8, g_U1454, 16);
            l_U2 = 1;
            break;
        }
        case 0:
        StrCopy( ref cVar8, "LIBTR", 16 );
        ConcatString(ref cVar8, g_U1454, 16);
        StrCopy( ref cVar12, "LCT", 16 );
        l_U2 = 0;
        break;
    }
    LOAD_ADDITIONAL_TEXT( ref cVar8, 1 );
    if (l_U2)
    {
        switch (g_U1454)
        {
            case 7:
            uVar6 = LOAD_TXD( "e1:/pc/textures/webNews_222324" );
            StrCopy( ref cVar20, "webNews_222324", 64 );
            break;
            case 10:
            uVar6 = LOAD_TXD( "e1:/pc/textures/webNews_282930" );
            StrCopy( ref cVar20, "webNews_282930", 64 );
            break;
            case 15:
            uVar6 = LOAD_TXD( "e1:/pc/textures/webNews_789" );
            StrCopy( ref cVar20, "webNews_789", 64 );
            break;
            case 16:
            uVar6 = LOAD_TXD( "e1:/pc/textures/webNews_2021" );
            StrCopy( ref cVar20, "webNews_2021", 64 );
            break;
            case 24:
            uVar6 = LOAD_TXD( "e1:/pc/textures/webNews_101112" );
            StrCopy( ref cVar20, "webNews_101112", 64 );
            break;
            case 30:
            uVar6 = LOAD_TXD( "e1:/pc/textures/webNews_131415" );
            StrCopy( ref cVar20, "webNews_131415", 64 );
            break;
        }
        StrCopy( ref cVar36, "lth", 16 );
    }
    else
    {
        StrCopy( ref cVar20, "webLCTNews_", 64 );
        ConcatString(ref cVar20, g_U1454 / 5, 64);
        sub_766( ref cVar36, "homePhoto", g_U1454, -1, -1 );
        uVar6 = LOAD_TXD( ref cVar20 );
    }
    uVar7 = GET_TEXTURE( uVar6, ref cVar36 );
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "home_news_photo" );
    sub_929( ref uVar2, ref cVar20, ref cVar36, 176, 176, g_U1454 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "home_news_info" );
    if ((sub_1232( g_U1454 )) < 2)
    {
        sub_1299( ref uVar3, "titexclusive.jpg", -1, 128, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( uVar3, "<br/><br/>" );
    }
    uVar16 = {cVar12};
    ConcatString(ref uVar16, "_HEAD", 16);
    sub_766( ref cVar8, ref uVar16, g_U1454, -1, -1 );
    sub_1600( ref uVar3, ref cVar8, -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar3, "<br/><br/>" );
    uVar16 = {cVar12};
    ConcatString(ref uVar16, "_SUM", 16);
    sub_766( ref cVar8, ref uVar16, g_U1454, -1, -1 );
    sub_1600( ref uVar3, ref cVar8, -1 );
    sub_1846( ref uVar4, "advert_medium_0", 3, 0 );
    if (NOT (sub_2668( 0, ref uVar5, g_U1454, 3, 1 )))
    {
        sub_1846( ref uVar5, "quick_link_Table", 3, 1 );
    }
    uVar40 = CREATE_HTML_SCRIPT_OBJECT( "LCPD_blotter" );
    uVar41 = LOAD_TXD( "webLCPDblotter" );
    sub_766( ref uVar42, "policemap", GET_CURRENT_DAY_OF_WEEK(), -1, -1 );
    uVar46 = GET_TEXTURE( uVar41, ref uVar42 );
    sub_4970( ref uVar40, "webLCPDblotter", ref uVar42, 176, 146, "www.libertycitypolice.com" );
    uVar48 = CREATE_HTML_SCRIPT_OBJECT( "TV_tonight" );
    uVar49 = LOAD_TXD( "webTVadverts" );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar47 );
    StrCopy( ref cVar50, "tvadvert_", 16 );
    ConcatString(ref cVar50, uVar47, 16);
    uVar54 = GET_TEXTURE( uVar49, ref cVar50 );
    sub_929( ref uVar48, "webTVadverts", ref cVar50, 176, 146, -1 );
    sub_5374( ref l_U3._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        if (g_U854._fU12 != -1)
        {
            sub_5760( ref g_U834, "www.libertytreeonline.com/news.html", g_U854._fU12, -1, -1 );
            g_U833 = 1;
        }
    }
    RELEASE_TEXTURE( uVar7 );
    REMOVE_TXD( uVar6 );
    RELEASE_TEXTURE( uVar46 );
    REMOVE_TXD( uVar41 );
    RELEASE_TEXTURE( uVar54 );
    REMOVE_TXD( uVar49 );
    g_U860._fU16 = 0;
    return;
}

void sub_766(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_929(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
{
    char[16] cVar8;

    string(ref cVar8, iParam5, 16);
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img txd="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" src="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam2 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar8, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar8, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_1232(unknown uParam0)
{
    return GET_BITS_IN_RANGE( g_U1455[uParam0], 0, 8 );
}

void sub_1299(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    string(ref cVar7, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="imgs/" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar7, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar7, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_1600(unknown uParam0, unknown uParam1, int iParam2)
{
    char[16] cVar5;

    string(ref cVar5, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar5 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<text name="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_1846(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U950[uParam3], 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    if (NOT IS_JAPANESE_VERSION())
    {
        uVar10 = GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), GET_FIRST_N_CHARACTERS_OF_STRING( ref cVar6, uVar10 ) );
    }
    else
    {
        ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    string(ref cVar6, g_U950[uParam3], 16);
    switch (uParam2)
    {
        case 0:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="banner" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="512" height="80" border="0"/></a>" );
        break;
        case 1:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="extraLarge" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="404" height="204" border="0"/></a>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="large" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="176" height="352" border="0"/></a>" );
        break;
        case 3:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="medium" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="176" height="176" border="0"/></a>" );
        break;
        case 4:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="small" txd="webAdverts_" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="128" height="204" border="0"/></a>" );
        break;
    }
    return;
}

int sub_2668(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_2748( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_1299( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_2899( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((uVar11[I] == iVar9) || (bVar10))
            {
                if (bVar10)
                {
                    sub_3667( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_4629( "\n adding other stories" );
                }
                else
                {
                    sub_3667( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_4629( "\n just found the story" );
                    bVar10 = true;
                }
                if (iVar8 >= iParam3)
                {
                    I = 0;
                }
            }
        }
    }
    if (iVar8 == 0)
    {
        DELETE_HTML_SCRIPT_OBJECT( (uParam1^) );
        return 0;
    }
    return 1;
}

void sub_2748(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2899(unknown uParam0, unknown uParam1)
{
    int I;
    int J;

    (uParam1^)[0] = 0;
    for ( I = 1; I <= ((uParam1^) - 1); I++ )
    {
        (uParam1^)[I] = -1;
    }
    for ( I = 1; I <= (g_U1455 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1455[I], 21 ))
        {
            (uParam1^)[GET_BITS_IN_RANGE( g_U1455[I], 22, 31 )] = I;
            (uParam1^)[0]++;
        }
    }
    sub_3044( uParam0, uParam1 );
    for ( I = 1; I <= (g_U1455 - 2); I++ )
    {
        if ((uParam1^)[I] == -1)
        {
            for ( J = I + 1; J <= (g_U1455 - 1); J++ )
            {
                if ((uParam1^)[J] != -1)
                {
                    (uParam1^)[I] = (uParam1^)[J];
                    (uParam1^)[I] = -1;
                    (uParam1^)[0]--;
                    J = g_U1455;
                }
            }
        }
    }
    for ( I = (uParam1^) - 1; I >= 1; I += -1 )
    {
        if ((uParam1^)[I] != -1)
        {
            return (uParam1^)[I];
        }
    }
    return 1;
}

int sub_3044(int iParam0, unknown uParam1)
{
    int I;

    if (iParam0 == 0)
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam1^) - 1); I++ )
    {
        switch (iParam0)
        {
            case 1:
            switch ((uParam1^)[I])
            {
                case 3:
                case 24:
                case 30:
                case 34:
                case 36:
                case 43:
                case 44:
                case 48:
                (uParam1^)[I] = -1;
                break;
            }
            break;
            case 2:
            switch ((uParam1^)[I])
            {
                case 8:
                case 10:
                case 12:
                case 13:
                case 14:
                case 17:
                case 18:
                case 20:
                case 22:
                case 24:
                case 25:
                case 26:
                case 29:
                case 30:
                case 31:
                case 39:
                case 43:
                case 44:
                (uParam1^)[I] = -1;
                break;
            }
            break;
        }
    }
    return 1;
}

void sub_3667(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    int I;
    int iVar10;
    char[12] cVar11;
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

    array(ref cVar11, 2);
    iVar10 = 0;
    switch (uParam0)
    {
        case 0:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "LCT", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "LCT_", 16 );
        break;
        case 1:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "WZL", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "WZL_", 16 );
        break;
        case 2:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "PBL", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "PBL_", 16 );
        break;
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 0))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_4030( ref uVar20, ref cVar11[I], "LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_4125( uParam0, uParam1, uParam5 );
                sub_1600( uParam1, ref uVar20, iParam2 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 1))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_4030( ref uVar20, ref cVar11[I], "S1LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_4125( uParam0, uParam1, uParam5 );
                sub_1600( uParam1, ref uVar20, iParam2 + 100 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 2))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_4030( ref uVar20, ref cVar11[I], "S2LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_4125( uParam0, uParam1, uParam5 );
                sub_1600( uParam1, ref uVar20, iParam2 + 200 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    return;
}

void sub_4030(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    ConcatString((uParam0^), uParam2, 16);
    if (iParam3 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam3, 16);
        if (iParam4 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam4, 16);
        }
    }
    return;
}

void sub_4125(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_1299( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_1299( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_4629(unknown uParam0)
{
    return;
}

void sub_4970(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    char[16] cVar8;

    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam5 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img txd="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" src="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam2 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar8, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar8, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    return;
}

void sub_5374(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_5385( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U860._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U860._fU4, uParam0 );
        StrCopy( ref g_U860._fU168, uParam0, 64 );
        g_U860._fU164 = 1;
    }
    sub_5523();
    return;
}

void sub_5385(boolean bParam0)
{
    if (bParam0)
    {
        g_U860._fU20 = g_U945;
    }
    else
    {
        g_U860._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U860._fU4, g_U860._fU20 );
    return;
}

void sub_5523()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U860._fU4 );
    if (fVar2 > (g_U944 - (g_U942 * g_U944)))
    {
        g_U860._fU28 = 1;
        g_U860._fU32 = (1.00000000 - g_U942) / fVar2;
        g_U860._fU36 = (1.00000000 - g_U942) * ((g_U944 - (g_U942 * g_U944)) / fVar2);
    }
    else
    {
        g_U860._fU28 = 0;
    }
    return;
}

void sub_5760(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

