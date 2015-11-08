/*
 * Window.cpp
 *
 *  Created on: 1 févr. 2014
 *      Author: dagal
 */

#include "Window.h"

namespace DGL
{
	Window::Window(Object* parent) :
	    GeneralObject(parent)
	{
		setType(1);
		setName("Window1");
		setMatrixSaved(false);

		active = true;
		animation = true;

		ecran = NULL;

		startTime = lastTime = currentTime = ellapsedTime = 0;

		World* world = new World(this);
		addObject(world);
	}

	Window::~Window()
	{
		SDL_Quit();
		std::cout << "Window: Quitter SDL" << std::endl;
	}

	void Window::loop()
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
//						getCurrentWorld()->getCurrentScene()->getCurrentCamera()->onMouseButton(ev.button);
						break;
					case SDL_VIDEORESIZE:
						std::cout << "Resize event" << std::endl;
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

	void Window::draw(Uint32 ellapsedTime)
	{
		std::cout << std::endl << "Window: Dessin du contenu de la fenêtre " << getName() << std::endl;

		getCurrentWorld()->draw(ellapsedTime);
	}

	void Window::exec()
	{
		// Initialisation de la librairie SDL
		std::cout << "Window : Exec!" << std::endl;
		std::cout << "Window : Initialisation SDL Video!" << std::endl;
		SDL_Init(SDL_INIT_VIDEO);
		std::cout << "Window : Renommer la fenêtre!" << std::endl;
		SDL_WM_SetCaption("DamierGL", NULL);
		std::cout << "Window : Définir la taille de la fenêtre!" << std::endl;
		ecran = SDL_SetVideoMode(640, 480, 32, SDL_OPENGL|SDL_RESIZABLE);

		// Début des fonctions opengl

		glMatrixMode(GL_PROJECTION);
		std::cout << "Window : Mode Projection!" << std::endl;
		glLoadIdentity();
		gluPerspective(70, (double)640/480, 1, 1000);
		std::cout << "Window : Définition de la perspective!" << std::endl;
		glEnable(GL_DEPTH_TEST);
		std::cout << "Window : Test de profondeur activé!" << std::endl;
		glEnable(GL_COLOR_MATERIAL);
		std::cout << "Window : Color Material activé!" << std::endl;
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		std::cout << "Window : Lumière 0 activée!" << std::endl;
		glClearColor(0.5,0.5,1.0,1.0);
		std::cout << "Window : Couleur de fond bleu clair!" << std::endl;

		loop();
	}

	void Window::onResize(SDL_Event &ev)
	{
		std::cout << "Resize proc" << std::endl;
		ecran = SDL_SetVideoMode(ev.resize.w, ev.resize.h, 32, SDL_OPENGL|SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_RESIZABLE);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(70, (double)ev.resize.w/ev.resize.h, 1, 1000);
		glEnable(GL_DEPTH_TEST);
		glClearColor(0.5,0.5,1.0,1.0);
	}
}
