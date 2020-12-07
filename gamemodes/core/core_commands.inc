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
	This is the commands module, basically for uncategorized commands for the server,
	most likely to be sorted soon.
	
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

#include <YSI_Visual\y_commands>

YCMD:kick(playerid, params[], help)
{
	SendClientMessage(playerid, COLOR_AQUA, "Kickik-BA!");
	return 1;
}