#include <iostream>

int main()
{
    int amountGivenByDad, amountGivenByMom;
    std::cout << "Enter the amount given by dad: ";
    std::cin >> amountGivenByDad;

    std::cout << "Enter the amount given by mom: ";
    std::cin >> amountGivenByMom;

    std::cout << "Total amount given: " << amountGivenByDad + amountGivenByMom << std::endl;
}