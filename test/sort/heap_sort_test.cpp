#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "heap_sort.h"
#include <stdlib.h>

template <typename RandomIt>
void print(RandomIt first, RandomIt last, std::string text) {
    std::cout<<text<<" ";
    for(auto iter = first; iter < last; ++iter)
        std::cout<<*iter<<" ";
    std::cout<<std::endl;
}

TEST(HEAPSORT, HEAPSORT_EMPTY_VECTOR_ELEMENTS_TRUE_Test) {
    std::vector<int> input1;
    std::vector<int> input2;
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(HEAPSORT, HEAPSORT_VECTOR__ODD_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{2, 5, 1, 4, 3, 7, 5};
    std::vector<int> input2{2, 5, 1, 4, 3, 7, 5};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}


TEST(HEAPSORT, HEAPSORT_VECTOR_EVEN_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{2, 5, 1, 4, 3, 7};
    std::vector<int> input2{2, 5, 1, 4, 3, 7};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(HEAPSORT, HEAPSORT_VECTOR_PRESORTED_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{1, 2, 3, 4, 5};
    std::vector<int> input2{1, 2, 3, 4, 5};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}


TEST(HEAPSORT, HEAPSORT_SINK_TRUE_Test) {
    std::vector<int> input1{3, 2, 1};
    std::vector<int> input2{1, 2, 3};
    tlib::sink(input2.begin(), input2.begin(), input2.end(), std::less<int>());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(HEAPSORT, HEAPSORT_VECTOR_PRESORTED_THREE_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{3, 2, 1, 4, 5};
    std::vector<int> input2{1, 2, 3, 4, 5};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}


TEST(HEAPSORT, HEAPSORT_VECTOR_ELEMENTS_FALSE_Test) {
    std::vector<int> input1{2, 5, 1, 4, 3, 7, 5};
    std::vector<int> input2{2, 5, 8, 4, 3, 7, 5};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_FALSE(std::equal(input1.begin(), input1.end(), input2.begin()));
}


TEST(HEAPSORT, HEAPSORT_ARRAY_ELEMENTS_Test) {
    std::array<int, 7> input1{2, 5, 1, 4, 3, 7, 5};
    std::array<int, 7> input2{2, 5, 1, 4, 3, 7, 5};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(HEAPSORT, HEAPSORT_STRING_ELEMENTS_Test) {
    std::string input1("Hello World");
    std::string input2("Hello World");
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}


TEST(HEAPSORT, HEAPSORT_VECTOR_FLOAT_ELEMENTS_TRUE_Test) {
    std::vector<float> input1{2.5, 2.4, 2.3, 2.10, 3.4, 7.6, 1.2};
    std::vector<float> input2{2.5, 2.4, 2.3, 2.10, 3.4, 7.6, 1.2};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(HEAPSORT, HEAPSORT_VECTOR_CHAR_ELEMENTS_TRUE_Test) {
    std::vector<char> input1{'a', 'd', 'b', 'c'};
    std::vector<char> input2{'a', 'd', 'b', 'c'};
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(HEAPSORT, HEAPSORT_VECTOR_REVERSE_ELEMENTS_FALSE_Test) {
    const size_t size = 10000;
    std::vector<unsigned int> input1(size);
    std::vector<unsigned int> input2(size);

    for(unsigned int index = size; index > 0; --index) {
        input1.push_back(index);
        input2.push_back(index);
    }
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(HEAPSORT, HEAPSORT_VECTOR_RANDOM_ELEMENTS_FALSE_Test) {
    const size_t size = 10000;
    std::vector<unsigned int> input1(size);
    std::vector<unsigned int> input2(size);

    for(unsigned int index = 0; index < size; ++index) {
        unsigned int num = rand();
        input1.push_back(num);
        input2.push_back(num);
    }
    std::sort(input1.begin(), input1.end());
    tlib::heap_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}


