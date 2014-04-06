/*
 * DGLScene.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef DGLSCENE_H_
#define DGLSCENE_H_

#include <iostream>

#include <list>

#include "DGLCameraList.h"
#include "DGLCamera.h"
#include "DGLLight.h"
#include "DGLObject.h"

using namespace std;

class DGLScene : public DGLObject
{
	// Variables
private:

protected:
	DGLCameraList* cameras;
	DGLObject* objects;

public:

	// Méthodes
private:

protected:

public:
	DGLScene();
	virtual ~DGLScene();
	void draw(Uint32 timeEllapsed);
	//void drawObject(Uint32 timeEllapsed);

	DGLCamera* getCurrentCamera();

	void addCamera(DGLCamera* cam);
	void addItem(DGLObject* obj);
};

#endif /* DGLSCENE_H_ */
