#include <iostream>
#include <math.h>

int isPrime(int number)
{
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n1, n2;
    std::cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            std::cout << i << std::endl;
        }
    }
}