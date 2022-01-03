#include <iostream>

int main()
{
    int rupees = 15;
    int numberOfWrappers = 15;
    int numberOfChocolates = 15;
    while (numberOfWrappers > 2)
    {

        if (numberOfWrappers >= 3)
        {
            numberOfWrappers -= 3;
            numberOfChocolates++;
            numberOfWrappers++;
        }
    }
    std::cout << numberOfChocolates << std::endl;
}
