#include "testing.h"

#include <iostream>

using namespace std;

struct {
    string testname;
    bool passing;
    bool global_passing;
} TestState;

void starttest(string name)
{
    TestState.testname = name;
    TestState.passing = true;
}

void stoptest()
{
    if(TestState.passing) {
        cout << " - " << TestState.testname << ": succeeded!" << endl;
    } else {
        cout << " - " << TestState.testname << ": failed!" << endl;
    }
}

int testsfinished()
{
    return TestState.global_passing;
}

void assert(bool assertion, string msg)
{
    if(!assertion) {
        TestState.passing = false;
        TestState.global_passing = false;
    }
}
