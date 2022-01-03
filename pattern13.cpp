#include<iostream>

    int main(){
        int num;
        std::cin>>num;

        for(int i = 1; i <=num; i++){
            for(int j = 1; j <= num-i; j++){
                std::cout<<"  ";
            }
            for(int j = 1; j <= 2*i - 1; j++){
                std::cout<<"* ";
            }
            std::cout<<std::endl;
        }
        for(int i = 1; i <= num; i++){
            for(int j = 1; j <= i -1; j++){
                std::cout<<"  ";
            }
            for(int j = 2 * num - 2* i +1; j >= 1; j--){
                std::cout<<"* ";
            }
            std::cout<<std::endl;
        }
    }
