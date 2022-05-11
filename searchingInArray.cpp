#include <iostream>

int main()
{
    int m, n;
    std::cin >> m >> n;
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    std::cout << "Enter the key: ";

    int key;
    std::cin >> key;
    bool flag = false;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (key == arr[i][j])
                std::cout << "found!\n";
            flag = true;
        }
    }
    if (flag == false)
        std::cout << "not-found\n";+
        
}