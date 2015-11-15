/*
 * Position.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "DGL/Position.h"

namespace DGL
{
	Position::Position() :
	    Vector3D()
	{
	}

	Position::~Position()
	{
	}

	void Position::drawObject(Uint32 ellapsedTime)
	{
		glTranslated(getX(), getY(), getZ());
	}
}
