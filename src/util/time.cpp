// License goes here

#include "util/time.hpp"

#include <SDL/SDL.h>

namespace Engine {
	namespace Util {
		
		std::uint32_t timeLast = 0;
		std::uint32_t timeCurrent = 0;
		std::uint32_t deltaTimeI = 0;
		double deltaTime = 0.0;
		
		void Time::Init() {
			timeLast = SDL_GetTicks();
			timeCurrent = SDL_GetTicks();
		}
		
		void Time::Update() {
			timeLast = timeCurrent;
			timeCurrent = SDL_GetTicks();
			deltaTimeI = timeCurrent - timeLast;
			deltaTime = deltaTimeI / 1000.0;
		}

		double Time::DeltaTime() {
			return deltaTime;
		}
		
		std::uint32_t Time::DeltaTimeI() {
			
		}
	}
}