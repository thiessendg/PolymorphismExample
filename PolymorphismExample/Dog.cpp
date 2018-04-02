#include "stdafx.h"
#include "Dog.h"
#include <iostream>


Dog::Dog()
{
}


Dog::~Dog()
{
}

void Dog::speak()
{
	std::cout << "Woof" << std::endl;
}

void Dog::showHappiness()
{
	std::cout << "wagging tail" << std::endl;
}