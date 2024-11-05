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
