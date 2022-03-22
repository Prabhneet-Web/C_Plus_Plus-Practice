#include <iostream>

int binarySearcher(int arr[], int size, int key);

int main()
{

    int size;
    std::cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    int key;
    std::cin >> key;

    std::cout << binarySearcher(arr, size, key) << std::endl;
}
int binarySearcher(int arr[], int size, int key)
{

    int startingPoint = 0, endingPoint = size - 1;

    while (startingPoint <= endingPoint)
    {
        int midNumber = (startingPoint + endingPoint) / 2;
        if (arr[midNumber] == key)
        {
            return midNumber;
        }
        else if (arr[midNumber] < key)
        {
            startingPoint = midNumber + 1;
        }
        else
        {
            endingPoint = midNumber - 1;
        }
    }
    return -1;
}
