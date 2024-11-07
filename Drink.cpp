#include "Drink.h"
#include "MenuItem.h"

Drink::Drink(string name, double price) : MenuItem(name, price)
{
    // this->name = name;
    // this->price = price;
}

void Drink::display()
{
    cout << "Drink: " << getName() << " Price: " << getPrice() << endl;
    // cout << "Drink: " << name << " Price: " << price << endl;   

}

bool Drink::operator==(const Drink& d) const
{
    return this->getName() == d.getName() && this->getPrice() == d.getPrice();
}
