#ifndef ENGINE_PROPS_H_
#define ENGINE_PROPS_H_

#include <iostream>
#include "Version.h"

Version ver(0, 0, 1);

static void PrintEngineName();
static std::string GetEngineName();
static const char* GetEngineNameChar();

static void PrintEngineVersion();


#endif