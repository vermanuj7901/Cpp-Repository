//written by anuj
#include<bits/stdc++.h>
using namespace std;

int solve(int n, int i){
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0; 
}

int main(){
    int n, i;
    cout<<"Enter a number to check its ith bit: ";
    cin>>n;
    cout<<"\nNow enter the value of i: ";
    cin>>i;
    cout<<endl;
    cout<<solve(n, i)<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}