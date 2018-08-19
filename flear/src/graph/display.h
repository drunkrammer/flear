
#pragma once

#include "..\utils\stream.h"

namespace flear
{
	namespace graph
	{
		class Display
		{
			public:

			// Creates a SDL window with given title , width and height values.
			Display( const std :: string &title , int width , int height , SDL_Renderer *rnd , bool isFullScreen );

			// Destroys the window.
			~Display();

			// Current window.
			SDL_Window *wnd = NULL;
		};
	}
}
