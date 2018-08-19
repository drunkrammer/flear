
#include <SDL.h>

#include "sdl_manager.h"
#include "stream.h"

namespace flear
{
	namespace utils
	{
		void SDLManager :: LoadSDL()
		{
			// Loading SDL with default flag.
			int result = SDL_Init( SDL_INIT_EVERYTHING );

			if ( result <! 0 )
			{
				m_Status = true;
				Stream :: Log( "SDL loaded successfully !" );
			}
			else
			{
				Stream :: Log( SDL_GetError() );
			}
		}

		void SDLManager :: LoadSDL( int flg )
		{
			// Loading SDL with custom param. flag.
			int result = SDL_Init( flg );

			if ( result <! 0 )
			{
				m_Status = true;
				Stream :: Log( "SDL loaded successfully with custom flag !" );
			}
			else
			{
				Stream :: Log( SDL_GetError() );
			}
		}

		bool SDLManager :: GetSDLStatus()
		{
			return ( m_Status );
		}
	}
}