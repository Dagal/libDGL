/*
 * CGLVector3D.cpp
 *
 *  Created on: 25 janv. 2014
 *      Author: dagal
 */

#include "CGLVector3D.h"

CGLVector3D::CGLVector3D() : CGLObject()
{
	x = 0;
	y = 0;
	z = 0;
}

CGLVector3D::~CGLVector3D() {
	// TODO Auto-generated destructor stub
}

double CGLVector3D::getX()
{
	return x;
}

double CGLVector3D::getY()
{
	return y;
}

double CGLVector3D::getZ()
{
	return z;
}

void CGLVector3D::set(double xv, double yv, double zv)
{
	x = xv;
	y = yv;
	z = zv;
}

void CGLVector3D::setX(double val)
{
	x = val;
}

void CGLVector3D::setY(double val)
{
	y = val;
}

void CGLVector3D::setZ(double val)
{
	z = val;
}

