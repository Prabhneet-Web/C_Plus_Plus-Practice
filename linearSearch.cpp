#include <iostream>

int linearSearcher(int arrayOf[], int size, int keyOf);

int main()
{

    int size;
    std::cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    int key;
    std::cin >> key;

    std::cout << linearSearcher(array, size, key) << std::endl;

    return 0;
}

int linearSearcher(int arrayOf[], int size, int keyOf)
{

    for (int i = 0; i < size; i++)
    {
        if (arrayOf[i] == keyOf)
            return i;
    }
    return -1;
}