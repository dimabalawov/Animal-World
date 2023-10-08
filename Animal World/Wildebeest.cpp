#include "Wildebeest.h"
#include"Herbivore.h"
#include"Africa.h"
#include <iostream>
using namespace std;


Wildebeest::Wildebeest()
{
	name = "Wildebeest";
	weight = 30;
}
void Wildebeest::getToOasis()
{
	srand(time(0));
	if (weight > 10)
		weight -= 10;
	else
		return;
	int a = rand() % 1;
	if (a)
		weight += 30;
}
void Wildebeest::Show()
{
	cout << "Wildebeest with " << weight << "weight" << endl;
}