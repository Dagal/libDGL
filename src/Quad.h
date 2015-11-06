/*
 * Quad.h
 *
 *  Created on: 20 janv. 2014
 *      Author: dagal
 */

#ifndef QUAD_H_
#define QUAD_H_

#include <iostream>

#include "Object.h"

using namespace std;

namespace DGL
{
	class Quad: public Object
	{
		// Variables
		private:
		protected:
			double longueur;
		public:
			// Methods
		private:
		protected:
		public:
			Quad(Object* parent);
			Quad(Object* parent, double x, double y, double z, double r);
			virtual ~Quad();
			void drawObject(Uint32 timeEllapsed);
	};
}
#endif /* QUAD_H_ */
