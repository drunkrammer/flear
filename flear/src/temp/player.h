
#pragma once

#include "..\game_shared\game_object.h"

namespace flear
{
	namespace game_shared
	{
		class Player : public GameObject
		{
			public:

			void Awake() override;

			void Start() override;

			void Event() override;

			void Update() override;

			void Render() override;
		};
	}
}
