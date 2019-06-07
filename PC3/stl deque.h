#ifndef PC3_STL_DEQUE_H
#define PC3_STL_DEQUE_H

#include <deque>
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
void emparejamiento(deque<T> deque1, int n){
    vector<T> vector1;
    vector<T> vector2;

    for (auto it = begin(deque1); it != end(deque1) - n + 1; it++) {
        for (int j = 0; j < n; j++) {
            cout << *(it+j) << " ";
            vector1.push_back(*(it+j));
        }
        auto temp = vector1[0];
        for (int i = 0; i < n; ++i) {
            if (temp > vector1[i])
                temp = vector1[i];
        }
        vector2.push_back(temp);
        vector1.clear();
        cout << endl;
    }
    cout << "Los más pequeños de cada grupo son: ";
    for (int k = 0; k < size(vector2); ++k) {
        cout << vector2[k] << " ";
    }
}

#endif //PC3_STL_DEQUE_H
