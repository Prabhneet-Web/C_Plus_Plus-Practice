#include <iostream>

int main()
{
    int size, s;

    std::cin >> size >> s;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }
    int i = 0, j = 0, st = -1, en = -1, sum = 0;

    while (j < size && sum + array[j] <= s)
    {
        sum += array[j];
        j++;
    }
    if (sum == s)
    {
        std::cout << i + 1 << " " << j << std::endl;
        return 0;
    }
    while (j < size)
    {
        sum += array[j];
        while (sum > s)
        {
            sum -= array[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    std::cout << st << " " << en << std::endl;
}