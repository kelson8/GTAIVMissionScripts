void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 1;
    l_U72 = 6;
    l_U110 = nil;
    l_U123 = nil;
    l_U141 = 1;
    l_U176 = nil;
    l_U196 = 1;
    l_U272 = 6;
    l_U277 = 0;
    l_U278 = 1;
    l_U279 = 3;
    l_U281 = 0;
    l_U282 = 1;
    l_U283 = 0;
    l_U284 = 0;
    l_U285 = 0;
    while (true)
    {
        WAIT( 0 );
        switch (l_U281)
        {
            case 0:
            sub_192();
            sub_225();
            l_U281 = 1;
            break;
            case 1:
            sub_271();
            g_U2674 = 1;
            HIDE_HUD_AND_RADAR_THIS_FRAME();
            break;
            case 2:
            g_U2674 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_192()
{
    g_U43561 = 0;
    g_U43592 = 0;
    return;
}

void sub_225()
{
    l_U286 = 10000;
    l_U287 = 500;
    return;
}

void sub_271()
{
    if (l_U284 == 1)
    {
        sub_292();
        l_U284 = 0;
    }
    if (g_U43495 == 1)
    {
        if (NOT GET_IS_WIDESCREEN())
        {
            SET_HELP_MESSAGE_BOX_SIZE_F( 0.23000000 );
        }
        while (IS_FRONTEND_FADING())
        {
            WAIT( 0 );
        }
        while (sub_668())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        while (sub_746())
        {
            WAIT( 0 );
        }
        if (sub_891())
        {
            sub_1192();
            if (g_U43495 == 1)
            {
                if (l_U285 == 0)
                {
                    sub_403();
                    sub_1262();
                    sub_1415();
                    GET_GAME_TIMER( ref l_U292 );
                    g_U43561 = 1;
                    l_U285 = 1;
                }
                GET_GAME_TIMER( ref l_U293 );
                l_U294 = l_U293 - l_U292;
                if (l_U294 > l_U287)
                {
                    if (l_U295 == 0)
                    {
                        GET_GAME_TIMER( ref l_U289 );
                        GET_GAME_TIMER( ref l_U296 );
                        l_U295 = 1;
                    }
                }
            }
            if (l_U295 == 1)
            {
                GET_GAME_TIMER( ref l_U290 );
                l_U291 = l_U290 - l_U289;
                if (l_U291 < l_U286)
                {
                    sub_2479();
                    sub_2545();
                    if (IS_PLAYER_PLAYING( sub_900() ))
                    {
                        BLOCK_STATS_MENU_ACTIONS( sub_900() );
                    }
                    SET_CINEMATIC_BUTTON_ENABLED( 0 );
                }
                else
                {
                    SET_CINEMATIC_BUTTON_ENABLED( 1 );
                    l_U285 = 0;
                    l_U295 = 0;
                    g_U43495 = 0;
                    l_U284 = 1;
                }
                GET_GAME_TIMER( ref l_U297 );
                l_U298 = l_U297 - l_U296;
                if (l_U298 > (l_U288 + l_U287))
                {
                    SET_TEXT_SCALE( l_U269._fU0, l_U269._fU4 );
                    INIT_FRONTEND_HELPER_TEXT();
                    DRAW_FRONTEND_HELPER_TEXT( "ResultsDesc3", "ResultsExitBut", 0 );
                    sub_2837();
                }
            }
        }
        else
        {
            l_U285 = 0;
            l_U295 = 0;
            g_U43495 = 0;
            l_U284 = 1;
        }
    }
    return;
}

void sub_292()
{
    if (l_U283 == 0)
    {
        sub_313();
        l_U281 = 2;
    }
    return;
}

void sub_313()
{
    g_U43561 = 0;
    g_U43592 = 0;
    l_U285 = 0;
    l_U295 = 0;
    g_U43495 = 0;
    sub_358();
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    sub_403();
    l_U281 = 2;
    return;
}

void sub_358()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_403()
{
    if (l_U199 != nil)
    {
        RELEASE_TEXTURE( l_U199 );
    }
    if (l_U220 != nil)
    {
        RELEASE_TEXTURE( l_U220 );
    }
    if (l_U232 != nil)
    {
        RELEASE_TEXTURE( l_U232 );
    }
    if (l_U239 != nil)
    {
        RELEASE_TEXTURE( l_U239 );
    }
    if (l_U252 != nil)
    {
        RELEASE_TEXTURE( l_U252 );
    }
    if (l_U198 != nil)
    {
        REMOVE_TXD( l_U198 );
    }
    return;
}

int sub_668()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_746()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_755() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_755(), ref iVar2 );
    }
    if ((iVar2 == 16) || ((iVar2 == 17) || (iVar2 == 35)))
    {
        if ((GET_CONTROL_VALUE( 0, 6 )) > 10)
        {
            return 1;
        }
    }
    return 0;
}

void sub_755()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_891()
{
    if ((NOT sub_1065()) AND ((NOT sub_956()) AND ((NOT IS_PAUSE_MENU_ACTIVE()) AND ((NOT IS_MINIGAME_IN_PROGRESS()) AND (IS_PLAYER_PLAYING( sub_900() ))))))
    {
        return 1;
    }
    return 0;
}

void sub_900()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_956()
{
    if (l_U299 == 1)
    {
        GET_GAME_TIMER( ref l_U302 );
        l_U303 = l_U302 - l_U301;
        if ((g_U12379 == 1) AND (l_U303 > 1000))
        {
            return 1;
        }
    }
    if ((l_U299 == 0) AND (g_U12379 == 1))
    {
        return 1;
    }
    return 0;
}

int sub_1065()
{
    if (IS_PLAYER_PLAYING( sub_900() ))
    {
        if (l_U298 > (l_U288 + l_U287))
        {
            BLOCK_STATS_MENU_ACTIONS( sub_900() );
            if (IS_CONTROL_PRESSED( 2, 78 ))
            {
                BLOCK_STATS_MENU_ACTIONS( sub_900() );
                return 1;
            }
        }
    }
    return 0;
}

void sub_1192()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_1262()
{
    if (l_U273 == 0)
    {
        if (# -NULL-0xc27c84())
        {
            l_U198 = LOAD_TXD( "e2:/xbox360/textures/RaceResults" );
        }
        else if (# -NULL-0xc27bfa())
        {
            l_U198 = LOAD_TXD( "e2:/pc/textures/RaceResults" );
        }
        l_U273 = 1;
    }
    return;
}

void sub_1415()
{
    l_U200 = "E2_Stats_Background_WhiteGrade";
    l_U201 = {0.50000000, 0.00000000, 0.00000000};
    l_U204 = {0.30000000, 0.10000000, 0.00000000};
    l_U207 = 0.00000000;
    l_U208 = 255;
    l_U209 = 255;
    l_U210 = 255;
    l_U211 = 90;
    l_U199 = GET_TEXTURE( l_U198, l_U200 );
    l_U221 = "white";
    l_U222 = {0.25000000, 0.00600000, 0.00000000};
    l_U225 = 0.50000000;
    l_U226 = 0.44400000;
    l_U227 = 0.00000000;
    l_U228 = 255;
    l_U229 = 255;
    l_U230 = 255;
    l_U231 = 255;
    l_U220 = GET_TEXTURE( l_U198, l_U221 );
    l_U233 = "E2_Stats_BaseJump_BlackSquare";
    l_U234 = {0.25000000, 0.00600000, 0.00000000};
    l_U237 = 0.50100000;
    l_U238 = 0.44500000;
    l_U232 = GET_TEXTURE( l_U198, l_U233 );
    l_U240 = "E2_Stats_Races_Title";
    l_U241 = {0.25000000, 0.12000000, 0.00000000};
    l_U244 = {0.50000000, 0.35100000, 0.00000000};
    l_U247 = 0.00000000;
    l_U248 = 255;
    l_U249 = 255;
    l_U250 = 255;
    l_U251 = 255;
    l_U239 = GET_TEXTURE( l_U198, l_U240 );
    if (g_U43001 == 1)
    {
        l_U253 = "E2_Stats_Races_1stPlace";
    }
    else if (g_U43001 == 2)
    {
        l_U253 = "E2_Stats_Races_2ndPlace";
    }
    else if (g_U43001 == 3)
    {
        l_U253 = "E2_Stats_Races_3rdPlace";
    }
    else
    {
        l_U253 = "E2_Stats_Races_LastPlace";
    };;;
    l_U254 = {0.26800000, 0.04900000, 0.00000000};
    l_U257 = {0.50000000, 0.41000000, 0.00000000};
    l_U260 = 0.00000000;
    l_U261 = 255;
    l_U262 = 255;
    l_U263 = 255;
    l_U264 = 255;
    l_U252 = GET_TEXTURE( l_U198, l_U253 );
    l_U265 = 0.38000000;
    l_U266 = 0.58500000;
    l_U267 = 0.47200000;
    l_U268 = 0.05000000;
    l_U269 = {0.24300000, 0.46700000, 0.00000000};
    if (NOT GET_IS_WIDESCREEN())
    {
        l_U269._fU0 = 0.34600000;
        l_U269._fU4 = 0.51200000;
    }
    return;
}

void sub_2479()
{
    unknown uVar2;

    if (l_U204._fU4 < 2.00000000)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U204._fU4 += uVar2 * l_U72;
    }
    return;
}

void sub_2545()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U199, l_U201._fU0, l_U201._fU4, l_U204._fU0, l_U204._fU4, l_U207, l_U208, l_U209, l_U210, l_U211 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2837()
{
    sub_2846();
    sub_2961();
    sub_3116();
    sub_3598();
    sub_3710();
    return;
}

void sub_2846()
{
    sub_2855();
    return;
}

void sub_2855()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U239, l_U244._fU0, l_U244._fU4, l_U241._fU0, l_U241._fU4, l_U247, l_U248, l_U249, l_U250, l_U251 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_2961()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    DRAW_SPRITE( l_U232, l_U237, l_U238, l_U222._fU0, l_U222._fU4, l_U227, l_U228, l_U229, l_U230, l_U231 );
    DRAW_SPRITE( l_U220, l_U225, l_U226, l_U222._fU0, l_U222._fU4, l_U227, l_U228, l_U229, l_U230, l_U231 );
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    return;
}

void sub_3116()
{
    SET_TEXT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U269._fU0, l_U269._fU4 );
    SET_TEXT_WRAP( 0.20000000, 0.80000000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    DISPLAY_TEXT( l_U265, l_U267, "MisTime" );
    sub_3254( g_U43635 );
    SET_TEXT_RIGHT_JUSTIFY( 1 );
    SET_TEXT_COLOUR( 255, 255, 255, 255 );
    SET_TEXT_SCALE( l_U269._fU0, l_U269._fU4 );
    SET_TEXT_WRAP( 0, 0.61500000 );
    SET_TEXT_DROPSHADOW( l_U6, l_U3, l_U5, l_U4, 255 );
    SET_TEXT_DRAW_BEFORE_FADE( 0 );
    if (l_U274 > 9)
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U267, "MisDbgTime1", l_U275, l_U274, l_U276 );
    }
    else
    {
        DISPLAY_TEXT_WITH_3_NUMBERS( 0, l_U267, "MisTimeSecond", l_U275, l_U274, l_U276 );
    }
    return;
}

void sub_3254(unknown uParam0)
{
    l_U275 = sub_3265( uParam0 );
    l_U274 = sub_3315( uParam0 );
    l_U276 = sub_3357( uParam0 );
    return;
}

void sub_3265(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = iParam0 / 1000;
    Result = iVar3 / 60;
    Result = Result mod 60;
    return Result;
}

void sub_3315(int iParam0)
{
    int Result;

    Result = iParam0 / 1000;
    Result = Result mod 60;
    return Result;
}

int sub_3357(int iParam0)
{
    return iParam0 mod 1000;
}

void sub_3598()
{
    if (g_U43001 < 4)
    {
        SET_SPRITES_DRAW_BEFORE_FADE( 1 );
        DRAW_SPRITE( l_U252, l_U257._fU0, l_U257._fU4, l_U254._fU0, l_U254._fU4, l_U260, l_U261, l_U262, l_U263, l_U264 );
        SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    }
    return;
}

void sub_3710()
{
    return;
}

