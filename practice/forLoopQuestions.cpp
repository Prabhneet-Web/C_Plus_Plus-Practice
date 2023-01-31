#include <iostream>

// int main()
// {

//     for (int i = 0; i <= 5; i++)
//     {
//         std::cout << i << " ";
//         i++;
//     }
// }

// int main()
// {
//     for (int i = 0; i <= 5; i--)
//     {
//         std::cout << i << ' ';
//         i++;
//     }
// }

int main()
{

    for (int i = 0; i <= 15; i += 2)
    {
        std::cout << i << " ";
        if (i & 1)
        {
            continue;
        }

        i++;
    }
}