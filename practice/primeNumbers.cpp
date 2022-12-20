#include <iostream>

int main()
{
    int number1, number2;
    std::cout << "Enter both the numbers: " << std::endl;
    std::cin >> number1 >> number2;

    int j;

    for (int i = number1; i <= number2; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            std::cout << "Number " << i << " is prime" << std::endl;
        }
    }
}