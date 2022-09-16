//written by anuj
#include<bits/stdc++.h>
using namespace std;

void clearBitsRange(int n, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n&mask;
    cout<<"\nYour answer is: "<<n<<endl;
}

int main(){
    int n, i, j;
    cout<<"Enter your number and the value of i and j: ";
    cin>>n>>i>>j;
    clearBitsRange(n, i, j);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}