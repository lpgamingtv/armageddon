/*

	R��ph DDoSantos
	

*/
#include <macro.h>
0 fadeMusic 0;
0 fadeSound 0;
call compile preprocessFile "Master\setup\cam_fnc.sqf";

		

		//playsound "workings";
		afk_pos_camera = "camera" camCreate ( hq_cam_pos modelToWorld [0,350,120]);
		afk_pos_camera camSetTarget hq_cam_pos;
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

		for "_i" from 1 to 0.15 step -0.05 do
			{
			setAccTime _i;
			sleep 0.01
			};

		_briefing = "Nach dem verlorenen Krieg gegen den islamischen Staat wurde Altis zu einem Strategischen Militaerlager der IS. Jihad Mohamed hatte vor Atomwaffen Arsenale auf Altis zu errichten.";

		RYD_WS_Typed = false;

			[
				[
					[_briefing,"<t font='EtelkaMonospaceProBold' align='left' size='0.6' color='#000000' shadow='0'>%1</t>",nil]
				],
				
				0.45,
				-0.1,
				"<t align='left' size='0.6' color='#000000' shadow='0'>%1</t>"

			] 
		spawn RYD_BIS_fnc_typeText1;

		waitUntil
			{
			sleep 0.1;
			RYD_WS_Typed
			};
				

			
		uiSleep 9;
		
		TitleText ["", "BLACK OUT", 2.5];
		sleep 2.5;
	////////////////	// Second Cam////////////////
		afk_pos_camera cameraEffect ["terminate","back"]; camDestroy afk_pos_camera;
		afk_pos_camera = "camera" camCreate (  punkt_cam_pos modelToWorld [0,350,120]);
		afk_pos_camera camSetTarget punkt_cam_pos;
		afk_pos_camera camSetRelPos [0, 22, 30];
		afk_pos_camera cameraEffect ["internal", "back"];
		afk_pos_camera camCommit 140;
		
				for "_i" from 1 to 0.15 step -0.05 do
			{
			setAccTime _i;
			sleep 0.01
			};

		_briefing = "Es wurden Langstreckenraketen auf Altis abgefeurt. Du als Miliz Rekrut musst deinen Anfuehrer folgen, hier herschen eigene Gesetze. Solltest du nicht das tuhen was dir gesagt wird kann das mit dem Tod bestraft werden. Good Luck!";

		RYD_WS_Typed = false;TitleText ["", "BLACK IN", 1.5];

			[
				[
					[_briefing,"<t font='EtelkaMonospaceProBold' align='left' size='0.6' color='#000000' shadow='0'>%1</t>",nil]
				],
				
				0.45,
				-0.1,
				"<t align='left' size='0.6' color='#000000' shadow='0'>%1</t>"

			] 
		spawn RYD_BIS_fnc_typeText1;

		waitUntil
			{
			sleep 0.1;
			RYD_WS_Typed
			};
				

			
		uiSleep 11;
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
		license_cop_intro1 = true;	
		[] call SOCK_fnc_syncData;
		3 fadeMusic 0;
		2 fadeSound 1;
		
		sleep 1;
		
		player setVariable["rank",(__GETC__(life_coplevel)),true];
		[] call life_fnc_spawnMenu;
		waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
		waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.