#include "Desert.h"
#include "MenuItem.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

    
Desert::Desert(string name, double price) : MenuItem(name, price)
{
}

void Desert::display()
{
    cout << "Desert: " << getName() << " Price: " << getPrice() << endl;
}

bool Desert::operator==(const Desert& d) const
{
    return this->getName() == d.getName() && this->getPrice() == d.getPrice();
}