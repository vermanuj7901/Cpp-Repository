//written by anuj
#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n) {
    int ans = 0;
    if(n<10){
        return n;
    }
    else{
        ans+=(sumOfDigit(n%10)+sumOfDigit(n/10));
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The sum digits is: "<<sumOfDigit(n)<<endl;
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
    return 0;
}