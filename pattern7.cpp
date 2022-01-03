#include<iostream>

int main(){

    int num;
    std::cin>>num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= 2*num; j++){
            if(j <= i || j >= 2*num - i + 1) std::cout<<"* ";
            else std::cout<<"  ";
        }
        std::cout<<std::endl;
    }
    for(int i = num; i >= 1; i--){
        for(int j = 1; j <= 2*num; j++){
            if(j <= i || j >= 2*num - i + 1) std::cout<<"* ";
            else std::cout<<"  ";
        }
        std::cout<<std::endl;
    }

    return 0;
}