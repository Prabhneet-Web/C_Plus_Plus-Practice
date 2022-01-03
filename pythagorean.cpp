#include<iostream>

bool check(int x, int y, int z);

int32_t main(){

    int a,b,c;
    std::cin>>a>>b>>c;

    if (check(a,b,c)) std::cout<<"Pythagorean triplet"<<std::endl;
    else std::cout<<"Not a Pythagrean Triplet"<<std::endl;   

    return 0;
}

bool check(int x,int y, int z){

    int a,b,c;
    a = std::max(x, std::max(y,z));
    if(a==x) {
        b=y; 
        c=x;
        }
    else if(a==y){
        b=x; 
        c=z;
        }
    else {
        b=x; 
        c=y;
        }
    if(a*a == (b*b + c*c)) return true;
    else return false;


}