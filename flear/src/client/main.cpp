
#include <iostream>

#include <SDL.h>

#include "..\utils\sdl_manager.h"

int main( int argc , char *argv[] )
{
	flear :: utils :: SDLManager sdlMan;
	sdlMan.LoadSDL();

	std :: cin.get();

	return ( EXIT_SUCCESS );
}