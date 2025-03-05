#ifndef ZOO_H
#define ZOO_H

#include "Animal.h"
#include <vector>

class Zoo {
private:
    Animal** animals;
    int numAnimals;
    int maxAnimals;

    void resizeArray();

public:
    Zoo();
    ~Zoo();

    void addAnimal(Animal* animal);
    void removeAnimal(int index);
    void displayAnimals() const;
    void saveToFile(const char* filename) const;
    void loadFromFile(const char* filename);
};

#endif
