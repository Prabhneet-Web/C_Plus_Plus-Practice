#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    int x2 = x;

    int temp = 0;

    if (x < 0)
        return 0;

    while (x != 0)
    {
        temp = temp * 10 + x % 10;
        x /= 10;
    }
    std::cout << temp << std::endl;

    if (x2 == temp)
    {
        std::cout << "True";
        return 1;
    }
    else
    {
        std::cout << "False";
        return 0;
    }
}