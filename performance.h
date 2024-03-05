//performance.h Version 1.1.1

#ifndef PERFORMANCE_TIMER_LOG_H
#define PERFORMANCE_TIMER_LOG_H

#include <iostream>
#include <chrono>

namespace SoftByLOG
{
	namespace timer
	{
		class Timer
		{
			private:
			std::chrono::_V2::system_clock::time_point start = std::chrono::high_resolution_clock::now();
			std::chrono::_V2::system_clock::time_point end = std::chrono::high_resolution_clock::now();
			std::chrono::duration<float> duration = end - start;

			public:
			void Start();
			void End();
			float getTime();
		};
	}
}

#endif // !PERFORMANCE_TIMER_LOG_H