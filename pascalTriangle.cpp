#include<iostream>

int pascalTriangle(int num);

int32_t main(){

    int n;
    std::cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            std::cout<<pascalTriangle(i)/(pascalTriangle(i-j) * pascalTriangle(j))<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}

int pascalTriangle(int num){
    int factorial = 1; 
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    
    return factorial;
}
