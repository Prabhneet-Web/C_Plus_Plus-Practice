#include<iostream>

int decimalToBinary(int n);

int32_t main(){
    int n;
    std::cin>>n;

    std::cout<<decimalToBinary(n)<<std::endl;

}
int decimalToBinary(int n){
    int x=1;
    int ans=0;
    
    while (x<=n) x*=2;
    x/=2;

    while(x>0){
        int lastDigit = n/x;
        n-=lastDigit * x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
    
}