void main()
{
    l_U6 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    g_U857._fU324 = 0;
    sub_38();
    sub_1054( ref l_U13._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (g_U851._fU12 == 1)
        {
            sub_1433( ref g_U831, "www.love-meet.net/profile.html", l_U0, l_U1, -1 );
            g_U830 = 1;
        }
    }
    sub_1505();
    g_U857._fU16 = 0;
    return;
}

void sub_38()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U0 );
    if (l_U0 == 0)
    {
        LOAD_ADDITIONAL_TEXT( "LOVEMTF", 1 );
        GENERATE_RANDOM_INT_IN_RANGE( 3, 12, ref l_U1 );
    }
    else
    {
        LOAD_ADDITIONAL_TEXT( "LOVEMTM", 1 );
        GENERATE_RANDOM_INT_IN_RANGE( 3, 12, ref l_U1 );
    }
    sub_131();
    l_U2[0] = CREATE_HTML_SCRIPT_OBJECT( "trueLovePic" );
    sub_409( ref l_U2[0], "WebDatingEyes", ref l_U9, 262, 88, 1 );
    l_U2[1] = CREATE_HTML_SCRIPT_OBJECT( "trueLoveQuote" );
    if (l_U0 == 0)
    {
        sub_205( ref uVar2, "LM_F_QUOTE", l_U1, -1, -1 );
    }
    else
    {
        sub_205( ref uVar2, "LM_M_QUOTE", l_U1, -1, -1 );
    }
    sub_780( ref l_U2[1], ref uVar2, -1 );
    l_U2[2] = CREATE_HTML_SCRIPT_OBJECT( "trueLoveUser" );
    if (l_U0 == 0)
    {
        sub_205( ref uVar2, "LM_F_USER", l_U1, -1, -1 );
    }
    else
    {
        sub_205( ref uVar2, "LM_M_USER", l_U1, -1, -1 );
    }
    sub_780( ref l_U2[2], ref uVar2, -1 );
    return;
}

void sub_131()
{
    if (NOT l_U6)
    {
        l_U7 = LOAD_TXD( "WebDatingEyes" );
        if (l_U0 == 0)
        {
            sub_205( ref l_U9, "femaleEyes", l_U1, -1, -1 );
        }
        else
        {
            sub_205( ref l_U9, "maleEyes", l_U1, -1, -1 );
        }
        l_U8 = GET_TEXTURE( l_U7, ref l_U9 );
        l_U6 = 1;
    }
    return;
}

void sub_205(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_409(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_780(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1054(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_1065( uParam1 );
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
    sub_1203();
    return;
}

void sub_1065(boolean bParam0)
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

void sub_1203()
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

void sub_1433(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_1505()
{
    if (l_U6)
    {
        RELEASE_TEXTURE( l_U8 );
        REMOVE_TXD( l_U7 );
        l_U6 = 0;
    }
    return;
}

