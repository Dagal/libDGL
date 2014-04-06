/*
 * DGLObject.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef DGLOBJECT_H_
#define DGLOBJECT_H_

#include <iostream>

#include <GL/gl.h>
#include <GL/glu.h>
#include <SDL/SDL.h>

#include <string>
#include <list>

//#include "DGLPosition.h"
//#include "DGLMotion.h"
//#include "DGLColor.h"

using namespace std;

class DGLObject
{
	// Variables
private:

protected:
	int objectType;
	string name;

	bool matrixSaved;

	list<DGLObject *> children;
	list<DGLObject *>::iterator iterCurrentObject;
	DGLObject *currentObject;

	DGLObject *parentObject;

public:

	// Méthodes
private:

protected:

public:
	void addObject(DGLObject * object);

	void setName(string n);
	string getName();

	DGLObject* getCurrentObject();

	void draw(Uint32 timeEllapsed);
	virtual void drawObject(Uint32 timeEllapsed);
	void drawChildren(Uint32 timeEllapsed);
	void drawCenter();

	DGLObject();
	virtual ~DGLObject();
};

#endif /* DGLOBJECT_H_ */
