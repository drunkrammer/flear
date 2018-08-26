
#include <iostream>

#include <SDL.h>

#include "..\graph\display.h"
#include "..\game_shared\game_object.h"
#include "..\game_shared\scene.h"
#include "..\temp\player.h"

using namespace flear :: game_shared;
using namespace flear :: graph;

SDL_Renderer *rnd = NULL;

int main( int argc , char *argv[] )
{
	// Create our window.
	Display gameWindow( "Flear" , 800 , 600 , rnd , false );

	// Create our scene.
	Scene test;

	// Create player.
	Player *ply = new Player();

	// Attach player into scene.
	test.AttachGameObject( ply );

	// Run the scene's main loop.
	test.SceneLoop();

	delete ( ply );

	return ( EXIT_SUCCESS );
}