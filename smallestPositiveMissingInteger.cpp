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
    bool check[size];

    for (int i = 0; i < size; i++)
    {
        if (array[i] >= 0)
            check[array[i]] = true;

        else
            check[array[i]] = false;
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }
    std::cout << ans << std::endl;
}