#include <iostream>
using namespace std;

// Declaración de la función que intercambia el contenido de dos vasos
void intercambiarJugos(double &vaso1, double &vaso2) {
    double temp = vaso1;
    vaso1 = vaso2;
    vaso2 = temp;
}

int main() {
    double jugoNaranja, jugoManzana;

    // Solicitar al usuario que ingrese la cantidad de jugo en cada vaso
    cout << "Ingrese la cantidad de jugo de naranja (en litros): ";
    cin >> jugoNaranja;
    cout << "Ingrese la cantidad de jugo de manzana (en litros): ";
    cin >> jugoManzana;

    // Mostrar las cantidades antes del intercambio
    cout << "Antes del intercambio:\n";
    cout << "Jugo de naranja: " << jugoNaranja << " litros\n";
    cout << "Jugo de manzana: " << jugoManzana << " litros\n";

    // Llamar a la función para intercambiar las cantidades de jugo
    intercambiarJugos(jugoNaranja, jugoManzana);

    // Mostrar las cantidades después del intercambio
    cout << "Después del intercambio:\n";
    cout << "Jugo de naranja: " << jugoNaranja << " litros\n";
    cout << "Jugo de manzana: " << jugoManzana << " litros\n";

    return 0;
}