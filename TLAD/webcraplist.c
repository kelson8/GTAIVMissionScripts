void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U0 = GET_CURRENT_LANGUAGE();
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U1 = CREATE_HTML_SCRIPT_OBJECT( "alexLink" );
    l_U3 = 0;
    LOAD_ADDITIONAL_TEXT( "CRAPLST", 1 );
    switch (GET_HASH_KEY( ref l_U4._fU0 ))
    {
        case -2105959540: if (g_U1429[0])
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U1, "<br/>" );
            sub_216( ref l_U1, "CRAP_ALEX_2", "www.craplist.net/womenseekingmen13.html" );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U1, "&nbsp;" );
            sub_389( ref l_U1, "CRAP_ALEX_3", -1 );
            ADD_TO_HTML_SCRIPT_OBJECT( l_U1, "<br/><br/>" );
        }
        case 1289764642:
        case -1627874697:
        sub_577( ref l_U4._fU0, 1, 0 );
        g_U860._fU324 = 0;
        TERMINATE_THIS_SCRIPT();
        break;
        case -2117488383:
        sub_899();
        sub_577( ref l_U4._fU0, 1, 0 );
        break;
    }
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        if (sub_1278( ref l_U0 ))
        {
            sub_899();
            sub_577( ref l_U4._fU0, 1, 1 );
        }
        if ((l_U3) AND (g_U854._fU12 == 1))
        {
            g_U1403[0] = 1;
            DELETE_ALL_HTML_SCRIPT_OBJECTS();
            l_U1 = CREATE_HTML_SCRIPT_OBJECT( "alexLink" );
            l_U2 = CREATE_HTML_SCRIPT_OBJECT( "alexInfo" );
            sub_1099( ref l_U2, "CRAP_ALEX_4" );
            RELOAD_WEB_PAGE( g_U860._fU4 );
            l_U3 = 0;
        }
    }
    g_U860._fU16 = 0;
    return;
}

void sub_216(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_389(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_577(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_588( uParam1 );
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
    sub_726();
    return;
}

void sub_588(boolean bParam0)
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

void sub_726()
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

void sub_899()
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U1 = CREATE_HTML_SCRIPT_OBJECT( "alexLink" );
    l_U2 = CREATE_HTML_SCRIPT_OBJECT( "alexInfo" );
    sub_389( ref l_U2, "CRAP_ALEX_4", -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U2, "<br/>" );
    sub_389( ref l_U2, "CRAP_ALEX_4_1", -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U2, "<br/>" );
    sub_389( ref l_U2, "CRAP_ALEX_4_2", -1 );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U2, "<br/>" );
    sub_1099( ref l_U2, "CRAP_ALEX_4_3" );
    if (NOT g_U1403[0])
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U1, "<br/><br/>" );
        sub_389( ref l_U1, "CRAP_ALEX_LINK", 1 );
        l_U3 = 1;
    }
    return;
}

void sub_1099(unknown uParam0, unknown uParam1)
{
    if (NOT IS_JAPANESE_VERSION())
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), GET_STRING_FROM_TEXT_FILE( uParam1 ) );
    }
    else
    {
        ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    }
    return;
}

int sub_1278(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

