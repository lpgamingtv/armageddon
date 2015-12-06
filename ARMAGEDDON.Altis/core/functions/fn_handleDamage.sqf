/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = _this select 0;
_part = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_projectile = _this select 4;

//Internal Debugging.
if(!isNil "TON_Debug") then {
	systemChat format["PART: %1 || DAMAGE: %2 || SOURCE: %3 || PROJECTILE: %4 || FRAME: %5",_part,_damage,_source,_projectile,diag_frameno];
};

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {
		_curWep = currentWeapon _source;
		if(_projectile in ["B_9x21_Ball","B_556x45_dual"] && _curWep in ["hgun_P07_snds_F","arifle_SDAR_F"]) then {
			if(side _source == west && playerSide != west) then {
				private["_distance","_isVehicle","_isQuad"];
				_distance = if(_projectile == "B_556x45_dual") then {100} else {35};
				_isVehicle = if(vehicle player != player) then {true} else {false};
				_isQuad = if(_isVehicle) then {if(typeOf (vehicle player) == "B_Quadbike_01_F") then {true} else {false}} else {false};
				
				_damage = false;
				if(_unit distance _source < _distance) then {
					if(!life_istazed && !(_unit getVariable["restrained",false])) then {
						if(_isVehicle && _isQuad) then {
							player action ["Eject",vehicle player];
							[_unit,_source] spawn life_fnc_tazed;
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
				};
			};
			
			//Temp fix for super tasers on cops.
			if(playerSide == west && side _source == west) then {
				_damage = false;
			};
		};
	};
};

[] call life_fnc_hudUpdate;
_damage;
/*
private["_unit","_damage","_unitIsDown","_fakePlayer","_handleNewDamage"];
_unit = _this select 0;
_damage = _this select 2;
_unitIsDown = _unit getVariable ["r3_unitIsDown",1];
_handleNewDamage = 0;


if(alive _unit && _unitIsDown == 0) then {
	if ((_damage >= 0.9) || (( getdammage _unit) >=0.9) || (( getdammage _unit) + _damage) >= 0.9) then { 
				_unit setVariable ["r3_unitIsDown", 1, true];
				_unit setVariable ["r3_unitIsStabi", 0, true];
				
				_unit allowDamage false;
				_unit setDamage 0.9;
				_unit setCaptive true;
				
				if(vehicle _unit != _unit) then {moveOut _unit;};
				
				_unit switchCamera "External";
				
				[] spawn r3_spawnFakeUnit;
			};
		} else {
				_handleNewDamage = _damage;
};
[] call life_fnc_hudUpdate;
_handleNewDamage;

*/

		
