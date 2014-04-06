/*
 * DGLQuad.h
 *
 *  Created on: 20 janv. 2014
 *      Author: dagal
 */

#ifndef DGLQUAD_H_
#define DGLQUAD_H_

#include <iostream>

#include "DGLObject.h"

using namespace std;

class DGLQuad: public DGLObject
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
	DGLQuad();
	DGLQuad(double x, double y, double z, double r);
	virtual ~DGLQuad();
	void drawObject(Uint32 timeEllapsed);
};

#endif /* DGLQUAD_H_ */
