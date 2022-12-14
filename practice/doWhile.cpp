#include <iostream>

int main()
{

    int number;

    do
    {
        std::cout << "Enter the number: ";
        std::cin >> number;
    } while (number > 0);

    std::cout << "The number is negative" << std::endl;
}