
#include <iostream>

#include <SDL.h>

#include "..\math\vector2D.h"

int main( int argc , char *argv[] )
{
	if ( SDL_Init( SDL_INIT_EVERYTHING ) < 0 ) std :: cout << "Failed to load SDL !" << std :: endl;
	else                                       std :: cout << "SDL is working !" << std :: endl;

	flear :: math :: Vector2D testingVec( 3 , 0 );
	std :: cout << testingVec.GetMagnitude() << std :: endl;
	testingVec.Normalize();
	std :: cout << testingVec.GetMagnitude() << std :: endl;

	std :: cin.get();

	return ( EXIT_SUCCESS );
}