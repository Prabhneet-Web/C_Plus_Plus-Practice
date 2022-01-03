#include<iostream>

int main(){

    int num;
    std::cin>>num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num-i; j++){
            std::cout<<"  ";
        }
        for(int j = i; j >= 1; j--){
            std::cout<<j<<" ";
        }
        for(int j = 2; j <= i; j++){
            std::cout<<j<<" ";   
        }
        std::cout<<std::endl;
    }

    return 0;
}