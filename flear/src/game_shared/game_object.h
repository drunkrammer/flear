
#pragma once

#include "entity.h"
#include "..\utils\stream.h"

namespace flear
{
	namespace game_shared
	{
		// Game objects are entities that can have "Awake , start , event , update and render" functions.
		// Game objects derives from "Entity" base class.
		class GameObject : public Entity
		{
			public:

			// Returns the name of game object.
			std :: string GetName();

			// Returns the tag of game object.
			std :: string GetTag();

			// Sets the object's new name with given string.
			void SetName( std :: string newName );

			// Sets the object's new tag with given string.
			void SetTag( std :: string newTag );

			private:

			// Name of game object.
			std :: string m_Name = "";

			// Tag of game object.
			std :: string m_Tag  = "";
		};
	}
}
