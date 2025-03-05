#include <iostream>
#include "Zoo.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"

int main() {
    Zoo zoo;

    int choice;
    do {
        std::cout << "1. Add an animal" << std::endl;
        std::cout << "2. Remove an animal" << std::endl;
        std::cout << "3. Display all animals" << std::endl;
        std::cout << "4. Save animals to file" << std::endl;
        std::cout << "5. Load animals from file" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            int animalChoice;
            std::cout << "1. Mammal\n2. Bird\n3. Reptile\n";
            std::cout << "Enter type of animal: ";
            std::cin >> animalChoice;

            std::string name, species;
            int age;

            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter age: ";
            std::cin >> age;
            std::cout << "Enter species: ";
            std::cin >> species;

            Animal* animal = nullptr;
            switch (animalChoice) {
            case 1:
                animal = new Mammal(name, age, species);
                break;
            case 2:
                animal = new Bird(name, age, species);
                break;
            case 3:
                animal = new Reptile(name, age, species);
                break;
            }

            zoo.addAnimal(animal);
            break;
        }
        case 2: {
            int index;
            std::cout << "Enter index to remove: ";
            std::cin >> index;
            zoo.removeAnimal(index);
            break;
        }
        case 3:
            zoo.displayAnimals();
            break;
        case 4:
            zoo.saveToFile("zoo_data.txt");
            break;
        case 5:
            zoo.loadFromFile("zoo_data.txt");
            break;
        case 6:
            std::cout << "Exiting program..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
        }
    } while (choice != 6);

    return 0;
}
