#pragma once
#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat();
	virtual ~Cat();
	void speak();
	void showHappiness();
};

