## Simple Polymorphism Example in C++

This is a simple example of animal polymorphism in C++. The code defines a base class called `Animal` with a virtual `MakeSound()` function. The `Dog` and `Cat` classes inherit from the `Animal` class and override the `MakeSound()` function to provide their own implementations.

The main function creates an array of `Animal` pointers and then creates instances of the `Dog` and `Cat` classes and assigns them to the array elements. The code then iterates over the array and calls the `MakeSound()` function for each animal.

### Code 

```
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
```
### Usage

To compile and run the program, simply execute the following commands: </br>
 `g++ main.cpp -o main ` </br>
`./main`

### Output

The program will print the following output to the console:

Dog barks: Woof! Woof! </br>
Cat meows: Meow! Meow!  </br>
Dog barks: Woof! Woof! </br>

## License
This project is licensed under the MIT License. For more information, please see the LICENSE file.


