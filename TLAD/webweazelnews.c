void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U99 = 0;
    l_U102 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    l_U101 = GET_CURRENT_LANGUAGE();
    l_U2 = l_U103._fU64[0];
    if ((l_U2 == -1) || (l_U2 == 0))
    {
        l_U2 = sub_91( 1, ref l_U4 );
    }
    l_U3 = l_U2 mod 100;
    switch (GET_CURRENT_EPISODE())
    {
        default:
        StrCopy( ref l_U75, "WZL", 16 );
        ConcatString(ref l_U75, GET_CURRENT_EPISODE(), 16);
        switch (l_U2 / 100)
        {
            case 0:
            ConcatString(ref l_U75, "_LINK_", 16);
            break;
            case 1:
            ConcatString(ref l_U75, "_S1LINK_", 16);
            break;
            case 2:
            ConcatString(ref l_U75, "_S2LINK_", 16);
            break;
        }
        ConcatString(ref l_U75, l_U3, 16);
        if (DOES_TEXT_LABEL_EXIST( ref l_U75 ))
        {
            StrCopy( ref l_U75, "WEZL", 16 );
            ConcatString(ref l_U75, GET_CURRENT_EPISODE(), 16);
            ConcatString(ref l_U75, l_U3, 16);
            l_U102 = 1;
            break;
        }
        case 0:
        StrCopy( ref l_U75, "WEAZL", 16 );
        ConcatString(ref l_U75, l_U3, 16);
        l_U102 = 0;
        break;
    }
    LOAD_ADDITIONAL_TEXT( ref l_U75, 1 );
    sub_1064( 1 );
    sub_4861( ref l_U103._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        if (sub_5186( ref l_U101 ))
        {
            sub_1064( 0 );
            sub_4861( ref l_U103._fU0, 1, 1 );
        }
        if (g_U854._fU12 != -1)
        {
            sub_5316( ref g_U834, "www.weazelnews.com/news.html", g_U854._fU12, -1, -1 );
            g_U833 = 1;
        }
    }
    if (l_U99)
    {
        RELEASE_TEXTURE( l_U56 );
        REMOVE_TXD( l_U55 );
    }
    g_U860._fU16 = 0;
    return;
}

int sub_91(unknown uParam0, unknown uParam1)
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
    sub_236( uParam0, uParam1 );
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

int sub_236(int iParam0, unknown uParam1)
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

void sub_1064(boolean bParam0)
{
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    StrCopy( ref l_U71, "WZL", 16 );
    if (l_U102)
    {
        ConcatString(ref l_U71, GET_CURRENT_EPISODE(), 16);
    }
    ConcatString(ref l_U71, "_", 16);
    switch (l_U2 / 100)
    {
        case 0:
        l_U99 = 1;
        break;
        case 1:
        ConcatString(ref l_U71, "S1", 16);
        break;
        case 2:
        ConcatString(ref l_U71, "S2", 16);
        break;
    }
    l_U70 = 0;
    l_U59 = CREATE_HTML_SCRIPT_OBJECT( "headline" );
    l_U60 = CREATE_HTML_SCRIPT_OBJECT( "sec_headline" );
    l_U61 = CREATE_HTML_SCRIPT_OBJECT( "reporter" );
    l_U62 = CREATE_HTML_SCRIPT_OBJECT( "photo" );
    l_U63[0] = CREATE_HTML_SCRIPT_OBJECT( "story" );
    l_U63[1] = CREATE_HTML_SCRIPT_OBJECT( "newsStory1" );
    l_U63[2] = CREATE_HTML_SCRIPT_OBJECT( "newsStory2" );
    l_U63[3] = CREATE_HTML_SCRIPT_OBJECT( "newsStory3" );
    l_U63[4] = CREATE_HTML_SCRIPT_OBJECT( "newsStory4" );
    l_U63[5] = CREATE_HTML_SCRIPT_OBJECT( "newsStory5" );
    if (NOT (sub_1478( 1, ref l_U58, l_U2, 5, 1 )))
    {
        l_U58 = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    }
    l_U75 = {l_U71};
    ConcatString(ref l_U75, "HEAD_", 16);
    ConcatString(ref l_U75, l_U3, 16);
    sub_2595( ref l_U59, ref l_U75, -1 );
    l_U75 = {l_U71};
    ConcatString(ref l_U75, "SECH_", 16);
    ConcatString(ref l_U75, l_U3, 16);
    sub_2595( ref l_U60, ref l_U75, -1 );
    if (l_U99)
    {
        if (bParam0)
        {
            if (l_U102)
            {
                switch (l_U3)
                {
                    case 7:
                    l_U55 = LOAD_TXD( "e1:/pc/textures/webNews_222324" );
                    StrCopy( ref l_U79, "webNews_222324", 64 );
                    break;
                    case 10:
                    l_U55 = LOAD_TXD( "e1:/pc/textures/webNews_282930" );
                    StrCopy( ref l_U79, "webNews_282930", 64 );
                    break;
                    case 15:
                    l_U55 = LOAD_TXD( "e1:/pc/textures/webNews_789" );
                    StrCopy( ref l_U79, "webNews_789", 64 );
                    break;
                    case 16:
                    l_U55 = LOAD_TXD( "e1:/pc/textures/webNews_2021" );
                    StrCopy( ref l_U79, "webNews_2021", 64 );
                    break;
                    case 24:
                    l_U55 = LOAD_TXD( "e1:/pc/textures/webNews_101112" );
                    StrCopy( ref l_U79, "webNews_101112", 64 );
                    break;
                    case 30:
                    l_U55 = LOAD_TXD( "e1:/pc/textures/webNews_131415" );
                    StrCopy( ref l_U79, "webNews_131415", 64 );
                    break;
                }
                StrCopy( ref l_U95, "wzl", 16 );
            }
            else
            {
                StrCopy( ref l_U79, "webWZLNews_", 64 );
                ConcatString(ref l_U79, l_U3 / 10, 64);
                sub_3999( ref l_U95, "storyPhoto", l_U3, -1, -1 );
                l_U55 = LOAD_TXD( ref l_U79 );
            }
            l_U56 = GET_TEXTURE( l_U55, ref l_U95 );
        }
        sub_4147( ref l_U62, ref l_U79, ref l_U95, 330, 176, -1 );
    }
    l_U75 = {l_U71};
    ConcatString(ref l_U75, "REP_", 16);
    ConcatString(ref l_U75, l_U3, 16);
    sub_2595( ref l_U61, ref l_U75, -1 );
    l_U54 = 1;
    ConcatString(ref l_U71, "PAR_", 16);
    ConcatString(ref l_U71, l_U3, 16);
    ConcatString(ref l_U71, "_", 16);
    l_U75 = {l_U71};
    ConcatString(ref l_U75, l_U54, 16);
    l_U100 = 0;
    if (NOT l_U102)
    {
        if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U75 )))
        {
            ConcatString(ref l_U75, "L", 16);
            l_U100 = 1;
        }
    }
    while (DOES_TEXT_LABEL_EXIST( ref l_U75 ))
    {
        if (l_U100)
        {
            sub_4619( ref l_U63[l_U70], ref l_U75 );
        }
        else
        {
            sub_2595( ref l_U63[l_U70], ref l_U75, -1 );
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U63[l_U70], "<br/><br/>" );
        l_U70++;
        l_U54++;
        l_U75 = {l_U71};
        ConcatString(ref l_U75, l_U54, 16);
        l_U100 = 0;
        if (NOT l_U102)
        {
            if (NOT (DOES_TEXT_LABEL_EXIST( ref l_U75 )))
            {
                ConcatString(ref l_U75, "L", 16);
                l_U100 = 1;
            }
        }
    }
    return;
}

int sub_1478(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int I;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown[49] uVar11;

    iVar8 = 0;
    iVar9 = iParam2 mod 100;
    (uParam1^) = CREATE_HTML_SCRIPT_OBJECT( "quick_link_table" );
    sub_1558( "\n newsStoryBeingRead is ", iParam2 );
    switch (uParam0)
    {
        case 0:
        sub_1621( uParam1, "titAlso.jpg", -1, 88, 28 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
        break;
        case 2:
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "LATEST NEWS <br/><br/>" );
        break;
    }
    bVar10 = false;
    array(ref uVar11, 49);
    sub_91( uParam0, ref uVar11 );
    for ( I = 48; I >= 1; I += -1 )
    {
        if (uVar11[I] != -1)
        {
            if ((uVar11[I] == iVar9) || (bVar10))
            {
                if (bVar10)
                {
                    sub_2023( uParam0, uParam1, uVar11[I], -1, ref iVar8, uParam4, iParam3 );
                    sub_3139( "\n adding other stories" );
                }
                else
                {
                    sub_2023( uParam0, uParam1, uVar11[I], iParam2 / 100, ref iVar8, uParam4, iParam3 );
                    sub_3139( "\n just found the story" );
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

void sub_1558(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1621(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_2023(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    int I;
    int iVar10;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar11, 2);
    iVar10 = 0;
    switch (uParam0)
    {
        case 0:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "LCT", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "LCT_", 16 );
        break;
        case 1:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "WZL", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "WZL_", 16 );
        break;
        case 2:
        if (GET_CURRENT_EPISODE() != 0)
        {
            StrCopy( ref cVar11[iVar10], "PBL", 16 );
            ConcatString(ref cVar11[iVar10], GET_CURRENT_EPISODE(), 16);
            ConcatString(ref cVar11[iVar10], "_", 16);
            iVar10++;
        }
        StrCopy( ref cVar11[iVar10], "PBL_", 16 );
        break;
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 0))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_2386( ref uVar20, ref cVar11[I], "LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_2481( uParam0, uParam1, uParam5 );
                sub_2595( uParam1, ref uVar20, iParam2 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 1))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_2386( ref uVar20, ref cVar11[I], "S1LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_2481( uParam0, uParam1, uParam5 );
                sub_2595( uParam1, ref uVar20, iParam2 + 100 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    if (((uParam4^) < iParam6) AND (iParam3 != 2))
    {
        for ( I = 0; I <= iVar10; I++ )
        {
            sub_2386( ref uVar20, ref cVar11[I], "S2LINK", iParam2, -1 );
            if (DOES_TEXT_LABEL_EXIST( ref uVar20 ))
            {
                sub_2481( uParam0, uParam1, uParam5 );
                sub_2595( uParam1, ref uVar20, iParam2 + 200 );
                ADD_TO_HTML_SCRIPT_OBJECT( (uParam1^), "<br/><br/>" );
                (uParam4^)++;
                I = iVar10 + 1;
            }
        }
    }
    return;
}

void sub_2386(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4)
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

void sub_2481(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        switch (uParam0)
        {
            case 0:
            sub_1621( uParam1, "arrowBlack.jpg", -1, 16, 16 );
            break;
            case 2:
            sub_1621( uParam1, "arrow.jpg", -1, 16, 16 );
            break;
        }
    }
    return;
}

void sub_2595(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_3139(unknown uParam0)
{
    return;
}

void sub_3999(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_4147(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_4619(unknown uParam0, unknown uParam1)
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

void sub_4861(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_4872( uParam1 );
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
    sub_5010();
    return;
}

void sub_4872(boolean bParam0)
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

void sub_5010()
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

int sub_5186(unknown uParam0)
{
    if ((uParam0^) != GET_CURRENT_LANGUAGE())
    {
        (uParam0^) = GET_CURRENT_LANGUAGE();
        return 1;
    }
    return 0;
}

void sub_5316(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

