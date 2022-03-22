#include <iostream>

int main()
{
    int row, column;
    std::cin >> row >> column;

    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    // Spiral Order Logic
    int row_start = 0, row_end = row - 1, column_start = 0, column_end = column - 1;

    while (row_start <= row_end && column_start <= column_end)
    {
        // For Row Start
        for (int cols = column_start; cols <= column_end; cols++)
        {
            std::cout << arr[row_start][cols] << " ";
        }
        row_start++;

        // For Column End
        for (int rows = row_start; rows <= row_end; rows++)
        {
            std::cout << arr[rows][column_end] << " ";
        }
        column_end--;

        // For Row End
        for (int cols = column_end; cols >= column_start; cols--)
        {
            std::cout << arr[row_end][cols] << " ";
        }
        row_end--;

        // For Column Start
        for (int rows = row_end; rows >= row_start; rows--)
        {
            std::cout << arr[row][column_start] << " ";
        }
        column_start++;
    }
}