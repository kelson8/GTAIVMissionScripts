void main()
{
    l_U0 = 0;
    l_U15 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U18 = GET_CURRENT_LANGUAGE();
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    if (l_U19._fU64[0] == 0)
    {
        l_U0 = 1;
        LOAD_ADDITIONAL_TEXT( "LOVEMTF", 1 );
    }
    else
    {
        LOAD_ADDITIONAL_TEXT( "LOVEMTM", 1 );
    }
    l_U1 = l_U19._fU64[1];
    sub_117();
    sub_339();
    sub_1810( ref l_U19._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        if (sub_2133( ref l_U18 ))
        {
            sub_339();
            sub_1810( ref l_U19._fU0, 1, 1 );
        }
        switch (g_U854._fU12)
        {
            case 1:
            if (l_U0)
            {
                g_U1403[l_U1] = 1;
            }
            else
            {
                g_U1416[l_U1] = 1;
            }
            sub_339();
            RELOAD_WEB_PAGE( g_U860._fU4 );
            break;
            default:
        }
    }
    sub_2288();
    g_U860._fU16 = 0;
    return;
}

void sub_117()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT l_U15)
    {
        if (l_U0)
        {
            l_U16 = LOAD_TXD( "WebDatingFemales" );
        }
        else
        {
            l_U16 = LOAD_TXD( "WebDatingMales" );
        }
        sub_221( ref uVar2, "fullFace", l_U1, -1, -1 );
        l_U17 = GET_TEXTURE( l_U16, ref uVar2 );
        l_U15 = 1;
    }
    return;
}

void sub_221(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_339()
{
    char[16] cVar2;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    char[32] cVar10;

    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    if (l_U0)
    {
        StrCopy( ref cVar2, "LM_F_", 16 );
        StrCopy( ref cVar10, "WebDatingFemales", 32 );
    }
    else
    {
        StrCopy( ref cVar2, "LM_M_", 16 );
        StrCopy( ref cVar10, "WebDatingMales", 32 );
    }
    l_U2[0] = CREATE_HTML_SCRIPT_OBJECT( "profilePhoto" );
    sub_221( ref uVar6, "fullFace", l_U1, -1, -1 );
    sub_499( ref l_U2[0], ref cVar10, ref uVar6, 164, 189, -1 );
    l_U2[1] = CREATE_HTML_SCRIPT_OBJECT( "profileUser" );
    sub_811( ref uVar6, ref cVar2, "USER", l_U1, -1 );
    sub_893( ref l_U2[1], ref uVar6, -1 );
    l_U2[2] = CREATE_HTML_SCRIPT_OBJECT( "profileAge" );
    sub_811( ref uVar6, ref cVar2, "AGE", l_U1, -1 );
    sub_893( ref l_U2[2], ref uVar6, -1 );
    l_U2[3] = CREATE_HTML_SCRIPT_OBJECT( "profileLoc" );
    sub_811( ref uVar6, ref cVar2, "LOC", l_U1, -1 );
    sub_893( ref l_U2[3], ref uVar6, -1 );
    l_U2[4] = CREATE_HTML_SCRIPT_OBJECT( "profileJob" );
    sub_811( ref uVar6, ref cVar2, "JOB", l_U1, -1 );
    sub_893( ref l_U2[4], ref uVar6, -1 );
    l_U2[5] = CREATE_HTML_SCRIPT_OBJECT( "profileSex" );
    sub_811( ref uVar6, ref cVar2, "SEX", l_U1, -1 );
    sub_893( ref l_U2[5], ref uVar6, -1 );
    l_U2[6] = CREATE_HTML_SCRIPT_OBJECT( "profileBuild" );
    sub_811( ref uVar6, ref cVar2, "BUILD", l_U1, -1 );
    sub_893( ref l_U2[6], ref uVar6, -1 );
    l_U2[7] = CREATE_HTML_SCRIPT_OBJECT( "profileAbout" );
    sub_811( ref uVar6, ref cVar2, "ABOUT", l_U1, -1 );
    sub_1384( ref l_U2[7], ref uVar6 );
    l_U2[8] = CREATE_HTML_SCRIPT_OBJECT( "profileLike" );
    sub_811( ref uVar6, ref cVar2, "LIKES", l_U1, -1 );
    sub_1384( ref l_U2[8], ref uVar6 );
    l_U2[9] = CREATE_HTML_SCRIPT_OBJECT( "profileDislike" );
    sub_811( ref uVar6, ref cVar2, "DISLK", l_U1, -1 );
    sub_1384( ref l_U2[9], ref uVar6 );
    l_U2[10] = CREATE_HTML_SCRIPT_OBJECT( "profileBack" );
    ADD_TO_HTML_SCRIPT_OBJECT( l_U2[10], "<a href="BACK"><text name="WEB_BACK_BUT"/></a>" );
    l_U2[11] = CREATE_HTML_SCRIPT_OBJECT( "profileDate" );
    if (g_U860._fU40 == -1)
    {
        if (l_U0)
        {
            if (NOT g_U1403[l_U1])
            {
                sub_893( ref l_U2[11], "LM_INFO_DATE", 1 );
            }
        }
        else if (NOT g_U1416[l_U1])
        {
            sub_893( ref l_U2[11], "LM_INFO_DATE", 1 );
        }
    }
    return;
}

void sub_499(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_811(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_893(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1384(unknown uParam0, unknown uParam1)
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

void sub_1810(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_1821( uParam1 );
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
    sub_1959();
    return;
}

void sub_1821(boolean bParam0)
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

void sub_1959()
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

int sub_2133(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_2288()
{
    if (l_U15)
    {
        RELEASE_TEXTURE( l_U17 );
        REMOVE_TXD( l_U16 );
        l_U15 = 0;
    }
    return;
}

