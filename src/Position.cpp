/*
 * Position.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "Position.h"

namespace DGL
{
	Position::Position(Object* parent) :
	    Vector3D(parent)
	{
		setMatrixSaved(false);
	}

	Position::~Position()
	{
	}

	void Position::drawObject(Uint32 ellapsedTime)
	{
		std::cout << "Position : " << x << " " << y << " " << z << std::endl;
		glTranslated(x,y,z);
	}
}
