#include <iostream>

int main()
{
    int number;
    std::cin >> number;

    int reverse = 0;
    while (number != 0)
    {
        reverse = reverse * 10 + (number % 10);
        number /= 10;
    }

    std::cout << reverse;
}