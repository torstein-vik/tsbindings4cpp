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
}

int testsfinished()
{
}

void assert(bool assertion, string msg)
{
}
