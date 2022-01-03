#include<iostream>

void fibonacci(int number);

int main(){
    int num;
    std::cin>>num;

    fibonacci(num);

    return 0;
}
void fibonacci(int number){
    int term1= 0, term2= 1;
    int nextTerm;
    
    for(int i = 1; i <= number; i++){
        std::cout<<term1<<" ";
        nextTerm = term1+term2;
        term1 = term2;
        term2= nextTerm;
    }
    std::cout<<std::endl;
}