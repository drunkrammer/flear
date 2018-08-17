
#include <math.h>

#include "vector2D.h"
#include "..\stream\log.h"

namespace flear
{
	namespace math
	{
		Vector2D :: Vector2D( float x , float y )
		{
			this->m_X = x;
			this->m_Y = y;
		}

		float Vector2D :: GetLength()
		{
			// The length of 2D vector is -> sqrt of( ( X^2 ) + ( Y^2 ) )
			return sqrt( ( m_X * m_X ) + ( m_Y * m_Y ) );
		}

		void Vector2D :: Normalize()
		{
			float vecLength = this->GetLength();

			if ( vecLength != 0 )
			{
				this->m_X = ( this->m_X / vecLength );
				this->m_Y = ( this->m_Y / vecLength );
			}
		}
	}
}