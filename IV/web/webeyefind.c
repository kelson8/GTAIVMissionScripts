void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    char[16] cVar6;
    char[16] cVar10;
    char[16] cVar14;
    unknown uVar18;
    unknown uVar19;
    char[16] cVar20;
    unknown uVar24;
    char[16] cVar25;
    unknown[3] uVar29;
    unknown uVar33;
    unknown[3] uVar34;
    char[16] cVar38;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;

    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    g_U857._fU324 = 0;
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "advert_xlarge_0" );
    if (g_U946 != -1)
    {
        iVar5 = g_U946;
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar5 );
    }
    StrCopy( ref cVar10, "eyeAdvert_", 16 );
    ConcatString(ref cVar10, iVar5 / 5, 16);
    StrCopy( ref cVar14, "advert_", 16 );
    ConcatString(ref cVar14, iVar5 mod 5, 16);
    uVar3 = LOAD_TXD( ref cVar10 );
    uVar4 = GET_TEXTURE( uVar3, ref cVar14 );
    StrCopy( ref cVar6, "EYEADDRESS_", 16 );
    ConcatString(ref cVar6, iVar5, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "<a href="" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, GET_STRING_FROM_TEXT_FILE( ref cVar6 ) );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "">" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "<img src="" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, ref cVar14 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "" txd="" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, ref cVar10 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "" width="404" height="204" border="0"/></a>" );
    uVar18 = CREATE_HTML_SCRIPT_OBJECT( "userName" );
    uVar19 = CREATE_HTML_SCRIPT_OBJECT( "totalEmails" );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar18, ref g_U857._fU76 );
    if (g_U857._fU40 == -1)
    {
        string(ref cVar20, sub_437(), 16);
    }
    else
    {
        string(ref cVar20, sub_960(), 16);
    }
    ADD_TO_HTML_SCRIPT_OBJECT( uVar19, ref cVar20 );
    sub_1050();
    uVar24 = CREATE_HTML_SCRIPT_OBJECT( "libTreeLink" );
    StrCopy( ref cVar25, "LIBTR", 16 );
    ConcatString(ref cVar25, g_U1451, 16);
    LOAD_ADDITIONAL_TEXT( ref cVar25, 1 );
    sub_2045( ref cVar25, "LCT_HEAD", g_U1451, -1, -1 );
    sub_2179( ref uVar24, ref cVar25, "www.libertytreeonline.com/news.html" );
    array(ref uVar29, 3);
    uVar29[0] = CREATE_HTML_SCRIPT_OBJECT( "tvAdvert_0" );
    uVar29[1] = CREATE_HTML_SCRIPT_OBJECT( "tvAdvert_1" );
    uVar29[2] = CREATE_HTML_SCRIPT_OBJECT( "tvAdvert_2" );
    uVar33 = LOAD_TXD( "webTVadverts" );
    array(ref uVar34, 3);
    array(ref cVar38, 3);
    switch (GET_CURRENT_DAY_OF_WEEK())
    {
        case 0:
        StrCopy( ref cVar38[0], "tvadvert_9", 16 );
        StrCopy( ref cVar38[1], "tvadvert_5", 16 );
        StrCopy( ref cVar38[2], "tvadvert_2", 16 );
        break;
        case 1:
        StrCopy( ref cVar38[0], "tvadvert_8", 16 );
        StrCopy( ref cVar38[1], "tvadvert_0", 16 );
        StrCopy( ref cVar38[2], "tvadvert_3", 16 );
        break;
        case 2:
        StrCopy( ref cVar38[0], "tvadvert_7", 16 );
        StrCopy( ref cVar38[1], "tvadvert_2", 16 );
        StrCopy( ref cVar38[2], "tvadvert_1", 16 );
        break;
        case 3:
        StrCopy( ref cVar38[0], "tvadvert_9", 16 );
        StrCopy( ref cVar38[1], "tvadvert_0", 16 );
        StrCopy( ref cVar38[2], "tvadvert_2", 16 );
        break;
        case 4:
        StrCopy( ref cVar38[0], "tvadvert_7", 16 );
        StrCopy( ref cVar38[1], "tvadvert_1", 16 );
        StrCopy( ref cVar38[2], "tvadvert_3", 16 );
        break;
        case 5:
        StrCopy( ref cVar38[0], "tvadvert_8", 16 );
        StrCopy( ref cVar38[1], "tvadvert_2", 16 );
        StrCopy( ref cVar38[2], "tvadvert_4", 16 );
        break;
        case 6:
        StrCopy( ref cVar38[0], "tvadvert_8", 16 );
        StrCopy( ref cVar38[1], "tvadvert_6", 16 );
        StrCopy( ref cVar38[2], "tvadvert_1", 16 );
        break;
    }
    uVar34[0] = GET_TEXTURE( uVar33, ref cVar38[0] );
    uVar34[1] = GET_TEXTURE( uVar33, ref cVar38[1] );
    uVar34[2] = GET_TEXTURE( uVar33, ref cVar38[2] );
    sub_3122( ref uVar29[0], "webTVadverts", ref cVar38[0], 128, 105, -1 );
    sub_3122( ref uVar29[1], "webTVadverts", ref cVar38[1], 128, 105, -1 );
    sub_3122( ref uVar29[2], "webTVadverts", ref cVar38[2], 128, 105, -1 );
    sub_3478( ref l_U6._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
    }
    RELEASE_TEXTURE( uVar4 );
    REMOVE_TXD( uVar3 );
    RELEASE_TEXTURE( uVar34[0] );
    RELEASE_TEXTURE( uVar34[1] );
    RELEASE_TEXTURE( uVar34[2] );
    REMOVE_TXD( uVar33 );
    g_U857._fU16 = 0;
    return;
}

void sub_437()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_474( 4, g_U968[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

int sub_474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_960()
{
    int I;
    int Result;

    Result = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if ((sub_474( 4, g_U1369[I] )) == 0)
        {
            Result++;
        }
    }
    return Result;
}

void sub_1050()
{
    sub_1083( ref l_U0[0], "advert_small_0", 4, 0 );
    sub_1083( ref l_U0[1], "advert_small_1", 4, 1 );
    sub_1083( ref l_U0[2], "advert_small_2", 4, 2 );
    sub_1083( ref l_U0[3], "advert_small_3", 4, 3 );
    sub_1083( ref l_U0[4], "advert_small_4", 4, 4 );
    return;
}

void sub_1083(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U947[uParam3], 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar6 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    string(ref cVar6, g_U947[uParam3], 16);
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

void sub_2045(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_2179(unknown uParam0, unknown uParam1, unknown uParam2)
{
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam2 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<text name="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    return;
}

void sub_3122(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_3478(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_3489( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U857._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U857._fU4, uParam0 );
        StrCopy( ref g_U857._fU168, uParam0, 64 );
        g_U857._fU164 = 1;
    }
    sub_3627();
    return;
}

void sub_3489(boolean bParam0)
{
    if (bParam0)
    {
        g_U857._fU20 = g_U942;
    }
    else
    {
        g_U857._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U857._fU4, g_U857._fU20 );
    return;
}

void sub_3627()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U857._fU4 );
    if (fVar2 > (g_U941 - (g_U939 * g_U941)))
    {
        g_U857._fU28 = 1;
        g_U857._fU32 = (1.00000000 - g_U939) / fVar2;
        g_U857._fU36 = (1.00000000 - g_U939) * ((g_U941 - (g_U939 * g_U941)) / fVar2);
    }
    else
    {
        g_U857._fU28 = 0;
    }
    return;
}

