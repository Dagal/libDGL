/*
 * CGLQuad.h
 *
 *  Created on: 20 janv. 2014
 *      Author: dagal
 */

#ifndef CGLQUAD_H_
#define CGLQUAD_H_

#include <iostream>

#include "CGLObject.h"

using namespace std;

class CGLQuad: public CGLObject
{
	// Variables
private:
protected:
	double longueur;
public:
	// Methods
private:
protected:
public:
	CGLQuad();
	CGLQuad(double x, double y, double z, double r);
	virtual ~CGLQuad();
	void drawObject(Uint32 timeEllapsed);
};

#endif /* CGLQUAD_H_ */
