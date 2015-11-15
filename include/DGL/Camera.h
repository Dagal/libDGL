/*
 * CCameraGL.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef CAMERA_H_
#define CAMERA_H_

#include <GL/glu.h>
#include <SDL/SDL.h>

#include "GeneralObject.h"
namespace DGL
{
	class Camera : public GeneralObject
	{
		// Variables
		private:
			double posX,posY,posZ;
			double lookX,lookY,lookZ;
			double angleX,angleY,angleZ;

		protected:

		public:

			// Méthodes
		private:

		protected:

		public:
			Camera(Object* parent);
			virtual ~Camera();

			void draw(Uint32 timeEllapsed);
			void drawObject(Uint32 timeEllapsed);
			void onMouseButton(SDL_MouseButtonEvent& event);
	};
}
#endif /* CAMERA_H_ */
