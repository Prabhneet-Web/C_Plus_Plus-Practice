#include<iostream>

int main(){

    int rows,column;
    std::cin>>rows>>column;

    for(int i = 1; i<= rows; i++){
        for(int j = 1; j <= column; j++){
            if(i == 1 || i == rows || j == 1 || j == column) std::cout<<"* ";
            else std::cout<<"  ";
            }
            
            std::cout<<std::endl;
        }
         return 0;
    }
