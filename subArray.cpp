#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                std::cout << array[k] << " ";
            }
            std::cout << std::endl;
        }
    }
}