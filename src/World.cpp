/*
 * World.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "World.h"

namespace DGL
{
	World::World(Object* parent) :
	    GeneralObject(parent)
	{
		setType(2);
		setName("Nouveau monde sans nom");
		setMatrixSaved(false);
	}

	World::~World() {
		// TODO Auto-generated destructor stub
	}

	void World::draw(Uint32 timeEllapsed)
	{
		std::cout << "World  : Dessin de la scene courante du monde «" << getName() << "»." << std::endl;
//		((Scene*)currentObject)->draw(timeEllapsed);
	}
}
