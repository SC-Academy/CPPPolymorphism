#include <iostream>
#include <string>

using namespace std;

// Base class (parent class)
class Animal {
public:
    Animal(const string& name) : name(name) {}

    // Declare a virtual function
    virtual void MakeSound() const {
        cout << "Animal makes a sound." << endl;
    }

private:
    string name;
};

// Derived class (child class)
class Dog : public Animal {
public:
    Dog(const string& name, const string& breed) : Animal(name), breed(breed) {}

    // Override the virtual function
    void MakeSound() const override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }

private:
    string breed;
};

// Derived class (child class)
class Cat : public Animal {
public:
    Cat(const string& name, const string& color) : Animal(name), color(color) {}

    // Override the virtual function
    void MakeSound() const override {
        cout << "Cat meows: Meow! Meow!" << endl;
    }

private:
    string color;
};

int main() {
    // Create instances of different animals
    Animal* animals[3];
    animals[0] = new Dog("Buddy", "Golden Retriever");
    animals[1] = new Cat("Whiskers", "Gray");
    animals[2] = new Dog("Max", "German Shepherd");

    // Call the virtual function for each animal
    for (int i = 0; i < 3; i++) {
        animals[i]->MakeSound();
    }

    // Clean up allocated memory
    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}
