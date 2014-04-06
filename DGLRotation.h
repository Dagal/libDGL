/*
 * DGLRotation.h
 *
 *  Created on: 18 févr. 2014
 *      Author: dagal
 */

#ifndef DGLROTATION_H_
#define DGLROTATION_H_

#include "DGLVector3D.h"

/*
 *
 */
class DGLRotation : public DGLVector3D
{
private:
	double a;

public:
	DGLRotation();
	virtual
	~DGLRotation();

	void setA(double av);
	double getA();
	void set(double av,double ax,double ay,double az);

	void drawObject(Uint32 ellapsedTime);
};

#endif /* DGLROTATION_H_ */
