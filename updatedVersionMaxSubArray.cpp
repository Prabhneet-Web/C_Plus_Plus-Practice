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

    int currSum[size + 1];
    currSum[0] = 0;

    for (int i = 1; i <= size; i++)
    {
        currSum[i] = currSum[i - 1] + array[i - 1];
    }

    int maxSum = INT_MIN;

    for (int i = 1; i <= size; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxSum = std::max(sum, maxSum);
        }
    }
    std::cout << maxSum;
}