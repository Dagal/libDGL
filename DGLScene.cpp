/*
 * DGLScene.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "DGLScene.h"
#include "DGLBoite.h"

DGLScene::DGLScene() : DGLObject()
{
	objectType = 3;
	name = "Scene sans nom";
	matrixSaved = false;

	// Attention, l'objet scêne est spécial, il ne contient que 2 objets qui sont des listes
	// Liste des caméras
	cameras = new DGLCameraList();
	cameras->setName("Cameras");
	addObject(cameras);
	// Création d'une caméra obligatoire
	DGLCamera* camera1 = new DGLCamera();
	camera1->setName("Camera1");
	cameras->addObject(camera1);

	// Liste des objets
	objects = new DGLObject();
	objects->setName("Objects");
	addObject(objects);
	// Création d'un cube de base comme dans blender…
	//DGLBoite* boite = new DGLBoite();
	//boite->setName("Boite");
	//objects->addObject(boite);
	// TODO Auto-generated constructor stub
}

DGLScene::~DGLScene()
{
	// TODO Auto-generated destructor stub
}

void DGLScene::draw(Uint32 timeEllapsed)
{
	cout << "DGLScene   : Dessin de la scène " << name << endl;
	cameras->getCurrentObject()->draw(timeEllapsed);
	objects->drawChildren(timeEllapsed);
}

DGLCamera* DGLScene::getCurrentCamera()
{
	DGLCamera* cam = (DGLCamera*)(cameras->getCurrentObject());
	return cam;
}

void DGLScene::addCamera(DGLCamera* cam)
{
	cameras->addObject(cam);
}

void DGLScene::addItem(DGLObject* obj)
{
	objects->addObject(obj);
}
