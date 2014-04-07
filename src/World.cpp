/*
 * World.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "World.h"

namespace DGL
{
	World::World() : Object()
	{
		objectType = 2;
		name = "Nouveau monde sans nom";
		matrixSaved = false;

		Scene* scene = new Scene();
		addObject(scene);
	}

	World::~World() {
		// TODO Auto-generated destructor stub
	}

	void World::draw(Uint32 timeEllapsed)
	{
		cout << "World  : Dessin de la scene courante du monde «" << name << "»." << endl;
		((Scene*)currentObject)->draw(timeEllapsed);
	}

	Scene* World::getCurrentScene()
	{
		return (Scene*)currentObject;
	}
}