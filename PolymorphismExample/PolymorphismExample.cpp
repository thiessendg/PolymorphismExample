// PolymorphismExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Cat.h"
#include "Dog.h"
#include <tuple>
#include <stdexcept>
#include <string>
#include <iostream>

std::tuple<double, char, std::string> get_student(int id)
{
	if (id == 0) return std::make_tuple(3.8, 'A', "Lisa Simpson");
	if (id == 1) return std::make_tuple(2.9, 'C', "Milhouse Van Houten");
	if (id == 2) return std::make_tuple(1.7, 'D', "Ralph Wiggum");
	throw std::invalid_argument("id");
}

int main()
{
	Dog myDog;
	Cat myCat;

	Animal *pMyPet = &myDog;
	pMyPet->speak();
	pMyPet->showHappiness();

	pMyPet = &myCat;
	pMyPet->speak();
	pMyPet->showHappiness();

	pMyPet = nullptr;

//	Animal *pAnimal1 = new Cat();
//	pAnimal1->speak();
//	pAnimal1->showHappiness();
//	delete[] pAnimal1;
//	pAnimal1 = nullptr;

//	Animal *pAnimal2 = new Dog();
//	pAnimal2->speak();
//	pAnimal2->showHappiness();
//	delete[] pAnimal2;
//	pAnimal2 = nullptr;

	auto student0 = get_student(0);
	std::cout << "ID: 0, " << "GPA: " << std::get<0>(student0) << ", " << "grade: " << std::get<1>(student0) << ", " << "name: " << std::get<2>(student0) << std::endl;

	double gpa1;
	char grade1;
	std::string name1;
	std::tie(gpa1, grade1, name1) = get_student(1);
	std::cout << "ID: 1, " << "GPA: " << gpa1 << ", " << "grade: " << grade1 << ", " << "name: " << name1 << std::endl;

	auto student2 = get_student(2);
	std::cout << "ID: 2, " << "GPA: " << std::get<0>(student2) << ", " << "grade: " << std::get<1>(student2) << ", " << "name: " << std::get<2>(student2) << std::endl;

    return 0;
}
