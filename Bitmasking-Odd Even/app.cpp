//written by anuj
#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int ans = n&1;
    if(ans%10==0){
        cout<<"\nNumber is even."<<endl;
    }
    else{
        cout<<"\nNumber is odd."<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number to check if it even or odd: ";
    cin>>n;
    solve(n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}