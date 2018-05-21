#include "stdafx.h"
#include "Rabbit.h"
#include <iostream>

Rabbit::Rabbit()
{
}


Rabbit::~Rabbit()
{
}

void Rabbit::speak()
{
	std::cout << "Rabbits don't speak!!!" << std::endl;
}

void Rabbit::showHappiness()
{
	std::cout << "wiggle nose" << std::endl;
}