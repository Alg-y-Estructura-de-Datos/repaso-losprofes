#include <iostream>
using namespace std;


unsigned long long factorialrecursivo(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorialrecursivo(n - 1);

}













int main() {
    int n;
    unsigned long long factorialIteracion = 1;

    cout << "Introduce un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorialIteracion no esta definido para números negativos." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorialIteracion = factorialIteracion * i;
            //factorialIteracion *= i;//simplificacion de la linea anterior
        }

        cout << "El factorialIteracion de " << n << " usando iteracion " << factorialIteracion << endl;

cout << "El factorialIteracion de " << n << " usando recursividad " << factorialrecursivo(n) << endl;
    }



    return 0;
}


