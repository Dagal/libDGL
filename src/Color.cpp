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
	    Vector3D(parent),
	    mA(this)
	{
		setMatrixSaved(false);
		// TODO Auto-generated constructor stub
	}

	Color::~Color()
	{
		// TODO Auto-generated destructor stub
	}

	void Color::drawObject(Uint32 timeEllapsed)
	{
		glColor4d(getR(), getG(), getB(), mA);
	}
}
