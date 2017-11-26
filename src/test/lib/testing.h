#ifndef __TANNAKIANSYMBOL_H_INCLUDED
#define __TANNAKIANSYMBOL_H_INCLUDED

#include <string>

void starttest(std::string name);
void stoptest();
int  testsfinished();
void assert(bool assertion, std::string msg);

template <class T>
void assertequal(T p1, T p2){
    assert(p1 == p2, std::to_string(p1) + " was not equal to " + std::to_string(p2));
}

#endif
