#include <iostream>
using namespace std;

int main() {
    int opt;

    while (true) {
        cout << "\n\tSeleccione una opcon:" << endl;
        cout << "\t1. Transponer la matriz" << endl;
        cout << "\t2. Encontrar inversa de la matriz" << endl;
        cout << "\t3. Salir" << endl;
        cout << "\tIngrese el numero de la accion que desea realizar -> ";
        cin >> opt;

        switch (opt) {
            case 1: {
            	
            	system("cls || clear");
                double a[3][3], b[3][3];
                cout << "\n\tIngrese los elementos de la matriz 3x3:" << endl;
                for (int i = 0; i < 3; i++) {
                    cout << "\t";
                    for (int j = 0; j < 3; j++) {
                        cin >> a[i][j];
                    }
                }

                cout << "\n\tMatriz original:" << endl;
                for (int i = 0; i < 3; i++) {
                	cout << "\t";
                    for (int j = 0; j < 3; j++) {
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }

                cout << "\n\tMatriz transpuesta:" << endl;
                for (int i = 0; i < 3; i++) {
                	cout << "\t";
                    for (int j = 0; j < 3; j++) {
                        b[i][j] = a[j][i];
                        cout << b[i][j] << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 2: {
            	system("cls || clear");
            	
                double a[3][3], b[3][3];

            	cout << "\n\tIngrese los elementos de la matriz 3x3:" << endl;
                for (int i = 0; i < 3; i++) {
                    cout << "\t";
                    for (int j = 0; j < 3; j++) {
                        cin >> a[i][j];
                    }
                }

                double det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) -
                             a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) +
                             a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

                if (det != 0) {
                    double cofactores[3][3];
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                            cofactores[i][j] = (a[(i + 1) % 3][(j + 1) % 3] * a[(i + 2) % 3][(j + 2) % 3] -
                                                a[(i + 1) % 3][(j + 2) % 3] * a[(i + 2) % 3][(j + 1) % 3]);
                        }
                    }

                    cout << "\n\tLa matriz inversa es:" << endl;
                    for (int i = 0; i < 3; i++) {
                        for (int j = 0; j < 3; j++) {
                        	cout << "\t";
                            b[i][j] = cofactores[j][i] / det;
                            cout << b[i][j] << " ";
                        }
                        cout << endl;
                    }
                } else {
                    cout << "\n\tLa matriz no es invertible (determinante = 0)." << endl;
                }
                break;
            }
            case 3:
            	system("cls || clear");
                cout << "\n\tSaliendo del programa..." << endl;
                return 0;
            default:
            	system("cls || clear");
                cout << "\n\tOpcion no valida. Por favor, elija 1, 2 o 3." << endl;
                break;
        }
    }

    return 0;
}

