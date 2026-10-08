#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<char> pila;
    string expresion;
    bool balanceado = true;

    cout << "Ingrese una expresion (sin espacios): ";
    cin >> expresion;

    for (char c : expresion) {
        if (c == '(') {
            pila.push(c);
        } else if (c == ')') {
            if (pila.empty()) {   // cierre sin apertura pendiente
                balanceado = false;
                break;
            }
            pila.pop();
        }
    }

    if (!pila.empty()) {          // quedaron aperturas sin cerrar
        balanceado = false;
    }

    if (balanceado)
        cout << "La expresion es correcta" << endl;
    else
        cout << "La expresion es incorrecta" << endl;

    return 0;
}
