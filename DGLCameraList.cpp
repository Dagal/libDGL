/*
 * DGLCameraList.cpp
 *
 *  Created on: 16 févr. 2014
 *      Author: dagal
 */

#include "DGLCameraList.h"

DGLCameraList::DGLCameraList() : DGLObject()
{
	// TODO Auto-generated constructor stub
	matrixSaved = false;
}

DGLCameraList::~DGLCameraList()
{
	// TODO Auto-generated destructor stub
}

DGLCamera* DGLCameraList::getCurrentCamera()
{
	DGLCamera* cam = (DGLCamera*)currentObject;
	return cam;
}
