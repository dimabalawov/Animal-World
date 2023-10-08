#include "Herbivore.h"

 
Herbivore::Herbivore()
{
	weight = 0;
	isAlive = 1;
}
int Herbivore::getWeight()
{
	return weight;
}
void Herbivore::Kill()
{
	isAlive = 0;
}
void Herbivore::Eat()
{
	weight += 10;
}
