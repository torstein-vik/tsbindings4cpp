#include "testing.h"

#include <iostream>

using namespace std;

struct {
    string testname;
    bool passing;
    bool global_passing;
    string error_msg;
} TestState;

void starttest(string name)
{
    TestState.testname = name;
    TestState.passing = true;
    TestState.error_msg = "";
}

void stoptest()
{
    if(TestState.passing) {
        cout << " - " << TestState.testname << ": succeeded!" << endl;
    } else {
        cout << " - " << TestState.testname << ": failed!" << endl;
        cout << "Error: " << TestState.error_msg << endl;
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
        TestState.error_msg += "\n" + msg;
    }
}
