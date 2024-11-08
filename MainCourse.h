#ifndef MainCourse_H
#define MainCourse_H
#include <iostream>
#include <string>
using std::string;

#include "MenuItem.h"

class MainCourse : public MenuItem {
    private: 
    string description;

public:
    MainCourse(); // default constructor
    // ~MainCourse(); // default destructor
    MainCourse(string name, double price, string description); // constructor with parameters
    void display(); // display function
    bool operator==(const MainCourse& d) const; // compare two MainCourses       



    
};

#endif // MainCourse_H