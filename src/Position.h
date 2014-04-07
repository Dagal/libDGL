/*
 * Position.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef POSITION_H_
#define POSITION_H_

#include "Object.h"
#include "Vector3D.h"

namespace DGL
{
	class Position : public Vector3D
	{
		// Variables
		private:

		protected:


		public:


			// Méthodes
		private:

		protected:

		public:
			Position();
			virtual ~Position();

			void drawObject(Uint32 ellapsedTime);
	};
}

#endif /* POSITION_H_ */
