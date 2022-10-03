//written by anuj
#include<bits/stdc++.h>
using namespace std;

void countSetBits(int n){
    int count = 0;
    while(n>0){
        count += (n&1);
        n = n>>1;
    }
    cout<<"Number of set bits are: "<<count<<endl;
}

int main(){
    int n;
    cout<<"Enter a number to calculate its set bits: ";
    cin>>n;
    countSetBits(n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}