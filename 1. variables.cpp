// 1 VARIABLES

#include <iostream>
using namespace std;

int main() {
    // declaracion, inicializacion de variables
    int num1 = 10, num2 = 25;
    // variables enteras
    float decimal1 = 3.14, decimal2 = 7.5;
    // variables flotantes
    char letra = 'A';
    // variable de tipo caracter

    // imprimir valores en consola
    cout << "enteros: " << num1 << ", " << num2 << endl;
    cout << "flotantes: " << decimal1 << ", " << decimal2 << endl;
    cout << "caracter: " << letra << endl;

    return 0;
}

// int guarda numeros enteros sin decimales
// float guarda numeros con decimales

// char guarda un solo caracter

// 2 OPERADORES

// 2 OPERADORES

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


// 2 OPERADORES

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


// 3 CONDICIONALES

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

// 3 CONDICIONALES

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

// 4 BUCLES

#include <iostream>
using namespace std;

int main() {
    cout << "=== pregunta 4.1: numeros del 1 al 10 con for ===" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    cout << endl; // salta la linea al final
    return 0;
}

// 2.

#include <iostream>
using namespace std;

int main() {
    cout << "=== pregunta 4.2: numeros del 10 al 1 con while ===" << endl;

    int i = 10;
    while (i >= 1) {
        cout << i << " ";
        i--; // disminuye en 1
    }

    cout << endl; // salta la línea al final
    return 0;
}

// 3.

#include <iostream>
using namespace std;

int main() {
    int i = 2;
    cout << "numeros pares entre 1 y 20 usando do-while:" << endl;
    do {
        cout << i << " ";
        i += 2;
    } while (i <= 20);
    cout << endl;
    return 0;

}
