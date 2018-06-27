#include<iostream>

void plus_num(){

    int a =0;
    int b =0;
    
    std::cout<<"Enter an a : ";
    std::cin>>a;
    
    std::cout<<"Enter an b : ";
    std::cin>>b;
    
    std::cout<<"a + b = " << a + b << std::endl;


}
void multiplication_num(){
    
    int a =0;
    int b =0;
    
    std::cout<<"Enter an a : ";
    std::cin>>a;
    
    std::cout<<"Enter an b : ";
    std::cin>>b;
    
    std::cout<<"a + b = " << a * b << std::endl;
    
    
}


int main(){
    
    char a ='d';
    
    std::cout<<"What a operation '+' or '* '?"<< std::endl;
    std::cin>>a;

    if(a=='+'){ plus_num();}
    else if (a=='*'){multiplication_num();}
    
    return 0;
}
