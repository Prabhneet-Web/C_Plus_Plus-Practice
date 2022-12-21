#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        int space = 2 * number - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        int space = 2 * number - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}