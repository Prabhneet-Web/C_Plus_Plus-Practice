#include <iostream>

int main()
{
    int a;  // declaration
    a = 12; // initialization
    std::cout << "Size of int " << sizeof(a) << std::endl;

    float b;
    std::cout << "Size of float " << sizeof(b) << std::endl;

    char c;
    std::cout << "Size of char " << sizeof(c) << std::endl;

    bool d;
    std::cout << "Size of bool " << sizeof(d) << std::endl;

    short int si;
    long int li;
    std::cout << "Size of short int and long int " << sizeof(si) << " & " << sizeof(li) << std::endl;
}