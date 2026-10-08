#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    int n;

    cout << "Ingrese 5 numeros enteros:\n";
    for (int i = 1; i <= 5; i++) {
        cout << "Numero " << i << ": ";
        cin >> n;
        pila.push(n);
    }

    cout << "Salida: ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    return 0;
}
