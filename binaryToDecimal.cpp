#include<iostream>
int binaryToDecimal(int number);

int32_t main(){

    int num;
    std::cin>>num; 

    std::cout<<binaryToDecimal(num)<< std::endl;

    return 0;
}

int binaryToDecimal(int number){
    int ans= 0;
    int x = 1;
    while (number>0)
    {
        int y = number%10;
        ans += x*y;
        x*=2;
        number/=10;
    }
    return ans;
    
}