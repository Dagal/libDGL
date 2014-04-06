/*
 * DGLWorld.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef DGLWORLD_H_
#define DGLWORLD_H_

#include <list>
#include "DGLScene.h"

#include "DGLObject.h"

class DGLWorld : public DGLObject
{
	// Variables
private:
	list<DGLObject*>::iterator currentScene;

protected:

public:

	// Méthodes
private:

protected:

public:
	DGLWorld();
	virtual ~DGLWorld();

	void draw(Uint32 timeEllapsed);

	DGLScene* getCurrentScene();
};

#endif /* DGLWORLD_H_ */
