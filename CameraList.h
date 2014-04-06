/*
 * CameraList.h
 *
 *  Created on: 16 févr. 2014
 *      Author: dagal
 */

#ifndef CAMERALIST_H_
#define CAMERALIST_H_

#include "Object.h"
#include "Camera.h"

namespace DGL
{
	/*
	 *
	 */
	class CameraList : public Object
	{
		public:
			CameraList();
			virtual
				~CameraList();

			Camera* getCurrentCamera();
	};
}

#endif /* CAMERALIST_H_ */
