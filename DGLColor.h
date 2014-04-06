/*
 * DGLColor.h
 *
 *  Created on: 21 janv. 2014
 *      Author: dagal
 */

#ifndef DGLCOLOR_H_
#define DGLCOLOR_H_

#include "DGLVector3D.h"

class DGLColor : public DGLVector3D
{
protected:
	double alpha;

public:
	DGLColor();

	virtual ~DGLColor();

	void set(double rv, double gv, double bv, double av);
	void setR(double rv);
	void setG(double gv);
	void setB(double bv);
	void setA(double av);

	double getR();
	double getG();
	double getB();
	double getA();

	void drawObject(Uint32 timeEllapsed);
};

#endif /* DGLCOLOR_H_ */
