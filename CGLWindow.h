/*
 * CGLWindow.h
 *
 *  Created on: 1 févr. 2014
 *      Author: dagal
 */

#ifndef CGLWINDOW_H_
#define CGLWINDOW_H_

#include "CGLWorld.h"

/*
 *
 */
class CGLWindow : public CGLObject
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
	CGLWindow();
	virtual
	~CGLWindow();
	void loop();
	void exec();
	void onResize(SDL_Event &ev);

	void draw(Uint32 ellapsedTime);

	CGLWorld* getCurrentWorld();
};

#endif /* CGLWINDOW_H_ */
