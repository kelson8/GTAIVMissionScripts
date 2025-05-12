// Script that shows help messages when wasted or busted, quite sure for the first time.

// I think g_U64522 possibly determines which help message is displayed

void main()
{
    boolean bVar2;

    l_U0 = 12;

    // I think l_U1 is set to 1 once the police help message has went away.
    l_U1 = 0;

    // I think l_U2 is set to 1 once the hospital help message has went away.
    l_U2 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U1 = 0;
    l_U2 = 0;
    bVar2 = true;

    // What is bVar2? Seems to kill this
    while (bVar2)
    {
        WAIT( 0 );
        DisplayPoliceHelpText();
        DisplayHospitalHelpText();
        if ((l_U2) AND (l_U1))
        {
            bVar2 = false;
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

// sub_54
void DisplayPoliceHelpText()
{
    int timeSinceLastArrest;
    int timeSinceLastDeath;
    int iVar4;

    timeSinceLastArrest = GET_TIME_SINCE_LAST_ARREST();

    if (l_U1)
    {
        return;
    }

    if (timeSinceLastArrest == -1)
    {
        return;
    }

    if (timeSinceLastArrest > 10000)
    {
        return;
    }

    while (timeSinceLastArrest < 10000)
    {
        WAIT( 0 );
        timeSinceLastArrest = GET_TIME_SINCE_LAST_ARREST();
    }

    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }

    // Display the message: BUST_1 = If you are arrested by the police you will be processed at a local police precinct.
    PRINT_HELP( "BUST_1" );
    SETTIMERA( 0 );

    while ((sub_371( l_U0 )) AND (TIMERA() < 7500))
    {
        WAIT( 0 );
        timeSinceLastArrest = GET_TIME_SINCE_LAST_ARREST();
        timeSinceLastDeath = GET_TIME_SINCE_LAST_DEATH();

        iVar4 = 0;

        if (NOT (timeSinceLastDeath == -1))
        {
            if (timeSinceLastDeath < 10000)
            {
                iVar4 = 1;
            }
        }

        // Clear the BUST_1 message.
        if ((iVar4) || ((timeSinceLastArrest < 10000) || ((g_U10978) || (g_U9893._fU12))))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BUST_1" ))
            {
                CLEAR_HELP();
            }
            ResetHelpGlobals( l_U0 );
            return;
        }
    }
    ResetHelpGlobals( l_U0 );
    l_U1 = 1;

    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }

    // Display the message: BUST_2 = The officers will strip you of your weapons and take some of your cash as a bribe.
    PRINT_HELP( "BUST_2" );
    SETTIMERA( 0 );

    while ((sub_371( l_U0 )) AND (TIMERA() < 7500))
    {
        WAIT( 0 );
        timeSinceLastArrest = GET_TIME_SINCE_LAST_ARREST();
        timeSinceLastDeath = GET_TIME_SINCE_LAST_DEATH();

        iVar4 = 0;

        if (NOT (timeSinceLastDeath == -1))
        {
            if (timeSinceLastDeath < 10000)
            {
                iVar4 = 1;
            }
        }

        // Clear the BUST_2 message
        if ((iVar4) || ((timeSinceLastArrest < 10000) || ((g_U10978) || (g_U9893._fU12))))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BUST_2" ))
            {
                CLEAR_HELP();
            }
            ResetHelpGlobals( l_U0 );
            return;
        }
    }
    
    ResetHelpGlobals( l_U0 );
    // Clear the BUST_2 message
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BUST_2" ))
    {
        CLEAR_HELP();
    }
    return;
}

// iParam0 seems to be set to l_U0, which is set to 12 in this file.
int sub_145(int iParam0)
{
    int iVar3;

    // I think g_U64522 possibly determines which help message is displayed
    iVar3 = g_U64522[iParam0];
    // g_U64539 seems to be 12 in here set by iParam0, and 16 in other files? It may be being set in other files also.
    if (g_U64539 == iParam0)
    {
        return 1;
    }
    
    // Another help global, not used elsewhere other then help scripts.
    if (g_U64541 == iParam0)
    {
        if (iVar3 <= g_U64538)
        {
            return 0;
        }
        g_U64538 = g_U64540;
        g_U64539 = g_U64541;
        g_U64540 = 0;
        g_U64541 = 16;
        return 1;
    }
    if (iVar3 <= g_U64540)
    {
        return 0;
    }

    g_U64540 = iVar3;
    g_U64541 = iParam0;
    return 0;
}

boolean sub_371(int iParam0)
{
    return iParam0 == g_U64539;
}

// sub_516
// These globals seem to really only be used in some of the help scripts.
void ResetHelpGlobals(unknown uParam0)
{
    if (NOT (sub_371( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

// sub_846
void DisplayHospitalHelpText()
{
    int timeSinceLastDeath;
    int timeSinceLastArrest;
    int iVar4;

    timeSinceLastDeath = GET_TIME_SINCE_LAST_DEATH();

    if (l_U2)
    {
        return;
    }
    if (timeSinceLastDeath == -1)
    {
        return;
    }

    if (timeSinceLastDeath > 10000)
    {
        return;
    }

    while (timeSinceLastDeath < 10000)
    {
        WAIT( 0 );
        timeSinceLastDeath = GET_TIME_SINCE_LAST_DEATH();
    }

    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }

    // Display the message: HOSP_1 = If your health reaches zero, you will pass out and you will be treated at the local medical center.
    PRINT_HELP( "HOSP_1" );
    SETTIMERA( 0 );

    while ((sub_371( l_U0 )) AND (TIMERA() < 7500))
    {
        WAIT( 0 );

        timeSinceLastArrest = GET_TIME_SINCE_LAST_ARREST();
        timeSinceLastDeath = GET_TIME_SINCE_LAST_DEATH();
        iVar4 = 0;

        if (NOT (timeSinceLastArrest == -1))
        {
            if (timeSinceLastArrest < 10000)
            {
                iVar4 = 1;
            }
        }

        // Clear the HOSP_1 text.
        if ((iVar4) || ((timeSinceLastDeath < 10000) || ((g_U10978) || (g_U9893._fU12))))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HOSP_1" ))
            {
                CLEAR_HELP();
            }
            ResetHelpGlobals( l_U0 );
            return;
        }
    }
    ResetHelpGlobals( l_U0 );
    l_U2 = 1;

    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }

    // Display the message: HOSP_2 = Before you are discharged, hospital staff will charge you for the healthcare you received.
    PRINT_HELP( "HOSP_2" );
    SETTIMERA( 0 );

    while ((sub_371( l_U0 )) AND (TIMERA() < 7500))
    {
        WAIT( 0 );
        timeSinceLastArrest = GET_TIME_SINCE_LAST_ARREST();
        timeSinceLastDeath = GET_TIME_SINCE_LAST_DEATH();
        iVar4 = 0;

        if (NOT (timeSinceLastArrest == -1))
        {
            if (timeSinceLastArrest < 10000)
            {
                iVar4 = 1;
            }
        }

        // Clear the HOSP_2 message.
        if ((iVar4) || ((timeSinceLastDeath < 10000) || ((g_U10978) || (g_U9893._fU12))))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HOSP_2" ))
            {
                CLEAR_HELP();
            }
            ResetHelpGlobals( l_U0 );
            return;
        }
    }

    ResetHelpGlobals( l_U0 );
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HOSP_2" ))
    {
        CLEAR_HELP();
    }
    return;
}

