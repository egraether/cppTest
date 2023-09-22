// just roughly
#include <iostream>
// namespace std {
// 	class cout {
// 		public:
// 		static void operator<<(std::string output) {
// 			printf(output)
// 		}
// 	}
// }

// #include "Counter/Counter.h"
#ifndef __Counter__
#define __Counter__

class Counter {
public:
	Counter();
	void resetCount();
	void increaseCount();
	int getCount();

private:
	int count;
};

#endif


// #include "Application/Application.h"
#ifndef __Application__
#define __Application__

#include <string>
// namespace std {
// 	class string {
// 		public:
// 	}
// }

// #include "../Counter/Counter.h"

#ifndef __Counter__
// #define __Counter__

// class Counter {
// public:
// 	Counter();
// 	void resetCount();
// 	void increaseCount();
// 	int getCount();

// private:
// 	int count;
// };

#endif

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