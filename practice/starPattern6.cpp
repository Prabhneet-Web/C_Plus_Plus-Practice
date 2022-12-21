#include <iostream>

int main()
{

    int size;
    std::cin >> size;

    for (int i = size; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}