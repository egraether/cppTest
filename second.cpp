#include <iostream>

#include "Counter/Counter.h"

int main() {

	Counter counter;
	for (int i = 0; i < 10; i++) {
		counter.increaseCount();
	}
	std::cout << counter.getCount() << std::endl; // -> Counter.h: Counter::getCount()

	return 0;
}
