/*
 * Vector3D.h
 *
 *  Created on: 25 janv. 2014
 *      Author: dagal
 */

#ifndef VECTOR3D_H_
#define VECTOR3D_H_

#include "Double.h"

namespace DGL
{
	class Vector3D
	{
		public:
			Vector3D();
			virtual ~Vector3D();

			const Double& getX() const {return mX;};
			const Double& getY() const {return mY;};
			const Double& getZ() const {return mZ;};
			void set(const Double& x, const Double& y, const Double& z) {mX=x; mY=y; mZ=z;};
			void setX(const Double& x) {mX = x;};
			void setY(const Double& y) {mY = y;};
			void setZ(const Double& z) {mZ = z;};

		private:
			Double mX;
			Double mY;
			Double mZ;
	};
}

#endif /* VECTOR3D_H_ */
