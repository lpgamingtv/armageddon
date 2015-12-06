/*
	File: initServer.sqf
	
	Description:
	Starts the initialization of the server.
*/
if(!(_this select 0)) exitWith {}; //Not server
[] call compile PreprocessFileLineNumbers "\life_server\init.sqf";
master_group attachTo[bank_obj,[0,0,0]];

onMapSingleClick "if(_alt) then {vehicle player setPos _pos};";

//Spawn the new hospitals.
{
	_hs = createVehicle ["Land_Hospital_main_F", [0,0,0], [], 0, "NONE"];
	_hs setDir (markerDir _x);
	_hs setPosATL (getMarkerPos _x);
	_var = createVehicle ["Land_Hospital_side1_F", [0,0,0], [], 0, "NONE"];
	_var attachTo [_hs, [4.69775,32.6045,-0.1125]];
	detach _var;
	_var = createVehicle ["Land_Hospital_side2_F", [0,0,0], [], 0, "NONE"];
	_var attachTo [_hs, [-28.0336,-10.0317,0.0889387]]; 
	detach _var;
} foreach ["hospital_2","hospital_3"];

[8,true,true,12] execFSM "core\fsm\timeModule.fsm";
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