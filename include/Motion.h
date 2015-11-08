/*
 * Motion.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef MOTION_H_
#define MOTION_H_

#include "PhysicalObject.h"

namespace DGL
{
	class Motion : public PhysicalObject
	{
		public:
			Motion(Object* parent);
			virtual ~Motion();
	};
}
#endif /* MOTION_H_ */
