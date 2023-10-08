#include "Carnivore.h"
#include <iostream>
using namespace std;

Carnivore::Carnivore()
{
	power = 0;
}
void Carnivore::Eat(Herbivore* a)
{
	if (a->getWeight() > power)
		power -= 10;
	else
	{
		power += 10;
		a->Kill();
	}
}

