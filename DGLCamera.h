/*
 * CCameraGL.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef CGLCAMERA_H_
#define CGLCAMERA_H_

#include <GL/glu.h>
#include <SDL/SDL.h>

#include "CGLObject.h"

class CGLCamera : public CGLObject
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
	CGLCamera();
	virtual ~CGLCamera();

	void draw(Uint32 timeEllapsed);
	void drawObject(Uint32 timeEllapsed);
	void onMouseButton(SDL_MouseButtonEvent& event);
};

#endif /* CGLCAMERA_H_ */
