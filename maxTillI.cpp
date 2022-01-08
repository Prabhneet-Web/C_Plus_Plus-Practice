#include <iostream>

int main()
{

    int size;
    std::cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    int maxTillI = INT_MIN;
    int temp;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxTillI)
        {
            maxTillI = arr[i];
            temp = maxTillI;
        }
        else
        {
            arr[i] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}