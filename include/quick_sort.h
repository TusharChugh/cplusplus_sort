#ifndef SORT_QUICK_SORT_H
#define SORT_QUICK_SORT_H

namespace tlib {
    template <typename BidirectionalIt, typename Compare>
    void quick_sort(BidirectionalIt first, BidirectionalIt last, Compare comp) {
        const size_t size = std::distance(first, last);
        if(size <= 1) return;

        auto pivot = last;
        --pivot;

        auto left = first;
        auto right = pivot;

        while(left != right) {
            while(!comp(*pivot, *left)  && left != right) ++left;
            while(!comp(*right, *pivot) && left != right) --right;

            if(left != right) std::swap(*left, *right);
        }

        if(pivot != left && comp(*pivot, *left)) {
            using std::swap;
            swap(*pivot, *left);
        }

        quick_sort(first, left, comp);
        quick_sort(++left, last, comp);
    }

    template <class BidirectionalIt>
    void quick_sort(BidirectionalIt first, BidirectionalIt last) {
        quick_sort(first, last, std::less<typename std::iterator_traits<BidirectionalIt>::value_type>());
    }
}

#endif //SORT_QUICK_SORT_H
