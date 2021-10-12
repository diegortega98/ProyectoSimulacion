#ifndef _FISSION_GLOBAL_H
#define _FISSION_GLOBAL_H

#define SCREEN_WIDTH 600
#define SCREEN_HEIGHT 480

#include "SDL.h"
#include <list>


class Object;

typedef struct __GlobalResources {
	SDL_Texture* img_Uranium235;
	SDL_Texture* img_Uranium238;
	SDL_Texture* img_Neutron;
	SDL_Renderer* MainRenderer;
	std::list<Object*>* MainGroup;
	std::list<Object*>* CreationQueue;
	
	const uint8_t* KeyboardState;
	
	
} GlobalResources;

extern GlobalResources Global;

#endif