void main()
{
    unknown uVar2;
    char[16] cVar3;
    unknown uVar7;
    unknown[2] uVar8;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    array(ref uVar8, 2);
    THIS_SCRIPT_SHOULD_BE_SAVED();
    StrCopy( ref l_U2, "", 16 );
    while (true)
    {
        WAIT( 0 );
        if ((NOT GET_MISSION_FLAG()) AND ((sub_64()) AND (NOT g_U9532)))
        {
            switch (g_U558)
            {
                case 0:
                switch (g_U94._fU0)
                {
                    case 1011:
                    switch (g_U94._fU428)
                    {
                        case 1048:
                        sub_212( "MULTI_01", ref uVar8[0], 0 );
                        break;
                        case 1049:
                        sub_212( "MP_HELP_IP", ref uVar8[1], 0 );
                        break;
                        default:
                        sub_258();
                        break;
                    }
                    break;
                    default:
                    sub_258();
                    break;
                }
                break;
                case 2:
                uVar2 = g_U94._fU0;
                switch (g_U94._fU0)
                {
                    case 1048:
                    switch (uVar2)
                    {
                        case 1048:
                        switch (g_U94._fU428)
                        {
                            case 1:
                            if ((# -NULL-0xc27c84()) == 1)
                            {
                                sub_212( "MULTI_03A", ref uVar7, 1 );
                            }
                            else if ((# -NULL-0xc27bfa()) == 1)
                            {
                                sub_212( "MULTI_03C", ref uVar7, 1 );
                            }
                            break;
                            case 0:
                            if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
                            {
                                sub_212( "MULTI_02", ref uVar7, 1 );
                            }
                            else
                            {
                                sub_212( "MULTI_15", ref uVar7, 1 );
                            }
                            break;
                            case 5:
                            sub_212( "MULTI_14", ref uVar7, 1 );
                            break;
                            case 2:
                            sub_212( "MULTI_04", ref uVar7, 1 );
                            break;
                            default:
                            sub_258();
                            break;
                        }
                        break;
                        default:
                    }
                    break;
                    case 1051:
                    if (g_U94._fU428 == 4)
                    {
                        sub_212( "MULTI_13", ref uVar7, 1 );
                    }
                    else
                    {
                        StrCopy( ref cVar3, "MP_HELP_", 16 );
                        ConcatString(ref cVar3, g_U94._fU428, 16);
                        sub_212( ref cVar3, ref uVar7, 1 );
                    }
                    break;
                    case 1052:
                    switch (g_U94._fU428)
                    {
                        case 0:
                        sub_212( "MULTI_05", ref uVar7, 1 );
                        break;
                        case 2:
                        sub_212( "MULTI_16", ref uVar7, 1 );
                        break;
                        case 1:
                        sub_212( "MULTI_06", ref uVar7, 1 );
                        break;
                    }
                    break;
                    case 1054:
                    switch (g_U94._fU428)
                    {
                        case 0:
                        sub_212( "MULTI_17", ref uVar7, 1 );
                        break;
                        case 1:
                        sub_212( "MULTI_18", ref uVar7, 1 );
                        break;
                    }
                    break;
                    default:
                    if (g_U94._fU0 < 1000)
                    {
                        switch (g_U94._fU428)
                        {
                            case 0:
                            sub_212( "MULTI_09", ref uVar7, 1 );
                            break;
                            case 1:
                            sub_212( "MULTI_08", ref uVar7, 1 );
                            break;
                        }
                    }
                    else
                    {
                        sub_258();
                    }
                    break;
                }
                break;
                default: sub_258();
            }
        }
        else
        {
            sub_258();
        }
    }
    return;
}

int sub_64()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_212(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (((uParam1^) < 5) || (uParam2))
    {
        if ((GET_HASH_KEY( uParam0 )) != (GET_HASH_KEY( ref l_U2 )))
        {
            sub_258();
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                if (DOES_TEXT_LABEL_EXIST( uParam0 ))
                {
                    PRINT_HELP( uParam0 );
                    StrCopy( ref l_U2, uParam0, 16 );
                    (uParam1^)++;
                }
            }
        }
    }
    return;
}

void sub_258()
{
    if (NOT (COMPARE_STRING( ref l_U2, "" )))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U2 ))
        {
            CLEAR_HELP();
        }
    }
    StrCopy( ref l_U2, "", 16 );
    return;
}

