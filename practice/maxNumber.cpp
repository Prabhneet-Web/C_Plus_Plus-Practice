#include <iostream>

int main()
{

    int number1, number2, number3;
    std::cout << "Enter all three numbers: ";
    std::cin >> number1 >> number2 >> number3;

    if (number1 > number2)
    {
        if (number1 > number3)
        {
            std::cout << "Number 1 is greatest" << std::endl;
        }
        else
        {
            std::cout << "Number 3 is greatest" << std::endl;
        }
    }
    else
    {
        if (number2 > number3)
        {
            std::cout << "Number 2 is greatest" << std::endl;
        }
        else
        {
            std::cout << "Number 3 is greatest" << std::endl;
        }
    }
}