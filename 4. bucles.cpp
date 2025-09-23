// 1.

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