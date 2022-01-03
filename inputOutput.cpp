#include<iostream>
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a,b;
    std::cin>>a>>b;
    std::cout<<"Sum of a & b: "<< a+b;

    return 0;
}