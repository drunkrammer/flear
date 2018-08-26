
#include <SDL.h>

#include "display.h"

namespace flear
{
	namespace graph
	{
		Display ::  Display( const std :: string &title , int width , int height , SDL_Renderer *rnd , bool isFullScreen )
		{
			// Before creating a new window we should check if it is alreayd created.
			if ( m_Win == NULL )
			{
				// Window isn't created before.
				int flg = SDL_WINDOW_SHOWN;
				if ( isFullScreen ) flg = SDL_WINDOW_FULLSCREEN;

				m_Win = SDL_CreateWindow( title.c_str() , SDL_WINDOWPOS_CENTERED , SDL_WINDOWPOS_CENTERED , width , height , flg );

				// Check if window created successfully.
				if ( m_Win != NULL )
				{
					// Window created.
					rnd = SDL_CreateRenderer( m_Win , -1 , 0 );
					if ( rnd != NULL ) flear :: utils :: Stream :: Log( "SDL window successfully created with renderer !" );
					else               flear :: utils :: Stream :: Log( "Failed to create renderer for window !" );
				}
				else
				{
					// Failed to create window.
					flear :: utils :: Stream :: Log( SDL_GetError() );
					SDL_Quit();
				}
			}
			else
			{
				// Window already created before.
				flear :: utils :: Stream :: Log( "Failed to create SDL window , the window is already exists !" );
				SDL_Quit();
			}
		}

		SDL_Window *Display :: GetWindow()
		{
			return ( m_Win );
		}

		Display :: ~Display()
		{
			SDL_DestroyWindow( m_Win );
		}
	}
}