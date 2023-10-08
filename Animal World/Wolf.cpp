#include "Wolf.h"
#include"Carnivore.h"
#include"NA.h"
#include <iostream>
using namespace std;
  

Wolf::Wolf()
{
	name = "Wolf";
	power = 30;
}
void Wolf::getNewFood()
{
	srand(time(0));
	int a = rand() % 1;
	if (!a)
		power -= 20;
	else
		power += 20;
}
void Wolf::Show()
{
	cout << "Wolf with " << power << "power" << endl;
}