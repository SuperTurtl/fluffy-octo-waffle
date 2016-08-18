// License goes here

#ifndef TIME_HPP
#define TIME_HPP

#include <cstdint>

namespace Engine {
	namespace Util {
		class Time {
			public:
				static void Init();
				static void Update();

				static double DeltaTime();
				static std::uint32_t DeltaTimeI();
			protected:
			private:
		};
	}
}

#endif