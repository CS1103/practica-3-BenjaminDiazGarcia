#include <iostream>
#include <deque>
#include <stdlib.h>
#include <time.h>


#include "stl deque.h"
#include "matriz.h"
#include "stl map.h"


using namespace std;

int main() {
    srand(time(NULL));
    ///Clase genérica
    //Los numeros son llenados aleatoriamente dentro de la clase :)
    matriz<int> matriz1(3, 3);
    cout << "Matriz 1: "<< endl;
    matriz1.print();
    matriz<int> matriz2(3, 3);
    cout << endl;
    cout << "Matriz 2: "<< endl;
    matriz2.print();
    cout << endl;
    cout << endl;
    cout << "La suma sería: "<< endl;
    matriz1+matriz2;

    ///STL Deque
    cout << "\n\nSTL Deque" << endl;
    deque<int> deque1 = {5, 1, 4, 8, 2, 4};
    emparejamiento(deque1, 3);

    ///STL Map
    cout <<"\n\nSTL Map" << endl;
    return 0;
}