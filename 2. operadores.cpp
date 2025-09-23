// 1.

include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "=== pregunta 2.1: operaciones basicas ===" << endl;
    cout << "ingresa el primer numero: ";
    cin >> a;
    cout << "ingresa el segundo numero: ";
    cin >> b;

    cout << "suma: " << (a + b) << endl;
    cout << "resta: " << (a - b) << endl;
    cout << "multiplicacion: " << (a * b) << endl;

    if (b != 0) {
        cout << "division: " << (a / b) << endl;
        cout << "modulo: " << (a % b) << endl;
    } else {
        cout << "mo se puede dividir ni calcular modulo entre 0." << endl;
    }

    return 0;
}


// 2.

#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 10;

    cout << "a = " << a << ", b = " << b << endl;

    if (a == b) {
        cout << "a es igual a b" << endl;
    } else if (a != b) {
        cout << "a es diferente de b" << endl;
    }

    return 0;
}

// == (igual a)
// compara si dos valores son iguales, si lo son, devuelve true (1), si no, devuelve false (0)
// != (diferente de) compara si dos valores son distintos, si lo son, devuelve true (1), si no, devuelve false (0)


// 3.

#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;

    // &&
    if (x > 0 && y > 0) {
        cout << "ambos son positivos" << endl;
    }

    // ||
    if (x > 0 || y < 0) {
        cout << "al menos una de las condiciones es verdadera" << endl;
    }

    // !
    if (!(x < 0)) {
        cout << "x no es negativo" << endl;
    }

    return 0;
}

// && (AND): la condicion es verdadera solo si ambas expresiones son verdaderas
// || (OR): la condicion es verdadera si al menos una de las expresiones es verdadera
// ! (NOT): invierte el valor logico de la condicion (true a false, false a true)