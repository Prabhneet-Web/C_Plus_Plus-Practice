#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}