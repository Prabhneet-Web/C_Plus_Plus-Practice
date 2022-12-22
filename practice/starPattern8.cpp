#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    for (int i = size; i >= 1; i--)
    {
        for (int j = i - 1; j >= 1; j--)
        {
            std::cout << " ";
        }
        for (int j = size; j >= 1; j--)
        {
            std::cout << "* ";
        }

        std::cout << std::endl;
    }
}