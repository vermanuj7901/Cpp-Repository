//written by anuj
#include<bits/stdc++.h>
using namespace std;

void powerOfTwo(int n){
    int m = n-1;
    if((n&m)==0){
        cout<<"Yes, it is a power of two."<<endl;
    }
    else{
        cout<<"No, it is not a power of two."<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a natural number to check whether the number is a power of two or not: ";
    cin>>n;
    powerOfTwo(n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}