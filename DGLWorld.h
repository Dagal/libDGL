/*
 * CGLWorld.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef CGLWORLD_H_
#define CGLWORLD_H_

#include <list>
#include "CGLScene.h"

#include "CGLObject.h"

class CGLWorld : public CGLObject
{
	// Variables
private:
	list<CGLObject*>::iterator currentScene;

protected:

public:

	// Méthodes
private:

protected:

public:
	CGLWorld();
	virtual ~CGLWorld();

	void draw(Uint32 timeEllapsed);

	CGLScene* getCurrentScene();
};

#endif /* CGLWORLD_H_ */
