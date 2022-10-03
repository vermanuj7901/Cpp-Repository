//written by anuj
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans = n;
    if(n==0){
        return 1;
    }
    else{
        ans = ans*fact(n-1);
        return ans;
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<n<<"! = "<<fact(n)<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA) "<<endl;
}