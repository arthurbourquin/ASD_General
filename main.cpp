#include "arthur-lib.h"

vector<int> v = {4, 2, 5, 1, 3};

int main() {

    print_vector(v, ", ");
    tri_a_bulle(v.begin(), v.end());
    print_vector(v, ", ");


    return 0;
}