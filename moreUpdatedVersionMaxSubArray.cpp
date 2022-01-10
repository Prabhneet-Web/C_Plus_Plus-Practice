// This algo is known as Kadene's algo
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

    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        currSum += array[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = std::max(maxSum, currSum);
    }
    std::cout << maxSum << std::endl;
}