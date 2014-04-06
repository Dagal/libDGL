/*
 * DGLRobot1.h
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#ifndef DGLROBOT1_H_
#define DGLROBOT1_H_

#include <SDL/SDL.h>
#include "DGLBoite.h"

class DGLRobot1 : public DGLObject
{
private:
	Uint32 lastTime, currentTime, ellapsedTime;
	DGLBoite tete;
	DGLBoite cou;
	double angleZCou, sensCou;
	DGLBoite tronc;
	DGLBoite brasGauche;
	DGLBoite brasDroit;
	DGLBoite jambeGauche;
	DGLBoite jambeDroite;
public:
	DGLRobot1();
	virtual ~DGLRobot1();

	void drawObject(Uint32 timeEllapsed);
};

#endif /* DGLROBOT1_H_ */
