/*
 * DGLRotation.cpp
 *
 *  Created on: 18 févr. 2014
 *      Author: dagal
 */

#include "DGLRotation.h"

DGLRotation::DGLRotation() : DGLVector3D()
{
	matrixSaved = false;
	a = 0;
}

DGLRotation::~DGLRotation()
{
	// TODO Auto-generated destructor stub
}

void DGLRotation::setA(double av)
{
	a = av;
}

double DGLRotation::getA()
{
	return a;
}

void DGLRotation::set(double av, double ax, double ay, double az)
{
	a = av;
	x = ax;
	y = ay;
	z = az;
}

void DGLRotation::drawObject(Uint32 ellapsedTime)
{
	glRotated(a,x,y,z);
}
