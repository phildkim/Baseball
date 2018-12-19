#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H
#define MAX 30
#include <iostream>
#include <sstream>

template<typename S, typename D>
class HeapItem
{
    S heap_key;
    D heap_data;
public:
    HeapItem():heap_key(""),heap_data(0){}
    HeapItem(S str, D data) : heap_key(str), heap_data(data) {}
    ~HeapItem() {}
    D getData() const { return  heap_data; }
    void setData(D data) { heap_data = data; }
    S getStr() const { return heap_key; }
    void setStr(S str) { heap_key = str; }
};

template<typename S, typename D>
class DataStructures
{
    HeapItem<S,D>* data;
    int num_heap_elements;
    int num_heap_length;
public:
    DataStructures(int size = 15);
    ~DataStructures();
    void BubbleDown(int root, int bottom);
    void BubbleUp(int root, int bottom);
    bool Enqueue(HeapItem<S,D>* item);
    bool Enqueue(std::string key, D data);
    HeapItem<S,D>* Dequeue();
    int getNumElements() const;
    std::string printSouvenir();
    std::string printTeams();
};

template<typename S, typename D>
DataStructures<S,D>::DataStructures(int size) :
    data(new HeapItem<S,D>[size]),
    num_heap_elements(0),
    num_heap_length(size) {}

template<typename S, typename D>
DataStructures<S,D>::~DataStructures()
{
    delete [] data;
}

template<typename S, typename D>
void DataStructures<S,D>::BubbleDown(int root, int bottom)
{
    int maxChild;
    int rightChild;
    int leftChild;
    HeapItem<S,D> temp;
    leftChild = root * 2 + 1;
    rightChild = root * 2 + 2;
    if(leftChild <= bottom)
    {
        if(leftChild == bottom)
            maxChild = leftChild;
        else
        {
            if(data[leftChild].getStr() <= data[rightChild].getStr())
                maxChild = rightChild;
            else
                maxChild = leftChild;
        }
        if(data[root].getStr() < data[maxChild].getStr())
        {
            temp = data[root];
            data[root] = data[maxChild];
            data[maxChild] = temp;
            BubbleDown(maxChild, bottom);
        }
    }

}

template<typename S, typename D>
void DataStructures<S,D>::BubbleUp(int root, int bottom)
{
    int parent;
    HeapItem<S,D> temp;
    if(bottom > root)
    {
        parent = (bottom - 1) / 2;
        if(data[parent].getStr() < data[bottom].getStr())
        {
            temp = data[parent];
            data[parent] = data[bottom];
            data[bottom] = temp;
            BubbleUp(root, parent);
        }
    }
}

template<typename S, typename D>
bool DataStructures<S,D>::Enqueue(HeapItem<S,D>* item)
{
    if(num_heap_elements < num_heap_length)
    {
        data[num_heap_elements] = *item;
        BubbleUp(0, num_heap_elements);
        ++num_heap_elements;
        return true;
    }
    return false;
}

template<typename S, typename D>
bool DataStructures<S,D>::Enqueue(std::string key, D data)
{
    bool retVal;
    HeapItem<S,D> *temp = new HeapItem<S,D>(key, data);
    retVal = Enqueue(temp);
    delete temp;
    return retVal;
}

template<typename S, typename D>
HeapItem<S,D>* DataStructures<S,D>::Dequeue()
{
    HeapItem<S,D> *temp = new HeapItem<S,D>(data[0].getStr(), data[0].getData());
    --num_heap_elements;
    data[0] = data[num_heap_elements];
    BubbleDown(0, num_heap_elements - 1);
    if(num_heap_elements == 0)
        return NULL;
    else
        return temp;
}

template<typename S, typename D>
int DataStructures<S,D>::getNumElements() const
{
    return num_heap_elements;
}

#endif // DATASTRUCTURES_H
