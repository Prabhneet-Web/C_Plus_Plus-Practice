#include<iostream>

int hexadecimalToDecimal(std::string n);

int32_t main(){

    std::string n;
    std::cin>>n;

    std::cout<<hexadecimalToDecimal(n)<<std::endl;



    return 0;
}

int hexadecimalToDecimal(std::string n){
    int ans = 0;
    int x = 1;

    int s = n.size();
    for(int i = s-1; i >= 0; i--){
        if(n[0] >= '0' && n[i] <= '9'){
            ans += x*(n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i] - 'A' + 10);
        }
        x*=16;

    }
    return ans;
}