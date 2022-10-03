//written by anuj
#include<bits/stdc++.h>
using namespace std;

void multiBit(int x){
    int n = x;
    int ans = x;
    while(n>1){
        ans+=x;
        n--;
    }
    cout<<"Square of "<<x<<" is: "<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    multiBit(n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}