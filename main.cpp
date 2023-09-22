#include <iostream>

#include "Counter/Counter.h"
#include "Application/Application.h"

int main() {

	Application app; // allocates memory sizeof(Application)

	app.setName("Test"); // -> Application.o: Application::setName()

	std::cout << app.getName() << std::endl; // "Test"
	std::cout << app.getCount() << std::endl; // 0

	Counter counter;
	counter.increaseCount();
	std::cout << counter.getCount() << std::endl; // -> Counter.h: Counter::getCount()

	return 0;
}