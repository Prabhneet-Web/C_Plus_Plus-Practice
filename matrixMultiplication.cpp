#include <iostream>

int main()
{

    int n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;

    int arr1[n1][n2], arr2[n2][n3];
    int result[n1][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            std::cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            std::cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}