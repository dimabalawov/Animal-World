#include "Bison.h"
#include"Herbivore.h"
#include"NA.h"
#include <iostream>
using namespace std;


Bison::Bison()
{
	name = "Bison";
	weight = 50;
}
void Bison::getNewFood()
{
	srand(time(0));
	int a = rand() % 1;
	if (!a)
		weight -= 20;
	else
		weight += 20;
	if (weight < 0)
		isAlive = 0;
}
void Bison::Show()
{
	cout << "Bison with " << weight << "weight" << endl;
}