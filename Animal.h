// Animal.h

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string name;
    int age;
    std::string species;

public:
    Animal(const std::string& name, int age, const std::string& species)
        : name(name), age(age), species(species) {}

    virtual void makeSound() const = 0;
    virtual void displayInfo() const = 0;

    // Getter functions
    std::string getName() const { return name; }
    int getAge() const { return age; }
    std::string getSpecies() const { return species; }
};

#endif
