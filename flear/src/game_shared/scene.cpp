
#include <vector>

#include "entity.h"
#include "scene.h"
#include "game_object.h"

namespace flear
{
	namespace game_shared
	{
		void Scene :: AttachGameObject( GameObject *obj )
		{
			if ( obj != NULL ) m_Objects.push_back( obj );
		}

		bool Scene :: GetSceneStatus()
		{
			return ( m_Active );
		}

		void Scene :: SetSceneStatus( bool st )
		{
			if ( m_Active != st ) m_Active = st;
		}

		void Scene :: Awake()
		{
			int i;
			for ( i = 0 ; i < m_Objects.size() ; i++ )
			{
				m_Objects[ i ]->Awake();
			}
		}

		void Scene :: Start()
		{
			int i;
			for ( i = 0 ; i < m_Objects.size() ; i++ )
			{
				m_Objects[ i ]->Start();
			}
		}

		void Scene :: Event()
		{
			int i;
			for ( i = 0 ; i < m_Objects.size() ; i++ )
			{
				m_Objects[ i ]->Event();
			}
		}

		void Scene :: Update()
		{
			int i;
			for ( i = 0 ; i < m_Objects.size() ; i++ )
			{
				m_Objects[ i ]->Update();
			}
		}

		void Scene :: Render()
		{
			int i;
			for ( i = 0 ; i < m_Objects.size() ; i++ )
			{
				m_Objects[ i ]->Render();
			}
		}

		void Scene :: SceneLoop()
		{
			while ( m_Active )
			{
				Event();
				Update();
				Render();
			}
		}
	}
}