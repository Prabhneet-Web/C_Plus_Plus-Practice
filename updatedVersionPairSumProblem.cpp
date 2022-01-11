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

    int low = 0;
    int high = size - 1;

    while (low < high)
    {
        if (array[low] + array[high] == k)
        {
            std::cout << low << " " << high << std::endl;
            return true;
        }
        else if (array[low] + array[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}