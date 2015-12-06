/*
	File: fn_escMenu.sqf
	Author: Unknown "Script nicht von R‰‰ph DDoSantos"

*/
private["_allowed","_display","_escTitle","_escRespawn","_escManual","_escConfig","_escContinue","_escSave","_escAbort","_escBottom"];
disableSerialization;
_display = (_this select 0);
_escTitle = (_display) displayCtrl 1050;
_escRespawn = (_display) displayCtrl 1010;
_escManual = (_display) displayCtrl 122;
_escConfig = (_display) displayCtrl 101;
_escContinue = (_display) displayCtrl 2;
_escSave = (_display) displayCtrl 103;
_escAbort = (_display) displayCtrl 104;


_escContinue ctrlSetText "ARMAGEDDON";
_escContinue ctrlEnable false;
_escContinue ctrlCommit 0;

_escSave ctrlSetText "Besuche uns auf www.lpgaming.tv";
_escSave ctrlEnable false;
_escSave ctrlCommit 0;

if(!(playerSide in [west,independent]) && ((player getVariable["restrained",false]) || (player getVariable["Escorting",false]) || (player getVariable["transporting",false]) || (profilenamespace getVariable["life_is_arrested",false]) || (profilenamespace getVariable["life_istazed",false]))) then {
	_escRespawn ctrlEnable false;
};


_escManual ctrlSetText "Arma-Hilfe";
_escManual ctrlSetTooltip "Du braucht hilfe bei Arma ?";

_escAbort ctrlSetText "Server verlassen";
_escAbort ctrlSetTooltip "Server verlassen. Dein Spielstand wird gespeichert.";
_escAbort ctrlSetEventHandler [ "ButtonClick", "[] spawn life_fnc_disconnect; (findDisplay 49) closeDisplay 2; true" ]; //2



true;