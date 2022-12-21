#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int count = 1;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << count++ << " ";
        }
        std::cout << std::endl;
    }
}