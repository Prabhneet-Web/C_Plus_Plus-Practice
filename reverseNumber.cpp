#include<iostream>

int main(){

    int reverse = 0, num;
    std::cin>>num;

    while (num > 0)
    {
        int lastDigit = num%10;
        reverse = (reverse * 10) + lastDigit;
        num /= 10;
    }
    std::cout<<reverse<<std::endl;
    
    


    return 0;
}