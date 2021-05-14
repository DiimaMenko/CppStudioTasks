#pragma once
#define rand_maximum 0x7fff
#include <stdlib.h>

class RandomNumberGenerator
{
	unsigned long int next = 1;

public:
	RandomNumberGenerator();
	int rand();
	int rand2();
	int rand3();
	int rand4();
	void srand(unsigned int seed);
};

