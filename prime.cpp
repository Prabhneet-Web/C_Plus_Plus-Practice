#include<iostream>
#include<cmath>

int main(){

    int number,i;
    bool flag = 0;
    std::cin>>number;
    for(i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            flag=1;
            std::cout<<"The Number "<<number<<" is not a prime number"<<std::endl;
            break;
        }
    }
    if(flag == 0)
    std::cout<<"The Number "<<number<<" is a prime number"<<std::endl;

    return 0;

}