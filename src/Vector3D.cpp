/*
 * Vector3D.cpp
 *
 *  Created on: 25 janv. 2014
 *      Author: dagal
 */

#include "Vector3D.h"

namespace DGL
{
	Vector3D::Vector3D(Object* parent) :
	    BasicObject(parent).
	    mX(this),
	    mY(this),
	    mZ(this)
	{
	}

	Vector3D::~Vector3D() {
		// TODO Auto-generated destructor stub
	}

	double Vector3D::getX()
	{
		return x;
	}

	double Vector3D::getY()
	{
		return y;
	}

	double Vector3D::getZ()
	{
		return z;
	}

	void Vector3D::set(double xv, double yv, double zv)
	{
		x = xv;
		y = yv;
		z = zv;
	}

	void Vector3D::setX(double val)
	{
		x = val;
	}

	void Vector3D::setY(double val)
	{
		y = val;
	}

	void Vector3D::setZ(double val)
	{
		z = val;
	}

}
