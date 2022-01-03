#include<iostream>

int decimalToOctal(int n);

int32_t main(){
    int n;
    std::cin>>n;

    std::cout<<decimalToOctal(n)<<std::endl;
}

int decimalToOctal(int n){
    int x = 1;
    int ans = 0;
    while(x <= n)
        x *= 8;
    x/=8;

    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit * x;
        x/=8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}