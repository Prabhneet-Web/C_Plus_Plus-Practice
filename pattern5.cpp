#include<iostream>

int main(){

    int num;
    std::cin>>num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}