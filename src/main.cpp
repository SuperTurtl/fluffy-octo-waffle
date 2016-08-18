// License goes here

#include <cstdio>
#include <SDL/SDL.h>

#include "util/time.hpp"

extern "C" int main(int argc, char** args) {
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER);
	Engine::Util::Time::Init();
	for(int i = 0; i < 100000000; i++) {
		4 + 6;
	}
	Engine::Util::Time::Update();
	std::printf("%d\n", Engine::Util::Time::DeltaTimeI());
}