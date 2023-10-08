#pragma once
class Herbivore
{
protected:
	int weight;
	bool isAlive=1;
public:
	Herbivore();
	int getWeight();
	void Kill();
	void Eat();
	virtual void Show() = 0;
};

