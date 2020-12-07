/*
	ABOUT:
	Avernus Cops & Robbers is a gamemode for players who wants to kill time and play with others in
	a welcoming community. A Cops & Robber gamemode offers you a gameplay to play as a Robber or a
	Cop depending on your choice! You have a freedom of choice here! Isn't that great? You can aslo
	play as a Special Agent but you need a certain amount of EXPerience to unlock this class, or if
	you want you can donate and unlock it instantly! This can help the server progress and keep running

	CREDITS:
	Avernus Cops & Robbers is made solely by CodeZulan, made possible thanks to these people:

	///////////////////////////////////
	//  Y_Cole - YSI Library         //
	//  Incognito - Streamer Plugin  //
	//  Maddinat0r - Sscanf2 Plugin  //
	//  Zeex - Crashdetect Plugin    //
	///////////////////////////////////

	MODULE:
	This is the help module, this handles stuffs that shows information for the player
	like different usage of commands and how to basically play.
	
*/

//////////////////////////////////////////////////////////////////////////////
//   ____  ____  ____  ____  _  _  ____  ____  _  _  ___  ____  ____  ___   //
//  (  _ \( ___)(  _ \( ___)( \( )(  _ \( ___)( \( )/ __)(_  _)( ___)/ __)  //
//   )(_) ))__)  )___/ )__)  )  (  )(_) ))__)  )  (( (__  _)(_  )__) \__ \  //
//  (____/(____)(__)  (____)(_)\_)(____/(____)(_)\_)\___)(____)(____)(___/  //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

#define YSI_NO_OPTIMISATION_MESSAGE
#define YSI_NO_CACHE_MESSAGE

#include <YSI_Coding\y_hooks>
#include <YSI_Visual\y_commands>

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
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
			new string[1024];
			if(response)
			{
				if(listitem == 0)
				{
					strcat(string, "Help\n");
					strcat(string, "Report\n");
					strcat(string, "Stats\n");
					strcat(string, "Skills\n");
					strcat(string, "Inventory\n");
					strcat(string, "ID\n");
					strcat(string, "GPS\n");
					strcat(string, "Wallet");
					
					ShowPlayerDialog(playerid, DIALOG_GENERALCOMMANDS, DIALOG_STYLE_LIST, "General Commands", string, "Select", "Cancel");
				}
				if(listitem == 1)
				{
					strcat(string, "Rob\n");
					strcat(string, "Robshop\n");
					strcat(string, "Robbank\n");
					strcat(string, "Lockpick");

					ShowPlayerDialog(playerid, DIALOG_ROBBERCOMMANDS, DIALOG_STYLE_LIST, "Robber Commands", string, "Select", "Cancel");
				}
				if(listitem == 2)
				{
					strcat(string, "Tazer\n");
					strcat(string, "Cuff\n");
					strcat(string, "Detain\n");
					strcat(string, "Pullover\n");
					strcat(string, "Bail");

					ShowPlayerDialog(playerid, DIALOG_COPSCOMMANDS, DIALOG_STYLE_LIST, "Cops Commands", string, "Select", "Cancel");
				}
				if(listitem == 3)
				{
					strcat(string, "Trackphone\n");
					strcat(string, "Scope\n");
					strcat(string, "Tazer\n");
					strcat(string, "Cuff\n");
					strcat(string, "Detain\n");
					strcat(string, "Bug");

					ShowPlayerDialog(playerid, DIALOG_SPECIALAGENTCOMMANDS, DIALOG_STYLE_LIST, "Special Agent Commands", string, "Select", "Cancel");
				}
				if(listitem == 4)
				{
					strcat(string, "Withdraw\n");
					strcat(string, "Deposit\n");
					strcat(string, "Balance\n");
					strcat(string, "Furniture\n");
					strcat(string, "Upgrade");

					ShowPlayerDialog(playerid, DIALOG_HOUSECOMMANDS, DIALOG_STYLE_LIST, "House Commands", string, "Select", "Cancel");
				}
				if(listitem == 5)
				{
					strcat(string, "Dicebet\n");
					strcat(string, "Coinflip\n");
					strcat(string, "Blackjack\n");
					strcat(string, "Poker\n");
					strcat(string, "Slots");

					ShowPlayerDialog(playerid, DIALOG_CASINOCOMMANDS, DIALOG_STYLE_LIST, "Casino Commands", string, "Select", "Cancel");
				}
				if(listitem == 6)
				{
					strcat(string, "Join\n");
					strcat(string, "Findjob\n");
					strcat(string, "Trucker\n");
					strcat(string, "Money Courier\n");
					strcat(string, "Smuggler\n");
					strcat(string, "Chemist\n");
					strcat(string, "Sweeper\n");
					strcat(string, "Pizza Delivery Boy\n");
					strcat(string, "Mailman\n");
					strcat(string, "Towtruck Driver\n");
					strcat(string, "Logistics Driver\n");
					strcat(string, "Taxi Driver\n");
					strcat(string, "Garbage Man\n");
					strcat(string, "Lumberjack\n");
					strcat(string, "Quarry Worker\n");
					strcat(string, "Miner\n");
					strcat(string, "Vehicle Tester\n");
					strcat(string, "Farmer\n");
					strcat(string, "Components Runner\n");
					strcat(string, "Fireman\n");

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