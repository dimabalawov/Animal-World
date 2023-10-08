#pragma once
#include"Carnivore.h"
#include"Africa.h"
#include <iostream>
using namespace std;
class Lion :Carnivore, Africa
{
	string name;
public:
	Lion();
	virtual void getToOasis();
	virtual void Show();
};

