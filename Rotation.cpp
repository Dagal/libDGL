/*
 * Rotation.cpp
 *
 *  Created on: 18 févr. 2014
 *      Author: dagal
 */

#include "Rotation.h"

namespace DGL
{
	Rotation::Rotation() : Vector3D()
	{
		matrixSaved = false;
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

	void Rotation::set(double av, double ax, double ay, double az)
	{
		a = av;
		x = ax;
		y = ay;
		z = az;
	}

	void Rotation::drawObject(Uint32 ellapsedTime)
	{
		glRotated(a,x,y,z);
	}
}