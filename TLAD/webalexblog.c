void main()
{
    int I;
    int iVar3;
    int iVar4;
    int[47] iVar5;
    char[16] cVar53;
    unknown[6] uVar57;
    int iVar64;
    int iVar65;
    int iVar66;
    unknown uVar67;
    boolean bVar68;
    int iVar69;

    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "BLOGALX", 1 );
    LOAD_ADDITIONAL_TEXT( "BLOGAL2", 5 );
    g_U860._fU324 = 0;
    iVar4 = 12;
    array(ref iVar5, 47);
    array(ref uVar57, 6);
    iVar64 = l_U0._fU64[0];
    iVar65 = -1;
    iVar66 = -1;
    for ( I = 0; I <= 11; I++ )
    {
        iVar5[I] = I;
    }
    for ( I = 0; I <= 34; I++ )
    {
        iVar3 = GET_BITS_IN_RANGE( g_U958[I / 5], (I mod 5) * 6, ((I mod 5) * 6) + 5 );
        if (iVar3 != 63)
        {
            iVar5[iVar3 + 12] = I + 12;
            sub_254( "\n Story Number, unlocked in ", I + 12, iVar3 + 12 );
            iVar4++;
        }
    }
    for ( I = 0; I <= (Length(uVar57) - 1); I++ )
    {
        sub_328( ref cVar53, "alexBogText", I, -1, -1 );
        uVar57[I] = CREATE_HTML_SCRIPT_OBJECT( ref cVar53 );
    }
    if (iVar64 == -1)
    {
        iVar64 = iVar4 - 1;
    }
    if (iVar64 < (iVar4 - 1))
    {
        iVar65 = iVar64 + 6;
        if (iVar65 > (iVar4 - 1))
        {
            iVar65 = iVar4 - 1;
        }
    }
    if (iVar64 > 5)
    {
        iVar66 = iVar64 - 6;
    }
    for ( I = 0; I <= 5; I++ )
    {
        if ((iVar64 - I) >= 0)
        {
            bVar68 = true;
            iVar69 = 1;
            ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "<span class="pufont">" );
            if (NOT IS_JAPANESE_VERSION())
            {
                ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], GET_STRING_FROM_TEXT_FILE( "BLOG_UPDATED" ) );
            }
            else
            {
                ADD_STRING_TO_HTML_SCRIPT_OBJECT( uVar57[I], "BLOG_UPDATED" );
            }
            ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "&nbsp;" );
            if ((iVar64 - I) == (iVar4 - 1))
            {
                ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "2&nbsp;" );
                if (NOT IS_JAPANESE_VERSION())
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], GET_STRING_FROM_TEXT_FILE( "BLOG_HOURS" ) );
                }
                else
                {
                    ADD_STRING_TO_HTML_SCRIPT_OBJECT( uVar57[I], "BLOG_HOURS" );
                }
            }
            else
            {
                string(ref cVar53, (iVar4 - (iVar64 - I)) - 1, 16);
                ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], ref cVar53 );
                ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "&nbsp;" );
                if (NOT IS_JAPANESE_VERSION())
                {
                    ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], GET_STRING_FROM_TEXT_FILE( "BLOG_DAYS" ) );
                }
                else
                {
                    ADD_STRING_TO_HTML_SCRIPT_OBJECT( uVar57[I], "BLOG_DAYS" );
                }
            }
            ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "<br/><br/>" );
            ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "</span>" );
            ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "<span class="pifont">" );
            while (bVar68)
            {
                sub_328( ref cVar53, "BLOGALX", iVar5[iVar64 - I], iVar69, -1 );
                if (DOES_TEXT_LABEL_EXIST( ref cVar53 ))
                {
                    sub_1186( ref uVar57[I], ref cVar53, -1 );
                    ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "<br/>" );
                    iVar69++;
                }
                else
                {
                    bVar68 = false;
                }
            }
            ADD_TO_HTML_SCRIPT_OBJECT( uVar57[I], "</span><br/>" );
        }
    }
    uVar67 = CREATE_HTML_SCRIPT_OBJECT( "alexBlogNav" );
    if (iVar65 != -1)
    {
        sub_1506( ref uVar67, "BLOG_NEXT_POSTS", "BACK" );
        if (iVar66 != -1)
        {
            ADD_TO_HTML_SCRIPT_OBJECT( uVar67, "&nbsp;" );
        }
    }
    if (iVar66 != -1)
    {
        sub_1186( ref uVar67, "BLOG_PREV_POSTS", 2 );
    }
    sub_1722( ref l_U0._fU0, 1, 0 );
    while (NOT g_U860._fU16)
    {
        WAIT( 0 );
        switch (g_U854._fU12)
        {
            case 2:
            if (iVar66 != -1)
            {
                sub_2119( ref g_U834, "liberatedwoman.blogsnobs.org", iVar66, -1, -1 );
                g_U833 = 1;
            }
            break;
            default:
        }
    }
    g_U860._fU16 = 0;
    return;
}

void sub_254(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return;
}

void sub_328(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_1186(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1506(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_1722(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_1733( uParam1 );
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
    sub_1871();
    return;
}

void sub_1733(boolean bParam0)
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

void sub_1871()
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

void sub_2119(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

