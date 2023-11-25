#include <iostream>
#include <locale>

// Códigos de escape ANSI para colores en la consola
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
    cout << BLUE << "*     MENÚ PRINCIPAL   *" << RESET << endl;
    cout << BLUE << "***********************" << RESET << endl;
    cout << GREEN << "1. Opción 1" << RESET << endl;
    cout << GREEN << "2. Opción 2" << RESET << endl;
    cout << GREEN << "3. Opción 3" << RESET << endl;
    cout << YELLOW << "4. Opción 4" << RESET << endl;
    cout << YELLOW << "5. Opción 5" << RESET << endl;
    cout << CYAN << "6. Opción 6" << RESET << endl;
    cout << CYAN << "7. Salir" << RESET << endl;
    cout << BLUE << "***********************" << RESET << endl;
}

int main() {
    setlocale(LC_ALL, "Spanish");
    int opcion;

    do {
        mostrarMenu();
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Lógica para la Opción 1
                cout << "Ha seleccionado la Opción 1." << endl;
                break;
            case 2:
                // Lógica para la Opción 2
                cout << "Ha seleccionado la Opción 2." << endl;
                break;
            // Agrega casos para las otras opciones según sea necesario

            case 7:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << RED << "Opción no válida. Por favor, elija una opción válida." << RESET << endl;
        }
    } while (opcion != 7);

    return 0;
}
#include <iostream>
#include <locale>

// Códigos de escape ANSI para colores en la consola
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
    cout << BLUE << "*     MENÚ PRINCIPAL   *" << RESET << endl;
    cout << BLUE << "***********************" << RESET << endl;
    cout << GREEN << "1. Opción 1" << RESET << endl;
    cout << GREEN << "2. Opción 2" << RESET << endl;
    cout << GREEN << "3. Opción 3" << RESET << endl;
    cout << YELLOW << "4. Opción 4" << RESET << endl;
    cout << YELLOW << "5. Opción 5" << RESET << endl;
    cout << CYAN << "6. Opción 6" << RESET << endl;
    cout << CYAN << "7. Salir" << RESET << endl;
    cout << BLUE << "***********************" << RESET << endl;
}

int main() {
    setlocale(LC_ALL, "Spanish");
    int opcion;

    do {
        mostrarMenu();
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Lógica para la Opción 1
                cout << "Ha seleccionado la Opción 1." << endl;
                break;
            case 2:
                // Lógica para la Opción 2
                cout << "Ha seleccionado la Opción 2." << endl;
                break;
            // Agrega casos para las otras opciones según sea necesario

            case 7:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;
            default:
                cout << RED << "Opción no válida. Por favor, elija una opción válida." << RESET << endl;
        }
    } while (opcion != 7);

    return 0;
}
