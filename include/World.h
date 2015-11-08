/*
 * World.h
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#ifndef WORLD_H_
#define WORLD_H_

#include <list>

#include "GeneralObject.h"

namespace DGL
{
	class World : public GeneralObject
	{
		// Variables
		private:

		protected:

		public:

			// Méthodes
		private:

		protected:

		public:
			World(Object* parent);
			virtual ~World();

			void draw(Uint32 timeEllapsed);
	};
}

#endif /* WORLD_H_ */
