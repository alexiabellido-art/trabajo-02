#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int numero;

    cout << "Ingrese un entero decimal positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El numero debe ser positivo." << endl;
        return 0;
    }
    if (numero == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }

    int n = numero;
    while (n > 0) {
        pila.push(n % 2);   // se apila el residuo
        n = n / 2;
    }

    cout << "Binario de " << numero << ": ";
    while (!pila.empty()) {
        cout << pila.top(); // se desapilan en el orden correcto
        pila.pop();
    }
    cout << endl;

    return 0;
}
