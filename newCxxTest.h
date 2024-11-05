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
};
#endif /* NEWCXXTEST_H */

