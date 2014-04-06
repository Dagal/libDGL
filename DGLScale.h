/*
 * DGLScale.h
 *
 *  Created on: 17 févr. 2014
 *      Author: dagal
 */

#ifndef DGLSCALE_H_
#define DGLSCALE_H_

#include "DGLVector3D.h"

/*
 *
 */
class DGLScale : public DGLVector3D
{
public:
	DGLScale();
	virtual
	~DGLScale();

	void drawObject(Uint32 ellapsedTime);
};

#endif /* DGLSCALE_H_ */
