#include <iostream>

void fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;

    for (int i = 1; i <= n; i++)
    {
        std::cout << t1 << std::endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main()
{
    int num;
    std::cin >> num;

    fibonacci(num);
}