
#pragma once

namespace flear
{
	namespace utils
	{
		class SDLManager
		{
			public:

			// Loads SDL library and uses "SDL_INIT_EVERYTHING" as default flag.
			void LoadSDL();

			// Overloaded version of "LoadSDL()" function. You can pass a custom flag if you want to load specific part of SDL.
			void LoadSDL( int flg );

			// Returns the current load status of SDL library , true if it is loaded before , false if it isn't.
			bool GetSDLStatus();

			private :

			// Current status of SDL library , false as default.
			bool m_Status = false;

			// Checks the result of "SDL_INIT()" function.
			bool CheckInitResult( int initResult );

		};
	}
}
