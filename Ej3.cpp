#include <iostream>
using namespace std;

// Declaración de la función que marca un asiento como reservado
void marcarAsiento(bool *asiento) {
    *asiento = true;
}

int main() {
    const int numAsientos = 10;
    bool asientos[numAsientos] = {false};  // Todos los asientos están inicialmente libres

    int asientoElegido;

    // Mostrar el estado inicial de los asientos
    cout << "Estado inicial de los asientos:\n";
    for (int i = 0; i < numAsientos; ++i) {
        cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << "\n";
    }

    // Solicitar al usuario que elija un asiento para reservar
    cout << "Elija un asiento para reservar (1-" << numAsientos << "): ";
    cin >> asientoElegido;

    // Validar la elección del usuario
    if (asientoElegido < 1 || asientoElegido > numAsientos) {
        cout << "Número de asiento inválido.\n";
        return 1;
    }

    // Marcar el asiento como reservado
    marcarAsiento(&asientos[asientoElegido - 1]);

    // Mostrar el estado de los asientos después de la reserva
    cout << "Estado de los asientos después de la reserva:\n";
    for (int i = 0; i < numAsientos; ++i) {
        cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << "\n";
    }

    return 0;
}
