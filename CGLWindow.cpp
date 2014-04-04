/*
 * CGLWindow.cpp
 *
 *  Created on: 1 févr. 2014
 *      Author: dagal
 */

#include "CGLWindow.h"

CGLWindow::CGLWindow() : CGLObject()
{
	objectType = 1;
	name = "Window1";
	matrixSaved = false;

	active = true;
	animation = true;

	ecran = NULL;

	startTime = lastTime = currentTime = ellapsedTime = 0;

	CGLWorld* world = new CGLWorld();
	addObject(world);
}

CGLWindow::~CGLWindow()
{
	SDL_Quit();
	cout << "CGLWindow: Quitter SDL" << endl;
}

void CGLWindow::loop()
{
	while(active)
	{
		startTime = SDL_GetTicks();
		while(SDL_PollEvent(&ev))
		{
			switch (ev.type)
			{
			case SDL_QUIT:
				active = false;
				break;
			case SDL_KEYDOWN:
				animation = !animation;
				break;
			case SDL_MOUSEBUTTONDOWN:
				getCurrentWorld()->getCurrentScene()->getCurrentCamera()->onMouseButton(ev.button);
				break;
			case SDL_VIDEORESIZE:
				cout << "Resize event" << endl;
				onResize(ev);
				break;
			default:
				break;
			}
		}

		currentTime = SDL_GetTicks();
		ellapsedTime = animation?currentTime - lastTime:0;
		lastTime = currentTime;

		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		draw(ellapsedTime);

		glFlush();
		SDL_GL_SwapBuffers();

		ellapsedTime = SDL_GetTicks() - startTime;
		if (ellapsedTime < 20)
		{
			SDL_Delay(20 - ellapsedTime);
		}
	}
}

void CGLWindow::draw(Uint32 ellapsedTime)
{
		cout << endl << "CGLWindow: Dessin du contenu de la fenêtre " << name << endl;

		getCurrentWorld()->draw(ellapsedTime);
}

void CGLWindow::exec()
{
	// Initialisation de la librairie SDL
	cout << "CGLWindow : Exec!" << endl;
	cout << "CGLWindow : Initialisation SDL Video!" << endl;
	SDL_Init(SDL_INIT_VIDEO);
	cout << "CGLWindow : Renommer la fenêtre!" << endl;
	SDL_WM_SetCaption("DamierGL", NULL);
	cout << "CGLWindow : Définir la taille de la fenêtre!" << endl;
	ecran = SDL_SetVideoMode(640, 480, 32, SDL_OPENGL|SDL_RESIZABLE);

	// Début des fonctions opengl

	glMatrixMode(GL_PROJECTION);
	cout << "CGLWindow : Mode Projection!" << endl;
	glLoadIdentity();
	gluPerspective(70, (double)640/480, 1, 1000);
	cout << "CGLWindow : Définition de la perspective!" << endl;
	glEnable(GL_DEPTH_TEST);
	cout << "CGLWindow : Test de profondeur activé!" << endl;
	glEnable(GL_COLOR_MATERIAL);
	cout << "CGLWindow : Color Material activé!" << endl;
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	cout << "CGLWindow : Lumière 0 activée!" << endl;
	glClearColor(0.5,0.5,1.0,1.0);
	cout << "CGLWindow : Couleur de fond bleu clair!" << endl;

	loop();
}

void CGLWindow::onResize(SDL_Event &ev)
{
	cout << "Resize proc" << endl;
	ecran = SDL_SetVideoMode(ev.resize.w, ev.resize.h, 32, SDL_OPENGL|SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_RESIZABLE);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(70, (double)ev.resize.w/ev.resize.h, 1, 1000);
	glEnable(GL_DEPTH_TEST);
	glClearColor(0.5,0.5,1.0,1.0);
}

CGLWorld* CGLWindow::getCurrentWorld()
{
	return (CGLWorld*)currentObject;
}
