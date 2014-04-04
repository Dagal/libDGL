/*
 * CGLCameraList.cpp
 *
 *  Created on: 16 févr. 2014
 *      Author: dagal
 */

#include "CGLCameraList.h"

CGLCameraList::CGLCameraList() : CGLObject()
{
	// TODO Auto-generated constructor stub
	matrixSaved = false;
}

CGLCameraList::~CGLCameraList()
{
	// TODO Auto-generated destructor stub
}

CGLCamera* CGLCameraList::getCurrentCamera()
{
	CGLCamera* cam = (CGLCamera*)currentObject;
	return cam;
}
