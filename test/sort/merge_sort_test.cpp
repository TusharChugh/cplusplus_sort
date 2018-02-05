#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "merge_sort.h"


TEST(MERGESORT, MERGESORT_TWO_UNSORTED_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{5, 2};
    std::vector<int> input2{5, 2};
    std::sort(input1.begin(), input1.end());
    tlib::merge_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(MERGESORT, MERGESORT_TWO_SORTED_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{2, 5};
    std::vector<int> input2{2, 5};
    std::sort(input1.begin(), input1.end());
    tlib::merge_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(MERGESORT, MERGESORT_VECTOR_ELEMENTS_TRUE_Test) {
    std::vector<int> input1{2, 5, 1, 4, 3, 7, 5};
    std::vector<int> input2{2, 5, 1, 4, 3, 7, 5};
    std::sort(input1.begin(), input1.end());
    tlib::merge_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(MERGESORT, MERGESORT_VECTOR_ELEMENTS_FALSE_Test) {
    std::vector<int> input1{2, 5, 1, 4, 3, 7, 5};
    std::vector<int> input2{2, 5, 8, 4, 3, 7, 5};
    std::sort(input1.begin(), input1.end());
    tlib::merge_sort(input2.begin(), input2.end());
    ASSERT_FALSE(std::equal(input1.begin(), input1.end(), input2.begin()));
}


TEST(MERGESORT, MERGESORT_ARRAY_ELEMENTS_Test) {
    std::array<int, 7> input1{2, 5, 1, 4, 3, 7, 5};
    std::array<int, 7> input2{2, 5, 1, 4, 3, 7, 5};
    std::sort(input1.begin(), input1.end());
    tlib::merge_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}

TEST(MERGESORT, MERGESORT_STRING_ELEMENTS_Test) {
    std::string input1("Hello World");
    std::string input2("Hello World");
    std::sort(input1.begin(), input1.end());
    tlib::merge_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}
