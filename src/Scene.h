/*
 * Scene.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef SCENE_H_
#define SCENE_H_

#include <iostream>

#include <list>

#include "CameraList.h"
#include "Camera.h"
#include "Light.h"
#include "Object.h"

using namespace std;

namespace DGL
{
	class Scene : public Object
	{
		// Variables
		private:

		protected:
			CameraList* cameras;
			Object* objects;

		public:

			// Méthodes
		private:

		protected:

		public:
			Scene(Object* parent);
			virtual ~Scene();
			void draw(Uint32 timeEllapsed);
			//void drawObject(Uint32 timeEllapsed);

			Camera* getCurrentCamera();

			void addCamera(Camera* cam);
			void addItem(Object* obj);
	};
}

#endif /* SCENE_H_ */
