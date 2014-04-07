/*
 * Scene.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "Scene.h"
#include "Box.h"

namespace DGL
{
	Scene::Scene() : Object()
	{
		objectType = 3;
		name = "Scene sans nom";
		matrixSaved = false;

		// Attention, l'objet scêne est spécial, il ne contient que 2 objets qui sont des listes
		// Liste des caméras
		cameras = new CameraList();
		cameras->setName("Cameras");
		addObject(cameras);
		// Création d'une caméra obligatoire
		Camera* camera1 = new Camera();
		camera1->setName("Camera1");
		cameras->addObject(camera1);

		// Liste des objets
		objects = new Object();
		objects->setName("Objects");
		addObject(objects);
		// Création d'un cube de base comme dans blender…
		//Boite* boite = new Boite();
		//boite->setName("Boite");
		//objects->addObject(boite);
		// TODO Auto-generated constructor stub
	}

	Scene::~Scene()
	{
		// TODO Auto-generated destructor stub
	}

	void Scene::draw(Uint32 timeEllapsed)
	{
		cout << "Scene   : Dessin de la scène " << name << endl;
		cameras->getCurrentObject()->draw(timeEllapsed);
		objects->drawChildren(timeEllapsed);
	}

	Camera* Scene::getCurrentCamera()
	{
		Camera* cam = (Camera*)(cameras->getCurrentObject());
		return cam;
	}

	void Scene::addCamera(Camera* cam)
	{
		cameras->addObject(cam);
	}

	void Scene::addItem(Object* obj)
	{
		objects->addObject(obj);
	}
}