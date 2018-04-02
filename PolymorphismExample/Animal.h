#pragma once
class Animal
{
public:
	Animal();
	virtual ~Animal();
	virtual void speak() = 0;
	virtual void showHappiness() = 0;
};

