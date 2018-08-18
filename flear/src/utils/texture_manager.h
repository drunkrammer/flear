
#pragma once

#include "log.h"

namespace flear
{
	namespace utils
	{
		class TextureManager
		{
			public:

			// Loads a texture from given path and for renderer.
			// Returns a loaded texture. (Can return null if fails to load texture)
			static SDL_Texture *LoadTexture( const std :: string &filePath , SDL_Renderer *rnd );
		};
	}
}
