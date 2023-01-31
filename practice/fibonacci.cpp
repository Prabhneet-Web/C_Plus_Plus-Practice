#include <iostream>

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        std::cout << a << std::endl;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}

int main()
{
    int num;
    std::cin >> num;

    fibonacci(num);
}