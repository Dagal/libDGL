/*
 * DGLWorld.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "DGLWorld.h"

DGLWorld::DGLWorld() : DGLObject()
{
	objectType = 2;
	name = "Nouveau monde sans nom";
	matrixSaved = false;

	DGLScene* scene = new DGLScene();
	addObject(scene);
}

DGLWorld::~DGLWorld() {
	// TODO Auto-generated destructor stub
}

void DGLWorld::draw(Uint32 timeEllapsed)
{
	cout << "DGLWorld  : Dessin de la scene courante du monde «" << name << "»." << endl;
	((DGLScene*)currentObject)->draw(timeEllapsed);
}

DGLScene* DGLWorld::getCurrentScene()
{
	return (DGLScene*)currentObject;
}
