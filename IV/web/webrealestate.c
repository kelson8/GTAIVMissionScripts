void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U857._fU324 = 0;
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    if (g_U964)
    {
        sub_90( "www.libertycityrealestate.net/index1.html", 1, 0 );
    }
    else
    {
        sub_90( "www.libertycityrealestate.net", 1, 0 );
    }
    return;
}

void sub_90(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_101( uParam1 );
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
    sub_239();
    return;
}

void sub_101(boolean bParam0)
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

void sub_239()
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

