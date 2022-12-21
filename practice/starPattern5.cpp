#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}