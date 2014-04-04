/*
 * CGLScene.cpp
 *
 *  Created on: 19 janv. 2014
 *      Author: dagal
 */

#include "CGLScene.h"
#include "CGLBoite.h"

CGLScene::CGLScene() : CGLObject()
{
	objectType = 3;
	name = "Scene sans nom";
	matrixSaved = false;

	// Attention, l'objet scêne est spécial, il ne contient que 2 objets qui sont des listes
	// Liste des caméras
	cameras = new CGLCameraList();
	cameras->setName("Cameras");
	addObject(cameras);
	// Création d'une caméra obligatoire
	CGLCamera* camera1 = new CGLCamera();
	camera1->setName("Camera1");
	cameras->addObject(camera1);

	// Liste des objets
	objects = new CGLObject();
	objects->setName("Objects");
	addObject(objects);
	// Création d'un cube de base comme dans blender…
	//CGLBoite* boite = new CGLBoite();
	//boite->setName("Boite");
	//objects->addObject(boite);
	// TODO Auto-generated constructor stub
}

CGLScene::~CGLScene()
{
	// TODO Auto-generated destructor stub
}

void CGLScene::draw(Uint32 timeEllapsed)
{
	cout << "CGLScene   : Dessin de la scène " << name << endl;
	cameras->getCurrentObject()->draw(timeEllapsed);
	objects->drawChildren(timeEllapsed);
}

CGLCamera* CGLScene::getCurrentCamera()
{
	CGLCamera* cam = (CGLCamera*)(cameras->getCurrentObject());
	return cam;
}

void CGLScene::addCamera(CGLCamera* cam)
{
	cameras->addObject(cam);
}

void CGLScene::addItem(CGLObject* obj)
{
	objects->addObject(obj);
}
