#include<iostream>

int main(){

    int pocketMoney = 3000;

    for(int days = 1; days <= 30; days++){
        if(days % 2 == 0) continue; 
        else std::cout<<"You can go on: "<<days<<std::endl; 

        pocketMoney -= 300;
        if(pocketMoney == 0){
            break;
        }

    }

    return 0;
}