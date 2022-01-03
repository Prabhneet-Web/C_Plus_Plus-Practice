#include<iostream>

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int number;
    std::cin>>number;

    if(number % 2 ==0) std::cout<<"Even";
    else std::cout<<"Odd";

}