/*
 * Rotation.cpp
 *
 *  Created on: 18 févr. 2014
 *      Author: dagal
 */

#include "DGL/Rotation.h"

namespace DGL
{
	Rotation::Rotation() :
	    Vector3D()
	{
		a = 0;
	}

	Rotation::~Rotation()
	{
		// TODO Auto-generated destructor stub
	}

	void Rotation::setA(double av)
	{
		a = av;
	}

	double Rotation::getA()
	{
		return a;
	}

	void Rotation::set(const Double& av, const Double& ax, const Double& ay, const Double& az)
	{
		a = av;
		setX(ax);
		setY(ay);
		setZ(az);
	}
}
