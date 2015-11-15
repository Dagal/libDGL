/*
 * Color.cpp
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#include "DGL/Color.h"

namespace DGL
{
	Color::Color(Object* parent) :
	    BasicObject(parent),
	    Vector3D(),
	    mA()
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
