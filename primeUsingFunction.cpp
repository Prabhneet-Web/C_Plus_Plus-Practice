#include<iostream>
#include<math.h>
bool isPrime(int num);

int main(){

    int a,b;
    std::cin>>a>>b;
    
    if(a<=b){
    for(int i = a; i <= b; i++){
        if(isPrime(i))std::cout<<i<<" is a Prime Number."<<std::endl;
        else std::cout<<i<<" is not a Prime Number"<<std::endl;
        }
    }
    return 0;
}
bool isPrime(int num){
    bool isPrimeOrNot;

    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}