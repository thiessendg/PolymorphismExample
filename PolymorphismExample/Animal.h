#pragma once
class Animal
{
public:
	Animal() = default;
	virtual ~Animal() = default;
	virtual void speak() = 0;
	virtual void showHappiness() = 0;
};

