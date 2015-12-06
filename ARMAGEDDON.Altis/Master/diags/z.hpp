////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by r11pl, v1.063, #Lezyti)
////////////////////////////////////////////////////////

class MainBackground: Life_RscText
{
	idc = -1;

	x = -3 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 46.5 * GUI_GRID_W;
	h = 22.5 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.8};
};
class life_RscTitleBackground: Life_RscText
{
	idc = -1;

	x = -3 * GUI_GRID_W + GUI_GRID_X;
	y = -0.09 * GUI_GRID_H + GUI_GRID_Y;
	w = 46.5 * GUI_GRID_W;
	h = 1.08658 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class life_RscTitleBackground1: Life_RscText
{
	idc = -1;

	x = 43.48 * GUI_GRID_W + GUI_GRID_X;
	y = -0.07 * GUI_GRID_H + GUI_GRID_Y;
	w = 0.844151 * GUI_GRID_W;
	h = 23.5107 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class life_RscTitleBackground2: Life_RscText
{
	idc = -1;

	x = -3.89 * GUI_GRID_W + GUI_GRID_X;
	y = -0.1 * GUI_GRID_H + GUI_GRID_Y;
	w = 0.896108 * GUI_GRID_W;
	h = 23.5108 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class life_RscTitleBackground3: Life_RscText
{
	idc = -1;

	x = -3.9 * GUI_GRID_W + GUI_GRID_X;
	y = 23.46 * GUI_GRID_H + GUI_GRID_Y;
	w = 48.1947 * GUI_GRID_W;
	h = 0.783551 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class Title: Life_RscTitle
{
	idc = -1;

	text = "Spieler MenÃ¼"; //--- ToDo: Localize;
	x = -2.85 * GUI_GRID_W + GUI_GRID_X;
	y = -0.03 * GUI_GRID_H + GUI_GRID_Y;
	w = 46 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorText[] = {0.95,0.95,0.95,1};
};
class moneyStatusInfo: Life_RscStructuredText
{
	idc = 2015;

	x = -2.34 * GUI_GRID_W + GUI_GRID_X;
	y = 2.74 * GUI_GRID_H + GUI_GRID_Y;
	w = 12 * GUI_GRID_W;
	h = 15 * GUI_GRID_H;
};
class PlayersName: Title
{
	idc = 2009;
	style = 1;

	x = -2.85 * GUI_GRID_W + GUI_GRID_X;
	y = 0.03 * GUI_GRID_H + GUI_GRID_Y;
	w = 46 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorText[] = {0.95,0.95,0.95,1};
};
class Life_RscTitleBackgroundCELL: Life_RscText
{
	idc = -1;

	x = -3 * GUI_GRID_W + GUI_GRID_X;
	y = 14 * GUI_GRID_H + GUI_GRID_Y;
	w = 32.7688 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class itemHeader: Life_RscText
{
	idc = -1;

	text = "aktuelle Items"; //--- ToDo: Localize;
	x = 18.5 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class licenseHeader: Life_RscText
{
	idc = -1;

	text = "Lizenzen"; //--- ToDo: Localize;
	x = 7 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class moneySHeader: Life_RscText
{
	idc = -1;

	text = "Geld Statistiken"; //--- ToDo: Localize;
	x = -2.5 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.76 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorBackground[] = {0.07,0.45,0,1};
};
class itemList: Life_RscListBox
{
	idc = 2005;

	x = 18.5 * GUI_GRID_W + GUI_GRID_X;
	y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 7.50001 * GUI_GRID_H;
};
class moneyEdit: Life_RscEdit
{
	idc = 2018;

	text = "1"; //--- ToDo: Localize;
	x = -2 * GUI_GRID_W + GUI_GRID_X;
	y = 7 * GUI_GRID_H + GUI_GRID_Y;
	w = 7.2 * GUI_GRID_W;
	h = 0.750001 * GUI_GRID_H;
};
class NearPlayers: Life_RscCombo
{
	idc = 2022;

	x = -2 * GUI_GRID_W + GUI_GRID_X;
	y = 8 * GUI_GRID_H + GUI_GRID_Y;
	w = 7.2 * GUI_GRID_W;
	h = 0.750001 * GUI_GRID_H;
};
class moneyDrop: Life_RscButtonMenu
{
	idc = 2001;
	onButtonClick = "[] call life_fnc_giveMoney";

	text = "Geben"; //--- ToDo: Localize;
	x = -1 * GUI_GRID_W + GUI_GRID_X;
	y = 9.24 * GUI_GRID_H + GUI_GRID_Y;
	w = 5.2 * GUI_GRID_W;
	h = 0.900001 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class itemEdit: Life_RscEdit
{
	idc = 2010;

	text = "1"; //--- ToDo: Localize;
	x = 18.5 * GUI_GRID_W + GUI_GRID_X;
	y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 0.750001 * GUI_GRID_H;
};
class iNearPlayers: Life_RscCombo
{
	idc = 2023;

	x = 18.5 * GUI_GRID_W + GUI_GRID_X;
	y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 0.750001 * GUI_GRID_H;
};
class DropButton: Life_RscButtonMenu
{
	idc = 2002;
	onButtonClick = "[] call life_fnc_giveItem;";

	text = "Geben"; //--- ToDo: Localize;
	x = 24.4 * GUI_GRID_W + GUI_GRID_X;
	y = 12.57 * GUI_GRID_H + GUI_GRID_Y;
	w = 5.25 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class UseButton: Life_RscButtonMenu
{
	onButtonClick = "[] call life_fnc_useItem;";

	idc = 1019;
	text = "Benutzen"; //--- ToDo: Localize;
	x = 18.9 * GUI_GRID_W + GUI_GRID_X;
	y = 12.55 * GUI_GRID_H + GUI_GRID_Y;
	w = 5.25 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class RemoveButton: Life_RscButtonMenu
{
	onButtonClick = "[] call life_fnc_removeItem;";

	idc = 1020;
	text = "Entfernen"; //--- ToDo: Localize;
	x = 13.39 * GUI_GRID_W + GUI_GRID_X;
	y = 12.55 * GUI_GRID_H + GUI_GRID_Y;
	w = 5.25 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class ButtonClose: Life_RscButtonMenu
{
	onButtonClick = "closeDialog 0;";

	idc = 1021;
	text = "SchlieÃŸen"; //--- ToDo: Localize;
	x = 36.41 * GUI_GRID_W + GUI_GRID_X;
	y = 21.91 * GUI_GRID_H + GUI_GRID_Y;
	w = 7 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
};
class ButtonSettings: Life_RscButtonMenu
{
	onButtonClick = "[] call life_fnc_settingsMenu;";

	idc = 1022;
	text = "Einstellungen"; //--- ToDo: Localize;
	x = 30.64 * GUI_GRID_W + GUI_GRID_X;
	y = 5.56 * GUI_GRID_H + GUI_GRID_Y;
	w = 12.2241 * GUI_GRID_W;
	h = 1.17316 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
};
class ButtonMyGang: Life_RscButtonMenu
{
	idc = 2011;
	onButtonClick = "if(isNil "life_action_gangInUse") then {if(isNil {(group player) getVariable "gang_owner"}) then {createDialog "Life_Create_Gang_Diag";} else {[] spawn life_fnc_gangMenu;};};";

	text = "Meine Gang"; //--- ToDo: Localize;
	x = 30.71 * GUI_GRID_W + GUI_GRID_X;
	y = 6.91 * GUI_GRID_H + GUI_GRID_Y;
	w = 12.0682 * GUI_GRID_W;
	h = 1.12987 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
};
class Licenses_Menu: Life_RscControlsGroup
{
	idc = 1024;
	x = 6.88 * GUI_GRID_W + GUI_GRID_X;
	y = 2.79 * GUI_GRID_H + GUI_GRID_Y;
	w = 11.2 * GUI_GRID_W;
	h = 9.50002 * GUI_GRID_H;
};
class ButtonKeys: Life_RscButtonMenu
{
	idc = 2013;
	onButtonClick = "createDialog "Life_key_management";";

	text = "SchlÃ¼sselbund"; //--- ToDo: Localize;
	x = 30.67 * GUI_GRID_W + GUI_GRID_X;
	y = 8.18 * GUI_GRID_H + GUI_GRID_Y;
	w = 12.1721 * GUI_GRID_W;
	h = 1.12987 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
};
class ButtonAdminMenu: Life_RscButtonMenu
{
	idc = 2021;
	onButtonClick = "createDialog "life_admin_menu";";

	text = "ADMIN-MENU"; //--- ToDo: Localize;
	x = 30.6 * GUI_GRID_W + GUI_GRID_X;
	y = 9.44 * GUI_GRID_H + GUI_GRID_Y;
	w = 12.224 * GUI_GRID_W;
	h = 1.12987 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.3,1,0.34,1};
};
class ButtonSyncData: Life_RscButtonMenu
{
	onButtonClick = "[] call SOCK_fnc_syncData;";

	idc = 1027;
	text = "Daten speichern"; //--- ToDo: Localize;
	x = 30.71 * GUI_GRID_W + GUI_GRID_X;
	y = 4.08 * GUI_GRID_H + GUI_GRID_Y;
	w = 12.1039 * GUI_GRID_W;
	h = 1.25974 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.8};
};
class Notruf: Life_RscButtonMenu
{
	onButtonClick = "hint'comming Soon';";

	idc = 1028;
	text = "---------------NOTRUF---------------"; //--- ToDo: Localize;
	x = 30.75 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 12 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.79,0.01,0,1};
};
class TitleCELL: Life_RscTitle
{
	idc = 3001;

	text = "Altis Mobilfunk"; //--- ToDo: Localize;
	x = -2.5 * GUI_GRID_W + GUI_GRID_X;
	y = 14 * GUI_GRID_H + GUI_GRID_Y;
	w = 24 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorText[] = {0.95,0.95,0.95,1};
};
class TextToSend: Life_RscTitle
{
	idc = 3002;

	text = "Deine Nachricht:"; //--- ToDo: Localize;
	x = -2.96 * GUI_GRID_W + GUI_GRID_X;
	y = 15.29 * GUI_GRID_H + GUI_GRID_Y;
	w = 24 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
	colorText[] = {0.95,0.95,0.95,1};
};
class textEdit: Life_RscEdit
{
	idc = 3003;

	x = 0.232104 * safezoneW + safezoneX;
	y = 0.590385 * safezoneH + safezoneY;
	w = 0.287738 * safezoneW;
	h = 0.0269657 * safezoneH;
};
class TextMsgButton: Life_RscButtonMenu
{
	idc = 3015;
	onButtonClick = "[] call TON_fnc_cell_textmsg";

	text = "Nachricht:"; //--- ToDo: Localize;
	x = -2.5 * GUI_GRID_W + GUI_GRID_X;
	y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class PlayerListCell: Life_RscCombo
{
	idc = 3004;

	x = 21.6 * GUI_GRID_W + GUI_GRID_X;
	y = 15.28 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 0.999999 * GUI_GRID_H;
};
class TextCopButton: Life_RscButtonMenu
{
	idc = 3016;
	onButtonClick = "[] call TON_fnc_cell_textcop";

	text = "An die Polizei"; //--- ToDo: Localize;
	x = 6.5 * GUI_GRID_W + GUI_GRID_X;
	y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class TextAdminButton: Life_RscButtonMenu
{
	idc = 3017;
	onButtonClick = "[] call TON_fnc_cell_textadmin";

	text = "An die Admins"; //--- ToDo: Localize;
	x = 15.5 * GUI_GRID_W + GUI_GRID_X;
	y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class AdminMsgButton: Life_RscButtonMenu
{
	idc = 3020;
	onButtonClick = "[] call TON_fnc_cell_adminmsg";

	text = "Admin-Nachricht"; //--- ToDo: Localize;
	x = 6.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class AdminMsgAllButton: Life_RscButtonMenu
{
	idc = 3021;
	onButtonClick = "[] call TON_fnc_cell_adminmsgall";

	text = "Admin-Nachricht an alle"; //--- ToDo: Localize;
	x = 15.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.07,0.45,0,1};
};
class EMSRequest: Life_RscButtonMenu
{
	idc = 3022;
	onButtonClick = "[] call TON_fnc_cell_emsrequest";

	text = "An die SanitÃ¤ter"; //--- ToDo: Localize;
	x = -2.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
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
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
