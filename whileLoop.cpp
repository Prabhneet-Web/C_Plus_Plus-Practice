#include<iostream>

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int i=0;
    int number;
    std::cin>>number;
    while(number > 0){
        number/=2;
        i++;
    }
    std::cout<<i<<std::endl;
}