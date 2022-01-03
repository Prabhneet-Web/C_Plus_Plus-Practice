#include<iostream>

int main(){

    int num;
    std::cin>>num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j<= num;j++){
            if(j<= num-i)std::cout<<"  ";
            else std::cout<<"* ";
        }
        std::cout<<std::endl;
    }

    return 0;
}