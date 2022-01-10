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
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += array[k];
            }
            maxSum = std::max(maxSum, sum);
        }
    }
    std::cout << "MaxSum: " << maxSum << std::endl;
}