/*
 * CGLObject.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "CGLObject.h"

CGLObject::CGLObject()
{
	objectType = 0;
	name = "";
	matrixSaved = true;
	parentObject = NULL;
	// iterCurrentObject = NULL; // Y a t'il une valeur d'initialisation quand la liste est vide???
	currentObject = NULL;
}

CGLObject::~CGLObject()
{
	//delete position;
	//delete motion;
	//delete color;
}

void CGLObject::draw(Uint32 timeEllapsed)
{
	if (matrixSaved) glPushMatrix();

	drawChildren(timeEllapsed);
	drawObject(timeEllapsed);

	if (matrixSaved) glPopMatrix();
}

void CGLObject::drawObject(Uint32 timeEllapsed)
{
	cout << "CGLObject : drawObject de l'objet de type " << objectType << " nommé " << name << endl;
	// Nothing to do in CGLObject
}

void CGLObject::drawCenter()
{
	glColor3ub(255,0,0);
	GLUquadric* params;
	params = gluNewQuadric();
	gluQuadricDrawStyle(params, GLU_FILL);
	gluQuadricTexture(params, GL_FALSE);
	gluSphere(params, 0.01, 20, 20);
	gluDeleteQuadric(params);
}

void CGLObject::addObject(CGLObject * object)
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

void CGLObject::drawChildren(Uint32 timeEllapsed)
{
	list<CGLObject *>::iterator i;
	for (i = children.begin(); i != children.end(); i++)
	{
		(*i)->draw(timeEllapsed);
	}
}

void CGLObject::setName(string n)
{
	name = n;
}

string CGLObject::getName()
{
	return name;
}

CGLObject* CGLObject::getCurrentObject()
{
	return currentObject;
}
