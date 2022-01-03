#include<iostream>

int main(){

    int num;
    std::cin>>num;

    for (int i = 1; i <= num; i++){
        for(int j = 1; j <= num-i; j++){
            std::cout<<" ";
        }
        for(int j = 1; j <= num; j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    

    return 0;
}