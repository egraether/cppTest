#ifndef __Application__ // or #pragma once
#define __Application__

#include <string>

#include "../Counter/Counter.h"

class Application {
public:
	Application();
	void setName(std::string newName);
	std::string getName();
	int getCount();

private:
	Counter counter;
	std::string name;
};

#endif
