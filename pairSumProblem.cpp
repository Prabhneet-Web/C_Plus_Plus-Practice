// Check if there exists two elements in an array such that their sum is equal to the given k.

#include <iostream>

bool pairSum(int array[], int size, int k);

int main()
{
    int size, targetPrice;
    std::cin >> size >> targetPrice;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    std::cout << pairSum(array, size, targetPrice) << std::endl;
}

bool pairSum(int array[], int size, int k)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == k)
            {
                std::cout << i << " " << j << std::endl;
                return true;
            }
        }
    }
    return false;
}