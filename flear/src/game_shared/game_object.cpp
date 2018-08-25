
#include "game_object.h"

namespace flear
{
	namespace game_shared
	{
		std :: string GameObject :: GetName()
		{
			return ( m_Name ); 
		}

		std :: string GameObject :: GetTag()
		{
			return ( m_Tag );
		}

		void GameObject :: SetName( std :: string newName )
		{
			m_Name = newName;
		}

		void GameObject :: SetTag( std :: string newTag )
		{
			m_Tag = newTag;
		}
	}
}