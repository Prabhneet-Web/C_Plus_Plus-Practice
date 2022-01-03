#include<iostream>

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    std::cin>>n;

    int sum =0;
    for(int i = 1; i <= n; i++){
        sum+=i;
    }
    std::cout<<"The Sum of "<<n<<" numbers is: "<<sum<<std::endl;

    return 0;
}