/*
 * Robot1.h
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#ifndef ROBOT1_H_
#define ROBOT1_H_

#include <SDL/SDL.h>
#include "Box.h"
#include "ComplexGraphicObject.h"

namespace DGL
{
	class Robot1 : public ComplexGraphicObject
	{
		private:
			Uint32 lastTime, currentTime, ellapsedTime;
			Box tete;
			Box cou;
			double angleZCou, sensCou;
			Box tronc;
			Box brasGauche;
			Box brasDroit;
			Box jambeGauche;
			Box jambeDroite;
		public:
			Robot1(Object* parent);
			virtual ~Robot1();

			void drawObject(Uint32 timeEllapsed);
	};
}
#endif /* ROBOT1_H_ */
