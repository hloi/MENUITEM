/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "D:/CSC109/CH10/MENUITEM/newCxxTest.h", 25, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testDrink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testDrink() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 31, "testDrink" ) {}
 void runTest() { suite_newCxxTest.testDrink(); }
} testDescription_suite_newCxxTest_testDrink;

static class TestDescription_suite_newCxxTest_testDesert : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testDesert() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 38, "testDesert" ) {}
 void runTest() { suite_newCxxTest.testDesert(); }
} testDescription_suite_newCxxTest_testDesert;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
