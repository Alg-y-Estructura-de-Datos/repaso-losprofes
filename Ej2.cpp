#include <iostream>
using namespace std;


unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    unsigned long long factorial = 1;

    cout << "Introduce un número entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        cout << "El factorial de " << n << " usando iteración " << factorial << endl;

cout << "El factorial de " << n << " usando recursividad " << factorial(n) << endl;
    }



    return 0;
}


