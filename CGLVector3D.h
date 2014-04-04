/*
 * CGLVector3D.h
 *
 *  Created on: 25 janv. 2014
 *      Author: dagal
 */

#ifndef CGLVECTOR3D_H_
#define CGLVECTOR3D_H_

#include "CGLObject.h"

class CGLVector3D : public CGLObject
{
	// Variables
private:

protected:
	double x;
	double y;
	double z;
public:

	// Méthodes
private:

protected:

public:
	CGLVector3D();
	virtual ~CGLVector3D();

	double getX();
	double getY();
	double getZ();
	void set(double xv, double yv, double zv);
	void setX(double val);
	void setY(double val);
	void setZ(double val);
};

#endif /* CGLVECTOR3D_H_ */
