#include <iostream>

int main()
{
    int size, target;
    std::cin >> size;

    int nums[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> nums[i];
    }

    std::cout << std::endl;
    std::cin >> target;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                std::cout << i << " " << j << std::endl;
                break;
            }
        }
    }
}