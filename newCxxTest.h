/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "MenuItem.h"
#include "Desert.h"
#include "Drink.h"
#include "MainCourse.h"
#include "Menu.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testDrink() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions. 
        Drink d("Coke", 1.50);
        d.display();
        TS_ASSERT_EQUALS(d.getName(), "Coke");
        TS_ASSERT_DELTA(d.getPrice(), 1.50, 0.001);
    }
    void testDesert() {
        Desert de("Cake", 3.50);
        de.display();
        TS_ASSERT_EQUALS(de.getName(), "Cake");
        TS_ASSERT_DELTA(de.getPrice(), 3.50, 0.001);
    }
       
    void testMainCourse() {
        MainCourse mc("Steak", 10.50, "Tenderloin");
        mc.display();
        TS_ASSERT_EQUALS(mc.getName(), "Steak");
        TS_ASSERT_DELTA(mc.getPrice(), 10.50, 0.001);
    }   
    
    void testOperator2() {
        MainCourse mc1("Steak", 10.50, "Tenderloin");
        MainCourse mc2("Steak", 10.50, "Tenderloin");
        TS_ASSERT(mc1 == mc2);
    }
    void testOperator3() {
        Drink d1("Coke", 1.50);
        Drink d2("Coke", 1.50);
        TS_ASSERT(d1 == d2);
    }   
    void testMenu1() {
        Menu m;
        
        Drink* d = new Drink("Coke", 1.50);
        Desert* de = new Desert("Cake", 3.50);
        MainCourse* mc = new MainCourse("Steak", 10.50, "Tenderloin");
        
        m.addMenuItem(d);
        m.addMenuItem(de);
        m.addMenuItem(mc);
        m.displayMenu();
        
        TS_ASSERT(*(m.findMenuItem("Coke")) == *d);
        TS_ASSERT(*m.findMenuItem("Cake") == *de);
        TS_ASSERT(*m.findMenuItem("Steak") == *mc);


    }
    void testMenu2() {
        Menu m;
        
        Drink* d = new Drink("Coke", 1.50);
        Desert* de = new Desert("Cake", 3.50);
        MainCourse* mc = new MainCourse("Steak", 10.50, "Tenderloin");
        
        m.addMenuItem(d);
        m.addMenuItem(de);
        m.addMenuItem(mc);
        m.displayMenu();
        
        m.removeMenuItem("Coke");
        m.removeMenuItem("Cake");
        m.removeMenuItem("Steak");
        m.displayMenu();
        
        TS_ASSERT(m.findMenuItem("Coke") == nullptr);
        TS_ASSERT(m.findMenuItem("Cake") == nullptr);
        TS_ASSERT(m.findMenuItem("Steak") == nullptr);
    }
    
};
#endif /* NEWCXXTEST_H */

