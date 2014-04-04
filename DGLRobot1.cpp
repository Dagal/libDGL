/*
 * CGLRobot1.cpp
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#include "CGLRobot1.h"

CGLRobot1::CGLRobot1()
{
	// TODO Auto-generated constructor stub
	tete.setTaille(0.20,0.30,0.30);
	cou.setTaille(0.20,0.20,0.20);
	angleZCou = 0;
	sensCou = 1;
	lastTime = currentTime = SDL_GetTicks();
	ellapsedTime = 0;
	tronc.setTaille(0.50,0.30,0.60);
	jambeGauche.setTaille(0.20,0.20,0.80);
	jambeDroite.setTaille(0.20,0.20,0.80);
	brasGauche.setTaille(0.20,0.20,0.70);
	brasDroit.setTaille(0.20,0.20,0.70);

}

CGLRobot1::~CGLRobot1()
{
	// TODO Auto-generated destructor stub
}

void CGLRobot1::drawObject(Uint32 timeEllapsed)
{
	angleZCou += timeEllapsed * 0.05 * sensCou;
	if (abs(angleZCou) > 90)
	{
		angleZCou = abs(angleZCou)/angleZCou * 90;
		sensCou = -sensCou;
	}

	glPushMatrix();

	glTranslated(-0.15,0,0.40);
	jambeGauche.draw(timeEllapsed);
	glTranslated(0.30,0,0);
	jambeDroite.draw(timeEllapsed);
	glTranslated(-0.15,0,0.70);
	tronc.draw(timeEllapsed);
	glTranslated(0,0.05,0.40);
	glPushMatrix();
	glRotated(angleZCou,0,0,1);
	cou.draw(timeEllapsed);
	glTranslated(0,-0.05,0.25);
	tete.draw(timeEllapsed);
	glPopMatrix();
	glTranslated(-0.40,0,-0.50);
	brasDroit.draw(timeEllapsed);
	glTranslated(0.80,0,0);
	brasGauche.draw(timeEllapsed);

	glPopMatrix();
}
