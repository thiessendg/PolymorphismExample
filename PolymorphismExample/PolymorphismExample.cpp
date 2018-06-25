// PolymorphismExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Cat.h"
#include "Dog.h"
#include "Rabbit.h"
#include <memory>

void ShowOff(std::unique_ptr<Animal>& SomeAnimal);

int main()
{
	//create my pets
    Dog myDog;
	Cat myCat;
	Rabbit myRabbit;

    //make a unique ptr of type animal to my dog
    printf_s("Dog...");
	std::unique_ptr<Animal> upMyPet(&myDog); //ptr to Animal abstract class set to address of myDog
	upMyPet->speak();
	upMyPet->showHappiness();

	ShowOff(upMyPet);

	upMyPet.release();

    printf_s("Cat...");
	upMyPet.reset(&myCat);
	upMyPet->speak();
	upMyPet->showHappiness();

	ShowOff(upMyPet);

	upMyPet.release();

    printf_s("Rabbit...\n");
	upMyPet.reset(&myRabbit);
	upMyPet->speak();
	upMyPet->showHappiness();

	ShowOff(upMyPet);
	upMyPet.release();

	//old style
	/*Animal *pMyNewPet = &myDog;
	pMyNewPet->speak();
	pMyNewPet->showHappiness();
	pMyNewPet = nullptr;

	pMyNewPet = &myCat;
	pMyNewPet->speak();
	pMyNewPet->showHappiness();
	pMyNewPet = nullptr;

	pMyNewPet = &myRabbit;
	pMyNewPet->speak();
	pMyNewPet->showHappiness();
	pMyNewPet = nullptr;*/

    return 0;
}

void ShowOff(std::unique_ptr<Animal>& SomeAnimal)
{
    SomeAnimal->speak();
    SomeAnimal->showHappiness();
}

