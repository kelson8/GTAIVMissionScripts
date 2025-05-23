void main()
{
    l_U0 = 1;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    DO_SCREEN_FADE_IN( 1000 );
    sub_63();
    while (l_U0)
    {
        if (l_U0)
        {
            if (l_U1)
            {
                sub_320();
            }
            if (l_U2)
            {
                sub_465();
            }
            if (l_U3)
            {
                sub_638();
            }
            if (l_U4)
            {
                sub_803();
            }
            if (l_U5)
            {
                sub_863();
            }
            else if (l_U6)
            {
                sub_1162();
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_63()
{
    CREATE_WIDGET_GROUP( "Cutscene Guidelines" );
    ADD_WIDGET_TOGGLE( "Rule of Three Framing", ref l_U1 );
    ADD_WIDGET_TOGGLE( "Display Action Safe Framing", ref l_U2 );
    ADD_WIDGET_TOGGLE( "Display Text Safe Framing", ref l_U3 );
    ADD_WIDGET_TOGGLE( "Display Centre Frame Mark", ref l_U4 );
    ADD_WIDGET_TOGGLE( "16:9 Mode(faked)", ref l_U5 );
    END_WIDGET_GROUP();
    return;
}

void sub_320()
{
    int I;

    for ( I = 1; I <= 2; I++ )
    {
        DRAW_RECT( 0.33000000 * I, 0.50000000, 0.00500000, 1.00000000, 0, 0, 0, 200 );
    }
    for ( I = 1; I <= 2; I++ )
    {
        DRAW_RECT( 0.50000000, 0.33000000 * I, 1.00000000, 0.00500000, 0, 0, 0, 200 );
    }
    return;
}

void sub_465()
{
    DRAW_RECT( 0.05000000, 0.50000000, 0.00250000, 0.90000000, 255, 255, 0, 200 );
    DRAW_RECT( 0.95000000, 0.50000000, 0.00250000, 0.90000000, 255, 255, 0, 200 );
    DRAW_RECT( 0.50000000, 0.05000000, 0.90000000, 0.00250000, 255, 255, 0, 200 );
    DRAW_RECT( 0.50000000, 0.95000000, 0.90000000, 0.00250000, 255, 255, 0, 200 );
    return;
}

void sub_638()
{
    DRAW_RECT( 0.10000000, 0.50000000, 0.00250000, 0.80000000, 0, 255, 0, 200 );
    DRAW_RECT( 0.90000000, 0.50000000, 0.00250000, 0.80000000, 0, 255, 0, 200 );
    DRAW_RECT( 0.50000000, 0.10000000, 0.80000000, 0.00250000, 0, 255, 0, 200 );
    DRAW_RECT( 0.50000000, 0.90000000, 0.80000000, 0.00250000, 0, 255, 0, 200 );
    return;
}

void sub_803()
{
    DRAW_RECT( 0.50000000, 0.50000000, 0.00500000, 0.40000000, 0, 0, 255, 200 );
    return;
}

void sub_863()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    float fVar5;

    fVar4 = -0.50000000;
    fVar5 = 1.50000000;
    if (NOT l_U6)
    {
        while ((fVar5 > 1.00000000) AND (fVar4 < 0.00000000))
        {
            fVar4 += 0.00900000;
            fVar5 -= 0.00900000;
            DRAW_RECT( 0.50000000, fVar4, 1.00000000, 0.36000000, 0, 0, 0, 255 );
            DRAW_RECT( 0.50000000, fVar5, 1.00000000, 0.36000000, 0, 0, 0, 255 );
            WAIT( 12 );
            DRAW_RECT( 0.50000000, fVar4, 1.00000000, 0.36000000, 0, 0, 0, 255 );
            DRAW_RECT( 0.50000000, fVar5, 1.00000000, 0.36000000, 0, 0, 0, 255 );
        }
        l_U6 = 1;
    }
    DRAW_RECT( 0.50000000, 0.00000000, 1.00000000, 0.36000000, 0, 0, 0, 255 );
    DRAW_RECT( 0.50000000, 1.00000000, 1.00000000, 0.36000000, 0, 0, 0, 255 );
    return;
}

void sub_1162()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;
    float fVar5;

    fVar4 = 0.00000000;
    fVar5 = 1.00000000;
    if (l_U6)
    {
        while ((fVar5 < 1.50000000) AND (fVar4 > -0.50000000))
        {
            fVar4 -= 0.00900000;
            fVar5 += 0.00900000;
            DRAW_RECT( 0.50000000, fVar4, 1.00000000, 0.36000000, 0, 0, 0, 255 );
            DRAW_RECT( 0.50000000, fVar5, 1.00000000, 0.36000000, 0, 0, 0, 255 );
            WAIT( 12 );
            DRAW_RECT( 0.50000000, fVar4, 1.00000000, 0.36000000, 0, 0, 0, 255 );
            DRAW_RECT( 0.50000000, fVar5, 1.00000000, 0.36000000, 0, 0, 0, 255 );
        }
        l_U6 = 0;
    }
    return;
}

