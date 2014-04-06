/*
 * DGLPosition.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "DGLPosition.h"

DGLPosition::DGLPosition() : DGLVector3D()
{
	matrixSaved = false;
}

DGLPosition::~DGLPosition()
{
}

void DGLPosition::drawObject(Uint32 ellapsedTime)
{
	cout << "DGLPosition : " << x << " " << y << " " << z << endl;
	glTranslated(x,y,z);
}
