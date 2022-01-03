#include <iostream>

int main(){

    int a,b,i;
    std::cin>>a>>b;

    if(a<b){
        for(int num = a; num <= b; num++){
            for(i = 2; i< num; i++){
                if(num % i == 0){
                    break;
                }
            }
            if(i == num) std::cout<<num<<std::endl; 
        }
    }
    return 0;

}