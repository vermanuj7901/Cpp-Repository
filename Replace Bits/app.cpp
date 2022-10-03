//written by anuj
#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int num,sum=0,i=1;
    while(n>0){
        num=n%10;
        sum+=(i*num);
        n/=10;
        i*=2;
    }
    return sum;
}

int decimalToBinary(int n){
    int num,sum=0,i=1;
    while(n>0){
        num=n%2;
        sum+=(i*num);
        n/=2;
        i*=10;
    }
    return sum;
}

int clearBitsRange(int n, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n&mask;
    return n;
}

void replaceBits(int n, int m, int i, int j){
    n = binaryToDecimal(n);
    m = binaryToDecimal(m);
    int mask = clearBitsRange(n, i, j);
    m = m<<i;
    int ans = (mask|m);
    ans = decimalToBinary(ans);
    cout<<"Your answer is: "<<ans<<endl;
}

int main(){
    int n, m, i, j;
    cout<<"Enter the value of n, m, i and j: ";
    cin>>n>>m>>i>>j;
    replaceBits(n, m, i, j);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)";
}