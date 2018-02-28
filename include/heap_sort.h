#ifndef HEAPSORT_HEAPSORT_H
#define HEAPSORT_HEAPSORT_H

namespace tlib {
        
    template <typename RandomIt, typename Compare>
    void sink(RandomIt first, RandomIt index, RandomIt last, Compare comp) {
        const auto heap_size = std::distance(first, last);
        auto position = std::distance(first, index);
        while(2 * position + 1 < heap_size) {
            auto child_position = 2 * position + 1;
            auto iter_child1 = first + child_position;
            auto iter_child2 = iter_child1 + 1;
            if(child_position < (heap_size - 1) && comp(*iter_child1, *iter_child2)) child_position++;
            auto iter_child =  first + child_position;
            if(!comp(*index, *iter_child)) break;
            std::swap(*index, *(first + child_position));
            index = first + child_position;
            position = child_position;
        }
    }
    
    template <typename RandomIt, typename Compare>
    void heapify(RandomIt first, RandomIt last, Compare comp) {
        auto index = std::distance(first, last)/2 -1;
        while(index >= 0) {
            sink(first, first + index--, last, comp);
        }
    }
    
    template <typename RandomIt, typename Compare>
    void sort_heap(RandomIt first, RandomIt last, Compare comp) {
        if(first == last) return;
        auto end = last;
        do {
            std::swap(*first, *(end - 1));
            sink(first, first, --end, comp);
        }
        while(first != end);
    }
    
    
    template <typename RandomIt, typename Compare>
    void heap_sort(RandomIt first, RandomIt last, Compare comp) {
        heapify(first, last, comp);
        tlib::sort_heap(first, last, comp);
    }
    
     template <class RandomIt>
    void heap_sort(RandomIt first, RandomIt last) {
        heap_sort(first, last, std::less<typename std::iterator_traits<RandomIt>::value_type>());
    }
    
}

#endif //HEAPSORT_HEAPSORT_H
