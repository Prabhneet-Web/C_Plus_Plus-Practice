#include<iostream>

std::string decimalToHexadecimal(int n);

int32_t main(){

    int n;
    std::cin>>n;

    std::cout<<decimalToHexadecimal(n)<<std::endl;

    return 0;
}
std::string decimalToHexadecimal(int n){
    int x = 1;
    std::string ans = "";
    while(x<=n) x*=16;
    x/=16;

    while (x>0)
    {
        int lastDigit = n/x;
        n-=lastDigit * x;
        x/=16;

        if (lastDigit <= 9) ans += std::to_string(lastDigit);
        else {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
        
   }
   return ans;
    
}