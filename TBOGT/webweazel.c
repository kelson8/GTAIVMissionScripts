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
    g_U864._fU324 = 0;
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
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_789" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_789" );
            }
            StrCopy( ref cVar21, "webNews_789", 64 );
            break;
            case 10:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_282930" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_282930" );
            }
            StrCopy( ref cVar21, "webNews_282930", 64 );
            break;
            case 15:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_789" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_789" );
            }
            StrCopy( ref cVar21, "webNews_789", 64 );
            break;
            case 16:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_2021" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_2021" );
            }
            StrCopy( ref cVar21, "webNews_2021", 64 );
            break;
            case 24:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_222324" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_222324" );
            }
            StrCopy( ref cVar21, "webNews_222324", 64 );
            break;
            case 27:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_252627" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_252627" );
            }
            StrCopy( ref cVar21, "webNews_252627", 64 );
            break;
            case 30:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_131415" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_131415" );
            }
            StrCopy( ref cVar21, "webNews_131415", 64 );
            break;
            case 31:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_3132" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_3132" );
            }
            StrCopy( ref cVar21, "webNews_3132", 64 );
            break;
            case 33:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_3334" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_3334" );
            }
            StrCopy( ref cVar21, "webNews_3334", 64 );
            break;
            case 39:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_383940" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_383940" );
            }
            StrCopy( ref cVar21, "webNews_383940", 64 );
            break;
            case 42:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_4142" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_4142" );
            }
            StrCopy( ref cVar21, "webNews_4142", 64 );
            break;
            case 47:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_4647" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_4647" );
            }
            StrCopy( ref cVar21, "webNews_4647", 64 );
            break;
            case 48:
            if (# -NULL-0xc27c84())
            {
                uVar7 = LOAD_TXD( "e2:/xbox360/textures/webNews_131415" );
            }
            else if (# -NULL-0xc27bfa())
            {
                uVar7 = LOAD_TXD( "e2:/pc/textures/webNews_131415" );
            }
            StrCopy( ref cVar21, "webNews_131415", 64 );
            break;
        }
        StrCopy( ref cVar37, "wzl", 16 );
    }
    else
    {
        StrCopy( ref cVar21, "webWZLNews_", 64 );
        ConcatString(ref cVar21, l_U3 / 10, 64);
        sub_2930( ref cVar37, "storyPhoto", l_U3, -1, -1 );
        uVar7 = LOAD_TXD( ref cVar21 );
    }
    uVar8 = GET_TEXTURE( uVar7, ref cVar37 );
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "photo" );
    sub_3082( ref uVar2, ref cVar21, ref cVar37, 256, 128, l_U3 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "secheadline" );
    uVar17 = {cVar13};
    ConcatString(ref uVar17, "_SECH", 16);
    sub_2930( ref cVar9, ref uVar17, l_U3, -1, -1 );
    sub_3415( ref uVar3, ref cVar9, -1 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "headline" );
    uVar17 = {cVar13};
    ConcatString(ref uVar17, "_HEAD", 16);
    sub_2930( ref cVar9, ref uVar17, l_U3, -1, -1 );
    sub_3415( ref uVar3, ref cVar9, -1 );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "summary" );
    uVar17 = {cVar13};
    ConcatString(ref uVar17, "_SUM", 16);
    sub_2930( ref cVar9, ref uVar17, l_U3, -1, -1 );
    sub_3415( ref uVar3, ref cVar9, -1 );
    sub_3719( ref uVar5, "advert_medium_0", 3, 0 );
    GET_CURRENT_WEATHER( ref uVar41 );
    array(ref uVar42, 2);
    uVar42[0] = CREATE_HTML_SCRIPT_OBJECT( "weatherPic" );
    uVar42[1] = CREATE_HTML_SCRIPT_OBJECT( "weatherText" );
    uVar45 = LOAD_TXD( "webWeather" );
    sub_2930( ref cVar9, "weather", uVar41, -1, -1 );
    uVar46 = GET_TEXTURE( uVar45, ref cVar9 );
    sub_3082( ref uVar42[0], "webWeather", ref cVar9, 156, 128, -1 );
    sub_2930( ref cVar9, "WZL_WEATHER", uVar41, -1, -1 );
    sub_3415( ref uVar42[1], ref cVar9, -1 );
    sub_4760( ref l_U55._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        if (g_U858._fU12 != -1)
        {
            sub_5139( ref g_U838, "www.weazelnews.com/news.html", g_U858._fU12, -1, -1 );
            g_U837 = 1;
        }
    }
    RELEASE_TEXTURE( uVar8 );
    REMOVE_TXD( uVar7 );
    RELEASE_TEXTURE( uVar46 );
    REMOVE_TXD( uVar45 );
    g_U864._fU16 = 0;
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
    for ( I = 1; I <= (g_U1459 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1459[I], 21 ))
        {
            (uParam1^)[GET_BITS_IN_RANGE( g_U1459[I], 22, 31 )] = I;
            (uParam1^)[0]++;
        }
    }
    sub_204( uParam0, uParam1 );
    for ( I = 1; I <= (g_U1459 - 2); I++ )
    {
        if ((uParam1^)[I] == -1)
        {
            for ( J = I + 1; J <= (g_U1459 - 1); J++ )
            {
                if ((uParam1^)[J] != -1)
                {
                    (uParam1^)[I] = (uParam1^)[J];
                    (uParam1^)[I] = -1;
                    (uParam1^)[0]--;
                    J = g_U1459;
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
                case 31:
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

void sub_2930(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_3082(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_3415(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_3719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[16] cVar6;
    unknown uVar10;

    (uParam0^) = CREATE_HTML_SCRIPT_OBJECT( uParam1 );
    StrCopy( ref cVar6, "WEBADDRESS_", 16 );
    ConcatString(ref cVar6, g_U954[uParam3], 16);
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
    string(ref cVar6, g_U954[uParam3], 16);
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

void sub_4760(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_4771( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U864._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U864._fU4, uParam0 );
        StrCopy( ref g_U864._fU168, uParam0, 64 );
        g_U864._fU164 = 1;
    }
    sub_4909();
    return;
}

void sub_4771(boolean bParam0)
{
    if (bParam0)
    {
        g_U864._fU20 = g_U949;
    }
    else
    {
        g_U864._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U864._fU4, g_U864._fU20 );
    return;
}

void sub_4909()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U864._fU4 );
    if (fVar2 > (g_U948 - (g_U946 * g_U948)))
    {
        g_U864._fU28 = 1;
        g_U864._fU32 = (1.00000000 - g_U946) / fVar2;
        g_U864._fU36 = (1.00000000 - g_U946) * ((g_U948 - (g_U946 * g_U948)) / fVar2);
    }
    else
    {
        g_U864._fU28 = 0;
    }
    return;
}

void sub_5139(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

