#include <iostream>

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}