#include "MainCourse.h"

MainCourse::MainCourse()
{
}

MainCourse::MainCourse(string name, double price, string description) : MenuItem(name, price)
{
    this->description = description;
}

void MainCourse::display()
{
    cout << "Main Course: " << getName() << " Price: " << getPrice() << " Description: " << description << endl;


}

bool MainCourse::operator==(const MainCourse &d) const
{
    return this->getName() == d.getName() && this->getPrice() == d.getPrice() && this->description == d.description;    
}
