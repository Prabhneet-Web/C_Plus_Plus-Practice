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

    for (int i = 1; i < size; i++)
    {
        int currentNumber = array[i];
        int j = i - 1;
        while (array[j] > currentNumber && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = currentNumber;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
}