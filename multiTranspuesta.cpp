#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;

    cout << "Ingresa el numero de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingresa el numero de columnas de la primera matriz: ";
    cin >> columnas1;

    cout << "Ingresa el numero de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingresa el numero de columnas de la segunda matriz: ";
    cin >> columnas2;

    if (columnas1 != filas2) {
        cout << "\nNo se pueden multiplicar las matrices\nEl numero de columnas de la primera matriz debe ser igual al numero de filas de la segunda matriz." << endl;
        return 1;
    }

    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int resultado[filas1][columnas2];

    cout << "\nAgrega los valores de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "\nAgrega los valores de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Inicializar la matriz resultado con ceros
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
        }
    }

    // Realizar la multiplicación de matrices
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    cout << "\nResultado de la multiplicacion de matrices:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    char opcion;
    cout << "\nDeseas transponer la matriz resultante? (S/N): ";
    cin >> opcion;

    if (opcion == 'S' || opcion == 's') {
        // Transponer la matriz resultado
        int resultadoTranspuesto[columnas2][filas1];
        for (int i = 0; i < columnas2; i++) {
            for (int j = 0; j < filas1; j++) {
                resultadoTranspuesto[i][j] = resultado[j][i];
            }
        }

        cout << "\nMatriz resultante transpuesta:" << endl;
        for (int i = 0; i < columnas2; i++) {
            for (int j = 0; j < filas1; j++) {
                cout << resultadoTranspuesto[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}

