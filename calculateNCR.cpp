#include<iostream>

int NCR(int num);

int main(){

    int n,r;
    std::cin>>n>>r;

    std::cout<<NCR(n)/(NCR(n-r) * NCR(r))<<std::endl;

    return 0;
}
int NCR(int num){
    int nValue = 1;
    for(int i = 1; i <= num; i++){
        nValue *= i;
    } 
    return nValue;
}