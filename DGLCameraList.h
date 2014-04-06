/*
 * DGLCameraList.h
 *
 *  Created on: 16 févr. 2014
 *      Author: dagal
 */

#ifndef DGLCAMERALIST_H_
#define DGLCAMERALIST_H_

#include "DGLObject.h"
#include "DGLCamera.h"

/*
 *
 */
class DGLCameraList : public DGLObject
{
public:
	DGLCameraList();
	virtual
	~DGLCameraList();

	DGLCamera* getCurrentCamera();
};

#endif /* DGLCAMERALIST_H_ */
