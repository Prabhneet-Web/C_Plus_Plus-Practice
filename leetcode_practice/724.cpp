#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    int nums[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> nums[i];
    }

    if (sizeof(nums) / sizeof(int) == 1)
    {
        return 0;
    }

    int pivot = 0;
    int left_sum = 0, right_sum = 0;
    for (int i = 1; i < sizeof(nums) / sizeof(int); i++)
    {
        right_sum += nums[i];
    }
    while (pivot != sizeof(nums) / sizeof(int))
    {
        if (left_sum == right_sum)
        {
            std::cout << pivot << std::endl;
            return pivot;
        }
        else
        {
            left_sum += nums[pivot];
            pivot++;
            if (pivot != sizeof(nums) / sizeof(int))
            {
                right_sum -= nums[pivot];
            }
        }
    }
    return -1;
}