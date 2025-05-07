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

https://gtamods.com/wiki/TASK_PLAY_ANIM


I need to figure out what these are accepting, the number values anyways


1. REQUEST_ANIMS(char animName) - Example: REQUEST_ANIMS("amb@park_taichi_a"), request the animation
2. HAVE_ANIMS_LOADED(char animName) - Example: "amb@park_taichi_a", Check if the animation has loaded, use in a loop like this: "while(!(HAVE_ANIMS_LOADED(char animName))) WAIT (0);"
3. TASK_PLAY_ANIM(int charHandle, char animationID, char animationSet, float speed, bool loop, float x, float y, float z, int miliseconds)
Example: TASK_PLAY_ANIM( 0, "idle_lookaround_b", "missemergencycall", 8.00000000, 0, 0, 0, 0, -2 ) - Taken from sub_15140() in emergencycall.c 
4. TASK_PLAY_ANIM_WITH_FLAGS(int playerChar, char animgroup?, char animName, float unknown1, int unknown2, int unknown3)
Example: TASK_PLAY_ANIM_WITH_FLAGS(pPlayer,"taichi01","amb@park_taichi_a",8.0,99999,1);

7. TASK_PLAY_ANIM_SECONDARY_UPPER_BODY

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

Some of these below need labeled, I copied most natives that had a description from the native website.

CREATE_CHAR ped types: https://gtamods.com/wiki/Ped_type
CREATE_CHAR model hashes: https://gtamods.com/wiki/List_of_models_hashes#Peds


1. CREATE_CHAR(int pedType, int pedHash, posX, posY, posZ, int &pedHandle, int unknown {always set to 1}) - Create a char with the specified ped type, ped hash, and coords, store to pedHandle.
2. SET_CHAR_PROOFS(int charHandle, int bulletProof, int fireProof, int explosionProof, int collisionProof, int meleeProof) - Enable/Disable char proofs, 1 for enabled, 0 for disabled.
3. DOES_CHAR_EXIST(int charHandle) - Check if a character exists
4. SET_CHAR_ACCURACY(int charHandle, int charAccuracy) - Set the chars accuracy
5. SET_CHAR_AMMO(int charHandle, int weaponHandle, int ammoAmount) - Set the amount of ammo for the char.
6. SET_CHAR_AS_ENEMY(int charHandle, int toggle) - Set the specified player as an enemy, use 1 for enabled, 0 for disabled.
7. SET_CHAR_AS_MISSION_CHAR(int charHandle) - Make the char a mission char, they shouldn't despawn, pretty much the opposite of MARK_CHAR_AS_NO_LONGER_NEEDED.
8. SET_CHAR_BLEEDING(int pedHandle, int toggle) - Toggle the char bleeding, use 1 for enabled, 0 for disabled.
9. SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE(int charHandle, int toggle) - Toggle the char being able to fall off the bike, 1 is enabled (won't fall off bike), 0 is disabled (will fall off bike).
10. SET_CHAR_CAN_BE_SHOT_IN_VEHICLE(int charHandle, int toggle) - Toggle the char being able to be shot in a vehicle, 1 is enabled, 0 is disabled.
11. SET_CHAR_CANT_BE_DRAGGED_OUT(int charHandle. int toggle) - This function sets if the character can be dragged out of a vehicle, 1 is enabled, 0 is disabled. 
12. SET_CHAR_COLLISION
13. SET_CHAR_COMPONENT_VARIATION
14. SET_CHAR_COORDINATES
15. SET_CHAR_COORDINATES_DONT_WARP_GANG
16. SET_CHAR_COORDINATES_NO_OFFSET
17. SET_CHAR_DIES_INSTANTLY_IN_WATER
18. SET_CHAR_DROPS_WEAPONS_WHEN_DEAD
19. SET_CHAR_DROWNS_IN_SINKING_VEHICLE
20. SET_CHAR_DROWNS_IN_WATER
21. SET_CHAR_DRUGGED_UP
22. SET_CHAR_DUCKING
23. SET_CHAR_FIRE_DAMAGE_MULTIPLIER
24. SET_CHAR_GRAVITY
25. SET_CHAR_HAS_BEEN_CREATED_IN_INTERIOR
26. SET_CHAR_HEADING
27. SET_CHAR_HEALTH
28. SET_CHAR_INVINCIBLE
29. SET_CHAR_IS_TARGET_PRIORITY
30. SET_CHAR_KEEP_TASK
31. SET_CHAR_MAX_HEALTH
32. SET_CHAR_MONEY
33. SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER
34. SET_CHAR_NAME_DEBUG
35. SET_CHAR_NEVER_LEAVES_GROUP
36. SET_CHAR_PROOFS
37. SET_CHAR_PROP_INDEX
38. SET_CHAR_PROVIDE_COVERING_FIRE
39. SET_CHAR_RANDOM_COMPONENT_VARIATION
40. SET_CHAR_READY_TO_BE_EXECUTED

</details>

<details>
<summary> Char natives 2: </summary>

Most of these below need labeled, I copied most natives that had a description from the native website.

1. SET_CHAR_RELATIONSHIP_GROUP
2. SET_CHAR_SHOOT_RATE
3. SET_CHAR_SIGNAL_AFTER_KILL
4. SET_CHAR_SPHERE_DEFENSIVE_AREA
5. SET_CHAR_SUFFERS_CRITICAL_HITS
6. SET_CHAR_VELOCITY
7. SET_CHAR_VISIBLE
8. SET_CHAR_WANTED_BY_POLICE
9. SET_CHAR_WEAPON_SKILL
10. SET_CHAR_WILL_DO_DRIVEBYS
11. SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN
12. SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT
13. SET_CHAR_WILL_MOVE_WHEN_INJURED
14. SET_CHAR_WILL_ONLY_FIRE_WITH_CLEAR_LOS

</details>

<details>
<summary> Player natives: </summary>

1. HAS_DEATHARREST_EXECUTED - If the player has been wasted/busted
2. SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN (int playerChar, int toggle) - Set the playerChar to fly through the windshield, set to 1 for enabled, set to 0 for disabled.
3. SET_PLAYER_MOOD_PISSED_OFF(int playerId, int unknown) - Seems to make Niko angry, the unknown int is usually 150 in the scripts.

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
15. DELETE_CAR(int &vehicleHandle) - Delete the specified vehicle
16. MARK_CAR_AS_NO_LONGER_NEEDED(int &vehicleHandle) - Mark the specified vehicle as no longer needed, cleanup for game.
17. SET_CAR_CAN_BE_DAMAGED(int &vehicleHandle, int toggle) - Toggle the car being able to be damaged, 1 is on 0 is off.
18. SET_CAR_CAN_BE_VISIBLY_DAMAGED(int &vehicleHandle, int toggle)- Toggle the car being able to be visibly damaged, 1 is on 0 is off.
19. SET_CAN_BURST_CAR_TYRES(int vehicleHandle, int toggle) - Toggle the car being able to burst tires, 1 is on, 0 is off.


</details>

<details>
<summary> Locate vehicle natives: </summary>

1. LOCATE_CAR_2D(int vehicleHandle, float locationX1, float locationY1, float locationX2, float locationY2, int unknown {seems to always be 0})
2. LOCATE_CAR_3D(int vehicleHandle, float locationX1, float locationY1, float locationZ1, float locationX2, float locationY2, float locationZ3, int unknown {seems to always be 0})

</details>

<details>
<summary> Player vehicle natives: </summary>

Store the players car, store the vehicle in the variable like this, making a blank variable: int vehicleHandle;
* GET_CAR_CHAR_IS_USING(int playerHandle, int &vehicleHandle)

Check if char is in any car
* IS_CHAR_IN_ANY_CAR(int playerChar)



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