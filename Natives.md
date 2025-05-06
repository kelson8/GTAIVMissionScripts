# List of natives
These are natives that I found useful in GTA 4:

https://gtamods.com/wiki/List_of_native_functions_(GTA_IV)

List of keybinds: https://gtamods.com/wiki/Key_Codes_(GTA_IV)

### Controller natives:

1. SHAKE_PAD (Controller Index, Unknown Intensity, unknown_duration_ms) {https://gtamods.com/wiki/SHAKE_PAD}
2. 
3.

### Sound natives:
1. SET_VARIABLE_ON_SOUND (unk uVar4, unk String, unk float)
2. PLAY_SOUND_FRONTEND (unk int, Filename String, Soundset String)

### Animation natives:
1. HAVE_ANIMS_LOADED
2. TASK_PLAY_ANIM
3. TASK_PLAY_ANIM_SECONDARY_UPPER_BODY
4.
5.

### Misc task natives:
I found most of these in ambbeggar.c under sub_2220

1. OPEN_SEQUENCE_TASK(unk string?) - Unknown usage, possibly give it a name?
2. TASK_GO_TO_CHAR(0, int charToGoTo, -1, 2.000) -- charToGoTo is the character to go to such as the player, value 3 and 4 is unknown, possibly timing?
3. TASK_STAND_STILL(0, 2)
4. SET_SEQUENCE_TO_REPEAT()
5. CLOSE_SEQUENCE_TASK()
6. TASK_PERFORM_SEQUENCE()
7. CLEAR_SEQUENCE_TASK()
8. CLOSE_SEQUENCE_TASK()
9. SAY_AMBIENT_SPEECH( l_U111, "Generic_Hi", 0, 0, 0 ) -- value 1 seems to be seems to be the character, value 2 seems to be the speech string, values 3, 4, and 5 are unknown.

### Pickup natives:
1. CREATE_PICKUP(hash modelName, int pickupType, float x, float y, float z, int pickupHandle, bool unknown (Normally false))
2. CREATE_PICKUP_WITH_AMMO(hash modelName, int pickupType, int unknown (Possibly ammo?), float x, float y, float z, int pickupHandle)
3. CREATE_PICKUP_ROTATE(hash modelName, int pickupType, int ammo, float x, float y, float z, float rotX, float rotY, float rotZ, int pickupHandle);


### Timer natives:
1. GET_GAME_TIMER


### Phone natives:
1. SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN (unk1? int)
2. 

### Language natives:
1. IS_JAPANESE_VERSION {https://gtamods.com/wiki/Native_function_returning_false}
2.
3.
4.
5.

### String natives:
1. PRINTSTRING (char string) - Print a string to the screen, colors can be used in this. {https://gtamods.com/wiki/GXT#Symbols_and_colors}

### Player natives
1. HAS_DEATHARREST_EXECUTED - If the player has been wasted/busted
2. SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN (int playerChar, int toggle) - Set the playerChar to fly through the windshield, set to 1 for enabled, set to 0 for disabled.

Debug natives (Useful if I can get the debug tool with C# working):
1. 

### Stat natives:
1. INCREMENT_INT_STAT_NO_MESSAGE (int stat, int valueToIncrement) - Add the specified value to the stat.
2. DECREMENT_INT_STAT (int stat, int valueToDecrement) - Remove the specified value from the stat.

### Mission natives:
1. SET_MISSION_FLAG (int value) - Set the mission enabled flag, use 1 for enabled, 0 for disabled, for use when making missions.

### Fade natives:
1. DO_SCREEN_FADE_IN(int time) - Set the screen to fade in, the time is in miliseconds.
2. DO_SCREEN_FADE_OUT(int time) - Set the screen to fade out, the time is in miliseconds.

### Vehicle natives:
1. CREATE_CAR
2. SET_CAR_PROOFS
3. 
4. SET_VEH_HAS_STRONG_AXLES (vehicle veh, int toggle) - Set the vehicle to have strong axles, 1 for enabled, 0 for disabled.
5. SET_CAR_AS_MISSION_CAR (vehicle CarToSet) - Set a vehicle as a mission car