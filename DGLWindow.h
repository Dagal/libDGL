/*
 * DGLWindow.h
 *
 *  Created on: 1 févr. 2014
 *      Author: dagal
 */

#ifndef DGLWINDOW_H_
#define DGLWINDOW_H_

#include "DGLWorld.h"

/*
 *
 */
class DGLWindow : public DGLObject
{
private:
	bool active;
	bool animation;

	SDL_Event ev;

	SDL_Surface* ecran;

	Uint32 startTime;
	Uint32 lastTime;
	Uint32 currentTime;
	Uint32 ellapsedTime;

public:
	DGLWindow();
	virtual
	~DGLWindow();
	void loop();
	void exec();
	void onResize(SDL_Event &ev);

	void draw(Uint32 ellapsedTime);

	DGLWorld* getCurrentWorld();
};

#endif /* DGLWINDOW_H_ */
