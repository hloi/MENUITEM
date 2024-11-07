#include "Menu.h"

Menu::~Menu()
{
    for (int i = 0; i < menuItems.size(); i++)
    {
        delete menuItems[i];
    }   
}

// Menu::Menu(const Menu& m)
// {
//     for (int i = 0; i < m.menuItems.size(); i++)
//     {
//         menuItems.push_back(m.menuItems[i]);
//     }
// }   

// Menu& Menu::operator=(const Menu& m)
// {
//     if (this != &m)
//     {
//         for (int i = 0; i < menuItems.size(); i++)
//         {
//             delete menuItems[i];
//         }
//         menuItems.clear();
//         for (int i = 0; i < m.menuItems.size(); i++)
//         {
//             menuItems.push_back(m.menuItems[i]);
//         }
//     }
//     return *this;
// }   

void Menu::displayMenu()
{
    for (int i = 0; i < menuItems.size(); i++)
    {
        menuItems[i]->display();
    }
}   

void Menu::addMenuItem(MenuItem* mi)
{
    menuItems.push_back(mi);
}

void Menu::removeMenuItem(string name)
{
    for (int i = 0; i < menuItems.size(); i++)
    {
        if (menuItems[i]->getName() == name)
        {
            delete menuItems[i];
            menuItems.erase(menuItems.begin() + i);
            break;
        }
    }
}   

MenuItem* Menu::findMenuItem(string name)
{
    for (int i = 0; i < menuItems.size(); i++)
    {
        if (menuItems[i]->getName() == name)
        {
            return menuItems[i];
        }
    }
    return nullptr;
}



bool Menu::operator==(const Menu& m)
{
    if (menuItems.size() != m.menuItems.size())
    {
        return false;
    }
    for (int i = 0; i < menuItems.size(); i++)
    {
        if (!(*menuItems[i] == *m.menuItems[i]))
        {
            return false;
        }
    }
    return true;
}   

