#include <iostream>

int main()
{
    int size;
    std::cout << "Enter the size: ";
    std::cin >> size;

    int num[size];

    std::cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> num[i];
    }

    std::cout << num[0] << " ";

    for (int i = 1; i < size; i++)
    {
        num[i] += num[i - 1];
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}