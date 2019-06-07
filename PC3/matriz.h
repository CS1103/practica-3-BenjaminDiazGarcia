#ifndef PC3_MATRIZ_H
#define PC3_MATRIZ_H

#include <iostream>

using namespace std;

template <typename T>
class matriz {
    int filas;
    int columnas;
    T **Matriz;
public:

    matriz() = default;
    matriz(int n, int m): filas{n}, columnas{m}{
        int i;
        filas = m;
        columnas = n;
        Matriz = new T*[filas];
        for(i = 0; i< filas; i++){
            Matriz[i] = new T[columnas];
        }

        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                Matriz[i][j] = 1+rand()%(101-1);
            }
        }
    }
    void print() {
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; ++j) {
                cout << Matriz[i][j] << " ";
            }
            cout << endl;
        }
    }
    void operator+(const matriz<T>& p2)
    {
        matriz m3(3, 3);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << Matriz[i][j] + p2.Matriz[i][j] << " ";
            }
            cout << endl;
        }

    }

};

#endif
