/*
 * Color.h
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#ifndef COLOR_H_
#define COLOR_H_

#include "Vector3D.h"

namespace DGL
{
	class Color : public Vector3D
	{
		protected:
			double alpha;

		public:
			Color(Object* parent);

			virtual ~Color();

			void set(double rv, double gv, double bv, double av);
			void setR(double rv);
			void setG(double gv);
			void setB(double bv);
			void setA(double av);

			double getR();
			double getG();
			double getB();
			double getA();

			void drawObject(Uint32 timeEllapsed);
	};
}

#endif /* COLOR_H_ */
