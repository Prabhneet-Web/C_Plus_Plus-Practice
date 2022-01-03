#include<iostream>

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a,b,c;
    std::cin>>a>>b>>c;

    if(a > b){
        if(a > c) std::cout<<"A is Max";
        else std::cout<<"C is Max";
    }
    else{
        if(b>c) std::cout<<b;
        else std::cout<<c; 
    }

    return 0;

}