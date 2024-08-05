#include <iostream>
#include <cmath>  // Para la función pow
using namespace std;

// Función para sumar dos enteros
int sumarEnteros(int a, int b) {
    return a + b;
}

// Función para calcular el área de un círculo
double calcularAreaCirculo(double radio) {
    const double PI = 3.14159265358979323846;
    return PI * radio * radio;
}

// Función para calcular la potencia de un número
double calcularPotencia(double base, int exponente) {
    return pow(base, exponente);
}

int main() {
    int opcion;
    
    do {
        cout << "Menú de opciones:\n";
        cout << "1. Sumar enteros\n";
        cout << "2. Calcular área de un círculo\n";
        cout << "3. Calcular potencia de un número\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opción (1-4): ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                int num1, num2;
                cout << "Introduce el primer número entero: ";
                cin >> num1;
                cout << "Introduce el segundo número entero: ";
                cin >> num2;
                cout << "La suma de " << num1 << " y " << num2 << " es " << sumarEnteros(num1, num2) << endl;
                break;
            }
            case 2: {
                double radio;
                cout << "Introduce el radio del círculo: ";
                cin >> radio;
                cout << "El área del círculo con radio " << radio << " es " << calcularAreaCirculo(radio) << endl;
                break;
            }
            case 3: {
                double base;
                int exponente;
                cout << "Introduce la base: ";
                cin >> base;
                cout << "Introduce el exponente: ";
                cin >> exponente;
                cout << base << " elevado a la " << exponente << " es " << calcularPotencia(base, exponente) << endl;
                break;
            }
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción entre 1 y 4." << endl;
                break;
        }
        cout << endl;
    } while(opcion != 4);

    return 0;
}
