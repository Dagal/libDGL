/*
 * CGLScene.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef CGLSCENE_H_
#define CGLSCENE_H_

#include <iostream>

#include <list>

#include "CGLCameraList.h"
#include "CGLCamera.h"
#include "CGLLight.h"
#include "CGLObject.h"

using namespace std;

class CGLScene : public CGLObject
{
	// Variables
private:

protected:
	CGLCameraList* cameras;
	CGLObject* objects;

public:

	// Méthodes
private:

protected:

public:
	CGLScene();
	virtual ~CGLScene();
	void draw(Uint32 timeEllapsed);
	//void drawObject(Uint32 timeEllapsed);

	CGLCamera* getCurrentCamera();

	void addCamera(CGLCamera* cam);
	void addItem(CGLObject* obj);
};

#endif /* CGLSCENE_H_ */
