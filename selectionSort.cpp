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

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
