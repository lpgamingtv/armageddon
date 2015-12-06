/*

	Rääph DDoSantos
	

*/
#include <macro.h>
0 fadeMusic 0;
0 fadeSound 0;
call compile preprocessFile "Master\setup\cam_fnc.sqf";

		

		//playsound "workings";
		afk_pos_camera = "camera" camCreate ( ghost_cam_pos modelToWorld [0,350,120]);
		afk_pos_camera camSetTarget ghost_cam_pos;
		afk_pos_camera camSetRelPos [0, 22, 30];
		afk_pos_camera cameraEffect ["internal", "back"];
		afk_pos_camera camCommit 140;
		playMusic "Sareri";
		_ppBlur = ppEffectCreate ["DynamicBlur", 1];
		_ppBlur ppEffectEnable true;
		_ppBlur ppEffectAdjust [5];
		_ppBlur ppEffectCommit 0; 

		_ppColor = ppEffectCreate ["colorCorrections", 3];
		_ppColor ppEffectEnable true;
		_ppColor ppEffectAdjust [1.0, 1.0, -0.35,[1.0, 1.0, 1.0, 0.0], [1.0, 0.8, 0.5, 0.1],[1, 1, 1, 0]];
		2 fadeSound 0.2;
		3 fadeMusic 0.4;

		_ppColor ppEffectCommit 0;

		TitleText ["", "BLACK IN", 1.5];

		_ppBlur ppEffectAdjust [0.1];
		_ppBlur ppEffectCommit 2; 
		
		
		_ppBlur ppEffectAdjust [0];
		_ppBlur ppEffectCommit 6;
		
		sleep 12;

		1.5 fadeSound 0;

		sleep 1;

		//hintC parseText "<t color='#0468b4' size='2'>L</t><t color='#26ff02' size='2'>PGaming</t><t color='#0468b4' size='2'>T</t><t color='#26ff02' size='2'>V</t><br/><img size='5' shadow='0' image='Master\img\logo.jpg'/><br/><br/>Hallo Neuling. Willkommen auf der griechischen Insel Altis. Es gab in letzter Zeit viele Kriege. Du musst schauen wie du am besten ein Leben aufbaust. Die Miliz ist nur solange dein Freund wie du ihren Regeln folgst.";
		["<t color='#0468b4' size='2'>L</t><t color='#26ff02' size='2'>PGaming</t><t color='#0468b4' size='2'>T</t><t color='#26ff02' size='2'>V</t><br/><t color='#7fffd4'>Hallo Neuling. Willkommen auf der griechischen Insel Altis. Es gab in letzter Zeit viele Kriege. Du musst schauen wie du am besten ein Leben aufbaust. Die Miliz ist nur solange dein Freund wie du ihren Regeln folgst.</t>",-1,0,15,1,0,789] spawn BIS_fnc_dynamicText;
		/*		["<t color='#ff0000' size = '.8'>Warning!<br />Stop doing what you are doing</t>",-1,-1,4,1,0,789] spawn BIS_fnc_dynamicText;
		_briefing = "Hallo Neuling. Willkommen auf der griechischen Insel Altis. Es gab in letzter Zeit viele Kriege. Du musst schauen wie du am besten ein Leben aufbaust. Die Miliz ist nur solange dein Freund wie du ihren Regeln folgst.";

		RYD_WS_Typed = false;

			[
				[
					[_briefing,"<t font='EtelkaMonospaceProBold' align='left' size='0.6' color='#000000' shadow='0'>%1</t>",nil]
				],
				
				0.45,
				-0.1,
				"<t align='left' size='0.6' color='#000000' shadow='0'>%1</t>"

			] 
		spawn RYD_BIS_fnc_typeText;

		waitUntil
			{
			sleep 0.1;
			RYD_WS_Typed
			};
				
*/
			
		sleep 16;
		
		TitleText ["", "BLACK OUT", 2.5];
		sleep 2.5;
	////////////////	// Second Cam////////////////
		afk_pos_camera cameraEffect ["terminate","back"]; camDestroy afk_pos_camera;
		afk_pos_camera = "camera" camCreate (  kavala_cam_pos modelToWorld [0,350,120]);
		afk_pos_camera camSetTarget kavala_cam_pos;
		afk_pos_camera camSetRelPos [0, 22, 30];
		afk_pos_camera cameraEffect ["internal", "back"];
		afk_pos_camera camCommit 140;
		
		TitleText ["", "BLACK IN", 1.5];
		sleep 1;
		["<t color='#0468b4' size='2'>L</t><t color='#26ff02' size='2'>PGaming</t><t color='#0468b4' size='2'>T</t><t color='#26ff02' size='2'>V</t><br/><t color='#1e90ff'>In den Staedten bist du sicher. Du kannst Geld durch sammeln von Essen und wichtigen Gegenstaenden verdienen. Zurzeit ist die Miliz dein Freund. Sie ist in jeder großen Stadt vertreten. Du hast eine Aufenthaltsberechtigung, pass auf das du nicht gegen die Auflagen verstoesst. Wenn du keine Berechtigung mehr hast, kannst du in keine Stadt mehr rein!</t>",-1,0,18,1,0,789] spawn BIS_fnc_dynamicText;

			/*
		_briefing = "In den Staedten bist du sicher. Du kannst Geld durch sammeln von Essen und wichtigen Gegenstaenden verdienen. Zurzeit ist die Miliz dein Freund. Sie ist in jeder großen Stadt vertreten. Du hast eine Aufenthaltsberechtigung, pass auf das du nicht gegen die Auflagen verstoesst. Wenn du keine Berechtigung mehr hast, kannst du in keine Stadt mehr rein!";

		RYD_WS_Typed = false;TitleText ["", "BLACK IN", 1.5];

			[
				[
					[_briefing,"<t font='EtelkaMonospaceProBold' align='left' size='0.6' color='#000000' shadow='0'>%1</t>",nil]
				],
				
				0.45,
				-0.1,
				"<t align='left' size='0.6' color='#000000' shadow='0'>%1</t>"

			] 
		spawn RYD_BIS_fnc_typeText;

		waitUntil
			{
			sleep 0.1;
			RYD_WS_Typed
			};
				
*/
			
		sleep 19;
		TitleText ["", "BLACK OUT", 1.5];
		sleep 1.5;
		_ppBlur ppEffectEnable false;
		_ppBlur ppEffectAdjust [10];
		_ppBlur ppEffectCommit 6;
		_ppColor ppEffectEnable false;
		ppEffectDestroy _ppColor;
		ppEffectDestroy _ppBlur;
			"colorCorrections" ppEffectEnable true;  
			"colorCorrections" ppEffectAdjust [1, 1, 0, [0.5, 0.5, 0.5, 0.0], [0.5, 0.5, 0.6, 1.7], [0.75, 0.75, 0.2, 0.0]];  
			"colorCorrections" ppEffectCommit 0; 
			setWind [5.342, 5.108, true];
		afk_pos_camera cameraEffect ["terminate","back"]; camDestroy afk_pos_camera;
		TitleText ["", "BLACK IN", 1];
		license_civ_intro = true;	
		[] call SOCK_fnc_syncData;
		3 fadeMusic 0;
		2 fadeSound 1;
		
		sleep 1;
		
		private["_spawnPos"];
		if(license_civ_rebel) then {
		player setVariable["reblvl", 1, true];
		};
		if(__GETC__(life_donator) > 0) then {
		player setVariable["donlevel", __GETC__(life_donator), true];
		};
		civ_spawn_1 = nearestObjects[getMarkerPos  "civ_spawn_1", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
		civ_spawn_2 = nearestObjects[getMarkerPos  "civ_spawn_2", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
		civ_spawn_3 = nearestObjects[getMarkerPos  "civ_spawn_3", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
		civ_spawn_4 = nearestObjects[getMarkerPos  "civ_spawn_4", ["Land_i_Shop_01_V1_F","Land_i_Shop_02_V1_F","Land_i_Shop_03_V1_F","Land_i_Stone_HouseBig_V1_F"],250];
		waitUntil {!(isNull (findDisplay 46))};

		if(life_is_arrested) then
		{
			life_is_arrested = false;
			[player,true] spawn life_fnc_jail;
		}
			else
		{
			[] call life_fnc_spawnMenu;
			waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
			waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
		};
		player addRating 9999999;

		