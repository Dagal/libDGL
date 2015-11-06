/*
 * Window.h
 *
 *  Created on: 1 févr. 2014
 *      Author: dagal
 */

#ifndef WINDOW_H_
#define WINDOW_H_

#include "World.h"

namespace DGL
{
	/*
	 *
	 */
	class Window : public Object
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
			Window(Object* parent);
			virtual
				~Window();
			void loop();
			void exec();
			void onResize(SDL_Event &ev);

			void draw(Uint32 ellapsedTime);

			World* getCurrentWorld();
	};
}
#endif /* WINDOW_H_ */
