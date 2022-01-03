#include<iostream>

int main(){

    char vowels;
    std::cout<<"Enter the char: ";
    std::cin>>vowels;

    switch (vowels)
    {
    case 'a':
        std::cout<<"'a' is a vowel"<<std::endl;
        break;
    case 'e':
        std::cout<<"'e' is a vowel"<<std::endl;
        break;
    case 'i':
        std::cout<<"'i' is a vowel"<<std::endl;
        break;
    case 'o':
        std::cout<<"'o' is a vowel"<<std::endl;
        break;
    case 'u':
        std::cout<<"'u' is a vowel"<<std::endl;
        break;           
    default:
        std::cout<<"'"<<vowels<<"' is a consonant"<<std::endl;
        break;
    }
    
    return 0;
}