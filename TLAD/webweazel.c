void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    char[16] cVar9;
    char[16] cVar13;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    char[64] cVar21;
    char[16] cVar37;
    unknown uVar41;
    unknown[2] uVar42;
    unknown uVar45;
    unknown uVar46;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U54 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U860._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U2 = sub_59( 1, ref l_U4 );
    l_U3 = l_U2 mod 100;
    switch (GET_CURRENT_EPISODE())
    {
        default:
        StrCopy( ref cVar9, "WZL", 16 );
        ConcatString(ref cVar9, GET_CURRENT_EPISODE(), 16);
        cVar13 = {cVar9};
        ConcatString(ref cVar9, "_LINK_", 16);
        ConcatString(ref cVar9, l_U3, 16);
        if (DOES_TEXT_LABEL_EXIST( ref cVar9 ))
        {
            StrCopy( ref cVar9, "WEZL", 16 );
            ConcatString(ref cVar9, GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar9, l_U3, 16);
            l_U54 = 1;
            break;
        }
        case 0:
        StrCopy( ref cVar9, "WEAZL", 16 );
        ConcatString(ref cVar9, l_U3, 16);
        StrCopy( ref cVar13, "WZL", 16 );
        l_U54 = 0;
        break;
    }
    LOAD_ADDITIONAL_TEXT( ref cVar9, 1 );
    if (l_U54)
    {
        switch (l_U3)
        {
            case 7:
            uVar7 = LOAD_TXD( "e1:/pc/textures/webNews_222324" );
            StrCopy( ref cVar21, "webNews_222324", 64 );
            break;
            case 10:
            uVar7 = LOAD_TXD( "e1:/pc/textures/webNews_282930" );
            StrCopy( ref cVar21, "webNews_282930", 64 );
            break;
            case 15:
            uVar7 = LOAD_TXD( "e1:/pc/textures/webNews_789" );
            StrCopy( ref cVar21, "webNews_789", 64 );
            break;
            case 16:
            uVar7 = LOAD_TXD( "e1:/pc/textures/webNews_2021" );
            StrCopy( ref cVar21, "webNews_2021", 64 );
            break;
            case 24:
            uVar7 = LOAD_TXD( "e1:/pc/textures/webNews_101112" );
            StrCopy( ref cVar21, "webNews_101112", 64 );
            break;
            case 30:
            uVar7 = LOAD_TXD( "e1:/pc/textures/webNews_131415" );
            StrCopy( ref cVar21, "webNews_131415", 64 );
            break;
        }
        StrCopy( ref cVar37, "wzl", 16 );
    }
    else
    {
        StrCopy( ref cVar21, "webWZLNews_", 64 );
        ConcatString(ref cVar21, l_U3 / 10, 64);
        sub_1472( ref cVar37, "storyPhoto", l_U3, -1, -1 );
        uVar7 = LOAD_TXD( ref cVar21 );
    }
    uVar8 = GET_TEXTURE( uVar7, ref cVar37 );
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "photo" );
    sub_1624( ref uVar2, ref cVar21, ref cVar37, 256, 128, l_U3 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "secheadline" );
    uVar17 = {cVar13};
    ConcatString(ref uVar17, "_SECH", 16);
    sub_1472( ref cVar9, ref uVar17, l_U3, -1, -1 );
    sub_1957( ref uVar3, ref cVar9, -1 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "headline" );
    uVar17 = {cVar13};
    ConcatString(ref uVar17, "_HEAD", 16);
    sub_1472( ref cVar9, ref uVar17, l_U3, -1, -1 );
    sub_1957( ref uVar3, ref cVar9, -1 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "summary" );
    uVar17 = {cVar13};
    ConcatString(ref uVar17, "_SUM", 16);
    sub_1472( ref cVar9, ref uVar17, l_U3, -1, -1 );
    sub_1957( ref uVar3, ref cVar9, -1 );
    sub_2261( ref uVar5, "advert_medium_0", 3, 0 );
    GET_CURRENT_WEATHER( ref uVar41 );
    array(ref uVar42, 2);
    uVar42[0] = CREATE_HTML_SCRIPT_OBJECT( "weatherPic" );
    uVar42[1] = CREATE_HTML_SCRIPT_OBJECT( "weatherText" );
    uVar45 = LOAD_TXD( "webWeather" );
    sub_1472( ref cVar9, "weather", uVar41, -1, -1 );
    uVar46 = GET_TEXTURE( uVar45, ref cVar9 );
    sub_1624( ref uVar42[0], "webWeather", ref cVar9, 156, 128, -1 );
    sub_1472( ref cVar9, "WZL_WEATHER", uVar41, -1, -1 );
    sub_1957( ref uVar42[1], ref cVar9, -1 );
    sub_3302( ref l_U55._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        if (g_U854._fU12 != -1)
        {
            sub_3681( ref g_U834, "www.weazelnews.com/news.html", g_U854._fU12, -1, -1 );
            g_U833 = 1;
        }
    }
    RELEASE_TEXTURE( uVar8 );
    REMOVE_TXD( uVar7 );
    RELEASE_TEXTURE( uVar46 );
    REMOVE_TXD( uVar45 );
    g_U860._fU16 = 0;
    return;
}

int sub_59(unknown uParam0, unknown uParam1)
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
    sub_204( uParam0, uParam1 );
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

int sub_204(int iParam0, unknown uParam1)
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

void sub_1472(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_1624(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_1957(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_2261(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_3302(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_3313( uParam1 );
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
    sub_3451();
    return;
}

void sub_3313(boolean bParam0)
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

void sub_3451()
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

void sub_3681(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

