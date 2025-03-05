// Mammal.h

#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
public:
    Mammal(const std::string& name, int age, const std::string& species);
    void makeSound() const override;
    void displayInfo() const override;
};

#endif
