/*
 * CCameraGL.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef DGLCAMERA_H_
#define DGLCAMERA_H_

#include <GL/glu.h>
#include <SDL/SDL.h>

#include "DGLObject.h"

class DGLCamera : public DGLObject
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
	DGLCamera();
	virtual ~DGLCamera();

	void draw(Uint32 timeEllapsed);
	void drawObject(Uint32 timeEllapsed);
	void onMouseButton(SDL_MouseButtonEvent& event);
};

#endif /* DGLCAMERA_H_ */
