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

namespace DGL
{
	class Object
	{
		// Variables
	private:
		int mType;
		std::string mName;

		bool mMatrixSaved;

		Object* mParent;

	public:
	    void setType(const int& type) {mType = type;};
	    const int& getType() const {return mType;};

	    void setName(const std::string& name) {mName = name;};
	    const std::string& getName() const {return mName;};

	    void setMatrixSaved(const bool& saved = true) {mMatrixSaved = saved;};
	    const bool& getMatrixSaved() const {return mMatrixSaved;};

		void addObject(Object * object);

		void draw(Uint32 timeEllapsed);
		virtual void drawObject(Uint32 timeEllapsed);
		void drawChildren(Uint32 timeEllapsed);
		void drawCenter();

		Object(Object* parent);
		virtual ~Object();
	};
}

#endif /* OBJECT_H_ */
