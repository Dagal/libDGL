/*
 * Rotation.h
 *
 *  Created on: 18 févr. 2014
 *      Author: dagal
 */

#ifndef ROTATION_H_
#define ROTATION_H_

#include "Vector3D.h"

namespace DGL
{
	/*
	 *
	 */
	class Rotation : public Vector3D
	{
		private:
			double a;

		public:
			Rotation();
			virtual
				~Rotation();

			void setA(double av);
			double getA();
			void set(const Double& av, const Double& ax, const Double& ay, const Double& az);
	};
}

#endif /* ROTATION_H_ */
