#ifndef _ARTHUR_LIB_
#define _ARTHUR_LIB_

#include <iostream>
#include <vector>
#include <string>
using namespace std;


template<typename It>
void print_vector(It first, It last, string separator = "\t") {
    if(first == last) return;
    for(; first != prev(last); ++first) {
        cout << *first << separator;
    }
    cout << *prev(last) << endl;
}

template<typename T>
void print_vector(const vector<T> & v, string separator = "\t") {
    print_vector(v.begin(), v.end(), separator);
}

template<typename It>
bool bubble_sort(It first, It last) { 
    if(first == last) return false;
    bool swapped = false;
    It current = first;
    while(last != first) {
        while(current != prev(last)) {
            if(*current > *next(current)) {
                swap(*current, *next(current));
                swapped = true;
            }
            ++current;
        }
        if(swapped == false) break;
        current = first;
        --last;
    }
    return swapped;
}

template<typename T>
bool bubble_sort(vector<T> & v) {
    return tri_a_bulle(v.begin(), v.end());
}

template<typename It>
bool selection_sort(It first, It last) {
    if(first == last) return false;
    bool swapped = false;
    for(; first != prev(last); ++first) {
        It current = next(first);
        It min = current;
        for(; current != last; ++current) {
            if(*current < *min) {
                min = current;
            }
        }
        if(*min < *first) {
            swap(*min, *first);
            swapped = true;
        }
    }
    return swapped;
}

template<typename T>
bool selection_sort(vector<T> & v) {
    return selection_sort(v.begin(), v.end());
}


#endif