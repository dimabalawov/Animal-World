#pragma once
#include "Herbivore.h"
#include "Carnivore.h"
class Africa
{
public:
	virtual void getToOasis() = 0;//у потомков класса Африка будет метод добраться до Оазиса. При вызове метода у животного отнимает -10 от веса, и в случае
	//если животное уданчно дошло до оазиса то к весу +30 либо к силе
};

