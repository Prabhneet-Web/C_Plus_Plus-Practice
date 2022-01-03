#include<iostream>

int octalToDecimal(int number);

int main(){

    int n;
    std::cin>>n;
    std::cout<<octalToDecimal(n)<<std::endl;

    return 0;
}
int octalToDecimal(int number){

    int ans = 0, x = 1;
    while (number>0)
    {
        int y = number%10;
        ans+= x*y;
        x*=8;
        number/=10;
    }

    return ans;    

}