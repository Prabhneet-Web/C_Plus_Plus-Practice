#include<iostream>

int main(){

    char button;
    std::cout<<"Input a character: ";
    std::cin>>button;

    switch(button){    
        case 'a':
            std::cout<<"Hello"<<std::endl;
            break;
        case 'b': 
            std::cout<<"Namaste"<<std::endl;
            break;
        case 'c':
            std::cout<<"Hola"<<std::endl;
            break;
        case 'd': 
            std::cout<<"Salute"<<std::endl;
            break;
        case 'e':
            std::cout<<"Ciao"<<std::endl;
            break;
        default:
            std::cout<<"I'm Still Learning."<<std::endl;
            break; 
    }               
    return 0;
}