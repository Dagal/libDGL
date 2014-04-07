/*
 * Object.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef OBJECT_H_
#define OBJECT_H_

#include <iostream>

#include <GL/gl.h>
#include <GL/glu.h>
#include <SDL/SDL.h>

#include <string>
#include <list>

using namespace std;

namespace DGL
{
	class Object
	{
		// Variables
	private:
	
	protected:
		int objectType;
		string name;
	
		bool matrixSaved;
	
		list<Object *> children;
		list<Object *>::iterator iterCurrentObject;
		Object *currentObject;

		Object *parentObject;

	public:

		// Méthodes
	private:

	protected:

	public:
		void addObject(Object * object);

		void setName(string n);
		string getName();

		Object* getCurrentObject();

		void draw(Uint32 timeEllapsed);
		virtual void drawObject(Uint32 timeEllapsed);
		void drawChildren(Uint32 timeEllapsed);
		void drawCenter();

		Object();
		virtual ~Object();
	};
}

#endif /* OBJECT_H_ */
