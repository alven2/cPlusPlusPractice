#include <iostream>
#include <cmath>

int main() {
    double temp;
    char unit;
    std::cout << "que necesitas convertir, F o C?: \n";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "introduce el celcius que quieres convertir: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "tu temperatura es de " << temp << " farehnheit";
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "introduce el farehn que quieres convertir: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "tu temperatura es de " << temp << " celciu";
    }
    else {
        std::cout << "introduce un valor correcto";
    }
}