#include <iostream>

int kadane(int array[], int size);

int main()
{
    int size;
    std::cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    int wrapSum, nonWrapSum;

    nonWrapSum = kadane(array, size);
    int totalSum = 0;
    for (int i = 0; i < size; i++)
    {
        totalSum += array[i];
        array[i] = -array[i];
    }
    wrapSum = totalSum + kadane(array, size);

    std::cout << std::max(wrapSum, nonWrapSum) << std::endl;
}
int kadane(int array[], int size)
{
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
    return maxSum;
}