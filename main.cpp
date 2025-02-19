#include "arthur-lib.h"

vector<int> v = {4, 2, 7, 9, 5, 1, 3, 6};

int main() {


    print_vector(v, ", ");
    selection_sort(v.begin(), v.end());
    print_vector(v, ", ");


    return 0;
}