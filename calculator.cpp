#include<iostream>

int main(){

    int n1,n2;
    std::cin>>n1>>n2;

    char op;
    std::cout<<"Enter an operator: ";
    std::cin>>op;

    switch (op)
    {
    case '+':
        std::cout<<n1+n2<<std::endl;
        break;
    case '-':
        std::cout<<n1-n2<<std::endl;
        break;
    case '*':
        std::cout<<n1*n2<<std::endl;
        break;
    case '/':
        std::cout<<n1/n2<<std::endl;
        break;
    default:
        std::cout<<"Enter another operator.";
        break;
    }

return 0;
}