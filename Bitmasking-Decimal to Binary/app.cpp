//written by anuj
#include<bits/stdc++.h>
using namespace std;

void convertionBinary(long long n){
    long long ans = 0;
    long long pow = 1;
    while(n>0){
        long long lastBit = (n&1);
        if(lastBit==1){
            ans+=(pow*lastBit);
        }
        pow*=10;
        n = n>>1;
    }
    cout<<"Binary form is: "<<ans<<endl;
}

int main(){
    long long n;
    cout<<"Enter a number to convert it into binary: ";
    cin>>n;
    convertionBinary(n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}