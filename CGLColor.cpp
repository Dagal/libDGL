/*
 * CGLColor.cpp
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#include "CGLColor.h"

CGLColor::CGLColor() : CGLVector3D()
{
	matrixSaved = false;
	// TODO Auto-generated constructor stub
	alpha = 0;
}

CGLColor::~CGLColor()
{
	// TODO Auto-generated destructor stub
}

void CGLColor::set(double rv, double gv, double bv, double av)
{
	x = rv;
	y = gv;
	z = bv;
	alpha = av;
}

void CGLColor::setR(double rv)
{
	x = rv;
}

void CGLColor::setG(double gv)
{
	y = gv;
}

void CGLColor::setB(double bv)
{
	z = bv;
}

void CGLColor::setA(double av)
{
	alpha = av;
}

double CGLColor::getR()
{
	return x;
}

double CGLColor::getG()
{
	return y;
}

double CGLColor::getB()
{
	return z;
}

double CGLColor::getA()
{
	return alpha;
}

void CGLColor::drawObject(Uint32 timeEllapsed)
{
	cout << "CGLColor : " << x << " " << y << " " << z << endl;
	glColor4d(x,y,z,alpha);
}
