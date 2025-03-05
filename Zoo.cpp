#include "Zoo.h"
#include "Animal.h"    // Include Animal base class
#include "Mammal.h"    // Include Mammal class
#include "Bird.h"      // Include Bird class
#include "Reptile.h"   // Include Reptile class
#include "Zoo.h"
#include <fstream>
#include <iostream>

Zoo::Zoo() : numAnimals(0), maxAnimals(5) {
    animals = new Animal*[maxAnimals];
}

Zoo::~Zoo() {
    for (int i = 0; i < numAnimals; i++) {
        delete animals[i];
    }
    delete[] animals;
}

void Zoo::resizeArray() {
    maxAnimals *= 2;
    Animal** temp = new Animal*[maxAnimals];
    for (int i = 0; i < numAnimals; i++) {
        temp[i] = animals[i];
    }
    delete[] animals;
    animals = temp;
}

void Zoo::addAnimal(Animal* animal) {
    if (numAnimals == maxAnimals) {
        resizeArray();
    }
    animals[numAnimals++] = animal;
}

void Zoo::removeAnimal(int index) {
    if (index < 0 || index >= numAnimals) {
        std::cout << "Invalid index." << std::endl;
        return;
    }
    delete animals[index];
    for (int i = index; i < numAnimals - 1; i++) {
        animals[i] = animals[i + 1];
    }
    numAnimals--;
}

void Zoo::displayAnimals() const {
    for (int i = 0; i < numAnimals; i++) {
        animals[i]->displayInfo();
    }
}

void Zoo::saveToFile(const char* filename) const {
    std::ofstream outFile(filename);
    for (int i = 0; i < numAnimals; i++) {
        outFile << animals[i]->getName() << "," << animals[i]->getAge() << "," << animals[i]->getSpecies() << std::endl;
    }
    outFile.close();
}

void Zoo::loadFromFile(const char* filename) {
    std::ifstream inFile(filename);
    std::string name, species;
    int age;
    while (inFile >> name >> age >> species) {
        Animal* animal = new Mammal(name, age, species); // Assuming it's a mammal for now
        addAnimal(animal);
    }
    inFile.close();
}
