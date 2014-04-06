/*
 * DGLVector3D.cpp
 *
 *  Created on: 25 janv. 2014
 *      Author: dagal
 */

#include "DGLVector3D.h"

DGLVector3D::DGLVector3D() : DGLObject()
{
	x = 0;
	y = 0;
	z = 0;
}

DGLVector3D::~DGLVector3D() {
	// TODO Auto-generated destructor stub
}

double DGLVector3D::getX()
{
	return x;
}

double DGLVector3D::getY()
{
	return y;
}

double DGLVector3D::getZ()
{
	return z;
}

void DGLVector3D::set(double xv, double yv, double zv)
{
	x = xv;
	y = yv;
	z = zv;
}

void DGLVector3D::setX(double val)
{
	x = val;
}

void DGLVector3D::setY(double val)
{
	y = val;
}

void DGLVector3D::setZ(double val)
{
	z = val;
}

