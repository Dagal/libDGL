/*
 * Object.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "Object.h"

namespace DGL
{
	Object::Object()
	{
		objectType = 0;
		name = "";
		matrixSaved = true;
		parentObject = NULL;
		// iterCurrentObject = NULL; // Y a t'il une valeur d'initialisation quand la liste est vide???
		currentObject = NULL;
	}

	Object::~Object()
	{
		//delete position;
		//delete motion;
		//delete color;
	}

	void Object::draw(Uint32 timeEllapsed)
	{
		if (matrixSaved) glPushMatrix();

		drawChildren(timeEllapsed);
		drawObject(timeEllapsed);

		if (matrixSaved) glPopMatrix();
	}

	void Object::drawObject(Uint32 timeEllapsed)
	{
		cout << "Object : drawObject de l'objet de type " << objectType << " nommé " << name << endl;
		// Nothing to do in Object
	}

	void Object::drawCenter()
	{
		glColor3ub(255,0,0);
		GLUquadric* params;
		params = gluNewQuadric();
		gluQuadricDrawStyle(params, GLU_FILL);
		gluQuadricTexture(params, GL_FALSE);
		gluSphere(params, 0.01, 20, 20);
		gluDeleteQuadric(params);
	}

	void Object::addObject(Object * object)
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

	void Object::drawChildren(Uint32 timeEllapsed)
	{
		list<Object *>::iterator i;
		for (i = children.begin(); i != children.end(); i++)
		{
			(*i)->draw(timeEllapsed);
		}
	}

	void Object::setName(string n)
	{
		name = n;
	}

	string Object::getName()
	{
		return name;
	}

	Object* Object::getCurrentObject()
	{
		return currentObject;
	}
}
