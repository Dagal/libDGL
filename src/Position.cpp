/*
 * Position.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "Position.h"

namespace DGL
{
	Position::Position() : Vector3D()
	{
		matrixSaved = false;
	}

	Position::~Position()
	{
	}

	void Position::drawObject(Uint32 ellapsedTime)
	{
		cout << "Position : " << x << " " << y << " " << z << endl;
		glTranslated(x,y,z);
	}
}
