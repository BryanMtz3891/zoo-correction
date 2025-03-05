// Mammal.cpp

#include "Mammal.h"
#include <iostream>

Mammal::Mammal(const std::string& name, int age, const std::string& species)
    : Animal(name, age, species) {}

void Mammal::makeSound() const {
    std::cout << name << " says: Roar!" << std::endl;
}

void Mammal::displayInfo() const {
    std::cout << "Mammal - Name: " << name << ", Age: " << age << ", Species: " << species << std::endl;
}
