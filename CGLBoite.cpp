/*
 * CGLBoite.cpp
 *
 *  Created on: 26 janv. 2014
 *      Author: dagal
 */

#include "CGLBoite.h"

CGLBoite::CGLBoite() : CGLObject()
{
	objectType = 1000;
	x = y = z = 1;
	// TODO Auto-generated constructor stub

}

CGLBoite::~CGLBoite() {
	// TODO Auto-generated destructor stub
}

void CGLBoite::setTaille(double xv, double yv, double zv)
{
	x = xv;
	y = yv;
	z = zv;
}

void CGLBoite::drawObject(Uint32 timeEllapsed)
{
	cout << "CGLBoite    : Dessin d'une boite." << endl;

	// Face
	glBegin(GL_QUADS);
	glNormal3d(0,-1,0);
	glVertex3d(-x/2,-y/2,-z/2);
	glVertex3d(x/2,-y/2,-z/2);
	glVertex3d(x/2,-y/2,z/2);
	glVertex3d(-x/2,-y/2,z/2);
	glEnd();
	// Arriere
	glBegin(GL_QUADS);
	glNormal3d(0,1,0);
	glVertex3d(-x/2,y/2,-z/2);
	glVertex3d(-x/2,y/2,z/2);
	glVertex3d(x/2,y/2,z/2);
	glVertex3d(x/2,y/2,-z/2);
	glEnd();
	// Gauche
	glBegin(GL_QUADS);
	glNormal3d(-1,0,0);
	glVertex3d(-x/2,-y/2,-z/2);
	glVertex3d(-x/2,-y/2,z/2);
	glVertex3d(-x/2,y/2,z/2);
	glVertex3d(-x/2,y/2,-z/2);
	glEnd();
	// Droite
	glBegin(GL_QUADS);
	glNormal3d(1,0,0);
	glVertex3d(x/2,-y/2,-z/2);
	glVertex3d(x/2,y/2,-z/2);
	glVertex3d(x/2,y/2,z/2);
	glVertex3d(x/2,-y/2,z/2);
	glEnd();
	// Bas
	glBegin(GL_QUADS);
	glNormal3d(0,0,-1);
	glVertex3d(-x/2,-y/2,-z/2);
	glVertex3d(-x/2,y/2,-z/2);
	glVertex3d(x/2,y/2,-z/2);
	glVertex3d(x/2,-y/2,-z/2);
	glEnd();
	// Haut
	glBegin(GL_QUADS);
	glNormal3d(0,0,1);
	glVertex3d(-x/2,-y/2,z/2);
	glVertex3d(x/2,-y/2,z/2);
	glVertex3d(x/2,y/2,z/2);
	glVertex3d(-x/2,y/2,z/2);
	glEnd();

}
