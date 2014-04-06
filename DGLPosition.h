/*
 * DGLPosition.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef DGLPOSITION_H_
#define DGLPOSITION_H_

#include "DGLObject.h"
#include "DGLVector3D.h"

class DGLPosition : public DGLVector3D
{
	// Variables
private:

protected:


public:


	// Méthodes
private:

protected:

public:
	DGLPosition();
	virtual ~DGLPosition();

	void drawObject(Uint32 ellapsedTime);
};

#endif /* DGLPOSITION_H_ */
