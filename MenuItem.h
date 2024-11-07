#ifndef MenuItem_H
#define MenuItem_H
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class MenuItem
{
public:
    MenuItem() {}                    // default constructor
    virtual ~MenuItem();                   // default destructor
    MenuItem(string name, double price);      // constructor with parameters
    virtual void display() = 0;    // pure virtual function
    double getPrice(); 
    string getName(); 
    bool operator==(const MenuItem); // compare two MenuItems
private:
    double price;
    string name;
};

#endif // MenuItem_H
