#include "stdafx.h"
#include "Dog.h"

// In c++11, trivial, default constructors and destructors no longer have to be supplied. See the header. 
Dog::Dog()
    : hasFleas(false), pFlea(nullptr)
{
}

Dog::Dog(Flea & someFlea)
    : hasFleas(false), pFlea(&someFlea)
{
}

// copy constructor for class Dog;
// must receive a reference to a Dog
Dog::Dog(const Dog &dogToCopy)
    : hasFleas(dogToCopy.hasFleas), pFlea(dogToCopy.pFlea)
{
} // end Dog copy constructor

Dog::~Dog()
{
}

void Dog::speak()
{
	printf_s("\tWoof\n");
}

void Dog::showHappiness()
{
	printf_s("\twagging tail\n");
}