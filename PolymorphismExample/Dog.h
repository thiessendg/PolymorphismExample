#pragma once
#include "Animal.h"

class Flea;

class Dog :
	public Animal
{
public:
    Dog();
    Dog(Flea &);
    Dog(const Dog &); // copy constructor
    const Dog &operator=(const Dog &); // assignment operator
	virtual ~Dog();
	void speak() override;
	void showHappiness() override;
private:
    Flea *pFlea;
    bool hasFleas;
};

