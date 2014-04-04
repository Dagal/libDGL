/*
 * CGLCamera.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "CGLCamera.h"

CGLCamera::CGLCamera() : CGLObject()
{
	objectType = 4;
	name = "Camera sans nom";
	matrixSaved = false;
	posX=1;
	posY=-2;
	posZ=2;
	lookX=0;
	lookY=0;
	lookZ=1;
	angleX=angleY=0;
	angleZ=1;

	// TODO Auto-generated constructor stub

}

CGLCamera::~CGLCamera()
{
	// TODO Auto-generated destructor stub
}

void CGLCamera::drawObject(Uint32 timeEllapsed)
{
	cout << "CGLCamera   : Place la caméra" << endl;
	gluLookAt(posX,posY,posZ,lookX,lookY,lookZ,angleX,angleY,angleZ);
}

void CGLCamera::onMouseButton(SDL_MouseButtonEvent& event)
{
	if ((event.button == SDL_BUTTON_WHEELUP) && (event.type == SDL_MOUSEBUTTONDOWN))
	{
		posX -= (posX - lookX) / 5;
		posY -= (posY - lookY) / 5;
		posZ -= (posZ - lookZ) / 5;
	}
	else if ((event.button == SDL_BUTTON_WHEELDOWN) && (event.type == SDL_MOUSEBUTTONDOWN))
	{
		posX += (posX - lookX) / 4;
		posY += (posY - lookY) / 4;
		posZ += (posZ - lookZ) / 4;
	}
}
