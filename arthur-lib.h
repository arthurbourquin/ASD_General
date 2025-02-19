#ifndef _TRI_A_BULLE_
#define _TRI_A_BULLE_

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void print_vector(const vector<T> & v, string separator = "\t") {
    if(v.empty()) return;
    for(size_t i = 0; i < v.size() - 1; ++i) {
        cout << v.at(i) << separator;
    }
    cout << v.back() << endl;
}

template<typename It>
void tri_a_bulle(It first, It last) {
    bool swapped = false;
    It current = first;
        while (current != prev(last)) {
            if (*current > *next(current)) {
                swap(*current, *next(current));
                swapped = true;
            }
            ++current;
        }
}


#endif