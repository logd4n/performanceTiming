//performance.cpp Version 1.1.1

#include "performance.h"

void SoftByLOG::timer::Timer::Start()
{
	start = std::chrono::high_resolution_clock::now();
}

void SoftByLOG::timer::Timer::End()
{
	end = std::chrono::high_resolution_clock::now();

	duration = end - start;
}

float SoftByLOG::timer::Timer::getTime()
{
	return duration.count();
}