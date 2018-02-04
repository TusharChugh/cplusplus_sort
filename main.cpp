#include <iostream>
#include <vector>
#include <algorithm>
#include "include/merge_sort.h"

template<typename T>
void print_vector(std::vector<T>& input) {
    for(auto elem: input) std::cout<<elem<<" ";
    std::cout<<std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<int> input1{2, 5, 1, 4, 3, 7};
    std::cout<<"Original vector: "; print_vector(input1);
//    std::sort(input1.begin(), input1.end() - 1);
//    std::cout<<"std sorted vector: "; print_vector(input1);
    tlib::merge_sort(input1.begin(), input1.end());
    std::cout<<"std sorted vector: "; print_vector(input1);
    return 0;
}