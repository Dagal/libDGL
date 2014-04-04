/*
 * CGLWorld.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "CGLWorld.h"

CGLWorld::CGLWorld() : CGLObject()
{
	objectType = 2;
	name = "Nouveau monde sans nom";
	matrixSaved = false;

	CGLScene* scene = new CGLScene();
	addObject(scene);
}

CGLWorld::~CGLWorld() {
	// TODO Auto-generated destructor stub
}

void CGLWorld::draw(Uint32 timeEllapsed)
{
	cout << "CGLWorld  : Dessin de la scene courante du monde «" << name << "»." << endl;
	((CGLScene*)currentObject)->draw(timeEllapsed);
}

CGLScene* CGLWorld::getCurrentScene()
{
	return (CGLScene*)currentObject;
}
