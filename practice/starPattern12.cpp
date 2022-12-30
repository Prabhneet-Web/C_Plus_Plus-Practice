#include <iostream>

int main()
{

    int size;
    std::cin >> size;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
}