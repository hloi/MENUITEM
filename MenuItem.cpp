#include "MenuItem.h"

MenuItem::~MenuItem()
{
}

MenuItem::MenuItem(string name, double price)
{
    this->name = name;
    this->price = price;
}

double MenuItem::getPrice() const
{
    return price;
}

string MenuItem::getName() const
{
    return name;
}

bool MenuItem::operator==(const MenuItem& mi)
{
    return this->getName() == mi.getName() && this->getPrice() == mi.getPrice();
}
