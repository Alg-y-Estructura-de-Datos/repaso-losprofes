#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función que agrega un contacto a la lista de contactos
void agregarContacto(vector<string> &contactos, const string &nombre, const string &telefono) {
    string contacto = nombre + ": " + telefono;
    contactos.push_back(contacto);
}

// Función que muestra todos los contactos en la lista
void mostrarContactos(const vector<string> &contactos) {
    cout << "Lista de Contactos:\n";
    for (size_t i = 0; i < contactos.size(); ++i) {
        cout << i + 1 << ". " << contactos[i] << "\n";
    }
}

int main() {
    vector<string> contactos;
    string nombre, telefono;
    int opcion;

    do {
        cout << "\n1. Agregar contacto\n";
        cout << "2. Mostrar contactos\n";
        cout << "3. Salir\n";
        cout << "Elija una opción: ";
        cin >> opcion;
        cin.ignore();  // Ignorar el salto de línea residual

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre del contacto: ";
                getline(cin, nombre);
                cout << "Ingrese el número de teléfono: ";
                getline(cin, telefono);
                agregarContacto(contactos, nombre, telefono);
                break;
            case 2:
                mostrarContactos(contactos);
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opción inválida. Intente nuevamente.\n";
        }
    } while (opcion != 3);

    return 0;
}
