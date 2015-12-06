#include <macro.h>
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if((__GETC__(life_medicLevel)) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};
if(!license_med_intro2) then {
		cutText ["","BLACK IN"];
		TitleText ["", "BLACK IN", 1];
		player setVariable ["r3_unitPrivateMedic", objNull, true];
		[] call life_fnc_cam_med;
		[] call life_fnc_placeablesInitMEDIC;
	}else{
player setVariable ["r3_unitPrivateMedic", objNull, true];
player setVariable["medlevel", __GETC__(life_medicLevel), true];
[] call life_fnc_spawnMenu;
[] call life_fnc_placeablesInitMEDIC;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
};