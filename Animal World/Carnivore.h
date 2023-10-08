#pragma once
#include "Herbivore.h"
class Carnivore
{
protected:
	int power;
public:
	Carnivore();
	void Eat(Herbivore* a);
	virtual void Show() = 0;
};

