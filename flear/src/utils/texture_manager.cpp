
#include <SDL.h>
#include <SDL_image.h>

#include "texture_manager.h"

namespace flear
{
	namespace utils
	{
		SDL_Texture *TextureManager :: LoadTexture( const std :: string &filePath , SDL_Renderer *rnd )
		{
			SDL_Surface *tmp = IMG_Load( filePath.c_str() );
			SDL_Texture *tex = SDL_CreateTextureFromSurface( rnd , tmp );

			if ( tex == NULL ) Log( SDL_GetError() );

			SDL_FreeSurface( tmp );

			return ( tex );
		}
	}
}