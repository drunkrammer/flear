
#include <math.h>

#include "vector2D.h"
#include "..\utils\log.h"

namespace flear
{
	namespace math
	{
		Vector2D :: Vector2D( float x , float y )
		{
			this->m_X = x;
			this->m_Y = y;
		}

		float Vector2D :: GetMagnitude()
		{
			// The magnitude of 2D vector is -> sqrt of( ( X^2 ) + ( Y^2 ) )
			return sqrt( ( m_X * m_X ) + ( m_Y * m_Y ) );
		}

		void Vector2D :: Normalize()
		{
			// This process changes vector's magnitude to 1.
			if ( ( this->m_X == 0 ) && ( this->m_Y == 0 ) )
			{
				Log( "Can not normalize vector with 0 x and y components !" );
				return;
			}
			else
			{
				float vecLength = this->GetMagnitude();

				this->m_X = ( this->m_X / vecLength );
				this->m_Y = ( this->m_Y / vecLength );
			}
		}
	}
}