
#include <iostream>

#include <SDL.h>

#include "..\utils\sdl_manager.h"
#include "..\math\vector2D.h"
#include "..\graph\display.h"

int main( int argc , char *argv[] )
{
	flear :: utils :: SDLManager sdlMan;
	sdlMan.LoadSDL();

	SDL_Renderer *rnd = NULL;
	flear :: graph :: Display wnd( "Flear Test Window" , 800 , 600 , rnd , false );

	std :: cin.get();

	return ( EXIT_SUCCESS );
}