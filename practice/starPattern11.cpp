#include <iostream>

int main()
{

    int size;
    std::cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            std::cout << "  ";
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
        {
            std::cout << "  ";
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}