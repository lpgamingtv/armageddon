class Revive_dialog
{
	idd=33991;
	movingenable=false;
	fadeIn = 2;
	fadeOut = 1;
	
	class controlsBackground {
		class boverlay: life_RscPicture
		{
			idc = 1200;
			text = "Master\img\blood_overlay.paa";
			x = safezoneX;
			y = safezoneY;
			w = safezoneW;
			h = safezoneH;
		};	
		class dia_background: life_RscPicture
		{
			idc = 2200;
			x = 0.2;
			y = 0;
			w = 0.5875;
			h = 0.18;
			colorBackground[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			text = "Master\img\dia_bg1.jpg";
		};	
	};
	
	class controls 
	{
		class btRevCamBack: RscShortcutButton
		{
			idc = -1;
			text = "‹";
			x = 0.22;
			y = 0.1;
			w = 0.041;
			h = 0.041;
			SizeEx = 0.032;
			font = "PuristaBold";
			action = "[0] spawn r3_changeRevCamPos";
		};
		class btCallMedic: RscShortcutButton
		{
			idc = 1600;
			text = "Call Medic";
			x = 0.28;
			y = 0.1;
			w = 0.2;
			h = 0.041;
			SizeEx = 0.032;
			default = true;
			action = "[] spawn r3_callForMedic";
		};
		class btSuicide: RscShortcutButton
		{
			idc = 1601;
			text = "Suicide";
			x = 0.505;
			y = 0.1;
			w = 0.2;
			h = 0.041;
			SizeEx = 0.032;
			action = "[] spawn r3_playerSuicide";
		};
		class btRevCamFwd: RscShortcutButton
		{
			idc = -1;
			text = "›";
			x = 0.725;
			y = 0.1;
			w = 0.041;
			h = 0.041;
			SizeEx = 0.032;
			font = "PuristaBold";
			action = "[1] spawn r3_changeRevCamPos";
		};
	};
};