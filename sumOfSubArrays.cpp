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

    int current = 0;

    for (int i = 0; i < size; i++)
    {
        current = 0;
        for (int j = i; j < size; j++)
        {
            current = array[j];
            for (int j = i; j < size; j++)
            {
                current += array[j];
                std::cout << current << std::endl;
            }
        }
    }
}