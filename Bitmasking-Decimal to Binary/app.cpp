//written by anuj
#include<bits/stdc++.h>
using namespace std;

void convertionBinary(int n){
    int ans = 0;
    int pow = 1;
    while(n>0){
        int lastBit = (n&1);
        if(lastBit==1){
            ans+=(pow*lastBit);
        }
        pow*=10;
        n = n>>1;
    }
    cout<<"Binary form is: "<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter a number to convert it into binary: ";
    cin>>n;
    convertionBinary(n);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}