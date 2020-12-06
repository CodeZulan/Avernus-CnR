#include <YSI_Visual\y_commands>

#include "./core/dialogs.pwn"

YCMD:help(playerid, params[], help) 
{
	new string[256];
	strcat(string, "General Commands\n");
	strcat(string, "Robber Commands\n");
	strcat(string, "Cops Commands\n");
	strcat(string, "Special Agent Commands\n");
	strcat(string, "House Commands\n");
	strcat(string, "Casino Commands\n");
	strcat(string, "Job Commands\n");
	ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", string, "Select", "Cancel");
	return 1;
}

YCMD:kick(playerid, params[], help)
{
	SendClientMessage(playerid, 0xFFFFFFFF, "Kickik-BA!");
	return 1;
}