void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U860._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "VIPRING", 1 );
    l_U0 = 0;
    sub_56();
    sub_272( ref l_U15._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        if (g_U854._fU12 > 0)
        {
            sub_663( ref g_U834, "www.vipluxuryringtones.com/purchase.html", 2, g_U854._fU12, -1 );
            g_U833 = 1;
        }
    }
    sub_735();
    g_U860._fU16 = 0;
    return;
}

void sub_56()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT l_U0)
    {
        l_U1 = LOAD_TXD( "webThemesVIP" );
        for ( I = 0; I <= (l_U2 - 1); I++ )
        {
            sub_133( ref uVar3, "webTheme", I + 1, -1, -1 );
            l_U2[I] = GET_TEXTURE( l_U1, ref uVar3 );
        }
        l_U0 = 1;
    }
    return;
}

void sub_133(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_272(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_283( uParam1 );
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
    sub_421();
    return;
}

void sub_283(boolean bParam0)
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

void sub_421()
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

void sub_663(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_735()
{
    int I;

    if (l_U0)
    {
        for ( I = 0; I <= (l_U2 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U2[I] );
        }
        REMOVE_TXD( l_U1 );
        l_U0 = 0;
    }
    return;
}

