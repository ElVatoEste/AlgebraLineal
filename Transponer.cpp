#include <iostream>
using namespace std;

int main() {
    int filas, column;

    cout << "Ingresa el numero de filas: ";
    cin >> filas;
    cout << "Ingresa el numero de columnas: ";
    cin >> column;

    int a[filas][column];
    int b[column][filas];

    cout << "\nAgrega los valores:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < column; j++) {
            cin >> a[i][j];
        }
    }
	
	system("cls || clear");
	
    cout << "Matriz original:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < column; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Transponer la matriz
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < filas; j++) {
            b[i][j] = a[j][i];
        }
    }

    cout << "\nMatriz transpuesta:" << endl;
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < filas; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

