//written by anuj
#include<bits/stdc++.h>
using namespace std;

void fastExp(int x, int y){
    int q = 0;
    while(x>=y){
        x-=y;
        q++;
    }
    cout<<"Quotient is: "<<q<<" and remainder is: "<<x<<endl;
}

int main(){
    int x, y;
    cout<<"Enter the dividend and divisor: ";
    cin>>x>>y;
    fastExp(x, y);
    cout<<"\nThank You for using the application (Written by ANUJ VERMA)"<<endl;
}