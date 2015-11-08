/*
 * Color.h
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#ifndef COLOR_H_
#define COLOR_H_

#include "BasicObject.h"
#include "Vector3D.h"

namespace DGL
{
	class Color : public BasicObject, public Vector3D
	{
		protected:
			Double mA;

		public:
			Color(Object* parent);

			virtual ~Color();

			void set(const Double& r, const Double& g, const Double& b, const Double& a) {setR(r); setG(g); setB(b); setA(a);};
			void setR(const Double& r) {setX(r);};
			void setG(const Double& g) {setY(g);};
			void setB(const Double& b) {setZ(b);};
			void setA(const Double& a) {mA = a;};

			const Double& getR() {return getX();};
			const Double& getG() {return getY();};
			const Double& getB() {return getZ();};
			const Double& getA() {return mA;};

			void drawObject(Uint32 timeEllapsed);
	};
}

#endif /* COLOR_H_ */
