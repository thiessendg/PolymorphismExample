#include "stdafx.h"
#include "Cat.h"

Cat::Cat()
    : hasFleas(false)
{
}

//Cat::~Cat()
//{
//}

void Cat::speak()
{
	printf_s("\tMeow\n");
}

void Cat::showHappiness()
{
	printf_s("\tpuuuuurrrrrr\n");
}

void Cat::setColor(std::string arg)
{
    color = arg;
}

void Cat::setLivesRemaining(int n)
{
    livesRemaining = n;
}

std::string Cat::getColor()
{
    return color;
}

int Cat::getLivesRemaining()
{
    return livesRemaining;
}