void main()
{
    l_U85 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U87 = GET_CURRENT_LANGUAGE();
    l_U0 = l_U88._fU64[0];
    if ((l_U0 == -1) || (l_U0 == 0))
    {
        l_U0 = sub_69( 1, ref l_U2 );
    }
    l_U1 = l_U0 mod 100;
    StrCopy( ref l_U73, "WEAZL", 16 );
    ConcatString(ref l_U73, l_U1, 16);
    LOAD_ADDITIONAL_TEXT( ref l_U73, 1 );
    sub_811( 1 );
    sub_3662( ref l_U88._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (sub_3987( ref l_U87 ))
        {
            sub_811( 0 );
            sub_3662( ref l_U88._fU0, 1, 1 );
        }
        if (g_U851._fU12 != -1)
        {
            sub_4117( ref g_U831, "www.weazelnews.com/news.html", g_U851._fU12, -1, -1 );
            g_U830 = 1;
        }
    }
    if (l_U85)
    {
        RELEASE_TEXTURE( l_U54 );
        REMOVE_TXD( l_U53 );
    }
    g_U857._fU16 = 0;
    return;
}

int sub_69(unknown uParam0, unknown uParam1)
{
    int I;
    int J;

    (uParam1^)[0] = 0;
    for ( I = 1; I <= ((uParam1^) - 1); I++ )
    {
        (uParam1^)[I] = -1;
    }
    for ( I = 1; I <= (g_U1452 - 1); I++ )
    {
        if (IS_BIT_SET( g_U1452[I], 21 ))
        {
            (uParam1^)[GET_BITS_IN_RANGE( g_U1452[I], 22, 31 )] = I;
            (uParam1^)[0]++;
        }
    }
    sub_214( uParam0, uParam1 );
    for ( I = 1; I <= (g_U1452 - 2); I++ )
    {
        if ((uParam1^)[I] == -1)
        {
            for ( J = I + 1; J <= (g_U1452 - 1); J++ )
            {
                if ((uParam1^)[J] != -1)
                {
                    (uParam1^)[I] = (uParam1^)[J];
                    (uParam1^)[I] = -1;
                    (uParam1^)[0]--;
                    J = g_U1452;
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

int sub_214(int iParam0, unknown uParam1)
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

void sub_811(boolean bParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    switch (l_U0 / 100)
    {
        case 0:
        StrCopy( ref l_U69, "WZL_", 16 );
        l_U85 = 1;
        break;
        case 1:
        StrCopy( ref l_U69, "WZL_S1", 16 );
        break;
        case 2:
        StrCopy( ref l_U69, "WZL_S2", 16 );
        break;
    }
    l_U68 = 0;
    l_U57 = CREATE_HTML_SCRIPT_OBJECT( "headline" );
    l_U58 = CREATE_HTML_SCRIPT_OBJECT( "sec_headline" );
    l_U59 = CREATE_HTML_SCRIPT_OBJECT( "reporter" );
    l_U60 = CREATE_HTML_SCRIPT_OBJECT( "photo" );
    l_U61[0] = CREATE_HTML_SCRIPT_OBJECT( "story" );
    l_U61[1] = CREATE_HTML_SCRIPT_OBJECT( "newsStory1" );
    l_U61[2] = CREATE_HTML_SCRIPT_OBJECT( "newsStory2" );
    l_U61[3] = CREATE_HTML_SCRIPT_OBJECT( "newsStory3" );
    l_U61[4] = CREATE_HTML_SCRIPT_OBJECT( "newsStory4" );
    l_U61[5] = CREATE_HTML_SCRIPT_OBJECT( "newsStory5" );
    if (NOT (sub_1201( 1, ref l_U56, l_U0, 5, 1 )))
    {
        l_U56 = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    }
    l_U73 = {l_U69};
    ConcatString(ref l_U73, "HEAD_", 16);
    ConcatString(ref l_U73, l_U1, 16);
    sub_2075( ref l_U57, ref l_U73, -1 );
    l_U73 = {l_U69};
    ConcatString(ref l_U73, "SECH_", 16);
    ConcatString(ref l_U73, l_U1, 16);
    sub_2075( ref l_U58, ref l_U73, -1 );
    if (l_U85)
    {
        if (bParam0)
        {
            sub_2832( ref l_U77, "webWZLNews", l_U0 / 10, -1, -1 );
            l_U53 = LOAD_TXD( ref l_U77 );
            sub_2832( ref l_U81, "storyPhoto", l_U0, -1, -1 );
            l_U54 = GET_TEXTURE( l_U53, ref l_U81 );
        }
        sub_3007( ref l_U60, ref l_U77, ref l_U81, 330, 176, -1 );
    }
    l_U73 = {l_U69};
    ConcatString(ref l_U73, "REP_", 16);
    ConcatString(ref l_U73, l_U1, 16);
    sub_2075( ref l_U59, ref l_U73, -1 );
    l_U52 = 1;
    ConcatString(ref l_U69, "PAR_", 16);
    ConcatString(ref l_U69, l_U1, 16);
    ConcatString(ref l_U69, "_", 16);
    l_U73 = {l_U69};
    ConcatString(ref l_U73, l_U52, 16);
    l_U86 = 0;
    if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U73 )))
    {
        ConcatString(ref l_U73, "L", 16);
        l_U86 = 1;
    }
    while (DOES_TEXT_LABEL_EXIST( ref l_U73 ))
    {
        if (l_U86)
        {
            sub_3468( ref l_U61[l_U68], ref l_U73 );
        }
        else
        {
            sub_2075( ref l_U61[l_U68], ref l_U73, -1 );
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U61[l_U68], "<br/><br/>" );
        l_U68++;
        l_U52++;
        l_U73 = {l_U69};
        ConcatString(ref l_U73, l_U52, 16);
        l_U86 = 0;
        if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U73 )))
        {
            ConcatString(ref l_U73, "L", 16);
            l_U86 = 1;
        }
    }
    return;
}

int sub_1201(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_1281( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_1344( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_69( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((uVar11[I] == iVar9) || (bVar10))
            {
                if (bVar10)
                {
                    sub_1746( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_2514( "\n adding other stories" );
                }
                else
                {
                    sub_1746( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_2514( "\n just found the story" );
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

void sub_1281(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1344(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_1746(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    char[16] cVar9;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar9, "LCT_", 16 );
        break;
        case 1:
        StrCopy( ref cVar9, "WZL_", 16 );
        break;
        case 2:
        StrCopy( ref cVar9, "PBL_", 16 );
        break;
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 0))
    {
        sub_1866( ref uVar13, ref cVar9, "LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_1961( uParam0, uParam1, uParam5 );
            sub_2075( uParam1, ref uVar13, iParam2 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 1))
    {
        sub_1866( ref uVar13, ref cVar9, "S1LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_1961( uParam0, uParam1, uParam5 );
            sub_2075( uParam1, ref uVar13, iParam2 + 100 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 2))
    {
        sub_1866( ref uVar13, ref cVar9, "S2LINK", iParam2, -1 );
        if (DOES_TEXT_LABEL_EXIST( ref uVar13 ))
        {
            sub_1961( uParam0, uParam1, uParam5 );
            sub_2075( uParam1, ref uVar13, iParam2 + 200 );
            ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
            (uParam4^)++;
        }
    }
    return;
}

void sub_1866(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_1961(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_1344( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_1344( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_2075(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_2514(unknown uParam0)
{
    return;
}

void sub_2832(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_3007(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_3468(unknown uParam0, unknown uParam1)
{
    ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    return;
}

void sub_3662(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_3673( uParam1 );
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
    sub_3811();
    return;
}

void sub_3673(boolean bParam0)
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

void sub_3811()
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

int sub_3987(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_4117(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

