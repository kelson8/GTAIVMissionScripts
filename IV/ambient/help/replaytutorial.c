void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    char[12] cVar10;
    unknown uVar13;
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
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;

    THIS_SCRIPT_SHOULD_BE_SAVED();
    array(ref cVar10, 2);
    StrCopy( ref cVar10[0], "VE_SCRTUT_02", 32 );
    StrCopy( ref cVar10[1], "VE_SCRTUT_03", 32 );
    l_U3 = 0;
    l_U0 = 0;
    while (true)
    {
        WAIT( 0 );
        if (sub_87() == 1)
        {
            TERMINATE_THIS_SCRIPT();
        }
        if (NOT GET_MISSION_FLAG())
        {
            if (g_U9067 == 0)
            {
                if ((g_U91._fU428 == 1031) AND ((g_U91._fU0 == 1011) AND (g_U555 == 0)))
                {
                    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar10[0] )) == 0)
                    {
                        if (l_U0 == 0)
                        {
                            if (IS_HELP_MESSAGE_BEING_DISPLAYED() == 0)
                            {
                                l_U3++;
                                if (l_U3 > 2)
                                {
                                    l_U0 = 1;
                                    CLEAR_HELP();
                                    PRINT_HELP( ref cVar10[0] );
                                    WAIT( 0 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U3 = 0;
                    l_U0 = 0;
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref cVar10[0] ))
                    {
                        CLEAR_HELP();
                    }
                }
                if ((IS_REPLAY_SAVING() == 1) AND (l_U1 == 0))
                {
                    l_U2 = 1;
                }
                if (IS_HELP_MESSAGE_BEING_DISPLAYED() == 0)
                {
                    if ((l_U1 == 0) AND ((l_U2 == 1) AND (IS_REPLAY_SAVING() == 0)))
                    {
                        l_U1 = 1;
                        CLEAR_HELP();
                        PRINT_HELP( ref cVar10[1] );
                        WAIT( 0 );
                    }
                }
            }
        }
    }
    return;
}

int sub_87()
{
    return 0;
}

