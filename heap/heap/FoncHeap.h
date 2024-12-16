#pragma once
#include <iostream>
#include <vector>
using namespace std;
class FoncHeap
{
private:
    std::vector<int> heap; 
    void heapifyUp(int index);
    void swap(int index1, int index2);
public:
    FoncHeap();
    void insert(int value);
    void show();
    void trier();
    
    ~FoncHeap();
};

