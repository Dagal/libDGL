/*
 * Box.h
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#ifndef BOX_H_
#define BOX_H_

#include "VolumeGraphicObject.h"

namespace DGL
{
	class Box: virtual public VolumeGraphicObject
	{
		private:
			double x,y,z;

		public:
			Box(Object* parent);
			virtual ~Box();

			void setTaille(double,double,double);
			void drawObject(Uint32 timeEllapsed);
	};
}
#endif /* BOX_H_ */
