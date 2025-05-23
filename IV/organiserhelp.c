// List of texts for this:
/*
	FONORG1 = When you have an appointment or a date it will be added to the organizer on your phone.
	FONORG2 = To view the organizer press ~INPUT_PHONE_ACCEPT~ to access the phone menu, scroll down and press ~INPUT_PHONE_ACCEPT~ to select the organizer option.
	FONORG3 = Any day with an appointment will have a bell icon next to it. Select a day and press ~INPUT_PHONE_ACCEPT~ to view the appointment.
*/

void main()
{
    boolean bVar2;

    THIS_SCRIPT_SHOULD_BE_SAVED();
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 1000 );
        if (sub_37( 7 ))
        {
            bVar2 = false;
        }
    }
    WAIT( 10000 );
    if ((NOT g_U10978) AND (NOT g_U9893._fU12))
    {
        PRINT_HELP( "FONORG1" );
        SETTIMERA( 0 );
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    while (TIMERA() < 7500)
    {
        WAIT( 0 );
        if ((g_U10978) || (g_U9893._fU12))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "FONORG1" ))
            {
                CLEAR_HELP();
            }
            TERMINATE_THIS_SCRIPT();
        }
    }
    PRINT_HELP( "FONORG2" );
    SETTIMERA( 0 );
    while (TIMERA() < 7500)
    {
        WAIT( 0 );
        if ((g_U10978) || (g_U9893._fU12))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "FONORG2" ))
            {
                CLEAR_HELP();
            }
            TERMINATE_THIS_SCRIPT();
        }
    }
    PRINT_HELP( "FONORG3" );
    SETTIMERA( 0 );
    while (TIMERA() < 7500)
    {
        WAIT( 0 );
        if ((g_U10978) || (g_U9893._fU12))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "FONORG3" ))
            {
                CLEAR_HELP();
            }
            TERMINATE_THIS_SCRIPT();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "FONORG3" ))
    {
        CLEAR_HELP();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_37(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    sub_50( uParam0, ref iVar3, ref uVar4 );
    if (iVar3 == 8)
    {
        return 0;
    }
    return 1;
}

void sub_50(int iParam0, unknown uParam1, unknown uParam2)
{
    int J;
    int I;

    for ( J = 0; J <= (7 - 1); J++ )
    {
        for ( I = 0; I <= 3; I++ )
        {
            if ((sub_89( J, I )) == iParam0)
            {
                (uParam1^) = J;
                (uParam2^) = I;
                return;
            }
        }
    }
    (uParam1^) = 8;
    return;
}

int sub_89(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

