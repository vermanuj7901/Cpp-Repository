/*written by anuj*/
#include<iostream>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"Enter your operation with integers: ";
    cin>>a>>c>>b;
    switch(c){
        case '+':
        cout<<"|_"<<a<<"+"<<b<<"="<<a+b<<"_|";
        break;

        case '-':
        cout<<"|_"<<a<<"-"<<b<<"="<<a-b<<"_|";
        break;
        
        case '*':
        cout<<"|_"<<a<<"*"<<b<<"="<<a*b<<"_|";
        break;
        
        case '/':
        cout<<"|_"<<a<<"/"<<b<<"="<<a/b<<"_|";
        break;
        
        case '%':
        cout<<"|_"<<a<<"%"<<b<<"="<<a%b<<"_|";
        break;

        default:
        cout<<"Enter a valid statement";        
    }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}