#include "Lion.h"
#include"Carnivore.h"
#include"Africa.h"
#include <iostream>
using namespace std;


Lion::Lion()
{
	name = "Lion";
	power = 30;
}
void Lion::getToOasis()
{
	srand(time(0));
	if (power > 10)
		power -= 10;
	else
		return;
	int a = rand() % 1;
	if (a)
		power += 30;
}
void Lion::Show()
{
	cout << "Lion with " << power << "power" << endl;
}