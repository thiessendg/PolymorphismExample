#pragma once
#include "Animal.h"
class Dog :
	public Animal
{
public:
	Dog() = default;
	virtual ~Dog() = default;
	void speak() override;
	void showHappiness() override;
};

