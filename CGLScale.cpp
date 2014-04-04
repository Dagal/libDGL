/*
 * CGLScale.cpp
 *
 *  Created on: 17 févr. 2014
 *      Author: dagal
 */

#include "CGLScale.h"

CGLScale::CGLScale() : CGLVector3D()
{
	matrixSaved = false;
}

CGLScale::~CGLScale()
{
	// TODO Auto-generated destructor stub
}

void CGLScale::drawObject(Uint32 ellapsedTime)
{
	glScaled(x,y,z);
}
