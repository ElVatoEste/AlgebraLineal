#include <iostream>

// Codigos de escape ANSI para colores en la consola
#define RESET   "\033[0m"
#define RED     "\033[31m" 
#define GREEN   "\033[32m"  
#define YELLOW  "\033[33m" 
#define BLUE    "\033[34m" 
#define CYAN    "\033[36m" 
#define WHITE   "\033[37m" 

using namespace std; // Agregando el espacio de nombres std

void mostrarMenu() {
    cout << BLUE << "***********************" << RESET << endl;
    cout << BLUE << "*     MENU PRINCIPAL   *" << RESET << endl;
    cout << BLUE << "***********************" << RESET << endl;
    cout << GREEN << "1. Opcion 1" << RESET << endl;
    cout << GREEN << "2. Opcion 2" << RESET << endl;
    cout << GREEN << "3. Opcion 3" << RESET << endl;
    cout << YELLOW << "4. Opcion 4" << RESET << endl;
    cout << YELLOW << "5. Opcion 5" << RESET << endl;
    cout << CYAN << "6. Opcion 6" << RESET << endl;
    cout << CYAN << "7. Salir" << RESET << endl;
    cout << BLUE << "***********************" << RESET << endl;
}

int main() {

    int opcion;

    do {
        mostrarMenu();
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Logica para la Opcion 1
                cout << "Ha seleccionado la Opcion 1." << endl;
                break;
            case 2:
                // Logica para la Opcion 2
                cout << "Ha seleccionado la Opcion 2." << endl;
                break;
            // Agrega casos para las otras opciones segun sea necesario

            case 7:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << RED << "Opcion no valida. Por favor, elija una opcion valida." << RESET << endl;
        }
    } while (opcion != 7);

    return 0;
}
