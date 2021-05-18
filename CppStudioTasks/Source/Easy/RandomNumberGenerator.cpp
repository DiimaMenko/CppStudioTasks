#include "../../Headers/Easy/RandomNumberGenerator.h"

RandomNumberGenerator::RandomNumberGenerator()
{
	next = 1;
}

int RandomNumberGenerator::rand()
{
	next = next * 1103515245 + 12345;
	return (next / 65536) % (RAND_MAX + 1);
}

int RandomNumberGenerator::rand2()
{
	next = (next * 73129 + 95121) % 100000;
	return next;
}

int RandomNumberGenerator::rand3()
{
	return 0;
}

int RandomNumberGenerator::rand4()
{
	return 0;
}

void RandomNumberGenerator::srand(unsigned int seed)
{
	next = seed;
}
