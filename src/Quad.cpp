/*
 * Quad.cpp
 *
 *  Created on: 20 janv. 2014
 *      Author: dagal
 */

#include "Quad.h"

namespace DGL
{
	Quad::Quad(Object* parent) :
	    Object(parent)
	{
		longueur = 1;
		// TODO Auto-generated constructor stub
		Quad(parent,0,0,0,1);
	}

	Quad::Quad(Object* parent, double x,double y,double z,double r) :
	    Object(parent)
	{
		longueur = r;
	}

	Quad::~Quad()
	{
		// TODO Auto-generated destructor stub
	}

	void Quad::drawObject(Uint32 timeEllapsed)
	{
		//cout << "Dessin d'un Quad." << endl;

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

}
