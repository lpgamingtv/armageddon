/*
	File: fn_escMenu.sqf
	Author: Unknown "Script nicht von R‰‰ph DDoSantos"

*/
private["_random","_screen","_ui","_camera","_effect"];
disableSerialization;
(findDisplay 46) displayAddEventHandler ["KeyDown", "if((_this select 1) == 1) then {true};"];
life_aborted = true;
2 cuttext [" ","PLAIN"]; //hud wird ausgeschaltet
["",0,0,1,0.1,0,1000] spawn BIS_fnc_dynamicText;
[LIFE_ID_PlayerTags,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
player allowdamage false;
hint "";
showChat false;
disableUserInput true;
disableSerialization;
0 fadeMusic 0.3;
Playmusic "Track01_Proteus";
enableEnvironment false;
_camera = "camera" camCreate (player modelToWorld [0,0,3]);
_camera camsetTarget player;
_camera setdir 0;
_camera camPrepareFOV 1;
_camera cameraEffect ["internal", "TOP"];
_camera camSetFocus [random 360,random 360];
_camera camPreload 10;
_camera camCommit 0;
_effect = ppEffectCreate ["WetDistortion", 1];
_effect ppEffectEnable true;
_camera camSetPos (player modelToWorld [0,0,300]);
_camera camCommit 7;
_camera camPrepareFOV 1;
[] call SOCK_fnc_updateRequest;
[[player],"TON_fnc_cleanupRequest",false,false] spawn life_fnc_MP;
waitUntil { camCommitted _camera;};

1 fadeSound 0;
1 fadeMusic 0;
1 fadeRadio 0;
1 fadeSpeech 0;
500 cutText["","PLAIN"];
[format["<t color='#DC143C'>Speichere Spielerdaten</t><br/><br/><t size='0.6'>Bis zum naechsten mal %1</t>",profilename],0,0.2,5,0.2,0,1000] spawn BIS_fnc_dynamicText;
uisleep 5;
showChat true;
["",0,0,1,0.1,0,1000] spawn BIS_fnc_dynamicText;
disableUserInput false;
{
    deleteVehicle _x;
} forEach (life_bar_placey);
["Disconnect",true,false] call BIS_fnc_endMission;