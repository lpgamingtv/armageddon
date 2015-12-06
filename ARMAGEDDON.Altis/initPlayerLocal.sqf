/*
	File: initPlayerLocal.sqf
	
	Description:
	Starts the initialization of the player.
*/
if(!hasInterface) exitWith {}; //This is a headless client, he doesn't need to do anything but keep being headless..
#define __CONST__(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
__CONST__(BIS_fnc_endMission,BIS_fnc_endMission);
[] execVM "Master\Config\init.sqf";
call compile preprocessFileLineNumbers "Master\revive\r3_init_revive.sqf"; 
//Execute JIP code.
if((_this select 1)) then {
	[] execVM "core\jip.sqf";
};
switchMoveMP = compileFinal "_this select 0 switchMove (_this select 1);";
playMoveNowMP = compileFinal "_this select 0 playMoveNow (_this select 1);";
say3DMP = compileFinal "_this select 0 say3D (_this select 1);";
playSoundMP = compileFinal "if(!isNull player) then {playSound (_this select 0) };";
doMoveMP = compileFinal "if(local (_this select 0)) then {_this select 0 doMove (_this select 1) };";
stopMP = compileFinal "if(local (_this select 0)) then {_this select 0 stop (_this select 1) };";
setDirMP = compileFinal "_this select 0 setDir (_this select 1);";
enableSimMP = compileFinal "_this select 0 enableSimulation (_this select 1);";
setObjectTextureMP = compileFinal "_this select 0 setObjectTexture (_this select 1);";
hintMP = compileFinal "if(!isNull player) then {hintSilent (_this select 0)};";

//hideObject
hideObjectMP = {
	_obj = [_this, 0, objNull] call BIS_fnc_param;
	_value = [_this, 1, true] call BIS_fnc_param;
	
	if(!isNull _obj) then {
		if(!isNull player) then {
			_obj hideObject _value;
		};
		if(isDedicated) then {
			_obj hideObjectGlobal _value;
		};
	};
};