#include<iostream>

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);

    int rows, columns;
    std::cin>>rows>>columns;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }

    return 0;
}