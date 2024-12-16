#include <iostream>
#include <chrono>
#include <vector>

#include <algorithm>
#include "FoncHeap.h"

using namespace std;

int main() {
    const int numElements = 30000; 

    cout << "Test pour " << numElements << " elements\n";
    cout << "\n\n\n";

    // Test avec FoncHeap
    cout << "Implementation du heap avec FoncHeap : \n";
    FoncHeap heap;

    auto startInsert = chrono::high_resolution_clock::now();
    for (int i = numElements; i > 0; --i) {
        heap.insert(i);
    }
    auto endInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> timeIsert = endInsert - startInsert;
    cout << "Temps pour inserer les elements dans le heap  : "
        << timeIsert.count() << " s\n";
   // cout << "l'affichage " << endl;
   // heap.show();
    auto startSort = chrono::high_resolution_clock::now();
    heap.trier();
    auto endSort = chrono::high_resolution_clock::now();
    chrono::duration<double> timesort = endSort - startSort;
    cout << "Temps pour trier les elements du heap (sort) : "
        << timesort.count() << " s\n";

    cout << "\n\n\n";

    /*
    cout << "Test avec priority_queue de la bibliothèque STL : \n";
    priority_queue<int> pq;

    auto startPQ = chrono::high_resolution_clock::now();
    for (int i = numElements; i > 0; --i) {
        pq.push(i);
    }
    auto endPQ = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsedPQ = endPQ - startPQ;
    cout << "Temps pour l'insertion des elements dans une priority_queue : "
        << elapsedPQ.count() << " s\n";

    cout << "\n\n\n";
    */
    
    cout << "Test avec un vector normal : \n";
    vector<int> v;

    auto startVectorInsert = chrono::high_resolution_clock::now();
    for (int i = numElements; i > 0; --i) {
        v.push_back(i);
    }
    auto endVectorInsert = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsedVectorInsert = endVectorInsert - startVectorInsert;
    cout << "Temps pour l'insertion des elements dans un vector normal : "
        << elapsedVectorInsert.count() << " s\n";

    auto startVectorSort = chrono::high_resolution_clock::now();
    sort(v.begin(), v.end());
    auto endVectorSort = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsedVectorSort = endVectorSort - startVectorSort;
    cout << "Temps pour trier les elements dans le vector : "
        << elapsedVectorSort.count() << " s\n";

    cout << "\n\n";


    return 0;
}
