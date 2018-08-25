
#include <iostream>
#include <string>

#include <SDL.h>

#include "..\game_shared\game_object.h"

using namespace flear :: game_shared;

int main( int argc , char *argv[] )
{
	// Create our game object.
	GameObject player;

	player.SetName( "agneng" );
	player.SetTag( "Player" );

	std :: string name = player.GetName();
	std :: string tag  = player.GetTag();

	player.Awake();
	player.Start();
	player.Event();
	player.Update();
	player.Render();

	std :: cout << name << std :: endl;
	std :: cout << tag << std :: endl;

	std :: cin.get();

	return ( EXIT_SUCCESS );
}