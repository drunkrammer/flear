
#pragma once

namespace flear
{
	namespace math
	{
		class Vector2D
		{
			public:

			// Creates 2D vector with given x and y components.
			Vector2D( float x , float y );
			
			// Returns the magnitude of vector.
			float GetMagnitude();

			// Sets vector's magnitude to 1.
			void Normalize();

			private:

			// X component of vector.
			float m_X;

			// Y component of vector.
			float m_Y;
		};
	}
}
