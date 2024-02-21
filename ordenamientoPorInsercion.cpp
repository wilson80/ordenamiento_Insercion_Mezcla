#include <iostream>
using namespace std;


void ordenar_por_insercion(int arreglo[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arreglo[i];
        int j = i - 1;

        while (j >= 0 && arreglo[j] > key) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = key;
    }
}

void Metodo_de_ordenacion_por_insercion(){
    int arregloDesordenado[] = {9, 4, 2, 6, 1, 15, 7};
    int n = sizeof(arregloDesordenado) / sizeof(arregloDesordenado[0]);

    cout << "METODO DE ORDENACION POR INSERCION:"<<endl;
    cout << "Arreglo Desordenado:"<<endl;
    for (int i = 0; i < n; ++i) {
        cout << arregloDesordenado[i] << " ";
    }
    cout << endl;

    ordenar_por_insercion(arregloDesordenado, n);

    std::cout << "Arreglo Ordenado: " <<endl ;
    for (int i = 0; i < n; ++i) {
        cout << arregloDesordenado[i] << " ";
    }
    cout << endl;
}


int main() {
    Metodo_de_ordenacion_por_insercion();






    return 0;


}