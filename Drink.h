#ifndef Drink_H
#define Drink_H
#include "MenuItem.h"
#include <iostream>
#include <string>
class Drink : public MenuItem
{
public:
    Drink() {} // default constructor
    Drink(string name, double price); // constructor with parameters
    void display(); // display function
    bool operator==(const Drink); // compare two Drinks

    
};

#endif // Drink_H