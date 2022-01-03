#include<iostream>

int factorial(int number);

int main(){

    int num;
    std::cin>>num;
    std::cout<<factorial(num)<<std::endl;
}
int factorial(int number){
    int fact = 1;
    for(int i= 1; i <= number; i++){
        fact *= i;
    }
    return fact;
}