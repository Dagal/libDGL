/*
 * Scale.cpp
 *
 *  Created on: 17 févr. 2014
 *      Author: dagal
 */

#include "Scale.h"

namespace DGL
{
	Scale::Scale(Object* parent) :
	    Vector3D(parent)
	{
		setMatrixSaved(false);
	}

	Scale::~Scale()
	{
		// TODO Auto-generated destructor stub
	}

	void Scale::drawObject(Uint32 ellapsedTime)
	{
		glScaled(x,y,z);
	}
}
