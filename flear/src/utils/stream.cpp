

#include "stream.h"

namespace flear
{
	namespace utils
	{
		void Stream :: Log( const std :: string &msg )
		{
			std :: cout << msg.c_str() << std :: endl;
		}
	}
}