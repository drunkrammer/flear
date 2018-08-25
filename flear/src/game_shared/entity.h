
#pragma once

namespace flear
{
	namespace game_shared
	{
		// Entity is base class for all other objects.
		// For example scenes , player , bullets , enemy and NPCs can derive from "Entity"
		// Contains Awake , Start , Event , Update and Render functions.
		class Entity
		{
			public:

			// Awake function will be called when entity is created. (Once)
			virtual void Awake();

			// Start function will be called after awake function. (Once)
			virtual void Start();

			// Event function keeps track of specific events. (Every frame)
			virtual void Event();

			// Update function runs every frame.
			virtual void Update();

			// Renders the entity. (Every frame)
			virtual void Render();
		};
	}
}
