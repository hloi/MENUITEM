#include "MenuItem.h"

MenuItem::~MenuItem()
{
}

MenuItem::MenuItem(string name, double price)
{
    this->name = name;
    this->price = price;
}

double MenuItem::getPrice()
{
    return price;
}

string MenuItem::getName()
{
    return name;
}
