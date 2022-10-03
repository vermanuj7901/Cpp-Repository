//written by anuj
#include<bits/stdc++.h>
using namespace std;

void fastExp(int a, int n){
    int ans = 1;
    int base = a, exp = n;
    while(n>0){
        int lastBit = (n&1);
        if(lastBit==1){
            ans*=a;
        }
        a*=a;
        n = n>>1;
    }
    cout<<base<<" to the power "<<exp<<" is: "<<ans;
}

int main(){
    int a, n;
    cout<<"Enter base and exponent: ";
    cin>>a>>n;
    fastExp(a, n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}