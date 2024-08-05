#include <iostream>
using namespace std;

class Calculadora {
private:
    double A, B;

public:
    // Constructor
    Calculadora(double a, double b) : A(a), B(b) {}

    // Métodos para establecer los valores de A y B
    void setA(double a) { A = a; }
    void setB(double b) { B = b; }

    // Métodos para obtener los valores de A y B
    double getA() const { return A; }
    double getB() const { return B; }

    // Método para sumar A y B
    double sumar() const {
        return A + B;
    }

    // Método para restar B de A
    double restar() const {
        return A - B;
    }

    // Método para multiplicar A y B
    double multiplicar() const {
        return A * B;
    }

    // Método para dividir A entre B
    double dividir() const {
        if (B == 0) {
            throw 404;  // Lanza un valor arbitrario para indicar un error
        }
        return A / B;
    }
};

int main() {
    try {
        double a, b;
        cout << "Introduce el valor de A: ";
        cin >> a;
        cout << "Introduce el valor de B: ";
        cin >> b;

        Calculadora calc(a, b);

        cout << "Suma: " << calc.sumar() << endl;
        cout << "Resta: " << calc.restar() << endl;
        cout << "Multiplicación: " << calc.multiplicar() << endl;
        cout << "División: " << calc.dividir() << endl;

    } catch (int e) {
        if (e == 404) {
            cout << "Error: División por cero no permitida." << endl;
        } else {
            cout << "Error desconocido." << endl;
        }
    }

    return 0;
}
