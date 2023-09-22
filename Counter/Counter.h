#ifndef __Counter__ // or #pragma once
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
