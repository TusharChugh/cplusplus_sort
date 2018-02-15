#ifndef SORT_SELECTION_SORT_H
#define SORT_SELECTION_SORT_H

namespace tlib {

    template<typename ForwardIt, typename Compare>
    void selection_sort(ForwardIt first, ForwardIt last, Compare comp) {
        for(ForwardIt current = first; first != last; ++first) {
            ForwardIt minimum = first;
            ForwardIt other = first;
            ++other;

            while(other != last) {
                if(comp(*other, *minimum))
                    minimum = other;
                ++other;
            }
            if(minimum != current) {
                using std::swap;
                swap(*minimum, *first);
            }
        }
    }

    template<typename ForwardIt>
    void selection_sort(ForwardIt first, ForwardIt second) {
        selection_sort(first, second, std::less<typename std::iterator_traits<ForwardIt>::value_type>());
    }
} //namespace tlib

#endif //SORT_SELECTION_SORT_H
