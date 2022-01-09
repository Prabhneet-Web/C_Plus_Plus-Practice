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

    const int N = 1e6 + 2;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (idx[array[i]] != -1)
        {
            minidx = std::min(minidx, idx[array[i]]);
        }
        else
        {
            idx[array[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        std::cout << "-1" << std::endl;
    }
    else
    {
        std::cout << minidx + 1 << std::endl;
    }
}