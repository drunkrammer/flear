
#include <SDL.h>

#include "sdl_manager.h"
#include "log.h"

namespace flear
{
	namespace utils
	{
		void SDLManager :: LoadSDL()
		{
			// Loading SDL with default flag.
			int result = SDL_Init( SDL_INIT_EVERYTHING );

			if ( CheckInitResult( result ) )
			{
				m_Status = true;
				Log( "SDL loaded successfully !" );
			}
			else
			{
				Log ( SDL_GetError() );
			}
		}

		void SDLManager :: LoadSDL( int flg )
		{
			// Loading SDL with custom param. flag.
			int result = SDL_Init( flg );

			if ( CheckInitResult( result ) )
			{
				m_Status = true;
				Log( "SDL loaded successfully with custom flag !" );
			}
			else
			{
				Log( SDL_GetError() );
			}
		}

		bool SDLManager :: GetSDLStatus()
		{
			return ( m_Status );
		}

		bool SDLManager :: CheckInitResult( int initResult )
		{
			if ( initResult < 0 ) return ( false );
			else                  return ( true );
		}
	}
}