/*
 * Color.cpp
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#include "Color.h"

namespace DGL
{
	Color::Color(Object* parent) :
	    Vector3D(parent)
	{
		setMatrixSaved(false);
		// TODO Auto-generated constructor stub
		alpha = 0;
	}

	Color::~Color()
	{
		// TODO Auto-generated destructor stub
	}

	void Color::set(double rv, double gv, double bv, double av)
	{
		x = rv;
		y = gv;
		z = bv;
		alpha = av;
	}

	void Color::setR(double rv)
	{
		x = rv;
	}

	void Color::setG(double gv)
	{
		y = gv;
	}

	void Color::setB(double bv)
	{
		z = bv;
	}

	void Color::setA(double av)
	{
		alpha = av;
	}

	double Color::getR()
	{
		return x;
	}

	double Color::getG()
	{
		return y;
	}

	double Color::getB()
	{
		return z;
	}

	double Color::getA()
	{
		return alpha;
	}

	void Color::drawObject(Uint32 timeEllapsed)
	{
		std::cout << "Color : " << x << " " << y << " " << z << std::endl;
		glColor4d(x,y,z,alpha);
	}
}
