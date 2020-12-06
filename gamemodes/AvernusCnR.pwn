#include <a_samp>
#include <streamer>
#include <sscanf2>
#define YSI_NO_OPTIMISATION_MESSAGE
#define YSI_NO_CACHE_MESSAGE
#define YSI_NO_VERSION_CHECK

#include "./core/general_commands.pwn"
#include "./core/dialogs.pwn"

main()
{
	print("   _____                                          _________       __________ ");
	print("  /  _  \\___  __ ___________  ____  __ __  ______ \\_   ___ \\  ____\\______   \\");
	print(" /  /_\\  \\  \\/ // __ \\_  __ \\/    \\|  |  \\/  ___/ /    \\  \\/ /    \\|       _/");
	print("/    |    \\   /\\  ___/|  | \\/   |  \\  |  /\\___ \\  \\     \\___|   |  \\    |   \\");
	print("\\____|__  /\\_/  \\___  >__|  |___|  /____//____  >  \\______  /___|  /____|_  /");
	print("        \\/          \\/           \\/           \\/          \\/     \\/       \\/ ");              
}

public OnGameModeInit()
{
	SetGameModeText("Avernus CnR");
	AddPlayerClass(0, 1958.3783, 1343.1572, 15.3746, 269.1425, 0, 0, 0, 0, 0, 0);
	return 1;
}

public OnGameModeExit()
{
	return 1;
}

public OnPlayerRequestClass(playerid, classid)
{
	SetPlayerPos(playerid, 1958.3783, 1343.1572, 15.3746);
	SetPlayerCameraPos(playerid, 1958.3783, 1343.1572, 15.3746);
	SetPlayerCameraLookAt(playerid, 1958.3783, 1343.1572, 15.3746);
	return 1;
}

public OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	new help_string[256];
	strcat(help_string, "General Commands\n");
	strcat(help_string, "Robber Commands\n");
	strcat(help_string, "Cops Commands\n");
	strcat(help_string, "Special Agent Commands\n");
	strcat(help_string, "House Commands\n");
	strcat(help_string, "Casino Commands\n");
	strcat(help_string, "Job Commands\n");
	switch(dialogid)
	{
		case DIALOG_HELP:
		{
			new string[512];
			if(response)
			{
				if(listitem == 0)
				{
					strcat(string, "Help\n");
					ShowPlayerDialog(playerid, DIALOG_GENERALCOMMANDS, DIALOG_STYLE_LIST, "General Commands", string, "Select", "Cancel");
				}
				if(listitem == 1)
				{
					strcat(string, "Rob\n");
					ShowPlayerDialog(playerid, DIALOG_ROBBERCOMMANDS, DIALOG_STYLE_LIST, "Robber Commands", string, "Select", "Cancel");
				}
				if(listitem == 2)
				{
					strcat(string, "Cuff\n");
					ShowPlayerDialog(playerid, DIALOG_COPSCOMMANDS, DIALOG_STYLE_LIST, "Cops Commands", string, "Select", "Cancel");
				}
				if(listitem == 3)
				{
					strcat(string, "Find\n");
					ShowPlayerDialog(playerid, DIALOG_SPECIALAGENTCOMMANDS, DIALOG_STYLE_LIST, "Special Agent Commands", string, "Select", "Cancel");
				}
				if(listitem == 4)
				{
					strcat(string, "Withdraw\n");
					ShowPlayerDialog(playerid, DIALOG_HOUSECOMMANDS, DIALOG_STYLE_LIST, "House Commands", string, "Select", "Cancel");
				}
				if(listitem == 5)
				{
					strcat(string, "Dicebet\n");
					ShowPlayerDialog(playerid, DIALOG_CASINOCOMMANDS, DIALOG_STYLE_LIST, "Casino Commands", string, "Select", "Cancel");
				}
				if(listitem == 6)
				{
					strcat(string, "Join\n");
					ShowPlayerDialog(playerid, DIALOG_JOBCOMMANDS, DIALOG_STYLE_LIST, "Job Commands", string, "Select", "Cancel");
				}
			}
		}
		case DIALOG_GENERALCOMMANDS:
		{
			if(response)
			{

			}
			else
			{
				ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", help_string, "Select", "Cancel");
			}
		}
		case DIALOG_ROBBERCOMMANDS:
		{
			if(response)
			{

			}
			else
			{
				ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", help_string, "Select", "Cancel");
			}
		}
		case DIALOG_COPSCOMMANDS:
		{
			if(response)
			{

			}
			else
			{
				ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", help_string, "Select", "Cancel");
			}
		}
		case DIALOG_SPECIALAGENTCOMMANDS:
		{
			if(response)
			{

			}
			else
			{
				ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", help_string, "Select", "Cancel");
			}
		}
		case DIALOG_HOUSECOMMANDS:
		{
			if(response)
			{

			}
			else
			{
				ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", help_string, "Select", "Cancel");
			}
		}
		case DIALOG_CASINOCOMMANDS:
		{
			if(response)
			{

			}
			else
			{
				ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", help_string, "Select", "Cancel");
			}
		}
		case DIALOG_JOBCOMMANDS:
		{
			if(response)
			{

			}
			else
			{
				ShowPlayerDialog(playerid, DIALOG_HELP, DIALOG_STYLE_LIST, "Avernus Cops And Robbers Help", help_string, "Select", "Cancel");
			}
		}
	}
	return 1;
}