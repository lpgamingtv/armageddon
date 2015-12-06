//*******************************************//
//*********Life@Altis Script Loader**********//
//****Do not use, without our permissions****//
//*******************************************//
GrafikMods = true; 
player allowDamage true;
if (GrafikMods) then {
sleep 6;
[] spawn{
	"colorCorrections" ppEffectEnable true;  
	"colorCorrections" ppEffectAdjust [1, 1, 0, [0.5, 0.5, 0.5, 0.0], [0.5, 0.5, 0.6, 1.7], [0.75, 0.75, 0.2, 0.0]];  
	"colorCorrections" ppEffectCommit 0; 
	setWind [5.342, 5.108, true];
	};
};
[] execVM "Master\stuff\briefing.sqf"; //Load Briefing
[] execVM "Master\stuff\KRON_Strings.sqf";
setTerrainGrid 50;
allahu = true;