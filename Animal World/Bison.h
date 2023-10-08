#pragma once
#include "Herbivore.h"
#include "NA.h"
#include <iostream>
using namespace std;
class Bison:NA,Herbivore
{
	string name;
public:
	Bison();
	virtual void getNewFood();
	virtual void Show();
};

