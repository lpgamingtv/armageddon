/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
		life_actions = life_actions + [player addAction ["<img image='Master\img\drag32.paa'/> <t color='#C90000'>Drag</t>", "[] call r3_handleDrag", [false], 8, true, true, "", "call r3_checkDrag"]];
		life_actions = life_actions + [player addAction ["<img image='Master\img\bleed32.paa'/> <t color='#C90000'>Stabilize</t>", "[] call r3_handleStabi", [false], 9, true, true, "", "call r3_checkStabi"]];
	};
	case west:
	{
		life_actions = [player addAction ["<img image='Master\img\bleed32.paa'/> <t color='#C90000'>Stabilize</t>", "[] call r3_handleStabi", [false], 9, true, true, "", "call r3_checkStabi"]];
		life_actions = life_actions + [player addAction ["<img image='Master\img\drag32.paa'/> <t color='#C90000'>Drag</t>", "[] call r3_handleDrag", [false], 8, true, true, "", "call r3_checkDrag"]];
	};
	case independent:
	{
		life_actions = [player addAction ["<img image='Master\img\medic32.paa'/> <t color='#C90000'>Revive</t>", "[] call r3_handleRevive", [false], 10, true, true, "", "call r3_checkRevive"]];
		life_actions = life_actions + [player addAction ["<img image='Master\img\bleed32.paa'/> <t color='#C90000'>Stabilize</t>", "[] call r3_handleStabi", [false], 9, true, true, "", "call r3_checkStabi"]];
		life_actions = life_actions + [player addAction ["<img image='Master\img\drag32.paa'/> <t color='#C90000'>Drag</t>", "[] call r3_handleDrag", [false], 8, true, true, "", "call r3_checkDrag"]];
	};
};
