
#include "entity.h"
#include "..\utils\stream.h"

namespace flear
{
	namespace game_shared
	{
		void Entity :: Awake()
		{
			flear :: utils :: Stream :: Log( "Awake from base class Entity !" );
		}

		void Entity :: Start()
		{
			flear :: utils :: Stream :: Log( "Start from base class Entity !" );
		}

		void Entity :: Event()
		{
			flear :: utils :: Stream :: Log( "Event from base class Entity !" );
		}

		void Entity :: Update()
		{
			flear :: utils :: Stream :: Log( "Update from base class Entity !" );
		}

		void Entity :: Render()
		{
			flear :: utils :: Stream :: Log( "Render from base class Entity !" );
		}
	}
}