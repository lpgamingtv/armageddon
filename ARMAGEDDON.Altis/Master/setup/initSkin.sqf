#include <macro.h>
/*
	File: fn_initSkin.sqf
	
	Description:
	Skin changer
*/
while {true} do
	{
	if(playerSide == civilian) then {
		if (uniform player == "U_C_Poloshirt_stripped") then {
			player	setObjectTextureGlobal[0,"Master\texturen\tshirt.jpg"];
		};
	};
	if(playerSide == west) then {
		if (uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal[0,"Master\texturen\miliz.jpg"];
		};
	};
	if(playerSide == independent) then {
		if (uniform player == "U_Rangemaster") then {
			player setObjectTextureGlobal[0,"Master\texturen\un_uniform.jpg"];
		};
	};
	sleep 2;//safe some cpu
};