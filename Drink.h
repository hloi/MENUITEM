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
    void display() override; // display function
    bool operator==(const Drink& d) const; // compare two Drinks

    
};

#endif // Drink_H