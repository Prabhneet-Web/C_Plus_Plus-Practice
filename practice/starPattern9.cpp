#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}