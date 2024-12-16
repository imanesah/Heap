#include "FoncHeap.h"
#include <algorithm>

FoncHeap::FoncHeap() {
}

FoncHeap::~FoncHeap() {
    heap.clear();
}

void FoncHeap::insert(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
}

void FoncHeap::heapifyUp(int index) {
    if (index <= 1) {
        return;
    }
    int parentIndex = index / 2;
    if (heap[index] > heap[parentIndex]) {
        swap(index, parentIndex);
        heapifyUp(parentIndex);
    }
}

void FoncHeap::show() {
    for (int i = 1; i < heap.size(); i++) {
        cout << heap[i] << " ";
    }
    cout << endl;
}

void FoncHeap::swap(int index1, int index2) {
    int temp = heap[index1];
    heap[index1] = heap[index2];
    heap[index2] = temp;
}

void FoncHeap::trier() {
    sort(heap.begin(), heap.end());
}