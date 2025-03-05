// Bird.h

#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
    Bird(const std::string& name, int age, const std::string& species);
    void makeSound() const override;
    void displayInfo() const override;
};

#endif
