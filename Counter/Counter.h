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
