if(allahu) then {
allahu = false;
_allahunumber = ceil(random 5);
	if (_allahunumber == 1) then {[player,"allahu1"] call life_fnc_globalSound;};
	if (_allahunumber == 2) then {[player,"allahu2"] call life_fnc_globalSound;};
	if (_allahunumber == 3) then {[player,"allahu3"] call life_fnc_globalSound;};
	if (_allahunumber == 4) then {[player,"allahu4"] call life_fnc_globalSound;};
	if (_allahunumber == 5) then {[player,"allahu5"] call life_fnc_globalSound;};
sleep 500;
allahu = true;
}else{
hint "Zu oft Brüllen zerstört deine Stimmbänder!";
};