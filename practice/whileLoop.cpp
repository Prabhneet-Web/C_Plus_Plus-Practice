#include <iostream>

int main()
{

    int number;
    std::cout << "Enter the number: ";
    std::cin >> number;

    while (number > 0)
    {
        std::cout << "Enter the number: ";
        std::cin >> number;
    }
    std::cout << "The number is negetive." << std::endl;
}