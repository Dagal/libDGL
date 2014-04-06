/*
 * DGLObject.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "DGLObject.h"

DGLObject::DGLObject()
{
	objectType = 0;
	name = "";
	matrixSaved = true;
	parentObject = NULL;
	// iterCurrentObject = NULL; // Y a t'il une valeur d'initialisation quand la liste est vide???
	currentObject = NULL;
}

DGLObject::~DGLObject()
{
	//delete position;
	//delete motion;
	//delete color;
}

void DGLObject::draw(Uint32 timeEllapsed)
{
	if (matrixSaved) glPushMatrix();

	drawChildren(timeEllapsed);
	drawObject(timeEllapsed);

	if (matrixSaved) glPopMatrix();
}

void DGLObject::drawObject(Uint32 timeEllapsed)
{
	cout << "DGLObject : drawObject de l'objet de type " << objectType << " nommé " << name << endl;
	// Nothing to do in DGLObject
}

void DGLObject::drawCenter()
{
	glColor3ub(255,0,0);
	GLUquadric* params;
	params = gluNewQuadric();
	gluQuadricDrawStyle(params, GLU_FILL);
	gluQuadricTexture(params, GL_FALSE);
	gluSphere(params, 0.01, 20, 20);
	gluDeleteQuadric(params);
}

void DGLObject::addObject(DGLObject * object)
{
	if (this)
	{
		children.push_back(object);
		if (children.size() == 1)
		{
			iterCurrentObject = children.begin();
			currentObject = *iterCurrentObject;
		}
	}
}

void DGLObject::drawChildren(Uint32 timeEllapsed)
{
	list<DGLObject *>::iterator i;
	for (i = children.begin(); i != children.end(); i++)
	{
		(*i)->draw(timeEllapsed);
	}
}

void DGLObject::setName(string n)
{
	name = n;
}

string DGLObject::getName()
{
	return name;
}

DGLObject* DGLObject::getCurrentObject()
{
	return currentObject;
}
