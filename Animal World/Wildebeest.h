#pragma once
#include "Herbivore.h"
#include "Africa.h"
#include <iostream>
using namespace std;
class Wildebeest :Africa, Herbivore
{
	string name;
public:
	Wildebeest();
	virtual void getToOasis();
	virtual void Show();
};