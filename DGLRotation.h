/*
 * CGLRotation.h
 *
 *  Created on: 18 févr. 2014
 *      Author: dagal
 */

#ifndef CGLROTATION_H_
#define CGLROTATION_H_

#include "CGLVector3D.h"

/*
 *
 */
class CGLRotation : public CGLVector3D
{
private:
	double a;

public:
	CGLRotation();
	virtual
	~CGLRotation();

	void setA(double av);
	double getA();
	void set(double av,double ax,double ay,double az);

	void drawObject(Uint32 ellapsedTime);
};

#endif /* CGLROTATION_H_ */
