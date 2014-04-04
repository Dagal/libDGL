/*
 * CGLRobot1.h
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#ifndef CGLROBOT1_H_
#define CGLROBOT1_H_

#include <SDL/SDL.h>
#include "CGLBoite.h"

class CGLRobot1 : public CGLObject
{
private:
	Uint32 lastTime, currentTime, ellapsedTime;
	CGLBoite tete;
	CGLBoite cou;
	double angleZCou, sensCou;
	CGLBoite tronc;
	CGLBoite brasGauche;
	CGLBoite brasDroit;
	CGLBoite jambeGauche;
	CGLBoite jambeDroite;
public:
	CGLRobot1();
	virtual ~CGLRobot1();

	void drawObject(Uint32 timeEllapsed);
};

#endif /* CGLROBOT1_H_ */
