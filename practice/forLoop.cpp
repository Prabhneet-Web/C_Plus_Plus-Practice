#include <iostream>

int main()
{

    int number;
    std::cout << "Enter the upper limit: ";
    std::cin >> number;

    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    std::cout << "Total Sum: " << sum << std::endl;
}