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

    int recordBreakingDay = 0;
    int highestNumber = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > highestNumber)
        {
            recordBreakingDay++;
            highestNumber = array[i];
        }
    }
    std::cout << recordBreakingDay << std::endl;
}