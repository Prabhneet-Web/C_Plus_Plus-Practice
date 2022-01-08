#include <iostream>

int difference(int a, int b);
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

    for (int i = 0; i < size - 1; i++)
    {
        if (difference(array[i], array[i + 1]) == difference(array[i + 1], array[i + 2]))
            counter++;
    }
    std::cout << counter << std::endl;
}
int difference(int a, int b)
{
    return b - a;
}