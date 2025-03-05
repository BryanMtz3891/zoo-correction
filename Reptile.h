// Reptile.h

#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
public:
    Reptile(const std::string& name, int age, const std::string& species);
    void makeSound() const override;
    void displayInfo() const override;
};

#endif
