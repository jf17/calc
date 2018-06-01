#include<iostream>

using namespace std;


void plus_num(){

    int a =0;
    int b =0;
    
    cout<<"Enter an a : ";
    cin>>a;
    
    cout<<"Enter an b : ";
    cin>>b;
    
    cout<<"a + b = " << a + b << endl;


}
void multiplication_num(){
    
    int a =0;
    int b =0;
    
    cout<<"Enter an a : ";
    cin>>a;
    
    cout<<"Enter an b : ";
    cin>>b;
    
    cout<<"a + b = " << a * b << endl;
    
    
}


int main(){
    
    char a ='d';
    
    cout<<"What a operation '+' or '* '?"<< endl;
    cin>>a;

    if(a=='+'){ plus_num();}
    else if (a=='*'){multiplication_num();}
    
    return 0;
}
