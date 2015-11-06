/*
 * Vector3D.h
 *
 *  Created on: 25 janv. 2014
 *      Author: dagal
 */

#ifndef VECTOR3D_H_
#define VECTOR3D_H_

#include "Object.h"

namespace DGL
{
	class Vector3D : public Object
	{
		// Variables
		private:

		protected:
			double x;
			double y;
			double z;
		public:

			// Méthodes
		private:

		protected:

		public:
			Vector3D(Object* parent);
			virtual ~Vector3D();

			double getX();
			double getY();
			double getZ();
			void set(double xv, double yv, double zv);
			void setX(double val);
			void setY(double val);
			void setZ(double val);
	};
}

#endif /* VECTOR3D_H_ */
