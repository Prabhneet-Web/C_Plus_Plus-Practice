#include <iostream>

int main()
{

    int size;
    std::cin >> size;

    for (int i = 1; i <= size; i++)
    {
        int j;
        for (j = 1; j <= size - i; j++)
        {
            std::cout << "  ";
        }

        int k = i;

        for (; j <= size; j++)
        {
            std::cout << k-- << " ";
        }

        k = 2;
        for (; j <= size + i - 1; j++)
        {
            std::cout << k++ << " ";
        }

        std::cout << std::endl;
    }
}