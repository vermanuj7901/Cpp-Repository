//written by anuj
#include<bits/stdc++.h>
using namespace std;

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<",";
}

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<",";
    dec(n-1);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Increasing order: ";
    inc(n);
    cout<<endl;
    cout<<"Decreasing order: ";
    dec(n);
    cout<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
}
