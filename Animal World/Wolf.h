#pragma once
#include"Carnivore.h"
#include"NA.h"
#include <iostream>
using namespace std;
class Wolf:Carnivore,NA
{
	string name;
public:
	Wolf();
	virtual void getNewFood();
	virtual void Show();
	void Carnivore::Eat(Herbivore* a);
};

