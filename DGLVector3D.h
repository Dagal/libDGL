/*
 * DGLVector3D.h
 *
 *  Created on: 25 janv. 2014
 *      Author: dagal
 */

#ifndef DGLVECTOR3D_H_
#define DGLVECTOR3D_H_

#include "DGLObject.h"

class DGLVector3D : public DGLObject
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
	DGLVector3D();
	virtual ~DGLVector3D();

	double getX();
	double getY();
	double getZ();
	void set(double xv, double yv, double zv);
	void setX(double val);
	void setY(double val);
	void setZ(double val);
};

#endif /* DGLVECTOR3D_H_ */
