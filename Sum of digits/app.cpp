/*written by anuj*/
#include<iostream>
using namespace std;

int sumOfDigits(int a){
    int b,sum=0;
    while(a>0){
        b=a%10;
        sum+=b;
        a/=10;
    }
    return sum;
}

int main(){
    int x;
    cout<<"Enter an integer to find sum of its digits: ";
    cin>>x;
    cout<<"\nSUM="<<sumOfDigits(x)<<endl;
    cout<<"\n----Thank you for using the application (Written by Anuj Verma)----"<<endl;
    return 0;
}