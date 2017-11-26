#ifndef __TANNAKIANSYMBOL_H_INCLUDED
#define __TANNAKIANSYMBOL_H_INCLUDED

#include <vector>
#include <tuple>


template <class T>
class tannakiansymbol {
    private:
        bool cleanedup;
        std::vector<std::pair<T, int> > data;

    public:
        tannakiansymbol (std::vector<std::pair<T, int> > multiplicities);
        void cleanup ();
};

#endif
