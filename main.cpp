#include <iostream>

int main() {
    std::cout << "¡Hola desde C++!" << std::endl;
    return 0;
}

#include <iostream>

// Función nueva que suma dos números
int sumar(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "¡Hola desde C++!" << std::endl;
    std::cout << "La suma de 3 + 5 es: " << sumar(3, 5) << std::endl;
    return 0;
}

#include <iostream>

// Función para restar dos números.
// @param a El primer número.
// @param b El segundo número a restar.
// @return La diferencia de a menos b.
int restar(int a, int b) {
    return a - b;
}

int main() {
    int numero1 = 10;
    int numero2 = 5;
    int resultado;

    // Llamamos a la función restar.
    resultado = restar(numero1, numero2);

    // Mostramos el resultado.
    std::cout << "El resultado de la resta es: " << resultado << std::endl;

    return 0;
}
