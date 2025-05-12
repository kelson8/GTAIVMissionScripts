# Some game globals info
This is very incomplete and just based on guessing, sometimes I can find these with debug strings in the decompiled code.

* g_U9939 seems to be a wanted level global, so it can change the max wanted level, in use in main.c and other files.

* g_U0 seems to be some mission failed stat, if this is 1 I think the mission gets failed, TODO Look into this global if I can figure it out how to modify them for GTA IV.

* g_U65003 seems to be something to do with bowling and the Michelle1 script, mostly where it's set at

* g_U8220 is possibly a changing room global or something, seems to only really be in use in the clothes stores and ambwardrobe.c

<hr>

* g_U2220 is possibly a mission blip global, found in use under sub_18130 within cia1.c.

* g_U9052 seems to only be used in cablecars.c and startup.c.

* g_U8705 seems to be the bed help text global, if it is displayed this doesn't show up again, changes to 1 under sub_4034 in ambsavebed.c.

* g_U13391 seems to be a global in use a lot in the missions, looking at the debug strings I think it has something to do with "Pass_Stats"

* g_U15 seems to run this native: "GET_EPISODE_INDEX_FROM_SUMMONS", found in spcellphone.c

To find some debug strings, search for "CREATE_WIDGET_GROUP" in VSCode.

Useful globals:
* g_U813, seems to be something that increments the mission attempts counter, I think this runs if a mission is quit, look into sub_1680 in bell3m.c.

* g_U8708, seems to be mostly set for the default vehicle generators under initial.c. Possibly name g_InitialCarGenerators

* g_U9893 = unknown
* g_U9893._fU0, seems to be loading the "replayHelp" script.

In use a lot in the missions:

``` 
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
```

Possibly some Roman globals:
* g_U64926 = romainTaxiScript
* g_U64927 = unknown/TODO Figure out, set to 0 in startup and brucie_heli, set to 1 in main.c, multitutorial.c, and sixaxistutorial.c.

Possibly some Little Jacob globals:
* g_U64925 = jacobGunCarScript

Phone globals:
* g_U91 = cellphone3Dstructure

Possible variable names for phone globals:
* _fU160 = pedVoice - Obtained from spcellphonecalling.c in sub_5794

* _fU404 = smsStatus
* _fU104 = hideCellphone - Obtained from brucie1.c within a debug line
* _fU100 = disableCellphone - Obtained from brucie1.c within a debug line
* _fU372 = missionAnsweredPhone - Obtained from main.c within a debug line.
* _fU376 = overrideCellphoneChecks - Obtained from main.c within a debug line.

* _fU496 = isHighDef - Obtained from spcellphone.c

* _fU568 = getUnacceptedInvites - Obtained from spcellphone.c ``` cellphone3Dstructure._fU568 = NETWORK_GET_NUM_UNACCEPTED_INVITES(); ```
