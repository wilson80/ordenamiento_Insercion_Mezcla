#include <iostream>

using namespace std;


void mezclar(int arr[], int l, int m, int r) {    // combinando dos subarreglos
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];    //  arreglos temporales

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    // pasar datos  a los arreglos temporales


    // Combinar los arreglos temporales de nuevo en arr[l..r]
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mezcla_ordenar(int arr[], int l, int r) {
    if (l < r) {                            // Encuentra el punto medio para dividir el arreglo en dos mitades
        int m = l + (r - l) / 2;

                                                // Ordena las dos mitades recursivamente
        mezcla_ordenar(arr, l, m);
        mezcla_ordenar(arr, m + 1, r);

                                        // Combina las mitades ordenadas
        mezclar(arr, l, m, r);
    }
}

int main() {
    cout<<"METODO DE ORDENACION POR MEZCLA"<<endl;
    int arreglo[] = {4, 1, 9, 7, 15, 9,11,21,3,12};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Arreglo desrodenado "<<endl;
    for (int i = 0; i < n; i++)
        cout << arreglo[i] << " ";
    cout << endl;

    mezcla_ordenar(arreglo, 0, n - 1);

    cout << "Arreglo Ordenado:  " <<endl;
    for (int i = 0; i < n; i++)
        cout << arreglo[i] << " ";
    cout << endl;

    return 0;
}