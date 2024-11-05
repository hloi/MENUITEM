#include <iostream>
using namespace std;
#include "Drink.h"
#include "MenuItem.h"
#include "Desert.h"

using namespace std;

int main() {
    Drink d("Coke", 1.50);
    d.display();
    Desert de("Cake", 3.50);
    de.display();
    return 0;
}