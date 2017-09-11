#include "EngineProps.h"

void PrintEngineName()
{
	std::cout << "Engine: Vortex Engine" << std::endl;
}

std::string GetEngineName()
{
	return std::string("Vortex Engine");
}

const char * GetEngineNameChar()
{
	return "Vortex Engine";
}

void PrintEngineVersion()
{
	std::cout << "Engine version: ";
	ver.PrintVersionRaw();
	std::cout << std::endl;
}
