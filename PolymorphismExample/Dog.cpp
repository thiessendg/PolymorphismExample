#include "stdafx.h"
#include "Dog.h"
#include <iostream>

// In c++11, trivial, default constructors and destructors no lomger have to be supplied. See the header. 
// I'm going to play around with this and see if VS created classes do this.

//Dog::Dog()
//{
//}
//
//
//Dog::~Dog()
//{
//}

void Dog::speak()
{
	std::cout << "Woof" << std::endl;
}

void Dog::showHappiness()
{
	std::cout << "wagging tail" << std::endl;
}