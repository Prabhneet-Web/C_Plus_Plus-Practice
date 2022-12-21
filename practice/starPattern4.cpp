#include <iostream>

int main()
{

    int number;
    std::cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (j <= number - i)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }
}