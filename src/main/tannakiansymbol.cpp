#include "tannakiansymbol.h"


using namespace std;

template <class T>
tannakiansymbol<T>::tannakiansymbol (vector<pair<T, int> > multiplicities) :data(multiplicities), cleanedup(false)
{

}

