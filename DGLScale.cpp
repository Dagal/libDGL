/*
 * DGLScale.cpp
 *
 *  Created on: 17 févr. 2014
 *      Author: dagal
 */

#include "DGLScale.h"

DGLScale::DGLScale() : DGLVector3D()
{
	matrixSaved = false;
}

DGLScale::~DGLScale()
{
	// TODO Auto-generated destructor stub
}

void DGLScale::drawObject(Uint32 ellapsedTime)
{
	glScaled(x,y,z);
}
