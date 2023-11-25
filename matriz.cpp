#include <iostream>
#include <vector>

using namespace std;


int main() {
    int filas, columnas;

    cout << "\n\tIngrese el numero de filas de la matriz: ";
    cin >> filas;
    cout << "\tIngrese el numero de columnas de la matriz: ";
    cin >> columnas;

    vector<vector<int>> matrix(filas, vector<int>(columnas));

    cout << "\n\tIngrese los valores de la matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "\tValor en la posicion (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }
    cout << "\n\tMatriz ingresada:" << endl;
    
    for (int i = 0; i < filas; ++i) {
    	cout <<"\t ";
        for (int j = 0; j < columnas; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

