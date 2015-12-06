/////////////////////////////////////////////////
/////////////////////////////////////////////////
/////			 							/////
////           R 3 4 P 3 R 's               /////
////       C O O P - S C R I P S            /////
/////			 							/////
/////////////////////////////////////////////////
/////////////////////////////////////////////////
if(isNull player) exitWith {};

call compile preprocessFile "Master\revive\r3_fnc_revive_client.sqf";
call compile preprocessFile "Master\revive\r3_fnc_revive_server.sqf";
r3_enableDebugMode =false;


///////// INIT PLAYER ///////////

r3_initPlayer =
{
	_oldUnit = [_this, 1, objNull] call BIS_fnc_param;
	_fakeplayer = player getVariable ["r3_unitFakePlayer", objNull];
	
	if(!isNull _oldUnit) then {
		deleteVehicle _oldUnit; 
	};
	
	if(!isNull _fakeplayer) then {
		deleteVehicle _fakeplayer; 
	};
	
	player removeAllEventHandlers "HandleDamage";
	player addEventHandler ["HandleDamage", { if(local (_this select 0)) then {_this call r3_unitHandleDamage_EH;} }];
	// Unit Vars
	player setVariable ["r3_unitIsDown", 0, true];
	player setVariable ["r3_unitIsStabi", 0, true];
	player setVariable ["r3_unitFakePlayer", objNull, true];

	player setVariable ["r3_unitGetRevive", 0, true];
	player setVariable ["r3_unitGetDrag", 0, true];
	player setVariable ["r3_unitbleedOut", r3_reviveBleedOutTime, true];
	
};

[] spawn r3_initPlayer;



