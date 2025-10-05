//Programa en C++ que solicita al usuario dos números enteros, permite elegir una operación aritmética y devuelve el resultado.
//Las operaciones implementadas son: Suma. Resta. Multiplicación. División (con validación de división por cero).
//L salida de dicho programa es de la forma: 5 - 3 = 2 (en caso de suma, resta y multiplicación) y 5 / 2 = 2.5 (en caso de división).
#include <iostream>
using namespace std;
int main () {
    int num1, num2, resultado;
    char signo;
    cout << "Ingrese dos números enteros: ";
    cin >> num1 >>num2;
    cout << "Ingrese el signo de operación deseado (+, -, *, /): ";
    cin >> signo;
    if (signo == '+') {
        resultado = num1 + num2;
        cout << "El resultado de la suma " << num1 << signo << num2 << " = " << resultado << endl;
    } else if (signo == '-') {
        resultado = num1 - num2;
        cout << "El resultado de la resta " << num1 << signo << num2 << " = " << resultado << endl;
    } else if (signo == '*') {
        resultado = num1 * num2;
        cout << "El resultado de la multiplicación " << num1 << signo << num2 << " = " << resultado << endl;
    } else if (signo == '/') {
        if (num2 != 0) {
            double division = static_cast<double>(num1) / num2; // Conversión a double para obtener un resultado con decimales.
            cout << "El resultado de la división " << num1 << signo << num2 << " = " << division << endl;
        } else {
            cout << "Error: División por cero no está permitida." << endl;
        }
    } else {
        cout << "Error: Operación no válida." << endl;
    }
    return 0;
}