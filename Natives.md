# List of natives
These are natives that I found useful in GTA 4:

https://gtamods.com/wiki/List_of_native_functions_(GTA_IV)

List of keybinds: https://gtamods.com/wiki/Key_Codes_(GTA_IV)

<details>
<summary> Controller natives: </summary>

1. SHAKE_PAD (Controller Index, Unknown Intensity, unknown_duration_ms) https://gtamods.com/wiki/SHAKE_PAD
</details>

<details>
<summary> Sound natives: </summary>

1. SET_VARIABLE_ON_SOUND (unk uVar4, unk String, unk float)
2. PLAY_SOUND_FRONTEND (unk int, Filename String, Soundset String)

</details>

<details>
<summary> Animation natives: </summary>

I need to figure out what these are accepting, the number values anyways

1. HAVE_ANIMS_LOADED
2. TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 ) - Taken from sub_15140() in emergencycall.c {int unknown, string animation, string animationGroup, float possiblyTime?, int unknown, int unknown, int unknown, int unknown, int unknown}
3. TASK_PLAY_ANIM_SECONDARY_UPPER_BODY

</details>

<details>
<summary> Misc task natives: </summary>

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

</details>

<details>
<summary> Pickup natives: </summary>

1. CREATE_PICKUP(hash modelName, int pickupType, float x, float y, float z, int pickupHandle, bool unknown (Normally false))
2. CREATE_PICKUP_WITH_AMMO(hash modelName, int pickupType, int unknown (Possibly ammo?), float x, float y, float z, int pickupHandle)
3. CREATE_PICKUP_ROTATE(hash modelName, int pickupType, int ammo, float x, float y, float z, float rotX, float rotY, float rotZ, int pickupHandle);

</details>


<details>
<summary> Timer natives: </summary>

1. GET_GAME_TIMER

</details>

<details>
<summary> Phone natives: </summary>
1. SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN (unk1? int)

</details>

<details>
<summary> Language natives: </summary>

1. IS_JAPANESE_VERSION https://gtamods.com/wiki/Native_function_returning_false

</details>

<details>
<summary> String natives: </summary>

1. PRINTSTRING (char string) - Print a string to the screen, colors can be used in this. https://gtamods.com/wiki/GXT#Symbols_and_colors

</details>


<details>
<summary> Char natives: </summary>

1. CREATE_CHAR
2. SET_CHAR_PROOFS(bool ...)
3. SET_PLAYER_MOOD_PISSED_OFF(int playerId, int unknown) - Seems to make Niko angry, the unknown int is usually 150 in the scripts.

</details>

<details>
<summary> Player natives: </summary>

1. HAS_DEATHARREST_EXECUTED - If the player has been wasted/busted
2. SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN (int playerChar, int toggle) - Set the playerChar to fly through the windshield, set to 1 for enabled, set to 0 for disabled.
3. SET_PLAYER_MOOD_PISSED_OFF

</details>

<details>
<summary> Debug natives: </summary>

This one is incomplete, I will need to figure out how to use the C# tool for debug items

</details>

<details>
<summary> Stat natives: </summary>

1. INCREMENT_INT_STAT_NO_MESSAGE (int stat, int valueToIncrement) - Add the specified value to the stat.
2. DECREMENT_INT_STAT (int stat, int valueToDecrement) - Remove the specified value from the stat.

</details>

<details>
<summary> Mission natives: </summary>

1. SET_MISSION_FLAG (int value) - Set the mission enabled flag, use 1 for enabled, 0 for disabled, for use when making missions.

</details>

<details>
<summary> Fade natives: </summary>

1. DO_SCREEN_FADE_IN(int time) - Set the screen to fade in, the time is in miliseconds.
2. DO_SCREEN_FADE_OUT(int time) - Set the screen to fade out, the time is in miliseconds.

</details>

<details>
<summary> Vehicle natives: </summary>

Some of these were obtained from "void sub_9436()" in ray2.c in TLAD, didn't mean to find it in there but it'll work on IV also.

1. CREATE_CAR(Hash carModelHash, float vehicleX, float vehicleY, float vehicleZ, int carHandle, int unknown {usually 1}) - Create a vehicle with the model hash at the specific coordinates.
2. SET_CAR_PROOFS(int carHandle, bool bulletProof, bool fireProof, bool explosionProof, bool collisionProof, bool meleeProof) - Can set the car to invincible with all enabled, or turn it off.
3. SET_VEH_HAS_STRONG_AXLES (vehicle veh, int toggle) - Set the vehicle to have strong axles, 1 for enabled, 0 for disabled.
4. SET_CAR_AS_MISSION_CAR (vehicle CarToSet) - Set a vehicle as a mission car
5. SWITCH_CAR_SIREN(Vehicle vehicleToSwitch, int toggle) - This can turn the car sirens on/off, use 1 for enabled, 0 for disabled.
6. FORCE_CAR_LIGHTS(Vehicle emergencyVehicle, int value) - This seems to turn on/off the vehicle lights, possible values are 0, 1, and 2, I think 0 is off, 1 is low beams, and 2 is high beams, I could be wrong though.
7. LOCK_CAR_DOORS(Vehicle vehicleToLock, int toggle) - This can lock the vehicle doors, 1 is enabled and doors are locked, 0 is disabled and doors are unlocked.
8. CHANGE_CAR_COLOUR(int vehicleHandle, int color1, int color2) - Change the vehicles colors.
9. SET_EXTRA_CAR_COLOURS(int vehicleHandle, int color1, int color2) - Change the vehicles extra colors.
10. TURN_OFF_VEHICLE_EXTRA
11. SET_CAR_ON_GROUND_PROPERLY(int vehicleHandle) - Set the vehicle to be on the ground.
12. SET_CAR_ONLY_DAMAGED_BY_PLAYER(int vehicleHandle, int toggle) - Toggle the vehicle to only be damaged by the player, 1 is on 0 is off.
13. SET_CAR_COORDINATES(int vehicleHandle, float vehicleX, float vehicleY, float vehicleZ) - Set the cars coordinates
14. SET_CAR_HEADING(int vehicleHandle, float heading) - Set the cars heading.

</details>

<details>
<summary> Locate vehicle natives: </summary>

1. LOCATE_CAR_2D(int vehicleHandle, float locationX1, float locationY1, float locationX2, float locationY2, int unknown {seems to always be 0})
2. LOCATE_CAR_3D(int vehicleHandle, float locationX1, float locationY1, float locationZ1, float locationX2, float locationY2, float locationZ3, int unknown {seems to always be 0})

</details>

<details>
<summary> In game internet natives: </summary>

To use ADD_TO_HTML_SCRIPT_OBJECT:
l_U1 = CREATE_HTML_SCRIPT_OBJECT( "alexLink" );

1. LOAD_WEB_PAGE(unknown webPage)
2. RELOAD_WEB_PAGE(unknown webPage)
3. ADD_TO_HTML_SCRIPT_OBJECT(char scriptObject {l_U1 set above}, char htmlObject );

</details>

<details>
<summary> World natives: </summary>

Some of these were taken from "void sub_8827()" in vlad4.c

1. ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 ) - Unsure what this does
2. SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 ) - Seems to disable all car generators on the map
3. OVERRIDE_NUMBER_OF_PARKED_CARS(int toggle) -- Toggle parked cars on/off, 0 is off, 1 is on.
4. SWITCH_GARBAGE_TRUCKS(int toggle) -- Toggle garbage trucks on/off, 0 is off, 1 is on.
5. ALLOW_EMERGENCY_SERVICES(int toggle) -- Toggle emergency service vehicles on/off, 0 is off, 1 is on.
6. SET_CAR_DENSITY_MULTIPLIER(float value) - Set the car density, from 0.0 to 1.0 being the max

7. SET_PED_DENSITY_MULTIPLIER(float value) - Set the ped density, from 0.0 to 1.0 being the max
</details>