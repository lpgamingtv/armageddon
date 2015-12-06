#include "player_sys.sqf"

class playerSettings_cop {

	idd = playersys_DIALOG;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_cellphone";
	
	class controlsBackground {
		
	class MainBackground:life_RscText {
		idc = -1;
		x = 0.236458 * safezoneW + safezoneX;
		y = 0.247099 * safezoneH + safezoneY;
		w = 0.532812 * safezoneW;
		h = 0.494807 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	
	class life_RscTitleBackground:life_RscText {
			colorBackground[] = {0.07,0.45,0,1};
			idc = -1;
			x = 0.236458 * safezoneW + safezoneX;
			y = 0.223203 * safezoneH + safezoneY;
			w = 0.532812 * safezoneW;
			h = 0.0238954 * safezoneH;
		};
	class life_RscTitleBackground1:life_RscText
		{
			idc = -1;

			x = 0.769042 * safezoneW + safezoneX;
			y = 0.223568 * safezoneH + safezoneY;
			w = 0.00967256 * safezoneW;
			h = 0.517034 * safezoneH;
			colorBackground[] = {0.07,0.45,0,1};
		};
		class life_RscTitleBackground2:life_RscText
		{
			idc = -1;

			x = 0.22626 * safezoneW + safezoneX;
			y = 0.222908 * safezoneH + safezoneY;
			w = 0.0102679 * safezoneW;
			h = 0.517036 * safezoneH;
			colorBackground[] = {0.07,0.45,0,1};
		};
		class life_RscTitleBackground3:life_RscText
		{
			idc = -1;

			x = 0.226146 * safezoneW + safezoneX;
			y = 0.741026 * safezoneH + safezoneY;
			w = 0.552231 * safezoneW;
			h = 0.0172314 * safezoneH;
			colorBackground[] = {0.07,0.45,0,1};
		};
		
		class life_RscTitleBackground5: Life_RscText
		{
			idc = -1;

			x = 0.61126 * safezoneW + safezoneX;
			y = 0.226583 * safezoneH + safezoneY;
			w = 0.0102679 * safezoneW;
			h = 0.517036 * safezoneH;
			colorBackground[] = {0.07,0.45,0,1};
		};
		
		class Title : life_RscTitle {
			idc = -1;
			text = "$STR_PM_Title";
			x = 0.23817 * safezoneW + safezoneX;
			y = 0.224394 * safezoneH + safezoneY;
			w = 0.527083 * safezoneW;
			h = 0.0219914 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		
		class moneyStatusInfo : Life_RscStructuredText
		{
			idc = 2015;
			sizeEx = 0.020;
			text = "";
			x = 0.244021 * safezoneW + safezoneX;
			y = 0.285364 * safezoneH + safezoneY;
			w = 0.1375 * safezoneW;
			h = 0.329871 * safezoneH;
		};
		
		class PlayersName : Title {
			idc = carry_weight;
			style = 1;
			text = "";
			x = 0.23817 * safezoneW + safezoneX;
			y = 0.225774 * safezoneH + safezoneY;
			w = 0.527083 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		//CELLPHONE
		class Life_RscTitleBackgroundCELL: Life_RscText
			{
				idc = -1;

				x = 0.236458 * safezoneW + safezoneX;
				y = 0.532987 * safezoneH + safezoneY;
				w = 0.375476 * safezoneW;
				h = 0.0219914 * safezoneH;
				colorBackground[] = {0.07,0.45,0,1};			
			};

		
	};
	
	class controls {
		
		class itemHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {0.07,0.45,0,1};
			text = "$STR_PM_cItems";
			sizeEx = 0.04;
			x = 0.482812 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		
		class licenseHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {0.07,0.45,0,1};
			text = "$STR_PM_Licenses";
			sizeEx = 0.04;
			x = 0.351042 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		
		class moneySHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {0.07,0.45,0,1};
			text = "$STR_PM_MoneyStats";
			sizeEx = 0.04;
			x = 0.242188 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.100375 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
	
		class itemList : life_RscListBox 
		{
			idc = item_list;
			sizeEx = 0.030;
			x = 0.482812 * safezoneW + safezoneX;
			y = 0.280086 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.164936 * safezoneH;
		};
		
		class moneyEdit : Life_RscEdit 
		{
			idc = 2018;
			
			text = "1";
			sizeEx = 0.030;
			x = 0.247917 * safezoneW + safezoneX;
			y = 0.379047 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0164936 * safezoneH;
		};
		
		class NearPlayers : Life_RscCombo 
		{
			idc = 2022;
			x = 0.247917 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0164936 * safezoneH;
		};
		
		class moneyDrop : Life_RscButtonMenu
		{
			idc = 2001;
			text = "$STR_Global_Give";
			colorBackground[] = {0.07,0.45,0,1};
			onButtonClick = "[] call life_fnc_giveMoney";
			sizeEx = 0.025;
			x = 0.259375 * safezoneW + safezoneX;
			y = 0.428308 * safezoneH + safezoneY;
			w = 0.0595833 * safezoneW;
			h = 0.0197923 * safezoneH;
		};
		
		class itemEdit : Life_RscEdit {
		
		idc = item_edit;
		
		text = "1";
		sizeEx = 0.030;
			x = 0.482812 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.0164936 * safezoneH;
		
		};
		class iNearPlayers : Life_RscCombo
		{
			idc = 2023;
			
			x = 0.482812 * safezoneW + safezoneX;
			y = 0.478009 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.0164936 * safezoneH;
		};
		/*
		Disabled till it can be redone
		class moneyInput: life_RscCombo {
			
			idc = money_value;
			
			x  = 0.02; y = 0.402;
			w = .1; h = .030;
		};
		*/
		
		class DropButton : life_RscButtonMenu {
			
			idc = 2002;
			text = "$STR_Global_Give";
			colorBackground[] = {0.07,0.45,0,1};
			onButtonClick = "[] call life_fnc_giveItem;";
			
			x = 0.550417 * safezoneW + safezoneX;
			y = 0.501539 * safezoneH + safezoneY;
			w = 0.0601563 * safezoneW;
			h = 0.0219914 * safezoneH;
			
		};
		
		class UseButton : life_RscButtonMenu {
			
			text = "$STR_Global_Use";
			colorBackground[] = {0.07,0.45,0,1};
			onButtonClick = "[] call life_fnc_useItem;";
			
			x = 0.487396 * safezoneW + safezoneX;
			y = 0.5011 * safezoneH + safezoneY;
			w = 0.0601563 * safezoneW;
			h = 0.0219914 * safezoneH;
			
		};
		
		class RemoveButton : life_RscButtonMenu {
			
			text = "$STR_Global_Remove";
			colorBackground[] = {0.07,0.45,0,1};
			onButtonClick = "[] call life_fnc_removeItem;";
			
			x = 0.42426 * safezoneW + safezoneX;
			y = 0.5011 * safezoneH + safezoneY;
			w = 0.0601563 * safezoneW;
			h = 0.0219914 * safezoneH;
			
		};
		/*
		Disabled till it can be redone
		class DropcButton : life_RscButtonMenu {

			text = "Drop Money";
			onButtonClick = "[] execVM 'player_system\money_fnc.sqf'";
			
			x = 0.13; y = 0.4;
			w = 0.135; h = 0.05;
			
		};
		*/
		
		class ButtonClose : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.688031 * safezoneW + safezoneX;
			y = 0.706939 * safezoneH + safezoneY;
			w = 0.0802083 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		
		class ButtonSettings : life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Settings";
			onButtonClick = "[] call life_fnc_settingsMenu;";
			x = 0.621917 * safezoneW + safezoneX;
			y = 0.34738 * safezoneH + safezoneY;
			w = 0.140068 * safezoneW;
			h = 0.0257995 * safezoneH;
		};
		
		class ButtonMyGang : Life_RscButtonMenu {
			idc = 2011;
			text = "$STR_PM_MyGang";
			onButtonClick = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
			x = 0.622693 * safezoneW + safezoneX;
			y = 0.377143 * safezoneH + safezoneY;
			w = 0.138282 * safezoneW;
			h = 0.0248475 * safezoneH;
		};
		class ButtonGangList : Life_RscButtonMenu {
			idc = 2012;
			text = "$STR_PM_WantedList";
			onButtonClick = "[] call life_fnc_wantedMenu";
			x = 0.621917 * safezoneW + safezoneX;
			y = 0.379928 * safezoneH + safezoneY;
			w = 0.140068 * safezoneW;
			h = 0.0257995 * safezoneH;
		};
		
		class Licenses_Menu : Life_RscControlsGroup
		{
			idc = -1;
			x = 0.349667 * safezoneW + safezoneX;
			y = 0.286463 * safezoneH + safezoneY;
			w = 0.128333 * safezoneW;
			h = 0.208919 * safezoneH;
			
			class Controls
			{
				class Life_Licenses : Life_RscStructuredText
				{
					idc = 2014;
					sizeEx = 0.020;
					text = "";
					x = 0;
					y = 0;
					w = 0.27; h = 0.65;
				};
			};
		};
		
	
		class ButtonKeys : Life_RscButtonMenu {
			idc = 2013;
			text = "$STR_PM_KeyChain";
			onButtonClick = "createDialog ""Life_key_management"";";
			x = 0.62226 * safezoneW + safezoneX;
			y = 0.404997 * safezoneH + safezoneY;
			w = 0.139472 * safezoneW;
			h = 0.0248475 * safezoneH;
		};
		
		
		class ButtonAdminMenu : Life_RscButtonMenu {
			idc = 2021;
			text = "ADMIN-MENU"; //--- ToDo: Localize;
			onButtonClick = "createDialog ""life_admin_menu"";";
			x = 0.621502 * safezoneW + safezoneX;
			y = 0.465193 * safezoneH + safezoneY;
			w = 0.140067 * safezoneW;
			h = 0.0248474 * safezoneH;
			colorBackground[] = {0.3,1,0.34,1};
		};
		
		class ButtonPlaceables : Life_RscButtonMenu {
			idc = 20003; //NOTE: Possibly 40003? Had repear instance of this with that idc
			text = "Barrieren"; //<----- TO:DO LOCALIZE POLICE SIDE
			onButtonClick = "[] spawn life_fnc_placeablesMenu; closeDialog 0;";
			//x = 0.26 + (6.25 / 19.8) + (1 / 250 / (safezoneW / safezoneH));
			x = 0.621502 * safezoneW + safezoneX;
			y = 0.432645 * safezoneH + safezoneY;
			w = 0.140067 * safezoneW;
			h = 0.0248474 * safezoneH;
		};
		
		class ButtonSyncData : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_PM_SyncData";
			onButtonClick = "[] call SOCK_fnc_syncData;";
			x = 0.622719 * safezoneW + safezoneX;
			y = 0.314832 * safezoneH + safezoneY;
			w = 0.138691 * safezoneW;
			h = 0.0277035 * safezoneH;
		};
		
		class Notruf : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			onButtonClick = "hint'comming Soon';";
			text = "---------------NOTRUF---------------"; //--- ToDo: Localize;
			x = 0.623177 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.1375 * safezoneW;
			h = 0.0439828 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.79,0.01,0,1};
		};
		
		//CELLPHONE
		class TitleCELL: Life_RscTitle
		{
			idc = 3001;
			text = "$STR_CELL_Title";
			x = 0.242188 * safezoneW + safezoneX;
			y = 0.532987 * safezoneH + safezoneY;
			w = 0.275 * safezoneW;
			h = 0.0219914 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		
		class TextToSend: Life_RscTitle
		{
			idc = 3002;
			text = "$STR_CELL_TextToSend";
			x = 0.236917 * safezoneW + safezoneX;
			y = 0.561356 * safezoneH + safezoneY;
			w = 0.275 * safezoneW;
			h = 0.0219914 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class textEdit: Life_RscEdit
		{
			idc = 3003;
			text = "";
			sizeEx = 0.030;

			x = 0.239094 * safezoneW + safezoneX;
			y = 0.595443 * safezoneH + safezoneY;
			w = 0.276562 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class TextMsgButton: Life_RscButtonMenu
		{
			idc = 3015;
			text = "$STR_CELL_TextMSGBtn";
			onButtonClick = "[] call TON_fnc_cell_textmsg";

			x = 0.242188 * safezoneW + safezoneX;
			y = 0.631949 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0329871 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.07,0.45,0,1};
			};
		class PlayerListCell: Life_RscCombo
		{
			idc = 3004;

			x = 0.518333 * safezoneW + safezoneX;
			y = 0.561136 * safezoneH + safezoneY;
			w = 0.0916667 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class TextCopButton: Life_RscButtonMenu
		{
			idc = 3016;
			onButtonClick = "[] call TON_fnc_cell_textcop";
			text = "$STR_CELL_TextPolice";
			x = 0.345313 * safezoneW + safezoneX;
			y = 0.631949 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0329871 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.07,0.45,0,1};
		};
		class TextAdminButton: Life_RscButtonMenu
		{
			idc = 3017;
			onButtonClick = "[] call TON_fnc_cell_textadmin";
			text = "$STR_CELL_TextAdmins";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.631949 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0329871 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.07,0.45,0,1};
			};
		class AdminMsgButton: Life_RscButtonMenu
		{
			idc = 3020;
			onButtonClick = "[] call TON_fnc_cell_adminmsg";
			text = "$STR_CELL_AdminMsg";
			x = 0.345313 * safezoneW + safezoneX;
			y = 0.675931 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0329871 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.07,0.45,0,1};
		};
		class AdminMsgAllButton: Life_RscButtonMenu
		{
			idc = 3021;
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			text = "$STR_CELL_AdminMSGAll";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.675931 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0329871 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.07,0.45,0,1};
			};
		class EMSRequest: Life_RscButtonMenu
		{
			idc = 3022;
			onButtonClick = "[] call TON_fnc_cell_emsrequest";
			text = "$STR_CELL_EMSRequest";
			x = 0.242188 * safezoneW + safezoneX;
			y = 0.675931 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0329871 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.07,0.45,0,1};
			};

	};
};