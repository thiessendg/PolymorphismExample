#pragma once
#include "Animal.h"

class Flea;

class Cat :
	public Animal
{
public:
	Cat();
    //Cat() = default;
	virtual ~Cat() = default;
	void speak() override;
	void showHappiness() override;
    void setColor(std::string);
    void setLivesRemaining(int);
    std::string getColor();
    int getLivesRemaining();
private:
    Flea * pFlea;
    bool hasFleas;
    std::string color;
    int livesRemaining;
};

