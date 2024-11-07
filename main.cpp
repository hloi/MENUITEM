#include <iostream>
using namespace std;
#include "Drink.h"
#include "MenuItem.h"
#include "Desert.h"
#include "MainCourse.h"
#include "Menu.h"

using namespace std;

int main() {
    Drink d("Coke", 1.50);
    d.display();
    Desert de("Cake", 3.50);
    de.display();
    MainCourse mc("Steak", 15.50, "A nice steak");
    mc.display();
    Menu m = Menu();
    m.addMenuItem(&d);
    m.addMenuItem(&de);
    m.addMenuItem(&mc);
    m.displayMenu();
    return 0;
}