/*
 * DGLQuad.cpp
 *
 *  Created on: 20 janv. 2014
 *      Author: dagal
 */

#include "DGLQuad.h"

DGLQuad::DGLQuad() : DGLObject()
{
	longueur = 1;
	// TODO Auto-generated constructor stub
	DGLQuad(0,0,0,1);
}

DGLQuad::DGLQuad(double x,double y,double z,double r) : DGLObject()
{
	longueur = r;
}

DGLQuad::~DGLQuad()
{
	// TODO Auto-generated destructor stub
}

void DGLQuad::drawObject(Uint32 timeEllapsed)
{
	//cout << "Dessin d'un DGLQuad." << endl;

	glPushMatrix();
	glNormal3d(0,0,1);
	glBegin(GL_QUADS);
	double x = 0;
	double y = 0;
	double z = 0;
	glVertex3d(x, y, z);
	glVertex3d(x + longueur, y, z);
	glVertex3d(x + longueur, y + longueur, z);
	glVertex3d(x, y + longueur, z);
	glEnd();

	drawChildren(timeEllapsed);

	glPopMatrix();
}

