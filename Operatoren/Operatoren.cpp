#include <iostream>

int main()
{

    /* float pi = 3.141592;
    std::cout << "10 / pi = " << 10 / pi << std::endl;
    std::cout << "10 / pi = " << 10 % pi << std::endl; -> funktioniert nur bei Ganzzahlen, da es nie Rest gibt */

    int zahl1, zahl2;
    std::cout << "1. Zahl eingeben ";
    std::cin >> zahl1;

    std::cout << "2. Zahl eingeben ";
    std::cin >> zahl2;

    std::cout << zahl1 + zahl2 << std::endl;
    std::cout << zahl1 - zahl2 << std::endl;
    std::cout << zahl1 * zahl2 << std::endl;
    std::cout << zahl1 / zahl2 << std::endl;
    std::cout << zahl1 % zahl2 << std::endl;
    /* Bei Division: int / int -> int */
    /* int / float = float */
    /* float / int = float */
    std::cout << ((float)zahl1) / zahl2 << std::endl;
}
