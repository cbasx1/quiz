// 1.

#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "=== pregunta 3.1: mayor o menor de edad ===" << endl;
    cout << "ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "eres mayor de edad." << endl;
    } else {
        cout << "eres menor de edad." << endl;
    }

    return 0;
}


// 2.

#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "=== pregunta 3.2: uso de else if ===" << endl;
    cout << "ingresa tu nota (0 - 100): ";
    cin >> nota;

    if (nota >= 90) {
        cout << "excelente" << endl;
    } else if (nota >= 70) {
        cout << "aprobado" << endl;
    } else if (nota >= 50) {
        cout << "suficiente" << endl;
    } else {
        cout << "reprobado" << endl;
    }

    return 0;
}

// en C++, la estructura else if se usa cuando tenemos mas de dos condiciones posibles
// primero se evalua el if
// si no se cumple, pasa a evaluar el else if
// si ninguna condición se cumple, se ejecuta el else final, si existe