#include <iostream>

int main()
{
    int row;
    std::cin >> row;

    int arr[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < row; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}