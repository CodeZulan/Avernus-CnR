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
	This is Skin Select Module for the player to choose when they first connect to the server.
    It handles stuffs like Character Selection Menu, Textdraws and Player Classes.
	
*/

//////////////////////////////////////////////////////////////////////////////
//   ____  ____  ____  ____  _  _  ____  ____  _  _  ___  ____  ____  ___   //
//  (  _ \( ___)(  _ \( ___)( \( )(  _ \( ___)( \( )/ __)(_  _)( ___)/ __)  //
//   )(_) ))__)  )___/ )__)  )  (  )(_) ))__)  )  (( (__  _)(_  )__) \__ \  //
//  (____/(____)(__)  (____)(_)\_)(____/(____)(_)\_)\___)(____)(____)(___/  //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

#include <YSI_Coding\y_hooks> 

#define WORLD_CHARACTERSELECT			100

hook OnGameModeInit()
{
    for(new i; i < 320; i++)
	{
		AddPlayerClass(i, 1993.1859, 1245.4823, 10.8203, 270.0, 24, 9999, 27, 9999, 31, 9999);
	}
}

hook OnPlayerRequestClass(playerid, classid)
{
	SetPlayerVirtualWorld(playerid, WORLD_CHARACTERSELECT);
	SetPlayerPos(playerid, 2004.7240, 1545.0216, 13.5859);
	SetPlayerCameraPos(playerid, 2007.5632, 1544.8468, 15.0153);
	SetPlayerCameraLookAt(playerid, 2004.7240,1545.0216,13.5859);
	return 1;
}