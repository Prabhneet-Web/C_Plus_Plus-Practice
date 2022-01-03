#include<iostream>

int main(){

    int num;
    std::cin>>num;

    for(int i = num; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }

    return 0;
}