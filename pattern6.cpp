#include<iostream>

int main(){
    int num, sum = 1;
    std::cin>>num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            std::cout<<sum<<" ";
            sum++;
        }
        
        std::cout<<std::endl;
    }
}