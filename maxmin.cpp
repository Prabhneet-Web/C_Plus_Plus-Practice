#include <iostream>
#include <climits>

int main()
{

    int size;
    std::cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        maxNumber = std::max(maxNumber, array[i]);
        minNumber = std::min(minNumber, array[i]);
    }
    std::cout << "Max Number: " << maxNumber << std::endl;
    std::cout << "Min Number: " << minNumber << std::endl;

    return 0;
}