
#pragma once

#include <vector>

namespace flear
{
	namespace game_shared
	{
		class GameObject;

		class Scene : public Entity
		{
			public:

			// Attaches the given game object into game objects list.
			// So functions of game object can be called.
			void AttachGameObject( GameObject *obj );

			// Scene loop calls the Event , Update and render functions of attached game objects.
			void SceneLoop();

			// Returns true if scene is running.
			bool GetSceneStatus();

			// Updates the status of scene with given bool.
			// Scene won't run or stop runnig if "false" value is passed as parameter.
			void SetSceneStatus( bool st );

			private:

			// Will be false if scene isn't running.
			bool m_Active = true;

			// Game objects that attached to scene.
			std :: vector< GameObject* > m_Objects; 

			// Awake function is going to be called before start function and only once.
			// Awake function calls the other "awake" function of other game objects.
			void Awake() override;

			// Start function is going to be called after awake function and only once.
			// Start function calls the other "start" function of other game objects.
			void Start() override;

			// Event function is calling the "event" function of attached game objects , every frame.
			void Event() override;

			// Update function is calling the "update" function of attached game objects , every frame.
			void Update() override;

			// Render function is calling the "render" function of attached game objects , every frame.
			void Render() override;
		};
	}
}