#include<iostream>

int main(){

    int number;
    std::cin>>number;

    for(int i = 1; i <= number; i++){
        if(i % 3 ==0) continue;
        else std::cout<<i<<" ";
    }

    return 0;

}