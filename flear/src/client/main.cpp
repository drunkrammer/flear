
#include <iostream>

#include "..\math\vector2D.h"

int main( int argc , char *argv[] )
{
	flear :: math :: Vector2D testVec( -2 , 0 );
	std :: cout << testVec.GetLength() << std :: endl;
	testVec.Normalize();
	std :: cout << testVec.GetLength() << std :: endl;

	std :: cin.get();

	return ( EXIT_SUCCESS );
}