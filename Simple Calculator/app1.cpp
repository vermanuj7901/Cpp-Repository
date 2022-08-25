/*written by anuj*/
#include<iostream>
using namespace std;

int addition(int a, int b){
    return a+b;
}

int substraction(int a, int b){
    return a-b;
}

int multiplication(int a, int b){
    return a*b;
}

void division(int a, int b){
    float c=1.00*a/b;
    cout<<c;
}

int main(){
    int x,y,z;
    do{
        cout<<"\n\nEnter two integers: ";
        cin>>x>>y;
        cout<<"-------MENU------- \n1.Addition \n2.Substraction \n3.Multiplication \n4.Division \n5.Exit"<<endl;
        cout<<"\nEnter your option: ";
        cin>>z;
            switch(z){
                case 1:
                cout<<"|_"<<x<<"+"<<y<<"="<<addition(x,y)<<"_|";
                break;

                case 2:
                cout<<"|_"<<x<<"-"<<y<<"="<<substraction(x,y)<<"_|";
                break;

                case 3:
                cout<<"|_"<<x<<"*"<<y<<"="<<multiplication(x,y)<<"_|";
                break;

                case 4:
                cout<<"|_"<<x<<"/"<<y<<"=";
                division(x,y);
                cout<<"_|";
                break;

                case 5:
                exit(0);

                default:
                cout<<"******ERROR******"<<endl;
                cout<<"Enter a valid choice"<<endl;
            }
        }
    while(z!=5);
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}
