#include <testing.h>
#include <tannakiansymbol.h>

#include <iostream>

using namespace std;

int main()
{
    cout << endl << "Running tests..." << endl;

    starttest("test1");

    assertequal <int> (1 + 1, 2);

    stoptest();

    cout << endl;
    
    return testsfinished();
}
