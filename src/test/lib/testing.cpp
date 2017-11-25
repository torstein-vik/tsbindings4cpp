#include "testing.h"

#include <iostream>

using namespace std;

struct {
    string testname;
    bool passing;
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
}

void assert(bool assertion, string msg)
{
}
