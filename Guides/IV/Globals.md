# Some game globals info
This is very incomplete and just based on guessing, sometimes I can find these with debug strings in the decompiled code.

* g_U9939 seems to be a wanted level global, so it can change the max wanted level, in use in main.c and other files.

* g_U0 seems to be some mission failed stat, if this is 1 I think the mission gets failed, TODO Look into this global if I can figure it out how to modify them for GTA IV.

* g_U65003 seems to be something to do with bowling and the Michelle1 script, mostly where it's set at

* g_U8220 is possibly a changing room global or something, seems to only really be in use in the clothes stores and ambwardrobe.c

* g_U2220 is possibly a mission blip global, found in use under sub_18130 within cia1.c.

* g_U9052 seems to only be used in cablecars.c and startup.c.

* g_U91 seems important and in use in a lot of scripts, I wonder what it is.