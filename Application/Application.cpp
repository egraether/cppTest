#include "Application.h"

Application::Application() {
	name = "empty";
}

void Application::setName(std::string newName) {
	name = newName;
}

std::string Application::getName() {
	return name;
}

int Application::getCount() {
	return counter.getCount(); // ! Counter.o: Application::setName() -> Counter.h: Counter::getCount()
}
