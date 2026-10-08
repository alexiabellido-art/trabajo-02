#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> historial;
    int opcion;

    do {
        cout << "\n--- Historial de acciones ---\n";
        cout << "1. Realizar accion\n";
        cout << "2. Deshacer\n";
        cout << "3. Ver accion en el tope\n";
        cout << "0. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            string accion;
            cout << "Escriba la accion (ej. escribir texto): ";
            cin.ignore();
            getline(cin, accion);
            historial.push(accion);
            cout << "Accion registrada: " << accion << endl;
        }
        else if (opcion == 2) {
            if (historial.empty()) {
                cout << "No hay acciones para deshacer.\n";
            } else {
                cout << "Se revierte: \"" << historial.top() << "\"\n";
                historial.pop();
            }
        }
        else if (opcion == 3) {
            if (historial.empty())
                cout << "El historial esta vacio.\n";
            else
                cout << "Accion en el tope: " << historial.top() << endl;
        }
    } while (opcion != 0);

    return 0;
}
