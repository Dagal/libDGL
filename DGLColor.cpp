/*
 * DGLColor.cpp
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#include "DGLColor.h"

DGLColor::DGLColor() : DGLVector3D()
{
	matrixSaved = false;
	// TODO Auto-generated constructor stub
	alpha = 0;
}

DGLColor::~DGLColor()
{
	// TODO Auto-generated destructor stub
}

void DGLColor::set(double rv, double gv, double bv, double av)
{
	x = rv;
	y = gv;
	z = bv;
	alpha = av;
}

void DGLColor::setR(double rv)
{
	x = rv;
}

void DGLColor::setG(double gv)
{
	y = gv;
}

void DGLColor::setB(double bv)
{
	z = bv;
}

void DGLColor::setA(double av)
{
	alpha = av;
}

double DGLColor::getR()
{
	return x;
}

double DGLColor::getG()
{
	return y;
}

double DGLColor::getB()
{
	return z;
}

double DGLColor::getA()
{
	return alpha;
}

void DGLColor::drawObject(Uint32 timeEllapsed)
{
	cout << "DGLColor : " << x << " " << y << " " << z << endl;
	glColor4d(x,y,z,alpha);
}
