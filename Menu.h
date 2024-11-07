#ifndef Menu_H
#define Menu_H
#include <vector>
#include "MenuItem.h"
using std::vector;

class Menu {
    private:
    // no private members
    vector<MenuItem*> menuItems; // vector of MenuItem pointers

public:
    Menu() {} // default constructor
    ~Menu(); // default destructor
    // Menu(const Menu&); // copy constructor
    // Menu& operator=(const Menu&); // assignment operator
    
    void displayMenu(); // display the menu
    void addMenuItem(MenuItem*); // add a MenuItem to the menu
    void removeMenuItem(string); // remove a MenuItem from the menu
    MenuItem* findMenuItem(string); // find a MenuItem in the menu
    bool operator==(const Menu& m); // compare two Menus
    
    
};

#endif // Menu_H