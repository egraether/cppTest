#include "./Counter.h"

Counter::Counter() {
	resetCount();
}

void Counter::resetCount() {
	count = 0;
}

void Counter::increaseCount() {
	count++;
}

int Counter::getCount () {
	return count;
}
