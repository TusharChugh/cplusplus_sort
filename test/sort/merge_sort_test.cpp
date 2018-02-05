#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "merge_sort.h"

TEST(MERGESORT, MERGESORT_FIVEELEMENTS_Test) {
    std::vector<int> input1{2, 5, 1, 4, 3, 7, 5};
    std::vector<int> input2{2, 5, 1, 4, 3, 7, 5};
    std::sort(input1.begin(), input1.end());
    std::sort(input2.begin(), input2.end());
    tlib::merge_sort(input2.begin(), input2.end());
    ASSERT_TRUE(std::equal(input1.begin(), input1.end(), input2.begin()));
}