#pragma once
#include "Animal.h"
class Rabbit :
	public Animal
{
public:
	Rabbit() = default;
	virtual ~Rabbit() = default;
	void speak() override;
	void showHappiness() override;
};

