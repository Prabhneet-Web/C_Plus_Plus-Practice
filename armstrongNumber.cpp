#include<iostream>
#include<math.h>

int main(){

    int num, temp, armStrong = 0;
    std::cin>>num;

    bool flag=0;

    temp = num;
    while (temp > 0)
    {
        int lastDigitCube = temp % 10;
        armStrong += pow(lastDigitCube,3);
        temp /= 10;
        if(armStrong == num) flag = 1;
    }
    
    if (flag == 1) std::cout<<"ArmStrong"<<std::endl;
    else std::cout<<"Not a ArmStrong"<<std::endl;    

    return 0;
}