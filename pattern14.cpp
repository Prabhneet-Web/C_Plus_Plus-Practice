#include<iostream>

int main(){

    int num;
    std::cin>>num;

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= num; j++){
            if((i + j) % 4 ==0) std::cout<<"* "; 
            else if( i == 2 && j % 4==0) std::cout<<"* ";
            else std::cout<<"  ";
        }
        std::cout<<std::endl;
    }

    return 0;
}