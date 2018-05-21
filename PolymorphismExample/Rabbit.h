#pragma once
#include "Animal.h"
class Rabbit :
	public Animal
{
public:
	Rabbit();
	virtual ~Rabbit();
	void speak() override;
	void showHappiness() override;
};

