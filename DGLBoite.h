/*
 * DGLBoite.h
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#ifndef DGLBOITE_H_
#define DGLBOITE_H_

#include "DGLObject.h"

class DGLBoite: virtual public DGLObject
{
private:
	double x,y,z;

public:
	DGLBoite();
	virtual ~DGLBoite();

	void setTaille(double,double,double);
	void drawObject(Uint32 timeEllapsed);
};

#endif /* DGLBOITE_H_ */
