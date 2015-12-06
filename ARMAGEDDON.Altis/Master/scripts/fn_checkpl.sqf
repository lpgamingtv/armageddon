#include <macro.h>
////////////////////////////
//Author: R‰‰ph DDoSantos///
//Email: raffi@lpgaming.tv//
//Only LPGamingTv have//////
//permissions to user///////
////////////////////////////
private["_display","_units","_type"];

disableSerialization;
waitUntil {!isNull findDisplay 2001};
_display = findDisplay 2001;
_units = _display displayCtrl 6542;


lbClear _units;

{
	if(alive _x && _x != player && playerside == civilian) then
	{
		switch (side _x) do
		{
			case civilian: {_type = "Civ"};
		};
		_units lbAdd format["%1 (%2)",_x getVariable["realname",name _x],_type];
		_units lbSetData [(lbSize _units)-1,str(_x)];
	};
} foreach playableUnits;

lbSetCurSel [6542,0];