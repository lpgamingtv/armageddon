/*
	File: fn_onPlayerKilled.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	When the player dies collect various information about that player
	and pull up the death dialog / camera functionality.
*/
private["_unit","_killer"];
disableSerialization;
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_killer = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;

//Set some vars
//_unit setVariable["Revive",FALSE,TRUE]; //Set the corpse to a revivable state.
_unit setVariable["name",profileName,TRUE]; //Set my name so they can say my name.
_unit setVariable["restrained",FALSE,TRUE];
_unit setVariable["Escorting",FALSE,TRUE];
_unit setVariable["transporting",FALSE,TRUE]; //Why the fuck do I have this? Is it used?
_unit setVariable["steam64id",(getPlayerUID player),true]; //Set the UID.

//Setup our camera vie


//Create a thread to follow with some what precision view of the corpse.


//Make the killer wanted
if(!isNull _killer && {_killer != _unit} && {side _killer != west} && {alive _killer}) then {
	if(vehicle _killer isKindOf "LandVehicle") then {
		[[getPlayerUID _killer,_killer getVariable["realname",name _killer],"187V"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
		//Get rid of this if you don't want automatic vehicle license removal.
		if(!local _killer) then {
			[[2],"life_fnc_removeLicenses",_killer,FALSE] spawn life_fnc_MP;
		};
	} else {
		[[getPlayerUID _killer,_killer getVariable["realname",name _killer],"187"],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
		
		if(!local _killer) then {
			[[3],"life_fnc_removeLicenses",_killer,FALSE] spawn life_fnc_MP;
		};
	};
};

//Killed by cop stuff...
if(side _killer == west && playerSide != west) then {
	life_copRecieve = _killer;
	//Did I rob the federal reserve?
	if(!life_use_atm && {life_cash > 0}) then {
		[format[localize "STR_Cop_RobberDead",[life_cash] call life_fnc_numberText],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
		life_cash = 0;
	};
};

if(!isNull _killer && {_killer != _unit}) then {
	life_removeWanted = true;
};

_handle = [_unit] spawn life_fnc_dropItems;
waitUntil {scriptDone _handle};

life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;
life_cash = 0;
life_blackmoney = 0;

[] call life_fnc_hudUpdate; //Get our HUD updated.
[[player,life_sidechat,playerSide],"TON_fnc_managesc",false,false] spawn life_fnc_MP;

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;