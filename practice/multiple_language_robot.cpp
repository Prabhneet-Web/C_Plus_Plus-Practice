#include <iostream>

int main()
{
    char button;
    std::cout << "Enter the button value from A, B, C, D, E: ";
    std::cin >> button;
    switch (button)
    {
    case 'A':
    case 'a':
        std::cout << "Namaste" << std::endl;
        break;
    case 'B':
    case 'b':
        std::cout << "Hello" << std::endl;
        break;
    case 'C':
    case 'c':
        std::cout << "Salut" << std::endl;
        break;
    case 'D':
    case 'd':
        std::cout << "Hola" << std::endl;
        break;
    case 'E':
    case 'e':
        std::cout << "Ciao" << std::endl;
        break;
    default:
        break;
    }
}