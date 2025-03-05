// Reptile.cpp

#include "Reptile.h"
#include <iostream>

Reptile::Reptile(const std::string& name, int age, const std::string& species)
    : Animal(name, age, species) {}

void Reptile::makeSound() const {
    std::cout << name << " says: Hiss!" << std::endl;
}

void Reptile::displayInfo() const {
    std::cout << "Reptile - Name: " << name << ", Age: " << age << ", Species: " << species << std::endl;
}
