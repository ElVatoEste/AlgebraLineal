#include <iostream>
#include <iomanip>

using namespace std;


void imprimirMatriz(double matriz[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " "; 
        }
        cout << endl;
    }
}

void imprimirMatriz2(double matriz[3][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << fixed << setprecision(4) << matriz[i][j] << " "; 
        }
        cout << endl;
    }
}

int main() {
    double matriz[3][3];
    
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    double inversa[3][3] = {{0.0}};

    double det = 0;

    det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
          matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
          matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
    
    if (det != 0) {

        double adjunta[3][3];
        adjunta[0][0] = (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]);
        adjunta[0][1] = -(matriz[0][1] * matriz[2][2] - matriz[0][2] * matriz[2][1]);
        adjunta[0][2] = (matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1]);
        adjunta[1][0] = -(matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]);
        adjunta[1][1] = (matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0]);
        adjunta[1][2] = -(matriz[0][0] * matriz[1][2] - matriz[0][2] * matriz[1][0]);
        adjunta[2][0] = (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
        adjunta[2][1] = -(matriz[0][0] * matriz[2][1] - matriz[0][1] * matriz[2][0]);
        adjunta[2][2] = (matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0]);
        

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                inversa[i][j] = adjunta[i][j] / det;
            }
        }
    }

    cout << "\nLa matriz ingresada es:" << endl;
    imprimirMatriz(matriz, 3);

    cout << "\nLa matriz inversa es:" << endl;
    imprimirMatriz2(inversa, 3);

    return 0; 	
}

