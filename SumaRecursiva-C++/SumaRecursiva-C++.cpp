#include <iostream>

int sumaRecursiva(int n) {
    // Caso base: cuando n es igual a 0, la suma es 0.
    if (n == 0) {
        return 0;
    }
    // Caso recursivo: suma n y el resultado de la suma recursiva de n-1.
    else {
        return n + sumaRecursiva(n - 1);
    }
}

int main() {
    int numero;
    std::cout << "Ingresa un numero entero positivo: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El numero debe ser positivo." << std::endl;
    }
    else {
        int resultado = sumaRecursiva(numero);
        std::cout << "La suma de los numeros enteros del 1 al " << numero << " es: " << resultado << std::endl;
    }

    return 0;
}
