#pragma once
#include "Animal.h"
class Dog :
	public Animal
{
public:
	Dog();
	virtual ~Dog();
	void speak();
	void showHappiness();
};

