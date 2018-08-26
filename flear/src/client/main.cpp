
#include <iostream>

#include <SDL.h>

#include "..\graph\display.h"
#include "..\game_shared\game_object.h"
#include "..\game_shared\scene.h"

using namespace flear :: game_shared;
using namespace flear :: graph;

SDL_Renderer *rnd = NULL;

int main( int argc , char *argv[] )
{
	// Create our window.
	Display gameWindow( "Flear" , 800 , 600 , rnd , false );

	// Create our scene.
	Scene gameScene;

	// Create player.
	GameObject *player = new GameObject();

	// Attach player to our scene.
	gameScene.AttachGameObject( player );

	// Now enable scene to run and enter the scene loop.
	gameScene.SetSceneStatus( true );
	gameScene.SceneLoop();

	delete ( player );

	return ( EXIT_SUCCESS );
}