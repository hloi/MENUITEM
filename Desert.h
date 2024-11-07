#ifndef Desert_H
#define Desert_H
#include <iostream>
#include <string>
#include "MenuItem.h"
using std::cout;
using std::endl;
using std::string;

class Desert : public MenuItem
{
public:
    Desert() {} // default constructor
    Desert(string name, double price); // constructor with parameters

    //~Desert(); // default destructor

    void display(); // display function
    bool operator==(const Desert& d) const; // compare two Deserts
    

    
};

#endif // Desert_H