#include <iostream>

int main()
{
    int rows, columns;
    std::cin >> rows >> columns;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cin >> arr[rows][columns];
        }
    }

    // Spiral Order Print
    int row_start = 0, row_end = rows - 1, column_start = 0, column_end = columns - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        // for row_start
        for (int col = column_start; col <= column_end; col++)
        {
            std::cout << arr[row_start][col] << " ";
        }
        row_start++;

        // for column_end
        for (int row = row_start; row <= row_end; row++)
        {
            std::cout << arr[row][column_end] << " ";
        }
        column_end--;

        // for row end
        for (int col = column_end; col >= column_start; col--)
        {
            std::cout << arr[row_end][col] << " ";
        }
        row_end--;

        // for column start
        for (int row = row_end; row >= row_start; row--)
        {
            std::cout << arr[row][column_start] << " ";
        }
        column_start++;
    }
}