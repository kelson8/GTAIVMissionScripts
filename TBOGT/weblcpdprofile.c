void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U16 = GET_CURRENT_LANGUAGE();
    l_U4 = l_U18._fU64[0] / 1000;
    l_U5 = l_U18._fU64[0] mod 1000;
    l_U17 = l_U18._fU64[0];
    switch (l_U4)
    {
        case 0:
        LOAD_ADDITIONAL_TEXT( "LCPDAE", 1 );
        break;
        case 1:
        LOAD_ADDITIONAL_TEXT( "LCPDFJ", 1 );
        break;
        case 2:
        LOAD_ADDITIONAL_TEXT( "LCPDKO", 1 );
        break;
        case 3:
        LOAD_ADDITIONAL_TEXT( "LCPDPU", 1 );
        break;
        case 4:
        LOAD_ADDITIONAL_TEXT( "LCPDVZ", 1 );
        break;
    }
    sub_234();
    sub_2846( ref l_U18._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        if (sub_3169( ref l_U16 ))
        {
            sub_234();
            sub_2846( ref l_U18._fU0, 1, 1 );
        }
    }
    g_U864._fU16 = 0;
    return;
}

void sub_234()
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    l_U6 = CREATE_HTML_SCRIPT_OBJECT( "topBarInfo" );
    if (l_U4 == 0)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/ae.html"><img src="images/butAB1.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/ae.html"><img src="images/butAB0.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    if (l_U4 == 1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/fj.html"><img src="images/butFJ1.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/fj.html"><img src="images/butFJ0.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    if (l_U4 == 2)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/ko.html"><img src="images/butKO1.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/ko.html"><img src="images/butKO0.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    if (l_U4 == 3)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/pu.html"><img src="images/butPU1.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/pu.html"><img src="images/butPU0.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    if (l_U4 == 4)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/vz.html"><img src="images/butVZ1.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U6, "<td width="110" scope="col"><a href="www.libertypolicedepartment.com/vz.html"><img src="images/butVZ0.jpg" width="110" height="33" border="0" /></a></td>" );
    }
    l_U7 = CREATE_HTML_SCRIPT_OBJECT( "surname" );
    sub_2047( ref l_U0, "LCPDSNAME", l_U17, -1, -1 );
    sub_2144( ref l_U7, ref l_U0, -1 );
    l_U8 = CREATE_HTML_SCRIPT_OBJECT( "forename" );
    sub_2047( ref l_U0, "LCPDFNAME", l_U17, -1, -1 );
    sub_2144( ref l_U8, ref l_U0, -1 );
    l_U9 = CREATE_HTML_SCRIPT_OBJECT( "age" );
    sub_2047( ref l_U0, "LCPDAGE", l_U17, -1, -1 );
    sub_2144( ref l_U9, ref l_U0, -1 );
    l_U10 = CREATE_HTML_SCRIPT_OBJECT( "birth" );
    sub_2047( ref l_U0, "LCPDBIRTH", l_U17, -1, -1 );
    sub_2144( ref l_U10, ref l_U0, -1 );
    l_U11 = CREATE_HTML_SCRIPT_OBJECT( "affiliations" );
    sub_2047( ref l_U0, "LCPDAFF", l_U17, -1, -1 );
    if (DOES_TEXT_LABEL_EXIST( ref l_U0 ))
    {
        sub_2144( ref l_U11, ref l_U0, -1 );
    }
    else
    {
        ADD_TO_HTML_SCRIPT_OBJECT( l_U11, "Unknown" );
    }
    l_U12 = CREATE_HTML_SCRIPT_OBJECT( "rapsheet" );
    sub_2047( ref l_U0, "LCPDRAP", l_U17, -1, -1 );
    sub_2601( ref l_U12, ref l_U0 );
    l_U13 = CREATE_HTML_SCRIPT_OBJECT( "notes" );
    sub_2047( ref l_U0, "LCPDNOTES", l_U17, -1, -1 );
    sub_2601( ref l_U13, ref l_U0 );
    l_U15 = CREATE_HTML_SCRIPT_OBJECT( "status" );
    if (l_U5 < 100)
    {
        l_U14 = GET_BITS_IN_RANGE( g_U1509[l_U5 / 16], (l_U5 mod 16) * 2, ((l_U5 mod 16) * 2) + 1 );
        if (l_U14 != 0)
        {
            sub_2047( ref l_U0, "LCPDSTATUS", l_U14, -1, -1 );
            sub_2144( ref l_U15, ref l_U0, -1 );
        }
    }
    return;
}

void sub_2047(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_2144(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_2601(unknown uParam0, unknown uParam1)
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

void sub_2846(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_2857( uParam1 );
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
    sub_2995();
    return;
}

void sub_2857(boolean bParam0)
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

void sub_2995()
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

int sub_3169(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

