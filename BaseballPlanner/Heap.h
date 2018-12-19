#ifndef HEAP_H
#define HEAP_H
#include <iostream>
#include <sstream>
#define MAX 30

template<typename H>
class MyHeap
{
    H arr_sort[MAX];
    H t;
    int i;
public:
    void heap_sort(H*& str);
    void heap_adjust(int size, int index);
    std::string heap_display();
};

template<typename H>
void MyHeap<H>::heap_sort(H*& str)
{
    for(i = 0; i < MAX; ++i)
        arr_sort[i] = str[i];

    for(int i = MAX / 2 - 1; i >= 0; i--)
        heap_adjust(MAX, i);

    for(int i = MAX - 1; i >= 0; i--)
    {
        //Swapping Values
        t = arr_sort[0];
        arr_sort[0] = arr_sort[i];
        arr_sort[i] = t;
        heap_adjust(i, 0);
    }
}

template<typename H>
void MyHeap<H>::heap_adjust(int size, int index)
{
    int large = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if(left < size && arr_sort[left] > arr_sort[large])
        large = left;

    if(right < size && arr_sort[right] > arr_sort[large])
        large = right;

    if(large != index)
    {
        t = arr_sort[index];
        arr_sort[index] = arr_sort[large];
        arr_sort[large] = t;
        heap_adjust(size, large);
    }
}

template<typename H>
std::string MyHeap<H>::heap_display()
{
    H* str = new std::string[MAX];
    for(size_t i = 0; i < MAX; ++i)
        str[i] = arr_sort[i];

    heap_sort(str);
    std::stringstream ss;
    for(i = 0; i < MAX; ++i)
        ss << str[i];
    return ss.str();
}

#endif // HEAP_H
