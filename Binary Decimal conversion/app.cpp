/*written by anuj*/
#include<iostream>
using namespace std;

void binaryToDecimal(int n){
    int num,sum=0,i=1;
    while(n>0){
        num=n%10;
        sum+=(i*num);
        n/=10;
        i*=2;
    }
    cout<<"|_"<<sum<<"_|"<<endl;
}

void decimalToBinary(int n){
    int num,sum=0,i=1;
    while(n>0){
        num=n%2;
        sum+=(i*num);
        n/=2;
        i*=10;
    }
    cout<<"|_"<<sum<<"_|"<<endl;
}

int main(){
    int a,b,z;
    cout<<"-------MENU------- \n1.Binary To Decimal \n2.Decimal To Binary \n3.Exit "<<endl;
    cout<<"Enter your option: ";
    cin>>z;
        switch(z){
            case 1:
            cout<<"\nEnter a Binary number: ";
            cin>>a;
            binaryToDecimal(a);
            break;

            case 2:
            cout<<"\nEnter a Decimal number: ";
            cin>>b;
            decimalToBinary(b);
            break;

            case 3:
            exit(0);

            default:
            cout<<"******ERROR******"<<endl;
            cout<<"Enter a valid choice"<<endl;
        }
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}