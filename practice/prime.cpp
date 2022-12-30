#include <iostream>
#include <cmath>

int main()
{

    int n;
    std::cin >> n;

    int flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            std::cout << "Non prime";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        std::cout << "Prime";
    }
}