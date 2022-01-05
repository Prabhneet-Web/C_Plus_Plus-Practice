// #include <iostream>

// int main()
// {
//     int size;
//     std::cin >> size;

//     int arr[size];

//     for (int i = 0; i < size; i++)
//     {
//         std::cin >> arr[i];
//     }

//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             int temp;
//             if (arr[j] < arr[i])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         std::cout << arr[i] << " ";
//     }
// }

// Or
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
    int counter = 1;
    while (counter < size)
    {
        for (int i = 0; i < (size - counter); i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
}

// Both the Solutions are valid!