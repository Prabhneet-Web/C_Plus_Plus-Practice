#include <iostream>

void factorial(int number)
{

    int fact = 1;

    for (int i = 2; i <= number; i++)
    {
        fact *= i;
    }
    std::cout << fact << std::endl;
}

int main()
{

    int number;
    std::cin >> number;

    factorial(number);
}