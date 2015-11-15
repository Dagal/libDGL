/*
 * Object.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "DGL/Object.h"

namespace DGL
{
	Object::Object(Object* parent)
	{
		mType = 0;
		mName = "";
		mMatrixSaved = true;
		mParent = parent;
		// iterCurrentObject = NULL; // Y a t'il une valeur d'initialisation quand la liste est vide???
	}

	Object::~Object()
	{
		//delete position;
		//delete motion;
		//delete color;
	}

	void Object::draw(Uint32 timeEllapsed)
	{
		if (mMatrixSaved) glPushMatrix();

		drawChildren(timeEllapsed);
		drawObject(timeEllapsed);

		if (mMatrixSaved) glPopMatrix();
	}

	void Object::drawObject(Uint32 timeEllapsed)
	{
		std::cout << "Object : drawObject de l'objet de type " << mType << " nommé " << mName << std::endl;
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
//		if (this)
//		{
//			children.push_back(object);
//			if (children.size() == 1)
//			{
//				iterCurrentObject = children.begin();
//				currentObject = *iterCurrentObject;
//			}
//		}
	}

	void Object::drawChildren(Uint32 timeEllapsed)
	{
//		list<Object *>::iterator i;
//		for (i = children.begin(); i != children.end(); i++)
//		{
//			(*i)->draw(timeEllapsed);
//		}
	}
}
