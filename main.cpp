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
