#include<iostream>

int main(){

    int number;
    std::cin>>number;

    do{
        std::cout<<number<<std::endl;
        std::cin>>number;
    } while (number > 0);

    return 0;

}