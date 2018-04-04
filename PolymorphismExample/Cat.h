#pragma once
#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat() = default;
	virtual ~Cat() = default;
	void speak() override;
	void showHappiness() override;
};

