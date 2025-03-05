// Bird.cpp

#include "Bird.h"
#include <iostream>

Bird::Bird(const std::string& name, int age, const std::string& species)
    : Animal(name, age, species) {}

void Bird::makeSound() const {
    std::cout << name << " says: Chirp!" << std::endl;
}

void Bird::displayInfo() const {
    std::cout << "Bird - Name: " << name << ", Age: " << age << ", Species: " << species << std::endl;
}
